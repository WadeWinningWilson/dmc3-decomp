typedef struct { int w[4]; } __attribute__((aligned(16))) Q;

extern char D_0058B720[];

int func_00104C00();

void func_00105760(char *, char *, float);

void func_00133890();

void func_004E6FF0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char stk[0x50] __attribute__((aligned(16)));
    int tmp2;
    *(Q *)(((stk + -32) + 96) + 0) = *(Q *)(D_0058B720 + 0);
    func_00133890((p0 + 336), (p0 + 240), ((stk + -32) + 96));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
    func_00105760(((stk + -32) + 32), ((stk + -32) + 32), (6.283185005187988f * ((float)*(short *)((char *)p0 + 2832) / 65536.0f)));
    tmp2 = func_00104C00((p0 + 336), (p0 + 336), ((stk + -32) + 32));
    *(float *)((char *)p0 + 384) = *(float *)((char *)p0 + 80);
    *(float *)((char *)p0 + 388) = *(float *)((char *)p0 + 84);
    *(float *)((char *)p0 + 392) = *(float *)((char *)p0 + 88);
    *(int *)((char *)p0 + 396) = 0x3f800000;
}

extern float D_005BDF90;

extern char D_01CAFF0C[];

int func_004E70B0(p0) char *p0; {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)D_01CAFF0C + 12) + 80)), "r"((p0 + 400)) : "memory");
    *(float *)(p0 + 404) = (*(float *)(p0 + 404) + D_005BDF90);
    *(float *)(p0 + 404) = (*(float *)(p0 + 404) + *(float *)(p0 + 2844));
    return (int)(p0 + 400);
}
