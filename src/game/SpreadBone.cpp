class Obj130 {
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
    virtual void m130(int);
    virtual void d75();
    virtual void m138(int);
    virtual void m13C();
};

extern "C" float D_005623C0[6];

extern "C" float D_00562400[6];

extern "C" void func_002C5F40(char *, int);

extern "C" void func_002C6790(char *, int);

extern "C" void func_002C4BA0(Obj130 *o) {
    int k;
    float t5 = D_00562400[5];
    float t4 = D_00562400[4];
    float t3 = D_00562400[3];
    float t2 = D_00562400[2];
    float t1 = D_00562400[1];
    D_005623C0[0] = D_00562400[0];
    D_005623C0[1] = t1;
    D_005623C0[2] = t2;
    D_005623C0[3] = t3;
    D_005623C0[4] = t4;
    D_005623C0[5] = t5;
    k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_002C5F40((char *)o, k);
        break;
    case 2:
        func_002C6790((char *)o, k);
        break;
    case 3:
        break;
    }
}

class ObjA4 {
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
    virtual void mA4();
};

extern "C" void func_001AD140(char *);

extern "C" void func_002C6790(char *p, int) {
    ((ObjA4 *)(p + 0x130))->mA4();
    func_001AD140(p);
}

extern "C" char D_01CAFF0C[];

extern "C" short func_0034B940(char *, char *);

extern "C" char D_005626A0[];

extern "C" char D_005626B0[];

extern "C" void func_0034B9A0(char *, short, float, float, float);

extern "C" void func_002CE2B0(char *);

extern "C" void func_002CDEF0(char *);

extern "C" int func_002CFA00(char *, float);

extern "C" void func_002CDFB0(char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

class Obj1D8 {
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
    virtual int m34();
};

class Self1C4 {
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
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual short m1C4();
};

extern "C" {
void func_002CC150(char *p) {
    extern char *func_00207480(int, int, int, int);
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        QCOPY(p + 0x60, D_005626A0);
        QCOPY(p + 0x70, D_005626B0);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
        *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
    case 1:
        if ((unsigned char)(*(Obj1D8 **)(p + 0x1D8))->m34() == 1 && !(*(float *)(p + 0x2D68) < 90.0f)) {
            *(short *)(p + 0x90) = ((Self1C4 *)p)->m1C4();
            *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
            func_00207480(3, 0x150, *(int *)(*(char **)(p + 0x4FC) + 0x104), 0x10);
            func_002CE2B0(p);
            return;
        }
        if (*(float *)(p + 0x64) <= 0.0f) {
            func_002CDEF0(p);
        }
        func_0034B9A0(p + 0x50, *(short *)(p + 0x90) + 0x8000, *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x68) < 0.5f) {
            *(float *)(p + 0x68) = 0.5f;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x5AD) < 2 && *(float *)(p + 0x64) < 0.0f && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, (int)(p + 0x1890), 0x10);
        func_002CDFB0(p);
    }
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

struct X2CB {
    char d[0x54];
};

class S2CB {
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
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void m1F0(int, X2CB *);
};

extern "C" unsigned char func_002CBF50(char *, short);

static inline short deg2CB(float d) { return 0.5f + 65536.0f * d / 360.0f; }

#define B(o) (*(unsigned char *)(p + (o)))

#define CALL1F0() ((S2CB *)p)->m1F0(*(int *)(p + 0x148), &D_00562090[B(0x2F2E)][B(0x5C2)])

