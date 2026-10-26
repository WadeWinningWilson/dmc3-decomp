int func_00304790(void) {
    int r;
    __asm__ volatile("vmulax.xyzw $ACC, $vf13, $vf25x\n\tvmadday.xyzw $ACC, $vf14, $vf25y\n\tvmaddaz.xyzw $ACC, $vf15, $vf25z\n\tvmaddw.xyzw $vf28, $vf16, $vf0w\n\tvclipw.xyz $vf28, $vf28w\n\tvmulax.xyzw $ACC, $vf13, $vf26x\n\tvmadday.xyzw $ACC, $vf14, $vf26y\n\tvmaddaz.xyzw $ACC, $vf15, $vf26z\n\tvmaddw.xyzw $vf29, $vf16, $vf0w\n\tvclipw.xyz $vf29, $vf29w\n\tvmulax.xyzw $ACC, $vf13, $vf27x\n\tvmadday.xyzw $ACC, $vf14, $vf27y\n\tvmaddaz.xyzw $ACC, $vf15, $vf27z\n\tvmaddw.xyzw $vf28, $vf16, $vf0w\n\tvclipw.xyz $vf28, $vf28w\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tcfc2.ni %0, $vi18" : "=r"(r));
    return r;
}

int func_003047F0(void) {
    int r;
    __asm__ volatile("vmulax.xyzw $ACC, $vf9, $vf25x\n\tvmadday.xyzw $ACC, $vf10, $vf25y\n\tvmaddaz.xyzw $ACC, $vf11, $vf25z\n\tvmaddw.xyzw $vf28, $vf12, $vf0w\n\tvclipw.xyz $vf28, $vf28w\n\tvmulax.xyzw $ACC, $vf9, $vf26x\n\tvmadday.xyzw $ACC, $vf10, $vf26y\n\tvmaddaz.xyzw $ACC, $vf11, $vf26z\n\tvmaddw.xyzw $vf29, $vf12, $vf0w\n\tvclipw.xyz $vf29, $vf29w\n\tvmulax.xyzw $ACC, $vf9, $vf27x\n\tvmadday.xyzw $ACC, $vf10, $vf27y\n\tvmaddaz.xyzw $ACC, $vf11, $vf27z\n\tvmaddw.xyzw $vf28, $vf12, $vf0w\n\tvclipw.xyz $vf28, $vf28w\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tcfc2.ni %0, $vi18" : "=r"(r));
    return r;
}

void func_00304AE0(p0, p1, p2, p3, p4) int p0; char *p1; char *p2; char *p3; char *p4; {
    __asm__ volatile("lqc2 $vf25, 0x0(%0)\n\tlqc2 $vf26, 0x0(%1)\n\tlqc2 $vf27, 0x0(%2)\n\tvsub.xyzw $vf4, $vf26, $vf25\n\tvsub.xyzw $vf5, $vf27, $vf25\n\tvopmula.xyz $ACC, $vf5, $vf4\n\tvopmsub.xyz $vf6, $vf4, $vf5\n\tvsub.w $vf6, $vf6, $vf6\n\tsqc2 $vf6, 0x0(%3)" : : "r"(p2), "r"(p3), "r"(p4), "r"(p1) : "memory");
}

int func_00304BB0(char *p0) {
    return ((unsigned int)0 < (unsigned int)(*(unsigned short *)(p0 + 10) & 1));
}
