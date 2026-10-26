extern "C" char *func_0027A710(char *);

extern "C" void func_001A20C0(char *, int);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

extern "C" float D_005BCFEC;

extern "C" int func_0034B340(float, float, unsigned char *, unsigned char *, char *, int, int);

extern "C" void func_00138340(int);

class ObjDrCC {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void mCC(char *);
};

extern "C" void func_00400010(char *p) {
    unsigned char k;
    unsigned char b[7];
    if (*(unsigned char *)(p + 0x12D3) == 1) {
        if ((unsigned char)func_0034B340(D_005BCFEC, 150.0f, &k, b, p + 0x50, 0x7F, 0x10) == 1) {
            func_001A5CC0(func_0027A710(p + 0x280));
            func_00138340(k);
        } else {
            func_001A5B90(func_0027A710(p + 0x280));
        }
        ((ObjDrCC *)(p + 0x280))->mCC(p + 0x1F0);
    } else {
        ((ObjDrCC *)(p + 0x6C0))->mCC(p + 0x1F0);
    }
    if (*(unsigned char *)(p + 5) != 0) {
        func_001A20C0(func_0027A710(p + 0xB00), 7);
        ((ObjDrCC *)(p + 0xB00))->mCC(p + 0x1F0);
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

class Mdl3FF {
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
    virtual void d49();
    virtual void d50();
    virtual void mD4(int);
    virtual void mD8(int, int, int);
};

extern "C" int D_005BCFE4;

extern "C" int D_005BE1F4;

extern "C" char D_01DFABA0[];

extern "C" void func_001A2260(char *, unsigned int, int);

extern "C" void func_0028C740(char *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" void func_002EC050(float, int, char *);

static inline void setA3FF(char *o, unsigned int i, int a) {
    if (i < *(unsigned short *)(o + 0xA8)) *(int *)(*(char **)(o + 0xBC) + i * 0x380 + 0x15C) = a;
}

#define M ((Mdl3FF *)(p + 0x6C0))

#define C ((Col355 *)(p + 0x4EC0))
extern "C" void func_003FF760(char *p) {
    unsigned char a;
    char *o;
    int i;
    int j;
    float s;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        M->mD8(*(int *)(p + 0x278), 0, 0);
        func_0028C740(p + 0xF40);
        M->mD4(1);
        *(float *)(p + 0x1300) = (float)D_005BE1F4;
        *(float *)(p + 0x80) = 0.0f;
        *(float *)(p + 0x84) = 0.0f;
        *(float *)(p + 0x88) = 0.0f;
        *(float *)(p + 0x8C) = 1.0f;
        func_00330BD0(D_01DFABA0, 0x17, p + 0x50, 0x1E, 0);
        if (*(unsigned char *)(p + 0x12D4) == 1 && *(unsigned char *)(p + 0x12D2) == 1) {
            func_002EC050(0.0f, 10, p + 0x50);
        } else {
            func_002EC050(0.0f, 2, p + 0x50);
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x12D3) = 0;
        if ((*(float *)(p + 0x1300) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x1300) = (float)D_005BCFE4;
            *(float *)(p + 0x1308) = 128.0f;
            func_001A2260(func_0027A710(p + 0x6C0), (unsigned int)*(float *)(p + 0x1308), 1);
            func_001A2260(func_0027A710(p + 0xB00), (unsigned int)*(float *)(p + 0x1308), 1);
        }
        M->mBC(*(float *)(p + 0x10));
        M->mC8(p + 0x1F0);
        break;
    case 2:
        if (!(*(float *)(p + 0x1300) <= 0.0f)) {
            s = 128.0f / (float)D_005BCFE4;
            *(float *)(p + 0x1300) -= *(float *)(p + 0x10);
            if (!(*(float *)(p + 0x1308) < s)) {
                *(float *)(p + 0x1308) -= s;
            } else {
                *(float *)(p + 0x1308) = 0.0f;
            }
        } else {
            *(float *)(p + 0x1308) = 0.0f;
            *(unsigned char *)(p + 4) = 2;
        }
        a = (unsigned int)*(float *)(p + 0x1308);
        o = func_0027A710(p + 0x6C0);
        for (i = 0; i < *(unsigned short *)(o + 0xA8); i++) setA3FF(o, i, a);
        a = (unsigned int)*(float *)(p + 0x1308);
        o = func_0027A710(p + 0xB00);
        for (j = 0; j < *(unsigned short *)(o + 0xA8); j++) setA3FF(o, j, a);
        M->mBC(*(float *)(p + 0x10));
        M->mC8(p + 0x1F0);
        break;
    }
}
#undef C

class W3FE {
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
    virtual int m2C(int, int);
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
    virtual void mB0(int, char *);
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void mD4(int);
};

struct C3FE { unsigned char c[4]; };

extern "C" char D_01CAFF0C[];

extern "C" float D_005BCD30;

extern "C" float D_005BCFD4;

extern "C" float D_005BCFD8;

extern "C" float D_005BCFDC;

extern "C" float D_005BCFE0;

extern "C" char D_00564950[];

extern "C" float func_0011DBE0(float, float);

extern "C" void func_001AD140(char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" void func_0028C3A0(char *, int, int, char *);

extern "C" void func_002E2800(char *, int, int);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define G (*(char **)D_01CAFF0C)

#define W(o) ((W3FE *)(p + (o)))

static inline char *ent3FE(char *l, int i) { char *r; if (!(i < *(int *)(l + 0x30))) r = 0; else r = *(char **)l + i * 0x80; return r; }

static inline void set3FE(char *e, float x, float y, float z, float w) { *(float *)(e + 0x20) = x; *(float *)(e + 0x24) = y; *(float *)(e + 0x28) = z; *(float *)(e + 0x2C) = w; VCOPY(e, e + 0x20); VCOPY(e + 0x10, e + 0x20); }

extern "C" void func_003FE9D0(char *p) {
    float d[4] __attribute__((aligned(16)));
    C3FE c;
    int i;
    char *e;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 6) = 0;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(int *)(p + 0x130C) = *(int *)(*(char **)(p + 0x1314) + 0x38F8);
    if (*(unsigned int *)(p + 0x130C) >= 4) *(int *)(p + 0x130C) = 3;
    *(int *)(p + 0xC) |= 0x10;
    *(float *)(p + 0x1304) = *(float *)(p + 0x54);
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(short *)(p + 0x1310) = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(*(char **)(p + 0x1314) + 0x50), "r"(*(char **)(G + 0xC) + 0x50), "r"(d) : "memory");
    *(short *)(p + 0x90) = 0.5f + 65536.0f * func_0011DBE0(d[0], d[2]) / 6.283185f;
    *(float *)(p + 0x12D8) = D_005BCD30;
    if ((unsigned char)W(0x280)->m2C(*(int *)(p + 0x270), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)W(0x6C0)->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    W(0x6C0)->mB0(*(int *)(p + 0x278), p + 0x12DC);
    if ((unsigned char)W(0xB00)->m2C(*(int *)(p + 0x274), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    W(0xB00)->mD4(1);
    *(unsigned char *)(p + 0x1160) = 6;
    *(unsigned char *)(p + 0x1161) = 0;
    *(short *)(p + 0x1162) = 0;
    *(unsigned char *)(p + 0x1164) = 5;
    *(unsigned char *)(p + 0x1165) = 0;
    *(short *)(p + 0x1166) = 1;
    *(unsigned char *)(p + 0x1170) = 3;
    *(float *)(p + 0x1180) = 0.0f;
    *(float *)(p + 0x1184) = 250.0f;
    *(float *)(p + 0x1188) = 0.0f;
    *(float *)(p + 0x1198) = 80.0f;
    *(float *)(p + 0x119C) = 300.0f;
    *(float *)(p + 0x11A0) = 80.0f;
    *(float *)(p + 0x118C) = 0.0f;
    *(float *)(p + 0x1190) = 0.0f;
    *(float *)(p + 0x1194) = 0.0f;
    *(unsigned char *)(p + 0x11C0) = 2;
    *(float *)(p + 0x11D0) = 0.0f;
    *(float *)(p + 0x11D4) = 60.0f;
    *(float *)(p + 0x11D8) = 0.0f;
    *(float *)(p + 0x11DC) = 1.0f;
    *(float *)(p + 0x11E0) = 150.0f;
    func_0028C200(p + 0xF40, p + 0x1160, p + 0x1170, 4, D_00564950, p, 0);
    func_0028C8E0(p + 0xF40, 0xB);
    func_0028C910(p + 0xF40);
    *(unsigned char *)(p + 0xF43) = 0xB;
    *(int *)(p + 0x1018) = 0x1D44F;
    func_0028C3A0(p + 0xF40, 0, -1, p + 0x1F0);
    func_0028C3A0(p + 0xF40, 1, -1, p + 0x1F0);
    c.c[3] = 0;
    c.c[0] = 3;
    c.c[2] = 8;
    if ((e = *(char **)(p + 0xFBC)) != 0) {
        e[0xC4] = c.c[0];
        e[0xC5] = c.c[1];
        e[0xC6] = c.c[2];
        e[0xC7] = c.c[3];
    }
    if ((e = *(char **)(p + 0xFC0)) != 0) {
        e[0xC4] = c.c[0];
        e[0xC5] = c.c[1];
        e[0xC6] = c.c[2];
        e[0xC7] = c.c[3];
    }
    *(unsigned char *)(p + 0x12D1) = 0;
    *(unsigned char *)(p + 0x12D2) = 0;
    *(unsigned char *)(p + 0x12D4) = 0;
    *(unsigned char *)(p + 0x12D3) = 1;
    *(unsigned char *)(p + 0x12D5) = 0;
    func_002E2800(p + 0x1260, 8, 0x96);
    *(unsigned char *)(ent3FE(p + 0x1260, 0) + 0x78) = 1;
    *(unsigned char *)(ent3FE(p + 0x1260, 7) + 0x78) = 1;
    for (i = 1; i < 8; i++) *(int *)(ent3FE(p + 0x1260, i) + 0x7C) = i - 1;
    for (i = 0; i < 8; i++) {
        set3FE(ent3FE(p + 0x1260, i), *(float *)(p + 0x50), 790.0f + *(float *)(p + 0x54), *(float *)(p + 0x58), 1.0f);
    }
    *(unsigned char *)(p + 0x12D0) = 1;
    *(float *)(p + 0x1268) = D_005BCFD4;
    *(float *)(p + 0x126C) = D_005BCFD8;
    *(float *)(p + 0x1274) = D_005BCFDC;
    *(float *)(p + 0x1270) = D_005BCFE0;
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_003FEE90(char *);
}

extern "C" {
int func_003FFF60(char *);
}

class V130_0_i {
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
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual int m(void);
};

extern "C" {
int func_003FE950(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    tmp0 = 2;
    if (v2 != tmp0) {
        if (v2 != 1) {
            if (v2 != 0) {
                return v1;
            } else {
                tmp1 = ((V130_0_i *)v0)->m();
                return tmp1;
            }
        } else {
            tmp2 = func_003FEE90(v0);
            return tmp2;
        }
    } else {
        v3 = func_003FFF60(v0);
        return v3;
    }
}
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_002E2BD0(...);
}

class VD0_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_003FFF70(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 640))->m();
    ((VD0_0_v *)(v0 + 1728))->m();
    ((VD0_0_v *)(v0 + 2816))->m();
    v1 = func_002E2BD0((v0 + 4704));
    v2 = 0;
    if ((0 < *(int *)(v0 + 336))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 340));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 336)));
    }
    return v1;
}
}
