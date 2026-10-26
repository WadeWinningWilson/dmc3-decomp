class ObjC4 {
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
    virtual char *mC4();
};

extern "C" float func_001324E0(char *);

extern "C" int func_002DB3E0(char *, int);

extern "C" void func_002DBAA0(char *p, int a, float f) {
    char stk[0x10] __attribute__((aligned(16)));
    char *v;
    float dt;
    v = ((ObjC4 *)(p + *(unsigned char *)(p + 10400) * 1536 + 384))->mC4();
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(v), "r"(stk) : "memory");
    *(float *)(p + 336) = f * func_001324E0(stk);
    dt = *(float *)(p + 16);
    if (0.0f != dt) {
        dt = dt > 0.0001f ? dt : 0.0001f;
        *(float *)(p + 336) = *(float *)(p + 336) / dt;
    }
    *(int *)(p + 340) = 0;
    func_002DB3E0(p, a);
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5C30(char *);

extern "C" void func_001A5D00(char *);

class V18b {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual unsigned char m18();
};

class V150b {
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
    virtual void m148(int);
    virtual void d81();
    virtual void m150(int);
};

extern "C" void func_002D9300(char *p, int k) {
    unsigned int i;
    *(char *)(p + 0xD6) = k;
    switch (*(unsigned char *)(p + 0xD6)) {
    case 1:
    default:
        for (i = 0; i < 3; i++) {
            if (((V18b *)(p + i * 0x600 + 0x180))->m18() == 1) func_001A5C30(func_00279290(p + i * 0x600 + 0x180));
        }
        break;
    case 2:
        for (i = 0; i < 3; i++) {
            if (((V18b *)(p + i * 0x600 + 0x180))->m18() == 1) func_001A5D00(func_00279290(p + i * 0x600 + 0x180));
        }
        break;
    }
    ((V150b *)p)->m150(k);
    for (i = 0; i < 5; i++) {
        if (*(V150b **)(p + i * 4 + 0x3D54) != 0) (*(V150b **)(p + i * 4 + 0x3D54))->m148(k);
    }
}

extern "C" void func_00105760(float *, float *, float);

class VC4 {
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

extern "C" void func_002DAB90(char *p, unsigned char k) {
    float m[16] __attribute__((aligned(16)));
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float *s;
    s = ((VC4 *)(p + *(unsigned char *)(p + 0x28A0) * 0x600 + 0x180))->mC4();
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(s) : "memory");
    if (k == 1) {
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + v[1];
    } else {
        if (*(unsigned char *)(p + 0x24CE) == 1) v[0] = v[0] * -1.0f;
        __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(v) : "memory");
        func_00105760(r, m, 6.283185f * (*(short *)(p + 0x90) / 65536.0f));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(r) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    }
}

class V2D9 {
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
    virtual void d128(); virtual void d12C(); virtual void d130();
    virtual int m134(int);
    virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144(); virtual void d148();
    virtual int m14C();
};

static inline signed char find_2D9(char *p, signed char k) {
    unsigned int i;
    if (k != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == k) return i;
        }
    }
    return -1;
}

static inline V2D9 *get_2D9(char *p, signed char k) {
    signed char idx = find_2D9(p, k);
    if (idx != -1) return *(V2D9 **)((char *)(idx * 4) + (int)p + 0x3D54);
    return 0;
}

extern "C" int func_002D9BD0(char *p, signed char k) {
    V2D9 *o = get_2D9(p, k);
    if (o != 0) return o->m14C();
    return 0;
}

extern "C" int func_002D9C80(char *p, signed char k, int a) {
    V2D9 *o = get_2D9(p, k);
    if (o != 0) return o->m134(a);
    return 0;
}

extern "C" void func_001A2840(char *, int, float);

extern "C" void func_001A27E0(char *, int, float, float);

extern "C" void func_001A28A0(char *, int, float);

extern "C" void func_001A2940(char *);

extern "C" void func_001A2900(char *, float);

extern "C" void func_001A2970(char *);

class V2D9a {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual unsigned char m18();
};

class V2D9o {
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
    virtual void m144(unsigned char, float);
};

class P2D9 {
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
    virtual void m14C(unsigned char);
};

