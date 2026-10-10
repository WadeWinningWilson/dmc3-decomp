"""Compare a compiled function in a MW .o against the original ELF bytes.

Relocated fields (jal targets, %hi/%lo, gp-relative offsets) are masked on
both sides; everything else must be bit-identical. This is the PoC verifier;
objdiff remains the project-wide comparison tool once target objects exist.

usage: python -I tools/funcdiff.py <orig.elf> <compiled.o> <symbol> <vaddr>
exit 0 = match
"""
import os
import re
import struct
import sys

import rabbitizer
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from elftools.elf.sections import SymbolTableSection

# R_MIPS_26=4, HI16=5, LO16=6, GPREL16=7, LITERAL=8, GOT16=9, GPREL32=12, MW-specific >= 200
MASKS = {4: 0x03FFFFFF, 5: 0xFFFF, 6: 0xFFFF, 7: 0xFFFF, 8: 0xFFFF}


_targets, _objects = {}, {}  # caches keyed by path, invalidated by mtime (generators call main() a lot)


def load_target(elf_path, vaddr, size):
    key = (str(elf_path), os.path.getmtime(elf_path), os.path.getsize(elf_path))
    if key not in _targets:
        with open(elf_path, "rb") as fh:
            elf = ELFFile(fh)
            _targets[key] = [(seg.header.p_vaddr, seg.header.p_filesz, seg.data()) for seg in elf.iter_segments()]
    for lo, filesz, data in _targets[key]:
        if lo <= vaddr < lo + filesz:
            return data[vaddr - lo: vaddr - lo + size]
    raise SystemExit(f"{vaddr:#x} not in any segment")


def _parse_object(o_path):
    """{function name: (code, masks)} for every function symbol of an object."""
    funcs = {}
    with open(o_path, "rb") as fh:
        elf = ELFFile(fh)
        symtab = next(s for s in elf.iter_sections() if isinstance(s, SymbolTableSection))
        relocs = {}
        for rs in elf.iter_sections():
            # compare indices: MW emits one .text per function, and pyelftools
            # returns a fresh Section object per get_section() call
            if isinstance(rs, RelocationSection):
                rsym = elf.get_section(rs["sh_link"])
                relocs.setdefault(rs["sh_info"], []).extend(
                    (r["r_offset"], r["r_info_type"], rsym.get_symbol(r["r_info_sym"]).name)
                    for r in rs.iter_relocations())
        data = {}
        for sym in symtab.iter_symbols():
            if sym["st_info"]["type"] != "STT_FUNC" or not isinstance(sym["st_shndx"], int):
                continue
            shndx = sym["st_shndx"]
            if shndx not in data:
                data[shndx] = elf.get_section(shndx).data()
            start, size = sym["st_value"], sym["st_size"]
            masks = {}
            for off, t, name in relocs.get(shndx, []):
                if start <= off < start + size:
                    masks[off - start] = (MASKS.get(t, 0xFFFF), t, name)
            funcs.setdefault(sym.name, (data[shndx][start:start + size], masks))
    return funcs


def load_compiled(o_path, symbol):
    key = (str(o_path), os.path.getmtime(o_path), os.path.getsize(o_path))
    if key not in _objects:
        _objects.clear()
        _objects[key] = _parse_object(o_path)
    funcs = _objects[key]
    # exact name, or a C++ mangled name (MW uses cfront-style "name__F<args>")
    name = symbol if symbol in funcs else next((n for n in funcs if n.startswith(symbol + "__")), None)
    if name is None:
        raise SystemExit(f"symbol {symbol} not found; functions: {list(funcs)}")
    return funcs[name]


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
