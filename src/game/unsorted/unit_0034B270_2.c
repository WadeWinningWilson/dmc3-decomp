int func_00131D10(float, float);

int func_0034B940(p0, p1) char *p0; char *p1; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp2;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(p0), "r"(p1), "r"(((stk + -16) + 16)) : "memory");
    tmp2 = func_00131D10(*(float *)((stk + -16) + 16), *(float *)((stk + -16) + 24));
    return tmp2;
}
