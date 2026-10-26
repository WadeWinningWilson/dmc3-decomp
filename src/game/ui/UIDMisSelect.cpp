extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_00196C40(char *, char *);

extern "C" char D_006480D0[];

class ObjD0 {
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

extern "C" void func_0048F670(char *p) {
    int i;
    for (i = 0; i < 9; i++) {
        ((ObjD0 *)(p + i * 0x600 + 0x80))->mD0();
    }
    for (i = 0; i < 2; i++) {
        if (*(int *)(p + i * 4 + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + i * 4 + 0x3C));
            *(int *)(p + i * 4 + 0x3C) = 0;
        }
        ((ObjD0 *)(p + i * 0x600 + 0x3680))->mD0();
    }
    if (*(char **)(p + 0x44) != 0) {
        func_00196C40(D_006480D0, *(char **)(p + 0x44));
        *(char **)(p + 0x44) = 0;
    }
}

extern "C" void func_001AD140(char *);

class Snd29C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void m1C(unsigned int, int, int);
    virtual void m20(unsigned int, int, int);
    virtual void m24(int, int);
    virtual void m28(int, int, int);
    virtual int m2C();
};

extern "C" Snd29C *D_005BC1A8;

extern "C" char D_01DFA310[];

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" void func_0030E580(char *, char *);

extern "C" char *func_0048EB80(char *, signed char, unsigned char, unsigned char);

extern "C" int func_0048F810(char *);

extern "C" int func_0048F820(char *);

extern "C" int func_0048F850(char *);

extern "C" void func_0030E910(char *, int, int);

static inline int ok48D(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner48D(char *q) {
    if (*(unsigned int *)(q + 4) < 0x13) return 0;
    if (*(int *)(q + 0x50) == 0) return 0;
    return q + *(int *)(q + 0x50);
}

static inline char *chunk48D(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner48D(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

extern "C" void func_0048DBE0(char *p) {
    char *o;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x1388, 0, 8);
        (*(int *)(p + 8))++;
    case 1:
        if ((unsigned char)ok48D(*(char **)(p + 0x1C)) == 1) {
            func_0030E580(D_01DFA310, chunk48D(*(char **)(p + 0x1C)));
            if ((*(char **)(p + 0x30) = func_0048EB80(*(char **)(p + 0x1C), *(signed char *)(p + 0x34), *(unsigned char *)(p + 0x18), *(unsigned char *)(p + 0x19))) == 0) {
                *(unsigned char *)(p + 0x2B) = 2;
                *(int *)(p + 8) = 7;
            } else {
                (*(int *)(p + 8))++;
            }
        }
        break;
    case 2:
        if ((unsigned char)func_0048F810(*(char **)(p + 0x30)) == 1) {
            D_005BC1A8->m1C(0x80000000, 0x20, 0xFFFFFF);
            (*(int *)(p + 8))++;
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            D_005BC1A8->m28(0, 1, 0xFFFFFF);
            (*(int *)(p + 8))++;
        }
        break;
    case 4:
        *(unsigned char *)(p + 0x2B) = func_0048F820(*(char **)(p + 0x30));
        switch (*(unsigned char *)(p + 0x2B)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x2A) = func_0048F850(*(char **)(p + 0x30));
            (*(int *)(p + 8))++;
            break;
        case 2:
            (*(int *)(p + 8))++;
            break;
        }
        break;
    case 5:
        D_005BC1A8->m20(0x80000000, 0x20, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 6:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 7:
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        if (*(char **)(p + 0x30)) {
            func_001AD140(*(char **)(p + 0x30));
            *(int *)(p + 0x30) = 0;
        }
        (*(int *)(p + 8))++;
        break;
    case 8: case 9:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 10:
        if (*(int *)(p + 0x1C)) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
        break;
    }
}

extern "C" char *func_0050B800(char *, int);

extern "C" int func_0050C1C0(char *);

static inline int ok48F(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner48F(char *q) {
    if (*(unsigned int *)(q + 4) < 9) return 0;
    if (*(int *)(q + 0x28) == 0) return 0;
    return q + *(int *)(q + 0x28);
}

static inline char *chunk48F(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner48F(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

extern "C" void func_0048E2A0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x33F, 0, 8);
        (*(int *)(p + 8))++;
    case 1:
        if ((unsigned char)ok48F(*(char **)(p + 0x1C)) == 1) {
            func_0030E580(D_01DFA310, chunk48F(*(char **)(p + 0x1C)));
            if ((*(char **)(p + 0x3C) = func_0050B800(*(char **)(p + 0x1C), *(int *)(p + 0x40))) == 0) {
                *(unsigned char *)(p + 0x2B) = 2;
                *(int *)(p + 8) = 6;
            } else {
                D_005BC1A8->m1C(0x80000000, 0x20, 0xFFFFFF);
                (*(int *)(p + 8))++;
            }
        }
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            D_005BC1A8->m24(0, 0);
            (*(int *)(p + 8))++;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x2B) = func_0050C1C0(*(char **)(p + 0x3C));
        switch (*(unsigned char *)(p + 0x2B)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x2A) = 5;
            *(int *)(p + 0x40) = (*(int *)(*(char **)(p + 0x3C) + 0x39CC) << 16) | *(unsigned short *)(*(char **)(p + 0x3C) + 0x39C0);
            *(int *)(p + 0x44) = *(int *)(*(char **)(p + 0x3C) + 0x39D4);
            (*(int *)(p + 8))++;
            break;
        case 2:
            *(int *)(p + 0x40) = 0;
            *(int *)(p + 0x44) = -1;
            (*(int *)(p + 8))++;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x20, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 6:
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        if (*(char **)(p + 0x3C)) {
            func_001AD140(*(char **)(p + 0x3C));
            *(int *)(p + 0x3C) = 0;
        }
        (*(int *)(p + 8))++;
        break;
    case 7: case 8:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 9:
        if (*(int *)(p + 0x1C)) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x5207);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
        break;
    }
}

