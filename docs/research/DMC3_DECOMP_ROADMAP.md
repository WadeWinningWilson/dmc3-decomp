# DMC3 PS2 — Decompilation Roadmap

Primary target: **USA `SLUS_209.64`** (14,676 functions). JP `SLPM_658.80` is
maintained alongside it as a near-identical sister build.

## Done (2026-10-09)
- [x] Disc inventory and hashes for USA, JP and the EU prototype (DMC3_BINARY_BASELINE.md)
- [x] Layout recovered from stripped ELFs: `.text`, `.vutext`, `__sinit`, `.ctors`, `$gp`, bss
- [x] splat configs for USA and JP (`config/<VERSION>/splat.yaml`), giving 14,676 and 14,655 functions
- [x] DMC3-only Ghidra with the R5900 language, projects `dmc3_us` and `dmc3_jp`
- [x] MW compilers running through wibo/Docker, 17 builds archived locally
- [x] **Compiler identified by codegen: MW 3.0bNN line (b52 provisional)**
- [x] Ten-function PoC: **10/10 matched, all linked in place in the USA ELF (SHA-1 OK)**
- [x] Two toolchains identified: ee-gcc for SDK/CRI libraries (0x100000–0x195130), MW 3.0b C++ for game code
- [x] `tools/build.py`: per-file compilers, functions linked in place, SHA-1 verification

## Progress log
| Date | C functions linked in place (USA) | % functions | % .text bytes | Notes |
|---|---|---|---|---|
| 2026-10-09 | 2,332 / 14,634 | 15.94% | 0.52% | ELF SHA-1-identical. 2,270 trivial accessors and forwarders (`tools/gen_trivial.py`), 37 empty destructors (`tools/gen_dtors.py`), and hand-matched work: the AFS/DVD setup module (`src/game/fs/afs_setup.c`), movie classes (now `src/game/movie/movie.cpp`) and the PoC. |
| 2026-10-09 | 2,340 / 14,634 | 15.99% | 0.56% | Movie module grew to 18 functions: `CMovie::Play/Update/UploadFrame/SetVolume/Term/Stop`, …. New project flag `-fl divbyzerocheck`. Heuristic learned: C89 top-of-function declarations. |
| 2026-10-09 | 2,368 / 14,634 | 16.18% | 0.61% | `CMovie::Open` (194 instructions) completes the movie module (19 functions, 3 left in asm). New memory-card module `src/game/mc/mcsys.c` (CAPCOM RD3 Memory Card System v1.21c): 27 functions. |
| 2026-10-09 | 2,386 / 14,634 | 16.30% | 0.68% | Memory-card module up to 45 functions: slot registration, save-buffer layout, 16-bit one's-complement checksum and verify, operation starters. |
| 2026-10-09 | 2,390 / 14,634 | 16.33% | 0.71% | Jump-table support (`tools/mwo_jtbl.py`, with verified tables). Memory card: card detection, async `sceMcGetInfo`/`sceMcMkdir` wrappers. Live GhidraMCP in use. Near-matches are now kept in `nonmatch/`. |
| 2026-10-09 | 2,396 / 14,634 | 16.37% | 0.85% | Memory card at 56 functions, including all libmc I/O wrappers (scan/getdir, mkdir, read, write, seek+write) and the check-cards state machine. Key finding: `static` callees change caller codegen (MW tracks their register use); `mwo_sections.py` aliases them for asm callers. Near-match in `nonmatch/`: load state machine `func_004EC470` (479/493). |
| 2026-10-10 | 2,416 / 14,634 | 16.51% | 1.17% | Memory card module done apart from three functions: both state machines (`func_004EC470` 493, `func_004EB510` 982) now match. New `src/game/mc/savesys.cpp` (CSaveSys, C++) adds save/load of player progress (0x4EFDF0, 475 instructions; 0x4F0670, 224), menu cursors, the mode queue consumer and the per-frame `Update`. Findings: small switches compile to beq chains in reverse case order; struct assignment copies field by field (with float-block and byte-loop forms); MW masks a `bool` result at the caller. The save timestamp comes from sceCdReadClock. Parked under `#if 0`: 0x4EFBE0 (newest save, register allocation) and 0x4F09F0 (100/107). GhidraMCP is live and used read-only. |
| 2026-10-10 | 2,588 / 14,634 | 17.68% | 2.28% | Class model from RTTI: `tools/rtti_scan.py` gives 354 class names, vtables and base lists. New generators produce byte-verified destructors: `gen_cwork_dtors.py` (67, single-inheritance CWork chains) and `gen_class_dtors.py` (96, parent-calling, including multiple inheritance). New build facts: `-inline depth=8`, vtables kept in the original data, MW appends a multiply-inheriting class's new virtuals to its last vtable. Repository reshaped zeldaret-style: `config/<VERSION>/`, `orig/<VERSION>/` (git-ignored), `configure.py`, README/CONTRIBUTING/docs, a CI compile check. Code % is now measured as on decomp.dev (function slots including padding). |

