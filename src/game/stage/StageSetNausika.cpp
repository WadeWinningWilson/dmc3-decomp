class ObjBC {
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
};

extern "C" void func_00481E00(char *, int);

extern "C" void func_00482240(char *);

extern "C" void func_004811A0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        *(float *)(p + 0x2A4) = *(float *)(p + 0x2A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2A4) < 0.0f) {
            func_00482240(p);
        }
        ((ObjBC *)(p + 0x740))->mBC(*(float *)(p + 0x10));
    }
}

extern "C" int func_00482180(char *);

extern "C" void func_004822B0(char *);

extern "C" void func_00481310(char *);

extern "C" void func_00481240(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        *(float *)(p + 0x2A4) = *(float *)(p + 0x2A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2A4) < 0.0f) {
            if ((unsigned char)func_00482180(p) == 1) {
                func_004822B0(p);
                return;
            }
            *(float *)(p + 0x2A4) = 50.0f;
        }
        func_00481310(p);
        ((ObjBC *)(p + 0x740))->mBC(*(float *)(p + 0x10));
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

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" void func_004821D0(char *);

extern "C" void func_00481570(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 0);
        func_003305E0(D_01DFABA0, 8, 0x71, p + 0x50, 0x28, 0, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        r = ((ObjBCr *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_004821D0(p);
        }
    }
}

extern "C" void func_00481F20(char *);

extern "C" void func_00481490(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(float *)(p + 0x2A4) = *(float *)(p + 0x2A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2A4) < 0.0f) {
            func_00481F20(p);
            *(unsigned char *)(p + 0x284) = 1;
            func_003305E0(D_01DFABA0, 8, 0x6B, p + 0x50, 0x28, 0, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
    case 1:
        func_00481310(p);
        r = ((ObjBCr *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_004821D0(p);
        }
    }
}

extern "C" int func_0022CBA0(char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0012B1A0(char *, char *);

extern "C" int func_002F6690(char *, char *, char *);

extern "C" int func_002F69A0(char *, char *, char *);

extern "C" void func_002F6D40(char *, char *, char *);

extern "C" int func_00482B80(char *, char *, char *);

extern "C" char D_005BDCC8[8];

struct S2_482 {
    signed char a;
    signed char b;
    signed char c;
    char pad[0x1D];
    int i[3];
};

struct S3_482 {
    int x;
    int y;
    short z;
};

extern "C" int func_00482A10(char *a, char *b, char *s) {
    char tok[32];
    struct {
        signed char c[4];
        char pad[0xC];
        float v[12];
        S2_482 s2;
        S3_482 s3;
    } d;
    d.c[1] = 0;
    d.c[3] = 0;
    d.v[0] = 0.0f;
    d.c[0] = -1;
    d.c[2] = -1;
    d.v[1] = 0.0f;
    d.v[2] = 0.0f;
    d.v[3] = 1.0f;
    d.v[4] = 0.0f;
    d.v[5] = 0.0f;
    d.v[6] = 0.0f;
    d.v[7] = 1.0f;
    d.v[8] = 1.0f;
    d.v[9] = 1.0f;
    d.v[10] = 1.0f;
    d.v[11] = 1.0f;
    d.s2.a = -1;
    d.s2.b = -1;
    d.s2.c = 0;
    d.s2.i[2] = 0;
    d.s2.i[1] = 0;
    d.s2.i[0] = 0;
    d.s3.x = 0;
    d.s3.y = 0xF000;
    d.s3.z = 0x180C;
    while (!(bool)func_0022CBA0(s)) {
        func_0022CBB0(s, tok);
        if (func_0012B1A0(tok, D_005BDCC8) == 0) {
            return func_00482B80(a, b, (char *)&d);
        }
        if (func_002F6690((char *)&d, tok, s) == 0 && func_002F69A0((char *)&d.s2, tok, s) == 0) {
            func_002F6D40((char *)&d.s3, tok, s);
        }
    }
    return 0;
}

struct M207 { float m[16]; };

extern "C" void func_001AD100(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

extern "C" void func_00206730(char *);

extern "C" void func_004810C0(char *);

extern "C" void func_00481D70(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_00480FF0(char *);

class V480 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_00480D80(char *p) {
    func_001AD100(p);
    func_00206730(p + 0x710);
    if (*(unsigned char *)(p + 0x280) != 0) {
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            *(char **)(p + 0x710) = func_00207480(3, 0x352, 0, 0x10);
            {
                char *e = *(char **)(p + 0x710);
                if (e != 0) {
                    *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x27C) + 0x104);
                    e[0x9A] = 0;
                    {
                        char *o2 = *(char **)(p + 0x710);
                        o2[0x3A] = 1;
                    }
                }
            }
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
            break;
        case 1:
            func_004810C0(p);
            break;
        }
        func_00481D70(p);
        func_0028C5C0(p + 0xD40, 0, *(float *)(p + 0x10));
        UNIT(*(char **)(*(char **)(p + 0x240) + 0x100));
        ((V480 *)(p + 0x740))->mC8(p + 0x2C0);
        func_00480FF0(p);
        func_00195E20(D_005BE098, p);
    }
}

extern "C" char D_01CAFF0C[];

extern "C" int D_00582990[];

class V480B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18();
    virtual float m1C();
};

