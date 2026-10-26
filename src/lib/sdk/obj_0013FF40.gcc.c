// cc: ee-gcc2.96 -O2 -G0
void func_00140168();

void func_00140300();

void func_00140480(p0) char *p0; {
    if (*(short *)(p0 + 156) == 1) {
        func_00140300();
        return;
    } else {
        func_00140168();
        return;
    }
}

int func_00140F28() {
    return 0;
}

extern char D_005194D8[];

extern char D_005194DC[];

int func_00140F30(p0, p1) int p0; int p1; {
    *(int *)D_005194D8 = p0;
    *(int *)D_005194DC = p1;
    return 0;
}
