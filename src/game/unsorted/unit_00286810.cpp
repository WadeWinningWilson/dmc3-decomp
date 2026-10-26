extern "C" char D_00666750[];

extern "C" void func_001AEEC0(char *);

extern "C" void func_002873A0(char *);

extern "C" void func_00287320(char *);

extern "C" char *func_00286B90(char *, int, int);

extern "C" int *D_0054E4B0[];

static inline unsigned char done3(char *e) {
    return *(unsigned char *)(*(char **)(e + 0xC) + 1) == 3;
}

extern "C" bool func_00286FD0(char *p, int k) {
    bool r;
    char *e;
    *(unsigned char *)(p + 0x3A4) = 0;
    if (*(unsigned char *)(p + 0x39C) != 0) {
        *(unsigned char *)(p + 0x39C) = 4;
        func_001AEEC0(D_00666750);
        *(unsigned char *)(p + 0x3AC) = 2;
        *(int *)(p + 0x3B0) = k;
        return false;
    }
    if (*(unsigned char *)(p + 0x39E) != 2 || *(int *)(p + 0x3A0) != k) {
        func_002873A0(p);
        func_00287320(p);
    }
    *(unsigned char *)(p + 0x39C) = 2;
    *(unsigned char *)(p + 0x39E) = 2;
    r = false;
    *(int *)(p + 0x3A0) = k;
    e = func_00286B90(p, 3, k);
    if (e != 0 && !done3(e)) r = true;
    if (k < 200 && D_0054E4B0[k][1] != -1) {
        e = func_00286B90(p, 0, D_0054E4B0[k][1]);
        if (e != 0 && !done3(e)) r = true;
    }
    func_00286B90(p, 4, k);
    return r;
}
