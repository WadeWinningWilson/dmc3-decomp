// cc: ee-gcc2.96 -O2 -G8
extern char D_00590D30[];

void func_001446F0();

void func_0015ACA0();

void func_001470C0(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_00590D30);
        return;
    } else {
        func_0015ACA0(*(int *)(p0 + 148));
        return;
    }
}
