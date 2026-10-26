// cc: ee-gcc2.96 -O2 -G0
extern char D_00590BD8[];

void func_001446F0();

void func_001467D0(p0, p1) char *p0; int p1; {
    int v0;
    v0 = *(signed char *)(p0 + 1);
    if (v0 == 2) {
        func_001446F0(D_00590BD8);
        return;
    } else {
        *(int *)(p0 + 44) = p1;
        return;
    }
}
