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
| Japan (SLPM-65880) | `SLPM_658.80`, sha1 `cf33e667…` | relinks byte-identically from asm; 98.7% of the code is unchanged from USA |
| Korea (SLKA-25265) | `SLKA_252.65`, sha1 `e7fb8684…` | identified; 98.1% unchanged from USA; build config not yet added |
| Europe *Dante's Awakening* (SLES-53038) | `SLES_530.38`, sha1 `1313d2a2…` | identified; 97.5% unchanged from USA (PAL, five-language rebuild); build config not yet added |
| Europe beta/debug (2005-01-11/12) | `SLES_530.38`, sha1 `f3a3517c…` | reference only |

Progress
--------

Every build prints its progress and writes `build/us/progress.json`. Code is measured in bytes
of `.text`, as on decomp.dev.

| Measure | USA |
|---|---|
| Code | **22.60%** (game code 24.29%, libraries 12.48%) |
| Functions | 9,081 / 14,722 (61.68%) |

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

The compilers are 32-bit Windows programs and the linker is GNU MIPS binutils, so the build runs
them inside a small Ubuntu Docker image on every OS, with
[wibo](https://github.com/decompals/wibo) (a minimal 32-bit Windows binary wrapper) for the
compilers. `configure.py` builds the image and downloads wibo and the compilers automatically.

### Windows

- Install [Python](https://www.python.org/downloads/) 3.10+ and add it to `%PATH%`.
  - Also available from the [Windows Store](https://apps.microsoft.com/store/search?publisher=Python%20Software%20Foundation).
- Install [Docker Desktop](https://www.docker.com/products/docker-desktop/) and start it.
- In the repository: `pip install -r requirements.txt`
- WSL and msys2 are **not** required. Git Bash works for the shell snippets in the docs.

### macOS

- Install Python 3.10+ (e.g. `brew install python`) and
  [Docker Desktop](https://www.docker.com/products/docker-desktop/).
- `pip3 install -r requirements.txt`
- On Apple silicon, Docker runs the x86-64 build image under emulation, which is slower but works.

### Linux

- Install Python 3.10+ and [Docker Engine](https://docs.docker.com/engine/install/), and let your
  user run `docker` (the `docker` group).
- `pip install -r requirements.txt`

Building
--------

- Clone the repository:
  ```sh
  git clone https://github.com/WadeWinningWilson/dmc3-decomp.git
  ```
- Copy your game's disc image (`.iso`) into `orig/SLUS_209.64/`, or just the executable
  `SLUS_209.64` from the root of the disc.
  - After the first `configure.py`, the disc image can be deleted to save space; only the
    extracted executable is needed.
- Configure. This checks your copy against the supported SHA-1, downloads the compilers, starts
  the build container and disassembles the executable with splat:
  ```sh
  python configure.py
  ```
  To use a version other than `SLUS_209.64` (USA), specify `--version SLPM_658.80` (JPN).
- Build:
  ```sh
  python tools/build.py us
  ```
  It ends with `SLUS_209.64: OK sha1 d08b525b…` when the rebuilt executable is byte-identical,
  and prints the progress.

Diffing
-------

objdiff integration is planned. Until then, the project's own tools cover the same loop:

- **One function:** `python -I tools/try.py <source> <function> [-v]` compiles one source file
  and diffs the function against the original, instruction by instruction. Relocated operands
  are masked, so it shows real code differences.
- **Whole build:** `python tools/build.py us` links everything and reports the first differing
  address if anything is off. `build/us/SLUS_209.64.map` maps addresses back to functions.
- **Variants:** `python -I tools/variants.py <source> <function> <variants file>` tries
  alternative versions of a snippet (e.g. statement orders) and keeps the best.
- **What is left:** `python -I tools/remaining.py 0x<start> 0x<end>` lists functions still in asm.

Setting up Ghidra
-----------------

Ghidra is a tool that automatically decompiles code. Its output is not accurate enough to paste
into this project, but it helps a lot with understanding functions. There is no shared Ghidra
server for this project yet, so you set up a local one:

- Install a **JDK 21** (e.g. [Temurin](https://adoptium.net/temurin/releases/)).
- Download [Ghidra 12.0.4](https://github.com/NationalSecurityAgency/ghidra/releases).
- Install the [Emotion Engine: Reloaded](https://github.com/chaoticgd/ghidra-emotionengine-reloaded/releases)
  extension built for your Ghidra version (`File -> Install Extensions...`, then restart).
  Stock Ghidra has no R5900 (PS2 EE) language, and without it `lq`/`sq`, MMI and VU0
  instructions decode wrongly.
- Create a project and import `orig/SLUS_209.64/SLUS_209.64` with the language
  `r5900:LE:32:default`, then run auto-analysis (about 5 minutes).
- Keep `config/SLUS_209.64/symbols.txt` (names already identified) and
  `config/SLUS_209.64/rtti.txt` (class names and vtables) open alongside; an import script for
  Ghidra is planned.

Tips for this binary are in [docs/research/DMC3_GHIDRA_SETUP.md](docs/research/DMC3_GHIDRA_SETUP.md):
`undefined8` arguments are usually 64-bit-passed ints (EE ABI), sign-extended constants are
normal, and `short` often should be `unsigned short` (check for `lhu`).

Project layout
--------------

```
config/<VERSION>/   splat.yaml, symbols.txt (names → addresses), rtti.txt, main.ld, build.sha1
orig/<VERSION>/     your game executable (git-ignored)
asm/                splat output (generated, git-ignored)
src/                decompiled C/C++ (first line `// cc: <compiler> <flags>` overrides the default)
  game/auto/        generated game code (MW), byte-verified
  lib/auto/         generated library code (ee-gcc SDK/middleware, MW runtime), byte-verified
include/            shared headers (include/game/work.h: CWork, the root of most game objects)
nonmatch/           work-in-progress functions that do not match yet
tools/              build.py, try.py, generators, splat/objdiff helpers, Docker image
docs/               decompiling guide, coding guidelines, research notes
```

Contributing
------------

If you have the requirements set up and want to help, see the
[decompiling guide](docs/decompiling.md) for how the work is done and the
[coding guidelines](docs/coding_guidelines.md) for style; [CONTRIBUTING.md](CONTRIBUTING.md) has
the ground rules. To claim an issue, comment `/assign` on it.

Anyone can open a pull request. A pull request must keep `python tools/build.py us`
byte-identical (CI only checks that everything compiles, since it has no game files). Code
pasted straight from Ghidra will be sent back for cleanup: it must read like something a
programmer would have written.

**About AI assistance:** much of the current code was written with an AI assistant (Claude),
and `src/game/auto/` and `src/lib/auto/` are entirely machine-generated. Everything in `src/` is checked
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
