struct M64 { int w[16]; };

class SubCCa {
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
    virtual void mCC(M64 *);
};

class SubCCb {
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
    virtual int mCC(M64 *);
};

extern "C" int func_003C3940(char *p) {
    M64 m = *(M64 *)(p + 4864);
    ((SubCCa *)(p + 1664))->mCC(&m);
    return ((SubCCb *)(p + 3200))->mCC(&m);
}

extern "C" int func_003C7B30(char *p) {
    int r;
    if (*(unsigned char *)(p + 0x1CEB) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CEC) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CED) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CEE) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CF5) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CF4) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CEF) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CF0) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CF1) != 0) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x1CF2) != 0) {
        r = 1;
    } else {
        r = *(unsigned char *)(p + 0x1CF3);
    }
    return r;
}

extern "C" char D_01CAFF0C[];

extern "C" void func_002EF940(char *, char *);

extern "C" float D_0056EDB0[];

extern "C" void func_0028C290(char *, int, int, char *);

extern "C" void func_003C7200(char *);

extern "C" void func_0034B330(int);

extern "C" int func_0021D320(char *, int, int, unsigned char, unsigned char);

extern "C" void func_003C3CA0(char *, int);

extern "C" void func_0021CCF0(char *, int, int, float);

extern "C" void func_003C6060(char *);

extern "C" void func_003C6F70(char *p) {
    unsigned char n;
    unsigned char fl;
    unsigned char hit;
    char *o;
    char *e;
    int f;
    int i;
    n = 0x1E;
    fl = 0;
    o = *(char **)((*(char **)D_01CAFF0C) + 0xC);
    hit = 0;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0028C290(p + 0x1950, 0xF, -1, p + 0x64C);
        *(float *)(p + 0x15F4) = 60.0f;
        (*(unsigned char *)(p + 6))++;
    case 1:
        func_003C7200(p);
        if ((*(float *)(p + 0x15F4) -= *(float *)(p + 0x10)) < 0.0f) {
            func_0034B330(2);
            (*(unsigned char *)(p + 6))++;
        }
        if (!(unsigned char)func_0021D320(o, 3, *(unsigned char *)(p + 0x1CF7), fl, n)) hit = 1;
        if (hit == 1) {
            *(int *)(o + 0x80) = 0;
            func_003C3CA0(p, 0x14);
            func_0034B330(0);
        }
        break;
    case 2:
        func_003C7200(p);
        func_0021CCF0(o, *(unsigned char *)(p + 0x15D0), *(unsigned char *)(p + 0x15D1), *(float *)(p + 0x10) * D_0056EDB0[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]);
        f = 0;
        for (i = 0; i < 16; i++) {
            e = *(char **)(p + i * 4 + 0x19CC);
            if (e != 0) f = *(int *)(e + 8);
            if (f & 1) {
                hit = 1;
                n = 0x1F;
                fl = hit;
                break;
            }
        }
        if (hit == 0 && !(unsigned char)func_0021D320(o, 3, *(unsigned char *)(p + 0x1CF7), fl, n)) hit = 1;
        if (hit == 1) {
            *(int *)(o + 0x80) = 0;
            func_003C3CA0(p, 0x14);
            func_0034B330(0);
        }
        if (*(unsigned char *)(p + 0x15D1) != 2) {
            if (*(short *)(p + 0x15F8) == 0) func_003C6060(p);
        } else if (*(short *)(p + 0x15F8) < 2) {
            func_003C6060(p);
        }
        break;
    }
    func_002EF940((*(char **)D_01CAFF0C), p + 0x1BD0);
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

class B3C8 {
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
    virtual void m34(char *, B3C8 *);
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void m44(char *, B3C8 *);
};

class A3C8 { public: char pad[0x40]; };

class D3C8 : public A3C8, public B3C8 { };

class R3C8 {
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
    virtual void m34(char *, B3C8 *);
    virtual void m38(char *, B3C8 *);
};

class T3C8 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, R3C8 *, char *);
};

class U3C8 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual int m1C();
    virtual int m20();
};

