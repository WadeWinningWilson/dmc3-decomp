// cc: ee-gcc2.96 -O2 -G0
extern char D_0053ACEC[];

void func_00156CE0();

void func_001610A0() {
    int v0;
    v0 = (*(int *)(D_0053ACEC + 0) + -1);
    *(int *)(D_0053ACEC + 0) = v0;
    if (v0 == 0) {
        func_00156CE0();
        return;
    } else {
        return;
    }
}
