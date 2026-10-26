// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
int func_0017D360();

int func_00183CF8(p0, p1) char *p0; int p1; {
    char stk[0x20] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p1;
    v1 = func_0017D360(p0, *(int *)(p0 + 8128), (stk + 0));
    v2 = *(int *)((stk + 0) + 0);
    if (v1 != 0) {
        *(int *)(v0 + 4) = 0;
        *(int *)(v0 + 0) = 0;
    } else {
        v1 = *(int *)((stk + 0) + 4);
        *(int *)(v0 + 0) = v2;
        *(int *)(v0 + 4) = v1;
    }
    return v1;
}
