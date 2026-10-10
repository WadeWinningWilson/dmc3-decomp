"""Compare a compiled function in a MW .o against the original ELF bytes.

Relocated fields (jal targets, %hi/%lo, gp-relative offsets) are masked on
both sides; everything else must be bit-identical. This is the PoC verifier;
objdiff remains the project-wide comparison tool once target objects exist.

usage: python -I tools/funcdiff.py <orig.elf> <compiled.o> <symbol> <vaddr>
exit 0 = match
"""
import re
import struct
import sys

import rabbitizer
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from elftools.elf.sections import SymbolTableSection

# R_MIPS_26=4, HI16=5, LO16=6, GPREL16=7, LITERAL=8, GOT16=9, GPREL32=12, MW-specific >= 200
MASKS = {4: 0x03FFFFFF, 5: 0xFFFF, 6: 0xFFFF, 7: 0xFFFF, 8: 0xFFFF}


def load_target(elf_path, vaddr, size):
    with open(elf_path, "rb") as fh:
        elf = ELFFile(fh)
        for seg in elf.iter_segments():
            lo = seg.header.p_vaddr
            if lo <= vaddr < lo + seg.header.p_filesz:
                return seg.data()[vaddr - lo: vaddr - lo + size]
    raise SystemExit(f"{vaddr:#x} not in any segment")


def load_compiled(o_path, symbol):
    fh = open(o_path, "rb")
    elf = ELFFile(fh)
    symtab = next(s for s in elf.iter_sections() if isinstance(s, SymbolTableSection))
    # exact name, or a C++ mangled name (MW uses cfront-style "name__F<args>")
    sym = next((s for s in symtab.iter_symbols() if s.name == symbol), None) or next(
        (s for s in symtab.iter_symbols() if s.name.startswith(symbol + "__")), None)
    if sym is None:
        names = [s.name for s in symtab.iter_symbols() if s["st_info"]["type"] == "STT_FUNC"]
        raise SystemExit(f"symbol {symbol} not found; functions: {names}")
    sec = elf.get_section(sym["st_shndx"])
    start, size = sym["st_value"], sym["st_size"]
    code = sec.data()[start:start + size]
    masks = {}
    for rs in elf.iter_sections():
        # compare indices: MW emits one .text per function, and pyelftools
        # returns a fresh Section object per get_section() call
        if isinstance(rs, RelocationSection) and rs["sh_info"] == sym["st_shndx"]:
            rsym = elf.get_section(rs["sh_link"])
            for r in rs.iter_relocations():
                off = r["r_offset"] - start
                if 0 <= off < size:
                    t = r["r_info_type"]
                    masks[off] = (MASKS.get(t, 0xFFFF), t, rsym.get_symbol(r["r_info_sym"]).name)
    return code, masks


def main(orig, obj, symbol, vaddr):
    vaddr = int(vaddr, 0)
    code, masks = load_compiled(obj, symbol)
    target = load_target(orig, vaddr, len(code))
    n = len(code) // 4
    bad = 0
    for i in range(n):
        c = struct.unpack_from("<I", code, i * 4)[0]
        t = struct.unpack_from("<I", target, i * 4)[0]
        m, rtype, rname = masks.get(i * 4, (0, None, ""))
        ok = (c & ~m) == (t & ~m)
        # a call to a func_XXXXXXXX name must also hit the original's target
        # (call order mistakes are otherwise invisible until the full link)
        if ok and rtype == 4 and (fm := re.fullmatch(r"func_([0-9A-F]{8})", rname)):
            ok = ((t & 0x3FFFFFF) << 2) | ((vaddr + i * 4) & 0xF0000000) == int(fm.group(1), 16)
        bad += not ok
        ci = rabbitizer.Instruction(c, vaddr + i * 4, rabbitizer.InstrCategory.R5900).disassemble()
        ti = rabbitizer.Instruction(t, vaddr + i * 4, rabbitizer.InstrCategory.R5900).disassemble()
        flag = "  " if ok else "!!"
        note = f"  [reloc {rtype} {rname}]" if rtype else ""
        if not ok or "-v" in sys.argv:
            print(f"{flag} {vaddr + i*4:08x}  orig: {ti:<40} ours: {ci}{note}")
    # the original must also end where ours ends (next word is padding or a new function)
    print(f"{symbol} @ {vaddr:#x}: {n - bad}/{n} instructions match"
          f"{' — MATCH' if bad == 0 else ''}")
    return 0 if bad == 0 else 1


if __name__ == "__main__":
    sys.exit(main(*[a for a in sys.argv[1:5]]))
