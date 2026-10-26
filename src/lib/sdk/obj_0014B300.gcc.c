// cc: ee-gcc2.96 -O2 -G0
extern char D_00527DA0[];

void func_00128488();

void func_0014B300() {
    func_00128488(D_00527DA0, 0, 192);
}

void func_0014B388(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char *)(v0 + 0) = 0;
        func_00128488(p0, 0, 12);
        return;
    } else {
        return;
    }
}
