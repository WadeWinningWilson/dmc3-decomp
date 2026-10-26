// cc: ee-gcc2.96 -O2 -G0
void func_00188418();

void func_00188508();

int func_00189390();

int func_00188FF8(p0, p1, p2) int p0; int p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp4;
    func_00188418(p0, (stk + 0), ((stk + 0) + 4), ((stk + 0) + 8), ((stk + 0) + 12));
    tmp4 = func_00189390(((*(int *)((stk + 0) + 0) & 0xfffffff) | 0x20000000), *(int *)((stk + 0) + 4), ((*(int *)((stk + 0) + 8) & 0xfffffff) | 0x20000000), *(int *)((stk + 0) + 12), p1, p2, 0, 0);
    func_00188508(p0, tmp4);
    return tmp4;
}
