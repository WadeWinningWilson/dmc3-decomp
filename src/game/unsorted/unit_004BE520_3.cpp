extern "C" char D_01DFABA0[];

extern "C" char *func_00207480(int, int, char *, int);

extern "C" void func_001AD140(char *);

extern "C" int func_004D2D90(char *);

extern "C" char **func_004D2740(char *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" void func_004D2B10(char *, unsigned char);

extern "C" void func_00207A90(unsigned int *);

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

class O4C9 {
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
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual int m2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

#define FB(t, o) (*(t *)(p + (o)))

static inline void attach4C9(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 3;
}

static inline int rng4C9(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(FB(unsigned char, 0xB2C9) - 2) > 1) {
        r = 0;
    }
    return r;
}

static inline unsigned int mt4C9(void) {
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
    return y;
}

extern "C" void func_004C9180(char *p) {
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x61);
            if (FB(char *, 0xB2F4) != 0) func_001AD140(FB(char *, 0xB2F4));
            FB(char *, 0xB2F4) = func_00207480(3, 0x375, 0, 0x10);
            if (FB(char *, 0xB2F4) != 0) {
                attach4C9(FB(char *, 0xB2F4), *(char **)(func_004D2740(p)[1] + 0x104));
                *(unsigned char *)(FB(char *, 0xB2F4) + 0x3A) = 1;
            }
            FB(unsigned char, 0xAD23) = 0xC;
            func_00330BD0(D_01DFABA0, 0x2F, p + 0x50, 0x23, 0);
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            if ((unsigned char)rng4C9(p) == 1)
                ((O4C9 *)p)->m300(0x62);
            FB(float, 0xB178) = 60.0f;
            func_004D2B10(p, mt4C9() % 3);
        }
        break;
    case 2:
        if ((FB(float, 0xB178) -= FB(float, 0x10)) < 0.0f)
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        break;
    case 3:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            ((O4C9 *)p)->m2F8(0x17);
            if (FB(char *, 0xB2F4) != 0) func_001AD140(FB(char *, 0xB2F4));
            FB(char *, 0xB2F8) = func_00207480(3, 0x376, 0, 0x10);
            if (FB(char *, 0xB2F8) != 0) {
                attach4C9(FB(char *, 0xB2F8), *(char **)(func_004D2740(p)[1] + 0x104));
                *(unsigned char *)(FB(char *, 0xB2F8) + 0x3A) = 1;
            }
            FB(unsigned char, 0xAD23) = 5;
        }
        break;
    }
}

extern "C" unsigned char func_0024E800(char *);

extern "C" void func_004CBBE0(float, char *);

extern "C" void func_004CBD90(char *);

extern "C" int func_004D2610(char *);

extern "C" void func_004D1AF0(char *, char *, int);

extern "C" void func_00105760(float, float *, float *);

extern "C" double func_0011CED0(double);

extern "C" char D_0058AAA0[];

extern "C" float D_005BDDBC;

extern "C" float D_005BDDC0;

extern "C" float D_005BE20C;

extern "C" float D_005BDF18;

class S4C9 {
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
    virtual int m88();
};

static inline unsigned int mt4C4(void) {
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
    return y;
}

extern "C" void func_004C4E00(char *p) {
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        if (mt4C4() & 1)
            FB(int, 0xB184) = 0;
        else
            FB(int, 0xB184) = 1;
        if (FB(int, 0xB184) == 0)
            ((O4C9 *)p)->m300(0x59);
        else
            ((O4C9 *)p)->m300(0x5A);
        FB(float, 0xB178) = D_005BDDBC;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        if (!(FB(float, 0x164) <= D_005BDDC0 + D_005BE20C))
            FB(float, 0xB170) = D_005BDF18;
        else
            FB(float, 0xB170) = 0.0f;
        FB(float, 0xB160) = 0.0f;
        FB(float, 0xB164) = 0.0f;
        FB(float, 0xB168) = FB(float, 0xB170) * FB(float, 0x10);
        FB(float, 0xB16C) = 1.0f;
        __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(p + 0xB160) : "memory");
        func_00105760(6.283185f * ((float)FB(short, 0x90) / 65536.0f), m, n);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0xB160), "r"(m) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xB160) : "memory");
        FB(float, 0x5C) = 1.0f;
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((S4C9 *)(p + 0x130))->m88() != 0) func_004CBBE0(3.0f, p);
        if ((unsigned char)func_0024E800(FB(char *, 0xAB00)) == 1) {
            if (FB(int, 0xB184) == 0)
                ((O4C9 *)p)->m300(0x59);
            else
                ((O4C9 *)p)->m300(0x5A);
        }
        if (func_0011CED0(FB(float, 0xF0)) > 1.0 || func_0011CED0(FB(float, 0xF8)) > 1.0)
            ((O4C9 *)p)->m2F8(0x17);
        if ((FB(float, 0xB178) -= FB(float, 0x10)) < 0.0f)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}

