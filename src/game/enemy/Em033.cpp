extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_0028C790(char *, int);

extern "C" char D_00586E20[];

extern "C" void func_003DD5B0(char *p) {
    char *o;
    char *m;
    func_0028C790(p + 0xBD0, 0);
    func_0028C790(p + 0xBD0, 1);
    func_0028C200(p + 0xBD0, p + 0xDF0, p + 0xE00, 2, D_00586E20, p, 0);
    func_0028C8E0(p + 0xBD0, 0);
    func_0028C910(p + 0xBD0);
    m = p + 0x9A0;
    *(unsigned char *)(p + 0xDF0) = 6;
    *(unsigned char *)(p + 0xDF1) = 0;
    *(short *)(p + 0xDF2) = 0;
    *(unsigned char *)(p + 0xE00) = 2;
    *(float *)(p + 0xE10) = 0.0f;
    *(float *)(p + 0xE14) = 0.0f;
    *(float *)(p + 0xE18) = 0.0f;
    *(float *)(p + 0xE1C) = 1.0f;
    *(float *)(p + 0xE20) = 40.0f;
    func_0028C3A0(p + 0xBD0, 0, -1, m);
    o = *(char **)(p + 0xC4C);
    if (o != 0) *(unsigned int *)(o + 0xC) &= 0xFFFCFFFF;
    *(unsigned char *)(p + 0xDF4) = 1;
    *(unsigned char *)(p + 0xDF5) = 0;
    *(short *)(p + 0xDF6) = 1;
    *(unsigned char *)(p + 0xE50) = 2;
    *(float *)(p + 0xE60) = 0.0f;
    *(float *)(p + 0xE64) = 0.0f;
    *(float *)(p + 0xE68) = 0.0f;
    *(float *)(p + 0xE6C) = 1.0f;
    *(float *)(p + 0xE70) = 60.0f;
    func_0028C3A0(p + 0xBD0, 1, -1, m);
    o = *(char **)(p + 0xC50);
    if (o != 0) *(unsigned int *)(o + 0xC) &= 0xFFFCFFFF;
}

extern "C" {
extern "C" {
int func_001AD140(char *p);
}
}

extern "C" char D_01CAFF0C[];

extern "C" void func_00105300(char *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" int func_001F9A70(int, char *, float);

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

class O3DD {
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
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8();
    virtual void m1DC();
};

#define VADDI(d, y) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(y) : "memory")

extern "C" void func_003DD980(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    if (*(unsigned char *)(p + 0xF06) == 1) {
        QCOPYR(v, p + 0xDA0);
        v[3] = 1.0f;
        VADDI(p + 0x50, v);
        if (*(float *)(p + 0x54) < 110.0f) {
            *(float *)(p + 0x54) = 110.0f;
        }
        for (i = 0; i < 7; i++) {
            if (*(char **)((char *)(i * 4) + (int)p + 0x2E8) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x2E8) + 0x104) != 0) {
                VADDI(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x2E8) + 0x104) + 0x30, v);
                *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x2E8) + 0x104) + 0x3C) = 1.0f;
            }
        }
        QCOPY(p + 0xE0, v);
        QCOPYR(p + 0xF0, p + 0xDE0);
        func_00105300(p + 0xAB0, *(char **)(*(char **)(p + 0x2EC) + 0x104));
    }
    if ((unsigned char)func_001F9A70(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x550), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 2;
        ((O3DD *)p)->m1DC();
        func_001AD140(p);
    }
}

class V130_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_003D9830(char *p0) {
    int func_003D9FB0(char *, int);
    int func_003DD390(char *, int);
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    tmp0 = 2;
    if (tmp0 != v0) {
        switch (v0) {
        case 0:
            v1 = ((V130_1_ii *)p0)->m(v0);
            break;
        case 1:
            v1 = func_003D9FB0(p0, v0);
            break;
        }
    } else {
        v1 = func_003DD390(p0, v0);
    }
    return v1;
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
extern "C" void func_003DD430(char *p) {
    ((SubCCc *)(p + 0x340))->mCC(p + 0x9A0);
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
};

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
int func_003DD3A0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((V14_0_v *)(v0 + 2368))->m();
    v1 = ((VD0_0_i *)(v0 + 832))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 528))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 532));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 528)));
    }
    return v1;
}
}

class V10_1_pi {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(char *);
};

extern "C" {
int func_003DD780(char *p0, int p1, int p2, int p3) {
    char *v0;
    int v1;
    if (p2 != 0) {
        if (p3 != 0) {
            v0 = *(char **)(p0 + 316);
            if (v0 != 0) {
                if (*(unsigned char *)(p0 + 333) != 3) {
                    v1 = ((V10_1_pi *)v0)->m(v0);
                }
            }
        }
    }
    return v1;
}
}
