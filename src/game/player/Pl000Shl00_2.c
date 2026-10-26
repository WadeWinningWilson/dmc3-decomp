extern char D_005AAF40[];

extern char D_005AAF64[];

extern char D_005AAFE4[];

int func_00252FA0();

int func_0028C110();

int func_002E6BF0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005AAF40;
    *(char **)((char *)p0 + 64) = D_005AAF64;
    *(char **)((char *)p0 + 160) = D_005AAFE4;
    func_0028C110((p0 + 384));
    *(char *)((char *)p0 + 69) = 2;
    *(short *)((char *)p0 + 144) = 0;
    return p0;
}

float func_002E7630(p0) char *p0; {
    float v0;
    int tmp0;
    tmp0 = 1;
    if (*(unsigned char *)(p0 + 0) == tmp0) {
        v0 = *(float *)(p0 + 44);
    } else {
        v0 = 255.0f;
    }
    return v0;
}

float func_002E7660(p0) char *p0; {
    float v0;
    if (*(unsigned char *)(p0 + 0) == 1) {
        v0 = *(float *)(p0 + 60);
    } else {
        v0 = 0.0f;
    }
    return v0;
}

int func_002E76D0();

int func_002E7690(p0, p1) int p0; char *p1; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(p1), "r"(((stk + -16) + 16)) : "memory");
    *(float *)((stk + -16) + 28) = 1.0f;
    tmp0 = func_002E76D0(p0, ((stk + -16) + 16));
    return tmp0;
}
