int func_00131650();

float func_001324E0();

int func_00133230(p0, p1, p2) int p0; int p1; int p2; {
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    char *v2;
    float v3;
    float v4;
    float tmp0;
    float tmp1;
    float tmp2;
    float tmp5;
    float tmp8;
    int tmp11;
    v0 = (char *)p0;
    v1 = (char *)p1;
    v2 = (char *)p2;
    tmp0 = func_001324E0(v1);
    v3 = 0.0f;
    if (v3 == tmp0) {
        *(int *)(v1 + 0) = 0x3f800000;
        *(float *)(v1 + 4) = v3;
        *(float *)(v1 + 8) = v3;
        *(float *)(v1 + 12) = v3;
    }
    tmp1 = func_001324E0(v2);
    v4 = 0.0f;
    if (v4 == tmp1) {
        *(float *)(v2 + 0) = v4;
        *(int *)(v2 + 4) = 0x3f800000;
        *(float *)(v2 + 8) = v4;
        *(float *)(v2 + 12) = v4;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 80)), "r"(v1), "r"(v2) : "memory");
    tmp2 = func_001324E0(((stk + -64) + 80));
    if (0.0f == tmp2) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(((stk + -64) + 64)), "r"(v2) : "memory");
        *(float *)((stk + -64) + 64) = (*(float *)((stk + -64) + 64) + 0.10000000149011612f);
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 80)), "r"(((stk + -64) + 64)), "r"(v1) : "memory");
        tmp5 = func_001324E0(((stk + -64) + 80));
        if (0.0f == tmp5) {
            *(float *)((stk + -64) + 68) = (*(float *)((stk + -64) + 68) + 0.10000000149011612f);
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 80)), "r"(((stk + -64) + 64)), "r"(v1) : "memory");
            tmp8 = func_001324E0(((stk + -64) + 80));
            if (0.0f == tmp8) {
                *(float *)((stk + -64) + 68) = (*(float *)((stk + -64) + 68) + 0.10000000149011612f);
                __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 80)), "r"(((stk + -64) + 64)), "r"(v1) : "memory");
            }
        }
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 112)), "r"(((stk + -64) + 80)), "r"(v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(((stk + -64) + 96)), "r"(v1) : "memory");
    func_00131650(v0, ((stk + -64) + 112));
    func_00131650((v0 + 16), ((stk + -64) + 96));
    tmp11 = func_00131650((v0 + 32), ((stk + -64) + 80));
    *(int *)(v0 + 44) = 0;
    *(int *)(v0 + 28) = 0;
    *(int *)(v0 + 12) = 0;
    *(int *)(v0 + 60) = 0x3f800000;
    return tmp11;
}
