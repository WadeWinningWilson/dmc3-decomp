# DMC3 PS2: inferred translation units

The executable has no symbols or map file, so the original source files (translation units,
TUs) have to be inferred. `tools/tu_map.py` writes the estimate to
`config/SLUS_209.64/tus.txt`, and `tools/split_tus.py` lays `src/` out according to it. The
build does not depend on any of this: every function is linked at its original address,
whichever file it is in.

## Evidence

The linker places each object file's `.text` contiguously and in link order, so a TU is a run
of adjacent functions. The run boundaries are recovered from:

| Evidence | What it gives | Strength |
|---|---|---|
| RTTI vtables (`config/SLUS_209.64/rtti.txt`) | the methods only one class uses mark that class's TU; the class name names the unit | strong |
| `__sinit_*` functions (44, at `0x5A5F80`) | one per C++ TU with global constructors; the callbacks one sinit alone registers belong to its TU | strong |
| existing hand-named sources (`src/game/mc`, `movie`, `fs`, ...) | known modules | strong |
| local data (`D_` labels used by functions no more than `0x800` apart) | static data shared by functions of one TU | medium |
| call affinity | functions between two anchored units join the neighbour they call or are called by | weak |
| ee-gcc 16-byte object alignment (`0x100000`–`0x195158`) | object boundaries in the library range (nop padding after a function) | strong |
| strings (`sceCdRead`, `ADXT_`, `cvFs`, ...) | which library an object belongs to | medium |

Game code is all MW-compiled with 16-byte function alignment, so alignment says nothing about
TU boundaries there.

## Method

1. Each anchor (class, sinit, known source, data group) gives a span of addresses.
   Overlapping spans are merged over the function index, and one cluster becomes one unit.
   A class whose own methods spread more than `0x30000` bytes is not used as an anchor.
2. The functions between two clusters are split by call affinity: a prefix goes to the left
   unit, a suffix to the right one, and an unconnected middle becomes `unit_XXXXXXXX`, named by
   its start address. A middle under `0x400` bytes joins the left unit.
3. Units are named after their class (leading `C` dropped) or source file; duplicates get `_N`.
4. Library objects are split at alignment gaps and labelled by the strings they reference.
   Runs between two objects of the same library take that library; everything else is `sdk`.

## Result (USA)

- 464 game units, 314 of them named, covering 67% of the game's code bytes.
- 1132 library objects: CRI ADX, CVFS, Sofdec, SJ and PS2RNA, the SCE libraries, and 632
  unlabelled SDK/runtime objects.

## Source layout

`tools/split_tus.py` moves functions into `src/game/<group>/<Unit>.c|.cpp` and
`src/lib/<library>/obj_XXXXXXXX.c`. Groups come from the unit name: `enemy` (`Em*`), `player`,
`stage`, `effect` (particles and generators), `scene`, `camera`, `motion`, `ui` (`UID*`), and
`unsorted` (`unit_*`). Splitting follows a few rules:

- A function takes along the macros, types, inline helpers and declarations it uses from its
  old file.
- Declarations of one name that disagree within a new file are written at block scope in each
  function that uses them, and disagreeing macros are defined and undefined around each
  function. MW accepts differing block-scope `extern`s, but not a block-scope one that
  disagrees with a file-scope one.
- A function that needs a different compiler line or pragma set, or a type or inline helper
  that clashes, goes to an overflow file (`<Unit>_2`, ...), or to a suffixed file
  (`.gcc`, `.nounroll`).
- A call that relied on an earlier definition in the old file gets a prototype.

Boundaries are estimates. Moving a function to another unit file never changes the build,
so corrections are cheap.
