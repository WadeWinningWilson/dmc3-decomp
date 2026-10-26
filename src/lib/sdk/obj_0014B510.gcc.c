// cc: ee-gcc2.96 -O2 -G0
void func_00128488();

void func_0014B510(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char *)(v0 + 0) = 0;
        func_00128488(p0, 0, 144);
        return;
    } else {
        return;
    }
}

void func_00143208();

int func_0014B3C0();

void func_0014B548();

int func_0014B558(p0, p1, p2) int p0; int p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp5;
    func_00143208(((p1 << 16) >> 16), p2, (stk + 0), ((stk + 0) + 2));
    func_0014B548(p0, *(short *)((stk + 0) + 0), *(short *)((stk + 0) + 2));
    tmp5 = func_0014B3C0(*(int *)((char *)p0 + 136), *(short *)((stk + 0) + 0), *(short *)((stk + 0) + 2));
    return tmp5;
}
