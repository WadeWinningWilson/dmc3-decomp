#!/usr/bin/env python3
"""Set up a DMC3 build from your own copy of the game.

    python configure.py [--version SLUS_209.64]

Steps (each is skipped when already done):
  1. Find the game executable in orig/<VERSION>/: the ELF itself, or a disc
     image (.iso) it is extracted from. Verify it against config/<VERSION>/build.sha1.
  2. Download the compilers used by src/ (decompme/compilers) and wibo.
  3. Build the `dmc3-build` Docker image and start the `dmc3b` container.
  4. Disassemble the executable with splat into asm/<short>/.
Then build with:  python tools/build.py us

Nothing produced here is committed: orig/, asm/, build/ and tools/compilers/
are git-ignored. This repository contains no game code or data.
"""
import argparse
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import tarfile
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent
VERSIONS = {"SLUS_209.64": "us", "SLPM_658.80": "jp"}
COMPILERS_URL = "https://github.com/decompme/compilers/releases/download/compilers/{}.{}"
WIBO_URL = "https://github.com/decompals/wibo/releases/download/1.2.0/wibo-i686"
DEFAULT_CC = "mwcps2-3.0b52-030722"
IMAGE, CONTAINER = "dmc3-build", "dmc3b"


def step(msg):
    print(f"==> {msg}")


def sha1(path):
    h = hashlib.sha1()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def find_executable(ver):
    d = ROOT / "orig" / ver
    elf = d / ver
    if elf.exists():
        return elf
    isos = sorted(d.glob("*.iso"))
    if not isos:
        sys.exit(f"Put the game executable ({ver}) or a disc image (*.iso) in {d}")
    import pycdlib
    step(f"extracting {ver} from {isos[0].name}")
    iso = pycdlib.PyCdlib()
    iso.open(str(isos[0]))
    try:
        iso.get_file_from_iso(str(elf), iso_path=f"/{ver};1")
    finally:
        iso.close()
    return elf


def fetch(url, dest):
    step(f"downloading {url}")
    with urllib.request.urlopen(url) as r, open(dest, "wb") as f:
        shutil.copyfileobj(r, f)


def compilers_used():
    ids = {DEFAULT_CC}
    for p in (ROOT / "src").rglob("*.c*"):
        m = re.match(r"// cc: (\S+)", p.read_text(errors="replace").split("\n", 1)[0])
        if m:
            ids.add(m.group(1))
    return sorted(ids)


def get_compilers():
    cdir = ROOT / "tools/compilers"
    cdir.mkdir(parents=True, exist_ok=True)
    for cc in compilers_used():
        if (cdir / cc).is_dir():
            continue
        for ext in ("tar.gz", "tar.xz"):
            arc = cdir / f"{cc}.{ext}"
            try:
                fetch(COMPILERS_URL.format(cc, ext), arc)
                break
            except Exception:
                arc.unlink(missing_ok=True)
        else:
            sys.exit(f"could not download compiler {cc}")
        with tarfile.open(arc) as t:
            t.extractall(cdir / cc, filter="data")
    wibo = ROOT / "tools/docker/wibo"
    if not wibo.exists():
        fetch(WIBO_URL, wibo)


def docker(*args, check=True, capture=False):
    env = dict(os.environ, MSYS_NO_PATHCONV="1")
    return subprocess.run(["docker", *args], check=check, env=env, text=True,
                          capture_output=capture)


def setup_docker():
    if docker("image", "inspect", IMAGE, check=False, capture=True).returncode:
        step(f"building Docker image {IMAGE}")
        docker("build", "-t", IMAGE, str(ROOT / "tools/docker"))
    state = docker("inspect", "-f", "{{.State.Running}}", CONTAINER, check=False, capture=True)
    if state.returncode:
        step(f"starting container {CONTAINER}")
        docker("run", "-d", "--name", CONTAINER, "-v", f"{ROOT.as_posix()}:/w", "-w", "/w",
               IMAGE, "sleep", "infinity")
    elif state.stdout.strip() != "true":
        docker("start", CONTAINER)


def run_splat(ver, short):
    if (ROOT / f"asm/{short}/text.s").exists():
        return
    step(f"disassembling {ver} with splat (a few minutes)")
    subprocess.run([sys.executable, "-m", "splat", "split", f"config/{ver}/splat.yaml"],
                   cwd=ROOT, check=True)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--version", default="SLUS_209.64", choices=sorted(VERSIONS))
    ap.add_argument("--skip-docker", action="store_true", help="do not build/start the container")
    ap.add_argument("--tools-only", action="store_true",
                    help="only fetch compilers and start Docker (CI, no game files)")
    args = ap.parse_args()
    ver, short = args.version, VERSIONS[args.version]
    if args.tools_only:
        get_compilers()
        if not args.skip_docker:
            setup_docker()
        step(f"tools ready. Check that everything compiles:  python tools/build.py {short} --compile-only")
        return

    elf = find_executable(ver)
    want = (ROOT / f"config/{ver}/build.sha1").read_text().split()[0]
    got = sha1(elf)
    if got != want:
        sys.exit(f"{elf}: sha1 {got} does not match the supported {ver} ({want})")
    step(f"{ver}: sha1 OK")
    get_compilers()
    if not args.skip_docker:
        setup_docker()
    run_splat(ver, short)
    step(f"ready. Build with:  python tools/build.py {short}")


if __name__ == "__main__":
    main()
