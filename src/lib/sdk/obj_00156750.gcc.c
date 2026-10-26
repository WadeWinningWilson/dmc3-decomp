// cc: ee-gcc2.96 -O2 -G0
extern char D_0052AC20[];

extern char D_00631B80[];

extern char D_00631C80[];

int func_00110B60();

int func_00156750(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    *(int *)(D_00631B80 + 0) = p0;
    *(int *)((stk + 0) + 0) = 0;
    tmp0 = func_00110B60(D_0052AC20, 3, 0, D_00631B80, 4, D_00631C80, 0, 0);
    return tmp0;
}
