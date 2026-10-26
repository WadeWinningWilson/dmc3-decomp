"""Redistribute matched functions into one source file per inferred translation unit.

Every func_XXXXXXXX definition in the given source files is moved to the unit that
config/SLUS_209.64/tus.txt assigns to its address. The function takes along the
declarations, types, classes, macros and static inline helpers it uses, copied
verbatim from its original file. Output layout:

    src/game/<group>/<Unit>.c / .cpp    game units (group chosen from the unit name)
    src/lib/<library>/obj_XXXXXXXX.c    ee-gcc library objects

A unit gets one file per language and per compiler setting (`// cc:` line or file-level
#pragma). Declarations of one name that disagree inside a unit file are written at block
scope in each function that uses them, and disagreeing macros are defined and undefined
around each function. A function whose types or inline helpers clash with ones already in
the file, or whose declarations disagree with an included header or with a definition in
the file, goes to an overflow file `<Unit>_2.c`, then `_3`, and so on.

With --apply the new files are written into src/ and the functions are removed from the
old files (a file left without functions is deleted). The full build is the gate: run
tools/build.py and check the SHA-1, and `git checkout` + `git clean` src/ if it differs.

usage: python -I tools/split_tus.py [--apply] SRC...
       (without --apply it only writes the new files under build/split/ and reports)
       python -I tools/split_tus.py --where func_XXXXXXXX
       (prints the unit file a new function at that address belongs in)
"""
import collections
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TUS = ROOT / "config/SLUS_209.64/tus.txt"
KEYWORDS = set("""auto break case char const continue default do double else enum extern float for goto
if inline int long register return short signed sizeof static struct switch typedef union unsigned
void volatile while class public private protected virtual operator new delete this bool true false
asm __asm__ __attribute__ aligned packed template typename namespace using friend explicit""".split())
GROUPS = [(r"^(Com)?Em\d", "enemy"), (r"^UID|^Ui", "ui"), (r"^Pl\d|^Player|^IPlayer", "player"),
          (r"^Stage", "stage"), (r"^(F?Ptcl|Effect|Efc|Particle|FakeParticle|RealParticle|Generator)", "effect"),
          (r"^Scene", "scene"), (r"^Camera", "camera"), (r"^Motion|^Model", "motion"), (r"^unit_", "unsorted")]


# ---------------------------------------------------------------- unit map
def load_units():
    rows = []
    for line in open(TUS):
        if line.startswith("#") or not line.strip():
            continue
        p = line.split()
        rows.append((int(p[0], 16), int(p[1], 16), p[2]))
    rows.sort()
    return rows


def unit_of(units, addr):
    lo, hi = 0, len(units)
    while lo < hi:
        mid = (lo + hi) // 2
        if units[mid][0] <= addr:
            lo = mid + 1
        else:
            hi = mid
    k = lo - 1
    if k >= 0 and units[k][0] <= addr < units[k][1]:
        return units[k][2]
    return None


def unit_path(name):
    if name.startswith("lib/"):
        return Path("src/lib") / name[4:]
    for pat, grp in GROUPS:
        if re.search(pat, name):
            return Path("src/game") / grp / name
    return Path("src/game") / name


# ---------------------------------------------------------------- top-level parser
class Item:
    def __init__(self, text, cblock):
        self.text = text            # verbatim, including attached leading comments
        self.cblock = cblock        # came from inside an extern "C" { } block
        self.kind, self.names = classify(strip_comments(text))
        self.uses = set(re.findall(r"[A-Za-z_]\w*", strip_comments(text))) - KEYWORDS - self.names

    def emit(self):
        if self.cblock:
            return 'extern "C" {\n' + self.text.strip("\n") + "\n}\n"
        return self.text if self.text.endswith("\n") else self.text + "\n"


def strip_comments(s):
    return re.sub(r"//[^\n]*|/\*.*?\*/", " ", s, flags=re.S)


