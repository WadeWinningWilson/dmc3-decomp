class VBC_1_fi {
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
    virtual int m(float);
};

extern "C" {
extern char D_005758D0[];
}

extern "C" {
void func_004401F0(char *, int);
}

extern "C" void func_0043F490(char *p0) {
    int v0;
    char *v1;
    float v2;
    float v3;
    int tmp7;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        if (*(signed char *)(v1 + 1985) == 0) {
            v3 = *(float *)((D_005758D0 + (((*(unsigned char *)(v1 + 1986) << 1) + *(unsigned char *)(*(char **)(v1 + 2052) + 2051)) << 2)) + 0);
            *(float *)(v1 + 2040) = v3;
        }
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        return;
    case 1:
        if (*(unsigned char *)(v1 + 1989) != 0) {
            if (*(signed char *)(v1 + 1985) == 0) {
                *(float *)(v1 + 2040) -= *(float *)(v1 + 16);
                if (*(float *)(v1 + 2040) < 0.0f) {
                    func_004401F0(p0, v0);
                }
            }
        }
        tmp7 = ((VBC_1_fi *)(v1 + 448))->m(*(float *)(v1 + 16));
        break;
    }
}

extern "C" char D_00666750[];

class ObjT1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

extern "C" char D_01CAFF0C[];

extern "C" int func_001AEA60(char *, int, int);

extern "C" int func_0031B860(int, char *, int, float);

extern "C" void func_002F2E30(char *, char *);

extern "C" int D_00575840[];

extern "C" float D_00575A6C[];

extern "C" float D_00575ACC[];

extern "C" {
void func_0043FF40(char *p) {
    extern void func_0043EB20(char *, int);
    char *g;
    float t;
    int i;
    int *q;
    int v;
    func_0043EB20(p, 0);
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x7F0) = t;
    *(unsigned char *)(p + 0x7C2) = 4;
    for (i = 0, q = D_00575840; i < 4; i++, q++) {
        if (!!(*(float *)(p + 0x7F0) < (float)*q)) {
            *(unsigned char *)(p + 0x7C2) = i;
            break;
        }
    }
    v = func_001AEA60(D_00666750, 6, 3);
    if (*(signed char *)(p + 0x7C1) == 0) {
        *(int *)(p + 0x800) = func_0031B860(v, p + 0x7F4, 5, D_00575A6C[0]);
    } else {
        *(int *)(p + 0x800) = func_0031B860(v, p + 0x7F4, 4, D_00575ACC[0]);
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2E30(g, p);
    }
}
}

class SubC8CC {
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
    virtual void mCC(char *);
};

extern "C" void func_0043FEE0(char *p) {
    char *q = p + 0x850;
    ((SubC8CC *)(p + 0x1C0))->mC8(q);
    ((SubC8CC *)(p + 0x1C0))->mCC(q);
}

extern "C" int D_005759C0[];

extern "C" int D_005759E0[];

class ObjSndB4 {
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
    virtual void mB4(int, int, int, int);
};

extern "C" void func_0043FA30(char *p, int i) {
    int v;
    if (*(unsigned char *)(p + 0x7C0) == 0) {
        v = D_005759C0[i];
        if (v != -1) {
            ((ObjSndB4 *)(p + 0x1C0))->mB4(v, 10, 0, 0);
        }
    } else {
        v = D_005759E0[i];
        if (v != -1) {
            ((ObjSndB4 *)(p + 0x1C0))->mB4(v, 10, 0, 0);
        }
    }
}

extern "C" char D_01DFABA0[];

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

class ObjAnBC {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual unsigned char mBC(float);
};

