"""Clone matched C functions onto unmatched functions with the same instructions.

Many functions are copies of each other that differ only in constants and symbols (struct
offsets, ids, data addresses). For every unmatched function whose asm, with immediates,
symbols and labels blanked, equals that of a function already in a C source file, this takes
the matched function's code, substitutes the differing constants and symbols, and keeps the
result only if it matches byte-for-byte. Output: src/<dir>/auto/clones_<stem>.c next to each
source file, with the same `// cc:` line and the declarations the copies use.

usage: python -I tools/gen_clones.py
"""
import collections
import contextlib
import importlib.util
import io
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)
spec2 = importlib.util.spec_from_file_location("build", ROOT / "tools/build.py")
bd = importlib.util.module_from_spec(spec2)
spec2.loader.exec_module(bd)

HEADER = re.compile(r"^\w[\w *]*?[ *](func_[0-9A-F]{8})\([^;{}\n]*\)[^{}\n]*\{\n.*?^\}", re.M | re.S)


def asm_functions():
    src = (ROOT / "asm/us/text.s").read_text()
    out = {}
    for name, body in re.findall(r"^glabel (func_[0-9A-F]+)\n(.*?)^endlabel", src, re.M | re.S):
        out[name] = [re.sub(r"\s+", " ", x.strip()) for x in re.findall(r"\*/\s+(.*)", body)]
    return out


TOKEN = re.compile(r"\((0x[0-9A-F]+) (?:>> 16|& 0xFFFF)\)|(?:func|D)_[0-9A-F]{8}|\.L[0-9A-F]{8}|-?0x[0-9A-F]+|\b\d+\b")


def norm(ins):
    return " ; ".join(TOKEN.sub("#", t) for t in ins)


def tokens(ins):
    out = []
    for t in ins:
        for m in TOKEN.finditer(t):
            out.append(m.group(1) or m.group(0))
    return out


def as_int(tok):
    try:
        return int(tok, 0)
    except ValueError:
        return None


def substitute(code, pairs):
    """Replace every constant/symbol of the matched function by the clone's value."""
    for a, b in pairs:
        if a.startswith(("func_", "D_")):
            code = re.sub(rf"\b{a}\b", b, code)
            continue
        va, vb = as_int(a), as_int(b)
        if va is None or vb is None:
            continue
        reps = {str(va): str(vb), f"{va:#x}": f"{vb:#x}", f"0x{va:X}": f"0x{vb:X}"}
        if va < 0:
            reps[f"-{-va:#x}"] = f"-{-vb:#x}" if vb < 0 else f"{vb:#x}"
        pat = "|".join(re.escape(k) for k in sorted(reps, key=len, reverse=True))
        code = re.sub(rf"(?<![\w.])(?:{pat})(?![\w.])", lambda m: reps[m.group(0)], code)
    return code


def compile_and_check(path, names, cc, flags):
    rel = path.relative_to(ROOT).as_posix()
    obj = "scratch/clones_try.o"
    if cc.startswith("ee-gcc"):
        cmd = f"sh tools/eegcc.sh {cc} {obj} {rel} {flags} -Iinclude"
    else:
        cmd = f"MWCIncludes=. wibo tools/compilers/{cc}/mwccps2.exe -c {flags} -nostdinc -Iinclude -o {obj} {rel}"
    r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c", cmd], capture_output=True, text=True)
    if r.returncode:
        return None, r.stdout + r.stderr
    ok = set()
    for n in names:
        buf = io.StringIO()
        with contextlib.redirect_stdout(buf):
            try:
                if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj), n, hex(int(n[5:], 16))) == 0:
                    ok.add(n)
            except BaseException:
                pass
    return ok, ""