def blank_comments(s):
    """Like strip_comments, but keeps every offset (comment characters become spaces)."""
    return re.sub(r"//[^\n]*|/\*.*?\*/", lambda m: re.sub(r"[^\n]", " ", m.group(0)), s, flags=re.S)


def classify(code):
    c = code.strip()
    if c.startswith("#define"):
        return "macro", {re.match(r"#define\s+(\w+)", c).group(1)}
    if c.startswith("#"):
        return "pp", set()
    m = re.match(r"(?:extern\s+\"C\"\s+)?(?:static\s+)?(?:inline\s+)?[^;{]*?([A-Za-z_][\w:~]*)\s*\(", c)
    body_fn = c.endswith("}") and not re.match(r"(typedef|struct|class|union|enum)\b", c)
    if body_fn and m:
        name = m.group(1)
        kind = "inline" if re.match(r"(static\s+)?inline\b", c) else "func"
        return kind, {name}
    m = re.match(r"(?:typedef\s+)?(struct|class|union|enum)\s+(\w+)?", c)
    names = set()
    if c.startswith("typedef"):
        t = re.sub(r"__attribute__\s*\(\((?:[^()]|\([^()]*\))*\)\)", "", c)
        t = re.sub(r"\{.*\}", "{}", t, flags=re.S)
        for d in split_top(t.rstrip(";"), ","):
            ids = re.findall(r"[A-Za-z_]\w*", re.sub(r"\(.*?\)\s*$", "", d) if "(*" not in d else d)
            if ids:
                names.add(re.findall(r"\(\s*\*\s*(\w+)", d)[0] if "(*" in d else ids[-1])
        if m and m.group(2):
            names.add(m.group(2))
        return "type", names
    if m and "{" in c:
        if m.group(2):
            names.add(m.group(2))
        tail = c[c.rfind("}") + 1:].strip().rstrip(";").strip()
        names |= set(re.findall(r"[A-Za-z_]\w*", tail)) - KEYWORDS
        return "type", names
    # declaration(s): one or more declarators
    t = re.sub(r"__attribute__\s*\(\((?:[^()]|\([^()]*\))*\)\)", "", c).rstrip(";")
    t = re.sub(r"^extern\s+\"C\"\s+", "", t)
    t = re.sub(r"\{.*\}", "{}", t, flags=re.S)
    for d in split_top(t, ","):
        d = re.sub(r"=.*$", "", d, flags=re.S)
        fp = re.match(r"[^(]*\(\s*\*\s*(\w+)\s*(?:\[[^\]]*\]\s*)*\)", d)     # a function-pointer variable
        if fp:
            names.add(fp.group(1))
            continue
        # for prototypes the identifier right before the parameter list
        m2 = re.search(r"([A-Za-z_][\w:]*)\s*(\(|\[|$)", d.strip())
        if m2:
            names.add(m2.group(1))
    return "decl", names - KEYWORDS


def split_top(s, sep):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == sep and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    out.append(cur)
    return [x for x in out if x.strip()]


