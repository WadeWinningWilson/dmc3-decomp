// cc: ee-gcc2.96 -O2 -G0
extern char D_00530BE4[];

extern char D_00530BE8[];

void func_0015B4C0(p0, p1) int p0; int p1; {
    *(int *)D_00530BE4 = p0;
    *(int *)D_00530BE8 = p1;
}

void func_0015B368();

int func_0015B4D8(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    func_0015B368(p0, (stk + 0));
    return *(int *)((stk + 0) + 0);
}

void func_00128488();

void func_0015B550(p0) int p0; {
    func_00128488(p0, 0, 56);
}
