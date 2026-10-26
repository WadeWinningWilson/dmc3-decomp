// cc: ee-gcc2.96 -O2 -G0
void func_0018B970();

int func_001762C0(p0) char *p0; {
    char stk[0x20] __attribute__((aligned(16)));
    func_0018B970(*(int *)(p0 + 64), (stk + 0));
    return (*(int *)((stk + 0) + 4) + *(int *)((stk + 0) + 12));
}