def parse(text, cblock=False):
    """Split source text into top-level items."""
    items, i, n = [], 0, len(text)
    pending = ""          # comments/blank lines waiting to attach to the next item
    while i < n:
        # skip whitespace and collect comments
        m = re.match(r"\s+", text[i:])
        if m:
            pending += m.group(0)
            i += m.end()
            continue
        if text.startswith("//", i):
            j = text.find("\n", i)
            j = n if j < 0 else j + 1
            pending += text[i:j]
            i = j
            continue
        if text.startswith("/*", i):
            j = text.find("*/", i) + 2
            pending += text[i:j]
            i = j
            continue
        if text[i] == "#":
            j = i
            while True:
                k = text.find("\n", j)
                k = n if k < 0 else k
                if text[k - 1:k] == "\\":
                    j = k + 1
                    continue
                break
            items.append(Item(text[i:k], cblock))
            pending = ""
            i = k + 1
            continue
        m = re.match(r'extern\s+"C"\s*\{', text[i:])
        if m:
            j = match_brace(text, i + m.end() - 1)
            items += parse(text[i + m.end():j], True)
            pending = ""
            i = j + 1
            continue
        # ordinary item: up to ';' at depth 0, or a closing brace of a function body
        j, depth = i, 0
        while j < n:
            ch = text[j]
            if text.startswith("//", j):
                j = text.find("\n", j)
                j = n if j < 0 else j
                continue
            if text.startswith("/*", j):
                j = text.find("*/", j) + 2
                continue
            if ch in "\"'":
                j = skip_string(text, j)
                continue
            if ch in "({[":
                depth += 1
            elif ch in ")}]":
                depth -= 1
                if ch == "}" and depth == 0:
                    rest = text[j + 1:].lstrip(" \t")
                    if not rest.startswith(";") and not re.match(r"[A-Za-z_*]", rest):
                        j += 1
                        break
            elif ch == ";" and depth == 0:
                head = strip_comments(text[i:j])
                # K&R definition: `type f(a, b) int a; char *b; {` keeps going to the body
                if re.search(r"\b\w+\s*\(\s*[A-Za-z_]\w*(\s*,\s*[A-Za-z_]\w*)*\s*\)\s*([^;{}()]*;\s*)*[^;{}()]*$", head) \
                        and re.match(r"(\s*[^;{}()]+;)*\s*\{", text[j + 1:]) and not re.match(r"\s*(typedef|extern|struct|class|union|enum)\b", head):
                    j += 1
                    continue
                j += 1
                break
            j += 1
        lead = pending[pending.rfind("\n\n") + 2:] if "\n\n" in pending else pending
        lead = lead.lstrip("\n")
        items.append(Item(lead + text[i:j], cblock))
        pending = ""
        i = j
    return items


def match_brace(text, i):
    depth, j = 0, i
    while j < len(text):
        ch = text[j]
        if text.startswith("//", j):
            j = text.find("\n", j)
            continue
        if text.startswith("/*", j):
            j = text.find("*/", j) + 2
            continue
        if ch in "\"'":
            j = skip_string(text, j)
            continue
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                return j
        j += 1
    raise ValueError("unbalanced braces")


def skip_string(text, j):
    q = text[j]
    j += 1
    while j < len(text) and text[j] != q:
        j += 2 if text[j] == "\\" else 1
    return j + 1


# ---------------------------------------------------------------- distribution
def file_settings(text):
    first = text.split("\n", 1)[0]
    cc = first if re.match(r"\s*//\s*(mw)?cc:", first) else ""
    pragmas = tuple(sorted(set(re.findall(r"^#pragma[^\n]*", text, re.M))))
    return cc, pragmas


def variant_tag(cc, pragmas):
    if not cc and not pragmas:
        return ""
    raw = (cc + " ".join(pragmas)).lower()
    tag = []
    for key, short in (("ee-gcc3.2", "gcc32"), ("ee-gcc2.96", "gcc"), ("-g8", "g8"), ("-o1", "o1"),
                       ("-g0", ""), ("opt_unroll_loops off", "nounroll"), ("-fno-schedule", "ns")):
        if key in raw and short:
            tag.append(short)
    return "." + ("_".join(tag) or "v%04x" % (hash(raw) & 0xFFFF))


def norm(text):
    return " ".join(strip_comments(text).split())


_headers = {}


def header_names(line):
    """{name: normalized text} for what an `#include` line declares (nested includes too)."""
    if line not in _headers:
        _headers[line] = {}
        m = re.search(r'[<"]([^>"]+)[>"]', line)
        p = ROOT / "include" / m.group(1) if m else None
        if p and p.exists():
            names = {}
            for it in parse(p.read_text(errors="ignore")):
                if it.kind == "pp" and it.text.lstrip().startswith("#include"):
                    names.update(header_names(it.text.strip()))
                for nm in it.names:
                    names.setdefault(nm, norm(it.text))
            _headers[line] = names
    return _headers[line]


