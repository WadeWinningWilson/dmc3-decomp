// cc: ee-gcc2.96 -O2 -G8
int func_00153820();

int func_0014E228(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_00153820();
    *(int *)((char *)p1 + 0) = tmp0;
    return 1;
}

void func_0014D8B0();

void func_0014E2E8(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 12) = p1;
    func_0014D8B0(p0, 0);
}
