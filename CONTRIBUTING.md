# Contributing

Anyone can open a pull request. Set up the project first ([README](README.md)), then read the
[decompiling guide](docs/decompiling.md) and the [coding guidelines](docs/coding_guidelines.md).

## Ground rules

- **Never commit game files.** That means no executables, disc images, assembly from `asm/`,
  binary data or extracted assets. `.gitignore` covers the usual paths; check `git status`
  before you commit.
- **Matching means byte-identical.** `python tools/build.py us` must end with `OK sha1 d08b525b…`
  before you push. CI can only check that everything compiles, because it has no game files.
- **Code that does not match yet** goes inside `#ifdef NON_MATCHING` with a comment giving the
  score and the remaining difference (e.g. `/* 100/107: register choice ... */`), or into
  `nonmatch/`.
- **Readable code.** The aim is source a programmer at Capcom could have written. Clean up
  Ghidra output (see the coding guidelines), use the RTTI class names, and name things only when
  you have evidence for the name.
- **Machine-generated code is labelled.** Code from the generators in `tools/gen_*.py` lives in
  `src/game/auto/`. Code written with AI assistance is welcome if you have checked it, it
  matches, and it reads like normal source.

## Workflow

1. Pick an area: an open issue, a class from `config/SLUS_209.64/rtti.txt`, or the output of
   `python -I tools/remaining.py 0x<lo> 0x<hi>`. Comment `/assign` on the issue to claim it.
2. Decompile the functions in a source file under `src/` that mirrors the game's structure,
   and add their names to `config/SLUS_209.64/symbols.txt`.
3. Iterate with `python -I tools/try.py <file> <function> -v` until it matches.
4. Run the full build, then open a pull request that lists the matched functions.
