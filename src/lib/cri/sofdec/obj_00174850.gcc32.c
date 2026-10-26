// cc: ee-gcc3.2-040921 -O2 -G0
char *func_00173FF8();

int func_00174850(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char *tmp0;
    tmp0 = func_00173FF8();
    *(int *)(tmp0 + 52) = p0;
    return (int)tmp0;
}

int func_00174878(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char *tmp0;
    tmp0 = func_00173FF8();
    return *(int *)(tmp0 + 52);
}
