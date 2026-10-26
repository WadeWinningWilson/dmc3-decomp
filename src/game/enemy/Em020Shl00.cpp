typedef struct {
    unsigned char c[4];
} S42F;

extern "C" {
int func_001AD140(char *p);
}

extern "C" void func_00206730(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_0034BA60(int, char *, int, int, int);

class Sub40 {
public:
    int x;
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

extern "C" void func_001AD100(char *);

extern "C" S42F D_005BD910;

extern "C" int func_0041D600(char *);

extern "C" void func_00131DF0(char *, char *, float *);

extern "C" int func_0041D6B0(char *, float);

class V42F {
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
    virtual void d128(); virtual void d12C(); virtual void d130();
    virtual char *m134(int);
};

extern "C" void func_0041D840(Sub40 *, char *, float);

extern "C" void func_0042FA20(Hit40 *h) {
    char *p = (char *)h;
    float v[4] __attribute__((aligned(16)));
    S42F b;
    char *e;
    if ((unsigned char)func_0041D600(p) == 0) return;
    func_001AD100(p);
    func_00206730(p + 0x450);
    b = D_005BD910;
    e = (*(V42F **)(p + 0xD0))->m134(b.c[*(int *)(p + 0x454)]);
    v[0] = 0.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    func_00131DF0(p + 0x50, *(char **)(e + 0x104), v);
    if ((unsigned char)func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(int *)(p + 0x454) == 0) {
            if (*(float *)(p + 0x458) <= 100.0f) {
                func_0034BA60(0x2A, p + 0x50, 0x26, 0, 1);
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
        } else {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 1:
        break;
    }
    func_0041D840(h, p + 0x150, 1.0f);
    if (!(*(float *)(p + 0x458) < 60.0f) && *(float *)(p + 0x458) <= 90.0f) {
        func_0028C5C0(p + 0x1D0, 0, 1.0f);
    }
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_00252FA0(char *);

extern "C" void func_0028C110(char *);

extern "C" char D_005B3DF0[], D_005B3E14[], D_005B3E94[], D_005B3F30[], D_005B3F54[], D_005B3FD4[];

extern "C" char *func_0042F650(int p0, int p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x460, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B3F30;
            *(char **)(t + 0x40) = D_005B3F54;
            *(char **)(t + 0xA0) = D_005B3FD4;
            *(unsigned char *)(t + 0x150) = 0;
            func_0028C110(t + 0x1D0);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 9, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0x454) = p1;
    }
    return ret;
}
