void func_00132600(p0, p1, p2) char *p0; char *p1; char *p2; {
    __asm__ volatile("lqc2 $vf8, 0x0(%0)\n\tlqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x10(%1)\n\tlqc2 $vf6, 0x20(%1)\n\tvmove.w $vf9, $vf8\n\tvmulax.xyzw $ACC, $vf4, $vf8x\n\tvmadday.xyzw $ACC, $vf5, $vf8y\n\tvmaddz.xyz $vf9, $vf6, $vf8z\n\tsqc2 $vf9, 0x0(%2)" : : "r"(p2), "r"(p1), "r"(p0) : "memory");
}
