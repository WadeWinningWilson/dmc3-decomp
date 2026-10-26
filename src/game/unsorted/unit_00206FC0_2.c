char *func_002075D0(int, int, char *, int, int);

void func_002075C0(int a, int b, char *c, int d) {
    func_002075D0(a, b, c, d, 0x20);
}

void func_002078F0();

int func_002078C0(int p0) {
    func_002078F0(p0, 4357);
    return p0;
}

int func_00104C00();

int func_00207280();

void func_00207290();

int func_00207850(p0) int p0; {
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_00207280();
    if ((v1 & 255) == 1) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
        func_00207290(v0, ((stk + -32) + 32));
        v1 = func_00104C00((v0 + 80), ((stk + -32) + 32), (v0 + 80));
        *(int *)(v0 + 148) = 0;
    }
    return v1;
}

int func_002070F0(char *p0) {
    return ((unsigned int)0 < (unsigned int)*(int *)(p0 + 144));
}
