// cc: ee-gcc2.96 -O2 -G8
void func_00193A60();

int func_00193DA0();

int func_00193D50(p0, p1, p2) int p0; int p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp2;
    func_00193A60(p0, p1, (stk + 0), ((stk + 0) + 4));
    tmp2 = func_00193DA0(p0, *(int *)((stk + 0) + 0), *(int *)((stk + 0) + 4), p2);
    return tmp2;
}
