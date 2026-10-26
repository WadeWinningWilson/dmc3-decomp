extern "C" char D_01CAFF0C[];

extern "C" int func_002242C0(char *);

extern "C" void func_0021C7A0(char *, int);

class Ledge {
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
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual int m104(int);
    virtual void m108(int);
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void m12C(float *);
};

struct V4f {
    float x;
    float y;
    float z;
    float w;
};

extern "C" {
int func_0023EC60(char *p) {
    extern char *func_002F2EF0(char *, char *, float);
    extern float func_001324B0(float *, char *);
    Ledge *o;
    V4f t;
    if ((unsigned char)func_002242C0(p) == 1 || *(signed char *)(p + 0x46) != 0) {
        return 0;
    }
    if (*(float *)(p + 0x64) < 0.0f && *(float *)(p + 0x54) - *(float *)(p + 0x2924) < 100.0f) {
        o = (Ledge *)func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 150.0f);
        if (o != 0) {
            o->m12C(&t.x);
            if (func_001324B0(&t.x, p + 0x50) < 100.0f) {
                float y = t.y;
                if (!(*(float *)(p + 0x54) <= y) && *(float *)(p + 0x54) - y < 100.0f && (unsigned char)o->m104(2) == 1) {
                    *(Ledge **)(p + 0x29D0) = o;
                    func_0021C7A0(p, 0x1F);
                    (*(Ledge **)(p + 0x29D0))->m108(2);
                    return 1;
                }
            }
        }
    }
    return 0;
}
}

extern "C" float func_00132470(char *, char *);

extern "C" void func_001FF760(char *, int);

extern "C" void func_002019D0(char *, char *, char *);

extern "C" float D_005BBEC0;

extern "C" void func_00248660(char *);

#define QCOPYB(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_00248580(char *p) {
    float c[4];
    float b[4];
    float a[4];
    QCOPYB(c, p + 0x1A0);
    b[0] = 50.0f;
    QCOPYB(a, p + 0x1A0);
    func_001FF760(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, 1);
    func_002019D0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, (char *)a, p + 0x1B0);
    func_001FF760(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, 0);
    QCOPYB(p + 0x1A0, a);
    *(float *)(p + 0x1AC) = 1.0f;
    if (func_00132470((char *)c, p + 0x1A0) > D_005BBEC0) {
        func_00248660(p);
    }
    *(float *)(p + 0x1AC) = 1.0f;
}

extern "C" char D_00666750[];

extern "C" char *func_001AED80(char *, int, unsigned short, int);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" char *D_00554060[];

extern "C" void func_00249010(char *p) {
    int k = *(signed char *)(p + 0x46);
    char *a = func_001AED80(D_00666750, 0, k, 6);
    char *b = func_001AED80(D_00666750, 0, k, 7);
    func_0028C200(p + 0x47A0, a, b, 0, *(char **)D_00554060[k], p, 0);
    if (*(unsigned char *)(p + 0x28AA) != 3 && *(unsigned char *)(p + 0x3C6C) == 5 && (unsigned char)func_002242C0(p) == 1) {
        *(unsigned char *)(p + 0x47A1) = 5;
    }
}

extern "C" float func_00131B50(float);

extern "C" int func_002DAAB0(char *, float *, int, int);

class A40 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62(); virtual unsigned char g(int); virtual void e64();virtual void e65();virtual void e66();virtual void e67();virtual void e68();virtual void e69();virtual void e70();virtual void e71();virtual void e72(); virtual void f(float *);
    char x4[0x3C];
};

class B44 {
public:
    int y;
};

class D44 : public A40, public B44 {
};

extern "C" {
int func_002448D0(char *p) {
    extern float func_001324B0(char *, char *);
    extern char *func_002F2EF0(char *, char *, float);
    float v[4] __attribute__((aligned(16)));
    D44 *o;
    if (*(unsigned char *)(p + 0x3C6C) != 1) return 0;
    o = (D44 *)func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 150.0f);
    if (o == 0) goto fail;
    if (*(unsigned char *)(p + 0x3B9D) != 0) {
        if (*(unsigned char *)(p + 0x3B9D) != 1) goto fail;
        if (*(B44 **)(p + 0x3C64) != (B44 *)o) goto fail;
    }
    o->f(v);
    if (func_001324B0(p + 0x50, (char *)v) < 110.0f && func_00131B50(*(float *)(p + 0x54) - v[1]) < 30.0f &&
        (unsigned char)func_002DAAB0(p, v, 0x2000, 0) == 1 && o->g(0) == 1) {
        *(D44 **)(p + 0x29D0) = o;
        (*(D44 **)(p + 0x29D0))->f((float *)(p + 0x29B0));
        *(unsigned char *)(p + 0x299B) = 1;
        *(unsigned char *)(p + 0x299B) = 0;
        return 1;
    }
fail:
    return 0;
}
}

