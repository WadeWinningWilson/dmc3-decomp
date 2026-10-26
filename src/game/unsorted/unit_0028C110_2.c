extern void func_0028C740();

void func_0028C280(void) { func_0028C740(); }

void func_0028C630();

int func_0028C6D0();

int func_0028C5C0(char *p0, int p1, int p2, int p3) {
    int v0;
    int tmp0;
    v0 = (int)p0;
    *(int *)(p0 + 232) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 416)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 480)) : "memory");
    if ((p1 & 1) == 0) {
        func_0028C630();
    }
    tmp0 = func_0028C6D0(v0);
    return tmp0;
}
