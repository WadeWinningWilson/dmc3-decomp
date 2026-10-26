// cc: ee-gcc2.96 -O2 -G0
int func_0011FA98();

void func_0011FB70();

int func_0011FC30();

int func_0011FE90(p0, p1) int p0; int p1; {
    char stk[0x70] __attribute__((aligned(16)));
    int tmp0;
    int tmp1;
    *(long *)((stk + 0) + 96) = p0;
    *(long *)((stk + 0) + 104) = p1;
    func_0011FB70(((stk + 0) + 96), (stk + 0));
    func_0011FB70(((stk + 0) + 104), ((stk + 0) + 32));
    tmp0 = func_0011FC30((stk + 0), ((stk + 0) + 32), ((stk + 0) + 64));
    tmp1 = func_0011FA98(tmp0);
    return tmp1;
}

int func_0011FEE8(p0, p1) int p0; int p1; {
    char stk[0x70] __attribute__((aligned(16)));
    int tmp1;
    int tmp2;
    *(long *)((stk + 0) + 96) = p0;
    *(long *)((stk + 0) + 104) = p1;
    func_0011FB70(((stk + 0) + 96), (stk + 0));
    func_0011FB70(((stk + 0) + 104), ((stk + 0) + 32));
    *(int *)((stk + 0) + 36) = (*(int *)((stk + 0) + 36) ^ 1);
    tmp1 = func_0011FC30((stk + 0), ((stk + 0) + 32), ((stk + 0) + 64));
    tmp2 = func_0011FA98(tmp1);
    return tmp2;
}