extern "C" char D_01DFC550[];

extern "C" signed char D_00666712[];

extern "C" void func_004EF480(char *, int);

extern "C" char *func_004E3A30(char *, signed char);

extern "C" int func_004F1AB0(char *);

extern "C" int func_004F1D30(char *);

extern "C" void func_004EF4C0(char *);

static inline int ok490(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner490(char *q) {
    if (*(unsigned int *)(q + 4) < 0xF) return 0;
    if (*(int *)(q + 0x40) == 0) return 0;
    return q + *(int *)(q + 0x40);
}

static inline char *chunk490(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner490(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

extern "C" void func_0048E5F0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(signed char *)(p + 0x2C) = D_00666712[0];
        *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x1B60, 0, 8);
        (*(int *)(p + 8))++;
    case 1:
        if ((unsigned char)ok490(*(char **)(p + 0x1C)) == 1) {
            func_004EF480(D_01DFC550, *(int *)(p + 0x14));
            func_0030E580(D_01DFA310, chunk490(*(char **)(p + 0x1C)));
            if ((*(char **)(p + 0x48) = func_004E3A30(*(char **)(p + 0x1C), *(signed char *)(p + 0x29))) == 0) {
                *(unsigned char *)(p + 0x2B) = 2;
                *(int *)(p + 8) = 6;
            } else {
                D_005BC1A8->m1C(0x80000000, 0x20, 0xFFFFFF);
                (*(int *)(p + 8))++;
            }
        }
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 3:
        switch (*(signed char *)(p + 0x29)) {
        case 3:
            if (func_004F1AB0(D_01DFC550)) {
                *(unsigned char *)(p + 0x2B) = 2;
                (*(int *)(p + 8))++;
            }
            break;
        case 4:
            switch (func_004F1D30(D_01DFC550)) {
            case 0:
                break;
            case 1:
                *(unsigned char *)(p + 0x2B) = 2;
                (*(int *)(p + 8))++;
                break;
            case 2:
                *(unsigned char *)(p + 0x34) = 0;
                *(unsigned char *)(p + 0x2B) = 1;
                (*(int *)(p + 8))++;
                break;
            }
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x20, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 6:
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        if (*(char **)(p + 0x48)) {
            func_001AD140(*(char **)(p + 0x48));
            *(int *)(p + 0x48) = 0;
        }
        (*(int *)(p + 8))++;
        break;
    case 7: case 8:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 9:
        if (*(int *)(p + 0x1C)) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        func_004EF4C0(D_01DFC550);
        func_0030E910(D_01DFA310, 0x4E20, 0x4E83);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
        break;
    }
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" short D_00586800[];

class O48F {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void m3C(short);
};

static inline char *ent48F(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *gch48F(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent48F(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_0048F890(char *p) {
    unsigned short k;
    char *b;
    char *a;
    int i;
    *(char *)(p + 0x4280) = 0;
    *(float *)(p + 0x4290) = 0.0f;
    *(float *)(p + 0x4294) = 0.0f;
    *(float *)(p + 0x4298) = 0.0f;
    *(float *)(p + 0x429C) = 1.0f;
    *(float *)(p + 0x42A0) = 0.0f;
    *(float *)(p + 0x42A4) = 0.0f;
    *(float *)(p + 0x42A8) = 0.0f;
    *(float *)(p + 0x42AC) = 1.0f;
    *(float *)(p + 0x42B0) = 1.0f;
    *(float *)(p + 0x42B4) = 1.0f;
    *(float *)(p + 0x42B8) = 1.0f;
    *(float *)(p + 0x42BC) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x42C0) : "memory");
    func_00131700(p + 0x42C0, p + 0x42C0, p + 0x42A0);
    func_00105230(p + 0x42C0, p + 0x42C0, p + 0x4290);
    func_001318E0(p + 0x42C0, p + 0x42C0, p + 0x42B0);
    for (i = 0; i < 9; i++) {
        k = i * 2 + 1;
        a = gch48F(*(char **)(p + 0x38), k);
        k = i * 2;
        b = gch48F(*(char **)(p + 0x38), k);
        ((O48F *)(p + i * 0x600 + 0x80))->m24(1);
        if (!(unsigned char)((O48F *)(p + i * 0x600 + 0x80))->m2C(b, a)) {
            return 0;
        }
        ((O48F *)(p + i * 0x600 + 0x80))->m3C(D_00586800[i * 2]);
    }
    return 1;
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

extern "C" {
int func_0048F740(char *p0) {
    char *v6;
    int v5;
    int v3;
    int v2;
    int v4;
    char *v0;
    char *v1;
    if (*(unsigned char *)(p0 + 4) >= 3) {
        v0 = p0;
        v4 = 0;
        v1 = v0;
        v2 = (int)(v0 + 17088);
        do {
            v3 = ((VCC_1_ii *)(v1 + 128))->m(v2);
            v4 = (v4 + 1);
            v1 = (v1 + 1536);
        } while ((v4 < 9));
        v5 = 0;
        v6 = v0;
        do {
            if (*(unsigned char *)(v0 + 17193) == 1) {
                v3 = ((VCC_1_ii *)(v6 + 13952))->m(v2);
            }
            v5 = (v5 + 1);
            v0 = (v0 + 12);
            v6 = (v6 + 1536);
        } while ((v5 < 2));
    }
    return v3;
}
}
