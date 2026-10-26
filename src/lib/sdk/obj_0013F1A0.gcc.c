// cc: ee-gcc2.96 -O2 -G0
extern char D_00518FA8[];

extern char D_00518FB0[];

void func_00128488();

void func_0013F1A0() {
    int v0;
    v0 = (*(int *)(D_00518FA8 + 0) + -1);
    *(int *)(D_00518FA8 + 0) = v0;
    if (v0 == 0) {
        func_00128488(D_00518FB0, 0, 768);
        return;
    } else {
        return;
    }
}
