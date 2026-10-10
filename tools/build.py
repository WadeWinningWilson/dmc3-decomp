"""DMC3 build: compile matched C/C++, splice it into splat's asm in address
order, relink the whole ELF and verify it against the original.

usage: python -I tools/build.py [us|jp] [--keep-going]

- Every src/**/*.c|*.cpp is compiled with MW (see COMPILERS below) inside the
  persistent `dmc3b` container (docker run -d --name dmc3b ... dmc3-build).
- Each function section is renamed .text.<name> (tools/mwo_sections.py) and
  mapped to an address: names `func_XXXXXXXX`, or config/<ELF>/symbols.txt.
- splat's asm/<v>/text.s is cut per function (nonmatching..next nonmatching,
  i.e. including trailing padding); C-provided functions are dropped and the
  rest is re-emitted as asm chunks.
- The linker script pins every piece with `. = addr`, so a C function that is
  too large makes ld fail instead of silently shifting everything.
"""
import hashlib
import json
import importlib.util
import os
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
_spec = importlib.util.spec_from_file_location("mwo_jtbl", ROOT / "tools/mwo_jtbl.py")
mwo_jtbl = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(mwo_jtbl)
VERSIONS = {
    "us": dict(elf="SLUS_209.64", orig="orig/SLUS_209.64/SLUS_209.64", gp=0x5C3870,
               data=0x50FF80, sinit=0x5A5F80, ctors=0x5A6E70, bss="4BE100"),
    "jp": dict(elf="SLPM_658.80", orig="orig/SLPM_658.80/SLPM_658.80", gp=0x5C2F70,
               data=0x50F780, sinit=0x5A5680, ctors=0x5A65A0, bss="4BD800"),
}
DEFAULT_CC = "mwcps2-3.0b52-030722"
DEFAULT_FLAGS = "-O3,p -fl divbyzerocheck -inline depth=8"  # inline depth > 4: 5-level inline dtor chains (CFPtclPoly00 0x1BB9F0); sdata threshold = MW default 8 (func_001AAA00); div-by-zero traps (CMovie::Update)
# sections a matched C object may contain; anything else is an error for now
ALLOWED = re.compile(r"^(\.text\..+|\.rel\.text\..+|\.symtab|\.strtab|\.shstrtab|\.comment|"
                     r"\.mwcats.*|\.rel\.mwcats.*|\.reginfo|\.pdr|\.rel\.pdr|\.mdebug.*|"
                     r"\.gnu\.attributes|\.note.*|\.exceptix|\.rel\.exceptix|"
                     r"\.rodata|\.rel\.rodata|\.vtables|\.rel\.vtables|)$")
# .rodata: jump tables (tools/mwo_jtbl.py) and RTTI; .vtables: C++ vtables, whose
# __vt__ symbols mwo_sections.py turns into references to the original data.
# Both are discarded at link time, as is a .data that defines no global symbol
# (MW's RTTI class-name strings).


def sh(cmd, **kw):
    r = subprocess.run(cmd, shell=isinstance(cmd, str), cwd=ROOT, capture_output=True, text=True, **kw)
    if r.returncode:
        sys.stderr.write(r.stdout + r.stderr)
        raise SystemExit(f"command failed: {cmd if isinstance(cmd, str) else ' '.join(cmd)}")
    return r.stdout


