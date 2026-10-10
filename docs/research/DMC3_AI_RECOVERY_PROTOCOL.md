# DMC3 PS2 — AI-Assisted Recovery Protocol

This is the procedure an AI agent follows for each function. It was tested in the PoC.
**Nothing an AI produces becomes authoritative until the compiler and verifier agree.**

## Per-function procedure

1. **Extract the original asm.** Use `asm/us/*.s` (splat). The USA address is the canonical ID.
2. **Get the Ghidra pseudocode.** Run `DumpFuncs.java` on `dmc3_us`. Use it to check
   your reading, never as source.
3. **Gather context.** Look at callers and callees, globals, constants, and the struct
   offsets used. Also check whether the same bytes appear in JP or the prototype,
   since a cross-version hit confirms boundaries.
4. **Propose types.** Write offset-named fields (`unkXXX`) until there is evidence for a
   name. Grow shared structs in `include/` as offsets recur.
5. **Write the C/C++**, in the simplest form that is natural for 2004-era Capcom code.
   Prefer expressions that read naturally over contortions.
6. **Compile and verify.**
   `python -I tools/try.py <src> func_XXXXXXXX` for the fast loop, then
   `python -I tools/build.py us`. The full ELF must stay SHA-1-identical. A function counts as matched only on a
   0-diff with relocations masked **and** with the relocation targets resolving to the
   same symbols.
7. **Iterate on source shape first, flags second, compiler last.** Patterns learned
   in the PoC:
   - Chained assignments reverse the store order. Write separate statements.
   - Explicit temporaries change load order (`0024E2B0`).
   - Never "fix" a mismatch by changing the compiler for a single function. A change of
     compiler is a project-wide hypothesis and must be re-run across every matched function.
8. **Record the result.** Put the status (`identified` / `reconstructed` / `matched` /
   `validated`), evidence, and any open uncertainty in the function's comment and in
   the progress database.

## Naming policy
- `func_XXXXXXXX` / `D_XXXXXXXX` until there is evidence.
- A real name needs **evidence**: a string reference, a library signature, a
  DDMK/PC-port cross-reference, a debug-menu label, or a callee or caller chain to
  something already named. Record that evidence with the symbol, as a comment in
  `config/SLUS_209.64/symbols.txt`.
- An AI-suggested name with no evidence stays a comment, not a symbol.

## Second-model review
For hard asm or matching problems (the open "frame kept around a tail call"
issue, for example), give a second model only the asm, the current C and the diff,
**without** the first model's reasoning, and compare the independent hypotheses.
The compiler decides between them.

## Verifier integrity
`tools/funcdiff.py` is part of the trusted computing base. The PoC found a bug
in it that silently hid relocation differences and skewed the compiler ranking. Rules:
- Any change to the verifier is followed by re-running the whole matched set.
- Add tests: a known-match pair, a known-mismatch pair, and a relocation case.
- Move to objdiff (`tools/objdiff/objdiff-cli.exe`) as the primary comparator once
  target objects can be assembled. Keep `funcdiff` as a second check.

## Distinctions to keep
- **Static recompilation (PS2Recomp)** is not decompilation, and its output never
  enters `src/`.
- **Ghidra pseudocode** is not source.
- **Equivalent behaviour** is not an identical implementation. Cross-version claims need
  byte- or structure-level evidence.

## Attribution
Every recovered function's commit records the model used, the compiler and flags,
and the verifier result. Third-party research (DDMK, other decomps) is cited by URL
next to whatever it informed.
