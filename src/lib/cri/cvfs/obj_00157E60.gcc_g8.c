// cc: ee-gcc2.96 -O2 -G8
void func_00158368();

int func_00158710(p0) int p0; {
    char stk[0x30] __attribute__((aligned(16)));
    func_00158368(p0, (stk + 0));
    return (*(int *)((stk + 0) + 0) != 0);
}