#define VMOVT(d, m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

extern "C" void func_00480BE0(char *p) {
    char *o;
    int i;
    int j;
    float v;
    *(unsigned char *)(p + 0x45) = 6;
    *(float *)(p + 0x29C) = 3000.0f;
    *(float *)(p + 0x2A0) = 3000.0f;
    o = *(char **)(*(char **)D_01CAFF0C + 4);
    if (o != 0 && *(V480B **)(o + 0x10) != 0) {
        v = (*(V480B **)(o + 0x10))->m1C();
    } else {
        v = 0.0f;
    }
    *(float *)(p + 0x298) = v;
    *(unsigned char *)(p + 0x285) = 4;
    i = 0;
    while (i < 4) {
        if (*(float *)(p + 0x298) < (float)D_00582990[i]) {
            *(unsigned char *)(p + 0x285) = i;
            break;
        }
        i++;
    }
    func_004821D0(p);
    func_00481E00(p, 0);
    *(unsigned char *)(p + 0x1010) = 0;
    *(unsigned char *)(p + 0x1011) = 0;
    *(short *)(p + 0x1012) = 0;
    *(int *)(p + 0x1018) = 0;
    *(int *)(p + 0x101C) = 0;
    *(int *)(p + 0x1020) = 0;
    *(int *)(p + 0x1030) = 0;
    *(int *)(p + 0x1034) = 0;
    *(int *)(p + 0x1038) = 0;
    *(float *)(p + 0x103C) = 1.0f;
    *(float *)(p + 0x1040) = 100000.0f;
    *(unsigned char *)(p + 0x1044) = 0;
    *(unsigned char *)(p + 0x1045) = 0;
    *(short *)(p + 0x1046) = 0;
    j = 0;
    while (j < 10) {
        *(short *)((char *)(j * 2) + (int)p + 0x1048) = -1;
        j++;
    }
    *(unsigned char *)(p + 0x1010) = 0;
    *(unsigned char *)(p + 0x1011) = 0;
    *(short *)(p + 0x1012) = 0;
    *(short *)(p + 0x1014) = 0;
    *(char **)(p + 0x1018) = p;
    *(int *)(p + 0x101C) = 0;
    *(char **)(p + 0x1020) = p + 0x2C0;
    VMOVT(p + 0x1030, p + 0x2C0);
    *(unsigned int *)(p + 0xC) |= 0x10;
}

extern "C" void func_002F2D30(char *, char *);

extern "C" void func_001AD140(char *);

extern "C" void func_00104B80(char *, char *, char *);

extern "C" char D_00582974[];

extern "C" void func_002D90A0(float, char *);

extern "C" void func_002EB840(int, float *, float);

class O481 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual int mBC(float);
};

#define QCOPYR481(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

