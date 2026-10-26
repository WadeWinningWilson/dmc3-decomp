extern "C" char D_01CAFF0C[];

extern "C" signed char D_005BC348;

extern "C" unsigned char D_005BE138;

extern "C" char *D_005BE13C;

extern "C" float D_005BC34C;

extern "C" int D_005BE140;

extern "C" void func_0043D940(char *);

extern "C" void func_0043D9F0(char *);

class O43D {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54();
    virtual void m58(int, int, int, int);
    virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98();
    virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void mB4(int, int, int, int);
};

static inline int flag_43D(int s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (s < 32) {
        unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
        return (*w & (1 << (s & 31))) != 0;
    } else {
        int t = s - 32;
        unsigned int *w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        return (*w & (1 << (t & 31))) != 0;
    }
}

extern "C" void func_0043D340(char *p) {
    short s;
    p[0x45] = 6;
    if (*(unsigned char *)(p + 0x33A) == 0) return;
    p[0x1400] = 0;
    ((O43D *)(p + 0x340))->m58(*(int *)(p + 0x1404), *(int *)(p + 0x1408), 0, 0);
    ((O43D *)(p + 0x940))->m58(*(int *)(p + 0x1414), *(int *)(p + 0x1418), 0, 0);
    func_0043D940(p);
    ((O43D *)(p + 0x340))->mB4(0, 0, 0, 0);
    ((O43D *)(p + 0x940))->mB4(0, 0, 0, 0);
    ((O43D *)(p + 0xF40))->mB4(0, 0, 0, 0);
    D_005BC348 = 0;
    D_005BE138 = 1;
    D_005BE13C = p;
    D_005BC34C = 3.5f;
    D_005BE140 = 0;
    s = *(short *)(p + 0x338);
    if (s != -1 && flag_43D(s)) {
        p[0x1400] = 1;
        func_0043D9F0(p);
        D_005BE138 = 0;
        D_005BC348 = -1;
        D_005BE13C = 0;
        D_005BC34C = 1.0f;
        D_005BE140 = 0;
        p[0x1424] = 0;
    }
    *(int *)(p + 0xC) |= 0x10;
}
