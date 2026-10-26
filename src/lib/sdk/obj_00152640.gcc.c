// cc: ee-gcc2.96 -O2 -G0
void func_00128488();

void func_00152640(p0) char *p0; {
    *(int *)(p0 + 12) = 0;
    func_00128488((p0 + 40), 0, 8);
}

void func_00152668(p0) char *p0; {
    int v0;
    v0 = *(int *)(p0 + 12);
    if (v0 == 3) {
        *(int *)(p0 + 12) = 0;
    }
}

int func_00152680(p0) char *p0; {
    return *(int *)(p0 + 16);
}

extern char D_00529720[];

void func_00152688() {
    *(int *)D_00529720 = 1;
}