LOCAL_DECL = re.compile(r"(?:^|[;{}])\s*((?:[A-Za-z_]\w*\s+)+\**\s*|(?:[A-Za-z_]\w*\s*)+\*+\s*)"
                        r"(func_[0-9A-F]{8}|D_[0-9A-F]+)\s*[(\[;]")
NOT_TYPE = {"return", "else", "case", "do", "goto", "sizeof"}


def own_declarations(func, c_file, declared):
    """Names a function declares inside its body, and (C only) the functions it calls with no
    declaration in sight: neither may meet a file-scope declaration in the new file."""
    code = strip_comments(func.text)
    body = code[code.find("{") + 1:]
    local = {m.group(2) for m in LOCAL_DECL.finditer(body) if m.group(1).split()[0] not in NOT_TYPE}
    implicit = set()
    if c_file:
        implicit = set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", body)) - local - declared - func.names
    return local | implicit


def prototype(func):
    """A declaration Item for a function definition (`()` for a K&R one)."""
    code = blank_comments(func.text)
    head = strip_comments(func.text[:code.find("{")]).strip()
    head = re.sub(r'^extern\s+"C"\s+', "", head)
    if not head.endswith(")"):
        head = head[:head.index("(")] + "()"
    return Item(head + ";\n", func.cblock or strip_comments(func.text).lstrip().startswith('extern "C"'))


def deps_of(func, items, by_name):
    """Items (in source order) a function needs, excluding other func_ definitions."""
    order = {id(d): k for k, d in enumerate(items)}
    undefs = collections.defaultdict(list)
    for k, d in enumerate(items):
        m = d.kind == "pp" and re.match(r"\s*#\s*undef\s+(\w+)", strip_comments(d.text))
        if m:
            undefs[m.group(1)].append(k)
    need, todo = set(), [func]
    while todo:
        it = todo.pop()
        here = order.get(id(it), len(items))
        for u in it.uses:
            cands = [d for d in by_name.get(u, ()) if d is not func and d.kind != "func"]
            if cands and all(d.kind == "macro" for d in cands):
                # a macro only applies between its #define and the next #undef
                last = [d for d in cands if order[id(d)] < here][-1:]
                if last and any(order[id(last[0])] < k < here for k in undefs.get(u, ())):
                    last = []
                cands = last
            elif len(cands) > 1:
                # a redefined macro or redeclared name: the one in effect at this point
                before = [d for d in cands if order[id(d)] < here]
                cands = before[-1:] or cands[:1]
            for d in cands:
                if id(d) not in need:
                    need.add(id(d))
                    todo.append(d)
    return [it for it in items if id(it) in need]


