// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
int func_00126FE8();

int func_0012D188(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p1;
    tmp0 = *(int *)(v0 + 8);
    if (tmp0 == 0) {
        *(int *)(v0 + 4) = 0;
        return 0;
    } else {
        v1 = func_00126FE8();
        *(int *)(v0 + 4) = 0;
        *(int *)(v0 + 8) = 0;
        return v1;
    }
}
