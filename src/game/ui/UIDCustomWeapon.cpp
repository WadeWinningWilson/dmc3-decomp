extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013D5D0(char *);

extern "C" void func_00196C40(char *, char *);

extern "C" char D_006480D0[];

class VD0 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void mD0();
};

extern "C" void func_00411B40(char *p) {
    int i;
    int j;
    for (i = 0; i < 2; i++) {
        if (*(char **)(p + i * 4 + 0x190) != 0) {
            func_001AF080(D_00666750, *(int *)(p + i * 4 + 0x190));
            *(char **)(p + i * 4 + 0x190) = 0;
        }
    }
    if (*(char **)(p + 0x198) != 0) {
        func_00196C40(D_006480D0, *(char **)(p + 0x198));
        *(char **)(p + 0x198) = 0;
    }
    for (i = 0; i < 6; i++) ((VD0 *)(p + i * 0x600 + 0x1C0))->mD0();
    for (i = 0; i < 2; i++) {
        if (*(unsigned char *)(p + i * 7 + 0x33C5) == 1) ((VD0 *)(p + i * 0x600 + 0x25C0))->mD0();
    }
    for (j = 0; j < *(int *)(p + 0x38); j++) func_0013D5D0(p + j * 0x10 + 0x3C);
}

class V243C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int);
    virtual void d8();
    virtual unsigned char m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
};

static inline char *sub8(char *d) {
    char *r;
    if (*(int *)(d + 4) == 0) {
        r = 0;
    } else if (*(int *)(d + 8) == 0) {
        r = 0;
    } else {
        r = d + *(int *)(d + 8);
    }
    return r;
}

static inline char *subC(char *d) {
    char *r;
    if (*(unsigned int *)(d + 4) < 2) {
        r = 0;
    } else if (*(int *)(d + 0xC) == 0) {
        r = 0;
    } else {
        r = d + *(int *)(d + 0xC);
    }
    return r;
}

static inline char *mdl1(char *m) {
    char *r;
    if (**(unsigned short **)(m + 8) == 0) {
        r = sub8(*(char **)(m + 0xC));
    } else {
        r = *(char **)(m + 0xC);
    }
    return r;
}

static inline char *mdl2(char *m) {
    char *r;
    if (**(unsigned short **)(m + 8) == 0) {
        r = subC(*(char **)(m + 0xC));
    } else {
        r = *(char **)(m + 0xC);
    }
    return r;
}

extern "C" bool func_004134E0(char *p, int k) {
    char *m = *(char **)((char *)(k * 4) + (int)p + 0x190);
    char *a = mdl1(m);
    char *b = mdl2(m);
    V243C *o;
    o = (V243C *)(p + k * 0x600 + 0x25C0);
    o->m24(1);
    if (o->m2C(a, b) == 0) return false;
    o->m3C(1);
    return true;
}

class A413 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void m1C(float);
    virtual void m20(float, int);
};

class W413 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void mC8(char *);
};

extern "C" {
void func_00413DB0(char *p, int k) {
    extern char *func_002792A0(char *);
    char *q;
    switch (k) {
    case 4:
        ((A413 *)func_002792A0(p + 0x7C0))->m20(14.0f, 2);
        ((A413 *)func_002792A0(p + 0x7C0))->m20(14.0f, 0);
        ((A413 *)func_002792A0(p + 0x7C0))->m20(1.0f, 3);
        ((A413 *)func_002792A0(p + 0x7C0))->m20(1.0f, 1);
        ((A413 *)func_002792A0(p + 0x13C0))->m1C(14.0f);
        ((A413 *)func_002792A0(p + 0xDC0))->m1C(1.0f);
        break;
    case 8:
        ((A413 *)func_002792A0(p + 0x7C0))->m20(1.0f, 2);
        ((A413 *)func_002792A0(p + 0x7C0))->m20(1.0f, 0);
        ((A413 *)func_002792A0(p + 0x7C0))->m20(14.0f, 3);
        ((A413 *)func_002792A0(p + 0x7C0))->m20(14.0f, 1);
        ((A413 *)func_002792A0(p + 0xDC0))->m1C(14.0f);
        ((A413 *)func_002792A0(p + 0x13C0))->m1C(1.0f);
        break;
    }
    *(float *)(*(char **)(p + 0x31C4) + 0x184) = 1.1f;
    *(float *)(*(char **)(p + 0x31C4) + 0x198) = 1.1f;
    *(float *)(*(char **)(p + 0x31C8) + 0x184) = 1.1f;
    *(float *)(*(char **)(p + 0x31C8) + 0x198) = 1.1f;
    q = p + 0x3260;
    ((W413 *)(p + 0xDC0))->mC8(q);
    ((W413 *)(p + 0x13C0))->mC8(q);
    ((W413 *)(p + 0x7C0))->mC8(q);
}
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

class V3C0 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual int mB4();
    virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(int);
};

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E70(char *, int);

