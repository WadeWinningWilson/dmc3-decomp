// cc: ee-gcc2.96 -O2 -G0
extern char D_00593678[];

void func_0015AD30();

int func_0015ABF8(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_0015AD30(D_00593678);
        v0 = -1;
    } else {
        v0 = *(int *)(p0 + 20);
    }
    return v0;
}

extern char D_0052C3A8[];

extern char D_0052C3AC[];

extern char D_0052C3B0[];

void func_0015AC28(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    v0 = p0;
    if (v0 == 0) {
        *(int *)D_0052C3A8 = 0;
        *(int *)D_0052C3AC = 0;
        *(int *)D_0052C3B0 = 0;
        return;
    } else {
        *(int *)D_0052C3A8 = v0;
        *(int *)D_0052C3AC = p1;
        *(int *)D_0052C3B0 = p2;
        return;
    }
}
