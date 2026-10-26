// cc: ee-gcc2.96 -O2 -G0
int func_00144E90();

int func_00144E10(p0, p1, p2, p3, p4, p5) int p0; int p1; int p2; int p3; int p4; int p5; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    *(int *)((stk + 0) + 0) = 1;
    tmp0 = func_00144E90(p0, 0, 0, p1, p2, p3, p4, p5);
    return tmp0;
}

int func_00144E58(p0, p1, p2, p3, p4, p5) int p0; int p1; int p2; int p3; int p4; int p5; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    *(int *)((stk + 0) + 0) = 1;
    tmp0 = func_00144E90(p0, p1, p2, 0, 0, p3, p4, p5);
    return tmp0;
}
