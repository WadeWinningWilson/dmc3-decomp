# DMC3 PS2 — Binary Baseline

Status: verified 2026-10-09 from the user's own disc images. Every figure here
was measured with `tools/iso_inspect.py`, `tools/elf_report.py`,
`tools/find_layout.py` or one-off scans that are recorded in this file.

## 1. Important scope note

The discs on hand are **original Devil May Cry 3 (2005)**, not *Special
Edition* (SLUS-21361 / SLPM-66160). The directive names SE, but SE is a later
re-release with gameplay changes. This project therefore targets the original
release first, with **USA SLUS-20964 as the primary target**. SE becomes a Track B
cross-version target once a copy is available.

## 2. Disc inventory

| Version | ISO SHA-1 | Boot ELF | SYSTEM.CNF | PVD date |
|---|---|---|---|---|
| **USA retail** (primary) | `0eb1e437cc30b6e89bffe01708585587c3def7fc` | `SLUS_209.64` | VER 1.01, NTSC | 2005-01-21 |
| Japan retail | `5a19c29c9cc7ccb1fa738541a7b8012ec2bb1433` | `SLPM_658.80` | VER 1.02, NTSC | 2005-01-12 |
| EU prototype "PUB ROM EUR 2005/01/12" | `da4d02dcb45fe139678343a96b26709dac2e2139` | `SLES_530.38` | VER 1.00, PAL | 2005-01-11 |
| EU retail (*Dante's Awakening*) | pending | — | — | — |
| Korea | pending | — | — | — |

- The folders "Early Debug Release" and "Europe Release (Beta 2005-01-11)" contain
  **the same disc**. Their ISO SHA-1s are identical and match the Redump DAT shipped
  with the debug dump (`crc b565a981`). Redump's notes say: DVD-R, label
  "PUB ROM EUR" / "2005/01/12", EXE date 2005-01-11, ring ZC6134-DVR-H47C.
- The JP serial is **SLPM-65880**. The earlier guess of SLPM-65760 is wrong.
- Every disc holds the same 8 files: `SYSTEM.CNF`, the ELF, `MODULE.BIN`,
  `IOPRP280.IMG`, `0FLIST.DIR`, and `SDATA.AFS`, `MDATA.AFS`, `GDATA.AFS`, which are CRI AFS archives.

## 3. Executables

| | USA `SLUS_209.64` | JP `SLPM_658.80` | EU proto `SLES_530.38` |
|---|---|---|---|
| size | 4,973,232 | 4,970,928 | 4,985,520 |
| SHA-1 | `d08b525bac178360846b21f0f396283c671706d9` | `cf33e667f576d7f6eda654763579f0a3cd812d70` | `f3a3517c3ab5552f0fd054ae8d7eae231092b0ba` |
| MD5 | `f903c68f67b0cd20089b023b45af7982` | `03964219218266fc4bff93937421c759` | `e70ed08cb8fcba603e63df5161923deb` |
| entry | 0x100008 | 0x100008 | 0x100008 |
| PT_LOAD | 0x100000, filesz 0x4BE080, memsz 0x1CFC800 | 0x100000, 0x4BD780 / 0x1CFBF00 | 0x100000, 0x4C1080 / 0x1CFF900 |
| `$gp` (.reginfo) | **0x5C3870** | 0x5C2F70 | 0x5C6870 |
| `.text` | 0x100000–0x50FF08 | 0x100000–0x50F714 | 0x100000–0x512904 |
| `.vutext` (VU microcode) | from 0x50FF80 | from 0x50F780 | — (not mapped) |
| `__sinit` code | 0x5A5F80–0x5A6E6C (44 funcs) | 0x5A5680–0x5A659C (44) | — |
| `.ctors` | 0x5A6E70 | 0x5A65A0 | — |
| bss start | 0x5BE080 | 0x5BD780 | 0x5C1080 |
| functions (splat) | **14,676** | 14,655 | — |

### Symbols and debug info
**None.** All three ELFs are stripped. `.symtab` and `.strtab` are empty, there is no
`.mdebug` or DWARF, and every section is merged into one unnamed `PROGBITS`
section plus `.comment` and `.reginfo`. The prototype has no extra symbols
either. Its value lies in its debug menu (controller 2, hold L1), which helps with
runtime validation, and in its earlier code, which helps cross-version diffing. Only
one source filename string survives: `eflSifRpc.c`.

### Toolchain fingerprint
- `.comment` = `MW MIPS C Compiler (2.4.1.01)\0PlayStation2\0`. This is the same
  string seen in DMC1. **It comes from the linker.** Every `mwldps2.exe` from
  2.3.3 through 3.0.1b119 writes exactly this string, so it does **not** identify
  the compiler version. See DMC3_TOOLCHAIN_RESEARCH.md.
- The code is C++. MW-format RTTI strings are present
  (`!std::exception!!std::bad_cast!!`), there are 44 static-initializer
  functions registering globals through `func_00100C20` (presumably
  `__register_global_object`), and there are vtables after `.ctors`. MW's mangling is
  cfront-style (`name__F<args>`).
- Functions are 16-byte aligned, as is typical of MW. Prologues save `$ra` with `sd`
  and callee-saved registers with `sd`/`sq` and `lq` (128-bit).
- Globals: 4,007 `$gp`-relative accesses in game code and 173 in the GCC libraries.
  Game code uses MW's default small-data threshold of 8 (corrected from an earlier
  `-sdatathreshold 0` guess; see DMC3_TOOLCHAIN_RESEARCH.md).

### Third-party code inside the ELF
| Library | Evidence | Likely compiler |
|---|---|---|
| SCE libraries 2.8.0 | `PsIIlibcdvd 2800`, `libdma`, `libgraph`, `libipu`, `libkernl`, `libpad`, `libvu0`, `libmc 2810` | ee-gcc (Sony) |
| CRI ADX / Sofdec / SJ | `ADXRT Ver.2810`, `SJ/PS2EE Ver.6.28`, `PL2ENC 1.01`, `AC3CNV 1.03`, `SKG/PS2EE 0.64`, built Oct 6 2004 | ee-gcc (CRI) |
| Capcom RD3 memcard | `CAPCOM RD3 Memory Card System Ver.%s-%d` | MW (Capcom) |

These libraries should be identified and excluded or matched separately. SDK 2.8.0
library signatures can be shared with other PS2 decomps.

## 4. USA vs JP vs prototype
- USA and JP are near-identical builds. Code is at the **same addresses** up to at
  least 0x24E2B0, then shifts by +0x30 in the 0x3B…–0x43… range. USA has 21 more
  functions, including clock/minutes-seconds code at 0x50FE28.
- All 9 matched PoC functions match USA byte-for-byte as well. See
  DMC3_POC_REPORT.md.
- The EU prototype's `.text` is 0x31F0 bytes larger than JP's and 0x29FC larger than USA's. It still needs a
  function-level diff (Track B).

## 5. Untouched references
Your own copies go in `orig/<version>/` (git-ignored) and are never edited. Builds write to
`build/`. ISOs are extracted to `iso/` and are not in version control.
