// cc: ee-gcc2.96 -O2 -G0
void func_00150110();

void func_00150200() {
    func_00150110();
}

extern char D_005915A8[];

void func_001446F0();

int func_00150218(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_005915A8);
        v0 = -1;
    } else {
        v0 = *(short *)(p0 + 96);
    }
    return v0;
}

extern char D_00591608[];

int func_00150288(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00591608);
        v0 = -1;
    } else {
        v0 = *(int *)(p0 + 76);
    }
    return v0;
}

extern char D_00591638[];

void func_001502B8(p0, p1) char *p0; int p1; {
    if (p0 == 0) {
        func_001446F0(D_00591638);
        return;
    } else {
        *(char *)(p0 + 108) = p1;
        return;
    }
}

extern char D_00591668[];

int func_001502E8(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00591668);
        v0 = 0;
    } else {
        v0 = *(int *)(p0 + 20);
    }
    return v0;
}

extern char D_00591698[];

void func_00150318(p0, p1) char *p0; int p1; {
    if (p0 == 0) {
        func_001446F0(D_00591698);
        return;
    } else {
        *(char *)(p0 + 112) = p1;
        return;
    }
}

extern char D_005916D0[];

int func_00150348(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_005916D0);
        v0 = -1;
    } else {
        v0 = *(signed char *)(p0 + 113);
    }
    return v0;
}

extern char D_00591730[];

int func_001504A8(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00591730);
        v0 = 0;
    } else {
        v0 = *(signed char *)(p0 + 114);
    }
    return v0;
}