extern "C" void func_00104C00(char *, int, char *);

extern "C" char D_01CAFF0C[];

extern "C" int func_004D2890(float, char *, float *, int);

extern "C" float func_00132470(char *, char *);

extern "C" char D_0058ADC0[];

extern "C" float D_005BDE0C;

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

extern "C" void func_00277DE0(char *, char *, char *, int);

extern "C" void func_00277E70(char *);

extern "C" void func_00277ED0(char *);

extern "C" void func_00278060(char *, int);

extern "C" int D_01CAFF14[];

extern "C" char D_0058AE50[];

extern "C" int D_005875E0[];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline int is23(char *p) {
    unsigned char r = 1;
    if (FB(unsigned char, 0xB2C9) != 2 && FB(unsigned char, 0xB2C9) != 3) {
        r = 0;
    }
    return r;
}

static inline unsigned char ne1(unsigned char x) {
    if (x == 1) return 0;
    return 1;
}

static inline void spawn4C9(char *p) {
    int i;
    char *e;
    for (i = 0; i < 4; i++) {
        e = func_00207480(3, 0x283, 0, 0x10);
        if (e != 0) {
            attach4C9(e, *(char **)(*(char **)((char *)(D_005875E0[i] * 4) + (int)p + 0x115C) + 0x104));
            *(float *)(e + 0x14) = FB(float, 0xACB4);
        }
    }
}

extern "C" void func_004C9540(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *e;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if (FB(unsigned char, 0xB2C8) != 1) {
            ((O4C9 *)p)->m2F8(0x17);
            break;
        }
        if (func_00132470(p + 0x50, D_0058ADC0 + FB(unsigned char, 0xB2C8) * 16) < 50.0f) {
            FB(unsigned char, 0xB158) = 5;
            break;
        }
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x54);
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0xB178) = 120.0f;
            UNIT(m);
            func_00105760(3.1415925f, m, m);
            func_00104C00((char *)m, *(int *)(func_004D2740(p)[1] + 0x104), (char *)m);
            func_00207480(3, 0x338, (char *)m, 0x10);
            ((O4C9 *)p)->m300(0x55);
        }
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(D_0058ADC0 + (unsigned char)FB(unsigned char, 0xB2C8) * 16) : "memory");
        if ((unsigned char)func_004D2890(D_005BDE0C, p, v, 2) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            func_00207480(3, 0x338, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    case 3:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x54);
        FB(short, 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 0x8000;
        break;
    case 4:
        if (((O4C9 *)p)->m2EC() == 0x77)
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        break;
    case 5:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x72);
        FB(unsigned char, 0xAD23) = 0xC;
        if ((unsigned char)is23(p) == 1)
            FB(unsigned char, 0xB2CC) = 1;
        FB(unsigned char, 0xB2D7) = ne1(FB(unsigned char, 0xB2D7));
        break;
    case 6:
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 0) == 1) {
            func_0024E7B0(FB(char *, 0xAB00), 1, 0);
            e = func_00207480(3, 0x90, 0, 0x10);
            if (e != 0) {
                attach4C9(e, *(char **)(func_004D2740(p)[1] + 0x104));
                *(unsigned char *)(e + 0x3A) = 1;
            }
            spawn4C9(p);
            func_00277DE0(p + 0xB190, D_0058AE50, p + 0x5A20, 1);
            func_00277E70(p + 0xB190);
            func_00277ED0(p + 0xB190);
            { int k = D_01CAFF14[0]; func_00278060(p + 0xB190, k); }
        }
        if (((O4C9 *)p)->m2EC() == 0x77) {
            if (FB(float, 0x164) < 500.0f)
                ((O4C9 *)p)->m2F8(0x2D);
            else
                ((O4C9 *)p)->m2F8(0x30);
            FB(unsigned char, 0xAD23) = 5;
        }
        break;
    }
}