#define C ((Col355 *)(p + 0x4EC0))
extern "C" {
void func_002CB960(char *p, int st) {
    extern X2CB D_00562090[][3];
    int i;
    short a;
    unsigned short u;
    unsigned char r;
    *(int *)(p + 0x2E54) = st;
    switch (*(int *)(p + 0x2E54)) {
    case 0x14:
        B(0x2D7E) = 0;
        B(0x5C4) = 1;
        CALL1F0();
        switch (B(0x2CE4)) {
        case 0xC:
        case 0x19:
        case 0x1C:
        case 0xF:
        case 0x13:
        case 0x25:
        case 0x26:
            B(0x2D7C) = 7;
            B(0x5C1) = 0;
            B(0x2CEE) = 0x2A;
            break;
        case 0x14:
        case 0x15:
            B(0x2D7C) = 7;
            B(0x5C1) = 0;
            B(0x2CEE) = 0x23;
            break;
        default:
            B(0x2F54) = 0;
            for (i = 0; i < 360; i += 90) {
                a = deg2CB(i);
                u = a;
                r = func_002CBF50(p, u);
                if (r == 1) {
                    *(unsigned short *)(p + 0x2F50) = u;
                    B(0x2CEE) = 0x2B;
                    B(0x2F54) = 1;
                    break;
                }
            }
            if (i >= 360) {
                B(0x2D7C) = 7;
                B(0x5C1) = 0;
                B(0x2CEE) = 0x23;
            }
            break;
        }
        break;
    case 0x15:
        B(0x2D7E) = 0;
        B(0x5C4) = 1;
        B(0x2D7C) = 7;
        B(0x5C1) = 0;
        CALL1F0();
        B(0x2CEE) = 0x23;
        break;
    case 7:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        B(0x5C1) = 0;
        B(0x2CEE) = 0x11;
        break;
    case 8:
    case 9:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        if (B(0x2D7D) == 1) {
            B(0x2CEE) = 0x14;
            B(0x2D7D) = 0;
        } else {
            B(0x2CEE) = 0x15;
            B(0x2D7D) = 1;
        }
        break;
    case 0:
        B(0x2D7E) = 1;
        if (B(0x2F20) == 0) {
            B(0x2CEE) = 9;
        } else {
            B(0x2CEE) = 0x31;
        }
        B(0x2F20) = B(0x2F20) != 1;
        break;
    case 1:
        B(0x2D7E) = 1;
        B(0x2CEE) = 8;
        break;
    case 2:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        B(0x5C1) = 0;
        B(0x2CEE) = 0xA;
        break;
    case 3:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        B(0x5C1) = 0;
        B(0x2CEE) = 0xD;
        break;
    case 4:
    case 5:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        B(0x5C1) = 0;
        B(0x2CEE) = 0x25;
        break;
    case 0xC:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        B(0x5C1) = 0;
        B(0x2CEE) = 0x24;
        break;
    case 0xB:
    case 0xA:
        B(0x2D7E) = 1;
        B(0x2D7C) = 5;
        B(0x5C1) = 0;
        B(0x2CEE) = 0x26;
        break;
    }
}
}
#undef C

extern "C" int func_0024E800(char *);

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0034B8C0(char *, char *, int);

extern "C" void func_002CD970(char *);

extern "C" void func_002CD800(char *);

extern "C" {
void func_002CD450(char *p) {
    extern char *func_00207480(int, int, char *, int);
    int v;
    *(float *)(p + 0x2D70) = 1.0f;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
        v = *(short *)(p + 0x2F50) / 100;
        *(short *)(p + 0x2F52) = v < 0 ? -v : v;
    case 1:
        func_0034B8C0(p + 0x90, p + 0x2F50, *(short *)(p + 0x2F52));
        *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        if ((unsigned char)func_0024E800(p + 0x2450) == 1) {
            func_002CD970(p);
            *(float *)(p + 0x60) = *(float *)(p + 0x2F40);
            *(float *)(p + 0x64) = *(float *)(p + 0x2F44);
            *(float *)(p + 0x68) = *(float *)(p + 0x2F48);
            *(float *)(p + 0x74) = -1.0f;
            *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x60) * *(float *)(p + 0x10);
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
            *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
            *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        }
        if ((unsigned char)func_0024E780(p + 0x2450, 0, 1) == 1 && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
            func_00207480(3, 0x14F, p + 0x1890, 0x10);
            *(unsigned char *)(p + 0x2D7C) = 7;
            *(unsigned char *)(p + 0x5C1) = 0;
            func_002CD800(p);
        }
    }
}
}

extern "C" int func_00201770(char *, float *, char *, char *, int);

extern "C" void func_002CB020(char *, int);

static inline bool func_002CF870_h() {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return false;
    return true;
}

extern "C" {
int func_002CF870(char *p) {
    extern int D_00562740[];
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    if (func_002CF870_h()) {
        QCOPY(v, p + 0x50);
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, (char *)h, p + 0x2D2C, 0x10) == 0) {
            h[1] = v[1] - 1000.0f;
        }
        *(float *)(p + 0x2D64) = h[1];
        *(float *)(p + 0x2D68) = *(float *)(p + 0x54) - *(float *)(p + 0x2D64);
        if ((D_00562740[*(unsigned char *)(p + 0x2CE4)] & 1) == 0) return 1;
        if (!(*(float *)(p + 0x2D68) <= 2.0f)) {
            if (!(*(float *)(p + 0x2D68) <= 30.0f)) {
                if (*(unsigned char *)(p + 0x2D7C) == 5) {
                    *(unsigned char *)(p + 0x2D7C) = 2;
                    *(unsigned char *)(p + 0x5C1) = 1;
                }
                func_002CB020(p, 1);
                return 1;
            }
        } else {
            *(float *)(p + 0x54) = h[1];
        }
    }
    return 0;
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A2180(char *, int, int);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

