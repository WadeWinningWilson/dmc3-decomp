// cc: ee-gcc2.96 -O2 -G0
extern char D_006315B8[];

void func_00143A20();

int func_0014FC88(p0) int p0; {
    char stk[0x20] __attribute__((aligned(16)));
    func_00143A20(p0, 2048, ((stk + 0) + 20), D_006315B8, ((stk + 0) + 16), (stk + 0));
    return (*(int *)((stk + 0) + 20) != 0 ? D_006315B8 : 0);
}

extern char D_005296C4[];

extern char D_005296C8[];

void func_0014FCD0(p0) int p0; {
    *(int *)D_005296C4 = p0;
    *(int *)D_005296C8 = p0;
}

extern char D_005913F0[];

void func_001446F0();

void func_0014FCE8(p0, p1) char *p0; int p1; {
    if (p0 == 0) {
        func_001446F0(D_005913F0);
        return;
    } else {
        *(int *)(p0 + 56) = p1;
        *(int *)D_005296C8 = p1;
        return;
    }
}
