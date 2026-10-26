// cc: ee-gcc2.96 -O2 -G0
void func_0017A080();

int func_0017A060() {
    func_0017A080();
    return 0;
}

extern char D_0053EE28[];

void func_00179E30();

void func_0017A4E8();

void func_0017A4F8();

int func_00189CF0();

void func_00189D80();

int func_0017A3A8(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 64);
    func_0017A4E8(p0, 1);
    v2 = *(int *)(v0 + 4);
    v3 = 1;
    v4 = (int)v0;
    if (v2 != 1) {
        func_0017A4E8(v4, 0);
        v5 = 0;
    } else {
        *(char **)D_0053EE28 = v0;
        func_0017A4F8(v4, v3);
        func_00189D80(v1);
        func_0017A4F8(v0, 0);
        v6 = (int)v0;
        if (*(int *)(v0 + 8) == 0) {
            *(int *)(v0 + 108) = 0;
        } else {
            *(int *)(v0 + 108) = v2;
            func_00179E30(v6);
            v6 = (int)v0;
        }
        func_0017A4E8(v6, 0);
        tmp0 = func_00189CF0(v1);
        v5 = (tmp0 != 1);
    }
    return v5;
}

int func_0017A468() {
    func_0017A080();
    return 0;
}

void func_0017A240();

void func_0017A488() {
    func_0017A240(0);
}

void func_0017A4E8(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 100) = p1;
}

int func_0017A4F0(p0) char *p0; {
    return *(int *)(p0 + 100);
}

void func_0017A4F8(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 104) = p1;
}

int func_0017A500(p0) char *p0; {
    return *(int *)(p0 + 104);
}

int func_0017A590(p0) char *p0; {
    return *(int *)(p0 + 96);
}

int func_0017A4C8();

int func_0017A5B8() {
    int tmp0;
    tmp0 = func_0017A4C8();
    return (tmp0 != 1);
}
