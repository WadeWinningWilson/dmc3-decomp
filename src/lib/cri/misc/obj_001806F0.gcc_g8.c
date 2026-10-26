// cc: ee-gcc2.96 -O2 -G8
void func_00180768();

int func_001807C8();

int func_00181810();

void func_00181A98();

int func_001806F0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    tmp0 = func_00181810();
    v1 = (int)v0;
    if (tmp0 == 1) {
        return 0;
    } else {
        func_00180768(v1);
        tmp1 = func_001807C8(v0);
        v2 = tmp1;
        v3 = (int)v0;
        if (*(int *)(v0 + 72) == 2) {
            func_00181A98(v3);
        }
        v4 = v2;
        return v4;
    }
}

int func_0017D360();

int func_001808C0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char stk[0x20] __attribute__((aligned(16)));
    char *v0;
    int v3;
    char *v2;
    char *v1;
    int tmp1;
    int tmp2;
    v0 = (char *)p2;
    v2 = (char *)p1;
    v1 = (char *)p4;
    v3 = func_0017D360(p0, *(int *)(p0 + 8060), (stk + 0));
    if (v3 == 0) {
        tmp1 = (*(int *)((stk + 0) + 4) + *(int *)((stk + 0) + 12));
        tmp2 = *(int *)((stk + 0) + 0);
        *(int *)(v0 + 0) = *(int *)((stk + 0) + 4);
        *(int *)(v2 + 0) = tmp2;
        *(int *)(v1 + 0) = tmp1;
    }
    return v3;
}
