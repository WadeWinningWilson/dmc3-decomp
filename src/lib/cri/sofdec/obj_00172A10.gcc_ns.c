// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
char *func_00173FF8();

void func_00172A88(p0, p1, p2) int p0; int p1; int p2; {
    char *tmp0;
    tmp0 = func_00173FF8();
    *(int *)(tmp0 + 48) = p2;
    *(int *)(tmp0 + 40) = p0;
    *(int *)(tmp0 + 44) = p1;
}
