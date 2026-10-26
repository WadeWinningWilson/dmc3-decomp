extern "C" char D_00666750[];

extern "C" void func_00196C40(char *, char *);

extern "C" char D_006480D0[];

class ObjSkD0 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void mD0();
};

extern "C" {
void func_0044A010(char *p) {
    extern void func_001AF080(char *, int);
    int i;
    if (*(int *)(p + 0x3C) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x3C));
        *(int *)(p + 0x3C) = 0;
    }
    if (*(int *)(p + 0x40) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x40));
        *(int *)(p + 0x40) = 0;
    }
    if (*(char **)(p + 0x44) != 0) {
        func_00196C40(D_006480D0, *(char **)(p + 0x44));
        *(int *)(p + 0x44) = 0;
    }
    for (i = 0; i < 4; i++) {
        ((ObjSkD0 *)(p + i * 0x600 + 0x80))->mD0();
    }
    ((ObjSkD0 *)(p + 0x1880))->mD0();
    ((ObjSkD0 *)(p + 0x1E80))->mD0();
    ((ObjSkD0 *)(p + 0x2480))->mD0();
    ((ObjSkD0 *)(p + 0x2A80))->mD0();
}
}

class W44B {
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
    virtual int m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void d32();
    virtual void m8C();
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

extern "C" int D_00578020[];

extern "C" void func_0044BA30(char *, int, int, int);

static inline char *ent44B(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

#define W1 ((W44B *)(p + 0x1E80))

#define W2 ((W44B *)(p + 0x2480))

extern "C" {
int func_0044B150(char *p) {
    extern void func_001AF080(char *, char *);
    extern char *func_001AFB90(char *, int, int, int);
    int n;
    unsigned char ok;
    char *b;
    char *h;
    char *a;
    switch (*(unsigned char *)(p + 0x3080)) {
    case 0:
        if (*(unsigned char *)(p + 0x3082) != 0) {
            if (*(signed char *)(p + 0x311E) == *(signed char *)(p + 0x311B)) {
                *(unsigned char *)(p + 0x3082) = 0;
            } else {
                *(signed char *)(p + 0x311E) = *(signed char *)(p + 0x311B);
                if (*(unsigned char *)(p + 0x3081) == 1) {
                    *(unsigned char *)(p + 0x3128) = 0x40;
                    *(unsigned char *)(p + 0x3080) = 1;
                } else {
                    *(unsigned char *)(p + 0x3080) = 3;
                }
            }
        }
        break;
    case 1:
        if (0 < *(unsigned char *)(p + 0x3128)) {
            W1->m84(*(unsigned char *)(p + 0x3128), 1);
            W2->m84(*(unsigned char *)(p + 0x3128), 1);
            *(unsigned char *)(p + 0x3128) -= 0x10;
        } else {
            W1->m8C();
            W2->m8C();
            *(unsigned char *)(p + 0x3081) = 0;
            *(int *)(p + 0x3084) = 2;
            *(unsigned char *)(p + 0x3080) = 2;
        }
        break;
    case 2:
        if (--*(int *)(p + 0x3084) == 0) {
            W1->mD0();
            W2->mD0();
            *(unsigned char *)(p + 0x3080) = 3;
        }
        break;
    case 3:
        if (*(char **)(p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(char **)(p + 0x3C));
            *(char **)(p + 0x3C) = 0;
        }
        n = D_00578020[*(signed char *)(p + 0x311E)];
        if (n == 0x2DA && *(unsigned char *)(*(char **)(p + 0x3110) + 0xB7) == 1) n = 0x2D0;
        *(char **)(p + 0x3C) = func_001AFB90(D_00666750, n, 0, 8);
        if (*(char **)(p + 0x3C) == 0) return 0;
        *(unsigned char *)(p + 0x3080) = 4;
    case 4:
        ok = 1;
        if (*(unsigned char *)(*(char **)(p + 0x3C) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x3C) + 1) != 3) ok = 0;
        if (ok != 0) {
            h = *(char **)(p + 0x3C);
            if (**(unsigned short **)(h + 8) == 0) {
                a = *(char **)(h + 0xC);
                b = ent44B(a, 1);
            } else {
                a = *(char **)(h + 0xC);
                b = a;
            }
            if (**(unsigned short **)(h + 8) == 0) a = ent44B(a, 0);
            else a = *(char **)(h + 0xC);
            W1->m24(1);
            if (!(unsigned char)W1->m2C(a, b)) return 0;
            W1->m3C(1);
            h = *(char **)(p + 0x3C);
            if (**(unsigned short **)(h + 8) == 0) {
                a = *(char **)(h + 0xC);
                b = ent44B(a, 3);
            } else {
                a = *(char **)(h + 0xC);
                b = a;
            }
            if (**(unsigned short **)(h + 8) == 0) a = ent44B(a, 2);
            else a = *(char **)(h + 0xC);
            W2->m24(1);
            if (!(unsigned char)W2->m2C(a, b)) return 0;
            W2->m3C(1);
            *(unsigned char *)(p + 0x3128) = 0;
            W1->m84(*(unsigned char *)(p + 0x3128), 1);
            W2->m84(*(unsigned char *)(p + 0x3128), 1);
            *(unsigned char *)(p + 0x3081) = 1;
            func_0044BA30(p, *(signed char *)(p + 0x311C), *(signed char *)(p + 0x311E), 1);
            *(unsigned char *)(p + 0x3080) = 5;
    case 5:
            if (*(unsigned char *)(p + 0x3128) < 0x40) {
                *(unsigned char *)(p + 0x3128) += 0x10;
                W1->m84(*(unsigned char *)(p + 0x3128), 1);
                W2->m84(*(unsigned char *)(p + 0x3128), 1);
            }
            if (!(*(unsigned char *)(p + 0x3128) < 0x40)) {
                W1->m8C();
                W2->m8C();
                *(unsigned char *)(p + 0x3082) = 0;
                *(unsigned char *)(p + 0x3080) = 0;
            }
        }
        break;
    }
    return 1;
}
}

extern "C" int D_00578040[][5];

class W2A80 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24(int);
    virtual void d28();
    virtual bool m2C(char *, char *);
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
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

static inline int ok040(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *chunkB44(char *c) { if (*(unsigned int *)(c + 4) < 2) return 0; if (*(int *)(c + 0xC) == 0) return 0; return c + *(int *)(c + 0xC); }

static inline char *chunkA44(char *c) { if (*(int *)(c + 4) == 0) return 0; if (*(int *)(c + 8) == 0) return 0; return c + *(int *)(c + 8); }

static inline char *getB44(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkB44(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

static inline char *getA44(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkA44(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

extern "C" {
int func_0044B660(char *p) {
    extern int func_001AFB90(char *, int, int, int);
    extern void func_001AF080(char *, int);
    switch (*(unsigned char *)(p + 0x3088)) {
    case 0:
        if (*(unsigned char *)(p + 0x308A) == 0) break;
        if (*(signed char *)(p + 0x311F) == *(signed char *)(p + 0x311C)) {
            *(unsigned char *)(p + 0x308A) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3089) == 1) {
            *(unsigned char *)(p + 0x3129) = 0x40;
            *(unsigned char *)(p + 0x3088) = 1;
        } else {
            *(unsigned char *)(p + 0x3088) = 3;
        }
        break;
    case 1:
        if (0 < *(unsigned char *)(p + 0x3129)) {
            ((W2A80 *)(p + 0x2A80))->m84(*(unsigned char *)(p + 0x3129), 1);
            *(unsigned char *)(p + 0x3129) = *(unsigned char *)(p + 0x3129) - 0x10;
        } else {
            ((W2A80 *)(p + 0x2A80))->m8C();
            *(unsigned char *)(p + 0x3089) = 0;
            *(int *)(p + 0x308C) = 2;
            *(unsigned char *)(p + 0x3088) = 2;
        }
        break;
    case 2:
        if (--*(int *)(p + 0x308C) == 0) {
            ((W2A80 *)(p + 0x2A80))->mD0();
            *(unsigned char *)(p + 0x3088) = 3;
        }
        break;
    case 3:
        if (*(unsigned char *)(p + 0x3120) & 1) {
            *(unsigned char *)(p + 0x3088) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x308A) == 0) break;
        if (*(int *)(p + 0x40) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x40));
            *(int *)(p + 0x40) = 0;
        }
        *(signed char *)(p + 0x311F) = *(signed char *)(p + 0x311C);
        *(int *)(p + 0x40) = func_001AFB90(D_00666750, D_00578040[*(signed char *)(p + 0x311B)][((signed char *)(p + 0x3124))[*(signed char *)(p + 0x311F)]], 0, 8);
        if (*(int *)(p + 0x40) == 0) return 0;
        *(unsigned char *)(p + 0x3088) = 4;
    case 4:
        if ((unsigned char)ok040(*(unsigned char **)(p + 0x40)) == 0) break;
        if (*(unsigned char *)(p + 0x308A) == 0) {
            *(unsigned char *)(p + 0x3088) = 3;
        } else {
            *(unsigned char *)(p + 0x3088) = 5;
        }
        break;
    case 5: {
        char *o;
        char *a;
        char *b;
        unsigned short k;
        o = *(char **)(p + 0x40);
        b = getB44(o);
        a = getA44(o);
        ((W2A80 *)(p + 0x2A80))->m24(1);
        if (((W2A80 *)(p + 0x2A80))->m2C(a, b) == 0) return 0;
        ((W2A80 *)(p + 0x2A80))->m3C(3);
        *(unsigned char *)(p + 0x3129) = 0;
        ((W2A80 *)(p + 0x2A80))->m84(*(unsigned char *)(p + 0x3129), 1);
        *(unsigned char *)(p + 0x3089) = 1;
        *(unsigned char *)(p + 0x3088) = 6;
    }
    case 6:
        if (*(unsigned char *)(p + 0x3129) < 0x40) {
            *(unsigned char *)(p + 0x3129) = *(unsigned char *)(p + 0x3129) + 0x10;
            ((W2A80 *)(p + 0x2A80))->m84(*(unsigned char *)(p + 0x3129), 1);
        }
        if (*(unsigned char *)(p + 0x3129) >= 0x40) {
            ((W2A80 *)(p + 0x2A80))->m8C();
            *(unsigned char *)(p + 0x308A) = 0;
            *(unsigned char *)(p + 0x3088) = 0;
        }
        break;
    }
    return 1;
}
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_00449370(char *);

extern "C" char *func_004495C0(int p0, int p1) {
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
    **q = func_001B0FD0(a, 0x3140, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00449370(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
        *(int *)(ret + 0x38) = p0;
        *(int *)(ret + 0x3110) = p1;
    }
    return ret;
}

class VCC_1_ii {
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
    virtual int m(int);
};

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_0044A0F0(int p0) {
    int v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    v0 = 0;
    v1 = (char *)p0;
    v2 = v1;
    v3 = (int)(v1 + 12496);
    do {
        ((VCC_1_iv *)(v2 + 128))->m(v3);
        v0 = (v0 + 1);
        v2 = (v2 + 1536);
    } while ((v0 < 4));
    v4 = ((VCC_1_ii *)(v1 + 6272))->m(v3);
    if (*(unsigned char *)(v1 + 12417) == 1) {
        ((VCC_1_iv *)(v1 + 7808))->m(v3);
        v4 = ((VCC_1_ii *)(v1 + 9344))->m(v3);
    }
    if (*(unsigned char *)(v1 + 12425) == 1) {
        v4 = ((VCC_1_ii *)(v1 + 10880))->m(v3);
    }
    return v4;
}
}
