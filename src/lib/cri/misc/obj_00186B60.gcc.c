// cc: ee-gcc2.96 -O2 -G0
void func_0017D938();

void func_0017E0C0();

int func_0017E278();

void func_00186B80(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    func_0017D938(p0, *(int *)(v0 + 8128), (stk + 0));
    v4 = *(int *)((stk + 0) + 0);
    v1 = (int)((stk + 0) + 4);
    v2 = (int)((stk + 0) + 8);
    v3 = v4;
    if (v4 != 0) {
        func_0017E0C0(v3, v1, v2);
        v4 = func_0017E278(*(long *)(v0 + 2456), *(int *)((stk + 0) + 4));
        *(long *)(v0 + 2456) = v4;
    }
}

int func_00187098();

void func_0018D810();

int func_00186FF8(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    char *v2;
    int v3;
    char *v4;
    int tmp0;
    v4 = (char *)p0;
    if (p2 > 0) {
        v2 = (char *)p1;
        v0 = p2;
        v1 = 1;
        do {
            *(int *)(v4 + 0) = 0;
            *(int *)(v4 + 4) = 0;
            v0 = (v0 + -1);
            func_0018D810((v4 + 12), 0);
            tmp0 = *(int *)(v2 + 0);
            *(int *)(v4 + 56) = 0;
            *(int *)(v4 + 8) = tmp0;
            v2 = (v2 + 4);
            *(int *)(v4 + 60) = v1;
            *(int *)(v4 + 64) = 0;
            *(int *)(v4 + 68) = 0;
            *(int *)(v4 + 72) = 0;
            *(int *)(v4 + 76) = 0;
            *(int *)(v4 + 80) = 0;
            v3 = func_00187098((v4 + 88));
            *(int *)(v4 + 224) = 0;
            v4 = (v4 + 232);
        } while (v0 != 0);
    }
    return v3;
}