class OutFile:
    """One output file. Functions are collected first and the text is laid out at the end, when
    it is known which declarations and macros disagree inside the file."""

    def __init__(self, path, header):
        self.path, self.header = path, header
        self.entries, self.funcs, self.includes = [], [], []
        self.defined = {}                     # type/inline/other name -> text
        self.variants = collections.defaultdict(set)   # decl/macro name -> texts seen
        self.declsrc, self.funcsrc = {}, {}   # name -> sources it was declared / defined in
        self.hdr = {}                         # name -> normalized text, from the includes
        self.top_uses = set()                 # names used by file-scope helpers and types

    def try_add(self, func, deps, src, incs, own=()):
        """Add a function with its deps, or return False when a type or inline helper clashes
        with one already here, or a declaration from another source would sit next to a
        definition of the same name (they may disagree)."""
        name = next(iter(func.names))
        if self.declsrc.get(name, {src}) != {src}:
            return False
        hdr = dict(self.hdr)
        for i in incs:
            for nm, t in header_names(i).items():
                if hdr.setdefault(nm, t) != t:
                    return False
        for nm, t in hdr.items():
            if nm not in self.hdr and (any(norm(v) != t for v in self.variants.get(nm, ()))
                                       or nm in self.defined and norm(self.defined[nm]) != t):
                return False
        for d in deps:
            if any(nm in hdr and hdr[nm] != norm(d.text) for nm in d.names):
                return False
        for d in deps:
            if d.kind == "decl" and any(self.funcsrc.get(nm, src) != src for nm in d.names):
                return False
            if d.kind not in ("decl", "macro") and any(self.defined.get(nm) not in (None, d.emit()) for nm in d.names):
                return False
        # a name an inline helper or type uses must keep one file-scope declaration
        top_uses = self.top_uses.union(*(d.uses for d in deps if d.kind not in ("decl", "macro")))
        for d in deps:
            if d.kind in ("decl", "macro"):
                for nm in d.names & top_uses:
                    if self.variants.get(nm, {norm(d.emit())}) != {norm(d.emit())}:
                        return False
        for nm in top_uses - self.top_uses:
            if len(self.variants.get(nm, ())) > 1:
                return False
        if own & top_uses or any(self.funcsrc.get(nm, src) != src for nm in own):
            return False
        self.top_uses = top_uses
        for nm in own:
            self.variants[nm].add("own:" + name)
            self.declsrc.setdefault(nm, set()).add(src)
        for d in deps:
            for nm in d.names:
                if d.kind in ("decl", "macro"):
                    self.variants[nm].add(norm(d.emit()))
                    if d.kind == "decl":
                        self.declsrc.setdefault(nm, set()).add(src)
                else:
                    self.defined.setdefault(nm, d.emit())
        self.hdr = hdr
        self.includes += [i for i in incs if i not in self.includes]
        self.entries.append((func, deps, set(own)))
        self.funcs.append(name)
        self.funcsrc[name] = src
        return True

    def text(self):
        clash = {nm for nm, v in self.variants.items() if len(v) > 1}
        # a macro must not reach a function that uses its name for something else
        for func, deps, _ in self.entries:
            have = set().union(*(d.names for d in deps))
            clash |= {nm for nm in func.uses - have if nm in self.variants
                      and any(not v.startswith("own:") and v.startswith("#define") for v in self.variants[nm])}
        out, seen = [], set()
        for func, deps, own in self.entries:
            local, before, after, done = [], [], [], set(own)
            for d in deps:
                if d.names and all(nm in self.hdr for nm in d.names):
                    continue          # the same thing an included header already declares
                if clash & d.names:
                    if d.kind == "decl":
                        if clash & d.names & done:
                            continue
                        done |= d.names
                        local.append(re.sub(r'^\s*extern\s+"C"\s+(extern\s+)?', "extern ", strip_comments(d.text)).strip())
                    else:
                        before.append(d.text.strip() + "\n")
                        after += ["#undef %s\n" % nm for nm in d.names]
                    continue
                key = d.emit()
                if key not in seen:
                    seen.add(key)
                    out.append(key)
            body = func.text
            if local:
                code = blank_comments(body)
                k = code.find("{")
                body = body[:k + 1] + "".join("\n    " + l for l in local) + body[k + 1:]
                if self.path.suffix == ".cpp" or func.cblock:
                    body = 'extern "C" {\n' + re.sub(r'^(\s*(?:/\*.*?\*/\s*)*)extern\s+"C"\s+', r"\1", body, flags=re.S).strip("\n") + "\n}\n"
            elif func.cblock:
                body = func.emit()
            out.append("".join(before) + body.rstrip("\n") + "\n" + "".join(after))
        return self.header + "".join(i + "\n" for i in self.includes) + "\n".join(c.rstrip("\n") + "\n" for c in out)


