# Decompiling

How functions get from assembly to matching C/C++ in this project, and the Metrowerks
PS2 code-generation patterns found so far. Every rule here was verified on real functions;
the address in brackets is an example.

## Table of contents

- [The loop](#the-loop)
- [How the build links C](#how-the-build-links-c)
- [Choosing what to decompile](#choosing-what-to-decompile)
- [Compilers and flags](#compilers-and-flags)
- [C++ classes, vtables and RTTI](#c-classes-vtables-and-rtti)
- [Metrowerks matching patterns](#metrowerks-matching-patterns)
- [Switch statements](#switch-statements)
- [Fixing small differences](#fixing-small-differences)
- [Generated code](#generated-code)

## The loop

1. Read the function: the asm is in `asm/us/text.s` (search for `nonmatching func_XXXXXXXX`;
   `awk '/^nonmatching /{p=($2=="func_004EF610,")} p' asm/us/text.s` prints one function).
   Ghidra's decompiler output is a guide to the logic only; do not paste it.
2. Write C/C++ in the right source file. Give the function its mangled name in
   `config/SLUS_209.64/symbols.txt` (e.g. `Save__8CMcAppliFi = 0x4EFDF0;`). Plain C functions can
   keep the `func_XXXXXXXX` name.
3. Diff: `python -I tools/try.py src/game/mc/mcappli.cpp Save__8CMcAppliFi -v`. Relocated fields
   are masked, so `try.py` checks instructions, not data addresses; calls to `func_XXXXXXXX` names
   are checked against the original targets.
4. When it matches, run `python tools/build.py us`. The full link catches what one-function diffs
   cannot: wrong data addresses, jump-table case groupings, wrong vtable layouts.
5. When the remaining differences are only statement order or similar, brute-force them with
   `tools/variants.py` (see [Fixing small differences](#fixing-small-differences)).

## How the build links C

`tools/build.py` compiles every file in `src/`. It maps each compiled function to its address
(from its `func_` name or from `config/<VERSION>/symbols.txt`), drops those functions from the
splat asm, pins every piece at its original address, and checks the SHA-1. A source file can
therefore be partly decompiled: only the functions it defines replace asm. There is no
per-file "matching" switch; the per-file progress is in `build/us/progress.json`.

## Choosing what to decompile

- `python -I tools/remaining.py 0x004E0000 0x004F2100` lists the functions still in asm.
- `config/SLUS_209.64/rtti.txt` maps vtables to classes; each vtable lists the class's virtual
  functions, so a class's code can be found by address. Its `bases` lines give each class's
  ancestors and their subobject offsets.
- Whole modules are best: the memory-card system (`src/game/mc/`) and `CMcAppli` are examples.

## Compilers and flags

| Range | Compiler | Flags |
|---|---|---|
| `0x195158`-`0x50FF08` game (C++) | `mwcps2-3.0b52-030722` (default) | `-O3,p -fl divbyzerocheck -inline depth=8`, plus `-lang c++ -Cpp_exceptions off` for `.cpp` |
| `0x100000`-`0x195130` SDK / middleware (C) | ee-gcc 2.96 / 3.2 | `-O2 -G0` (put `// cc: ee-gcc3.2-040921 -O2 -G0` on line 1) |

- Small-data threshold is MW's default **8**: globals of 8 bytes or less use `$gp`. A global that
  the original accesses with `lui/%lo` must be declared larger, or as an array of unknown size
  (`extern char D_01CAF516[];`) or as a struct covering its neighbours.
- `divbyzerocheck` produces the `break 7` after divisions.
- `-inline depth=8`: five-level inline destructor chains only inline fully above the default
  depth of 4 [`CFPtclPoly00::~CFPtclPoly00` 0x1BB9F0].

## C++ classes, vtables and RTTI

- MW vtables are `{RTTI *, this offset, slot0, ...}`; RTTI is `{name, base list}`.
  `tools/rtti_scan.py` extracts both into `rtti.txt`.
- **The vptr is at offset 0.** Virtual calls go through `$t9`; an indirect call through `$v0` is a
  C function pointer instead.
- **Vtables stay in the original data.** `tools/mwo_sections.py` turns a compiled `__vt__<class>`
  into an undefined reference, and `symbols.txt` gives its address (e.g.
  `__vt__8CMcAppli = 0x5BA478;`). Secondary vtables (multiple inheritance) are addends from the
  primary one, so the class must declare **the same number of virtual functions per vtable** as
  the original.
- **MW appends a multiply-inheriting class's new virtuals to its LAST vtable**, not the primary.
  Example: `CActor : CWork, IActor (+0x40), ICollisionHandle (+0xA0)` adds 29 virtuals to the
  `ICollisionHandle` table.
- `CWork` (`include/game/work.h`) is the root of most game objects: 7 primary virtuals, a
  `CLib10` heap block at `0x24`, size `0x3C`. A base subobject placed at the next 16-byte boundary
  (e.g. `IActor` at `0x40`) has 16-byte alignment.
- Deleting destructors take `(this, short flag)`, destroy members in reverse order (arrays via
  `__destroy_arr(ptr, dtor, size, count)` at 0x1003E0), call the base destructor with `0`, and
  `delete` (0x100580) when the flag is positive. Inline base destructors each repeat a
  `beqz this` check.
- Out-of-line copies of inline functions are weak; the build keeps the first and maps it only if
  `symbols.txt` names it.
- **Static callees change their callers.** MW tracks the register use of a `static` function
  defined earlier in the file, so a caller off only by register choice around a call may need the
  callee to be `static`.

## Metrowerks matching patterns

**Control flow**
- Branch layout is "positive first": the `then` block falls through. When the original falls
  through into the success path, write `if (ok) { ... } else { error; }`.
- MW rotates `while` loops into bottom-tested loops. For a top-tested loop, write
  `for (;;) { if (c) break; ... }`.
- `return` inside nested blocks, `break` out of a `switch` case, and falling through into the
  next `case` all produce distinct layouts. A delay slot shared by two paths usually means the
  source has them falling into the same statement [`CMcAppli::Boot` 0x4F1980].
- A comparison of a `bool` result with `== false` (not `!`) gives the caller-side
  `andi 0xFF` [`CMcAppli::Update` 0x4F0C60].

**Data access**
- `g.arr[i].x` folds the field offset into `%lo(sym+off)`, but the original often keeps `%lo(sym)`
  exact. A local pointer gives that: `McFile *f = &g.files[i]; f->x`.
- A pointer held in a saved register across a function is usually a local
  (`McWork *w = &D_01DFC1A0.work;`).
- Loads follow source operand order: `a * b` loads `a` first.
- **Struct assignment copies field by field**: `lb`/`lbu` by signedness, `lwc1` blocks for floats,
  and a countdown loop for nested arrays. A run of field copies in the asm is usually a single
  `a = b;` [0x4F0560, 0x4F0670]. A 128-bit `lq/sq` copy needs `__attribute__((aligned(16)))`.

**Declarations**
- Declare locals C89-style at the top. The declaration order and chained assignments
  (`k1 = k2 = k3 = 0;`) affect register allocation.
- Returning a `bool`: a `&&` result returned as `bool` has no `andi 0xFF`; as `int` it gets one.

**Varargs**: `include/stdarg.h` implements GCC's MIPS EABI builtins; `va_start` is verified
[0x4EF400].

## Switch statements

- **Jump tables** stay in the original data. `tools/mwo_jtbl.py` retargets the compiled switch to
  the original `jtbl_` after checking every entry. `try.py` does not check tables, so always run
  the full build.
- **Small switches compile to a `beq` chain in reverse source order.** A chain testing
  `0x20, 0x17, 0xF...` comes from `case ...: case 0xF: case 0x17: case 0x20:`
  [`CMcAppli::SetMode` 0x4F0BD0].
- A table that covers values the code never distinguishes (e.g. 0..5 for cases 1-3) means the
  source listed those cases explicitly next to `default`.

## Fixing small differences

- **Statement order:** when only stores are scheduled differently, try every permutation of the
  statements: write them to a variants file with `itertools.permutations` and run
  `tools/variants.py`. Reading the scheduled output, or Ghidra's
  order, does not reveal the source order.
- **Register swaps:** try declaration order, splitting or merging locals, a local copy of a field,
  or `static` on callees.
- Diffs against the full build tell you where an address goes wrong:
  `build/us/SLUS_209.64.map` maps addresses back to functions.

## Generated code

`src/game/auto/` is written by tools and kept only where it matches byte-for-byte:

| Tool | Output |
|---|---|
| `tools/gen_trivial.py` | two-instruction functions (getters, setters, forwarders) |
| `tools/gen_leaf.py` | short branch-free functions translated from asm: leaves, tail calls, straight-line calls, global data, VU0 runs as `__asm__` |
| `tools/gen_flow.py` | functions with branches and simple loops, structured with post-dominators; variables per register web; C++ virtual calls through synthetic classes (`flow_v.cpp`) |
| `tools/gen_dtors.py` | empty-body deleting destructors |
| `tools/gen_cwork_dtors.py` | destructors of single-inheritance `CWork` chains, from RTTI + asm |
| `tools/gen_class_dtors.py` | destructors that call their parent's (single or multiple inheritance) |

Re-run a generator after the code it depends on changes; the full build re-verifies everything.
