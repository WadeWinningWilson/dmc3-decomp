void func_00105230(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_004D6AC0(char *p) {
    UNIT(p + 0x150);
    func_00105230(p + 0x150, p + 0x150, p + 0x50);
}

int func_00104B80();

void func_00131700();

int func_004D6A10(p0) char *p0; {
    char stk[0x60] __attribute__((aligned(16)));
    float tmp2;
    int tmp3;
    *(float *)((stk + -32) + 112) = *(float *)(p0 + 408);
    *(int *)((stk + -32) + 116) = 0;
    *(int *)((stk + -32) + 120) = 0;
    *(int *)((stk + -32) + 124) = 0x3f800000;
    *(int *)((stk + -32) + 96) = 0;
    *(float *)((stk + -32) + 100) = (6.283185005187988f * (*(float *)(p0 + 420) / 360.0f));
    tmp2 = (*(float *)(p0 + 424) / 360.0f);
    *(int *)((stk + -32) + 108) = 0x3f800000;
    *(float *)((stk + -32) + 104) = (6.283185005187988f * tmp2);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
    func_00131700(((stk + -32) + 32), ((stk + -32) + 32), ((stk + -32) + 96));
    tmp3 = func_00104B80((p0 + 432), ((stk + -32) + 32), ((stk + -32) + 112));
    *(int *)(p0 + 444) = 0x3f800000;
    return tmp3;
}

extern void func_004D6450();

void func_004D6BE0(char *p) { func_004D6450(p + -64); }

extern void func_004D6340();

void func_004D6BF0(char *p) { func_004D6340(p + -64); }
