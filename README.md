Devil May Cry 3: Dante's Awakening
==================================

A work-in-progress **matching decompilation** of *Devil May Cry 3: Dante's Awakening* for the
PlayStation 2. The C and C++ in `src/` compile back to a byte-identical copy of the original
executable, with the original compilers.

> [!IMPORTANT]
> This repository does **not** contain any game code, assets or assembly. You need your own copy
> of the game; the build disassembles it locally.
>
> This project is not, and will not become, a PC port. It is a decompilation of the original
> code, which rebuilds into a binary identical to the original.

Supported versions
------------------

| Version | Executable | Status |
|---|---|---|
| **USA** (SLUS-20964) | `SLUS_209.64`, sha1 `d08b525b…` | **primary target** |
| Japan (SLPM-65880) | `SLPM_658.80`, sha1 `cf33e667…` | relinks byte-identically from asm; near-identical to USA |
| Europe *Dante's Awakening*, Korea, Special Edition | — | not yet |

Progress
--------

Every build prints its progress and writes `build/us/progress.json`. Code is measured in bytes
of `.text`, as on decomp.dev.

| Measure | USA |
|---|---|
| Code | **2.28%** (game code 2.66%, libraries 0.01%) |
| Functions | 2,588 / 14,634 (17.68%) |

The function count runs well ahead of code size: many matched functions are small (accessors,
destructors, forwarders), while the large gameplay functions are mostly still assembly.

What is in the executable
-------------------------

- **Game code** (`0x195158`-`0x50FF08`): C++, built with **Metrowerks CodeWarrior for PS2
  3.0 (`mwcps2-3.0b52-030722`)** with `-O3,p -fl divbyzerocheck -inline depth=8`. C++ RTTI
  gives the real names of 354 classes (`CActor`, `CShell`, `CEm000`, `CMcAppli`, the `CUID*` UI
  screens and more) along with their inheritance; see `config/SLUS_209.64/rtti.txt`.
- **Libraries** (`0x100000`-`0x195130`): the Sony SDK, CRI ADX/Sofdec and Capcom's own C
  libraries, built with **ee-gcc**. These stay in C, as the originals were.

Dependencies
------------

- [Python](https://www.python.org/downloads/) 3.10+ with `pip install -r requirements.txt`
  (splat, spimdisasm, pycdlib).
- [Docker](https://www.docker.com/) (Docker Desktop on Windows/macOS). The build runs GNU MIPS
  binutils and [wibo](https://github.com/decompals/wibo) (which runs the Windows-only Metrowerks
  compilers) in a small Ubuntu image.
- Optional: [objdiff](https://github.com/encounter/objdiff) and
  [Ghidra](https://github.com/NationalSecurityAgency/ghidra) with
  [Emotion Engine: Reloaded](https://github.com/chaoticgd/ghidra-emotionengine-reloaded).

Building
--------

1. Clone the repository:
   ```sh
   git clone <this repository>
   ```
2. Copy the game executable `SLUS_209.64` from your disc into `orig/SLUS_209.64/`.
   Alternatively, put your disc image (`.iso`) there, and the executable is extracted from it.
3. Configure. This verifies your copy, downloads the compilers, starts the build container and
   disassembles the executable:
   ```sh
   python configure.py
   ```
   For the Japanese version, use `--version SLPM_658.80`.
4. Build and verify:
   ```sh
   python tools/build.py us
   ```
   It ends with `SLUS_209.64: OK sha1 d08b525b…` when the rebuilt executable is identical.

Diffing
-------

- **One function:** `python -I tools/try.py <source> <function>` compiles one source file and
  diffs a function against the original, instruction by instruction (`-v` shows every line).
- **Variants:** `tools/variants.py` brute-forces alternative versions of a snippet (for
  example statement orders) and keeps the best.
- objdiff integration (per-file target objects) is planned.

Project layout
--------------

```
config/<VERSION>/   splat.yaml, symbols.txt (names → addresses), rtti.txt, main.ld, build.sha1
orig/<VERSION>/     your game executable (git-ignored)
asm/                splat output (generated, git-ignored)
src/                decompiled C/C++ (first line `// cc: <compiler> <flags>` overrides the default)
  game/auto/        generated code (trivial functions and destructors), byte-verified
include/            shared headers (include/game/work.h: CWork, the root of most game objects)
nonmatch/           work-in-progress functions that do not match yet
tools/              build.py, try.py, generators, splat/objdiff helpers, Docker image
docs/               decompiling guide, coding guidelines, research notes
```

Contributing
------------

See [CONTRIBUTING.md](CONTRIBUTING.md), [docs/decompiling.md](docs/decompiling.md) and
[docs/coding_guidelines.md](docs/coding_guidelines.md). To claim an issue, comment `/assign` on it.

**About AI assistance:** much of the current code was written with an AI assistant (Claude),
and `src/game/auto/` is entirely machine-generated. Everything in `src/` is checked
byte-for-byte against the original by the build; nothing is accepted on trust. Names and
readability are still being cleaned up, and human review is welcome.

License
-------

The source code, tools and documentation in this repository are dedicated to the public domain
under [CC0 1.0](LICENSE). This covers this project's own work only: *Devil May Cry 3* and all of
its code and assets remain the property of Capcom, and none of them are included here.

Related projects
----------------

PS2 Metrowerks decompilations that this project learned from:
[sfiii-decomp](https://github.com/apstygo/sfiii-decomp),
[sly1](https://github.com/TheOnlyZac/sly1),
[recvx-decomp](https://github.com/fmil95/recvx-decomp),
[god-hand-decomp](https://github.com/LucasPicoli/god-hand-decomp).
The repository layout follows the [zeldaret](https://github.com/zeldaret) projects.
