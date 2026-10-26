// cc: ee-gcc2.96 -O2 -G0
extern char D_00591160[];

void func_001446F0();

int func_0014F258(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00591160);
        v0 = -1;
    } else {
        v0 = *(signed char *)(p0 + 1);
    }
    return v0;
}
