"""Fingerprint a PS2 EE ELF for decomp baselining.

Reports header, program/section headers, symbol tables, debug sections, and
compiler/library version strings found in the binary.

usage: python -I tools/elf_report.py <elf> [--json out.json]
"""
import hashlib
import json
import re
import sys

from elftools.elf.elffile import ELFFile
from elftools.elf.sections import SymbolTableSection

VERSION_PATTERNS = [
    rb"GCC: \([^)]*\) [\x20-\x7e]{1,60}",
    rb"gcc2_compiled\.",
    rb"gcc_compiled\.",
    rb"ProDG[\x20-\x7e]{0,60}",
    rb"SN Systems[\x20-\x7e]{0,60}",
    rb"SNC[\x20-\x7e]{0,30}",
    rb"Metrowerks[\x20-\x7e]{0,60}",
    rb"CodeWarrior[\x20-\x7e]{0,60}",
    rb"PsIIlib[\x20-\x7e]{0,60}",
    rb"PsII[a-z]+ +\d[\x20-\x7e]{0,40}",
    rb"Sony Computer Entertainment[\x20-\x7e]{0,40}",
    rb"libsd[\x20-\x7e]{0,30}",
    rb"[A-Za-z]:\\[\x20-\x7e]{4,120}\.(?:c|cpp|cc|h|hpp|s|o|a|lib)",
    rb"/[\x21-\x7e]{2,120}\.(?:c|cpp|cc|o|a)\b",
    rb"\b[\w./\\-]{2,80}\.(?:cpp|cc)\b",
    rb"__FILE__|assert(?:ion)? fail[\x20-\x7e]{0,60}",
]


def main(path, json_out=None):
    data = open(path, "rb").read()
    rep = {"path": path, "size": len(data), "md5": hashlib.md5(data).hexdigest(),
           "sha1": hashlib.sha1(data).hexdigest()}
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        h = elf.header
        rep["header"] = {"class": elf.elfclass, "machine": h.e_machine, "entry": hex(h.e_entry),
                         "flags": hex(h.e_flags), "type": h.e_type}
        rep["segments"] = [{"type": s.header.p_type, "offset": hex(s.header.p_offset),
                            "vaddr": hex(s.header.p_vaddr), "filesz": hex(s.header.p_filesz),
                            "memsz": hex(s.header.p_memsz), "flags": s.header.p_flags}
                           for s in elf.iter_segments()]
        rep["sections"] = [{"name": s.name, "type": s.header.sh_type, "addr": hex(s.header.sh_addr),
                            "offset": hex(s.header.sh_offset), "size": hex(s.header.sh_size)}
                           for s in elf.iter_sections()]
        syms = {}
        for s in elf.iter_sections():
            if isinstance(s, SymbolTableSection):
                entries = list(s.iter_symbols())
                funcs = [e for e in entries if e["st_info"]["type"] == "STT_FUNC"]
                syms[s.name] = {"total": len(entries), "funcs": len(funcs),
                                "sample": [e.name for e in funcs[:40]]}
        rep["symtabs"] = syms
        rep["has_dwarf"] = elf.has_dwarf_info()
    found = {}
    for pat in VERSION_PATTERNS:
        hits = sorted({m.group(0).decode(errors="replace") for m in re.finditer(pat, data)})
        if hits:
            found[pat.decode(errors="replace")] = hits[:60]
    rep["strings"] = found
    out = json.dumps(rep, indent=2)
    if json_out:
        open(json_out, "w").write(out)
    print(out[:20000])


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[3] if len(sys.argv) > 3 and sys.argv[2] == "--json" else None)
