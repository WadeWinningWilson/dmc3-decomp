# DMC3 PS2 ↔ resource-format cross-reference

Identifications of PS2 (USA `SLUS_209.64`) functions and data that handle DMC3 resource formats.
Format semantics come from the public MIT-licensed
[DMC Rengine](https://github.com/VrUaCom/dmc-rengine-cpp) project, which studies the **PC HD
Collection** release (x64 PE). Only format meaning was taken from it — no code — and every entry
below was re-confirmed against the PS2 executable (strings, call shape, field use). PC addresses and
offsets in that project do not transfer to this binary.

Status words: **confirmed** = the PS2 code visibly does what is described; **likely** = strong
circumstantial evidence (strings + call shape), field meanings not yet traced.

## Sound: SPU memory map (`SPUMAPDT`, `SpuMap.bin`)

| PS2 symbol | Role | Status |
|---|---|---|
| `func_002F9C60` | SpuMap load: `memcmp(map, "SPUMAPDT", 8)`, fails with `-1`; stores the map pointer, then resets the 16-entry SPU region table | confirmed |
| `func_002F9D20` | region (re)layout, called with `0` after load | likely |
| `D_00558868` | the `"SPUMAPDT"` magic string | confirmed |
| `D_005BE168` | current SpuMap pointer | confirmed |
| `D_005BE170` | first free SPU address, initialised to `0x5020` (start of user SPU RAM) | confirmed |
| `D_01DF94C0` | region table: 16 `u32` start addresses at `+0x00`, 16 `u32` sizes at `+0x40` | confirmed |
| `func_0012B6E8` | `memcmp`-style compare (`a0`, `a1`, length `a2`) | likely |

Rengine documents the file as: 8-byte magic, count-like `u32` at `+0x08`, up to 16 `u32` region sizes
from `+0x10`, cumulative, bounded by `0x200000` (2 MiB SPU RAM). The PS2 table layout agrees.

## Resource managers keyed by file extension

Both build `"%s/%s"` paths and compare the extension in several letter cases (`.mot`/`.MOT`, …),
allocating through `CLib10::Alloc` (`func_001B0FD0`).

| PS2 symbol | Extensions | Rengine family | Status |
|---|---|---|---|
| `func_0022FA40` | `.mot .mcv .cam .hid .clt .tsc` | motion/control manager: MOT (motion), MCV (motion companion/curve), CAM (camera tracks), HID (visibility), CLT (cloth), TSC | likely |
| `func_00230180` | `.ptx .clt .c1d` | primary model manager: PTX (texture bundle), CLT (cloth), C1D (1-D cloth sim) | likely |
| `func_001A9660` | — | relocates a loaded block in place (adds the base address to embedded offsets); called by the model manager | likely |

Shared string helpers seen in both: `func_0012ACE8` (`sprintf`-like, used with `"%s/%s"`),
`func_0012B2E8`, `func_0012BA60` (string compare used for keywords and extensions).

## Stage model-placement script (rengine: "Stage TXT")

`func_002182D0` (≈1200 instructions) parses the per-stage model text script. It tokenises with
`func_0022CB30`/`func_0022CB50` (token-stream init/open) and `func_0022CBB0` (next token) and matches
keywords with `func_0012BA60`. Keywords, in the order the parser tests them:

`#` (comment) · `Clip` · `End` · `SetFrame` `SkipFrame` `CutFrame` `ClipScale` · `Life` · `Rot` `Pos`
`CnsPos` · `CollShape` `CollIdx` · `UseCulling` `CullingRange` · `UseStx` `StxU` `StxV` ·
`UseScr` `ScrU` `ScrV` · `OtLevel` (`DEFAULT` or a `SYS_OT_LV_MDL_*` name) · `OtPri` · `Special` ·
`Crush` (`ALL` `HALF` `QUARTER`) · `RefMotion` · `CalcMatrix` · `TexMode` · `ClutMode` · `Light`
`LightParent` · `TexPaint` `Constant` `VtxPaint` · `Model` · `demo` · `Texture` · `Cloth`
`ClothSim1D` `ClothSim1DCnsPos0` `ClothSim1DCnsPos1` · `Shadow`.

Status: confirmed (strings referenced directly by this function). Rengine's own Stage TXT support is a
lexer only, so the field-level meaning here (which keyword writes which object field) is new work: the
parsed object is allocated by `func_00210A40` and its fields (e.g. `+0x96`, `+0x664`, `+0x674`,
`+0x676`) can be named by following each keyword branch.

## Draw-order (ordering table) levels

Model draw levels named by the stage script's `OtLevel` keyword (strings at `0x542850`–`0x542930`):

| Name | Likely meaning |
|---|---|
| `SYS_OT_LV_MDL_SHW` | shadow pass |
| `SYS_OT_LV_MDL_FAR` | far/background models |
| `SYS_OT_LV_MDL_STG` | stage geometry |
| `SYS_OT_LV_MDL_STX_1ST` | stage extra, first |
| `SYS_OT_LV_MDL_OBJ` | objects/actors |
| `SYS_OT_LV_MDL_STX` | stage extra |
| `SYS_OT_LV_MDL_POST_STX` | after stage extra |
| `SYS_OT_LV_MDL_SEMI` | semi-transparent |

The DMA ordering-table link helpers around `func_001A7230`…`func_001A8880` each insert a GS packet
into one OT array (`D_0065D0B0`, `D_0065D4D0`, `D_0065E4F0`, `D_0065E550`, `D_0065F570`,
`D_0065F620`, `D_00660640`, `D_00661660`, `D_00661A80`, `D_00661AE0`, `D_00661F00`), indexed by the
current frame buffer (`*(signed char *)(D_005BE0D8 + 0xE)`) and a clamped priority. Which array serves
which level is not yet traced.

## Other formats documented by rengine, PS2 consumers not yet located

`SCM` (stage mesh; a `CDrawSCM` debug string exists at `0x5467D0`), `MOD` (actor model), `HITS`
(collision grid), `DCA` (cinematic camera: `0x10` header + `0x410`-byte records), `SHW` (shadow hull),
`LIG`/`LIG2` (stage lighting), `EFM` (effects), `PAC`/`PNST` (relative-slot containers). Their magics
do not appear as immediates in the PS2 code, so the next step is to search for their structural
constants (record strides, header offsets) instead.
