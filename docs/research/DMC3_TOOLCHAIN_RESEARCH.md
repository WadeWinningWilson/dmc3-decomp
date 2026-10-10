# DMC3 PS2 — Toolchain Research

## 1. Verdict (provisional)

| Item | Finding | Confidence |
|---|---|---|
| Compiler family | Metrowerks CodeWarrior for PS2 (`mwccps2`) | **High**. The linker stamp, 16-byte function alignment, `sd`/`lq` save idiom and MW RTTI all point here, and the PoC matches. |
| Compiler build (game code) | **3.0bNN line: `mwcps2-3.0b52-030722`** (tied with 3.0b38-030307 and 3.0b50-030527) | **Medium-high**. It is the only line that matches 9/10 (§3). 3.0b38 is also what Capcom's SF3: 3rd Strike PS2 decomp uses. |
| Flags | **`-O3,p -fl divbyzerocheck`, with the default `-sdatathreshold 8`.** Integer division gets a `break 7` trap (`CMovie::Update`), the same as Capcom's SF3 flags. Game code makes 4,007 `$gp` accesses to ≤8-byte strings and objects, verified on `func_001AAA00`. Earlier drafts said `-sdatathreshold 0`, but the PoC functions didn't touch small data, so they couldn't tell. | High |
| Language | **C++ with `-Cpp_exceptions off`** (`-lang c++`). MW only emits frameless tail calls (`j`) with EH off, which the game does (`CMovie::SetMaxVolume`). All existing C++ matches also hold with EH off. | High |
| Calls through tables | Indirect calls through **`$v0`** are C function tables (CRI-style handles); MW C++ virtual calls always use **`$t9`** (every build tested). | High |
| Linker | `mwldps2` 2.4.1.01 generation | High |
| Libraries | SCE SDK 2.8.0 and CRI ADX/Sofdec (Oct 2004) are **ee-gcc** (0x100000–0x195130), `-O2 -G0`; the exact version is still open | **High** for gcc, medium for the version |

## 2a. Two compilation populations (key finding)

The executable was built with **two toolchains**. The boundary in USA is sharp:

| USA range | Compiler | Evidence |
|---|---|---|
| 0x100000–0x195130 (about 5,000 funcs) | **ee-gcc** (2.96 or 3.2, `-O2 -G0`) | 1,113 "frame + tail-call `j`" functions, a GCC sibcall artefact. Functions are 8-byte aligned. `func_00190BC8` matches ee-gcc 2.96 `-O2` (C) and 3.2 `-O2`/`-Os`. |
| 0x195158–0x50FF08 (about 9,600 funcs) | **MW 3.0bNN, C++ with exceptions** | No "frame + `j`" at all, while 1,400+ functions end in `jal`→return. That is exactly the MW C++/EH shape (exceptions **off** removes the frame). Functions are 16-byte aligned. |

The GCC block is **third-party library code**, identified from the strings each function references:

| USA range (approx.) | Library |
|---|---|
| 0x100000–0x12FFFF | SCE SDK 2.8.0 (libdma, libmpeg, libcdvd, libpad, …) and C++ runtime support |
| ~0x130BF0 | Capcom `cp*` DMA queue (`cpDmaStartQueue`) |
| 0x13EC00–0x161FFF | CRI ADX, cvFs, SJ/SJX, DTX, SRD, PS2RNA |
| 0x171000–0x195130 | CRI Sofdec (`mwPly*`, `mwSfd*`, SFX) |
| 0x50FE28–0x50FF08 | 2 USA-only functions in GCC style (clock or minutes/seconds code). Their origin is still to be determined. |

Consequences:
- **The game code to decompile is 0x195158–0x50FF08** (MW). The GCC block can be
  matched separately or kept as asm. sfiii-decomp has already decompiled CRI
  ADX/Sofdec with ee-gcc 2.96 `-O2 -G0`, but its CRI versions differ, so reuse it
  with care (`cri-funcs.json`, `cri-progress.md`).
- Running ee-gcc: the binaries are i386 Linux. They need `libc6:i386` (in the
  `dmc3-build` image) and must run from container-local storage, because 32-bit
  `stat()` overflows on the Windows bind mount (`tools/eegcc.sh`).
- The "frame kept around a tail call" blocker below is therefore **resolved**. It was
  never MW output.

## 2. Why `.comment` does not identify the compiler

The ELF's `.comment` reads `MW MIPS C Compiler (2.4.1.01)`. DMC1's decomp.me
preset (`mwcps2-2.4-001213`) was chosen partly from the same string. However,
grepping every downloaded toolchain shows this:

| Package | `mwccps2.exe` string | `mwldps2.exe` string |
|---|---|---|
| mwcps2-2.3.3-000906 | 2.3.1.01 | **2.4.1.01** |
| mwcps2-2.4-001213 | 2.4.1.01 | **2.4.1.01** |
| mwcps2-3.0.1b119-040914 | 3.0.0 | **2.4.1.01** |

The linker writes `.comment`, and it is the same across all generations. The
compiler can only be identified from codegen.

## 3. Codegen experiment (ten-function PoC, JP addresses)

Source: `src/poc/poc.c`. Verifier: `tools/funcdiff.py`, which compares bytes with
relocation fields masked. Flags: `-O3,p -sdatathreshold 0`. All 17 builds were run
with the final source (`tools/poc_check.sh <id> "<flags>"`).

