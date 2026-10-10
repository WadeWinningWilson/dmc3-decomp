"""Estimate the text/data boundary and function starts in a stripped PS2 ELF
whose sections were merged into a single PT_LOAD.

Heuristic: count `jr $ra` per 4KiB block and find the last block with code;
collect function starts as the instruction after `jr $ra`+delay slot that is a
stack-frame `addiu $sp,$sp,-N` (MW and GCC both emit this in prologues).

usage: python -I tools/find_layout.py <elf>
"""
import struct
import sys

import rabbitizer
from elftools.elf.elffile import ELFFile

rabbitizer.config.toolchainTweaks_treatJAsUnconditionalBranch = True


def main(path):
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        seg = next(elf.iter_segments())
        vaddr, data = seg.header.p_vaddr, seg.data()
    words = struct.unpack(f"<{len(data)//4}I", data[: len(data) // 4 * 4])
    JR_RA = 0x03E00008
    blocks = {}
    func_starts = []
    for i, w in enumerate(words):
        if w == JR_RA:
            blocks[(i * 4) // 0x1000] = blocks.get((i * 4) // 0x1000, 0) + 1
    last_code_block = max(blocks)
    text_end_guess = None
    for i in range(len(words) - 1, -1, -1):
        if words[i] == JR_RA and (i * 4) // 0x1000 <= last_code_block:
            text_end_guess = vaddr + (i + 2) * 4
            break
    # prologue scan
    for i, w in enumerate(words):
        ins = rabbitizer.Instruction(w, vaddr + i * 4, rabbitizer.InstrCategory.R5900)
        if ins.getOpcodeName() == "addiu" and ins.rs.name == "sp" and ins.rt.name == "sp" and (w & 0x8000):
            func_starts.append(vaddr + i * 4)
    text_funcs = [a for a in func_starts if a < text_end_guess]
    print(f"load vaddr        : {vaddr:#x}  size {len(data):#x}")
    print(f"jr $ra count      : {sum(blocks.values())}")
    print(f"text end (guess)  : {text_end_guess:#x}  (file off {text_end_guess - vaddr + 0x80:#x})")
    print(f"stack prologues   : {len(text_funcs)} before text end")
    # gaps of zero jr-ra blocks inside text => data islands
    empty = [b for b in range(min(blocks), last_code_block) if b not in blocks]
    print(f"code-less 4K blocks inside text: {len(empty)}  e.g. {[hex(vaddr + b*0x1000) for b in empty[:10]]}")


if __name__ == "__main__":
    main(sys.argv[1])