extern "C" void func_00481620(char *p) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    unsigned char r;
    int a;
    int b;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 1);
        func_003305E0(D_01DFABA0, 8, 0x72, p + 0x50, 0x28, 0, 0);
        if (*(char **)(p + 0x710)) {
            (*(char **)(p + 0x710))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x710));
            *(int *)(p + 0x710) = 0;
        }
        {
            float f = *(float *)D_00582974;
            func_002D90A0(f, *(char **)(*(char **)D_01CAFF0C + 0xC));
        }
        if (*(char **)(*(char **)D_01CAFF0C + 0x20)) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        (*(unsigned char *)(p + 5))++;
    case 1:
        r = ((O481 *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            a = *(signed char *)(p + 0x288) + 3;
            b = *(signed char *)(p + 0x289) - 1;
            if (a < b) {
                QCOPYR481(v, p + a * 16 + 0x310);
            } else {
                w[2] = 600.0f;
                w[3] = 1.0f;
                w[0] = 0.0f;
                w[1] = 0.0f;
                func_00104B80((char *)v, p + 0x2C0, (char *)w);
            }
            v[3] = 1.0f;
            func_002EB840(1000, v, 100.0f);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        ((O481 *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        break;
    }
}

extern "C" unsigned char D_01CAFF3C[];

extern "C" unsigned char D_01CAFF3D[];

extern "C" void func_00481CE0(char *, int, float *);

extern "C" void func_00480E90(char *, int);

class W481 {
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
    virtual void m38(char *, char *);
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
    virtual void m64(char *, float, int, float, float);
    virtual float m68();
};

extern "C" void func_004818D0(char *p, char *a, W481 *b, float *c) {
    float f;
    char *q;
    if (a == 0) return;
    if (b == 0) return;
    if (*(signed char *)(p + 0x287) == 4) return;
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
    func_00481CE0(p, *(signed char *)(a + 2), c);
    if (*(signed char *)(a + 2) == 0) {
        func_00480E90(p, 1);
        *(int *)(p + 0x2A8) = 0;
    } else {
        func_00480E90(p, 0);
    }
    b->m64(a, f, 0, 1.0f, 1.0f);
    q = p;
    if (q) q += 0x40;
    b->m38(a, q);
    *(float *)(p + 0x2AC) = *(float *)(p + 0x2AC) + f;
    *(float *)(p + 0x29C) = *(float *)(p + 0x29C) - f;
    if (*(unsigned char *)(a + 0x30) != 0 && *(float *)(p + 0x29C) <= 1.0f) *(float *)(p + 0x29C) = 1.0f;
    if (*(float *)(p + 0x29C) < 0.0f || D_01CAFF3D[0] != 0) {
        *(float *)(p + 0x29C) = -1.0f;
        *(unsigned char *)(p + 0x282) = 1;
    } else if (!(*(float *)(p + 0x2AC) <= 750.0f)) {
        *(unsigned char *)(p + 0x283) = 1;
        *(float *)(p + 0x2AC) = 0.0f;
    }
    if (*(signed char *)(a + 2) == 0) {
        func_003305E0(D_01DFABA0, 8, 0x64, (char *)c, 0x28, 0, 0);
    } else {
        func_003305E0(D_01DFABA0, 8, 0x65, (char *)c, 0x28, 0, 0);
    }
}

class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_004817E0(char *p) {
    ((SubCCc *)(p + 0x740))->mCC(p + 0x2C0);
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
int func_00480B60(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 1856))->m();
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

class VB4_4_iiiii {
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
    virtual int m(int, int, int, int);
};

extern "C" {
int func_004823B0(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 647) != 3) {
        v1 = ((VB4_4_iiiii *)(v0 + 1856))->m(2, 0, 0, 0);
        *(char *)(v0 + 647) = 3;
        *(char *)(v0 + 5) = 0;
    }
    return v1;
}
}

extern "C" {
int func_00482410(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 647) != 4) {
        v1 = ((VB4_4_iiiii *)(v0 + 1856))->m(3, 0, 0, 0);
        *(char *)(v0 + 647) = 4;
        *(char *)(v0 + 5) = 0;
    }
    return v1;
}
}
