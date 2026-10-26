// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
char *func_00173FF8();

void func_0017A120(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char *tmp0;
    tmp0 = func_00173FF8();
    *(int *)(tmp0 + 76) = p3;
    *(int *)(tmp0 + 64) = p0;
    *(int *)(tmp0 + 68) = p1;
    *(int *)(tmp0 + 72) = p2;
}

void func_0017A1D8(p0, p1) int p0; int p1; {
    char *tmp0;
    tmp0 = func_00173FF8();
    *(int *)(tmp0 + 84) = p1;
    *(int *)(tmp0 + 80) = p0;
}
