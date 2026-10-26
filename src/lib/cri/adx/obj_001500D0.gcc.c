// cc: ee-gcc2.96 -O2 -G0
void func_001500D0(p0, p1) char *p0; int p1; {
    *(char *)(p0 + 109) = p1;
}

extern char D_00591578[];

void func_001446F0();

int func_001500D8(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00591578);
        v0 = -1;
    } else {
        v0 = (*(signed char *)(p0 + 1) == 5);
    }
    return v0;
}
