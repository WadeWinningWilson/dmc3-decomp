// cc: ee-gcc2.96 -O2 -G0
extern char D_00595818[];

void func_001744C0();

void func_001798E8();

int func_0018B2E0();

int func_00171F20() {
    int v0;
    int v1;
    v0 = func_0018B2E0();
    v1 = -306;
    if (v0 != 0) {
        func_001744C0(v1);
        func_001798E8(D_00595818);
        return;
    } else {
        return v0;
    }
}
