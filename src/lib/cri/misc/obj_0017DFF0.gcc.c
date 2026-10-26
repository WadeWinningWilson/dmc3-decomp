// cc: ee-gcc2.96 -O2 -G0
int func_0017E010(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 116));
    return *(int *)(p0 + 4880);
}

void func_0017D360();

int func_0017E070(p0, p1) int p0; int p1; {
    char stk[0x20] __attribute__((aligned(16)));
    func_0017D360(p0, p1, (stk + 0));
    return (*(int *)((stk + 0) + 4) + *(int *)((stk + 0) + 12));
}
