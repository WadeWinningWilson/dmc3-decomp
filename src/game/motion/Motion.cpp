class ObjM74 {
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
    virtual void m74(float);
};

extern "C" signed char func_001FC8F0(char *p, float x) {
    if (*(unsigned char *)(p + 0x191) == 0) {
        return 2;
    }
    if (*(unsigned char *)(p + 0xAC) == 0) {
        *(unsigned char *)(p + 0xAC) = 5;
        return *(signed char *)(p + 0xAC);
    }
    *(float *)(p + 0x108) = x;
    *(float *)(p + 0x128) = *(float *)(p + 0x128) + x;
    if (!(x <= 0.0f)) {
        if (*(unsigned char *)(p + 0x9C) != 0) {
            if (!(*(float *)(p + 0x128) <= *(float *)(p + 0x7C)) || !(*(float *)(p + 0x128) <= *(float *)(p + 0x3C))) {
                *(float *)(p + 0x128) = *(float *)(p + 0x5C);
                *(unsigned char *)(p + 0xAC) = 4;
            } else {
                *(unsigned char *)(p + 0xAC) = 2;
            }
        } else if (!(*(float *)(p + 0x128) <= *(float *)(p + 0x3C))) {
            *(float *)(p + 0x128) = *(float *)(p + 0x3C);
            *(unsigned char *)(p + 0xAC) = 4;
        }
    } else if (x < 0.0f) {
        if (*(unsigned char *)(p + 0x9C) != 0) {
            if (*(float *)(p + 0x128) < *(float *)(p + 0x5C) || *(float *)(p + 0x128) < *(float *)(p + 0x1C)) {
                *(float *)(p + 0x128) = *(float *)(p + 0x7C);
                *(unsigned char *)(p + 0xAC) = 4;
            }
        } else if (*(float *)(p + 0x128) < *(float *)(p + 0x1C)) {
            *(float *)(p + 0x128) = *(float *)(p + 0x1C);
            *(unsigned char *)(p + 0xAC) = 4;
        } else {
            *(unsigned char *)(p + 0xAC) = 2;
        }
    }
    ((ObjM74 *)p)->m74(*(float *)(p + 0x128));
    return *(signed char *)(p + 0xAC);
}

extern "C" void func_00104C00(char *, int, char *);

class ObjLsB4 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual int mB4();
};

