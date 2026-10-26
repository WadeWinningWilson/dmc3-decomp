void func_001318E0(p0, p1, p2) char *p0; char *p1; char *p2; {
    __asm__ volatile("lqc2 $vf8, 0x0(%0)\n\tlqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x10(%1)\n\tlqc2 $vf6, 0x20(%1)\n\tlqc2 $vf7, 0x30(%1)\n\tvmulx.xyzw $vf4, $vf4, $vf8x\n\tvmuly.xyzw $vf5, $vf5, $vf8y\n\tvmulz.xyzw $vf6, $vf6, $vf8z\n\tsqc2 $vf4, 0x0(%2)\n\tsqc2 $vf5, 0x10(%2)\n\tsqc2 $vf6, 0x20(%2)\n\tsqc2 $vf7, 0x30(%2)" : : "r"(p2), "r"(p1), "r"(p0) : "memory");
}