class W3C8 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int, int, char *, R3C8 *, int);
};

extern "C" void func_003C8620(D3C8 *);

#define TBL (*(char **)(p + 0xC))

#define TA (*(T3C8 **)(p + 0x14))

#define BB (*(B3C8 **)(p + 0x18))

#define UU (*(U3C8 **)(p + 0x44))

#define WW (*(W3C8 **)(p + 0x48))

#define B6 (*((signed char *)BB + 6))

#define C ((Col355 *)(p + 0x4EC0))
extern "C" {
void func_003C8790(char *p, char *q, R3C8 *r, int s) {
    extern void func_0034BA60(int, int, signed char, int, int);
    if (TBL == 0) return;
    if (q == 0) return;
    if (r == 0) return;
    if (*(unsigned char *)((char *)q[2] + (int)TBL + 0x28) != 0) {
        switch (q[2]) {
        case 0:
            WW->m18(2, s, q, r, 0);
            break;
        case 1:
            WW->m18(2, s, q, r, 0);
            break;
        }
    } else {
    switch (q[2]) {
    case 0:
        switch ((unsigned char)UU->m1C()) {
        case 0:
            func_0034BA60(*(int *)(q + 0x34), s, B6, 0, 1);
            WW->m18(0, s, q, r, 0);
            TA->m14(q, r, TBL);
            r->m38(q, BB);
            break;
        case 1:
            WW->m18(1, s, q, r, 0);
            BB->m44(q, BB);
            TA->m14(q, r, TBL + 0x54);
            r->m38(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 2:
            WW->m18(2, s, q, r, 0);
            BB->m44(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 3:
            WW->m18(2, s, q, r, 0);
            BB->m34(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 4:
            WW->m18(2, s, q, r, 0);
            BB->m34(q, BB);
            r->m34(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 5:
            WW->m18(2, s, q, r, 0);
            r->m34(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        }
        break;
    case 1:
        switch ((unsigned char)UU->m20()) {
        case 0:
            func_0034BA60(*(int *)(q + 0x34), s, B6, 0, 1);
            WW->m18(0, s, q, r, 0);
            TA->m14(q, r, TBL);
            r->m38(q, BB);
            break;
        case 1:
            WW->m18(1, s, q, r, 0);
            BB->m44(q, BB);
            TA->m14(q, r, TBL + 0x54);
            r->m38(q, BB);
            func_0034BA60(6, s, B6, 0, 1);
            break;
        case 2:
            WW->m18(2, s, q, r, 0);
            BB->m44(q, BB);
            func_0034BA60(6, s, B6, 0, 1);
            break;
        case 3:
            WW->m18(2, s, q, r, 0);
            BB->m34(q, BB);
            func_0034BA60(6, s, B6, 0, 1);
            break;
        }
        func_003C8620(static_cast<D3C8 *>(BB));
        break;
    }
    }
}
}
#undef C

extern "C" int func_0024E800(char *);

extern "C" void func_003C5370(char *);

extern "C" void func_002F2D30(char *, char *);

extern "C" char D_0056E660[];

extern "C" float D_0056E68C[];

extern "C" float D_0056E6A4[];

class V1F0 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62();virtual void d63();virtual void d64();virtual void d65();virtual void d66();virtual void d67();virtual void d68();virtual void d69();virtual void d70();virtual void d71();virtual void d72();virtual void d73();virtual void d74();virtual void d75();virtual void d76();virtual void d77();virtual void d78();virtual void d79();virtual void d80();virtual void d81();virtual void d82();virtual void d83();virtual void d84();virtual void d85();virtual void d86();virtual void d87();virtual void d88();virtual void d89();virtual void d90();virtual void d91();virtual void d92();virtual void d93();virtual void d94();virtual void d95();virtual void d96();virtual void d97();virtual void d98();virtual void d99();virtual void d100();virtual void d101();virtual void d102();virtual void d103();virtual void d104();virtual void d105();virtual void d106();virtual void d107();virtual void d108();virtual void d109();virtual void d110();virtual void d111();virtual void d112();virtual void d113();virtual void d114();virtual void d115();virtual void d116();virtual void d117(); virtual float g(unsigned int); virtual void e119();virtual void e120();virtual void e121(); virtual void f(int, char *);
};

extern "C" {
void func_003C5C40(V1F0 *o) {
    extern void func_0034BA60(int, char *, int, int, int);
    char *p = (char *)o;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (*(unsigned char *)(p + 0x1CF9) == 0) {
            o->f(*(int *)(p + 0x148), D_0056E660);
            *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = o->g((unsigned int)D_0056E68C[0]);
            *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = D_0056E6A4[0];
            func_0034BA60(0x43, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        func_003C5370(p);
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        (*(unsigned char *)(p + 6))++;
        break;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            (*(unsigned char *)(p + 4))++;
        }
        break;
    }
}
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_001AD140(char *);

extern "C" int func_001F9A70(int, char *, float);

extern "C" void func_003C3A70(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    if (*(unsigned char *)(p + 0x1CE8) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x1900), "r"(v) : "memory");
        v[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x12D0), "r"(p + 0x50) : "memory");
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x1300) : "memory");
        func_00131700(p + 0x1300, p + 0x1300, p + 0x12E0);
        func_00105230(p + 0x1300, p + 0x1300, p + 0x12D0);
        func_001318E0(p + 0x1300, p + 0x1300, p + 0x12F0);
        for (i = 0; i < 39; i++) {
            if (((char **)(p + 0x5AC))[i] != 0 && *(char **)(((char **)(p + 0x5AC))[i] + 0x104) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x5AC))[i] + 0x104) + 0x30), "r"(v) : "memory");
                *(float *)(*(char **)(((char **)(p + 0x5AC))[i] + 0x104) + 0x3C) = 1.0f;
            }
        }
        for (i = 0; i < 11; i++) {
            if (((char **)(p + 0x64C))[i] != 0 && *(char **)(((char **)(p + 0x64C))[i] + 0x104) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x64C))[i] + 0x104) + 0x30), "r"(v) : "memory");
                *(float *)(*(char **)(((char **)(p + 0x64C))[i] + 0x104) + 0x3C) = 1.0f;
            }
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(v) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x1940), "r"(p + 0xF0) : "memory");
    }
    if ((unsigned char)func_001F9A70(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548 + 8), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 2;
        func_001AD140(p);
    }
}

