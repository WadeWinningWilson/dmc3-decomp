extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" int func_0024E800(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_0029FFF0(char *);

extern "C" void func_0029DE70(char *);

extern "C" void func_0029DCE0(char *, int);

extern "C" void func_00138380(int);

extern "C" void func_002F2D30(char *, char *);

extern "C" void func_001AD140(char *);

extern "C" void func_0029E0D0(char *);

extern "C" void func_0029E3D0(char *);

class P296 {
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
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float m1E0(int);
};

class Q296 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void m20();
};

static inline float add3_296(float a, float b, float c) {
    return a + (b + c);
}

extern "C" {
void func_00296400(char *p) {
    extern char D_0055FD10[];
    extern char D_0055FD14[];
    extern char D_0055FD18[];
    extern char D_0055FD1C[];
    extern char D_00560274[];
    int i;
    float t;
    func_0029FFF0(p);
    if (*(unsigned short *)(p + 0x8952) == 0) {
        func_0029DE70(p);
        if (func_0024E800(p + 0x8980)) func_0029DCE0(p, 0);
    } else {
        func_0029DE70(p);
        func_00138380(-4);
        *(float *)(p + 0xA930) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xA930) < 0.0f) {
            *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) =
                (int)((P296 *)p)->m1E0((int)(*(float *)D_0055FD1C + add3_296(*(float *)D_0055FD18, *(float *)D_0055FD10, *(float *)D_0055FD14)));
            *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (float)(int)*(float *)D_00560274;
            if (*(char **)(*(char **)D_01CAFF0C + 0x20)) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
            func_001AD140(p);
            return;
        }
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0xA9DC) == 2) ((Q296 *)(p + i * 0x20 + 0x8300))->m20();
    }
    func_0029E0D0(p);
    func_0029E3D0(p);
    func_00195E20(D_005BE098, p);
}
}

/* Hand-matched C++ functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose prototypes/classes conflict with vcalls-vcalls7. */
extern "C" char D_01CAFF0C[];

extern "C" int D_01CAF2B4[];

extern "C" void func_001A5CC0(char *);

extern "C" void func_001AD100();

extern "C" char *func_00279290(char *);

extern "C" void func_00138340(int);

class V296 {
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
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float g1E0(int);
};

class W296 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void g20();
};

extern "C" {
void func_00296140(char *p) {
    extern float D_0055FD10[];
    extern float D_0055FD14[];
    extern float D_0055FD18[];
    extern float D_0055FD1C[];
    extern float D_00560274[];
    int i;
    float f;
    func_001AD100();
    *(float *)(p + 0x8924) = 1.0f;
    func_0029FFF0(p);
    func_0029DE70(p);
    if (*(unsigned short *)(p + 0x8952) == 0) {
        (*(unsigned char *)(p + 4))++;
        f = ((V296 *)p)->g1E0(D_0055FD1C[0] + (D_0055FD18[0] + (D_0055FD10[0] + D_0055FD14[0])));
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = f;
        *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (int)D_00560274[0];
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        for (i = 0; i < 3; i++) {
            if (*(unsigned char *)(p + i + 0x8920) == 1) {
                D_01CAF2B4[0] = i;
                break;
            }
        }
        if (func_0024E800(p + 0x8980) != 0) func_0029DCE0(p, 0);
    } else if (func_0024E800(p + 0x8980) != 0) {
        (*(unsigned char *)(p + 4))++;
        *(float *)(p + 0xA930) = 60.0f;
        func_001A5CC0(func_00279290(p + 0x1D00));
        func_001A5CC0(func_00279290(p + 0x2300));
        func_001A5CC0(func_00279290(p + 0x6B00));
        for (i = 0; i < 3; i++) {
            func_001A5CC0(func_00279290(p + i * 0x600 + 0x2900));
            func_001A5CC0(func_00279290(p + i * 0x600 + 0x3B00));
            func_001A5CC0(func_00279290(p + i * 0x600 + 0x7100));
        }
        for (i = 0; i < 5; i++) func_001A5CC0(func_00279290(p + i * 0x600 + 0x4D00));
        func_00138340(0xFF);
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0xA9DC) == 2) ((W296 *)(p + i * 0x20 + 0x8300))->g20();
    }
    func_0029E0D0(p);
    func_0029E3D0(p);
    func_00195E20(D_005BE098, p);
}
}
