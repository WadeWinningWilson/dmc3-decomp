extern "C" char *func_00279290(char *);

extern "C" void func_001A2180(char *, int, int);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

extern "C" void func_00138340(int);

class VCC {
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
    virtual void mCC(char *);
};

extern "C" void func_001A23D0(char *);

class V150 {
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
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual unsigned char m150(unsigned char *, int *, char *);
};

extern "C" void func_003CC890(char *p) {
    int t;
    unsigned char v;
    unsigned char r;
    r = ((V150 *)p)->m150(&v, &t, *(char **)(*(char **)(p + 0x19C) + 0x104) + 0x30);
    if (*(unsigned char *)(p + 0xD30) == 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x240));
            func_00138340(v);
        } else {
            func_001A5B90(func_00279290(p + 0x240));
            func_001A23D0(func_00279290(p + 0x240));
        }
        ((VCC *)(p + 0x240))->mCC(p + 0xCE0);
    } else {
        func_001A2180(func_00279290(p + 0x240), (int)(unsigned int)*(float *)(p + 0xD2C), 1);
        ((VCC *)(p + 0x240))->mCC(p + 0xCE0);
    }
}

class W3CB {
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
    virtual int m2C(char *, char *);
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
    virtual void mB0(char *, char *);
};

extern "C" int D_005BC8D8;

extern "C" void func_001AD140(char *);

extern "C" char *func_002792A0(char *);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00131760(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_0028C200(char *, char *, char *, int, int, char *, int);

extern "C" void func_0024D9F0(char *, char *, int, int, char *, char *, char *, char *, char *);

extern "C" void func_0024DA80(char *, int, int);

static inline char *ent3CB(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *gch3CB(char *h, int i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent3CB(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

static inline void mot3CB(char *p, char *a) { func_0024D9F0(p + 0xAE0, a, 0, 1, p + 0x200, p + 0x244, p + 0x194, p + 0x10, p + 0x8C0); func_0024DA80(p + 0xAE0, 1, 6); }

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define H (*(char **)(p + 0x1F0))

#define V4(o, x, y, z, w) *(float *)(p + (o)) = x; *(float *)(p + (o) + 4) = y; *(float *)(p + (o) + 8) = z; *(float *)(p + (o) + 0xC) = w;

extern "C" int func_003CBE00(char *p) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    char *r0;
    char *r1;
    char *r2;
    char *m;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(signed char *)(p + 0x46) = *(signed char *)(p + 0x1B0);
    r0 = gch3CB(H, 0x21);
    r1 = gch3CB(H, 0x20);
    r2 = gch3CB(H, 0x25);
    *(char **)(p + 0x1F8) = r0;
    *(char **)(p + 0x1FC) = r1;
    *(char **)(p + 0x200) = r2;
    *(char **)(p + 0x204) = r2;
    if (((W3CB *)(p + 0x240))->m2C(*(char **)(p + 0x1F8), *(char **)(p + 0x1FC)) == 0) {
        func_001AD140(p);
        return 0;
    }
    ((W3CB *)(p + 0x240))->mB0(*(char **)(p + 0x204), p + 0x194);
    m = func_002792A0(p + 0x240);
    *(unsigned char *)(m + 0x104) = 1;
    V4(0x50, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x60, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x70, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x80, 0.0f, 0.0f, 0.0f, 1.0f)
    *(short *)(p + 0x90) = 0;
    a[0] = -60.9145012f;
    a[1] = 170.018295f;
    a[2] = -72.6899033f;
    a[3] = 1.0f;
    b[0] = 2.96093893f;
    b[1] = -0.251386762f;
    b[2] = 0.462297529f;
    b[3] = 1.0f;
    *(unsigned char *)(p + 0x840) = 0;
    V4(0x850, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x860, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x870, 1.0f, 1.0f, 1.0f, 1.0f)
    UNIT(p + 0x880);
    func_00131700(p + 0x880, p + 0x880, p + 0x860);
    func_00105230(p + 0x880, p + 0x880, p + 0x850);
    func_001318E0(p + 0x880, p + 0x880, p + 0x870);
    VCOPY(p + 0x850, a);
    VCOPY(p + 0x860, b);
    UNIT(p + 0x880);
    func_00131760(p + 0x880, p + 0x880, p + 0x860);
    func_00105230(p + 0x880, p + 0x880, p + 0x850);
    func_001318E0(p + 0x880, p + 0x880, p + 0x870);
    func_0028C200(p + 0x8C0, gch3CB(H, 0x27), gch3CB(H, 0x28), 3, D_005BC8D8, p, 0);
    *(float *)(p + 0x9A4) = 1.2f;
    mot3CB(p, gch3CB(H, 0x26));
    *(unsigned char *)(p + 0xCD0) = 0;
    *(int *)(p + 0xD20) = 0;
    return 1;
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
int func_003CC810(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 576))->m();
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
