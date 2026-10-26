// cc: ee-gcc2.96 -O2 -G0
void func_0010DBE0();

int func_0010DC50();

int func_00147B40(p0) int p0; {
    char stk[0x30] __attribute__((aligned(16)));
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    v3 = 0;
    if (v0 != 0) {
        func_0010DBE0(p0, (stk + 0));
        v1 = *(int *)((stk + 0) + 0);
        v2 = 12;
        if (v1 != 8) {
            if (v1 != v2) {
                tmp0 = func_0010DC50(v0);
                v3 = tmp0;
            }
        }
    }
    return v3;
}

extern char D_0051E1F8[];

int func_00147F78() {
    return *(int *)D_0051E1F8;
}