def main(argv):
    if "--where" in argv:
        units = load_units()
        for a in argv[argv.index("--where") + 1:]:
            unit = unit_of(units, int(re.sub(r"^func_", "", a), 16))
            print(a, unit_path(unit).as_posix() + ".c / .cpp" if unit else "(no unit)")
        return
    apply = "--apply" in argv
    srcs = [Path(a) for a in argv if not a.startswith("--")]
    units = load_units()
    outs = {}          # (unit, lang, tag, n) -> OutFile
    origin = {}        # func -> source path
    moved_items = collections.defaultdict(list)   # source path -> moved function items
    skipped = []
    for src in srcs:
        text = src.read_text(errors="ignore")
        cc, pragmas = file_settings(text)
        lang = src.suffix
        items = parse(text)
        by_name = collections.defaultdict(list)
        for it in items:
            for nm in it.names:
                by_name[nm].append(it)
        includes = [it.text.strip() for it in items if it.kind == "pp" and it.text.lstrip().startswith("#include")]
        # a call that relied on an earlier definition in this file needs a prototype once apart
        pos, protos = {}, {}
        for k, it in enumerate(items):
            if it.kind == "func":
                nm = next(iter(it.names))
                pos[nm] = k
                protos[nm] = prototype(it)
        for it in items:
            if it.kind != "func":
                continue
            name = next(iter(it.names))
            m = re.fullmatch(r"func_([0-9A-F]{8})", name)
            unit = unit_of(units, int(m.group(1), 16)) if m else None
            if unit is None:
                skipped.append((name, src))
                continue
            need = [g for g in sorted(it.uses & set(protos)) if pos[g] < pos[name]
                    and not any(d.kind == "decl" for d in by_name[g])]
            order = {id(d): k for k, d in enumerate(items)}
            deps = {id(d): (order[id(d)], d) for d in deps_of(it, items, by_name)}
            for g in need:
                deps[id(protos[g])] = (pos[g], protos[g])
                for d in deps_of(protos[g], items, by_name):
                    deps[id(d)] = (order[id(d)], d)
            deps = [d for _, d in sorted(deps.values(), key=lambda kd: kd[0])]
            used = set(it.uses).union(*(d.uses for d in deps))
            own = own_declarations(it, lang == ".c", set().union(*(d.names for d in deps)))
            incs = [i for i in includes if used & set(header_names(i))]
            tag = variant_tag(cc, pragmas)
            header = (cc + "\n" if cc else "") + "".join(p + "\n" for p in pragmas)
            k = 1
            while True:
                key = (unit, lang, tag, k)
                if key not in outs:
                    base = unit_path(unit)
                    stem = base.name + ("" if k == 1 else "_%d" % k) + tag
                    outs[key] = OutFile(base.with_name(stem + lang), header)
                    outs[key].base, outs[key].tag, outs[key].lang = base, tag, lang
                of = outs[key]
                if of.header == header and of.try_add(it, deps, src, incs, own):
                    origin[name] = src
                    moved_items[src].append(it)
                    break
                k += 1
    print("%d functions into %d files; %d skipped (no unit)" % (len(origin), len(outs), len(skipped)))
    stage = ROOT / "build/split"
    for of in outs.values():
        p = stage / of.path
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text(of.text())
    if apply:
        apply_split(outs, origin, moved_items)


def apply_split(outs, origin, moved_items):
    """Write the new files into the tree and take their functions out of the old ones. A
    source left with no function definitions is deleted. A unit file given as a source is
    rewritten in place, so passing a unit's files together with new code merges the two.
    Run the full build afterwards: it is the gate (`git checkout` + `git clean` src/ if it
    does not match)."""
    remain, removed = {}, 0
    for src, its in moved_items.items():
        text = src.read_text(errors="ignore")
        for it in its:
            k = text.find(it.text)
            assert k >= 0, (src, next(iter(it.names)))
            text = text[:k] + text[k + len(it.text):]
        remain[src.resolve()] = text if any(it.kind == "func" for it in parse(text)) else None
    for src, text in remain.items():
        if text is None:
            src.unlink()
            removed += 1
        else:
            src.write_text(re.sub(r"\n{3,}", "\n\n", text))
    for of in outs.values():
        # an existing file that is not being replaced is left alone: the functions go to the
        # next free overflow name
        k = 1
        while (ROOT / of.path).exists():
            k += 1
            of.path = of.base.with_name("%s_%d%s%s" % (of.base.name, k, of.tag, of.lang))
        p = ROOT / of.path
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text(of.text())
    print("wrote %d files; deleted %d emptied sources" % (len(outs), removed))


if __name__ == "__main__":
    main(sys.argv[1:])
