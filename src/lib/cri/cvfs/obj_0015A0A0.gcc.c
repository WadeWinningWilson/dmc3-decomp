// cc: ee-gcc2.96 -O2 -G0
void func_0015A050();

int func_0015A1F8(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    func_0015A050(p0, (stk + 0));
    return (*(int *)((stk + 0) + 4) != 0);
}
