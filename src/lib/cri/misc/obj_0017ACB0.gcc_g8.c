// cc: ee-gcc2.96 -O2 -G8
void func_0017AC08();

void func_0017AD50();

int func_0017AD58();

void func_0017B5B0();

void func_0017B680();

int func_0017B948();

void func_0017B980();

void func_0017BA60();

int func_0018D208();

int func_0017ACB0(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = p0;
    v1 = func_0018D208(p0, 6);
    v2 = v0;
    if (v1 != 0) {
        tmp0 = func_0017B948(v2);
        v3 = v0;
        if (tmp0 == 1) {
            return 0;
        } else {
            func_0017AD50(v3);
            tmp1 = func_0017AD58(v0, (stk + 0));
            func_0017B5B0(v0);
            func_0017B680(v0, *(int *)((stk + 0) + 0));
            func_0017B980(v0);
            func_0017BA60(v0);
            func_0017AC08(v0);
            v1 = tmp1;
            return v1;
        }
    } else {
        return v1;
    }
}
