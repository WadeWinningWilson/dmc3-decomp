void func_00131DF0(p0, p1, p2) char *p0; char *p1; char *p2; {
    __asm__ volatile("lqc2 $vf8, 0x0(%0)\n\tvmove.w $vf8, $vf0\n\tlqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x10(%1)\n\tlqc2 $vf6, 0x20(%1)\n\tlqc2 $vf7, 0x30(%1)\n\tvmulax.xyzw $ACC, $vf4, $vf8x\n\tvmadday.xyzw $ACC, $vf5, $vf8y\n\tvmaddaz.xyzw $ACC, $vf6, $vf8z\n\tvmaddw.xyzw $vf9, $vf7, $vf8w\n\tsqc2 $vf9, 0x0(%2)" : : "r"(p2), "r"(p1), "r"(p0) : "memory");
}

void func_00131E20(p0, p1, p2) char *p0; char *p1; char *p2; {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x10(%0)\n\tlqc2 $vf6, 0x20(%0)\n\tlqc2 $vf7, 0x30(%0)\n\tlqc2 $vf8, 0x0(%1)\n\tlqc2 $vf9, 0x10(%1)\n\tlqc2 $vf10, 0x20(%1)\n\tlqc2 $vf11, 0x30(%1)\n\tvmulax.xyzw $ACC, $vf4, $vf8x\n\tvmadday.xyzw $ACC, $vf5, $vf8y\n\tvmaddaz.xyzw $ACC, $vf6, $vf8z\n\tvmaddw.xyzw $vf12, $vf7, $vf8w\n\tvmulax.xyzw $ACC, $vf4, $vf9x\n\tvmadday.xyzw $ACC, $vf5, $vf9y\n\tvmaddaz.xyzw $ACC, $vf6, $vf9z\n\tvmaddw.xyzw $vf13, $vf7, $vf9w\n\tvmulax.xyzw $ACC, $vf4, $vf10x\n\tvmadday.xyzw $ACC, $vf5, $vf10y\n\tvmaddaz.xyzw $ACC, $vf6, $vf10z\n\tvmaddw.xyzw $vf14, $vf7, $vf10w\n\tvmulax.xyzw $ACC, $vf4, $vf11x\n\tvmadday.xyzw $ACC, $vf5, $vf11y\n\tvmaddaz.xyzw $ACC, $vf6, $vf11z\n\tvmaddw.xyzw $vf15, $vf7, $vf11w\n\tsqc2 $vf12, 0x0(%2)\n\tsqc2 $vf13, 0x10(%2)\n\tsqc2 $vf14, 0x20(%2)\n\tsqc2 $vf15, 0x30(%2)" : : "r"(p1), "r"(p2), "r"(p0) : "memory");
}
