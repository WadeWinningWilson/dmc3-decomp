// cc: ee-gcc2.96 -O2 -G0
void func_0015E628() {
}

extern char D_005359A8[];

void func_0015E788() {
    *(int *)D_005359A8 = 0;
}

void func_0015E798() {
    *(int *)D_005359A8 = 0;
}

int func_0015E7A8() {
    int tmp0;
    tmp0 = (*(int *)(D_005359A8 + 0) + 1);
    *(int *)(D_005359A8 + 0) = (*(int *)(D_005359A8 + 0) + 1);
    return tmp0;
}

int func_0015E7C0() {
    int tmp0;
    tmp0 = (*(int *)(D_005359A8 + 0) + -1);
    *(int *)(D_005359A8 + 0) = (*(int *)(D_005359A8 + 0) + -1);
    return tmp0;
}

extern char D_005359B0[];

int func_0015E7D8() {
    *(int *)(D_005359B0 + 0) = 0;
    return (int)D_005359B0;
}