extern "C" void func_002D9450(char *p, unsigned char m, unsigned int c, float f) {
    unsigned int i0;
    char *q;
    char *q0;
    unsigned int i;
    char *q1;
    unsigned int i1;
    char *q2;
    unsigned int i2;
    char *q3;
    unsigned int i3;
    char *q4;
    unsigned int i4;
    char *q5;
    unsigned int i5;
    char *q6;
    unsigned int i6;
    char *q7;
    unsigned int i7;
    switch (m) {
    case 0:
        *(int *)(p + 0x24F4) = 0;
        *(int *)(p + 0x24F8) = 0xA0808080;
        for (i0 = 0, q0 = p; i0 < 3; i0++, q0 += 0x600) {
            if ((unsigned char)((V2D9a *)(q0 + 0x180))->m18() == 1) func_001A2840(func_00279290(q0 + 0x180), *(int *)(p + 0x24F8), 1.0f);
        }
        break;
    case 1:
        *(int *)(p + 0x24F4) = 0;
        *(int *)(p + 0x24F8) = 0xA0404080;
        for (i1 = 0, q1 = p; i1 < 3; i1++, q1 += 0x600) {
            if ((unsigned char)((V2D9a *)(q1 + 0x180))->m18() == 1) func_001A2840(func_00279290(q1 + 0x180), *(int *)(p + 0x24F8), 1.0f);
        }
        break;
    case 2:
        *(int *)(p + 0x24F4) = 0;
        *(int *)(p + 0x24F8) = 0xA0808040;
        for (i2 = 0, q2 = p; i2 < 3; i2++, q2 += 0x600) {
            if ((unsigned char)((V2D9a *)(q2 + 0x180))->m18() == 1) func_001A2840(func_00279290(q2 + 0x180), *(int *)(p + 0x24F8), 1.0f);
        }
        break;
    case 3:
        *(float *)(p + 0x24F4) = f;
        *(int *)(p + 0x24F8) = c;
        for (i3 = 0, q3 = p; i3 < 3; i3++, q3 += 0x600) {
            if ((unsigned char)((V2D9a *)(q3 + 0x180))->m18() == 1) func_001A2840(func_00279290(q3 + 0x180), *(int *)(p + 0x24F8), 1.0f);
        }
        break;
    case 4:
        *(int *)(p + 0x24F4) = 0;
        *(int *)(p + 0x24F8) = c;
        for (i4 = 0, q4 = p; i4 < 3; i4++, q4 += 0x600) {
            if ((unsigned char)((V2D9a *)(q4 + 0x180))->m18() == 1) func_001A27E0(func_00279290(q4 + 0x180), *(int *)(p + 0x24F8), 0.05f, 0.0f);
        }
        break;
    case 6:
        *(int *)(p + 0x24F4) = 0;
        *(int *)(p + 0x24F8) = 0x30101010;
        for (i5 = 0, q5 = p; i5 < 3; i5++, q5 += 0x600) {
            if ((unsigned char)((V2D9a *)(q5 + 0x180))->m18() == 1) {
                func_001A28A0(func_00279290(q5 + 0x180), *(int *)(p + 0x24F8), 1.0f);
                func_001A2940(func_00279290(q5 + 0x180));
            }
        }
        break;
    case 5:
        if (*(unsigned char *)(p + 0x24F3) == m) break;
        *(float *)(p + 0x24F4) = 30.0f;
        for (i6 = 0, q6 = p; i6 < 3; i6++, q6 += 0x600) {
            if ((unsigned char)((V2D9a *)(q6 + 0x180))->m18() == 1) func_001A2900(func_00279290(q6 + 0x180), 1.0f / *(float *)(p + 0x24F4));
        }
        break;
    case 7:
        if (*(unsigned char *)(p + 0x24F3) == m) break;
        *(int *)(p + 0x24F4) = 0;
        *(int *)(p + 0x24F8) = 0;
        for (i7 = 0, q7 = p; i7 < 3; i7++, q7 += 0x600) {
            if ((unsigned char)((V2D9a *)(q7 + 0x180))->m18() == 1) func_001A2970(func_00279290(q7 + 0x180));
        }
        break;
    case 8:
    case 9:
        break;
    }
    *(unsigned char *)(p + 0x24F3) = m;
    ((P2D9 *)p)->m14C(m);
    for (i = 0; i < 5; i++, p += 4) {
        if (*(V2D9o **)(p + 0x3D54) != 0) (*(V2D9o **)(p + 0x3D54))->m144(m, c);
    }
}

extern "C" {
extern char D_005459C0[];
}

extern "C" {
extern char D_005459C4[];
}

extern "C" {
extern char D_005459F0[];
}

extern "C" {
extern char D_005459F4[];
}

extern "C" {
extern char D_01CAFF0C[];
}

extern "C" {
int func_004F9970(int, int, int);
}

class V148_2_iiv {
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
    virtual void m(int, int);
};

extern "C" {
float func_002D90A0(char *p0, float f0) {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp6;
    int tmp11;
    *(float *)(p0 + 15484) = (*(float *)(p0 + 15484) + f0);
    v0 = *(unsigned char *)(p0 + 15476);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = (int)D_005459C0;
        if (*(float *)(v1 + 15484) >= *(float *)((char (*)[8])((char *)v2 + 0))[*(unsigned char *)(v1 + 15468)]) {
            *(char *)(v1 + 15476) = 1;
            *(float *)(v1 + 15484) = (*(float *)(v1 + 15484) - *(float *)((char (*)[8])((char *)v2 + 0))[*(unsigned char *)(v1 + 15468)]);
            ((V148_2_iiv *)p0)->m(1, 2);
            v3 = *(int *)((char (*)[8])((char *)D_005459F0 + 0))[*(unsigned char *)(v1 + 15468)];
            if (v3 != -1) {
                tmp6 = func_004F9970(*(int *)(*(char **)D_01CAFF0C + 40), v3, 4);
            }
        }
        break;
    case 1:
        v4 = (int)D_005459C4;
        if (*(float *)(v1 + 15484) >= *(float *)((char (*)[8])((char *)v4 + 0))[*(unsigned char *)(v1 + 15468)]) {
            *(char *)(v1 + 15476) = 2;
            *(float *)(v1 + 15484) = *(float *)((char (*)[8])((char *)v4 + 0))[*(unsigned char *)(v1 + 15468)];
            ((V148_2_iiv *)p0)->m(1, 2);
            v5 = *(int *)((char (*)[8])((char *)D_005459F4 + 0))[*(unsigned char *)(v1 + 15468)];
            if (v5 != -1) {
                tmp11 = func_004F9970(*(int *)(*(char **)D_01CAFF0C + 40), v5, 4);
            }
        }
        break;
    case 2:
        *(float *)(v1 + 15484) = *(float *)((char (*)[8])((char *)D_005459C4 + 0))[*(unsigned char *)(v1 + 15468)];
        break;
    }
    return *(float *)(v1 + 15484);
}
}