class V414 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18();
    virtual void m1C(float);
    virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C();
    virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C();
    virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C();
    virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C();
    virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC();
    virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

typedef struct { float a; float b; } P414;

extern "C" P414 D_0056B0A0[][6];

extern "C" {
void func_004144D0(char *p, int m, int k) {
    extern V3C0 *func_002792A0(char *);
    int r;
    float fx;
    float fy;
    switch (m) {
    case 4:
        r = 0;
        break;
    case 8:
        r = 1;
        break;
    }
    fy = D_0056B0A0[r][k].b;
    fx = D_0056B0A0[r][k].a;
    *(float *)(p + 0x3330) = fx;
    *(float *)(p + 0x3334) = fy;
    *(int *)(p + 0x3338) = 0;
    *(float *)(p + 0x333C) = 1.0f;
    UNIT(p + 0x3360);
    func_00131700(p + 0x3360, p + 0x3360, p + 0x3340);
    func_00105230(p + 0x3360, p + 0x3360, p + 0x3330);
    func_001318E0(p + 0x3360, p + 0x3360, p + 0x3350);
    func_001A1E70(func_00279290(p + 0x1FC0), 0);
    ((V414 *)func_002792A0(p + 0x1FC0))->m1C(1.0f);
    {
        char *m = p + 0x3360;
        ((V414 *)(p + 0x1FC0))->mC8(m);
    }
}
}

extern "C" float D_0056B090[][2];

extern "C" float D_0056B094[][2];

class O411 {
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
    virtual void mCC(char *);
};

extern "C" void func_00411C70(char *p) {
    int i;
    int k;
    float x;
    float y;
    for (i = 0; i < 6; i++) {
        if (i == 5) {
            ((O411 *)(p + i * 0x600 + 0x1C0))->mCC(p + 0x3360);
        } else {
            ((O411 *)(p + i * 0x600 + 0x1C0))->mCC(p + 0x3260);
        }
    }
    if (*(unsigned char *)(p + 0x33AB) == 4) {
        k = 0;
    } else {
        k = 1;
    }
    y = D_0056B094[k][0];
    x = D_0056B090[k][0];
    *(float *)(p + 0x32B0) = x;
    *(float *)(p + 0x32B4) = y;
    *(float *)(p + 0x32B8) = 0.0f;
    *(float *)(p + 0x32BC) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x32E0) : "memory");
    func_00131700(p + 0x32E0, p + 0x32E0, p + 0x32C0);
    func_00105230(p + 0x32E0, p + 0x32E0, p + 0x32B0);
    func_001318E0(p + 0x32E0, p + 0x32E0, p + 0x32D0);
    for (i = 0; i < 2; i++) {
        if (((unsigned char *)(p + 0x33C4))[i * 7] == 1) {
            if (i == 0) ((O411 *)(p + i * 0x600 + 0x25C0))->mCC(p + 0x3260);
            if (i == 1) ((O411 *)(p + i * 0x600 + 0x25C0))->mCC(p + 0x32E0);
        }
    }
}