Progress counts *functions built from C and linked in place*, with the full ELF still
byte-identical. Generated functions use placeholder types and names: they are
"matched", not "identified". The byte percentage is the honest measure of work done.

## Milestone 1: Build system (next)
- [x] `dmc3-build` Docker image (binutils 2.38 + wibo) assembles splat output
- [ ] Integrate `mwccgap` so C and `INCLUDE_ASM` can be mixed under MW
- [ ] `configure.py` + ninja (sly1/recvx pattern), with a persistent compile container to avoid per-file `docker run`
- [x] objdiff project config (`objdiff.json`) and progress report (PoC unit: 9/10 at 100%)
- [x] **Byte-identical relink of USA and JP from asm** (`tools/relink.sh`, SHA-1 verified)
- [x] Link matched C/C++ objects in place of their asm (`tools/build.py`: per-function sections, address pinning, mangled-name aliases, MW inline symbols → weak)
- [ ] Split `text.s` into per-TU files once TU boundaries are known
- [ ] General `.rodata`/`.data` splicing (string literals, float constants, initialised tables) so C can own its data instead of referencing `D_` symbols
- [x] **Jump tables.** Done via `tools/mwo_jtbl.py`: C switch code is retargeted to the original `jtbl_` (kept in the data asm) after each entry is verified. A negative test proved per-function diffs alone give a false MATCH for a wrong case mapping. Original note: `switch` statements emit jump tables in `.rodata` (e.g. `func_004ECC70`, `jtbl_005A56C0`). `build.py` must cut the data asm at the jump-table label and place the C object's table at that address, the same way it handles functions. Every `switch` is blocked until then.

## Milestone 2: Solve systemic codegen issues
- [x] ~~Frame kept around a tail call~~: GCC sibcall in the library block
- [ ] Pin the exact ee-gcc version and flags for the library block (2.96 vs 3.2)
- [ ] Settle b38 vs b50 vs b52 using switch, float, loop and C++ functions
- [ ] C++ specifics: MW vtable layout, ctor/dtor/`__sinit` codegen, EH tables, mangling

## Milestone 3: Find TU boundaries
- [ ] Use the 44 `__sinit` functions (one per C++ TU with globals) and the `.ctors` order
- [ ] Use 16-byte alignment gaps, string-pool locality and rodata-per-TU
- [ ] Identify and separate the SDK 2.8.0 and CRI libraries (ee-gcc), with signatures shared with other PS2 projects

## Milestone 4: First subsystem
Candidates, in order of how testable they are:
1. **Controller input** (wrappers around `libpad`, which has identifiable SDK entry points)
2. **Memory-card system** ("CAPCOM RD3 Memory Card System" string anchor)
3. **Player state** (needs struct recovery first, so it benefits from DDMK cross-reference)

Exit criteria: one subsystem fully matched, linked in place, and behaviourally checked in PCSX2.

## Milestone 5: Cross-version (Track B)
- [ ] Function-identity DB, keyed by USA address and mapping to JP, EU proto and (later) EU retail and Korea
- [ ] Diff USA against the prototype (`.text` is +0x29FC) and record changed systems
- [ ] DDMK and DMC3 Crimson struct and address knowledge for HD Collection cross-reference
- [ ] SE (SLUS-21361) once a copy is supplied
- [ ] Re-check the DMC1 preset (2.4) against the 3.0bNN finding, to see whether Capcom shared a toolchain

## Track C: Static recompilation (experimental, isolated)
PS2Recomp research stays in its own directory. It is never mixed with `src/`.

## Inputs pending from the user
- EU retail *Dante's Awakening* (in progress) and the Korean release
- One-time GhidraMCP GUI enablement (DMC3_GHIDRA_SETUP.md §5)
- EU retail is optional: it shares the serial, but its build likely differs from the prototype
