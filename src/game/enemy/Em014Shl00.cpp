extern "C" void func_001AD140(char *);

class Obj134 {
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
    virtual char *m134(int);
};

extern "C" void func_0041D840(char *, char *, float);

extern "C" char *func_002D9F00(char *, int);

extern "C" char D_01CAFF0C[];

extern "C" char *func_00207480(int, int, int, int);

static inline void vset(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

extern "C" void func_0042F020(char *p) {
    char *o = (*(Obj134 **)(p + 0xD0))->m134(2);
    char *b;
    char *m;
    p[0x44] = -1;
    p[0x45] = 4;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(o + 0x104) + 0x30) : "memory");
    vset((float *)(p + 0x80), 0.0f, 0.0f, 0.0f, 1.0f);
    *(short *)(p + 0x90) = 0;
    vset((float *)(p + 0x60), 0.0f, 0.0f, 10.0f, 1.0f);
    b = p;
    if (b) {
        b += 0x40;
    }
    func_0041D840(b, p + 0x150, 1.0f);
    m = func_002D9F00(*(char **)(*(char **)D_01CAFF0C + 0xC), 1);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x450), "r"(m + 0x30) : "memory");
    *(char **)(p + 0x460) = func_00207480(3, 0x101, (int)(p + 0x190), 16);
    if (*(char **)(p + 0x460) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x464) = 100.0f;
    *(int *)(p + 0x468) = 0;
    p[4] = 1;
}

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_001AD100(char *);

extern "C" void func_00206730(char *);

extern "C" unsigned char D_0056BA62[];

extern "C" int func_0041D600(char *);

extern "C" void func_0041D9E0(char *, float *, float *);

extern "C" char *func_00448600(int, char *, float *);

class X42F {
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
    virtual void u38();
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
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void m130();
};

static inline float frand42F(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" void func_0042F160(char *p) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    unsigned char i;
    char *o;
    char *q;
    float t;
    if ((unsigned char)func_0041D600(p) == 0) return;
    func_001AD100(p);
    func_00206730(p + 0x460);
    if ((t = (*(float *)(p + 0x464) -= *(float *)(p + 0x10))) < 0.0f) {
        func_001AD140(p);
        return;
    }
    if (!(t <= 27.0f) && t < 32.0f && (*(float *)(p + 0x468) -= *(float *)(p + 0x10)) <= 0.0f) {
        for (i = 0; i < D_0056BA62[*(unsigned char *)(p + 0x46C) * 16]; i++) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x450) : "memory");
            v[0] = v[0] + (200.0f * frand42F() - 100.0f);
            v[1] = v[1] + (200.0f * frand42F() - 100.0f);
            v[2] = v[2] + (200.0f * frand42F() - 100.0f);
            func_0041D9E0(p + 0x50, v, w);
            o = func_00448600(*(int *)(p + 0xD0), p + 0x50, w);
            if (o != 0) {
                ((X42F *)o)->m130();
            }
        }
        *(float *)(p + 0x468) = 1.0f;
    }
    q = p;
    if (q) q += 0x40;
    func_0041D840(q, p + 0x150, 1.0f);
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_00252FA0(char *);

extern "C" void func_0028C110(char *);

extern "C" char D_005B3DF0[], D_005B3E14[], D_005B3E94[], D_005B3F30[], D_005B3F54[], D_005B3FD4[];

extern "C" char *func_0042EED0(int p0, unsigned char p1) {
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
    **q = func_001B0FD0(a, 0x470, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B3DF0;
            *(char **)(t + 0x40) = D_005B3E14;
            *(char **)(t + 0xA0) = D_005B3E94;
            *(unsigned char *)(t + 0x150) = 0;
            func_0028C110(t + 0x1D0);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 9, **q);
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
        *(int *)(ret + 0xD0) = p0;
        *(unsigned char *)(ret + 0x46C) = p1;
    }
    return ret;
}
