"""Rename the per-function sections of a Metrowerks PS2 object so GNU ld can
place functions individually: `.text` -> `.text.<func>` (and the matching
`.rel.text` -> `.rel.text.<func>`), like GCC's -ffunction-sections.

MW already emits one `.text` section per function; it just names them all
`.text`. The new names are appended to a relocated copy of .shstrtab at the
end of the file; no section contents move.

usage: python -I tools/mwo_sections.py <in.o> <out.o>
"""
import re
import struct
import sys

SHT_SYMTAB, SHT_REL, STT_FUNC = 2, 9, 2


def main(src, dst):
    d = bytearray(open(src, "rb").read())
    assert d[:4] == b"\x7fELF" and d[4] == 1 and d[5] == 1, "ELF32 LE only"
    e_shoff, = struct.unpack_from("<I", d, 0x20)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", d, 0x2E)

    def sh(i):
        return list(struct.unpack_from("<10I", d, e_shoff + i * e_shentsize))

    shdrs = [sh(i) for i in range(e_shnum)]
    stro = shdrs[e_shstrndx][4]
    strsz = shdrs[e_shstrndx][5]
    names = bytes(d[stro:stro + strsz])

    def name(off):
        return names[off:names.index(b"\0", off)].decode()

    # function symbol owning each section
    owner = {}
    for s in shdrs:
        if s[1] == SHT_SYMTAB:
            symstr = shdrs[s[6]]
            for k in range(s[5] // 16):
                st_name, st_value, st_size, st_info, st_other, st_shndx = struct.unpack_from(
                    "<IIIBBH", d, s[4] + k * 16)
                if st_info & 0xF == STT_FUNC and st_value == 0 and st_shndx < e_shnum:
                    o = symstr[4] + st_name
                    owner[st_shndx] = bytes(d[o:d.index(b"\0", o)]).decode()

    new = bytearray(names)
    renamed = 0
    for i, s in enumerate(shdrs):
        n = name(s[0])
        target = i if n == ".text" else (s[7] if n == ".rel.text" and s[1] == SHT_REL else None)
        if target is not None and target in owner:
            s[0] = len(new)
            new += f"{n}.{owner[target]}".encode() + b"\0"
            renamed += n == ".text"

    # MW marks out-of-line copies of inline functions with the processor-specific
    # binding 13 (one copy per TU that uses them); GNU ld needs STB_WEAK (2).
    weak = 0
    for s in shdrs:
        if s[1] == SHT_SYMTAB:
            for k in range(s[5] // 16):
                off = s[4] + k * 16 + 12
                if d[off] >> 4 == 13:
                    d[off] = (2 << 4) | (d[off] & 0xF)
                    weak += 1

    # Vtables stay in the original data (still asm), so a C++ object's own
    # `__vt__<class>` definition is turned into an undefined reference; the
    # linker script defines it at the original address from symbol_addrs.
    unvt = 0
    for s in shdrs:
        if s[1] == SHT_SYMTAB:
            for k in range(s[5] // 16):
                off = s[4] + k * 16
                st_name, = struct.unpack_from("<I", d, off)
                o = shdrs[s[6]][4] + st_name
                nm = bytes(d[o:d.index(b"\0", o)])
                st_shndx, = struct.unpack_from("<H", d, off + 14)
                if nm.startswith(b"__vt__") and st_shndx != 0:
                    struct.pack_into("<II", d, off + 4, 0, 0)   # value, size
                    struct.pack_into("<H", d, off + 14, 0)      # SHN_UNDEF
                    d[off + 12] = (1 << 4) | (d[off + 12] & 0xF)  # GLOBAL
                    unvt += 1

    # Source-level `static` functions are local symbols. MW's codegen for their
    # callers depends on that (it tracks a static callee's register usage), so
    # the source keeps `static`; for linking against code still in asm, append a
    # GLOBAL alias for every local FUNC named func_XXXXXXXX.
    aliases = []
    for s in shdrs:
        if s[1] == SHT_SYMTAB:
            symtab_i = shdrs.index(s)
            strtab_i = s[6]
            for k in range(s[5] // 16):
                st_name, st_value, st_size, st_info, st_other, st_shndx = struct.unpack_from(
                    "<IIIBBH", d, s[4] + k * 16)
                o = shdrs[strtab_i][4] + st_name
                nm = bytes(d[o:d.index(b"\0", o)]).decode()
                if st_info >> 4 == 0 and st_info & 0xF == STT_FUNC and re.fullmatch(r"func_[0-9A-F]{8}", nm):
                    aliases.append((nm, st_value, st_size, st_other, st_shndx))
    if aliases:
        strtab = bytearray(d[shdrs[strtab_i][4]:shdrs[strtab_i][4] + shdrs[strtab_i][5]])
        extra = b""
        for nm, val, size, other, shndx in aliases:
            extra += struct.pack("<IIIBBH", len(strtab), val, size, (1 << 4) | STT_FUNC, other, shndx)
            strtab += nm.encode() + b"\0"
        shdrs[strtab_i][4], shdrs[strtab_i][5] = len(d), len(strtab)
        d += strtab
        while len(d) % 4:
            d += b"\0"
        symdata = bytes(d[shdrs[symtab_i][4]:shdrs[symtab_i][4] + shdrs[symtab_i][5]])
        shdrs[symtab_i][4], shdrs[symtab_i][5] = len(d), len(symdata) + len(extra)
        d += symdata + extra

    # relocate .shstrtab to EOF, then rewrite all section headers
    shdrs[e_shstrndx][4] = len(d)
    shdrs[e_shstrndx][5] = len(new)
    d += new
    for i, s in enumerate(shdrs):
        struct.pack_into("<10I", d, e_shoff + i * e_shentsize, *s)
    open(dst, "wb").write(d)
    print(f"{src}: renamed {renamed} function sections, {weak} inline symbols made weak, {len(aliases)} static functions aliased, {unvt} vtables external")


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