class O2C4 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8();
    virtual int m1FC(unsigned char *, float *);
};

class W2C4 {
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

static inline void func_002C4D20_s(char *q, unsigned int i, int c) {
    if (i < *(unsigned short *)(q + 0xA8)) {
        *(int *)(*(char **)(q + 0xBC) + i * 0x340 + 0x15C) = c;
    }
}

extern "C" void func_002C4D20(char *p) {
    unsigned char b;
    float f;
    int i;
    unsigned char c;
    char *q;
    if ((unsigned char)((O2C4 *)p)->m1FC(&b, &f) == 1) {
        if (*(unsigned char *)(p + 0x2D7C) != 7) {
            func_001A5CC0(func_00279290(p + 0x640));
        } else {
            b = (unsigned int)(*(float *)(p + 0x2F38) * f);
            func_001A2180(func_00279290(p + 0x640), b, 1);
            c = b;
            q = func_00279290(p + 0x640);
            for (i = 0; i < *(unsigned short *)(q + 0xA8); i++) {
                func_002C4D20_s(q, i, c);
            }
        }
    } else if (*(unsigned char *)(p + 0x2D7C) != 7) {
        func_001A5B90(func_00279290(p + 0x640));
    }
    ((W2C4 *)(p + 0x640))->mCC(p + 0x1890);
    if (*(unsigned char *)(p + 0x1840) == 1) {
        ((W2C4 *)(p + 0xC40))->mCC(p + 0x2AC0);
    }
}

extern "C" void func_00105760(float *, float *, float);

class O2CF7 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0();
    virtual float *mC4();
};

extern "C" void func_002CF780(char *p) {
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float *v;
    v = ((O2CF7 *)(p + 0x640))->mC4();
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x2F40), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x2F40), "r"(p + 0x2F40), "f"(*(float *)(p + 0x2D70)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(p + 0x2F40) : "memory");
    func_00105760(m, n, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0x2F40), "r"(m) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x2F40) : "memory");
}

extern "C" void func_0034BA60(int, char *, signed char, int, int);

class Sub40 {
public:
    int x;
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

#define FB(t, o) (*(t *)(p + (o)))

extern "C" void func_00321490(char *, char *, Sub40 *);

class B2C6 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, Sub40 *);
};

class U2C6 {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(char *, B2C6 *, char *);
};

class W2C6 {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(int, char *, char *, B2C6 *);
};

class O2C6 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual int m1C();
    virtual int m20();
};

