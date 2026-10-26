int func_00104B80();

void func_00131700();

int func_00312980(p0) char *p0; {
    char stk[0x70] __attribute__((aligned(16)));
    float tmp1;
    int tmp2;
    *(float *)((stk + -32) + 64) = *(float *)(p0 + 3428);
    *(int *)((stk + -32) + 68) = 0;
    *(int *)((stk + -32) + 72) = 0;
    *(int *)((stk + -32) + 76) = 0x3f800000;
    *(int *)((stk + -32) + 48) = 0;
    *(int *)((stk + -32) + 52) = 0;
    tmp1 = (*(float *)(p0 + 3420) / 360.0f);
    *(int *)((stk + -32) + 60) = 0x3f800000;
    *(float *)((stk + -32) + 56) = (6.283185005187988f * tmp1);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 80)) : "memory");
    func_00131700(((stk + -32) + 80), ((stk + -32) + 80), ((stk + -32) + 48));
    tmp2 = func_00104B80(((stk + -32) + 32), ((stk + -32) + 80), ((stk + -32) + 64));
    *(int *)(p0 + 3404) = (int)*(float *)((stk + -32) + 32);
    *(int *)(p0 + 3408) = (int)*(float *)((stk + -32) + 36);
    return tmp2;
}

extern void func_00313C60();

void func_00313D60(char *p) { func_00313C60(p + -64); }

void func_00313D70(char *p) { func_00313C60(p + -160); }

extern void func_00313BD0();

void func_00313D90(char *p) { func_00313BD0(p + -208); }

void func_00313DA0(char *p) { func_00313C60(p + -208); }