extern "C" void func_0034B8C0(char *, char *, int);

extern "C" int func_0034B800(float, char *, char *, short, short);

extern "C" int func_002D9EB0(char *);

extern "C" void func_004E8DB0(float *, float *, int);

extern "C" float D_0058ADF0[];

extern "C" float D_005BDE34;

extern "C" short D_005BDE30;

extern "C" short D_005BDE32;

extern "C" unsigned char D_005BDE38[8];

extern "C" float D_005BDF34;

static inline float frand4C7(void) {
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

extern "C" void func_004C7520(char *p) {
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *e;
    char *pl;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x2B);
            FB(float, 0xB178) = D_0058ADF0[FB(int, 0xB2C0)];
            FB(int, 0xB184) = D_005BDE38[FB(int, 0xB2C0)];
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            func_00207480(3, 0x323, *(char **)(func_004D2740(p)[0] + 0x104), 0x10);
            ((O4C9 *)p)->m300(0x2C);
            e = func_00207480(3, 0x349, *(char **)(func_004D2740(p)[0] + 0x104), 0x10);
            if (e != 0)
                *(float *)(e + 0x14) = FB(float, 0xACB4);
        }
        break;
    case 2:
        if ((FB(float, 0xB178) -= FB(float, 0x10)) < 0.0f && ((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            if ((unsigned char)func_0034B800(D_005BDE34, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BDE30 + FB(short, 0x90), D_005BDE32) == 1) {
                pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
                e = *(char **)(((char **)(pl + 0x1388))[func_002D9EB0(pl)] + 0x104) + 0x30;
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(e) : "memory");
                v[0] += 100.0f * frand4C7();
                v[1] += 100.0f * frand4C7();
                v[2] += 100.0f * frand4C7();
                v[3] = 1.0f;
            } else {
                v[0] = 0.0f;
                v[1] = 100.0f * frand4C7();
                v[2] = 250.0f + 250.0f * frand4C7();
                v[3] = 1.0f;
                __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(v) : "memory");
                func_00105760(6.283185f * ((float)FB(short, 0x90) / 65536.0f), m, n);
                __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(m) : "memory");
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
                v[1] = *(float *)(*(char **)(func_004D2740(p)[1] + 0x104) + 0x34);
                v[3] = 1.0f;
            }
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(v), "r"(p + 0x50) : "memory");
            func_004E8DB0(v, d, 0);
        }
        break;
    case 3:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            if (--FB(int, 0xB184) > 0) {
                FB(unsigned char, 0xB158) = 2;
                FB(float, 0xB178) = 0.0f;
                ((O4C9 *)p)->m300(0x2C);
                e = func_00207480(3, 0x349, *(char **)(func_004D2740(p)[0] + 0x104), 0x10);
                if (e != 0)
                    *(float *)(e + 0x14) = FB(float, 0xACB4);
                FB(short, 0xB150) = FB(short, 0x160) - FB(short, 0x90);
                func_0034B8C0(p + 0x90, p + 0xB150, 8192.0f * FB(float, 0x10));
            } else if (FB(unsigned char, 0xB154) == 0x2C) {
                FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
                FB(float, 0xB178) = D_005BDF34;
            } else {
                FB(unsigned char, 0xB158) = 5;
                ((O4C9 *)p)->m300(0x2D);
            }
        }
        break;
    case 4:
        if ((FB(float, 0xB178) -= FB(float, 0x10)) < 0.0f)
            ((O4C9 *)p)->m2F8(0x2E);
        break;
    case 5:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
