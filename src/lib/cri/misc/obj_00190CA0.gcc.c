// cc: ee-gcc2.96 -O2 -G0
int func_00190CA0() {
    return 0;
}

extern char D_00597E00[];

int func_00190CA8() {
    return (int)D_00597E00;
}

int func_00190CB8(p0) int p0; {
    return (p0 == 2);
}

extern char D_006459D0[];

extern char D_006459DC[];

void func_00190E98();

void func_00190D58() {
    int v0;
    v0 = (*(int *)(D_006459DC + 0) + -1);
    *(int *)(D_006459DC + 0) = v0;
    if (v0 <= 0) {
        func_00190E98(D_006459D0);
        return;
    } else {
        return;
    }
}
