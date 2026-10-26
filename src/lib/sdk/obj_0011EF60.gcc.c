// cc: ee-gcc2.96 -O2 -G0
int func_0011F910();

int func_0011FA28(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    *(int *)((stk + 0) + 0) = p0;
    *(int *)((stk + 0) + 4) = p1;
    *(int *)((stk + 0) + 8) = p2;
    *(int *)((stk + 0) + 12) = p3;
    tmp0 = func_0011F910((stk + 0));
    return tmp0;
}
