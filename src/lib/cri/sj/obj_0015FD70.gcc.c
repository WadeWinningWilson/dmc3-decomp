// cc: ee-gcc2.96 -O2 -G0
extern char D_00539F08[];

extern char D_00539F10[];

void func_00128488();

void func_0015FD70() {
    int v0;
    v0 = (*(int *)(D_00539F08 + 0) + -1);
    *(int *)(D_00539F08 + 0) = v0;
    if (v0 == 0) {
        func_00128488(D_00539F10, 0, 3072);
        return;
    } else {
        return;
    }
}
