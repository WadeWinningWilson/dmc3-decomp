// cc: ee-gcc2.96 -O2 -G0
extern char D_00596178[];

void func_001744C0();

void func_001798E8();

int func_0018B3A8();

int func_00174960(p0) char *p0; {
    int v0;
    int v1;
    v0 = func_0018B3A8(*(int *)(p0 + 64));
    v1 = -307;
    if (v0 != 0) {
        func_001744C0(v1);
        func_001798E8(D_00596178);
        v0 = -307;
    }
    return v0;
}
