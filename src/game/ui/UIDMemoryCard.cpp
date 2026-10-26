extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013D5D0(char *);

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

extern "C" void func_004E4180(char *p) {
    int i;
    int j;
    if (*(int *)(p + 0x180) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x180));
        *(int *)(p + 0x180) = 0;
    }
    for (i = 0; i < 7; i++) {
        ((ObjSkD0 *)(p + i * 0x600 + 0x1C0))->mD0();
    }
    if (*(unsigned char *)(p + 0x3897) == 1) {
        ((ObjSkD0 *)(p + 0x2BC0))->mD0();
    }
    ((ObjSkD0 *)(p + 0x31C0))->mD0();
    for (j = 0; j < *(int *)(p + 0x38); j++) {
        func_0013D5D0(p + j * 16 + 0x3C);
    }
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

extern "C" bool func_004E5DC0(char *p) {
    char *m = *(char **)(p + 0x180);
    char *a = mdl1(m);
    char *b = mdl2(m);
    ((V243C *)(p + 0x2BC0))->m24(1);
    if (((V243C *)(p + 0x2BC0))->m2C(a, b) == 0) return false;
    ((V243C *)(p + 0x2BC0))->m3C(1);
    *(unsigned char *)(p + 0x3894) = 1;
    *(unsigned char *)(p + 0x3897) = 1;
    return true;
}

extern "C" void func_001AD140(char *);

extern "C" char D_01DFC550[];

extern "C" int D_01DFC554[];

extern "C" int D_01DFC558[];

extern "C" int D_01DFC55C[];

extern "C" int D_01DFC560[];

extern "C" int D_01DFC564[];

extern "C" int D_01DFC568[];

extern "C" char D_01DFC56C[];

extern "C" unsigned char D_01DFC74C[];

extern "C" char D_01DFA340[];

extern "C" char D_006663C0[];

extern "C" char D_005BE098[8];

extern "C" int func_004E4300(char *);

extern "C" void func_004E46F0(char *, int);

extern "C" void func_004E49D0(char *, int);

extern "C" void func_004E4BB0(char *, int, int, int);

extern "C" unsigned int func_003101B0(char *, int, int);

extern "C" void func_0030FD40(char *, int, int, int, unsigned int, int, int, int);

extern "C" int func_001AE310(char *, int);

extern "C" int func_004E5B50(char *);

extern "C" void func_004E5F90(char *, int, int);

extern "C" void func_004E5F00(char *);

extern "C" void func_00195E20(char *, char *);

class V4E3 {
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
    virtual void mC8(char *);
};

extern "C" void func_004E3DA0(char *p) {
    char *e;
    int a;
    int i;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        if (!(unsigned char)func_004E4300(p)) goto fail;
        *(unsigned char *)(p + 4) = 1;
        *(unsigned char *)(p + 5) = 0;
    case 1:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            func_004E46F0(p, 0);
            func_004E46F0(p, 1);
            (*(unsigned char *)(p + 5))++;
        case 1:
            if (D_01DFC554[0] & 0x10000000) {
                *(unsigned char *)(p + 4) = 2;
                *(unsigned char *)(p + 5) = 0;
            } else {
                func_004E49D0(p, D_01DFC560[0]);
            }
            break;
        }
        break;
    case 2:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            func_004E46F0(p, 0);
            func_004E46F0(p, 2);
            *(unsigned char *)(p + 0x3896) = 0;
            (*(unsigned char *)(p + 5))++;
        case 1:
            if (D_01DFC554[0] & 0x20000000) {
                *(unsigned char *)(p + 0x3896) = 1;
                *(unsigned char *)(p + 4) = 1;
                *(unsigned char *)(p + 5) = 0;
            } else {
                func_004E46F0(p, 2);
                a = D_01DFC560[0];
                i = D_01DFC564[0];
                e = D_01DFC550 + i * 0x30 + 0x1C;
                if (D_01DFC74C[0] == 1) {
                    func_004E4BB0(p, a, i, 0);
                    func_0030FD40(D_01DFA340, 0x4E82, 0x100 - (func_003101B0(D_01DFA340, 0x4E82, 0x14) >> 16) / 2, 0x60, 0x80C0C0C0, 0x14, 0xFFFFF2, 1);
                    *(unsigned char *)(p + 0x3896) = 1;
                } else if (D_01DFC56C[i * 0x30] != 0 && D_01DFC568[0] != 0) {
                    func_004E4BB0(p, a, i, 1);
                    *(unsigned char *)(p + 0x3890) = *(int *)(e + 0xC);
                    *(unsigned char *)(p + 0x3896) = 0;
                    if (!((unsigned short)func_001AE310(D_006663C0, 0) & 0xA000)) {
                        if (*(unsigned char *)(p + 0x3890) != *(unsigned char *)(p + 0x3892) || *(unsigned char *)(p + 0x3894) == 0) {
                            if (*(unsigned char *)(p + 0x3895) == 0) *(unsigned char *)(p + 0x3895) = 1;
                        }
                    } else {
                        *(unsigned char *)(p + 0x3895) = 0;
                    }
                } else {
                    func_004E4BB0(p, a, i, 0);
                    func_0030FD40(D_01DFA340, 0x4E83, 0xC0, 0x60, 0x80C0C0C0, 0x14, 0xFFFFF2, 1);
                    *(unsigned char *)(p + 0x3896) = 1;
                }
            }
            break;
        }
        break;
    case 3:
        if (*(signed char *)(p + 0x3891) == 0 || *(signed char *)(p + 0x3891) == 3) {
            if (*(unsigned char *)(p + 0x3895) == 0) {
                *(unsigned char *)(p + 4) = 4;
                *(unsigned char *)(p + 5) = 0;
            }
        }
        break;
    case 4:
        break;
    }
    if ((unsigned char)func_004E5B50(p)) {
        func_004E5F90(p, D_01DFC55C[0], D_01DFC558[0]);
        func_004E5F00(p);
        e = p + 0x3850;
        ((V4E3 *)(p + 0xDC0))->mC8(e);
        ((V4E3 *)(p + 0x7C0))->mC8(e);
        func_00195E20(D_005BE098, p);
        return;
    }
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 4;
    *(unsigned char *)(p + 5) = 0;
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
int func_004E4260(int p0) {
    char *v0;
    int v3;
    char *v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v3 = 0;
    v1 = v0;
    v2 = (int)(v0 + 14416);
    do {
        ((VCC_1_iv *)(v1 + 448))->m(v2);
        v3 = (v3 + 1);
        v1 = (v1 + 1536);
    } while ((v3 < 7));
    if (1 == *(unsigned char *)(v0 + 14484)) {
        ((VCC_1_iv *)(v0 + 11200))->m(v2);
    }
    tmp0 = ((VCC_1_ii *)(v0 + 12736))->m(v2);
    return tmp0;
}
}
