extern "C" void func_00206730(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_0028C5C0(char *, int, float);

extern "C" char D_01DFA340[];

extern "C" void func_001AD100(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_0020FA50(char *);

extern "C" void func_00455480(char *);

extern "C" void func_002EF940(int, char *);

extern "C" void func_0030EA90(char *, int);

class O455 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C();
    virtual void m130();
};

class W455 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_004552F0(char *p) {
    int i;
    int k;
    func_001AD100(p);
    for (i = 0; i < 8; i++) {
        func_00206730(p + i * 4 + 0x694);
    }
    func_0020FA50(p + 0x690);
    if (*(unsigned char *)(p + 0x640) == 0) return;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        ((O455 *)p)->m130();
        break;
    case 1:
        func_00455480(p);
        if (*(unsigned char *)(p + 0x642) != 1) {
            func_002EF940(*(int *)D_01CAFF0C, p + 0x990);
        }
        break;
    }
    func_0028C5C0(p + 0x6C0, 0, *(float *)(p + 0x10));
    ((W455 *)(p + 0x200))->mC8(p + 0x650);
    func_00195E20(D_005BE098, p);
    if (*(unsigned char *)(p + 0x641) == 1) {
        *(unsigned char *)(p + 0x641) = 0;
        k = 0;
        switch (*(unsigned char *)(p + 0x644)) {
        case 0: k = 0x7918; break;
        case 1: k = 0x7919; break;
        case 2: k = 0x791A; break;
        case 3: k = 0x791B; break;
        case 4: k = 0x791C; break;
        }
        func_0030EA90(D_01DFA340, k);
    }
}

struct M207 { float m[16]; };

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" void func_002F43B0(int, unsigned char *);

static inline void setc455(char *e, unsigned char r, unsigned char g, unsigned char b) { *(unsigned char *)(e + 0x9C) = r; *(unsigned char *)(e + 0x9D) = g; *(unsigned char *)(e + 0x9E) = b; *(unsigned char *)(e + 0x9B) = 2; *(unsigned char *)(e + 0x9F) = 0x80; *(unsigned char *)(e + 0x9B) = 3; *(unsigned char *)(e + 0x9B) = 1; }

extern "C" void func_00455CF0(char *p, unsigned char k) {
    unsigned char c[4];
    bool f;
    char *e;
    func_002F43B0(*(unsigned char *)(p + 0x644), c);
    if (*(char **)(p + 0x694) == 0) {
        *(char **)(p + 0x694) = func_00207480(3, 0x1E5, 0, 0x40);
        e = *(char **)(p + 0x694);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1C8) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
            setc455(*(char **)(p + 0x694), c[0], c[1], c[2]);
        }
    }
    f = false;
    switch (*(unsigned char *)(p + 0x643)) {
    case 7:
        if (*(char **)(p + 0x698) == 0) {
            *(char **)(p + 0x698) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x698);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1DC) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x698), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 6:
        if (*(char **)(p + 0x69C) == 0) {
            *(char **)(p + 0x69C) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x69C);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1E0) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x69C), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 5:
        if (*(char **)(p + 0x6A0) == 0) {
            *(char **)(p + 0x6A0) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6A0);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1D8) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x6A0), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 4:
        if (*(char **)(p + 0x6A4) == 0) {
            *(char **)(p + 0x6A4) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6A4);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1E4) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x6A4), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 3:
        if (*(char **)(p + 0x6A8) == 0) {
            *(char **)(p + 0x6A8) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6A8);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1D4) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x6A8), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 2:
        if (*(char **)(p + 0x6AC) == 0) {
            *(char **)(p + 0x6AC) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6AC);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1D0) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x6AC), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 1:
        if (*(char **)(p + 0x6B0) == 0) {
            *(char **)(p + 0x6B0) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6B0);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1E8) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc455(*(char **)(p + 0x6B0), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 0:
        break;
    }
    if (f && k == 0) {
        func_003305E0(D_01DFABA0, 8, 0x43, p + 0x50, 0x22, 0, 0);
    }
}
