"""Retarget a compiled function's switch jump-table references to the
original table, and verify the table contents match.

Splat keeps the original jump tables in the data asm as absolute words, so
a matching C function can simply use them. For each function this:
  1. finds HI16/LO16 relocations in .rel.text.<func> whose symbol lives in the
     object's .rodata (MW emits one local symbol per table, e.g. "@16"),
  2. pairs them, in order of first use, with the jtbl_XXXXXXXX labels the
     original asm of that function references,
  3. checks every C table entry (R_MIPS_32 -> func + offset) against the
     original table word at that label's address,
  4. appends an undefined global symbol jtbl_XXXXXXXX and rewrites the
     relocations to it. The C .rodata table is then dead and is discarded
     by the linker script.

Used by tools/build.py; raises SystemExit with a reason on any mismatch.
"""
import struct

SHT_SYMTAB, SHT_REL = 2, 9
R_MIPS_32, R_MIPS_HI16, R_MIPS_LO16 = 2, 5, 6


def _hdrs(d):
    shoff, = struct.unpack_from("<I", d, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", d, 0x2E)
    return shoff, shentsize, shnum, shstrndx


def _cstr(d, off):
    return bytes(d[off:d.index(b"\0", off)]).decode()


def patch(path, jtbls_by_func, func_addrs, orig_word):
    """jtbls_by_func: {func: [(jtbl_name, jtbl_addr), ...]}; func_addrs: {func: addr};
    orig_word(addr) -> u32 from the original ELF. Returns number of tables retargeted."""
    d = bytearray(open(path, "rb").read())
    shoff, shentsize, shnum, shstrndx = _hdrs(d)
    sh = [list(struct.unpack_from("<10I", d, shoff + i * shentsize)) for i in range(shnum)]
    shstr = sh[shstrndx][4]
    names = [_cstr(d, shstr + s[0]) for s in sh]
    symtab_i = next(i for i, s in enumerate(sh) if s[1] == SHT_SYMTAB)
    strtab_i = sh[symtab_i][6]
    syms = [list(struct.unpack_from("<IIIBBH", d, sh[symtab_i][4] + k * 16))
            for k in range(sh[symtab_i][5] // 16)]
    symname = [_cstr(d, sh[strtab_i][4] + s[0]) for s in syms]
    rodata = {i for i, n in enumerate(names) if n == ".rodata"}

    def rels(sec_i):
        for j, s in enumerate(sh):
            if s[1] == SHT_REL and s[7] == sec_i:
                return j, [list(struct.unpack_from("<II", d, s[4] + k * 8)) for k in range(s[5] // 8)]
        return None, []

    new_syms, new_str, done = [], bytearray(), 0
    for i, n in enumerate(names):
        if not n.startswith(".text."):
            continue
        func = n[6:]
        relsec, rl = rels(i)
        uses = []
        for off, info in rl:
            si, t = info >> 8, info & 0xFF
            if t in (R_MIPS_HI16, R_MIPS_LO16) and syms[si][5] in rodata and si not in uses:
                uses.append(si)
        want = jtbls_by_func.get(func, [])
        if not uses and not want:
            continue
        if len(uses) != len(want):
            raise SystemExit(f"{path}: {func} uses {len(uses)} jump tables, original asm uses {len(want)}")
        mapping = {}
        for si, (jname, jaddr) in zip(uses, want):
            # verify table contents: entries are R_MIPS_32 relocs against the function
            ro_i = syms[si][5]
            _, rorel = rels(ro_i)
            base = syms[si][1]
            size = syms[si][2] or 4 * sum(1 for o, _ in rorel if o >= base)
            for k in range(size // 4):
                o = base + 4 * k
                ent = next((r for r in rorel if r[0] == o), None)
                if ent is None or (ent[1] & 0xFF) != R_MIPS_32:
                    raise SystemExit(f"{path}: {func}: table entry {k} is not a code address")
                target_sym = symname[ent[1] >> 8]
                tbase = func_addrs.get(target_sym)
                if tbase is None:
                    raise SystemExit(f"{path}: {func}: table entry {k} points into {target_sym}")
                addend, = struct.unpack_from("<I", d, sh[ro_i][4] + o)
                got, exp = tbase + addend, orig_word(jaddr + 4 * k)
                if got != exp:
                    raise SystemExit(f"{path}: {func}: {jname}[{k}] = {got:#x}, original {exp:#x}")
            new_index = len(syms) + len(new_syms)
            new_syms.append([0, 0, 0, 0x10, 0, 0, jname])  # GLOBAL NOTYPE UNDEF
            mapping[si] = new_index
        # rewrite the function's relocations
        for k, (off, info) in enumerate(rl):
            si, t = info >> 8, info & 0xFF
            if si in mapping:
                struct.pack_into("<II", d, sh[relsec][4] + k * 8, off, (mapping[si] << 8) | t)
        done += len(mapping)
    if not new_syms:
        return 0
    # append strings, then a grown copy of .symtab, at EOF
    str_off = len(d)
    old_str = bytes(d[sh[strtab_i][4]:sh[strtab_i][4] + sh[strtab_i][5]])
    strtab = bytearray(old_str)
    for s in new_syms:
        s[0] = len(strtab)
        strtab += s[6].encode() + b"\0"
    d += strtab
    sh[strtab_i][4], sh[strtab_i][5] = str_off, len(strtab)
    while len(d) % 4:
        d += b"\0"
    sym_off = len(d)
    d += bytes(d[sh[symtab_i][4]:sh[symtab_i][4] + sh[symtab_i][5]])
    for s in new_syms:
        d += struct.pack("<IIIBBH", s[0], s[1], s[2], s[3], s[4], s[5])
    sh[symtab_i][4] = sym_off
    sh[symtab_i][5] += 16 * len(new_syms)
    for i, s in enumerate(sh):
        struct.pack_into("<10I", d, shoff + i * shentsize, *s)
    open(path, "wb").write(d)
    return done
