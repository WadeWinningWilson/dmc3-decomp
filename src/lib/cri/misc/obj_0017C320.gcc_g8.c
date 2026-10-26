// cc: ee-gcc2.96 -O2 -G8
int func_001709F8();

void func_0018EB08();

void func_0017C320(p0, p1, p2) int p0; int p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp2;
    func_0018EB08(p0, (stk + 0), ((stk + 0) + 4));
    tmp2 = func_001709F8(p2, *(int *)((stk + 0) + 0), *(int *)((stk + 0) + 4));
    *(int *)((char *)p1 + 0) = tmp2;
}
