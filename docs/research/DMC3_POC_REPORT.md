# DMC3 PS2 — Ten-Function Proof of Concept

**Result: 10/10 functions compile to byte-identical machine code, and all 10
are linked in place in the full USA build with the ELF still SHA-1-identical**
(`tools/build.py us`). Nine are game code built with `mwcps2-3.0b52-030722 -O3,p`. The PoC ran
with `-sdatathreshold 0`; with the corrected default of 8, `func_003B4F30`'s global has
to be declared as an unknown-size object. The tenth (`func_00190BC8`) is CRI Sofdec library code built with
**ee-gcc** `-O2 -G0`. That discovery revealed the binary's two toolchains
(DMC3_TOOLCHAIN_RESEARCH.md §2a).

Reproduce:
```
bash tools/poc_check.sh mwcps2-3.0b52-030722 "-O3,p -sdatathreshold 0"   # JP addresses
```
Source: `src/poc/poc.c`. Variant experiments: `src/poc/variants.c`.

**objdiff confirms the same result independently:** `objdiff-cli report generate -p .` gives 9/10
functions at 100% and `poc_00190BC8` at 32.86% (88.9% of code bytes). The target object
`build/poc/target.o` is assembled from splat's asm by `tools/make_poc_target.py` with GNU as,
so relocations are compared by symbol, not just masked.

## Loop exercised

1. **Disassembly.** splat and spimdisasm (`asm/us`, `asm/jp`).
2. **Ghidra.** The R5900 language comes from Emotion Engine Reloaded, run headless with `DumpFuncs.java` in the separate DMC3 copy. The pseudocode was used only to cross-check readings.
3. **C written by the AI**, using offset-named placeholder structs.
4. **Compile.** Real MW compilers run under wibo in Docker.
5. **Verify.** `tools/funcdiff.py` compares each instruction with the original ELF. Only the fields covered by an actual relocation in our object are masked.
6. **Iterate.** Source shapes were changed for the misses, and the compiler build was searched across 17 versions.

## Results

| # | JP addr | USA addr | Shape | Status | Notes |
|---|---|---|---|---|---|
| 1 | 0x22FF70 | 0x22FF70 | `tbl[i].unk8` (stride 16) | **Matched** | USA pattern also occurs at 0x230430. Same-address identity assumed. |
| 2 | 0x1A5B90 | 0x1A5B90 | u16 field copy | **Matched** | |
| 3 | 0x43C050 | 0x43C080 | float field → out ptr | **Matched** | 3-instruction pattern occurs 4× in USA. Identity is by the +0x30 shift, not unique. |
| 4 | 0x1F9D60 | 0x1F9D60 | four floats = 1.0f | **Matched** | A chained `a=b=c=d` assignment reversed the store order. Separate statements fixed it. |
| 5 | 0x22C820 | 0x22C820 | struct reset | **Matched** | Discriminates 2.x from 3.0 and b95. |
| 6 | 0x3B6090 | 0x3B60C0 | two guarded flag sets | **Matched** | Delay-slot fill. Discriminates b119 and later. |
| 7 | 0x3B59D0 | 0x3B5A00 | `(short)i` index → bool | **Matched** | |
| 8 | 0x24E2B0 | 0x24E2B0 | relative pointer walk | **Matched** | Needed explicit temporaries (`q`, `off`). Discriminates early 3.0. |
| 9 | 0x3B4F00 | 0x3B4F30 | global→child angle diff | **Matched** | `lui $at` allocation happens only in the 3.0bNN line. |
| 10 | 0x190BC8 | 0x190BC8 | wrapper `f(a0, 0xFF000701)` | **Matched (ee-gcc)** | It is in the GCC-built CRI Sofdec block. The "frame + `j`" shape is a GCC sibcall. It matches ee-gcc 2.96 `-O2` (C) and 3.2 `-O2`/`-Os`. |

Status categories (per the directive):
- **Identified.** None. The names `poc_XXXXXXXX` are placeholders and no real identity has been recovered yet. Purpose comments are descriptive guesses.
- **Reconstructed.** 10 functions.
- **Compiler-matched.** 10 functions (9 on USA and JP with MW, and 1 with ee-gcc). All 10 are **linked in place** in the full USA ELF build.
- **Behaviourally validated.** 0. PCSX2 is not set up yet.

## What this establishes
- **The PS2 compiler can reproduce the original instructions.** This was the
  directive's most consequential unknown, and the answer is yes, with a specific
  public compiler build.
- The compiler is narrowed to the MW **3.0bNN** line: 3.0b38, b50 or b52 (2003). The 2.4
  compiler used by the DMC1 preset is ruled out. Details are in DMC3_TOOLCHAIN_RESEARCH.md.
- USA and JP share code. A function matched once can be checked in both.

## Unresolved blockers
1. ~~Frame kept around a tail call.~~ **Resolved.** All 1,113 instances are in
   0x100000–0x195130 (plus 2 at 0x50FE28/0x50FEC0), which is GCC-built library code.
   MW never emits this shape.
2. ~~No objdiff integration.~~ **Resolved.** binutils is in the `dmc3-build` image, and
   objdiff is the primary comparator (`objdiff.json`). `funcdiff.py` remains as a second check.
3. ~~No full-ELF relink.~~ **Resolved for the all-asm build.** `tools/relink.sh` re-assembles
   splat output and rebuilds both `SLUS_209.64` and `SLPM_658.80` **SHA-1-identical**. The
   next step is to link matched C objects in place of their asm.
4. **Function-end check.** `funcdiff` compares the length of *our* function. It
   relies on splat's boundaries for the original. Add an explicit
   next-function/padding check.
5. **Verifier bug (fixed).** Relocation masking was silently disabled until MW's
   one-`.text`-per-function layout was handled. Earlier compiler rankings were wrong
   because of it. Bugs like this are why the verifier itself needs tests.