| Build line | Builds | Matched | Fails on |
|---|---|---|---|
| 2.x | 2.3.3-000906, 2.4-001213 | 6/10 | `0022C820` (store order), `003B6090` (delay slot), `003B4F00` |
| early 3.0 | 3.0-011126, 3.0.1-020123 | 7/10 | `0024E2B0` (load hoisting), `003B4F00` |
| 3.0.1bNN | b44, b51, b74, b75, b87, b103, 3.0.3 | 8/10 | `003B4F00`: global loaded through `lui $v1` instead of `lui $at` |
| 3.0.1bNN outliers | b95 / b119, b145 | 7/10 | `0022C820` / `003B6090` |
| **3.0bNN** | **3.0b38-030307, 3.0b50-030527, 3.0b52-030722** | **9/10** | only `00190BC8` |

Conclusions:
1. **2.x is ruled out for game code**, even though DMC1's preset uses 2.4.
2. The `$at` register choice in `003B4F00` appears **only** in the 3.0bNN line. That
   line was the "3.0 beta" branch: b38 dates from Mar 2003 and b52 from Jul 2003.
3. b52 is the provisional pick as the newest build of that line. Telling b38, b50
   and b52 apart needs more discriminating functions: switch/jump tables, float
   code, loops with unrolling, and C++ (vtables, ctors/dtors, EH).
4. `-O0`, `-O1` and `-O2` match nothing. Level 3 or higher is required (scheduling and tail calls).
5. A verifier bug was found and fixed during this work. MW emits one `.text` section
   per function, and relocation masking had been comparing section objects by identity. An
   earlier draft of this table, which favoured 3.0.1b103, was produced with that bug.

### ~~Open codegen problem: frame kept around a tail call~~ RESOLVED (see §2a: GCC-built library code)
`func_00190BC8` and USA `func_0050FE28` allocate a frame, save and restore `$ra`,
and then `j` (tail call) to the callee. None of the 17 builds, `-O3`/`-O4`, `,p`/`,s`, `-inline off` or C/C++ reproduces it.
C omits the frame, and C++ emits `jal`+`jr`. This compiler has no per-pass `-opt` sub-switches. The pattern is common, so it matters.
Hypotheses to test, in order:
- Per-file pragmas (`#pragma optimization_level`, `#pragma auto_inline`).
- The callee is inline in a header, and the frame is left over from an inlined call.
- The real callee signature, for example a C++ member function with a hidden `this`, or a 64-bit or struct argument.
- A compiler build not in the decomp.me archive.

## 4. How the compiler is run

The MW executables fail a **FlexLM license check** when run natively on Windows.
Existing projects (decomp.me, sfiii-decomp, recvx-decomp) all run them under
**wibo** (`decompals/wibo`), which provides its own license-manager stand-in
(`dll/lmgr.cpp`). This project does the same:

```
docker run --rm -v "$PWD":/w -w /w ubuntu:22.04 \
  sh -c "MWCIncludes=. tools/wibo/wibo tools/compilers/<id>/mwccps2.exe -c <flags> -nostdinc -o out.o in.c"
```

- wibo 1.2.0 x86_64, sha256 `13f86a2d…85af`.
- The `ubuntu:22.04` image was already present. No license file was created and no
  executable was patched.
- Wrapper: `tools/poc_check.sh <compiler-id> "<flags>"`.
- About one second of container start-up per compile. For bulk builds, keep one container
  running and `docker exec`, or install a WSL Ubuntu and run wibo directly.

## 5. Installed tools

| Tool | Version | Location |
|---|---|---|
| splat64 (`[mips]`) | 0.50.0 | `.venv` |
| spimdisasm / rabbitizer | 1.42.4 / 1.16.2 | `.venv` |
| pyelftools / pycdlib | 0.33 / 1.22.0 | `.venv` |
| MW PS2 compilers | 17 builds, 2.3.3 → 3.0.1b145 | `tools/compilers/` (decomp.me archive) |
| wibo | 1.2.0 | `tools/wibo/` |
| objdiff-cli | 3.8.2 | `tools/objdiff/` |
| Ghidra (DMC3 copy) | 12.0.4 + Emotion Engine Reloaded 2.1.38 | `<ghidra-dmc3>\` (see DMC3_GHIDRA_SETUP.md) |

## 6. Still needed
- ~~GNU binutils for MIPS.~~ **Done.** The Docker image `dmc3-build` (`tools/docker/Dockerfile`)
  contains Ubuntu 22.04, `binutils-mips-linux-gnu` 2.38 and wibo. Assembler flags:
  `-EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -Iinclude`.
- **mwccgap** (used by sfiii-decomp) lets MW, which has no `INCLUDE_ASM`, build
  files that mix C and asm. Evaluate it.
- Linker strategy: **GNU ld with a hand-written, address-ordered script**
  (`config/<ELF>/main.ld`). splat's generated script groups sections by type, which would
  move `__sinit` ahead of `.data`. The ELF header and the section-header tail are copied from
  the original. Result: **USA and JP both relink SHA-1-identical** (`tools/relink.sh`).
- **PCSX2** for runtime validation is not installed yet.

## 7. Reference projects
- DMC1 decomp.me preset: https://decomp.me/preset/259 (mwcps2-2.4-001213). It may
  deserve the same 2.4-versus-3.0 re-check.
- sfiii-decomp (MW 3.0b38, wibo, mwccgap): https://github.com/apstygo/sfiii-decomp
- recvx-decomp (MW, splat, objdiff, compile.py): https://github.com/fmil95/recvx-decomp
- God Hand (ee-gcc 2.96, splat, objdiff): https://github.com/LucasPicoli/god-hand-decomp
- Sly Cooper (SN ProDG, splat, ninja, objdiff): https://github.com/TheOnlyZac/sly1
