extern "C" int D_01CAFF10[];

extern "C" signed char D_00575B10[];

static inline bool flag_on(char *g, signed char k) {
    unsigned int w = *(unsigned int *)(g + k / 32 * 4 + 0x64);
    return (w & (1 << (k & 31))) != 0;
}

extern "C" int func_00445B90(char *p, signed char a, signed char b) {
    int i;
    char *g = *(char **)D_01CAFF10;
    signed char *e;
    if (a == 1 && b == 1) {
        b = 2;
    }
    if (a == 1 && b == 12) {
        b = 11;
    }
    for (i = 0; i < 63; i++) {
        e = &D_00575B10[i * 2];
        if (e[0] >= 0 && a == e[0] && b == e[1] && flag_on(g, i) == 1) {
            return 1;
        }
    }
    return 0;
}

extern "C" int func_004464F0(char *, char *, signed char);

extern "C" bool func_00446420(char *p, signed char k, int w) {
    int i;
    bool ok = true;
    for (i = 0; i < 6; i++) {
        int r = k;
        do {
            r = func_004464F0(p, p + i * 8 + 0xA8A4, r);
        } while (w != 0 && r >= 3);
        if (r == 2) ok = false;
    }
    return ok;
}

extern "C" int func_00447620(char *, char *, signed char);

extern "C" bool func_00447550(char *p, signed char k, int w) {
    int i;
    bool ok = true;
    for (i = 0; i < 12; i++) {
        int r = k;
        do {
            r = func_00447620(p, p + i * 8 + 0xA8D4, r);
        } while (w != 0 && r >= 3);
        if (r == 2) ok = false;
    }
    return ok;
}

extern char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013D5D0(char *);

class O4426 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void mD0();
};

extern "C" void func_004426B0(char *p) {
    int j;
    int i;
    if (*(int *)(p + 0xC4) != 0) func_001AF080(D_00666750, *(int *)(p + 0xC4));
    if (*(int *)(p + 0xC8) != 0) func_001AF080(D_00666750, *(int *)(p + 0xC8));
    if (*(int *)(p + 0xCC) != 0) func_001AF080(D_00666750, *(int *)(p + 0xCC));
    if (*(int *)(p + 0xD0) != 0) func_001AF080(D_00666750, *(int *)(p + 0xD0));
    if (*(int *)(p + 0xD4) != 0) func_001AF080(D_00666750, *(int *)(p + 0xD4));
    if (*(int *)(p + 0xD8) != 0) func_001AF080(D_00666750, *(int *)(p + 0xD8));
    if (*(int *)(p + 0xDC) != 0) func_001AF080(D_00666750, *(int *)(p + 0xDC));
    for (i = 0; i < 3; i++) ((O4426 *)(p + i * 0x600 + 0x100))->mD0();
    for (i = 0; i < 3; i++) ((O4426 *)(p + i * 0x600 + 0x1900))->mD0();
    ((O4426 *)(p + 0x1300))->mD0();
    if (*(unsigned char *)(p + 0xA94B) == 1) ((O4426 *)(p + 0x9700))->mD0();
    for (i = 0; i < 6; i++) {
        if (*(unsigned char *)(p + i * 8 + 0xA8AB) == 1) ((O4426 *)(p + i * 0x600 + 0x2B00))->mD0();
    }
    for (i = 0; i < 12; i++) {
        if (*(unsigned char *)(p + i * 8 + 0xA8DB) == 1) ((O4426 *)(p + i * 0x600 + 0x4F00))->mD0();
    }
    for (j = 0; j < *(int *)(p + 0x38); j++) func_0013D5D0(p + j * 0x10 + 0x3C);
}