def main():
    asm = asm_functions()
    defined = {}  # func -> (file, code)
    for f in sorted((ROOT / "src").rglob("*.c")):
        if f.name.startswith("clones_"):
            continue
        for m in HEADER.finditer(f.read_text(errors="replace")):
            defined.setdefault(m.group(1), (f, m.group(0)))
    for f in list((ROOT / "src").rglob("*.c")) + list((ROOT / "src").rglob("*.cpp")):
        for m in re.finditer(r"\b(func_[0-9A-F]{8})\s*\([^;{}\n]*\)[^{}\n]*\{", f.read_text(errors="replace")):
            defined.setdefault(m.group(1), (None, None))
    # functions with a real name in symbols.txt are defined under that name
    for m in re.finditer(r"=\s*0x([0-9A-Fa-f]+);", "".join(
            p.read_text() for p in (ROOT / "config/SLUS_209.64").glob("symbols*.txt"))):
        defined.setdefault(f"func_{int(m.group(1), 16):08X}", (None, None))
    groups = collections.defaultdict(list)
    for n, ins in asm.items():
        groups[norm(ins)].append(n)
    per_file = collections.defaultdict(list)
    for members in groups.values():
        srcs = [n for n in members if n in defined and defined[n][0] is not None]
        todo = [n for n in members if n not in defined]
        if not srcs or not todo:
            continue
        m_ = srcs[0]
        f, code = defined[m_]
        ta = tokens(asm[m_])
        for u in todo:
            tb = tokens(asm[u])
            if len(ta) != len(tb):
                continue
            pairs = list(dict.fromkeys((a, b) for a, b in zip(ta, tb) if a != b and not a.startswith(".L")))
            # one source value must map to one value
            src_map = {}
            if any(src_map.setdefault(a, b) != b for a, b in pairs):
                continue
            new = substitute(code, pairs).replace(m_, u)
            per_file[f].append((u, new, code))
    total = 0
    for f, items in per_file.items():
        text = f.read_text(errors="replace")
        cc, flags = bd.file_flags(f)
        first = text.splitlines()[0] if text.startswith("// cc:") else None
        # the declarations of the source file (everything that is not a function definition)
        decls = HEADER.sub("", text)
        # one-line definitions (`int f(...) { return ...; }`) are not declarations either
        decls = "\n".join(l for l in decls.splitlines() if not l.startswith("// cc:") and
                          not re.match(r"\w[^;\n]*\bfunc_[0-9A-F]{8}\([^)]*\)[^;\n]*\{.*\}\s*$", l))
        out = ROOT / f.parent / f"clones_{f.stem}.c"
        if out.parent.name != "auto":
            out = ROOT / "src" / f.relative_to(ROOT / "src").parts[0] / "auto" / f"clones_{f.stem}.c"
        out.parent.mkdir(parents=True, exist_ok=True)
        keep = items
        while keep:
            body = ((first + "\n") if first else "") + \
                f"/* AUTO-GENERATED by tools/gen_clones.py: copies of functions in {f.relative_to(ROOT).as_posix()}\n" \
                " * with their constants and symbols substituted, verified byte-for-byte. */\n" + \
                decls + "\n\n" + "\n\n".join(c for _, c, _ in keep) + "\n"
            out.write_text(body)
            ok, err = compile_and_check(out, [u for u, _, _ in keep], cc, flags)
            if ok is None:
                bad = {int(x) for x in re.findall(r"#\s+(\d+):", err)}
                lines = body.split("\n")
                drop = set()
                for ln in bad:
                    for j in range(min(ln, len(lines)) - 1, -1, -1):
                        mm = re.match(r"\w[\w *]*?[ *](func_[0-9A-F]{8})\(", lines[j])
                        if mm and not lines[j].rstrip().endswith(";"):
                            drop.add(mm.group(1))
                            break
                if not drop:
                    keep = []
                    break
                keep = [k for k in keep if k[0] not in drop]
                continue
            if len(ok) == len(keep):
                break
            keep = [k for k in keep if k[0] in ok]
        if keep:
            print(f"{out.relative_to(ROOT).as_posix()}: {len(keep)} clones")
            total += len(keep)
        elif out.exists():
            out.unlink()
    print(f"{total} clones")


if __name__ == "__main__":
    main()
