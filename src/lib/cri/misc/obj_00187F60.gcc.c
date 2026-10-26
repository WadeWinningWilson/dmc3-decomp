// cc: ee-gcc2.96 -O2 -G0
void func_00180438();

void func_00180450();

void func_00187FF8();

int func_0018D208();

int func_0018EC88();

int func_00187F60(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    int tmp4;
    v0 = (char *)p0;
    func_00180438((stk + 0));
    v1 = (int)v0;
    v2 = (int)((stk + 0) + 4);
    v3 = (int)((stk + 0) + 8);
    if (*(int *)(v0 + 72) != 4) {
        *(int *)((stk + 0) + 8) = 0;
    } else {
        func_00187FF8(v1, v2, v3);
        v4 = (int)v0;
        v5 = 15;
        if (*(int *)((stk + 0) + 8) != 0) {
            tmp0 = func_0018D208(v4, v5);
            v6 = (int)v0;
            if (tmp0 != 0) {
                tmp4 = func_0018EC88(v6, *(int *)(*(char **)((stk + 0) + 8) + 56), *(int *)(*(char **)((stk + 0) + 8) + 60));
                *(int *)((stk + 0) + 8) = (tmp4 == 0 ? 0 : *(int *)((stk + 0) + 8));
            }
        }
    }
    func_00180450((stk + 0));
    return *(int *)((stk + 0) + 8);
}