extern "C" char D_00666710[];

extern "C" unsigned short D_0066671A[];

extern "C" unsigned short func_001AE770(char *, int);

extern "C" unsigned char func_0023EB30(char *);

class VFCa {
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
    virtual void mFC(unsigned int);
    virtual unsigned char m100(unsigned int, float *, float *);
};

extern "C" {
int func_0023E960(char *p) {
    extern VFCa *func_002F2EF0(char *, char *, float);
    VFCa *o;
    unsigned int i;
    float f;
    float v[4] __attribute__((aligned(16)));
    i = 0;
    if (*(unsigned int *)(p + 0x2898) & 2) {
        if ((*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 0x40)]) ||
            (*(unsigned char *)(p + 0x2848) == 0x11 && *(unsigned char *)(p + 0x2905) == 1)) {
            if (!(*(float *)(p + 0x2914) <= 0.0f)) return 0;
            o = func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 500.0f);
            if (o) {
                for (; o->m100(i, v, &f) == 1; i++) {
                    if (func_00132470((char *)v, p + 0x50) < f) {
                        o->mFC(i);
                        *(float *)(p + 0x2914) = *(float *)(*(char **)(p + 0x283C) + 0x2DC);
                        func_0021C7A0(p, 0x1E);
                        return 1;
                    }
                }
            }
            if (func_0023EB30(p) == 1) {
                func_0021C7A0(p, 0x1E);
                return 1;
            }
        }
    }
    return 0;
}
}

extern "C" {
extern char D_005A77E8[];
}

extern "C" {
void func_00414E20(char *);
}

class VC_2_iiv {
public:
    virtual void d0();
    virtual void m(int, int);
};

extern "C" {
int func_0023BC10(char *p0) {
    char *v0;
    char *v1;
    int v2;
    int tmp0;
    v1 = p0;
    *(char **)(p0 + 48) = D_005A77E8;
    func_00414E20((v1 + 2112));
    *(int *)(v1 + 4) = 0;
    *(int *)(v1 + 8) = 0;
    v2 = 0;
    *(int *)(v1 + 0) = 0;
    v0 = v1;
    *(int *)(v1 + 2100) = 0;
    *(char **)(v1 + 2104) = (v1 + 52);
    do {
        *(int *)(v0 + 56) = ((((v2 + 1) << 3) + (int)v1) + 52);
        *(int *)(v0 + 64) = ((((v2 + 2) << 3) + (int)v1) + 52);
        *(int *)(v0 + 72) = ((((v2 + 3) << 3) + (int)v1) + 52);
        *(int *)(v0 + 80) = ((((v2 + 4) << 3) + (int)v1) + 52);
        *(int *)(v0 + 88) = ((((v2 + 5) << 3) + (int)v1) + 52);
        *(int *)(v0 + 96) = ((((v2 + 6) << 3) + (int)v1) + 52);
        *(int *)(v0 + 104) = ((((v2 + 7) << 3) + (int)v1) + 52);
        tmp0 = ((((v2 + 8) << 3) + (int)v1) + 52);
        v2 = (v2 + 8);
        *(int *)(v0 + 112) = tmp0;
        v0 = (v0 + 64);
    } while ((v2 < 247));
    *(int *)((char *)((v2 << 3) + (int)v1) + 56) = ((((v2 + 1) << 3) + (int)v1) + 52);
    *(int *)((char *)((v2 << 3) + (int)v1) + 64) = ((((v2 + 2) << 3) + (int)v1) + 52);
    *(int *)((char *)((v2 << 3) + (int)v1) + 72) = ((((v2 + 3) << 3) + (int)v1) + 52);
    *(int *)((char *)((v2 << 3) + (int)v1) + 80) = ((((v2 + 4) << 3) + (int)v1) + 52);
    *(int *)((char *)((v2 << 3) + (int)v1) + 88) = ((((v2 + 5) << 3) + (int)v1) + 52);
    *(int *)((char *)((v2 << 3) + (int)v1) + 96) = ((((v2 + 6) << 3) + (int)v1) + 52);
    *(int *)((char *)((v2 << 3) + (int)v1) + 104) = ((((v2 + 7) << 3) + (int)v1) + 52);
    *(int *)(v1 + 2096) = 0;
    *(int *)(v1 + 36) = 0;
    *(int *)(v1 + 28) = 0;
    *(int *)(v1 + 32) = 0;
    *(char *)(v1 + 26) = 0;
    *(char *)(v1 + 25) = 0;
    *(char *)(v1 + 24) = 1;
    *(int *)(v1 + 2200) = 0;
    *(int *)(v1 + 2204) = 0x42c80000;
    ((VC_2_iiv *)(v1 + 2112))->m(10, 1);
    *(int *)(v1 + 2208) = 0;
    return (int)v1;
}
}