extern "C" void func_00105760(float *, float *, float);

class ObjPosC4 {
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
    virtual float *mC4();
};

#define QCOPYA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SETPOSA(m,s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define GETPOSA(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIPA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" {
extern "C" void func_003C4AC0(char *p) {
    float m2[16];
    float m[16];
    float *src = ((ObjPosC4 *)(p + 0x680))->mC4();
    QCOPYA(p + 0x60, src);
    SETPOSA(m2, p + 0x60);
    func_00105760(m, m2, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    GETPOSA(p + 0x60, m);
    VADDIPA(p + 0x50, p + 0x60);
    *(float *)(p + 0x5C) = 1.0f;
}
}

extern "C" {
int func_003C2760(char *, int);
}

extern "C" {
int func_003C3880(char *, int);
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
int func_003C1960(char *p0) {
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
            v1 = func_003C2760(p0, v0);
            break;
        }
    } else {
        v1 = func_003C3880(p0, v0);
    }
    return v1;
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
};

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
int func_003C3890(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 1664))->m();
    ((VD0_0_v *)(v0 + 3200))->m();
    ((V14_0_v *)(v0 + 4736))->m();
    v1 = ((V14_0_i *)(v0 + 4764))->m();
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
int func_003C4D20(char *p0, int p1, int p2, int p3) {
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

class V18_3_iiii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(int, int, int);
};

extern "C" {
int func_003C8740(char *p0, int p1, int p2) {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 12);
    if (v0 != 0) {
        if (p1 != 0) {
            if (p2 != 0) {
                v1 = ((V18_3_iiii *)*(char **)(p0 + 20))->m(p1, p2, v0);
            }
        }
    }
    return v1;
}
}
