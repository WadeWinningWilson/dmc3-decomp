extern "C" short func_002DAA60(char *, char *);

extern "C" bool func_00430750(char *p, int u, char *q) {
    unsigned char f = 0;
    short d = *(short *)(q + 0x50) - *(short *)(p + 0x90);
    short g;
    if (d > 0x4000 || d < -0x3FFF) {
        f = 1;
    }
    g = (short)(func_002DAA60(p, q + 0x10) + 0x8000) - *(short *)(p + 0x90);
    if ((g > 0x4000 || g < -0x3FFF) && f == 1) {
        return true;
    }
    return false;
}

typedef struct {
    unsigned char c[6];
} S430;

extern "C" S430 D_005BD920;

extern "C" S430 D_005BD928;

extern "C" void func_002E0000(char *, unsigned char);

class V430 {
public:
    virtual void d8();
    virtual void mC(char *, char *, char *);
};

extern "C" int func_00430C20(char *p, char *a, char *b, char *c, unsigned char f0, unsigned char f1) {
    S430 x = D_005BD920;
    S430 y = D_005BD928;
    unsigned char k;
    if (*(unsigned char *)(p + 0x28AD) == 1) return 1;
    if (!(*(float *)(p + 0x2AF0) <= 0.0f)) return 1;
    if (f1 == 0) {
        if (f0 == 0) {
            k = x.c[*(unsigned char *)(p + 0x3C74)];
        } else {
            k = x.c[*(unsigned char *)(p + 0x3C74) + 3];
        }
        if (*(unsigned char *)(p + 0x28AE) == 1) {
            k = y.c[*(signed char *)(p + 0x28A8)];
        }
    } else if (*(unsigned char *)(p + 0x28AE) == 0) {
        k = 0x11;
    } else {
        k = 0x12;
    }
    func_002E0000(p, k);
    ((V430 *)(p + 0x2A20))->mC(a, b, c);
    func_002E0000(p, *(unsigned char *)(p + 0x2AE0));
    if (*(float *)(p + 0x2AD4) <= 0.0f || *(unsigned char *)(p + 0x28AC) == 1) return 0;
    return 1;
}
