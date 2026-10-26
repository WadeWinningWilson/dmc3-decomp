// cc: ee-gcc2.96 -O2 -G0
void func_0018EA50();

int func_0018EAB8();

void func_0018EB08();

int func_0018E9F0(p0, p1) int p0; int p1; {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    int v1;
    v1 = ((unsigned int)p1 < (unsigned int)2);
    v0 = p0;
    if (v1 == 0) {
        v1 = 2;
        if (p1 == v1) {
            func_0018EB08(p0, (stk + 0), ((stk + 0) + 4));
            func_0018EA50(v0, *(int *)((stk + 0) + 0), *(int *)((stk + 0) + 4));
            v1 = func_0018EAB8(v0, *(int *)((stk + 0) + 0), *(int *)((stk + 0) + 4));
        }
    }
    return v1;
}
