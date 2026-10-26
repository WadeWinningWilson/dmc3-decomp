// cc: ee-gcc2.96 -O2 -G0
extern char D_005359E8[];

extern char D_005359F0[];

void func_00128488();

void func_0015E8F0() {
    int v0;
    v0 = (*(int *)(D_005359E8 + 0) + -1);
    *(int *)(D_005359E8 + 0) = v0;
    if (v0 == 0) {
        func_00128488(D_005359F0, 0, 1152);
        return;
    } else {
        return;
    }
}
