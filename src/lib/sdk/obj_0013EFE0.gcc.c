// cc: ee-gcc2.96 -O2 -G0
int func_0013EC80();

int func_0013ECC8();

int func_0013F0D8(p0, p1) int p0; int p1; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp1;
    func_0013EC80(p0, 0, (stk + 0));
    tmp1 = func_0013ECC8(p0, p1, *(int *)((stk + 0) + 0));
    return tmp1;
}

void func_001446F0();

void func_0013F138(p0, p1) int p0; int p1; {
    func_001446F0(p1);
}

extern char D_00518FA8[];

extern char D_00518FB0[];

void func_00128488();

void func_0013F150() {
    char *v0;
    int v1;
    v0 = D_00518FA8;
    v1 = *(int *)(v0 + 0);
    if (v1 == 0) {
        func_00128488(D_00518FB0, 0, 768);
        v1 = *(int *)(v0 + 0);
    }
    *(int *)(v0 + 0) = (v1 + 1);
}
