int func_0013B920();

int func_0013BE20();

int func_0013BF60(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char stk[0x40] __attribute__((aligned(16)));
    int v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p1;
    tmp0 = func_0013B920(p0, ((stk + -48) + 48));
    v1 = p2;
    if (tmp0 == 0) {
        v2 = 0;
    } else {
        v2 = func_0013BE20(((stk + -48) + 48), v1, v0);
    }
    return v2;
}
