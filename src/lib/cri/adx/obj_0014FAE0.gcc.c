// cc: ee-gcc2.96 -O2 -G0
extern char D_00591360[];

void func_001446F0();

int func_0014FB68(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00591360);
        v0 = 0;
    } else {
        v0 = *(short *)(p0 + 70);
    }
    return v0;
}

extern char D_005913C0[];

int func_0014FC00(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_005913C0);
        v0 = 0;
    } else {
        v0 = *(short *)(p0 + 64);
    }
    return v0;
}
