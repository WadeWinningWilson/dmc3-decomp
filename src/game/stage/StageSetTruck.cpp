class Obj130b {
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
    virtual void m130();
    virtual void d75();
    virtual void m138();
    virtual void m13C();
};

extern "C" char D_005BE098[4];

extern "C" void func_00195E20(char *, char *);

extern "C" void func_001AD100(char *);

extern "C" void func_00474DD0(char *);

extern "C" void func_00474CB0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 0x194)) {
    case 0:
        ((Obj130b *)p)->m130();
        *(unsigned char *)(p + 0x194) = 1;
        break;
    case 1:
        func_00474DD0(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

extern "C" void func_0028C740(char *);

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

class A476 {
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

class B476 {
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
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void m198();
};

extern "C" int func_004764F0(char *p) {
    int i;
    switch (*(unsigned char *)(p + 0x19D)) {
    case 0:
        *(int *)(p + 0xF20) = 0;
        (*(unsigned char *)(p + 0x19D))++;
        break;
    case 1:
        *(float *)(p + 0xF20) = *(float *)(p + 0xF20) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0xF20) <= 10.0f)) {
            ((A476 *)(p + 0xA30))->mB4(1, 0, 0, 0);
            func_003305E0(D_01DFABA0, 8, 0xA0, p + 0xEF0, 0x29, 0, 0);
            *(int *)(p + 0xF20) = 0;
            (*(unsigned char *)(p + 0x19D))++;
        }
        break;
    case 2:
        *(float *)(p + 0xF20) = *(float *)(p + 0xF20) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0xF20) <= 10.0f)) {
            *(int *)(p + 0xF20) = 0;
            (*(unsigned char *)(p + 0x19D))++;
        }
        break;
    case 3:
        for (i = 0; i < 3; i++) {
            if (*(char **)(p + i * 4 + 0xF04) && *(unsigned char *)(p + i + 0xF10) == 0) {
                (*(B476 **)((char *)(i * 4) + (int)p + 0xF04))->m198();
                *(unsigned char *)((char *)i + (int)p + 0xF10) = 1;
                break;
            }
        }
        if (i == 3) {
            *(int *)(p + 0xF20) = 0;
            (*(unsigned char *)(p + 0x19D))++;
        } else {
            *(unsigned char *)(p + 0x19D) = 2;
        }
        break;
    case 4:
        *(float *)(p + 0xF20) = *(float *)(p + 0xF20) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0xF20) <= 60.0f)) {
            *(int *)(p + 0xF20) = 0;
            (*(unsigned char *)(p + 0x19D))++;
            func_0028C740(p + 0xF30);
        }
        break;
    case 5:
        return 1;
    }
    return 0;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00104C00(char *, char *, char *);

extern "C" void func_00105760(char *, char *, float);

class V474 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8();
    virtual void mCC(char *);
};

extern "C" void func_00474FA0(char *p) {
    float m[16] __attribute__((aligned(16)));
    UNIT(m);
    func_00105760((char *)m, (char *)m, *(float *)(p + 0x198) * (float)*(signed char *)(p + 0x188));
    func_00104C00((char *)m, *(char **)(p + 0xAC4) + 0x450, (char *)m);
    ((V474 *)(*(char **)(p + 0xAC4) + 0x10))->mCC((char *)m);
    if (*(char **)(p + 0xAC0) != 0) {
        UNIT(m);
        func_00105760((char *)m, (char *)m, (float)*(signed char *)(p + 0x188) * (-1.0f * (*(float *)(*(char **)(p + 0xAC4) + 4) - *(float *)(p + 0x198))));
        func_00104C00((char *)m, *(char **)(p + 0xAC0) + 0x450, (char *)m);
        ((V474 *)(*(char **)(p + 0xAC0) + 0x10))->mCC((char *)m);
    }
    if (*(char **)(p + 0xAC8) != 0) {
        UNIT(m);
        func_00105760((char *)m, (char *)m, (float)*(signed char *)(p + 0x188) * (*(float *)(*(char **)(p + 0xAC8) + 4) + *(float *)(p + 0x198)));
        func_00104C00((char *)m, *(char **)(p + 0xAC8) + 0x450, (char *)m);
        ((V474 *)(*(char **)(p + 0xAC8) + 0x10))->mCC((char *)m);
    }
}

extern "C" char D_01CAFF0C[];

extern "C" void func_002F2250(char *);

class O4767 {
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
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194();
    virtual void m198();
};

typedef struct { unsigned char b0; char pad[15]; float pos[4]; short ang; short h92; short h94; short pad2; int w98; int w9C; int wA0; int wA4; } S4767 __attribute__((aligned(16)));

extern "C" O4767 *func_002F2850(char *, S4767 *);

extern "C" void func_00476780(char *p, unsigned char k, int m) {
    S4767 s;
    float d[4] __attribute__((aligned(16)));
    int i;
    O4767 *o;
    short t;
    func_002F2250(*(char **)(*(char **)D_01CAFF0C + 0x20));
    for (i = 0; i < 3; i++) {
        if (((int *)(p + 0xF04))[i] == 0) break;
    }
    s.b0 = k;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(s.pos), "r"(p + 0xEF0) : "memory");
    s.pos[1] += 100.0f;
    s.pos[3] = 1.0f;
    t = 0.5f + 65536.0f * *(float *)(p + 0xF00) / 6.283185f;
    s.ang = (short)(unsigned short)t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(p + 0xEC0) : "memory");
    switch (i) {
    case 0:
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(200.0f) : "t0", "memory");
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(-200.0f) : "t0", "memory");
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(s.pos), "r"(s.pos), "r"(d) : "memory");
    s.h94 = 0;
    s.w98 = 0;
    s.w9C = 0;
    s.wA0 = 0;
    s.wA4 = 0;
    switch (m) {
    case 0: s.h94 = 0; break;
    case 1: s.h94 = 2; break;
    case 2: s.h94 = 3; break;
    }
    switch (*(unsigned char *)(p + 0xF13)) {
    case 0:
        s.h92 = 0xE;
        o = func_002F2850(*(char **)(*(char **)D_01CAFF0C + 0x20), &s);
        break;
    case 1:
        s.h92 = 0;
        o = func_002F2850(*(char **)(*(char **)D_01CAFF0C + 0x20), &s);
        if (o != 0) o->m198();
        break;
    }
    if (o != 0) {
        ((O4767 **)(p + 0xF04))[i] = o;
        if (*(unsigned char *)(p + 0xF13) == 0) ((unsigned char *)(p + 0xF10))[i] = 0;
        else ((unsigned char *)(p + 0xF10))[i] = 1;
    }
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
int func_00474C60(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 432))->m();
    tmp0 = ((VD0_0_i *)(p0 + 1600))->m();
    return tmp0;
}
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_00476010(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 432))->m();
    ((VD0_0_v *)(v0 + 1520))->m();
    v1 = ((VD0_0_i *)(v0 + 2608))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 208))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 212));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 208)));
    }
    return v1;
}
}

class V18_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(void);
};

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
int func_00476700(int p0) {
    char *v0;
    int v1;
    v0 = (char *)p0;
    ((VCC_1_pv *)(v0 + 432))->m((v0 + 3776));
    ((VCC_1_pv *)(v0 + 1520))->m((v0 + 3776));
    v1 = ((V18_0_i *)(v0 + 2608))->m();
    if (v1 != 0) {
        v1 = ((VCC_1_pi *)(v0 + 2608))->m((v0 + 3776));
    }
    return v1;
}
}
