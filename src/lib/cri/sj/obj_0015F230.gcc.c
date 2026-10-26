// cc: ee-gcc2.96 -O2 -G0
extern char D_00535ED0[];

extern char D_00535ED8[];

void func_00128488();

void func_0015F230() {
    int v0;
    v0 = (*(int *)(D_00535ED0 + 0) + -1);
    *(int *)(D_00535ED0 + 0) = v0;
    if (v0 == 0) {
        func_00128488(D_00535ED8, 0, 16384);
        return;
    } else {
        return;
    }
}
