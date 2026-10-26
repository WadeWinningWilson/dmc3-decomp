// cc: ee-gcc2.96 -O2 -G0
void func_0011FB70();

int func_00120318();

int func_00120438(p0, p1) int p0; int p1; {
    char stk[0x50] __attribute__((aligned(16)));
    int tmp0;
    *(long *)((stk + 0) + 64) = p0;
    *(long *)((stk + 0) + 72) = p1;
    func_0011FB70(((stk + 0) + 64), (stk + 0));
    func_0011FB70(((stk + 0) + 72), ((stk + 0) + 32));
    tmp0 = func_00120318((stk + 0), ((stk + 0) + 32));
    return tmp0;
}
