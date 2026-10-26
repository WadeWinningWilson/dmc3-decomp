// cc: ee-gcc2.96 -O2 -G8
int func_0017DFF0(p0, p1, p2) char *p0; int p1; int p2; {
    p0 = (p0 + (p1 * 116));
    *(int *)(p0 + 4880) = p2;
    return (p1 * 116);
}

int func_0017E030(p0, p1, p2) char *p0; int p1; int p2; {
    p0 = (p0 + (p1 * 116));
    *(int *)(p0 + 4884) = p2;
    return (p1 * 116);
}

int func_0017E050(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 116));
    return *(int *)(p0 + 4884);
}

void func_0017D348();

int func_0017E098(p0, p1) int p0; int p1; {
    char stk[0x20] __attribute__((aligned(16)));
    func_0017D348(p0, p1, (stk + 0));
    return (*(int *)((stk + 0) + 4) + *(int *)((stk + 0) + 12));
}
