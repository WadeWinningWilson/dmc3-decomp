extern "C" void func_0013D5D0(char *);

extern "C" void func_0028C740(char *);

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

extern "C" void func_004FCE10(char *p) {
    int i;
    if (*(unsigned char *)(p + 0x2BD) != 6) {
        ((ObjD0 *)(p + 0x2F0))->mD0();
        ((ObjD0 *)(p + 0x730))->mD0();
        for (i = 0; i < *(int *)(p + 0xDC); i++) {
            func_0013D5D0(p + i * 16 + 0xE0);
        }
        func_0028C740(p + 0xBB0);
    } else {
        ((ObjD0 *)(p + 0x2F0))->mD0();
    }
}

extern "C" char D_01DFABA0[];

extern "C" char D_01CAFF0C[];

extern "C" void func_002EF940(char *, char *);

extern "C" void func_001AD100(char *);

extern "C" char D_005BE098[8];

extern "C" void func_00195E20(char *, char *);

extern "C" void func_004FD580(char *, int);

extern "C" int func_004FD500(char *, int);

extern "C" void func_004FDBB0(char *, float);

extern "C" int func_004FDC00(char *, int);

extern "C" int func_004FDD50(char *, char *, float, float);

extern "C" void func_004FD570(char *, int);

extern "C" void func_004FD920(char *);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_004FDA60(char *);

extern "C" void func_004FD560(char *, int);

extern "C" void func_004FD680(char *);

extern "C" void func_0028C5C0(char *, float, int);

class V4FC {
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
    virtual void mBC(float);
    virtual void d46();
    virtual void d47();
    virtual void mC8(char *);
};

extern "C" void func_004FCED0(char *p) {
    char *g;
    unsigned char f;
    int i;
    float k;
    g = *(char **)(p + 0x2B4);
    func_001AD100(p);
    *(unsigned char *)(p + 0x2BE) = 0;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = 1;
        if (*(unsigned char *)(p + 0x2BD) != 6) func_004FD580(p, 1);
        break;
    case 1:
        f = 0;
        if (*(unsigned char *)(p + 0x2BD) != 6) {
            for (i = 0; i < 7; i++) {
                if (!(unsigned char)func_004FD500(p, i)) {
                    f = 1;
                    break;
                }
            }
            if (!f) {
                *(unsigned char *)(p + 4) = 2;
                break;
            }
            if ((unsigned char)func_004FD500(p, *(unsigned char *)(p + 0x2BD)) != 1) break;
            if (g != 0 && *(short *)(g + 0x222C) > *(short *)(g + 0x222E)) func_004FDBB0(p, 0.0f);
            k = 1.0f;
            if (!(unsigned char)func_004FD500(p, func_004FDC00(p, 1))) k = 0.9f;
            if ((unsigned char)func_004FDD50(p, p + 0x2B8, k, 0.0f) == 1) {
                func_004FD570(p, 1);
                func_004FD920(p);
                *(short *)(p + 0x2C0) = 0;
                func_003303F0(D_01DFABA0, 8, 0x77, 0, 0x29);
            } else {
                func_004FDA60(p);
            }
        } else {
            if (g == 0) {
                func_004FD570(p, 0);
                break;
            }
            for (i = 0; i < 6; i++) {
                if (!(unsigned char)func_004FD500(p, i)) {
                    f = 1;
                    break;
                }
            }
            if (!f) {
                *(unsigned char *)(p + 4) = 2;
                func_004FD560(p, 0);
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x2BD) != 6) {
            if (!(unsigned char)func_004FD500(p, 6)) {
                *(unsigned char *)(p + 4) = 1;
                func_004FD570(p, 1);
                func_004FD920(p);
                *(short *)(p + 0x2C0) = 0;
            }
        } else if (g == 0) {
            *(unsigned char *)(p + 4) = 1;
            func_004FD570(p, 0);
        } else if (!(unsigned char)func_004FD500(p, *(unsigned char *)(p + 0x2BD))) {
            *(unsigned char *)(p + 4) = 1;
            func_003303F0(D_01DFABA0, 8, 0x77, 0, 0x29);
        }
        break;
    }
    if (*(unsigned char *)(p + 0x2BD) != 6) {
        if (*(unsigned char *)(p + 0x2BC) == 0) func_002EF940(*(char **)D_01CAFF0C, p + 0x260);
        func_004FD680(p);
        ((V4FC *)(p + 0x2F0))->mBC(*(float *)(p + 0x10));
        ((V4FC *)(p + 0x2F0))->mC8(p + 0xB70);
        func_0028C5C0(p + 0xBB0, 1.0f, 0);
        func_00195E20(D_005BE098, p);
    } else if (*(unsigned char *)(p + 0x2BC) != 0) {
        func_00195E20(D_005BE098, p);
    }
}

extern "C" unsigned char D_01CAFF3C[];

extern "C" short D_00564468[];

extern "C" void func_004FDDE0(char *);

extern "C" char *func_00207470(int, int, char *);

extern "C" void func_004FD550(char *, int);

extern "C" void func_004FD950(char *);

extern "C" void func_004FDA00(char *, int, float, float, float);

static inline unsigned char st4FD(char *p) { unsigned char r; if (*(unsigned char *)(p + 0x2BE) != 0) r = 1; else r = 0; return r; }

extern "C" void func_004FD270(char *p, char *a, char *e, float *v) {
    float m[16] __attribute__((aligned(16)));
    unsigned char f;
    char *o;
    o = *(char **)(p + 0x2B4);
    f = 0;
    if (st4FD(p) == 1) return;
    if (*(unsigned char *)(p + 0x2BC) != 0) {
        if ((unsigned char)func_004FD500(p, 6) == 0 && *(signed char *)(a + 2) == 1 && *(signed char *)(e + 5) == 4) {
            *(unsigned char *)(p + 0x2BE) = 1;
            f = 3;
        }
    } else if (*(signed char *)(a + 2) == 0 && (*(signed char *)(e + 5) == 0 || *(signed char *)(e + 5) == 1)) {
        *(unsigned char *)(p + 0x2BE) = 1;
        f = 1;
        (*(short *)(p + 0x2C0))++;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(v) : "memory");
        if (o != 0) {
            if (!(*(short *)(p + 0x2C0) < D_00564468[D_01CAFF3C[0]])) {
                f |= 2;
                func_00207470(3, 0x1D, (char *)m);
            } else {
                func_004FDDE0(p);
                func_00207470(3, 0x1C, (char *)m);
            }
        } else {
            f |= 2;
            func_00207470(3, 0x1D, (char *)m);
        }
    }
    if (f & 2) {
        func_004FD550(p, 0);
        *(short *)(p + 0x2C0) = 0;
    }
    if (f & 1) {
        func_004FD950(p);
        func_004FDA00(p, 2, 18.0f, 2.0f, 3.0f);
    }
}

class VCC_1_pi {
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
    virtual int m(char *);
};

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_004FD480(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 701) != 6) {
        ((VCC_1_pv *)(v0 + 752))->m((v0 + 2928));
        v1 = ((VCC_1_pi *)(v0 + 1840))->m((v0 + 2928));
    } else {
        v1 = ((VCC_1_pi *)(v0 + 752))->m((v0 + 2928));
    }
    return v1;
}
}