extern "C" {
void func_0043F810(char *p) {
    extern void func_003305E0(char *, int, int, char *, int, int, int);
    extern void func_00440090(char *, int);
    extern void func_0043EAF0(char *);
    float v[4];
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0043EAF0(p);
        if (*(signed char *)(p + 0x7C1) == 0) {
            GETPOS(v, *(char **)(*(char **)(p + 0x1A8) + 0x104));
        } else {
            GETPOS(v, *(char **)(*(char **)(p + 0x1B0) + 0x104));
        }
        func_003305E0(D_01DFABA0, 8, 0x7D, (char *)v, 0x2D, 0, 0);
        *(unsigned char *)(p + 4) += 1;
        break;
    case 1: {
        unsigned char k = ((ObjAnBC *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (k == 4 || k == 0) {
            func_00440090(p, 0);
        }
        break;
    }
    }
}
}

extern "C" float D_00575990[];

extern "C" void func_0043EEF0(char *, int);

extern "C" {
void func_0043FDD0(char *p) {
    extern void func_003305E0(char *, int, int, char *, int, int, int);
    float v[4];
    *(unsigned int *)(p + 0x7E4) = (unsigned int)((float)*(unsigned int *)(p + 0x7E4) + (20.0f + D_00575990[*(unsigned char *)(p + 0x7C2)]));
    func_0043EEF0(p, 2);
    GETPOS(v, *(char **)(*(char **)(p + 0x1A8) + 0x104));
    func_003305E0(D_01DFABA0, 8, 0x81, (char *)v, 0x2D, 0, 0);
}
}

class ObjBCr {
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
    virtual unsigned char mBC(float);
};

extern "C" {
void func_0043F570(char *p) {
    extern void func_00440090(char *, int);
    unsigned char r;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        break;
    case 1:
        r = ((ObjBCr *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_00440090(p, 0);
        }
        break;
    }
}
}

struct M207 { float m[16]; };

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

extern "C" void func_00105230(char *, char *, char *);

extern "C" unsigned char D_01CAFF3C[];

extern "C" unsigned char D_01CAFF3D[];

class W440 {
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
    virtual void m38(char *, char *);
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
    virtual void m64(char *, int, float, float, float);
    virtual float m68();
};

extern "C" {
void func_00440430(char *p, char *a, W440 *b, float *c) {
    extern void func_003305E0(char *, int, int, char *, int, int, int);
    float m[16] __attribute__((aligned(16)));
    float f;
    char *q;
    if (a == 0) return;
    if (b == 0) return;
    if (*(unsigned char *)(p + 0x7C5) == 0) return;
    switch (*(unsigned char *)(p + 0x7C0)) {
    case 2: case 3:
        return;
    case 0: case 1: case 4: case 5:
        f = *(float *)(a + 4);
        switch (D_01CAFF3C[0]) {
        case 0:
            f = f * 2.0f;
            break;
        case 1:
            break;
        case 2:
            f = f * 0.9f;
            break;
        case 3:
            f = f * 0.7f;
            break;
        case 4:
            f = f * 0.5f;
            break;
        }
        f = f * b->m68();
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105230((char *)m, (char *)m, (char *)c);
        if (*(signed char *)(a + 2) == 0) {
            func_00207480(3, 0x370, (M207 *)m, 0x20);
            func_003305E0(D_01DFABA0, 8, 0x79, (char *)c, 0x2D, 0, 0);
        } else {
            func_00207480(3, 0x371, (M207 *)m, 0x20);
            func_003305E0(D_01DFABA0, 8, 0x78, (char *)c, 0x2D, 0, 0);
        }
        func_0043EEF0(p, 0);
        b->m64(a, 0, f, 1.0f, 1.0f);
        q = p;
        if (q) q += 0x40;
        b->m38(a, q);
        *(float *)(p + 0x7F4) = *(float *)(p + 0x7F4) - f;
        if (*(unsigned char *)(a + 0x30) != 0 && *(float *)(p + 0x7F4) <= 1.0f) *(float *)(p + 0x7F4) = 1.0f;
        if (*(float *)(p + 0x7F4) <= 0.0f || D_01CAFF3D[0] != 0) {
            *(unsigned char *)(p + 0x7C9) = 1;
            *(float *)(p + 0x7F4) = 1.0f;
        } else {
            *(unsigned char *)(p + 0x7C8) = 1;
        }
        break;
    }
}
}

extern "C" void func_002D90A0(float, char *);

extern "C" void func_002EB840(int, float *, float);

extern "C" void func_00440170(char *);

extern "C" float D_00575A84[];

extern "C" float D_00575AE4[];

extern "C" float D_00575860[];

extern "C" float D_005758A0[];

struct V43F {
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
    virtual int mBC(float);
};

extern "C" {
void func_0043F600(char *p) {
    extern void func_003305E0(char *, int, int, float *, int, int, int);
    float v[4] __attribute__((aligned(16)));
    char *q;
    int r;
    int j;
    float f;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        (*(unsigned char *)(p + 4))++;
        if (*(signed char *)(p + 0x7C1) == 0) {
            f = D_00575A84[0];
            func_002D90A0(f, *(char **)(*(char **)D_01CAFF0C + 0xC));
            v[0] = 5710.0f;
            v[1] = 100.0f;
            v[2] = 3354.0f;
            v[3] = 1.0f;
        } else {
            f = D_00575AE4[0];
            func_002D90A0(f, *(char **)(*(char **)D_01CAFF0C + 0xC));
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1B0) + 0x104)) : "memory");
            *(volatile float *)D_00575A6C;
        }
        func_002EB840((int)D_00575860[*(unsigned char *)(p + 0x7C2)], v, 100.0f);
        func_003305E0(D_01DFABA0, 8, 0x7B, v, 0x2D, 0, 0);
        break;
    case 1:
        r = (unsigned char)((V43F *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            j = *(unsigned char *)(*(char **)(p + 0x804) + 0x803);
            r = *(unsigned char *)(p + 0x7C2) * 2;
            *(float *)(p + 0x7F8) = D_005758A0[r + j];
            q = *(char **)(p + 0x804);
            if (*(unsigned char *)(q + 0x80A) == 0) {
                *(unsigned char *)(q + 0x80A) = 1;
            } else {
                *(unsigned char *)(q + 0x80B) = 1;
            }
            (*(unsigned char *)(p + 4))++;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x7C5) != 0) {
            if ((*(float *)(p + 0x7F8) = *(float *)(p + 0x7F8) - *(float *)(p + 0x10)) < 0.0f) func_00440170(p);
        }
        break;
    }
}
}