extern "C" {
void func_002C6D50(Hit40 *h, char *a, B2C6 *b, char *c) {
    extern char D_00562090[][3][84];
    char *p = (char *)h;
    switch (*(signed char *)(a + 2)) {
    case 0:
        switch ((unsigned char)((O2C6 *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
            ((W2C6 *)(p + 0x2E3C))->m14(0, c, a, b);
            ((U2C6 *)(p + 0x2E24))->m14(a, b, D_00562090[FB(unsigned char, 0x2F2E)][FB(unsigned char, 0x5C2)]);
            b->m38(a, h);
            break;
        case 1:
            ((W2C6 *)(p + 0x2E3C))->m14(1, c, a, b);
            func_00321490(p + 0x130, a, h);
            b->m38(a, h);
            break;
        case 2:
            func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
            ((W2C6 *)(p + 0x2E3C))->m14(0, c, a, b);
            break;
        case 3:
        case 4:
        case 5:
            break;
        }
        break;
    case 1:
        switch ((unsigned char)((O2C6 *)(p + 0x1D0))->m20()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
            ((W2C6 *)(p + 0x2E3C))->m14(0, c, a, b);
            ((U2C6 *)(p + 0x2E24))->m14(a, b, D_00562090[FB(unsigned char, 0x2F2E)][FB(unsigned char, 0x5C2)]);
            b->m38(a, h);
            break;
        case 1:
            ((W2C6 *)(p + 0x2E3C))->m14(1, c, a, b);
            b->m38(a, h);
            break;
        case 2:
            func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
            ((W2C6 *)(p + 0x2E3C))->m14(0, c, a, b);
            break;
        case 3:
            break;
        }
        break;
    }
    FB(short, 0x2F2C) = *(short *)((char *)b + 0x50);
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
int func_002C4C80(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 1600))->m();
    if (*(unsigned char *)(v0 + 6208) == 1) {
        v1 = ((VD0_0_i *)(v0 + 3136))->m();
    }
    if ((0 < *(int *)(v0 + 528))) {
        v2 = 0;
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

extern "C" {
int func_002CA740(char *, int, int, int, int, int);
}

extern "C" {
void func_002CAB30(...);
}

extern "C" {
void func_002CB7E0(char *);
}

class V1C8_0_i {
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
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual int m(void);
};

extern "C" {
void func_002C7EA0(char *p0) {
    extern char D_00562740[];
    char *v0;
    int v1;
    int v3;
    int v2;
    int v4;
    v0 = p0;
    if (((int)*(char **)((char (*)[4])((char *)D_00562740 + 0))[*(unsigned char *)(p0 + 11492)] & 4) != 0) {
        v1 = *(unsigned char *)(v0 + 1473);
        switch (v1) {
        case 0:
            *(char *)(v0 + 1473) = (v1 + 1);
            func_002CAB30(p0, v1);
            /* fall through */
        case 1:
            v2 = (int)v0;
            if (48 != *(unsigned char *)(v0 + 11492)) {
                func_002CAB30(v2);
            }
            func_002CB7E0(v0);
            v4 = ((V1C8_0_i *)v0)->m();
            v3 = 1;
            if ((v4 & 255) == v3) {
                *(char *)(v0 + 1473) = 0;
                *(char *)(v0 + 11644) = 4;
                *(int *)(v0 + 11040) = 0;
                func_002CA740(v0, 0, -1, 0, v3, 16);
                v4 = func_002CA740(v0, 1, -1, 0, 1, 16);
            }
            break;
        }
    }
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V18_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(void);
};

class V360_1_iv {
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
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void d196();
    virtual void d197();
    virtual void d198();
    virtual void d199();
    virtual void d200();
    virtual void d201();
    virtual void d202();
    virtual void d203();
    virtual void d204();
    virtual void d205();
    virtual void d206();
    virtual void d207();
    virtual void d208();
    virtual void d209();
    virtual void d210();
    virtual void d211();
    virtual void d212();
    virtual void d213();
    virtual void m(int);
};

class V4C_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_002CBD60(char *p0, char *p1) {
    char *v0;
    int v1;
    int v2;
    int tmp21;
    int tmp23;
    int tmp25;
    v0 = p0;
    if (*(unsigned char *)(p0 + 333) != 3) {
        *(char *)(v0 + 364) = *(signed char *)(p1 + 0);
        *(char *)(v0 + 365) = *(signed char *)(p1 + 1);
        *(char *)(v0 + 366) = *(signed char *)(p1 + 2);
        *(float *)(v0 + 368) = *(float *)(p1 + 4);
        *(float *)(v0 + 372) = *(float *)(p1 + 8);
        *(float *)(v0 + 376) = *(float *)(p1 + 12);
        *(float *)(v0 + 380) = *(float *)(p1 + 16);
        *(float *)(v0 + 384) = *(float *)(p1 + 20);
        *(char *)(v0 + 388) = *(signed char *)(p1 + 24);
        *(float *)(v0 + 392) = *(float *)(p1 + 28);
        *(char *)(v0 + 396) = *(signed char *)(p1 + 32);
        *(float *)(v0 + 400) = *(float *)(p1 + 36);
        *(float *)(v0 + 404) = *(float *)(p1 + 40);
        *(float *)(v0 + 408) = *(float *)(p1 + 44);
        *(char *)(v0 + 412) = *(unsigned char *)(p1 + 48);
        *(int *)(v0 + 416) = *(int *)(p1 + 52);
        *(float *)(v0 + 420) = *(float *)(p1 + 56);
        *(char *)(v0 + 424) = *(signed char *)(p1 + 60);
        *(char *)(v0 + 425) = *(signed char *)(p1 + 61);
        *(char *)(v0 + 426) = *(signed char *)(p1 + 62);
        tmp21 = ((V14_0_i *)*(char **)(v0 + 316))->m();
        if ((tmp21 & 255) == 1) {
            ((V360_1_iv *)v0)->m(16);
        }
        tmp23 = ((V10_0_i *)*(char **)(v0 + 316))->m();
        v1 = (tmp23 & 255);
        switch (v1) {
        case 0:
            break;
        case 1:
            tmp25 = ((V18_0_i *)*(char **)(v0 + 316))->m();
            if ((tmp25 & 255) != 0) {
                ((V360_1_iv *)v0)->m(8);
            }
            break;
        }
        v2 = ((V4C_1_ii *)*(char **)(v0 + 472))->m(0);
    }
    return v2;
}
}

extern "C" {
int func_002CBEF0(char *p0) {
    int v0;
    if (*(unsigned char *)(p0 + 333) != 3) {
        v0 = ((V4C_1_ii *)*(char **)(p0 + 472))->m(0);
    }
    return v0;
}
}
