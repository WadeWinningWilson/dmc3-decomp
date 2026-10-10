# Coding guidelines

Matching comes first, then readability: the aim is code a programmer at Capcom could have
written. Adapted from the zeldaret projects' guidelines for a Metrowerks PS2 codebase.

## Avoid Ghidra-isms

Ghidra's output is for understanding a function, not for pasting. Clean up:

- assignments inside conditions using the comma operator; use nested `if`s,
- `} else { if (...) {` chains; use `else if`,
- redundant parentheses and casts (`*(int *)(param_1 + 0x200)`); declare a struct or class
  with real members,
- copying a value into a second variable only to test it,
- `undefined4`, `param_1`, `iVar3`, `FUN_xxxx`.

Several of these also change register allocation.

## Types

- Use `int` where the original works with `int`; `int` and `long` are both 32 bits under MW PS2,
  but mixing them changes code.
- `unsigned char`/`char` and `unsigned short`/`short` matter: `lbu` vs `lb` (and `lhu` vs `lh`)
  show which one the original used.
- Floats are `float`; the EE has no hardware double, and `double` calls the soft-float routines.

## Classes and structs

- Use the **RTTI class names** (`config/SLUS_209.64/rtti.txt`) and base classes. They are the
  original names.
- Comment member offsets on the left, as in the zeldaret projects:

  ```cpp
  struct SaveEntry {
      /* 0x00 */ char used;
      /* 0x01 */ unsigned char year;
      /* 0x04 */ unsigned char playHour;
  };
  ```
  Older files still use `unkXX` names and `padXX` arrays. Convert them when you work on them.
- While a translation unit is incomplete, keep `pad`/`unk` fields; they may be real members used
  by code that is still asm.
- Shared types go in `include/` (e.g. `include/game/work.h`), not repeated per file.

## Names

- Use a name only when there is evidence for it: RTTI, a string the function prints, an SDK
  function signature (`sceMcOpen`, `sceCdReadClock`), or clear behaviour. Otherwise keep
  `func_XXXXXXXX`, `unkXX`, `CUnk<addr>`.
- C++ functions get their mangled names in `config/SLUS_209.64/symbols.txt`. Keep it grouped by
  module, with a comment naming the source file.
- Name methods after what they do (`Save`, `Load`, `UpdateLoad`) once that is clear; `SubXXX`
  is a placeholder.

## Non-matching code

- Put it inside `#ifdef NON_MATCHING` with a comment giving the score and the difference:
  `#ifdef NON_MATCHING /* 100/107: register choice for unk244/unk4 in the push branches */`.
- Never commit a change that breaks `tools/build.py us`.

## Generated code

Do not hand-edit `src/game/auto/` or `config/*/symbols.auto*.txt`; change the generator in
`tools/` and re-run it. Once a generated class gets real members or names, move it into a
hand-written source file.