static inline char *list_item(char *o, int i) {
    char *r;
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) {
        r = *(char **)(*(char **)(o + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

extern "C" void func_001FEA80(char *p, int m) {
    int i;
    for (i = 0; i < ((ObjLsB4 *)p)->mB4(); i++) {
        char *e = list_item(p, i);
        **(float **)(e + 0x104) = **(float **)(e + 0x104) * -1.0f;
        *(float *)(*(char **)(e + 0x104) + 4) = *(float *)(*(char **)(e + 0x104) + 4) * -1.0f;
        *(float *)(*(char **)(e + 0x104) + 8) = *(float *)(*(char **)(e + 0x104) + 8) * -1.0f;
        func_00104C00(*(char **)(e + 0x104), m, *(char **)(e + 0x104));
    }
}

class Col355 {
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
    virtual void m78(int, int);
};

class N1FE {
public:
    char pad[0x10];
    virtual void m8(float, float, float, char *, int);
};

extern "C" void func_00133AB0(float, float, int, int, int);

extern "C" void func_001FE710(float, float, float, char *, int);

static inline char *get1FE(char *q, int i) {
    char *r;
    if (*(unsigned char *)(q + 0xAC) != 0 && 0 <= i && i < *(int *)(q + 0x10)) {
        r = *(char **)(*(char **)(q + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

static inline void app1FE(char *n, int x, float a, float b, float c) {
    N1FE *o = *(N1FE **)(n + 0xFC);
    if (o == 0) {
        func_001FE710(a, b, c, n, x);
    } else if (*(unsigned char *)((char *)o + 0xC) != 0) {
        o->m8(a, b, c, n, x);
    } else {
        func_001FE710(a, b, c, n, x);
    }
}

#define BLEND(n, o) \
    func_00133AB0(t, u, *(int *)(n + 0x100), *(int *)(n + 0x100), *(int *)(o + 0x100)); \
    *(float *)(n + 0x184) = *(float *)(n + 0x184) * t + *(float *)(o + 0x184) * u; \
    *(float *)(n + 0x198) = *(float *)(n + 0x198) * t + *(float *)(o + 0x198) * u; \
    *(float *)(n + 0x1AC) = *(float *)(n + 0x1AC) * t + *(float *)(o + 0x1AC) * u;

#define C ((Col355 *)(p + 0x4EC0))
extern "C" void func_001FE400(char *p, int x, char *q, float t) {
    float u;
    char *n;
    char *o;
    char *e;
    float r;
    float g;
    float bb;
    N1FE *o2;
    int i;
    unsigned char b;
    if (*(unsigned char *)(p + 0x192) == 0) return;
    if (*(unsigned char *)(p + 0xAC) == 0) return;
    b = **(unsigned char **)(p + 4);
    n = *(char **)(*(char **)(p + 0x14) + b * 4);
    u = 1.0f - t;
    o = get1FE(q, b);
    if (*(unsigned short *)(n + 0xF8) != 0) {
        BLEND(n, o)
    }
    app1FE(n, x, 1.0f, 1.0f, 1.0f);
    for (i = 1; i < *(int *)(p + 0x10); i++) {
        b = *(unsigned char *)(*(char **)(p + 4) + i);
        n = *(char **)(*(char **)(p + 0x14) + b * 4);
        if (*(unsigned short *)(n + 0xF8) != 0) {
            o = get1FE(q, b);
            BLEND(n, o)
        }
        e = *(char **)(n + 0xF0);
        r = *(float *)(e + 0xE0);
        g = *(float *)(e + 0xE4);
        bb = *(float *)(e + 0xE8);
        o2 = *(N1FE **)(n + 0xFC);
        if (o2 == 0) {
            func_001FE710(r, g, bb, n, *(int *)(e + 0x104));
        } else if (*(unsigned char *)((char *)o2 + 0xC) != 0) {
            o2->m8(r, g, bb, n, *(int *)(e + 0x104));
        } else {
            func_001FE710(r, g, bb, n, *(int *)(e + 0x104));
        }
    }
}
#undef C

extern "C" void func_001FD820(char *, int);

extern "C" void func_001FD3D0(char *);

extern "C" void func_001FA370(char *, int, char *, int, int *);

class O1FC {
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
    virtual void m74(float);
};

extern "C" void func_001FC220(char *p, char *h, int n, unsigned char f) {
    int t;
    unsigned short *fl;
    int k;
//P<
    unsigned short m;
    int i;
    int j;
    char *o;
//P>
    if (n > 0) {
        func_001FD820(p, n);
        *(unsigned char *)(p + 0x188) = f;
    } else {
        *(float *)(p + 0x168) = 1.0f;
        *(float *)(p + 0x148) = 1.0f;
    }
    func_001FD3D0(p);
    if (h == 0) return;
    *(float *)(p + 0x1C) = *(float *)(h + 8);
    *(float *)(p + 0x3C) = *(float *)(h + 0xC);
    *(float *)(p + 0x5C) = *(float *)(h + 0x10);
    *(float *)(p + 0x7C) = *(float *)(h + 0x14);
    *(unsigned char *)(p + 0x9C) = (*(unsigned short *)(h + 0x18) & 1) != 0;
    *(char **)(p + 0xE4) = h;
    if ((unsigned short)(*(unsigned short *)(h + 0x18) & 2) == 0) {
        fl = (unsigned short *)(h + 0x1C);
        j = 0;
        fl++;
        k = 1;
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            o = (*(char ***)(p + 0x14))[i];
            m = *fl;
            fl++;
            if (m & 0x40) { func_001FA370(o + 0x10C, j, h, k, &t); k = j; j++; }
            if (m & 0x80) { func_001FA370(o + 0x120, j, h, k, &t); k = j; j++; }
            if (m & 0x100) { func_001FA370(o + 0x134, j, h, k, &t); k = j; j++; }
            if (m & 0x8) { func_001FA370(o + 0x148, j, h, k, &t); k = j; j++; }
            if (m & 0x10) { func_001FA370(o + 0x15C, j, h, k, &t); k = j; j++; }
            if (m & 0x20) { func_001FA370(o + 0x170, j, h, k, &t); k = j; j++; }
            if (m & 0x1) { func_001FA370(o + 0x184, j, h, k, &t); k = j; j++; }
            if (m & 0x2) { func_001FA370(o + 0x198, j, h, k, &t); k = j; j++; }
            if (m & 0x4) { func_001FA370(o + 0x1AC, j, h, k, &t); k = j; j++; }
        }
        *(float *)(p + 0x128) = *(float *)(p + 0x1C);
        *(unsigned char *)(p + 0xAC) = 2;
        *(char **)(p + 0xBC) = h;
        *(unsigned char *)(p + 0xA4) = 0;
    } else {
        *(char **)(p + 0xBC) = h + *(int *)h;
        *(unsigned char *)(p + 0xA4) = 1;
    }
    ((O1FC *)p)->m74(*(float *)(p + 0x128));
}

extern "C" void func_001F9EC0(char *);

extern "C" void func_001FBAF0(char *);

class C1FB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70();
    virtual void m74(float);
};

#define E1FB(i) (((char **)*(char **)(p + 0x14))[i])

extern "C" void func_001FBF70(char *p, char *a, char **arr) {
    int i;
    int j;
    float *s;
    char *e;
    unsigned char c;
    func_001FBAF0(p);
    *(int *)(p + 4) = *(int *)(a + 8);
    *(int *)(p + 8) = *(int *)(a + 4);
    *(int *)(p + 0x10) = *(unsigned short *)(a + 0xAA);
    *(char ***)(p + 0x14) = arr;
    *(char **)(p + 0xB8) = a;
    *(signed char *)(p + 0xB4) = 2;
    *(signed char *)(p + 0xAC) = 2;
    *(signed char *)(p + 0xAD) = 2;
    *(signed char *)(p + 0xAE) = 2;
    *(signed char *)(p + 0xAF) = 2;
    *(signed char *)(p + 0xB0) = 2;
    *(signed char *)(p + 0xB1) = 2;
    *(signed char *)(p + 0xB2) = 2;
    *(signed char *)(p + 0xB3) = 2;
    s = *(float **)(a + 0x10);
    for (i = 0; i < *(int *)(p + 0x10); i++) {
        *(short *)(E1FB(i) + 0xF6) = i;
        *(char **)(E1FB(i) + 0x104) = *(char **)(a + 0x108) + i * 0x40;
        e = E1FB(i);
        *(char **)(e + 0x100) = e + 0x40;
        *(char **)(E1FB(i) + 0x80) = *(char **)a + i * 0x90;
        c = (*(unsigned char **)(p + 8))[i];
        if (c != 0xFF) {
            *(char **)(E1FB((*(unsigned char **)(p + 4))[i]) + 0xF0) = E1FB(c);
        } else {
            *(char **)(E1FB((*(unsigned char **)(p + 4))[i]) + 0xF0) = 0;
        }
        *(float *)(E1FB(i) + 0x110) = s[0];
        *(float *)(E1FB(i) + 0x124) = s[1];
        *(float *)(E1FB(i) + 0x138) = s[2];
        *(float *)(E1FB(i) + 0x14C) = s[4];
        *(float *)(E1FB(i) + 0x160) = s[5];
        *(float *)(E1FB(i) + 0x174) = s[6];
        s += 8;
        *(float *)(E1FB(i) + 0x188) = 1.0f;
        *(float *)(E1FB(i) + 0x19C) = 1.0f;
        *(float *)(E1FB(i) + 0x1B0) = 1.0f;
        for (j = 0; j < 9; j++) func_001F9EC0(*(char **)((char *)(i * 4) + *(int *)(p + 0x14)) + j * 0x14 + 0x10C);
    }
    ((C1FB *)p)->m74(0.0f);
}

class C1FC {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70();
    virtual void m74(float);
};

#define E1FC(i) (((char **)*(char **)(p + 0x14))[i])

extern "C" void func_001FBC70(char *p, char *a, char **arr) {
    int i;
    int j;
    float *s;
    char *e;
    unsigned char c;
    func_001FBAF0(p);
    *(int *)(p + 4) = *(int *)(a + 8);
    *(int *)(p + 8) = *(int *)(a + 4);
    *(int *)(p + 0xC) = *(int *)(a + 0xC);
    *(int *)(p + 0x10) = *(unsigned short *)(a + 0xAA);
    *(char ***)(p + 0x14) = arr;
    *(char **)(p + 0xB8) = a;
    *(signed char *)(p + 0xB4) = 0;
    *(signed char *)(p + 0xAC) = 2;
    *(signed char *)(p + 0xAD) = 2;
    *(signed char *)(p + 0xAE) = 2;
    *(signed char *)(p + 0xAF) = 2;
    *(signed char *)(p + 0xB0) = 2;
    *(signed char *)(p + 0xB1) = 2;
    *(signed char *)(p + 0xB2) = 2;
    *(signed char *)(p + 0xB3) = 2;
    s = *(float **)(a + 0x10);
    for (i = 0; i < *(int *)(p + 0x10); i++) {
        *(short *)(E1FC(i) + 0xF6) = i;
        *(char **)(E1FC(i) + 0x104) = *(char **)(a + 0x108) + i * 0x40;
        e = E1FC(i);
        *(char **)(e + 0x100) = e + 0x40;
        *(char **)(E1FC(i) + 0x80) = *(char **)a + i * 0x90;
        c = (*(unsigned char **)(p + 8))[i];
        if (c != 0xFF) {
            *(char **)(E1FC((*(unsigned char **)(p + 4))[i]) + 0xF0) = E1FC(c);
        } else {
            *(char **)(E1FC((*(unsigned char **)(p + 4))[i]) + 0xF0) = 0;
        }
        *(short *)(E1FC((*(unsigned char **)(p + 4))[i]) + 0xF4) = (*(unsigned char **)(p + 0xC))[i];
        *(int *)(E1FC(i) + 0xFC) = 0;
        *(float *)(E1FC(i) + 0x110) = s[0];
        *(float *)(E1FC(i) + 0x124) = s[1];
        *(float *)(E1FC(i) + 0x138) = s[2];
        *(float *)(E1FC(i) + 0x14C) = s[4];
        *(float *)(E1FC(i) + 0x160) = s[5];
        *(float *)(E1FC(i) + 0x174) = s[6];
        s += 8;
        *(float *)(E1FC(i) + 0x188) = 1.0f;
        *(float *)(E1FC(i) + 0x19C) = 1.0f;
        *(float *)(E1FC(i) + 0x1B0) = 1.0f;
        for (j = 0; j < 9; j++) func_001F9EC0(*(char **)((char *)(i * 4) + *(int *)(p + 0x14)) + j * 0x14 + 0x10C);
    }
    ((C1FC *)p)->m74(0.0f);
}