extern "C" {
int func_0013D5D0(...);
}

class VD0_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_0043E840(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 448))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 316))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 320));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 316)));
    }
    return v1;
}
}

extern "C" {
int func_002F7C10(int, int);
}

extern "C" {
void func_00440230(char *);
}

class V58_4_iiiiv {
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
    virtual void m(int, int, int, int);
};

extern "C" {
void func_0043E8C0(char *p0) {
    void func_0043EAF0(char *);
    void func_0043EB20(char *, int, int);
    void func_00440090(char *, int);
    char *v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int v5;
    char *v6;
    int tmp1;
    int tmp2;
    v0 = p0;
    *(char *)(p0 + 69) = 6;
    func_00440090(p0, 1);
    func_00440230(v0);
    v1 = *(int *)(v0 + 1996);
    if (v1 != -1) {
        ((V58_4_iiiiv *)(v0 + 448))->m(v1, *(int *)(v0 + 2000), 0, 0);
    }
    func_0043EAF0(v0);
    if (*(signed char *)(v0 + 1985) == 0) {
        v5 = 0;
        v4 = *(char **)(*(char **)(v0 + 424) + 260);
        *(char *)(v0 + 2448) = 0;
        *(char *)(v0 + 2449) = 0;
        *(short *)(v0 + 2450) = 0;
        *(int *)(v0 + 2456) = 0;
        *(int *)(v0 + 2460) = 0;
        *(int *)(v0 + 2464) = 0;
        *(int *)(v0 + 2480) = 0;
        *(int *)(v0 + 2484) = 0;
        *(int *)(v0 + 2488) = 0;
        *(int *)(v0 + 2492) = 0x3f800000;
        *(int *)(v0 + 2496) = 0x47c35000;
        *(char *)(v0 + 2500) = 0;
        *(char *)(v0 + 2501) = 0;
        *(short *)(v0 + 2502) = 0;
        while ((v5 < 10)) {
            tmp1 = ((v5 << 1) + (int)v0);
            v5 = (v5 + 1);
            *(short *)((char *)tmp1 + 2504) = -1;
        }
        *(char *)(v0 + 2448) = 0;
        *(char *)(v0 + 2449) = 0;
        *(short *)(v0 + 2450) = 0;
        *(short *)(v0 + 2452) = 0;
        *(char **)(v0 + 2456) = v0;
        *(int *)(v0 + 2460) = 0;
        *(char **)(v0 + 2464) = v4;
        __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(v4), "r"((v0 + 2480)) : "memory");
    } else {
        v5 = 0;
        v6 = *(char **)(*(char **)(v0 + 432) + 260);
        *(char *)(v0 + 2448) = 0;
        *(char *)(v0 + 2449) = 0;
        *(short *)(v0 + 2450) = 0;
        *(int *)(v0 + 2456) = 0;
        *(int *)(v0 + 2460) = 0;
        *(int *)(v0 + 2464) = 0;
        *(int *)(v0 + 2480) = 0;
        *(int *)(v0 + 2484) = 0;
        *(int *)(v0 + 2488) = 0;
        *(int *)(v0 + 2492) = 0x3f800000;
        *(int *)(v0 + 2496) = 0x47c35000;
        *(char *)(v0 + 2500) = 0;
        *(char *)(v0 + 2501) = 0;
        *(short *)(v0 + 2502) = 0;
        while ((v5 < 10)) {
            tmp2 = ((v5 << 1) + (int)v0);
            v5 = (v5 + 1);
            *(short *)((char *)tmp2 + 2504) = -1;
        }
        *(char *)(v0 + 2448) = 0;
        *(char *)(v0 + 2449) = 0;
        *(short *)(v0 + 2450) = 0;
        *(short *)(v0 + 2452) = 0;
        *(char **)(v0 + 2456) = v0;
        *(int *)(v0 + 2460) = 0;
        *(char **)(v0 + 2464) = v6;
        __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(v6), "r"((v0 + 2480)) : "memory");
    }
    func_0043EB20(v0, 1, v5);
    v2 = func_002F7C10(1000, 0);
    v3 = v2;
    if (v3 != 0) {
        v3 = (v3 + -304);
    }
    *(int *)(v0 + 2052) = v3;
    *(char *)(v0 + 68) = -1;
    *(char *)(v0 + 69) = 3;
    *(char *)(v0 + 70) = 61;
    *(char *)(v0 + 71) = 43;
    *(int *)(v0 + 12) = (*(int *)(v0 + 12) | 16);
}
}