def dexec(script):
    return sh(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c", script])


def read_symbols(path):
    syms = {}
    if path.exists():
        for line in path.read_text().splitlines():
            m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;", line)
            if m:
                syms[m.group(1)] = int(m.group(2), 16)
    return syms


def file_flags(src):
    """Per-file overrides: a first-line comment `// cc: <compiler-id> <flags>`
    (or the older `// mwcc:`). Compiler ids starting with ee-gcc use GNU."""
    first = src.read_text(errors="replace").splitlines()[:1]
    m = re.match(r"\s*//\s*(?:mw)?cc:\s*(\S+)\s*(.*)$", first[0]) if first else None
    cc, flags = (m.group(1), m.group(2)) if m else (DEFAULT_CC, DEFAULT_FLAGS)
    if src.suffix == ".cpp":
        # game C++ is built without exceptions (MW tail calls only happen with EH off)
        flags += " -x c++" if cc.startswith("ee-gcc") else " -lang c++ -Cpp_exceptions off"
    return cc, flags


def fix_symtab_info(path):
    """ee-gcc 2.96's gas puts its `gcc2_compiled.` LOCAL symbols after .symtab's sh_info
    (the first global), which current ld rejects: recount it."""
    d = bytearray(path.read_bytes())
    shoff, = struct.unpack_from("<I", d, 0x20)
    shentsize, shnum = struct.unpack_from("<HH", d, 0x2E)
    for i in range(shnum):
        o = shoff + i * shentsize
        sh_type, = struct.unpack_from("<I", d, o + 4)
        if sh_type != 2:  # SHT_SYMTAB
            continue
        off, size = struct.unpack_from("<II", d, o + 16)
        binds = [d[off + k * 16 + 12] >> 4 for k in range(size // 16)]
        first_global = next((k for k, b in enumerate(binds) if b != 0), len(binds))
        if all(b == 0 for b in binds[:first_global]) and all(b != 0 for b in binds[first_global:]):
            struct.pack_into("<I", d, o + 28, first_global)  # sh_info
            path.write_bytes(d)
        return


def compile_sources(v, b):
    objs = []
    srcs = sorted(p for p in (ROOT / "src").rglob("*") if p.suffix in (".c", ".cpp")
                  and "poc" not in p.parts)
    for src in srcs:
        rel = src.relative_to(ROOT).as_posix()
        cc, flags = file_flags(src)
        # compiler + flags are part of the cache key, so a flag change recompiles
        key = hashlib.sha1(f"{cc} {flags}".encode()).hexdigest()[:8]
        raw = b / "c" / f"{rel}.{key}.raw.o"
        out = b / "c" / f"{rel}.{key}.o"
        raw.parent.mkdir(parents=True, exist_ok=True)
        if not out.exists() or out.stat().st_mtime < src.stat().st_mtime:
            if cc.startswith("ee-gcc"):
                # GNU names function sections itself
                dexec(f"sh tools/eegcc.sh {cc} {out.relative_to(ROOT).as_posix()} {rel} "
                      f"{flags} -ffunction-sections -Iinclude")
                fix_symtab_info(out)
            else:
                dexec(f"MWCIncludes=. wibo tools/compilers/{cc}/mwccps2.exe -c {flags} -nostdinc "
                      f"-Iinclude -o {raw.relative_to(ROOT).as_posix()} {rel}")
                sh([sys.executable, "-I", "tools/mwo_sections.py", str(raw), str(out)])
        objs.append(out)
    return objs


def object_functions(obj):
    """{func_name: (section_name, size)} for a section-renamed MW object."""
    d = obj.read_bytes()
    shoff, = struct.unpack_from("<I", d, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", d, 0x2E)
    hdr = [struct.unpack_from("<10I", d, shoff + i * shentsize) for i in range(shnum)]
    so = hdr[shstrndx][4]
    funcs = {}
    exported = set()   # sections that define a global or weak symbol
    weak = set()       # sections of weak functions (out-of-line copies of inlines)
    for s in hdr:
        if s[1] == 2:  # SHT_SYMTAB
            for k in range(s[5] // 16):
                info, = struct.unpack_from("<B", d, s[4] + k * 16 + 12)
                shndx, = struct.unpack_from("<H", d, s[4] + k * 16 + 14)
                if info >> 4:
                    exported.add(shndx)
                if info >> 4 == 2 and info & 0xF == 2:
                    weak.add(shndx)
    for i, s in enumerate(hdr):
        n = d[so + s[0]:d.index(b"\0", so + s[0])].decode()
        if n in (".data", ".sdata") and i not in exported:
            continue
        if not ALLOWED.match(n) and s[5]:
            raise SystemExit(f"{obj}: section {n} (size {s[5]:#x}) is not supported yet")
        if n.startswith(".text."):
            funcs[n[6:]] = (n, s[5], i in weak)
    return funcs


def split_text(text_s):
    """Return (header, [(addr, name, chunk_text)]) cut at `nonmatching` lines."""
    src = text_s.read_text()
    parts = re.split(r"(?m)^(?=nonmatching )", src)
    header, pieces = parts[0], []
    for p in parts[1:]:
        m = re.match(r"nonmatching (\w+)", p)
        a = re.search(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ", p)
        pieces.append((int(a.group(1), 16), m.group(1), p))
    return header, pieces


GAME_START = 0x195158  # below: SDK / CRI / Capcom libraries (ee-gcc and C); above: MW-compiled game code


def write_progress(vname, b, pieces, cfuncs):
    """build/<v>/progress.json (+ shields.io endpoint badges) after a verified build."""
    def area(a):
        return "game" if a >= GAME_START else "libs"
    size = {a: (pieces[i + 1][0] if i + 1 < len(pieces) else a) - a for i, (a, _, _) in enumerate(pieces)}
    cats = {k: {"functions": 0, "matched_functions": 0, "code": 0, "matched_code": 0} for k in ("all", "game", "libs")}
    for a, _, _ in pieces:
        for k in ("all", area(a)):
            cats[k]["functions"] += 1
            cats[k]["code"] += size[a]
            if a in cfuncs:
                cats[k]["matched_functions"] += 1
                cats[k]["matched_code"] += size[a]
    units = {}
    for a, c in cfuncs.items():
        src = re.sub(r"^build/[^/]+/c/|\.[0-9a-f]{8}(\.jt)?\.o$", "", c[0].relative_to(ROOT).as_posix())
        u = units.setdefault(src, {"source": src, "functions": 0, "code": 0})
        u["functions"] += 1
        u["code"] += size.get(a, c[3])
    for v in cats.values():
        v["functions_pct"] = round(100 * v["matched_functions"] / max(v["functions"], 1), 2)
        v["code_pct"] = round(100 * v["matched_code"] / max(v["code"], 1), 2)
    rep = {"version": VERSIONS[vname]["elf"], "categories": cats,
           "units": sorted(units.values(), key=lambda u: -u["code"])}
    (b / "progress.json").write_text(json.dumps(rep, indent=1) + "\n")
    for k, label in (("all", "code"), ("game", "game code"), ("libs", "libraries")):
        (b / f"badge_{k}.json").write_text(json.dumps({
            "schemaVersion": 1, "label": label, "message": f"{cats[k]['code_pct']:.2f}%", "color": "blue"}))
    print(f"[{vname}] progress: code {cats['all']['code_pct']}% "
          f"(game {cats['game']['code_pct']}%, libraries {cats['libs']['code_pct']}%), "
          f"functions {cats['all']['functions_pct']}%; details in {b.relative_to(ROOT).as_posix()}/progress.json")


def main():
    vname = sys.argv[1] if len(sys.argv) > 1 and not sys.argv[1].startswith("-") else "us"
    V = VERSIONS[vname]
    b = ROOT / "build" / vname
    syms = read_symbols(ROOT / f"config/{V['elf']}/symbols.txt")
    for auto in sorted(ROOT.glob(f"config/{V['elf']}/symbols.auto*.txt")):  # generated placeholders
        syms.update(read_symbols(auto))

    # 1. compile C and map functions to addresses
    cfuncs = {}  # addr -> (obj, section, name, size)
    for obj in compile_sources(vname, b):
        for name, (sec, size, is_weak) in object_functions(obj).items():
            m = re.fullmatch(r"func_([0-9A-F]{8})", name)
            addr = int(m.group(1), 16) if m else syms.get(name)
            if is_weak and (addr is None or addr in cfuncs):
                continue  # inline copy: unmapped, or already provided by another object
            if addr is None:
                raise SystemExit(f"{obj}: no address for {name} (add it to config/{V['elf']}/symbols.txt)")
            if addr in cfuncs:
                raise SystemExit(f"{name} defined twice: {cfuncs[addr][0]} and {obj}")
            cfuncs[addr] = (obj, sec, name, size)
    if "--compile-only" in sys.argv:  # CI without game files: compile + symbol checks only
        print(f"[{vname}] compiled {len(cfuncs)} functions; every one has an address")
        return

    # 2. cut asm and drop C-provided functions
    header, pieces = split_text(ROOT / f"asm/{vname}/text.s")
    by_addr = {a: (n, t) for a, n, t in pieces}

    # 2a. switch jump tables: point C code at the original tables (kept in the
    #     data asm) after verifying the C tables' contents match
    orig = (ROOT / V["orig"]).read_bytes()
    word = lambda a: struct.unpack_from("<I", orig, a - 0x100000 + 0x80)[0]
    addr_of = {c[2]: a for a, c in cfuncs.items()}
    by_obj = {}
    for a, c in cfuncs.items():
        by_obj.setdefault(c[0], []).append((a, c))
    for obj, lst in by_obj.items():
        jt = {}
        for a, c in lst:
            text = by_addr.get(a, (None, ""))[1]
            names = list(dict.fromkeys(re.findall(r"%hi\((jtbl_[0-9A-F]{8})\)", text)))
            if names:
                jt[c[2]] = [(n, int(n[5:], 16)) for n in names]
        jo = obj.with_suffix(".jt.o")
        jo.write_bytes(obj.read_bytes())
        mwo_jtbl.patch(str(jo), jt, addr_of, word)
        for a, c in lst:
            cfuncs[a] = (jo,) + c[1:]
    for a in cfuncs:
        if a not in by_addr:
            raise SystemExit(f"C function at {a:#x} does not start a splat function")
    chunks, cur, abs_syms = [], None, []
    for a, n, t in pieces:
        if a in cfuncs:
            cur = None
            # global labels (e.g. jump-table targets) inside the dropped function
            for lab, la in re.findall(r"(?m)^[jad]label (\w+)\n\s*/\* [0-9A-F]+ ([0-9A-F]{8})", t):
                abs_syms.append((lab, int(la, 16)))
            continue
        if cur is None:
            cur = [a, []]
            chunks.append(cur)
        cur[1].append(t)

    cdir = b / "chunks"
    cdir.mkdir(parents=True, exist_ok=True)
    for old in cdir.glob("*.s"):
        old.unlink()
    for a, texts in chunks:
        (cdir / f"text_{a:08X}.s").write_text(header + "".join(texts))

    # 3. linker script: pin every piece at its address
    order = sorted([(a, "asm", f"build/{vname}/chunks/text_{a:08X}.o", ".text") for a, _ in chunks] +
                   [(a, "c", c[0].relative_to(ROOT).as_posix(), c[1]) for a, c in cfuncs.items()])
    L = [f"/* generated by tools/build.py — do not edit */", "SECTIONS", "{",
         f"    _gp = {V['gp']:#X};", "    .main 0x100000 : SUBALIGN(4)", "    {", "        FILL(0x00000000);"]
    for a, kind, path, sec in order:
        L.append(f"        . = {a:#X} - 0x100000;")  # "." is section-relative here
        L.append(f"        {path}({sec});")
    L += [f"        . = {V['data']:#X} - 0x100000;",
          f"        build/{vname}/asm/{vname}/data/data.data.o(.data);",
          f"        . = {V['sinit']:#X} - 0x100000;",
          f"        build/{vname}/asm/{vname}/sinit.o(.text);",
          f"        . = {V['ctors']:#X} - 0x100000;",
          f"        build/{vname}/asm/{vname}/data/ctors_data.data.o(.data);",
          "    }",
          f"    .bss (NOLOAD) : {{ build/{vname}/asm/{vname}/data/{V['bss']}.bss.o(.bss); }}",
          "    /DISCARD/ : { *(.reginfo) *(.MIPS.abiflags) *(.pdr) *(.gnu.attributes) *(.comment) *(.mwcats*) *(.rel.mwcats*) *(.mdebug*) *(.rel.pdr) *(.note*) *(.exceptix) *(.rel.exceptix) *(.rodata) *(.rel.rodata) *(.vtables) *(.rel.vtables) *(.data) *(.sdata) *(.text.*) *(.rel.text.*) }",
          "}"]
    L += [f"{lab} = {la:#X};" for lab, la in abs_syms]
    # named (e.g. C++ mangled) symbols from symbol_addrs: when C provides the
    # function, alias the asm-side func_ name to it; otherwise define the name
    # at its address so C code can call functions that are still asm.
    cnames = {c[2] for c in cfuncs.values()}
    for name, addr in sorted(syms.items(), key=lambda kv: kv[1]):
        if name in cnames:
            L.append(f"func_{addr:08X} = {name};")
        elif not name.startswith("func_"):
            L.append(f"{name} = {addr:#X};")
    ld = b / f"{V['elf']}.gen.ld"
    ld.write_text("\n".join(L) + "\n")

    # 4. assemble, link, splice header/footer, verify
    AS = "mips-linux-gnu-as -EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -Iinclude"
    dexec(f"set -e; cd build/{vname}/chunks; for s in *.s; do o=${{s%.s}}.o; "
          f"[ \"$o\" -nt \"$s\" ] || {AS.replace('-Iinclude', '-I/w/include')} -o $o $s; done")
    for s in ("data/data.data", "sinit", "data/ctors_data.data", f"data/{V['bss']}.bss"):
        o = f"build/{vname}/asm/{vname}/{s}.o"
        dexec(f"[ -f {o} ] || {AS} -o {o} asm/{vname}/{s}.s")
    elf = V["elf"]
    dexec(f"set -e; mips-linux-gnu-ld -EL -T config/{elf}/undefined_syms_auto.txt "
          f"-T config/{elf}/undefined_funcs_auto.txt -T build/{vname}/{elf}.gen.ld "
          f"-Map build/{vname}/{elf}.map -o build/{vname}/{elf}.main.elf --no-check-sections; "
          f"mips-linux-gnu-objcopy -O binary -j .main build/{vname}/{elf}.main.elf build/{vname}/main.bin")
    orig = (ROOT / V["orig"]).read_bytes()
    main_bin = (b / "main.bin").read_bytes()
    out = orig[:0x80] + main_bin + orig[0x80 + len(main_bin):]
    (b / elf).write_bytes(out)
    ok = hashlib.sha1(out).digest() == hashlib.sha1(orig).digest() and len(out) == len(orig)
    total = len(pieces)
    text_bytes = pieces[-1][0] - pieces[0][0]
    c_bytes = sum(c[3] for c in cfuncs.values())
    game = [a for a in cfuncs if a >= 0x195158]
    print(f"[{vname}] C functions linked in place: {len(cfuncs)}/{total} "
          f"({100 * len(cfuncs) / total:.2f}% of functions, {c_bytes:,}/{text_bytes:,} bytes = "
          f"{100 * c_bytes / text_bytes:.2f}% of .text), asm chunks: {len(chunks)}")
    if ok:
        print(f"[{vname}] {elf}: OK  sha1 {hashlib.sha1(out).hexdigest()}")
        write_progress(vname, b, pieces, cfuncs)
    else:
        n = next((i for i in range(min(len(out), len(orig))) if out[i] != orig[i]), None)
        print(f"[{vname}] {elf}: MISMATCH (first differing byte at file offset {n:#x}, "
              f"vaddr {n - 0x80 + 0x100000:#x})" if n is not None else f"[{vname}] size differs")
        sys.exit(1)


if __name__ == "__main__":
    main()
