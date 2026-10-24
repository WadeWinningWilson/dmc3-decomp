/* Hand-matched C++ (virtual calls), continued: functions whose real signatures conflict with
 * declarations used in vcalls.cpp (e.g. the release routine func_001AD140 returns int). */

typedef struct { float f[4]; } __attribute__((aligned(16))) QF3B1;
typedef struct { short h[4]; } __attribute__((aligned(8))) S83B1;

typedef struct {
    unsigned char id;
    float v[5];
} T3E5;

typedef struct {
    unsigned char c[4];
} S42F;

typedef struct {
    unsigned char c[6];
} S430;

class ObjRel18 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18();
};

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

extern "C" void func_001ACFE0(char *);
extern "C" void func_00440090(char *, int);

/* Release request: live objects (states 1/2) run their shutdown and become 3; state 4 is torn down now. */
extern "C" int func_001AD140(char *p) {
    switch (*(unsigned char *)(p + 0x18)) {
    case 1:
    case 2:
        ((ObjRel18 *)p)->m18();
        *(unsigned char *)(p + 0x18) = 3;
        break;
    case 4:
        func_001ACFE0(p);
        break;
    case 3:
    case 0:
        break;
    default:
        return 0;
    }
    return 1;
}

extern "C" void func_0043F570(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        break;
    case 1:
        r = ((ObjBCr *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_00440090(p, 0);
        }
        break;
    }
}

extern "C" char D_01DFABA0[];
extern "C" void func_003305E0(char *, int, int, char *, int, int, int);
extern "C" void func_00481E00(char *, int);
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
extern "C" void func_00481310(char *);

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

class AnimF2 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

extern "C" char *func_00207480(int, int, char *, int);
extern "C" int func_0024E800(char *);

extern "C" void func_0038F300(char *, int);
extern "C" void func_0038F2C0(char *, int);

/* Arms the hit window once the clip passes frame 149, then exits through state 8 on motion end. */
extern "C" void func_00421B00(char *p) {
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (149.0f <= (*(float *)(p + 0x414) = ((AnimF2 *)(p + 0x604))->m28(0))) {
            func_00207480(3, 0x194, p + 0x3D0, 16);
            *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x1000;
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F2C0(p, 8);
        }
    }
}

extern "C" void func_0043FA30(char *, int);
extern "C" void func_0038F540(char *);
extern "C" void func_0041D6E0(char *, char *, int, float);
extern "C" void func_0038F830(char *);
extern "C" void func_003F2E90(char *);
extern "C" void func_003F2F60(char *);
extern "C" int func_0024E780(char *, int, int);
extern "C" void func_0024E7B0(char *, int, int);
extern "C" void func_003EF580(char *);
extern "C" char D_005BCD60[];
extern "C" void func_0031E570(char *);
extern "C" void func_002D26A0(char *, int, int);
extern "C" void func_0024DA80(char *, int, int);
extern "C" int func_002D65E0(char *);
extern "C" void func_002D2270(char *, int);
extern "C" void func_002D6D30(char *);
extern "C" void func_0034B8C0(char *, char *, int);
extern "C" void func_002CD970(char *);
extern "C" int func_002CFA00(char *, float);
extern "C" void func_002CD800(char *);
extern "C" float D_005703D0[];
extern "C" void func_003F2D20(char *, float);
extern "C" int func_0024E810(char *);
extern "C" void func_003E6750(char *, int, int, int);
extern "C" void func_00206730(char *);
extern "C" float D_00570380[];
extern "C" float D_00570434[];
extern "C" char D_00572F28[];
extern "C" float D_00572F38[];
extern "C" int func_0034BBE0(int, char *);
extern "C" void func_004E09F0(char *, int, int);
extern "C" void func_003F2800(char *);
extern "C" float D_00570330[];
extern "C" char D_01CAFF0C[];
extern "C" int func_0021D120(char *, float);
extern "C" void func_00105300(char *, char *);
extern "C" int func_002018A0(char *, char *, char *, char *, char *, int);
extern "C" void func_003ED420(char *);
extern "C" void func_003E9930(char *);
extern "C" float D_00570344[];
extern "C" void func_003E8070(char *);
extern "C" void func_003E8330(char *);
extern "C" void func_0028C5C0(char *, int, float);
extern "C" int func_00201770(char *, float *, char *, char *, int);
extern "C" float func_001324E0(float *);
extern "C" float func_0034C200(char *, int, float);

extern "C" void func_0043F920(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        break;
    case 1:
        r = ((ObjBCr *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        }
        break;
    case 2:
        if (*(unsigned char *)(*(char **)(p + 0x804) + 0x800) != 2) {
            func_0043FA30(p, 5);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        }
        break;
    case 3:
        r = ((ObjBCr *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_00440090(p, 0);
        }
        break;
    }
}

class AnimF {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

static inline unsigned char f1000(char *p) {
    return (*(int *)(p + 0x42C) & 0x1000) != 0;
}

extern "C" void func_0041F950(char *p) {
    float f;
    char *b;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x454) = 300.0f;
        func_0038F300(p, -1);
        if (!f1000(p)) {
            func_00207480(3, 0x194, p + 0x3D0, 0x10);
        }
        *(int *)(p + 0x42C) = *(int *)(p + 0x42C) & ~0x1000;
        func_0038F540(p);
        *(float *)(p + 0x60) = 10.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        f = ((AnimF *)(p + 0x604))->m28(0);
        *(float *)(p + 0x414) = f;
        if (11.0f < f && f < 40.0f) {
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        }
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F830(p);
        }
    }
}

extern "C" void func_003EF340(char *p) {
    func_003F2E90(p);
    func_003F2F60(p);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_00207480(0, 0x2C, p + 0x6E0, 0x10);
        break;
    case 2:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_00207480(0, 0x2C, p + 0x6E0, 0x10);
        break;
    case 3:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_00207480(0, 0x2C, *(char **)(*(char **)(p + 0x834) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(char **)(*(char **)(p + 0x840) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(char **)(*(char **)(p + 0x84C) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(char **)(*(char **)(p + 0x8E4) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(char **)(*(char **)(p + 0x8F0) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(char **)(*(char **)(p + 0x8FC) + 0x104), 0x10);
        break;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003EF580(p);
    }
}

extern "C" void func_002D5A70(char *p) {
    char *e;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(unsigned char *)(p + 0x1E2) = 3;
        *(unsigned char *)(p + 0x1E3) = 2;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0031E570(p + 0x1D0);
            func_002D26A0(p, 3, 0xA);
            func_0024DA80(p + 0x31E0, 0, 3);
            *(unsigned char *)(p + 0x3900) = 1;
        }
        break;
    case 2:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            func_00207480(3, 0x144, p + 0x1EF0, 0x10);
        }
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 2) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            e = *(char **)(p + 0x3914);
            if (e != 0) {
                e[0x3B] = 0;
            }
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            *(int *)(p + 0x38D4) = 0;
            *(int *)(p + 0x38D8) = 0;
            if (func_002D65E0(p) != 0) {
                func_002D2270(p, 0x17);
            } else {
                func_002D2270(p, ((signed char *)D_005BCD60)[*(unsigned char *)(p + 0x38D0)]);
            }
            func_002D6D30(p);
        }
        break;
    }
}

extern "C" void func_002CD450(char *p) {
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

class ObjV2F8 {
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
    virtual void d2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void m2F8(int);
};

class Sub7C {
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
    virtual float m7C();
};

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void attach(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 0;
}

static inline int speed_band(char *p) {
    int k = (int)(((Sub7C *)(p + 0x130))->m7C() / 300.0f);
    if (k > 3) {
        k = 3;
    }
    if (*(unsigned char *)(p + 0x1BD) != 0) {
        k = 4;
    }
    return k;
}

extern "C" void func_003F1850(char *p) {
    float m[16];
    int k;
    float r;
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        ((ObjV2F8 *)p)->m2F8(0x4C);
        func_003E6750(p, 0x28, 0, 0);
        *(float *)(p + 0x2170) = 1.0f;
        UNIT(m);
        func_00206730(p + 0x3BE8);
        if (*(char **)(p + 0x3BE8) == 0) {
            *(char **)(p + 0x3BE8) = func_00207480(3, 0x238, (char *)m, 0x10);
            if (*(char **)(p + 0x3BE8) != 0) {
                attach(*(char **)(p + 0x3BE8), p + 0x6E0);
            }
        }
    }
    k = speed_band(p);
    r = D_005703D0[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    func_003F2F60(p);
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
}

extern "C" void func_003EDD50(char *p) {
    int k;
    float r;
    if (*(float *)(p + 0x3A8C) < 10.0f) {
        k = speed_band(p);
        r = D_00570380[k];
        func_003F2D20(p, r * *(float *)(p + 0x10));
    }
    func_003F2F60(p);
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
    if (*(char **)(p + 0x21FC) != 0 && (*(int *)(*(char **)(p + 0x21FC) + 8) & 0x1000)) {
        ((ObjV2F8 *)p)->m2F8(0x1A);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(float *)(p + 0x3A8C) = D_00572F38[func_0034BBE0(3, D_00572F28)];
        *(int *)(p + 0x2170) = 0;
    } else {
        *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3A8C) < 0.0f) {
            *(float *)(p + 0x3A8C) = D_00572F38[func_0034BBE0(3, D_00572F28)];
            ((ObjV2F8 *)p)->m2F8(0x1A);
            *(int *)(p + 0x2170) = 0;
        }
    }
}

extern "C" void func_003F1FB0(char *p) {
    int k;
    float r;
    int i;
    int n;
    float m[16];
    char *e;
    *(float *)(p + 0x710) = *(float *)(p + 0x710) - 20.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x718) = *(float *)(p + 0x718) - 20.0f * *(float *)(p + 0x35B8);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) == 0) {
        k = speed_band(p);
        r = D_00570434[k];
        func_003F2D20(p, r * *(float *)(p + 0x10));
    }
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 1) == 1) {
        func_0024E7B0(p + 0x1FD0, 0, 1);
        n = 4;
        for (i = 0; i < n; i++) {
            func_004E09F0(p, i, n);
        }
        UNIT(m);
        e = func_00207480(3, 0x3A2, (char *)m, 0x10);
        if (e != 0) {
            attach(e, *(char **)(*(char **)(p + 0x850) + 0x104));
        }
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003F2800(p);
    }
}

extern "C" void func_003ED270(char *p) {
    int k;
    float r;
    char *pl;
    float hit[4];
    char buf[0x40];
    k = speed_band(p);
    r = D_00570330[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    func_003F2F60(p);
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if ((unsigned char)func_0021D120(pl, 10.0f) != 0) {
            func_00105300(p + 0x3600, *(char **)(*(char **)(p + 0x850) + 0x104));
            func_00105300(p + 0x3640, *(char **)(*(char **)(pl + 0x138C) + 0x104));
            if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x3630, p + 0x3670, (char *)hit, buf, 0x10) == 0) {
                func_003ED420(p);
                ((ObjV2F8 *)p)->m2F8(0x14);
                *(unsigned char *)(p + 0x3434) = 0;
                *(unsigned char *)(p + 0x3435) = 0;
                *(unsigned char *)(p + 0x3436) = 0;
                func_003E6750(p, 0x2A, 0, 0);
                *(unsigned char *)(p + 0x3A30) = 0;
                return;
            }
        }
        func_003E9930(p);
    }
}

extern "C" void func_003ED660(char *p) {
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    int k;
    float r;
    float hit[4];
    char buf[0x40];
    float m[16];
    char *e;
    k = speed_band(p);
    r = D_00570344[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    func_003F2E90(p);
    func_003F2F60(p);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) == 1 && *(unsigned char *)(p + 0x36C8) == 0) {
        *(unsigned char *)(p + 0x36C8) = 1;
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_00105300(p + 0x3600, *(char **)(*(char **)(p + 0x850) + 0x104));
        func_00105300(p + 0x3640, *(char **)(*(char **)(pl + 0x138C) + 0x104));
        if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x3630, p + 0x3670, (char *)hit, buf, 0x10) == 0) {
            func_003ED420(p);
            func_003E8070(p);
            ((ObjV2F8 *)p)->m2F8(0x15);
            UNIT(m);
            e = func_00207480(3, 0x3A2, (char *)m, 0x10);
            if (e != 0) {
                attach(e, *(char **)(*(char **)(p + 0x850) + 0x104));
            }
        } else {
            ((ObjV2F8 *)p)->m2F8(0x16);
            func_003E6750(p, 0x2B, 0, 0);
            func_003E8330(p);
        }
    }
}

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { int w[4]; } __attribute__((aligned(16))) Q16;

extern "C" Q16 D_00569E80;
extern "C" float D_00572FE0[];
extern "C" char D_00572F50[];
extern "C" void func_00133450(char *, float *, float *);
extern "C" void func_003EB3D0(char *);
extern "C" void func_003EA030(char *);
extern "C" char D_005730A0[];
extern "C" void func_002F2FB0(char *);
extern "C" char *func_002F3080(char *);
extern "C" int func_004DD520(char *, int);
extern "C" char D_00573000[];
extern "C" int D_005BE09C;
extern "C" char D_005729C0[];
extern "C" char D_00572F00[];
extern "C" int func_001ACCF0(int, float, float, float, float);
extern "C" int func_003F3420(char *, char *);
extern "C" void func_003EB530(char *, int, int);
extern "C" char *func_002792A0(char *);
extern "C" char *func_00279290(char *);
extern "C" void func_001A2180(char *, int, int);
extern "C" float D_00570284[];
extern "C" float D_00570288[];
extern "C" float D_00573330[];
extern "C" float func_0011D798(float);
extern "C" void func_00104E78(float *, char *);
extern "C" void func_00104B80(float *, float *, float *);
extern "C" float D_00573080[];
extern "C" float D_005703E4[];
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" char *func_0028C3A0(char *, int, int, int);
extern "C" float D_005703F8[];
extern "C" float D_0057040C[];
extern "C" float D_00570420[];
extern "C" float func_00132630(float *, char *);
extern "C" float D_005702E0[];
extern "C" char D_00569E60[];
extern "C" unsigned int D_01DF8810[];
extern "C" unsigned int D_01DF7E50[];
extern "C" void func_00207A90(unsigned int *);
extern "C" void func_003F32B0(char *);
extern "C" char D_00572F60[];
extern "C" float D_005702F4[];
extern "C" char D_0056E150[];
extern "C" void func_003AA8F0(char *);
extern "C" void func_0034BA60(int, char *, int, int, int);
extern "C" float D_005647AC[];
extern "C" unsigned char D_01CAFF3D[];
extern "C" int func_0021CAD0(char *);
extern "C" float D_005BDF14;
extern "C" int func_003B55B0(char *, int);
extern "C" float func_003B5650(char *, int, int);
extern "C" unsigned char func_003B5780(char *, int);
extern "C" short func_003B5700(char *, int);
extern "C" float func_003B57C0(char *, int);
extern "C" unsigned char func_003B58D0(char *, int);
extern "C" short func_003B5850(char *, int);

extern "C" void func_003E6FA0(char *p) {
    func_0028C5C0(p + 0x2180, (unsigned char)(*(float *)(p + 0x3424) > 0.0f), *(float *)(p + 0x10));
}

extern "C" int func_003F2FA0(char *p, char *a, char *b) {
    float v[4];
    QCOPY(v, p + 0x710);
    v[1] = v[1] + 100.0f;
    return (unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, a, b, 0x10);
}

extern "C" void func_003F0D00(char *p) {
    float m[16];
    char *e;
    ((ObjV2F8 *)p)->m2F8(0x43);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0x22, 0, 0);
    UNIT(m);
    e = func_00207480(3, 0x2C0, (char *)m, 0x10);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x6E0;
        *(unsigned char *)(e + 0x9A) = 1;
    }
}

extern "C" void func_003F2150(char *p) {
    float d[4];
    Q16 q;
    ((ObjV2F8 *)p)->m2F8(0x52);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0x29, 0, 0);
    q = D_00569E80;
    VSUBR(d, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x710);
    *(float *)(p + 0x3A18) = func_0034C200((char *)&q, 2, func_001324E0(d));
}

extern "C" void func_003F1490(char *p) {
    float m[16];
    char *e;
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        UNIT(m);
        e = func_00207480(3, 0x2C0, (char *)m, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = *(char **)(*(char **)(p + 0x850) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

extern "C" void func_003F15A0(char *p) {
    float m[16];
    char *e;
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        UNIT(m);
        e = func_00207480(3, 0x2C0, (char *)m, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = *(char **)(*(char **)(p + 0x850) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

extern "C" void func_003EC030(char *p) {
    int k;
    ((ObjV2F8 *)p)->m2F8(0xC);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0xD, 1, 5);
    *(int *)(p + 0x3A84) = func_0034BBE0(4, D_00572F50);
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) + 1;
    k = speed_band(p);
    *(float *)(p + 0x3A10) = D_00572FE0[k];
    *(float *)(p + 0x3A18) = 0.0f;
}

extern "C" void func_003EC600(char *p) {
    int k;
    ((ObjV2F8 *)p)->m2F8(0xE);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0xC, 1, 5);
    *(int *)(p + 0x3A84) = func_0034BBE0(4, D_00572F50);
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) + 1;
    k = speed_band(p);
    *(float *)(p + 0x3A10) = D_00572FE0[k];
    *(float *)(p + 0x3A18) = 0.0f;
}

extern "C" void func_003EADB0(char *p) {
    float a[4];
    float b[4];
    *(float *)(p + 0x710) = *(float *)(p + 0x710) - 10.0f * *(float *)(p + 0x7A0);
    *(float *)(p + 0x718) = *(float *)(p + 0x718) - 10.0f * *(float *)(p + 0x7A8);
    b[0] = *(float *)(p + 0x700);
    b[1] = *(float *)(p + 0x704);
    b[2] = *(float *)(p + 0x708);
    a[0] = 0.8f * *(float *)(p + 0x6F0) + 0.2f * *(float *)(p + 0x7A0);
    a[1] = 0.8f * *(float *)(p + 0x6F4) + 0.2f * *(float *)(p + 0x7A4);
    a[2] = 0.8f * *(float *)(p + 0x6F8) + 0.2f * *(float *)(p + 0x7A8);
    func_00133450(p + 0x6E0, a, b);
    if (func_0024E800(p + 0x1FD0) != 0) {
        if (*(unsigned char *)(p + 0x35E0) != 0) {
            func_003EB3D0(p);
        } else {
            func_003EA030(p);
        }
    }
}

extern "C" void func_003F3110(char *p) {
    float a[4];
    float b[4];
    a[0] = 0.8f * *(float *)(p + 0x6F0) + 0.2f * *(float *)(p + 0x3578);
    a[1] = 0.8f * *(float *)(p + 0x6F4) + 0.2f * *(float *)(p + 0x357C);
    a[2] = 0.8f * *(float *)(p + 0x6F8) + 0.2f * *(float *)(p + 0x3580);
    a[3] = 0.0f;
    b[0] = *(float *)(p + 0x700);
    b[1] = *(float *)(p + 0x704);
    b[2] = *(float *)(p + 0x708);
    b[3] = 0.0f;
    if (a[1] < 0.0f) {
        a[1] = a[1] * -1.0f;
    }
    func_00133450(p + 0x6E0, a, b);
}

extern "C" void func_003F31E0(char *p) {
    float a[4];
    float b[4];
    if (*(unsigned char *)(p + 0x35E0) != 0) {
        a[0] = 0.8f * *(float *)(p + 0x6F0) + 0.2f * *(float *)(p + 0x35B0);
        a[1] = 0.8f * *(float *)(p + 0x6F4) + 0.2f * *(float *)(p + 0x35B4);
        a[2] = 0.8f * *(float *)(p + 0x6F8) + 0.2f * *(float *)(p + 0x35B8);
        a[3] = 0.0f;
        b[0] = *(float *)(p + 0x700);
        b[1] = *(float *)(p + 0x704);
        b[2] = *(float *)(p + 0x708);
        b[3] = 0.0f;
        if (a[1] < 0.0f) {
            a[1] = a[1] * -1.0f;
        }
        func_00133450(p + 0x6E0, a, b);
    }
}

struct Rate18 {
    float id;
    float v[5];
};

extern "C" void func_003ED110(char *p) {
    float w[256];
    int k;
    int n;
    Rate18 *e;
    ((ObjV2F8 *)p)->m2F8(0x13);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    if (*(int *)(p + 0x1F94) != 0) {
        func_003E6750(p, 0, 0, 0);
    }
    e = (Rate18 *)D_005730A0;
    k = speed_band(p);
    for (n = 0; !(e->v[0] < 0.0f); n++) {
        w[n] = e->v[k];
        e++;
    }
    *(float *)(p + 0x3A8C) = ((Rate18 *)D_005730A0)[func_0034BBE0(n, (char *)w)].id;
    *(unsigned char *)(p + 0x36C8) = 0;
}

extern "C" void func_003EDA10(char *p) {
    unsigned char found = 0;
    char *o;
    float m[16];
    char *e;
    func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
    for (;;) {
        o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
        if (o == 0) {
            break;
        }
        if (*(signed char *)(o + 0x46) == 0x1B) {
            found = 1;
        }
    }
    if (found == 0) {
        ((ObjV2F8 *)p)->m2F8(0x18);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        if (*(unsigned char *)(p + 0x36E0) == 0) {
            *(unsigned char *)(p + 0x36E0) = 1;
            if (func_004DD520(p, 1) != 0) {
                func_003E6750(p, 0x24, 0, 0);
                UNIT(m);
                e = func_00207480(3, 0x307, (char *)m, 0x10);
                if (e != 0) {
                    *(char **)(e + 0x90) = p + 0x6E0;
                    *(unsigned char *)(e + 0x9A) = 1;
                }
            } else {
                func_003E9930(p);
            }
        } else {
            func_003E9930(p);
        }
    } else {
        func_003E9930(p);
    }
}

extern "C" void func_003F16F0(char *p) {
    float w[256];
    int k;
    int n;
    Rate18 *e;
    ((ObjV2F8 *)p)->m2F8(0x4D);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    if (*(int *)(p + 0x1F94) != 0) {
        func_003E6750(p, 0, 0, 0);
    }
    e = (Rate18 *)D_00573000;
    k = speed_band(p);
    for (n = 0; !(e->v[0] < 0.0f); n++) {
        w[n] = e->v[k];
        e++;
    }
    *(float *)(p + 0x3A8C) = ((Rate18 *)D_00573000)[func_0034BBE0(n, (char *)w)].id;
}

class SubC8 {
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
    virtual void mC8(char *);
};

extern "C" void func_003E6CA0(char *p) {
    float m[16];
    float a;
    float b;
    float c;
    if (*(signed char *)(p + 0x1FC9) == 1) {
        *(float *)(*(char **)(p + 0x7F4) + 0x184) = 1.5f;
        *(float *)(*(char **)(p + 0x7F4) + 0x198) = 1.5f;
        *(float *)(*(char **)(p + 0x7F4) + 0x1AC) = 1.5f;
        *(float *)(*(char **)(p + 0x8A4) + 0x184) = 1.5f;
        *(float *)(*(char **)(p + 0x8A4) + 0x198) = 1.5f;
        *(float *)(*(char **)(p + 0x8A4) + 0x1AC) = 1.5f;
        *(float *)(*(char **)(p + 0x7F4) + 0x10C) = *(float *)(*(char **)(p + 0x7F4) + 0x10C) * 1.5f;
        *(float *)(*(char **)(p + 0x7F4) + 0x120) = *(float *)(*(char **)(p + 0x7F4) + 0x120) * 1.5f;
        *(float *)(*(char **)(p + 0x7F4) + 0x134) = *(float *)(*(char **)(p + 0x7F4) + 0x134) * 1.5f;
        *(float *)(*(char **)(p + 0x8A4) + 0x10C) = *(float *)(*(char **)(p + 0x8A4) + 0x10C) * 1.5f;
        *(float *)(*(char **)(p + 0x8A4) + 0x120) = *(float *)(*(char **)(p + 0x8A4) + 0x120) * 1.5f;
        *(float *)(*(char **)(p + 0x8A4) + 0x134) = *(float *)(*(char **)(p + 0x8A4) + 0x134) * 1.5f;
    }
    if (*(unsigned char *)(p + 0x342C) == 0x3D) {
        func_00105300((char *)m, p + 0x6E0);
        a = m[4];
        b = m[5];
        c = m[6];
        m[4] = a * *(float *)(p + 0x3BF4);
        m[5] = b * *(float *)(p + 0x3BF4);
        m[6] = c * *(float *)(p + 0x3BF4);
        ((SubC8 *)(p + 0x980))->mC8((char *)m);
        ((SubC8 *)(p + 0xF80))->mC8((char *)m);
    } else {
        ((SubC8 *)(p + 0x980))->mC8(p + 0x6E0);
        ((SubC8 *)(p + 0xF80))->mC8(p + 0x6E0);
    }
    QCOPY(p + 0x50, p + 0x710);
}

class Obj840 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual int m14();
    virtual void m18(float);
};

class Sub8C {
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
    virtual void m8C();
};

class SelfF0 {
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
    virtual void d2EC();
    virtual void m2F0(char *);
};

extern "C" void func_003E9EB0(char *p) {
    char *pl;
    int e;
    float out[4];
    float pos[4];
    char buf[0x40];
    *(unsigned char *)(p + 0x3A9C) = 0;
    pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (((Obj840 *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m14() != 0 &&
        func_001ACCF0(D_005BE09C, *(float *)(p + 0x710), *(float *)(p + 0x714), *(float *)(p + 0x718), -200.0f) != 0) {
        ((Obj840 *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m18(3.0f);
        e = func_003F3420(p, D_005729C0);
    } else {
        e = func_003F3420(p, D_00572F00);
    }
    if (e != 0) {
        ((Sub8C *)(p + 0x130))->m8C();
        ((SelfF0 *)p)->m2F0((char *)e);
        return;
    }
    QCOPY(pos, pl + 0x50);
    pos[1] = pos[1] + 10.0f;
    if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, pos, (char *)out, buf, 0x10) == 1) {
        func_003EB530(p, 1, 1);
    } else {
        func_003E9930(p);
    }
}

extern "C" void func_003EF950(char *p) {
    float v[4];
    float len;
    ((ObjV2F8 *)p)->m2F8(0x38);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 3;
    *(unsigned char *)(p + 0x3436) = 8;
    *(unsigned char *)(p + 0x3A80) = 0;
    *(unsigned char *)(p + 0x3A81) = 0;
    *(float *)(p + 0x3A10) = 10.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x3A14) = 10.0f * *(float *)(p + 0x35B4);
    *(float *)(p + 0x3A18) = 10.0f * *(float *)(p + 0x35B8);
    QCOPY(v, p + 0x6F0);
    len = func_001324E0(v);
    if (!(len <= 0.0f)) {
        v[0] = v[0] / len;
        v[1] = v[1] / len;
        v[2] = v[2] / len;
    }
    *(float *)(p + 0x710) = *(float *)(p + 0x710) + 150.0f * v[0];
    *(float *)(p + 0x714) = *(float *)(p + 0x714) + 150.0f * v[1];
    *(float *)(p + 0x718) = *(float *)(p + 0x718) + 150.0f * v[2];
    *(float *)(p + 0x6F0) = *(float *)(p + 0x6F0) * -1.0f;
    *(float *)(p + 0x6F4) = *(float *)(p + 0x6F4) * -1.0f;
    *(float *)(p + 0x6F8) = *(float *)(p + 0x6F8) * -1.0f;
    *(float *)(p + 0x700) = *(float *)(p + 0x700) * -1.0f;
    *(float *)(p + 0x704) = *(float *)(p + 0x704) * -1.0f;
    *(float *)(p + 0x708) = *(float *)(p + 0x708) * -1.0f;
    func_00105300(p + 0x3AB0, p + 0x6E0);
    *(float *)(p + 0x3A8C) = 0.0f;
    func_003E6750(p, 0x18, 0, 0);
}

class Sub80 {
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
    virtual float m80(int);
};

extern "C" void func_003EFB70(char *p) {
    float a[4];
    float b[4];
    float t;
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) + 0.05f * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x3A8C) <= 1.0f)) {
        *(float *)(p + 0x3A8C) = 1.0f;
    }
    a[0] = *(float *)(p + 0x3AC0) * (1.0f - *(float *)(p + 0x3A8C));
    t = *(float *)(p + 0x3A8C);
    a[1] = t + *(float *)(p + 0x3AC4) * (1.0f - t);
    a[2] = *(float *)(p + 0x3AC8) * (1.0f - *(float *)(p + 0x3A8C));
    a[3] = 0.0f;
    b[0] = *(float *)(p + 0x700);
    b[1] = *(float *)(p + 0x704);
    b[2] = *(float *)(p + 0x708);
    b[3] = 0.0f;
    func_00133450(p + 0x6E0, a, b);
    func_003F2F60(p);
    if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
        ((ObjV2F8 *)p)->m2F8(0x3A);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 8;
        *(unsigned char *)(p + 0x3A80) = 0;
        *(unsigned char *)(p + 0x3A81) = 0;
        *(float *)(p + 0x2170) = 1.0f;
    } else if (!(((Sub80 *)func_002792A0(p + 0x980))->m80(0) < 40.0f)) {
        *(float *)(p + 0x2170) = 0.0f;
    }
}

extern "C" void func_003EFDD0(char *p) {
    float pos[4];
    float hit[4];
    char buf[0x40];
    if (*(float *)(p + 0x3A94) < 0.0f && *(unsigned char *)(p + 0x3A9C) != 0) {
        QCOPY(pos, p + 0x710);
        pos[0] = pos[0] + 500.0f * *(float *)(p + 0x700);
        pos[1] = pos[1] + 500.0f * *(float *)(p + 0x704);
        pos[2] = pos[2] + 500.0f * *(float *)(p + 0x708);
        pos[1] = pos[1] + 10.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, pos, (char *)hit, buf, 0x10) == 1) {
            *(unsigned char *)(p + 0x3A9C) = 0;
            ((ObjV2F8 *)p)->m2F8(0x50);
            *(unsigned char *)(p + 0x3434) = 0;
            *(unsigned char *)(p + 0x3435) = 4;
            *(unsigned char *)(p + 0x3436) = 0;
            func_003E6750(p, 0x2E, 0, 0);
            *(unsigned char *)(p + 0x3437) = 0;
            *(unsigned char *)(p + 0x3438) = 0;
        }
    } else {
        ((ObjV2F8 *)p)->m2F8(0x27);
        *(unsigned char *)(p + 0x3434) = 1;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 3;
        func_003E6750(p, 0x19, 0, 0);
    }
}

static inline void node_clr(char *m, unsigned int i) {
    if (i < *(unsigned short *)(m + 0xA8)) {
        *(int *)(*(char **)(m + 0xBC) + i * 0x340 + 0x15C) = 0;
    }
}

extern "C" void func_003F0D90(char *p) {
    float m[16];
    char *e;
    char *mdl;
    int i;
    ((ObjV2F8 *)p)->m2F8(0x46);
    func_003E6750(p, 0x22, 0, 0);
    *(unsigned char *)(p + 0x3437) = 2;
    *(unsigned char *)(p + 0x3438) = 2;
    UNIT(m);
    e = func_00207480(3, 0x2C0, (char *)m, 0x10);
    if (e != 0) {
        *(char **)(e + 0x90) = *(char **)(*(char **)(p + 0x850) + 0x104);
        *(unsigned char *)(e + 0x9A) = 1;
    }
    func_001A2180(func_00279290(p + 0x980), 0x40, 1);
    func_001A2180(func_00279290(p + 0xF80), 0x40, 1);
    mdl = func_00279290(p + 0x980);
    for (i = 0; i < *(unsigned short *)(mdl + 0xA8); i++) {
        node_clr(mdl, i);
    }
    mdl = func_00279290(p + 0xF80);
    for (i = 0; i < *(unsigned short *)(mdl + 0xA8); i++) {
        node_clr(mdl, i);
    }
}

struct RateB {
    unsigned char id;
    float v[5];
};

extern "C" int func_003F3420(char *p, char *tbl) {
    float w[256];
    float hp;
    int lvl;
    int k;
    int n;
    RateB *base;
    RateB *e;
    hp = 100.0f * (*(float *)(p + 0x311C) / *(float *)(p + 0x309C));
    if (hp < D_00570284[0]) {
        lvl = 2;
    } else if (D_00570284[0] <= hp && hp < D_00570288[0]) {
        lvl = 1;
    } else if (D_00570288[0] <= hp) {
        lvl = 0;
    }
    base = ((RateB **)tbl)[*(unsigned char *)(p + 0x1FBC) * 3 + lvl];
    e = base;
    k = speed_band(p);
    for (n = 0; !(e->v[0] < 0.0f); n++) {
        w[n] = e->v[k];
        e++;
    }
    return base[func_0034BBE0(n, (char *)w)].id;
}

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern "C" void func_003F2800(char *p) {
    float d[4];
    float t;
    float vy;
    float g;
    float disc;
    float r;
    float len;
    char *pl;
    float y;
    float py;
    ((ObjV2F8 *)p)->m2F8(0x56);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 4;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0x2D, 0, 0);
    *(float *)(p + 0x3A8C) = 250.0f;
    *(float *)(p + 0x3A18) = 0.0f;
    *(unsigned char *)(p + 0x3437) = 0;
    *(unsigned char *)(p + 0x3438) = 0;
    *(unsigned char *)(p + 0x3A80) = 0;
    *(unsigned char *)(p + 0x3A81) = 1;
    g = -2.0f;
    vy = 40.0f;
    pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    y = *(float *)(p + 0x714);
    py = *(float *)(pl + 0x54);
    if (!(py <= y)) {
        vy = 10.0f;
        t = vy;
    } else {
        {
            float k2 = 2.0f * g * (y - py);
            disc = vy * vy - k2;
        }
        if (disc < 0.0f) {
            vy = 15.0f;
            t = 10.0f;
        } else {
            t = (-vy - fsqrt(disc)) / g;
        }
    }
    VSUBR(d, pl + 0x50, p + 0x710);
    d[1] = 0.0f;
    len = func_001324E0(d);
    if (!(len <= 700.0f)) {
        d[0] = 700.0f * (d[0] / len);
        d[2] = 700.0f * (d[2] / len);
    }
    *(float *)(p + 0x3A10) = d[0] / t;
    *(float *)(p + 0x3A14) = vy;
    *(float *)(p + 0x3A18) = d[2] / t;
    *(unsigned char *)(p + 0x3B93) = 0;
}

extern "C" void func_003ED420(char *p) {
    float m[16];
    float dir[4];
    float l[4];
    float len;
    float c;
    float r;
    int k;
    VSUBR(dir, p + 0x3670, p + 0x3630);
    dir[3] = 0.0f;
    len = func_001324E0(dir);
    if (len <= 0.0f) {
        return;
    }
    dir[0] = dir[0] / len;
    dir[1] = dir[1] / len;
    dir[2] = dir[2] / len;
    func_00104E78(m, p + 0x6E0);
    func_00104B80(l, m, dir);
    l[2] = 0.0f;
    k = speed_band(p);
    c = func_0011D798(6.2831850f * ((90.0f - D_00573330[k]) / 360.0f));
    if (!(l[0] <= c)) {
        l[0] = c;
    }
    if (l[0] < -c) {
        l[0] = -c;
    }
    if (!(l[1] <= c)) {
        l[1] = c;
    }
    if (l[1] < -c) {
        l[1] = -c;
    }
    r = func_001324E0(l);
    l[2] = fsqrt(1.0f - r * r);
    l[0] = l[0] * len;
    l[1] = l[1] * len;
    l[2] = l[2] * len;
    func_00104B80(dir, (float *)(p + 0x6E0), l);
    *(float *)(p + 0x3670) = *(float *)(p + 0x3630) + dir[0];
    *(float *)(p + 0x3674) = *(float *)(p + 0x3634) + dir[1];
    *(float *)(p + 0x3678) = *(float *)(p + 0x3638) + dir[2];
}

extern "C" void func_003F19B0(char *p) {
    int k1;
    int k;
    float r;
    char *e;
    if (*(signed char *)(p + 0x1FC4) != 0) {
        k1 = speed_band(p);
        if (((Sub80 *)func_002792A0(p + 0x980))->m80(0) < D_00573080[k1]) {
            k = speed_band(p);
            r = D_005703E4[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        }
    }
    if (*(signed char *)(p + 0x1FC5) != 0) {
        func_003F2E90(p);
    }
    if (*(signed char *)(p + 0x1FC6) != 0) {
        func_003F2F60(p);
    }
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 4)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 0);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(int *)(*(char **)(p + 0x8C8) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    case 2:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 0);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(int *)(*(char **)(p + 0x818) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

extern "C" void func_003F2AB0(char *p) {
    int k;
    float r;
    if (!((unsigned int)(unsigned char)func_0024E780(p + 0x1FD0, 0, 0) < 2U)) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x700) * (*(float *)(p + 0x3A18) * *(float *)(p + 0x10));
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x704) * (*(float *)(p + 0x3A18) * *(float *)(p + 0x10));
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x708) * (*(float *)(p + 0x3A18) * *(float *)(p + 0x10));
        *(float *)(p + 0x3A18) = *(float *)(p + 0x3A18) + 2.0f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x3A18) <= 100.0f)) {
            *(float *)(p + 0x3A18) = 100.0f;
        }
        if (*(float *)(p + 0x3A18) < 10.0f) {
            k = speed_band(p);
            r = D_005703F8[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        } else {
            k = speed_band(p);
            r = D_0057040C[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        }
        if (*(char **)(p + 0x21FC) != 0 && (*(int *)(*(char **)(p + 0x21FC) + 8) & 0x1000)) {
            *(float *)(p + 0x3A8C) = 60.0f;
            return;
        }
        *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3A8C) < 0.0f) {
            ((ObjV2F8 *)p)->m2F8(0x50);
            func_003E6750(p, 0x2E, 0, 0);
        }
    }
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
}

extern "C" void func_003F1C80(char *p) {
    int v;
    int k;
    float r;
    v = (unsigned char)func_0024E780(p + 0x1FD0, 0, 0);
    if (v != 0) {
        *(unsigned char *)(p + 0x3437) = 2;
        *(unsigned char *)(p + 0x3438) = 2;
    }
    if (!((unsigned int)v < 2U)) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x700) * (*(float *)(p + 0x3A18) * *(float *)(p + 0x10));
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x704) * (*(float *)(p + 0x3A18) * *(float *)(p + 0x10));
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x708) * (*(float *)(p + 0x3A18) * *(float *)(p + 0x10));
        *(float *)(p + 0x3A18) = *(float *)(p + 0x3A18) + 2.0f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x3A18) <= 100.0f)) {
            *(float *)(p + 0x3A18) = 100.0f;
        }
        if (*(float *)(p + 0x3A18) < 10.0f) {
            k = speed_band(p);
            r = D_005703F8[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        } else {
            k = speed_band(p);
            r = D_0057040C[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        }
        if (*(char **)(p + 0x21FC) != 0 && (*(int *)(*(char **)(p + 0x21FC) + 8) & 0x1000)) {
            *(float *)(p + 0x3A8C) = 20.0f;
            return;
        }
        *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3A8C) < 0.0f) {
            ((ObjV2F8 *)p)->m2F8(0x50);
            func_003E6750(p, 0x2E, 0, 0);
        }
    }
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
    func_003F2F60(p);
}

extern "C" void func_003F2200(char *p) {
    int k;
    float r;
    func_003F2E90(p);
    func_003F2F60(p);
    if (*(unsigned char *)(p + 0x3BFB) == 0) {
        if (!(((Sub7C *)func_002792A0(p + 0x980))->m7C() <= 0.0f)) {
            k = speed_band(p);
            r = D_00570420[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        }
        if (func_0024E800(p + 0x1FD0) != 0) {
            float m[16];
            ((ObjV2F8 *)p)->m2F8(0x53);
            func_003E6750(p, 0x30, 0, 0);
            UNIT(m);
            func_00206730(p + 0x3BF0);
            if (*(char **)(p + 0x3BF0) == 0) {
                *(char **)(p + 0x3BF0) = func_00207480(3, 0x3A7, (char *)m, 0x10);
                if (*(char **)(p + 0x3BF0) != 0) {
                    attach(*(char **)(p + 0x3BF0), p + 0x6E0);
                }
            }
            func_00207480(3, 0x7B, p + 0x6E0, 0x10);
        }
    } else {
        if (!(((Sub7C *)func_002792A0(p + 0x980))->m7C() <= 0.0f)) {
            k = speed_band(p);
            r = D_00570420[k];
            func_003F2D20(p, r * *(float *)(p + 0x10));
        }
        if (!(((Sub7C *)func_002792A0(p + 0x980))->m7C() <= 35.0f)) {
            float m2[16];
            ((ObjV2F8 *)p)->m2F8(0x53);
            func_003E6750(p, 0x30, 0, 0);
            UNIT(m2);
            func_00206730(p + 0x3BF0);
            if (*(char **)(p + 0x3BF0) == 0) {
                *(char **)(p + 0x3BF0) = func_00207480(3, 0x3A7, (char *)m2, 0x10);
                if (*(char **)(p + 0x3BF0) != 0) {
                    attach(*(char **)(p + 0x3BF0), p + 0x6E0);
                }
            }
            func_00207480(3, 0x7B, p + 0x6E0, 0x10);
        }
    }
}

class Self1F4 {
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
    virtual void m1F4(char *, int);
};

static inline void wing_step(char *p) {
    if (*(int *)(p + 0x7D8) == 0 && *(char **)(p + 0xC8) != 0) {
        func_001AD140(*(char **)(p + 0xC8));
    }
    func_001A2180(func_00279290(p + 0x980), *(unsigned char *)(p + 0x3BF8), 1);
    func_001A2180(func_00279290(p + 0xF80), *(unsigned char *)(p + 0x3BF8), 1);
}

extern "C" void func_003F0790(char *p) {
    char *o;
    int n;
    func_003F2F60(p);
    func_003F2E90(p);
    if (*(unsigned char *)(p + 0x342C) == 0x3D) {
        switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 1)) {
        case 1:
            wing_step(p);
            *(float *)(p + 0x3BF4) = *(float *)(p + 0x3BF4) - (float)(0.0044 * *(float *)(p + 0x10));
            if (*(unsigned char *)(p + 0x3BF8) > 1) {
                *(unsigned char *)(p + 0x3BF8) = *(unsigned char *)(p + 0x3BF8) - 1;
            }
            break;
        case 3:
            func_0024E7B0(p + 0x1FD0, 0, 1);
            ((Self1F4 *)p)->m1F4(p + 0x7B0, 0);
            break;
        }
    }
    if (*(unsigned char *)(p + 0x342C) == 0x3E) {
        switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 1)) {
        case 1:
            wing_step(p);
            if (*(unsigned char *)(p + 0x3BF8) > 1) {
                *(unsigned char *)(p + 0x3BF8) = *(unsigned char *)(p + 0x3BF8) - 1;
            }
            break;
        case 2:
            func_0024E7B0(p + 0x1FD0, 0, 1);
            n = 0;
            func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
            for (;;) {
                o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
                if (o == 0) {
                    break;
                }
                if (*(signed char *)(o + 0x46) == 0x1B) {
                    n++;
                }
            }
            if (n <= 0) {
                func_004DD520(p, 2);
            }
            break;
        case 3:
            func_0024E7B0(p + 0x1FD0, 0, 1);
            ((Self1F4 *)p)->m1F4(p + 0x7B0, 0);
            break;
        }
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_001AD140(p);
    }
}

static inline float frand2(void) {
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

static inline void hop_pick(char *p, int fwd) {
    if (fwd) {
        ((ObjV2F8 *)p)->m2F8(0xE);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        func_003E6750(p, 0xC, 0, 0);
    } else {
        ((ObjV2F8 *)p)->m2F8(0xC);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        func_003E6750(p, 0xD, 0, 0);
    }
}

extern "C" void func_003EC110(char *p) {
    float a[4];
    float d[4];
    float w[256];
    int k;
    int n;
    float r;
    Rate18 *e;
    func_003F32B0(p);
    k = speed_band(p);
    r = D_005702E0[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) == 1) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) - *(float *)(p + 0x10) * (*(float *)(p + 0x6E0) * *(float *)(p + 0x3A10) + *(float *)(p + 0x700) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x714) = *(float *)(p + 0x714) - *(float *)(p + 0x10) * (*(float *)(p + 0x6E4) * *(float *)(p + 0x3A10) + *(float *)(p + 0x704) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x718) = *(float *)(p + 0x718) - *(float *)(p + 0x10) * (*(float *)(p + 0x6E8) * *(float *)(p + 0x3A10) + *(float *)(p + 0x708) * *(float *)(p + 0x3A18));
    }
    func_003F2F60(p);
    func_003F32B0(p);
    if (func_0024E800(p + 0x1FD0) == 0) {
        return;
    }
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) - 1;
    if (*(int *)(p + 0x3A84) <= 0) {
        ((ObjV2F8 *)p)->m2F8(0xF);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(int *)(p + 0x2170) = 0;
        e = (Rate18 *)D_00572F60;
        k = speed_band(p);
        n = 0;
        while (!(e->v[0] < 0.0f)) {
            w[n] = e->v[k];
            e++;
            n++;
        }
        *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
        return;
    }
    if (*(unsigned char *)(p + 0x3A33) < 2) {
        func_00104B80(a, (float *)(*(char **)(p + 0x3A40) + 0x6E0), (float *)(D_00569E60 + *(unsigned char *)(p + 0x3A33) * 16));
        VSUBR(d, (char *)a, p + 0x710);
        d[3] = 0.0f;
        if (!(func_00132630(d, p + 0x6F0) <= 0.0f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    } else {
        if (!(frand2() <= 0.5f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    }
}

extern "C" void func_003EC6E0(char *p) {
    float a[4];
    float d[4];
    float w[256];
    int k;
    int n;
    float r;
    Rate18 *e;
    func_003F32B0(p);
    k = speed_band(p);
    r = D_005702F4[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) == 1) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x10) * (*(float *)(p + 0x6E0) * *(float *)(p + 0x3A10) + *(float *)(p + 0x700) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x10) * (*(float *)(p + 0x6E4) * *(float *)(p + 0x3A10) + *(float *)(p + 0x704) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x10) * (*(float *)(p + 0x6E8) * *(float *)(p + 0x3A10) + *(float *)(p + 0x708) * *(float *)(p + 0x3A18));
    }
    func_003F2F60(p);
    func_003F32B0(p);
    if (func_0024E800(p + 0x1FD0) == 0) {
        return;
    }
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) - 1;
    if (*(int *)(p + 0x3A84) <= 0) {
        ((ObjV2F8 *)p)->m2F8(0xF);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(int *)(p + 0x2170) = 0;
        e = (Rate18 *)D_00572F60;
        k = speed_band(p);
        n = 0;
        while (!(e->v[0] < 0.0f)) {
            w[n] = e->v[k];
            e++;
            n++;
        }
        *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
        return;
    }
    if (*(unsigned char *)(p + 0x3A33) < 2) {
        func_00104B80(a, (float *)(*(char **)(p + 0x3A40) + 0x6E0), (float *)(D_00569E60 + *(unsigned char *)(p + 0x3A33) * 16));
        VSUBR(d, (char *)a, p + 0x710);
        d[3] = 0.0f;
        if (!(func_00132630(d, p + 0x6F0) <= 0.0f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    } else {
        if (!(frand2() <= 0.5f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    }
}

class Tc10 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10(int, int, int, int);
};

extern "C" void func_002E8350(char *p, int a, int b, int c) {
    (*(Tc10 **)(p + 0x18))->m10(a, b, c, *(int *)(p + 0x1C));
}

extern "C" unsigned char func_003ACB40(char *p) {
    unsigned char r;
    if (*(signed char *)(p + 0x4E1A) == -1) {
        return 0;
    }
    *(unsigned char *)(p + 0x4E16) = *(unsigned char *)(((char **)D_0056E150)[*(signed char *)(p + 0x4E1A)] + *(signed char *)(p + 0x4E1B));
    r = 1;
    if (*(unsigned char *)(p + 0x4E16) == 0x17) {
        *(unsigned char *)(p + 0x4E16) = 0;
        r = 0;
    }
    *(signed char *)(p + 0x4E1B) = *(signed char *)(p + 0x4E1B) + 1;
    func_003AA8F0(p);
    *(int *)(p + 0x4BE0) = 0;
    return r;
}

class Sub40 {
public:
    int x;
};

class Hit64 {
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
    virtual void m38(char *, Sub40 *);
    virtual void e13();
    virtual void e14();
    virtual void e15();
    virtual void e16();
    virtual void e17();
    virtual void e18();
    virtual void e19();
    virtual void e20();
    virtual void e21();
    virtual void e22();
    virtual void m64(char *, int, float, float, float);
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

extern "C" void func_003B9790(Hit40 *h, char *a, Hit64 *q) {
    char *p = (char *)h;
    float f;
    if (a != 0 && q != 0) {
        func_00207480(3, 0x15E, p + 0x250, 0x20);
        if (*(unsigned char *)(p + 0x1B4) != 0) func_0034BA60(0x32, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        f = *(float *)(a + 4) * (D_005647AC[0] / 100.0f);
        q->m64(a, 0, f, 1.0f, 1.0f);
        q->m38(a, h);
        f = *(float *)(p + 0x1C4) = *(float *)(p + 0x1C4) - f;
        if (f <= 0.0f || D_01CAFF3D[0] != 0) {
            *(float *)(p + 0x1C4) = -1.0f;
            *(unsigned char *)(p + 0x1B0) = 1;
        }
    }
}

class V7078 {
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
    virtual void m70();
    virtual void d27();
    virtual short m78(short, short);
};

extern "C" int func_004D2610(char *p) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (func_0021CAD0(g) != 0) {
        switch ((unsigned char)func_0021CAD0(g)) {
        case 7:
        case 8:
        case 0x11:
        case 0x26:
        case 0x27:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x74:
            if (*(float *)(p + 0x164) < D_005BDF14) {
                ((V7078 *)(p + 0x130))->m70();
                if ((short)(((V7078 *)(p + 0x130))->m78(*(short *)(p + 0x160), *(short *)(*(char **)(p + 0x140) + 0x50)) + 0x2000) < 0x4000) return 1;
            }
            break;
        }
    }
    return 0;
}

class BaseD0 {
public:
    int x;
};

extern "C" BaseD0 *func_002F7C10(int, int);
extern "C" float func_001324B0(char *, char *);
extern "C" float func_00132470(char *, char *);
extern "C" void func_001AF080(char *, int);
extern char D_00666750[];
extern "C" void func_001EC8A0();
extern "C" void func_00330140(char *, char *, char *, char *);
extern "C" void func_003301F0(char *, char *);
extern "C" void func_001ECD70(char *);
extern "C" void func_001ECB30(char *);
extern "C" int func_0022C8C0(char *);
extern "C" void func_001AE9B0(char *);
extern "C" void func_001ECB40(char *);
extern "C" void func_001C4110(char *);
extern "C" void func_001ECBF0(char *);
extern "C" void func_003712C0(char *);
extern "C" void func_0028C9B0(char *);
extern "C" void func_0030EB50(char *);
extern "C" void func_001ECF20(char *);
extern "C" void func_001EC8E0(char *);
extern "C" void func_0022CAD0(char *);
extern "C" unsigned char func_001ECB20(char *);
extern "C" char *D_005BC1A8;
extern "C" char D_01CAF2B0[];
extern "C" char D_01C61900[];
extern "C" char D_01DF8E48[];
extern "C" char D_01DFA340[];
extern "C" char *func_002D9F00(char *, int);
extern "C" void func_00104C00(char *, char *, char *);
extern "C" float func_00131BA0(char *);
extern "C" float func_00131C20(char *);
extern "C" float func_0034C160(float, float, float);
extern "C" void func_002FD5F0(char *);
extern "C" void func_002FD660(char *);
extern "C" void func_002FDDD0(char *, int);

class PadD0 {
public:
    char padD0[0xD0];
};

class DerD0 : public PadD0, public BaseD0 {
};

extern "C" void func_003B5470(char *p) {
    int i;
    DerD0 *e;
    *(short *)(p + 0x222E) = *(short *)(p + 0x222C);
    *(short *)(p + 0x222C) = 0;
    for (i = 0; i < 7; i++) {
        e = static_cast<DerD0 *>(func_002F7C10(i, 0x20));
        if (e != 0) {
            *(unsigned char *)(p + i + 0x221A) = *(unsigned char *)((char *)e + 0x2BC);
            *(char **)((char *)e + 0x2B4) = p;
            if (*(unsigned char *)(p + i + 0x221A) != 0) *(short *)(p + 0x222C) = *(short *)(p + 0x222C) + 1;
        }
    }
    *(int *)(p + 0x21FC) = func_003B55B0(p, 0);
    *(int *)(p + 0x2210) = func_003B55B0(p, 1);
    if ((bool)*(unsigned char *)(p + 0x2216) == true) {
        *(float *)(p + 0x2208) = func_003B57C0(p, *(int *)(p + 0x2200));
        *(unsigned char *)(p + 0x220C) = func_003B58D0(p, *(int *)(p + 0x2200));
        *(short *)(p + 0x220E) = func_003B5850(p, *(int *)(p + 0x2200));
    } else {
        *(float *)(p + 0x2208) = func_003B5650(p, *(int *)(p + 0x2200), 0);
        *(unsigned char *)(p + 0x220C) = func_003B5780(p, *(int *)(p + 0x2200));
        *(short *)(p + 0x220E) = func_003B5700(p, *(int *)(p + 0x2200));
    }
}

extern "C" bool func_0034B340(float far, float near, unsigned char *out, float *t, char *pos, unsigned int hi, unsigned int lo) {
    bool r;
    float d;
    if (*(char **)((char *)D_005BE09C + 0x23C) == 0) return false;
    d = func_001324B0(*(char **)((char *)D_005BE09C + 0x23C) + 0x70, pos);
    r = false;
    if (d < far) {
        r = true;
        if (!(d <= near)) {
            *t = (d - near) / (far - near);
            *out = (unsigned int)((float)lo + *t * (float)(int)((unsigned char)hi - (unsigned char)lo));
        } else {
            *t = 0.0f;
            *out = lo;
        }
    }
    return r;
}

extern "C" bool func_0034B490(float far, float near, unsigned char *out, float *t, char *pos, unsigned int hi, unsigned int lo) {
    bool r;
    float d;
    if (*(char **)((char *)D_005BE09C + 0x23C) == 0) return false;
    d = func_00132470(*(char **)((char *)D_005BE09C + 0x23C) + 0x70, pos);
    r = false;
    if (d < far) {
        r = true;
        if (!(d <= near)) {
            *t = (d - near) / (far - near);
            *out = (unsigned int)((float)lo + *t * (float)(int)((unsigned char)hi - (unsigned char)lo));
        } else {
            *t = 0.0f;
            *out = lo;
        }
    }
    return r;
}

class VD0 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49(); virtual void f();
};

#define VC(o) ((VD0 *)(o))->f()

extern "C" void func_004787F0(char *p) {
    int i;
    char *b;
    char *a;
    if (*(int *)(p + 0x3C) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x3C));
        *(int *)(p + 0x3C) = 0;
    }
    if (*(int *)(p + 0x40) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x40));
        *(int *)(p + 0x40) = 0;
    }
    if (*(int *)(p + 0x44) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x44));
        *(int *)(p + 0x44) = 0;
    }
    VC(p + 0x80);
    VC(p + 0x680);
    VC(p + 0xC80);
    for (i = 0, b = p, a = p; i < 20; i++, b += 6, a += 0x600) {
        if (*(unsigned char *)(b + 0x97AF) == 1) {
            VC(a + 0x1280);
        }
    }
    if (*(unsigned char *)(p + 0x9827) == 1) {
        VC(p + 0x9080);
        VC(p + 0x8A80);
    }
}

class VF5 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4(); virtual float f();
};

class V48 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15(); virtual void f(int, char *);
};

class V496 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35(); virtual void s98(int); virtual void e37();virtual void e38();virtual void e39();virtual void e40();virtual void e41();virtual void e42(); virtual void sb4(int); virtual void g44();virtual void g45();virtual void g46();virtual void g47();virtual void g48();virtual void g49();virtual void g50();virtual void g51();virtual void g52();virtual void g53();virtual void g54();virtual void g55();virtual void g56(); virtual void sec(int);
    char *m4; char *m8; int mC; char *m10; float m14; char x18[4]; char m1C; char m1D; char x1E[0x12]; short m30; int m34; int m38; char x3C[0x68]; int mA4; class V48 *mA8; int mAC; char xB0[0xC]; int mBC; char xC0[0xD]; char mCD; char mCE; char mCF; char mD0; char mD1; char xD2[0x36]; int m108; char m10C;
};

extern "C" void func_00496990(V496 *p, char *a, char *b, int c, V48 *d, char *e, int f, int g, int h) {
    VF5 *q;
    float r;
    p->m4 = a;
    p->m8 = b;
    p->mC = c;
    p->mA8 = d;
    p->m10 = e;
    p->mBC = f;
    p->mA4 = g;
    p->mAC = h;
    if (*(char **)(*(char **)D_01CAFF0C + 4) != 0 && (q = *(VF5 **)(*(char **)(*(char **)D_01CAFF0C + 4) + 0x10)) != 0) {
        r = q->f();
    } else {
        r = 0.0f;
    }
    p->m14 = r;
    p->m30 = 0;
    p->m34 = 0;
    p->m38 = 0;
    p->m108 = 0;
    p->m10C = 0;
    p->m1C = 0;
    p->m1D = 0;
    p->mCD = 0;
    p->mCE = 0;
    p->mCF = 0;
    p->mD0 = 0;
    p->mD1 = 0;
    p->sec(0xE);
    p->sb4(0xE);
    p->s98(*(int *)(b + 0x1C));
    switch (*(int *)(p->m4 + 0x2C)) {
    case 0:
        break;
    case 1:
        p->mA8->f(0x7D5, p->m10 + 0x10);
        break;
    }
}

class Snd10 {
public:
    virtual void d0(); virtual void d1(); virtual void f();
};

extern "C" void func_001EC390(char *p) {
    int r;
    char *m;
    func_001EC8A0();
    m = (char *)D_005BE09C + 0x1E0;
    func_00330140(D_01DFABA0, m + 0x30, m + 0x20, m + 0x10);
    func_003301F0(D_01DFABA0, (char *)D_005BE09C + 0x100);
    func_001ECD70(p);
    func_001ECB30(D_01CAF2B0);
    r = func_0022C8C0(p + 0xC3C);
    func_001AE9B0(D_00666750);
    func_001ECB40(D_01CAF2B0);
    func_001C4110(D_01C61900);
    func_001ECBF0(p);
    ((Snd10 *)D_005BC1A8)->f();
    func_003712C0(p + 0x2C0);
    func_0028C9B0(D_01DF8E48);
    func_0030EB50(D_01DFA340);
    func_001ECF20(p);
    func_0030EB50(p + 0x3D4);
    func_001EC8E0(p);
    if (r == -1) {
        func_0022CAD0(p + 0xC3C);
        *(unsigned char *)(p + 8) = 2;
        *(unsigned char *)(p + 0xB) = 0;
        *(unsigned char *)(p + 0xA) = 0;
        *(unsigned char *)(p + 9) = 0;
        *(short *)(p + 0xE) = 0;
        *(short *)(p + 0xC) = 0;
    } else if (*(unsigned char *)(p + 0x26E) == 0 && func_001ECB20(p) == 1) {
        *(int *)(p + 0xC58) = -2;
        *(unsigned char *)(p + 0x26E) = 1;
    }
}

class VC8 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47(); virtual void f(float *);
};

extern "C" void func_0028F570(char *p) {
    float m[16] __attribute__((aligned(16)));
    if (*(signed char *)(p + 0xDA) != 0) {
        func_00105300((char *)m, func_002D9F00(*(char **)(p + 0xE0), 0));
        ((VC8 *)(p + 0x200))->f(m);
        func_00105300(p + 0x880, *(char **)(*(char **)(p + 0x108) + 0x104));
        func_00105300(p + 0x8C0, *(char **)(*(char **)(p + 0x104) + 0x104));
    } else {
        if (*(signed char *)(p + 0x90C) != -1) {
            func_00104C00(p + 0x880, func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x800);
        }
        if (*(signed char *)(p + 0x90D) != -1) {
            func_00104C00(p + 0x8C0, func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD5)), p + 0x840);
        }
        if (*(signed char *)(p + 0x90C) == -1) {
            func_00104C00(p + 0x880, p + 0x8C0, p + 0x800);
        }
        if (*(signed char *)(p + 0x90D) == -1) {
            func_00104C00(p + 0x8C0, p + 0x880, p + 0x840);
        }
        func_00105300(*(char **)(*(char **)(p + 0x108) + 0x104), p + 0x880);
        func_00105300(*(char **)(*(char **)(p + 0x104) + 0x104), p + 0x8C0);
        func_00105300(*(char **)(*(char **)(p + 0x100) + 0x104), *(char **)(p + 0xE0) + 0x110);
    }
}

class VC4 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46(); virtual float *f();
};

static inline float func_002DB940_m(float x, float m) {
    if (!(x <= m)) return x;
    return m;
}

extern "C" void func_002DB940(float s, char *p, char *a) {
    float v[4] __attribute__((aligned(16)));
    float d;
    float *r = ((VC4 *)(p + *(unsigned char *)(p + 0x28A0) * 0x600 + 0x180))->f();
    QCOPY(v, r);
    *(float *)(p + 0x150) = s * func_001324E0(v);
    d = *(float *)(p + 0x10);
    if (d != 0.0f) {
        d = func_002DB940_m(d, 0.0001f);
        *(float *)(p + 0x150) = *(float *)(p + 0x150) / d;
    }
    *(float *)(p + 0x154) = 0.0f;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131BA0(a));
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131C20(a));
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x64) < -70.0f) {
        *(float *)(p + 0x64) = -70.0f;
    }
}

class V68 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual float f();
};

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

extern "C" void func_002FD140(char *p, char *h, V68 *o) {
    float v[4] __attribute__((aligned(16)));
    float s;
    if (h != 0 && o != 0 && *(signed char *)(h + 2) == 0 && *(unsigned char *)(p + 0x821) == 0) {
        s = *(float *)(h + 4) * o->f();
        if (*(float *)(p + 0x844) < 300.0f) {
            *(float *)(p + 0x844) = func_0034C160(*(float *)(p + 0x844), 301.0f, s);
            if (*(float *)(p + 0x844) > 100.0f) {
                *(float *)(p + 0x848) = func_0034C160(*(float *)(p + 0x848), 201.0f, s);
            }
        } else {
            *(float *)(p + 0x84C) = func_0034C160(*(float *)(p + 0x84C), 561.0f, s);
        }
        *(float *)(p + 0x834) = 120.0f;
        *(unsigned char *)(p + 0x823) = 0;
        func_002FD5F0(p);
        func_002FD660(p);
        func_002FDDD0(p, 3);
        GETPOS(v, p + 0x560);
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0x14, (char *)v, 0x20, 0, 0);
    }
}

class V210 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62();virtual void d63();virtual void d64();virtual void d65();virtual void d66();virtual void d67();virtual void d68();virtual void d69();virtual void d70();virtual void d71();virtual void d72();virtual void d73();virtual void d74();virtual void d75();virtual void d76();virtual void d77();virtual void d78();virtual void d79();virtual void d80();virtual void d81();virtual void d82();virtual void d83();virtual void d84();virtual void d85();virtual void d86();virtual void d87();virtual void d88();virtual void d89();virtual void d90();virtual void d91();virtual void d92();virtual void d93();virtual void d94();virtual void d95();virtual void d96();virtual void d97();virtual void d98();virtual void d99();virtual void d100();virtual void d101();virtual void d102();virtual void d103();virtual void d104();virtual void d105();virtual void d106();virtual void d107();virtual void d108();virtual void d109();virtual void d110();virtual void d111();virtual void d112();virtual void d113();virtual void d114();virtual void d115();virtual void d116();virtual void d117();virtual void d118();virtual void d119();virtual void d120();virtual void d121();virtual void d122();virtual void d123();virtual void d124();virtual void d125();virtual void d126();virtual void d127();virtual void d128();virtual void d129(); virtual unsigned char f();
};

extern "C" unsigned char func_0048AEE0(class V210 *);
extern "C" unsigned char func_0038F250(class V210 *);
extern "C" void func_001A5C30(char *);
extern "C" void func_001A5D00(char *);
extern "C" int func_0022CBA0(char *);
extern "C" void func_0022CBB0(char *, char *);
extern "C" int func_0012B1A0(char *, char *);
extern "C" int func_002F6690(char *, char *, char *);
extern "C" float func_0022CD90(char *);
extern "C" int func_00383330(char *, char *, char *, float *);
extern "C" char D_005BCAC8[8];
extern "C" char D_005BCAD0[8];
extern "C" char D_005BCAD8[8];
extern "C" void func_00131700(char *, char *, char *);
extern "C" void func_00105230(char *, char *, char *);
extern "C" void func_001318E0(char *, char *, char *);
extern "C" void func_001AD100(char *);
extern "C" void func_004B7E60(char *);
extern "C" void func_004B74E0(char *);
extern "C" void func_004B7540(char *);
extern "C" void func_004B7550(char *);
extern "C" void func_004B77B0(char *);
extern "C" void func_004B77C0(char *);
extern "C" void func_004B7D90(char *);
extern "C" void func_00195E20(char *, char *);
extern "C" char D_005BE098[4];
extern "C" void func_002490F0(char *, int, int, int, int, int, float);
extern "C" void func_0021C7A0(char *, int);
extern "C" void func_0021C380(char *, int);
extern "C" int func_003330C0(char *, int);
extern "C" char *func_002F2EF0(char *, char *, float);
extern "C" void func_00332AE0(char *, int, float, float);
extern "C" void func_002DFFA0(char *, float);
extern "C" unsigned char func_00229C60(char *, char *, char *, float *);
extern "C" float func_00131B50(float);
extern "C" int func_002DAAB0(char *, float *, int, int);
extern "C" void func_0021CBB0(char *);
extern "C" int func_002DAA00(char *, char *);
extern "C" int func_002496D0(char *);
extern "C" void func_0021B790(char *, int);
extern "C" void func_002DBAA0(char *, int, float);
extern "C" void func_00493440(char *);
extern "C" void func_003B3E70(char *);
extern "C" void func_003C5370(char *);
extern "C" void func_002F2D30(char *, char *);
extern "C" char D_0056E660[];
extern "C" float D_0056E68C[];
extern "C" float D_0056E6A4[];
extern "C" int func_001F9A70(int, char *, float);
extern "C" int func_002F69A0(char *, char *, char *);
extern "C" void func_002F6D40(char *, char *, char *);
extern "C" int func_00482B80(char *, char *, char *);
extern "C" char D_005BDCC8[8];
extern "C" void func_0022CB30(char *);
extern "C" void func_0022CB50(char *, int);
extern "C" void func_0019D590(char *, char *);
extern "C" char D_005BB8A0[8];
extern "C" char D_005BB8A8[8];
extern "C" char D_005BB8B0[8];
extern "C" char D_0053F880[];
extern "C" char D_0053F890[];
extern "C" char D_0053F8A0[];
extern "C" char D_01C61820[];
extern "C" signed char D_00666717[];
extern "C" void func_001B6470(char *, int *);
extern "C" void func_001B6480(char *, int);
extern "C" void func_001B64C0(char *, int);
extern "C" void func_001B64D0(char *, short *);
extern "C" void func_001B6510(char *, int);
extern "C" void func_001B6520(char *, int);
extern "C" void func_001B6550(char *, int);
extern "C" void func_001B6630(char *, int);
extern "C" void func_00226A00(char *, int);
extern "C" void func_00225F30(char *, int);
extern "C" void func_0021CB50(char *, int);
extern "C" void func_0021CB60(char *, int);
extern "C" int D_01DFAB70[];
extern "C" void func_00131650(char *, char *);
extern "C" void func_0037E850(char *, int);
extern "C" char *func_00207470(int, int, char *);
extern "C" float D_005674B0[];
extern "C" float D_005674B4[];
extern "C" float D_00567560[];
extern "C" float D_00567564[];
extern "C" void func_003C0280(char *, int);
extern "C" void func_003C0110(char *, int, float);
extern "C" void func_003C0190(char *, char *, float);
extern "C" void func_003BE3F0(char *, float);
extern "C" int func_0034B800(float *, char *, short, int, float);
extern "C" void func_001A1E10(char *);
extern "C" void func_001A1E70(char *, int);
extern "C" void func_001A2D00(char *, int);
extern "C" void func_00320F30(char *, char *, int);
extern "C" int func_003F3830(char *);
extern "C" S430 D_005BD920;
extern "C" S430 D_005BD928;
extern "C" void func_002E0000(char *, unsigned char);
extern "C" void func_001FE710(char *, char *, float, float, float);
extern "C" void func_001A3370(char *, int);
extern "C" int D_00562740[];
extern "C" void func_002CB020(char *, int);
extern "C" float D_0059DC60[];
extern "C" void func_003023F0(char *);
extern "C" void func_0033A660(char *, int);
extern "C" void func_00335EF0(char *, int);
extern "C" float func_0034C190(float, float, float);
extern "C" void func_00132540(float *, char *, float);
extern "C" void func_0033A580(char *);
extern "C" float D_005BD9D4;
extern "C" void func_004396F0(char *, int);
extern "C" S42F D_005BD910;
extern "C" int func_0041D600(char *);
extern "C" void func_00131DF0(char *, char *, float *);
extern "C" int func_0041D6B0(char *, float);

extern "C" int func_0033DA60(V210 *p) {
    switch (*(signed char *)((char *)p + 0x46)) {
    case 0x1B:
    case 0x2B:
    case 0x1E:
    case 0x37:
    case 0x34:
    case 0x35:
    case 0x3A:
    case 0x2C:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x31:
    case 0x2A:
        return 0;
    case 0x1D:
        if (*(unsigned char *)((char *)p + 0x134D) == 1) return 0;
        break;
    case 0x20:
        if (func_0038F250(p) == 0) return 0;
        break;
    case 0x22:
        if (func_0048AEE0(p) == 0) return 0;
        break;
    case 0x1A:
        if (p->f() == 0) return 0;
        break;
    }
    return 1;
}

class Snd14 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void m14(unsigned int, int);
};

extern "C" void func_00377100(char *p, unsigned char on) {
    unsigned char i;
    char *q;
    if (on == 0) {
        *(unsigned char *)(p + 0x976) = 0;
        func_001A5C30(func_00279290(p + 0xC00));
        for (i = 0, q = p; i < 3; i++, q += 0x600) {
            func_001A5C30(func_00279290(q + 0x1200));
        }
        func_001A5C30(func_00279290(p + 0x2400));
        if (*(char **)(p + 0x910) != 0) {
            func_001A5C30(func_00279290(*(char **)(p + 0x910) + 0xC00));
            *(unsigned char *)(*(char **)(p + 0x910) + 0x976) = 0;
        }
    } else {
        ((Snd14 *)D_005BC1A8)->m14(0x80FFFFFF, 10);
        *(unsigned char *)(p + 0x976) = 1;
        func_001A5D00(func_00279290(p + 0xC00));
        {
            char *r;
            unsigned char j;
            for (j = 0, r = p; j < 3; j++, r += 0x600) {
                func_001A5D00(func_00279290(r + 0x1200));
            }
        }
        func_001A5D00(func_00279290(p + 0x2400));
        if (*(char **)(p + 0x910) != 0) {
            func_001A5D00(func_00279290(*(char **)(p + 0x910) + 0xC00));
            *(unsigned char *)(*(char **)(p + 0x910) + 0x976) = 1;
        }
    }
}

extern "C" int func_003831D0(char *a, char *b, char *s) {
    float f[2];
    char tok[40];
    struct {
        signed char c[4];
        char pad[0xC];
        float v[12];
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
    f[0] = 0.0f;
    f[1] = 0.0f;
    while (!(bool)func_0022CBA0(s)) {
        func_0022CBB0(s, tok);
        if (func_0012B1A0(tok, D_005BCAC8) == 0) {
            return func_00383330(a, b, (char *)&d, f);
        }
        if (func_002F6690((char *)&d, tok, s) == 0) {
            if (func_0012B1A0(tok, D_005BCAD0) == 0) {
                f[0] = func_0022CD90(s);
            } else if (func_0012B1A0(tok, D_005BCAD8) == 0) {
                f[1] = func_0022CD90(s);
            }
        }
    }
    return 0;
}

class VCC {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48(); virtual void f(char *);
};

static inline void func_00415D50_v(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

extern "C" void func_00415D50(char *p) {
    int i;
    for (i = 0; i < 7; i++) {
        ((VCC *)(p + i * 0x600 + 0x200))->f(p + 0x32B0);
    }
    if (*(unsigned char *)(p + 0x3310) == 1) {
        *(float *)(p + 0x3280) = -140.0f;
        *(float *)(p + 0x3284) = 0.0f;
        *(float *)(p + 0x3288) = 0.0f;
        *(float *)(p + 0x328C) = 1.0f;
        UNIT(p + 0x32B0);
        func_00131700(p + 0x32B0, p + 0x32B0, p + 0x3290);
        func_00105230(p + 0x32B0, p + 0x32B0, p + 0x3280);
        func_001318E0(p + 0x32B0, p + 0x32B0, p + 0x32A0);
        {
            char *m = p + 0x32B0;
            ((VCC *)(p + 0x2C00))->f(m);
        }
        func_00415D50_v((float *)(p + 0x3280), 0.0f, 0.0f, 0.0f, 1.0f);
        UNIT(p + 0x32B0);
        func_00131700(p + 0x32B0, p + 0x32B0, p + 0x3290);
        func_00105230(p + 0x32B0, p + 0x32B0, p + 0x3280);
        func_001318E0(p + 0x32B0, p + 0x32B0, p + 0x32A0);
    }
}

class V58 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19(); virtual void f(int, int, int, int);
};

extern "C" void func_00452820(char *p) {
    float m[16] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    {
        int a = *(int *)(p + 0x11F4);
        int b = *(int *)(p + 0x11F8);
        ((V58 *)(p + 0xDA0))->f(a, b, 0, 0);
    }
    *(unsigned char *)(p + 0x45) = 6;
    r[0] = *(float *)(p + 0x80) / 360.0f * 6.283185f;
    r[1] = *(float *)(p + 0x84) / 360.0f * 6.283185f;
    r[2] = *(float *)(p + 0x88) / 360.0f * 6.283185f;
    r[3] = 1.0f;
    t[0] = *(float *)(p + 0x50);
    t[1] = *(float *)(p + 0x54) - 300.0f;
    t[2] = *(float *)(p + 0x58);
    t[3] = 1.0f;
    s[3] = 1.0f;
    s[0] = 2.5f;
    s[1] = 2.5f;
    s[2] = 2.5f;
    UNIT(m);
    func_00131700((char *)m, (char *)m, (char *)r);
    func_00105230((char *)m, (char *)m, (char *)t);
    func_001318E0((char *)m, (char *)m, (char *)s);
    *(char **)(p + 0x1630) = func_00207480(2, 0xA0, (char *)m, 0x40);
    *(float *)(p + 0x1214) = 30.0f;
    *(unsigned int *)(p + 0xC) |= 0x40;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    (*(unsigned char *)(p + 4))++;
}

class O45 {
public:
    virtual void d0(); virtual int s0C(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void s28(int);
};

class V45 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void s6C(); virtual void s70(); virtual void d27(); virtual short s78(short, short); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41(); virtual void d42(); virtual void sB4(int);
    int m4; int m8; O45 *mC; char *m10; char x14[0x1C]; short m30; char x32[0x7E]; float mB0; char xB4; unsigned char mB5; char xB6[0xA]; short mC0; char xC2[2]; float mC4;
};

extern "C" void func_0045CF30(V45 *p) {
    switch (p->mB5) {
    case 0:
        p->s6C();
        p->s70();
        p->mC0 = p->s78(p->m30, *(short *)(p->m10 + 0x50)) / 16;
        p->mC4 = 16.0f;
        p->mC->s28(0x25);
        p->mB5 = 1;
    case 1:
        if (p->mC4 > 0.0f) {
            *(short *)(p->m10 + 0x50) += p->mC0 * p->mB0;
            p->mC4 -= p->mB0;
        }
        if (p->mC->s0C() != 0x25) {
            p->sB4(0x17);
        }
        break;
    }
}

extern "C" bool func_00252B90(char *p, unsigned char *oc, float *of, char *pos) {
    char *g = *(char **)((char *)D_005BE09C + 0x23C);
    float d;
    float t;
    bool r;
    float hi;
    float lo;
    if (g == 0) return false;
    d = func_00132470(g + 0x70, pos);
    r = false;
    hi = *(float *)(p + 0x124);
    if (d < hi) {
        r = true;
        lo = *(float *)(p + 0x128);
        if (!(d <= lo)) {
            *of = (d - lo) / (hi - lo);
            t = *of;
            *oc = (unsigned int)((float)(unsigned int)*(unsigned char *)(p + 0x12D) + t * (float)(*(unsigned char *)(p + 0x12C) - *(unsigned char *)(p + 0x12D)));
        } else {
            *of = 0.0f;
            *oc = *(unsigned char *)(p + 0x12D);
        }
    }
    return r;
}

static inline bool func_0034B6B0_h(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return false;
    return true;
}

extern "C" int func_0034B6B0(float h, float *pos, int x, char *o) {
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    int m = 0;
    if (func_0034B6B0_h()) {
        QCOPY(v, pos);
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if (o != 0) {
            switch (*(signed char *)(o + 0x45)) {
            case 0:
                m = 0x40;
                break;
            case 3:
                m = 0x10;
                break;
            case 2:
                m = 2;
                break;
            case 4:
                m = 0x20;
                break;
            }
        }
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, (char *)r, (char *)x, m) == 1 && pos[1] + h <= 10.0f + r[1]) {
            pos[1] = r[1];
            return 1;
        }
    }
    return 0;
}

extern "C" void func_00499AF0(V45 *p) {
    switch (p->mB5) {
    case 0:
        p->s6C();
        p->s70();
        p->mC0 = p->s78(p->m30, *(short *)(p->m10 + 0x50)) / 16;
        p->mC4 = 16.0f;
        p->mC->s28(0x25);
        p->mB5 = 1;
    case 1:
        if (p->mC4 > 0.0f) {
            *(short *)(p->m10 + 0x50) += p->mC0 * p->mB0;
            p->mC4 -= p->mB0;
        }
        if (p->mC->s0C() != 0x25) {
            p->sB4(0x17);
        }
        break;
    }
}

class VC8b {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47(); virtual void f(char *);
};

static inline unsigned char func_004B7190_a(char *o) {
    return (*(unsigned int *)(o + 0xA0) & 1) != 0;
}

static inline unsigned char func_004B7190_b(char *p) {
    return *(unsigned char *)(p + 0xA5C) == 1;
}

extern "C" void func_004B7190(char *p) {
    char *w = *(char **)(p + 0xAC0);
    func_001AD100(p);
    if (*(unsigned char *)(w + 0x2F3D) == 4) {
        func_001AD140(p);
        return;
    }
    func_004B7E60(p);
    switch (*(short *)(p + 0xA58)) {
    case 0:
        func_004B74E0(p);
        break;
    case 1:
        func_004B7540(p);
        break;
    case 2:
        func_004B7550(p);
        break;
    case 3:
        func_004B77B0(p);
        break;
    case 4:
        func_004B77C0(p);
        break;
    }
    if (func_004B7190_a(func_00279290(p + 0x1C0)) == 1) {
        func_004B7D90(p);
        ((VC8b *)(p + 0x1C0))->f(p + 0x170);
        if (func_004B7190_b(p) == 1) {
            func_0028C5C0(p + 0x7D0, 0, *(float *)(p + 0x10));
        }
        func_00195E20(D_005BE098, p);
    }
}

class V12C {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62();virtual void d63();virtual void d64();virtual void d65();virtual void d66();virtual void d67();virtual void d68();virtual void d69();virtual void d70();virtual void d71();virtual void d72(); virtual void f(float *);
};

extern "C" void func_002219D0(char *p) {
    float v[4] __attribute__((aligned(16)));
    V12C *o;
    char *e;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
    switch (*(unsigned char *)(p + 0x2904)) {
    case 1:
        func_002490F0(p, 0, 7, -1, 2, 3, -1.0f);
        func_0021C7A0(p, 0x10);
        break;
    case 3:
        func_002490F0(p, 0, 8, -1, 2, 3, -1.0f);
        func_0021C7A0(p, 0x10);
        break;
    }
    func_0021C380(p, 1);
    if ((unsigned char)func_003330C0(p + 0x3D90, 0x13B) == 1) {
        o = (V12C *)func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 10000.0f);
        if (o == 0) return;
        o->f(v);
        e = *(char **)(p + 0x283C);
        if (func_00132470((char *)v, p + 0x50) < *(float *)(e + 0x84)) {
            *(float *)(p + 0x3E98) = *(float *)(e + 0x90);
            func_00332AE0(p + 0x3D90, 0x13B, *(float *)(*(char **)(p + 0x283C) + 0x8C), *(float *)(*(char **)(p + 0x283C) + 0x88));
            func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x158));
        }
    }
    }
}

class V30 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9(); virtual void f(char *, char *);
};

class VB8 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43(); virtual void f(char *, char *);
};

static inline char *func_00229AF0_g(char *o) {
    return *(char **)(o + 0xC0);
}

static inline void func_00229AF0_h(unsigned int *f, unsigned int b, unsigned char k) {
    *f |= b << k;
}

static inline unsigned int func_00229AF0_t(unsigned int f, unsigned char k) {
    return (1 << k) & f;
}

extern "C" void func_00229AF0(char *a, char *p, char *q) {
    float v[4] __attribute__((aligned(16)));
    signed char c = *(signed char *)(*(char **)(p + 0xC0) + 2);
    for (; q != 0; q = *(char **)(q + 0x300)) {
        if (*(unsigned char *)q == 2 && p != q && func_00229AF0_g(p) != func_00229AF0_g(q) &&
            func_00229AF0_t(*(unsigned int *)(q + 0xC), c) != 0) {
            if (func_00229C60(a, p, q, v) != 0) {
                QCOPY(p + 0xB0, v);
                QCOPY(q + 0xB0, v);
                func_00229AF0_h((unsigned int *)(p + 8), 0x40, *(signed char *)(*(char **)(q + 0xC0) + 2));
                func_00229AF0_h((unsigned int *)(q + 8), 1, *(signed char *)(*(char **)(p + 0xC0) + 2));
                if (*(V30 **)(q + 0x2F4) != 0) {
                    (*(V30 **)(q + 0x2F4))->f(p, q);
                } else {
                    (*(VB8 **)(q + 0x2F0))->f(p, q);
                }
            }
        }
    }
}

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

extern "C" int func_002448D0(char *p) {
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

class V68b {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23(); virtual void f(int, char *);
};

#define VZERO20(d) __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(d) : "memory")

static inline char *func_00279AD0_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)((char *)(i * 4) + (int)t + 8);
    if (v == 0) return 0;
    return t + v;
}

static inline char *func_00279AD0_g(char *p) {
    if (*(unsigned char *)(p + 0x4AC) != 0 && 0 < *(int *)(p + 0x410)) return **(char ***)(p + 0x414);
    return 0;
}

extern "C" void func_00279AD0(char *p, int x, int i, int a3, int t0, char *t) {
    if (*(unsigned char *)(p + 0xB) == 0) return;
    if (t == 0) t = *(char **)(p + 0x10);
    ((V68b *)(p + 0x400))->f(x, func_00279AD0_t(t, i));
    if (x != 0) return;
    *(float *)(p + 0x5A0) = *(float *)(func_00279AD0_g(p) + 0x10C);
    *(float *)(p + 0x5A4) = *(float *)(func_00279AD0_g(p) + 0x120);
    *(float *)(p + 0x5A8) = *(float *)(func_00279AD0_g(p) + 0x134);
    *(float *)(p + 0x5AC) = 1.0f;
    VZERO20(p + 0x5B0);
}

class V68c {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23(); virtual void f(int, char *);
};

static inline char *func_0027AE30_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)((char *)(i * 4) + (int)t + 8);
    if (v == 0) return 0;
    return t + v;
}

static inline char *func_0027AE30_g(char *p) {
    if (*(unsigned char *)(p + 0x31C) != 0 && 0 < *(int *)(p + 0x280)) return **(char ***)(p + 0x284);
    return 0;
}

extern "C" void func_0027AE30(char *p, int x, int i, int a3, int t0, char *t) {
    if (*(unsigned char *)(p + 0xB) == 0) return;
    if (t == 0) t = *(char **)(p + 0x10);
    ((V68c *)(p + 0x270))->f(x, func_0027AE30_t(t, i));
    if (x != 0) return;
    *(float *)(p + 0x410) = *(float *)(func_0027AE30_g(p) + 0x10C);
    *(float *)(p + 0x414) = *(float *)(func_0027AE30_g(p) + 0x120);
    *(float *)(p + 0x418) = *(float *)(func_0027AE30_g(p) + 0x134);
    *(float *)(p + 0x41C) = 1.0f;
    VZERO20(p + 0x420);
}

extern "C" void func_002E0C90(char *p) {
    unsigned char r = 1;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p);
        if (*(char **)(p + 0x2AE8) != 0) {
            r = (unsigned char)func_002DAA00(p, *(char **)(p + 0x2AE8) + 0x10);
        }
        if (r) {
            func_002490F0(p, 1, 2, -1, 1, 0, -1.0f);
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        } else {
            func_002490F0(p, 1, 3, -1, 1, 0, -1.0f);
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4) + 0x8000;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        }
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned short *)(p + 0x24C6) == 0x102) {
                *(short *)(p + 0x2856) = 5;
            } else {
                *(short *)(p + 0x2856) = 9;
            }
            func_0021B790(p, *(unsigned char *)(p + 0x2856));
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

class V64b {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22(); virtual void f(char *, int, int);
};

static inline bool func_00376B80_f(char *p, unsigned int m) {
    return (*(unsigned int *)(p + 0x8FC) & m) != 0;
}

static inline char *func_00376B80_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)((char *)(i * 4) + (int)t + 8);
    if (v == 0) return 0;
    return t + v;
}

extern "C" void func_00376B80(char *p, int k) {
    unsigned int i;
    char *q;
    char *o;
    if (k == -1) k = *(unsigned char *)(p + 5);
    if (*(unsigned char *)(p + 0x8EA) == k) return;
    func_0024DA80(p + 0x2B20, 0, k);
    if (*(char **)(p + 0x910) != 0) {
        if (func_00376B80_f(p, 0x10) == true) {
            *(unsigned int *)(p + 0x8FC) |= 0x20;
        }
        if (func_00376B80_f(p, 0x20) == false) {
            func_0024DA80(*(char **)(p + 0x910) + 0x2B20, 0, k);
            o = *(char **)(p + 0x910);
            ((V64b *)(o + 0x3850))->f(func_00376B80_t(*(char **)(o + 0xA08), k), 0, 0);
            func_00493440(*(char **)(p + 0x910));
        }
    }
    for (i = 0, q = p; i < 3; i++, q += 0xD0) {
        func_0024DA80(q + 0x2BF0, 0, 0);
    }
    func_0024DA80(p + 0x2E60, 0, 0);
    *(unsigned char *)(p + 0x8EA) = k;
}

class VB4c {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42(); virtual unsigned int f();
};

class VC8c {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47(); virtual void f(char *);
};

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline unsigned char func_003AEC70_h(unsigned char c) {
    if (c == 1) return 1;
    return 0;
}

extern "C" void func_003AEC70(char *p) {
    float v[4] __attribute__((aligned(16)));
    unsigned int n;
    unsigned int i;
    if (func_003AEC70_h(*(unsigned char *)(p + 0x21C5)) == 1) {
        QCOPYR(v, p + 0x2070);
        v[3] = 1.0f;
        VADDIP(p + 0x50, v);
        QCOPY(p + 0xE0, v);
        QCOPYR(p + 0xF0, p + 0x20B0);
        n = ((VB4c *)func_002792A0(p + 0x700))->f();
        for (i = 0; i < n; i++) {
            if (*(char **)((char *)(i * 4) + (int)p + 0x664) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x664) + 0x104) != 0) {
                VADDIP(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x664) + 0x104) + 0x30, v);
                *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x664) + 0x104) + 0x3C) = 1.0f;
            }
        }
    }
    ((VC8c *)(p + 0xD00))->f(p + 0x440);
    func_003B3E70(p);
    ((VC8c *)(p + 0x1300))->f(p + 0x2140);
}

class V1F0 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62();virtual void d63();virtual void d64();virtual void d65();virtual void d66();virtual void d67();virtual void d68();virtual void d69();virtual void d70();virtual void d71();virtual void d72();virtual void d73();virtual void d74();virtual void d75();virtual void d76();virtual void d77();virtual void d78();virtual void d79();virtual void d80();virtual void d81();virtual void d82();virtual void d83();virtual void d84();virtual void d85();virtual void d86();virtual void d87();virtual void d88();virtual void d89();virtual void d90();virtual void d91();virtual void d92();virtual void d93();virtual void d94();virtual void d95();virtual void d96();virtual void d97();virtual void d98();virtual void d99();virtual void d100();virtual void d101();virtual void d102();virtual void d103();virtual void d104();virtual void d105();virtual void d106();virtual void d107();virtual void d108();virtual void d109();virtual void d110();virtual void d111();virtual void d112();virtual void d113();virtual void d114();virtual void d115();virtual void d116();virtual void d117(); virtual float g(unsigned int); virtual void e119();virtual void e120();virtual void e121(); virtual void f(int, char *);
};

extern "C" void func_003C5C40(V1F0 *o) {
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

static inline int func_003F7A70_g(char *h) {
    return *(int *)(h + 8);
}

extern "C" void func_003F7A70(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    *(short *)(p + 0x90) = *(short *)(p + 0x484);
    *(float *)(p + 0x84) = (float)*(short *)(p + 0x90) / 65536.0f * 6.283185f;
    QCOPYR(v, p + 0xE00);
    v[3] = 1.0f;
    VADDIP(p + 0x50, v);
    for (i = 0; i < 14; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x504) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x504) + 0x104) != 0) {
            VADDIP(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x504) + 0x104) + 0x30, v);
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x504) + 0x104) + 0x3C) = 1.0f;
        }
    }
    QCOPY(p + 0xE0, v);
    QCOPYR(p + 0xF0, p + 0xE40);
    if ((unsigned char)func_001F9A70(func_003F7A70_g(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548), p + 0x50, 1000.0f) == 0) {
        func_001AD140(p);
    }
}

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

extern "C" void func_0019D410(char *p) {
    char r[16];
    char tok[64];
    char *q;
    int st;
    func_0022CB30(r);
    q = r;
    st = 0;
    func_0022CB50(q, *(int *)(p + 0x48));
    func_0022CBB0(q, tok);
    if (func_0012B1A0(tok, D_005BB8A0) != 0) return;
    while (!(bool)func_0022CBA0(q)) {
        func_0022CBB0(q, tok);
        switch (st) {
        case 0:
            if (func_0012B1A0(tok, D_005BB8A8) == 0) st = 1;
            break;
        case 1:
            if (func_0012B1A0(tok, D_0053F880) == 0) {
                st = 100;
            } else if (func_0012B1A0(tok, D_0053F890) == 0) {
                st = 200;
            }
            break;
        case 100:
            if (func_0012B1A0(tok, D_0053F8A0) == 0) {
                st = 0;
            } else {
                if (func_0012B1A0(tok, D_005BB8B0) == 0) {
                    func_0019D590(p, q);
                } else {
                    return;
                }
            }
            break;
        case 200:
            break;
        }
    }
}

extern "C" void func_001ECBF0(char *) {
    short s[2];
    int r[7];
    int c;
    int col;
    bool pos;
    int i;
    c = D_00666717[0];
    r[0] = 0;
    r[1] = 0;
    r[2] = 0xFFFFF3;
    pos = true;
    if (c < 0) pos = false;
    c = (c < 0) ? -c : c;
    if ((unsigned int)c > 0x58) c = 0x57;
    col = (c << 16) + (c + (c << 8)) + 0x80000000;
    for (i = 0; i < 8; i++) {
        r[0] = (int)((float)i * 64.0f);
        s[0] = 0x40;
        s[1] = 0x100;
        func_001B6470(D_01C61820, r);
        func_001B6480(D_01C61820, 0);
        func_001B64C0(D_01C61820, col);
        func_001B64D0(D_01C61820, s);
        func_001B6510(D_01C61820, 5);
        func_001B6520(D_01C61820, 10);
        if (pos) {
            func_001B6550(D_01C61820, 2);
        } else {
            func_001B6550(D_01C61820, 3);
        }
        func_001B6630(D_01C61820, 0);
    }
}

class V164 {
public:
    virtual void d8();virtual void dC();virtual void d10();virtual void d14();virtual void d18();virtual void d1C();virtual void d20();virtual void d24();virtual void d28();virtual void d2C();virtual void d30();virtual void d34();virtual void d38();virtual void d3C();virtual void d40();virtual void d44();virtual void d48();virtual void d4C();virtual void d50();virtual void d54();virtual void d58();virtual void d5C();virtual void d60();virtual void d64();virtual void d68();virtual void d6C();virtual void d70();virtual void d74();virtual void d78();virtual void d7C();virtual void d80();virtual void d84();virtual void d88();virtual void d8C();virtual void d90();virtual void d94();virtual void d98();virtual void d9C();virtual void dA0();virtual void dA4();virtual void dA8();virtual void dAC();virtual void dB0();virtual void dB4();virtual void dB8();virtual void dBC();virtual void dC0();virtual void dC4();virtual void dC8();virtual void dCC();virtual void dD0();virtual void dD4();virtual void dD8();virtual void dDC();virtual void dE0();virtual void dE4();virtual void dE8();virtual void dEC();virtual void dF0();virtual void dF4();virtual void dF8();virtual void dFC();virtual void d100();virtual void d104();virtual void d108();virtual void d10C();virtual void d110();virtual void d114();virtual void d118();virtual void d11C();virtual void d120();virtual void d124();virtual void d128();virtual void d12C();virtual void d130();virtual void d134();virtual void d138();virtual void d13C();virtual void d140();virtual void d144();virtual void d148();virtual void d14C();virtual void d150();virtual void d154();virtual void d158();virtual void d15C();virtual void d160();
    virtual void f164();
};

static inline void setbit(int k) {
    int w = k / 32;
    D_01DFAB70[w] |= 1 << (k - w * 32);
}

extern "C" void func_0021CDD0(char *p, float *pos, short a, unsigned short k) {
    QCOPY(p + 0x50, pos);
    *(short *)(p + 0x90) = a;
    *(unsigned short *)(p + 0x2856) = k;
    ((V164 *)p)->f164();
    switch (k) {
    case 0x64:
        *(unsigned char *)(p + 0x28AA) = 0;
        *(unsigned char *)(p + 0x28AE) = 0;
        *(float *)(p + 0x28D0) = *(float *)(*(char **)(p + 0x283C) + 0x1F0);
        func_00226A00(p, 0);
        func_00225F30(p, 0);
        setbit(0x3B);
        func_0021C7A0(p, 0x21);
        break;
    case 0x65:
        func_0021C7A0(p, 0x2C);
        func_0021CB50(p, 2);
        func_0021CB60(p, 1);
        *(unsigned char *)(p + 0x284C) = k;
        break;
    default:
        if (*(int *)(p + 0x24C0) == 0) {
            func_002490F0(p, 0, k, -1, 0, 0, -1.0f);
        } else {
            func_002490F0(p, 0x21, k, -1, 0, 0, -1.0f);
        }
        func_0021C7A0(p, 0x2C);
        *(unsigned char *)(p + 0x284C) = 0;
        break;
    }
}

class Ls2B4 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual int mB4();
};

static inline char *list_item2(char *o, int i) {
    char *r;
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) {
        r = *(char **)(*(char **)(o + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

extern "C" void func_0022C520(int key, char *o, char *m1, char *m2) {
    float d[16] __attribute__((aligned(16)));
    float c[16] __attribute__((aligned(16)));
    float b[16] __attribute__((aligned(16)));
    float a[16] __attribute__((aligned(16)));
    int i;
    func_00105300((char *)a, m1);
    func_00105300((char *)b, m2);
    func_00131650((char *)a, (char *)a);
    func_00131650((char *)(a + 4), (char *)(a + 4));
    func_00131650((char *)(a + 8), (char *)(a + 8));
    func_00131650((char *)b, (char *)b);
    func_00131650((char *)(b + 4), (char *)(b + 4));
    func_00131650((char *)(b + 8), (char *)(b + 8));
    func_00104E78(c, (char *)b);
    func_00104C00((char *)d, (char *)a, (char *)c);
    for (i = 0; i < ((Ls2B4 *)func_002792A0(o))->mB4(); i++) {
        char *e = list_item2(func_002792A0(o), i);
        if (*(int *)(e + 0xFC) == key) {
            func_00104C00(e + 0xA0, (char *)d, e + 0xA0);
        }
    }
}

class Ls2C8 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void mC8(char *);
};

extern "C" void func_0022C6A0(char *s, char *o, char *m, char *out, int n) {
    int i;
    *(unsigned char *)(s + 0xC) = 0;
    ((Ls2C8 *)o)->mC8(m);
    for (i = 0; i < ((Ls2B4 *)func_002792A0(o))->mB4(); i++) {
        char *e = list_item2(func_002792A0(o), i);
        *(int *)(e + 0x1D0) = 0;
        *(int *)(e + 0x1D4) = 0;
        *(int *)(e + 0x1D8) = 0;
        func_00105300(e + 0xA0, *(char **)(e + 0x104));
    }
    *(unsigned char *)(s + 0xC) = 1;
    for (i = 0; i < n; i++) {
        ((Ls2C8 *)o)->mC8(m);
    }
    if (out) {
        func_00105300(out, m);
    }
}

class S37A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual float m7C();
    virtual int m80(float);
};

class O37A {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8();
    virtual void m2FC(int);
};

extern "C" void func_0037A690(char *p) {
    char buf[0x40];
    int s;
    int i;
    char *e;
    s = ((S37A *)(p + 0x130))->m80(((S37A *)(p + 0x130))->m7C());
    if (*(int *)(p + 0x6E40) != 0) {
        func_0037E850(p, 0);
    }
    if (*(int *)(p + 0x760C) == 0 || *(int *)(p + 0x760C) == 1) {
        ((O37A *)p)->m2FC(6);
        *(float *)(p + 0x77E8) = *(float *)((char *)(s * 8) + (int)(D_005674B0 + *(int *)(p + 0x77CC) * 14));
        *(float *)(p + 0x77EC) = *(float *)((char *)(s * 8) + (int)(D_005674B4 + *(int *)(p + 0x77CC) * 14));
        *(short *)(p + 0x6668) = 0;
        *(short *)(p + 0x6E68) = 0x200;
        for (i = 1; i < *(int *)(p + 0x6E80); i++) {
            if (*(int *)(p + i * 4 + 0x6640) == 0) {
                *(char **)(p + i * 4 + 0x6640) = func_00207470(3, 0x341, buf);
                e = *(char **)(p + i * 4 + 0x6640);
                if (e != 0) {
                    *(char **)(e + 0x90) = p + i * 0x40 + 0x66B0;
                    *(unsigned char *)(e + 0x9A) = 0;
                    *(unsigned char *)(*(char **)(p + i * 4 + 0x6640) + 0x3A) = 1;
                }
            }
        }
    }
}

class S37B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual float m7C();
    virtual int m80(float);
};

class O37B {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8();
    virtual void m2FC(int);
};

extern "C" void func_0037AA10(char *p) {
    char buf[0x40];
    int s;
    int i;
    char *e;
    s = ((S37B *)(p + 0x130))->m80(((S37B *)(p + 0x130))->m7C());
    if (*(int *)(p + 0x6E40) != 0) {
        func_0037E850(p, 0);
    }
    if (*(int *)(p + 0x760C) == 0 || *(int *)(p + 0x760C) == 1) {
        ((O37B *)p)->m2FC(8);
        *(float *)(p + 0x77E8) = *(float *)((char *)(s * 8) + (int)(D_00567560 + *(int *)(p + 0x77CC) * 14));
        *(float *)(p + 0x77EC) = *(float *)((char *)(s * 8) + (int)(D_00567564 + *(int *)(p + 0x77CC) * 14));
        *(short *)(p + 0x6668) = 0;
        *(float *)(p + 0x6E6C) = 5.0f;
        *(short *)(p + 0x6E68) = 0x200;
        for (i = 1; i < *(int *)(p + 0x6E80); i++) {
            if (*(int *)(p + i * 4 + 0x6640) == 0) {
                *(char **)(p + i * 4 + 0x6640) = func_00207470(3, 0x341, buf);
                e = *(char **)(p + i * 4 + 0x6640);
                if (e != 0) {
                    *(char **)(e + 0x90) = p + i * 0x40 + 0x66B0;
                    *(unsigned char *)(e + 0x9A) = 0;
                    *(unsigned char *)(*(char **)(p + i * 4 + 0x6640) + 0x3A) = 1;
                }
            }
        }
    }
}

class S3BE {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual int m88();
};

class O3BE {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC();
    virtual void m2F0(int);
};

extern "C" void func_003BEFC0(char *p) {
    float v[4] __attribute__((aligned(16)));
    *(float *)(p + 0x1668) = 1.0f;
    *(unsigned char *)(p + 0x1BC6) = 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        func_003C0280(p, 0x100);
        func_003C0110(p, 0x200, 5.0f);
        ((S3BE *)(p + 0x130))->m6C();
        func_003C0190(p, p + 0x150, 200.0f);
        break;
    }
    *(float *)(p + 0x168) = *(float *)(p + 0x168) + *(float *)(p + 0x10);
    if (((S3BE *)(p + 0x130))->m88() != 0) {
        func_003BE3F0(p, 3.0f);
    }
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    if ((unsigned char)func_0034B800(v, p + 0x50, (short)(int)*(short *)(p + 0x90), 0x4000, 500.0f) == 1 &&
        !(v[1] <= *(float *)(p + 0x54) + 100.0f) && v[1] < *(float *)(p + 0x54) + 2000.0f) {
        ((O3BE *)p)->m2F0(0x1D);
    }
}

class O3BF {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300();
    virtual void m304(int);
};

extern "C" void func_003BF840(char *p) {
    unsigned char c;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
        *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
        func_001A1E10(func_00279290(p + 0x9C0));
        func_001A1E70(func_00279290(p + 0xFC0), 0);
        func_001A1E70(func_00279290(p + 0xFC0), 1);
        *(float *)(p + 0x1BB4) = 1.0f;
        *(float *)(p + 0x1BB8) = 1.0f;
        *(unsigned char *)(p + 0x1BC8) = 0;
        c = *(unsigned char *)(p + 0x1BC8);
        func_001A2D00(func_00279290(p + 0x9C0), (c << 24) | (c << 16) | (c << 8) | c);
    case 1:
        if (*(unsigned char *)(p + 0x1BC8) < 0xFF) {
            *(unsigned char *)(p + 0x1BC8) = *(unsigned char *)(p + 0x1BC8) + 1;
        }
        c = *(unsigned char *)(p + 0x1BC8);
        func_001A2D00(func_00279290(p + 0x9C0), (c << 24) | (c << 16) | (c << 8) | c);
        if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
            func_001A1E10(func_00279290(p + 0xFC0));
            ((O3BF *)p)->m304(0xD);
            func_001A2D00(func_00279290(p + 0x9C0), 0xFFFFFF);
        }
        break;
    }
}

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

class O3E5 {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC();
    virtual void m2F0(int);
    virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300(); virtual void d304(); virtual void d308(); virtual void d30C(); virtual void d310();
    virtual void m314(char *, char *);
};

extern "C" void func_003E5550(char *p, char *a, char *b) {
    if (*(unsigned char *)(p + 0x14D) != 3) {
        *(signed char *)(p + 0x3B94) = *(signed char *)(a + 0x0);
        *(signed char *)(p + 0x3B95) = *(signed char *)(a + 0x1);
        *(signed char *)(p + 0x3B96) = *(signed char *)(a + 0x2);
        *(float *)(p + 0x3B98) = *(float *)(a + 0x4);
        *(float *)(p + 0x3B9C) = *(float *)(a + 0x8);
        *(float *)(p + 0x3BA0) = *(float *)(a + 0xC);
        *(float *)(p + 0x3BA4) = *(float *)(a + 0x10);
        *(float *)(p + 0x3BA8) = *(float *)(a + 0x14);
        *(signed char *)(p + 0x3BAC) = *(signed char *)(a + 0x18);
        *(float *)(p + 0x3BB0) = *(float *)(a + 0x1C);
        *(signed char *)(p + 0x3BB4) = *(signed char *)(a + 0x20);
        *(float *)(p + 0x3BB8) = *(float *)(a + 0x24);
        *(float *)(p + 0x3BBC) = *(float *)(a + 0x28);
        *(float *)(p + 0x3BC0) = *(float *)(a + 0x2C);
        *(unsigned char *)(p + 0x3BC4) = *(unsigned char *)(a + 0x30);
        *(int *)(p + 0x3BC8) = *(int *)(a + 0x34);
        *(float *)(p + 0x3BCC) = *(float *)(a + 0x38);
        *(signed char *)(p + 0x3BD0) = *(signed char *)(a + 0x3C);
        *(signed char *)(p + 0x3BD1) = *(signed char *)(a + 0x3D);
        *(signed char *)(p + 0x3BD2) = *(signed char *)(a + 0x3E);
        func_00320F30(p + 0x130, a, (int)b);
        *(float *)(p + 0x3A98) = 10.0f;
        *(float *)(p + 0x3990) = 5.0f;
        *(unsigned char *)(p + 0x394C) = 1;
        *(float *)(p + 0x39F0) = 5.0f;
        *(unsigned char *)(p + 0x39AC) = 1;
        if (*(unsigned char *)(p + 0x35E0) == 0 && (unsigned char)func_003F3830(p) == 0 &&
            *(unsigned char *)(p + 0x3435) == 0 && *(unsigned char *)(p + 0x342C) != 0x10) {
            ((O3E5 *)p)->m2F0(0x6C);
        }
        ((O3E5 *)p)->m314(a, b);
    }
}

class V430 {
public:
    virtual void d8();
    virtual void mC(char *, char *, char *);
};

extern "C" int func_00430C20(char *p, char *a, char *b, char *c, unsigned char f0, unsigned char f1) {
    S430 x = D_005BD920;
    S430 y = D_005BD928;
    unsigned char k;
    if (*(unsigned char *)(p + 0x28AD) == 1) return 1;
    if (!(*(float *)(p + 0x2AF0) <= 0.0f)) return 1;
    if (f1 == 0) {
        if (f0 == 0) {
            k = x.c[*(unsigned char *)(p + 0x3C74)];
        } else {
            k = x.c[*(unsigned char *)(p + 0x3C74) + 3];
        }
        if (*(unsigned char *)(p + 0x28AE) == 1) {
            k = y.c[*(signed char *)(p + 0x28A8)];
        }
    } else if (*(unsigned char *)(p + 0x28AE) == 0) {
        k = 0x11;
    } else {
        k = 0x12;
    }
    func_002E0000(p, k);
    ((V430 *)(p + 0x2A20))->mC(a, b, c);
    func_002E0000(p, *(unsigned char *)(p + 0x2AE0));
    if (*(float *)(p + 0x2AD4) <= 0.0f || *(unsigned char *)(p + 0x28AC) == 1) return 0;
    return 1;
}

class W1FE {
public:
    char pad[0xC];
    unsigned char on;
    virtual void m8(char *, char *, float, float, float);
};

static inline void func_001FE270_d(char *e, char *a, float x, float y, float z) {
    W1FE *o = *(W1FE **)(e + 0xFC);
    if (o == 0) {
        func_001FE710(e, a, x, y, z);
    } else if (o->on != 0) {
        o->m8(e, a, x, y, z);
    } else {
        func_001FE710(e, a, x, y, z);
    }
}

extern "C" void func_001FE270(char *p, char *a) {
    int i;
    char *e;
    char *q;
    W1FE *o;
    float x;
    float y;
    float z;
    if (*(unsigned char *)(p + 0x192) != 0 && *(unsigned char *)(p + 0xAC) != 0) {
        e = (*(char ***)(p + 0x14))[**(unsigned char **)(p + 4)];
        func_001FE270_d(e, a, 1.0f, 1.0f, 1.0f);
        for (i = 1; i < *(int *)(p + 0x10); i++) {
            e = (*(char ***)(p + 0x14))[(*(unsigned char **)(p + 4))[i]];
            q = *(char **)(e + 0xF0);
            x = *(float *)(q + 0xE0);
            y = *(float *)(q + 0xE4);
            z = *(float *)(q + 0xE8);
            o = *(W1FE **)(e + 0xFC);
            if (o == 0) {
                func_001FE710(e, *(char **)(q + 0x104), x, y, z);
            } else if (o->on != 0) {
                o->m8(e, *(char **)(q + 0x104), x, y, z);
            } else {
                func_001FE710(e, *(char **)(q + 0x104), x, y, z);
            }
        }
    }
}

class V279 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual int m6C();
    virtual int m70();
    virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90();
    virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void dB4();
    virtual int mB8(int);
};

#define VSUB3I(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

static inline char *list_item279(char *o, int i) {
    char *r;
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) {
        r = *(char **)(*(char **)(o + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

extern "C" int func_00279C40(char *p) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x400))->m6C();
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x400))->mB8(0) == 1) {
        VZERO20(p + 0x5A0);
    }
    v[0] = *(float *)(list_item279(p + 0x400, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x400, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x400, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x5B0, v, p + 0x5A0);
    QCOPY(p + 0x5A0, v);
    return r;
}

extern "C" int func_00279DD0(char *p, int k) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x400))->m70();
    if (k == 0) {
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x400))->mB8(k) == 1) {
        VZERO20(p + 0x5A0);
    }
    v[0] = *(float *)(list_item279(p + 0x400, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x400, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x400, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x5B0, v, p + 0x5A0);
    QCOPY(p + 0x5A0, v);
    }
    return r;
}

extern "C" int func_0027AFA0(char *p) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x270))->m6C();
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x270))->mB8(0) == 1) {
        VZERO20(p + 0x410);
    }
    v[0] = *(float *)(list_item279(p + 0x270, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x270, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x270, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x420, v, p + 0x410);
    QCOPY(p + 0x410, v);
    return r;
}

extern "C" int func_0027B130(char *p, int k) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x270))->m70();
    if (k == 0) {
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x270))->mB8(k) == 1) {
        VZERO20(p + 0x410);
    }
    v[0] = *(float *)(list_item279(p + 0x270, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x270, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x270, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x420, v, p + 0x410);
    QCOPY(p + 0x410, v);
    }
    return r;
}

class V285 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual int m2C(int, int);
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC();
    virtual void mB0(int, char *);
};

static inline void func_00285560_s(char *p, char *o) {
    float b;
    float a;
    char *q;
    *(float *)(p + 0xEC0) = 80.0f;
    *(float *)(p + 0xEC4) = 20.0f;
    *(float *)(p + 0xEC8) = 10.0f;
    func_001A2180(func_00279290(o), 0x80, 1);
    func_001A3370(func_00279290(o), 1);
    a = *(float *)(p + 0xEC8);
    b = *(float *)(p + 0xEC4);
    q = func_00279290(o);
    *(float *)(q + 0x190) = b;
    *(float *)(q + 0x194) = a;
}

extern "C" void func_00285560(char *p) {
    *(int *)(p + 0xECC) = *(int *)(p + 0x20C);
    if (((V285 *)(p + 0x2C0))->m2C(*(int *)(p + 0x210), *(int *)(p + 0x214)) == 0) {
        func_001AD140(p);
        return;
    }
    ((V285 *)(p + 0x2C0))->mB0(*(int *)(p + 0x218), p + 0x228);
    func_00285560_s(p, p + 0x2C0);
    if (((V285 *)(p + 0x8C0))->m2C(*(int *)(p + 0x220), *(int *)(p + 0x214)) == 0) {
        func_001AD140(p);
        return;
    }
    ((V285 *)(p + 0x8C0))->mB0(*(int *)(p + 0x218), p + 0x284);
    func_00285560_s(p, p + 0x8C0);
    *(float *)(p + 0xEC0) = 72.0f;
}

static inline bool func_002CF870_h() {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return false;
    return true;
}

extern "C" int func_002CF870(char *p) {
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

class O320 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void m68(char *, int);
    virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88();
    virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0();
    virtual void mA4(int);
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void mB4(int);
};

class C320 {
public:
    virtual void d8(); virtual void dC();
    virtual int m10();
};

extern "C" void func_00320710(char *p, char *a, int b) {
    if (*(unsigned char *)(p + 0x1D) != 3) {
        ((O320 *)p)->mA4(*(unsigned char *)(p + 0x1D));
        *(int *)(p + 0x18) = b;
        *(signed char *)(p + 0x3C) = *(signed char *)(a + 0x0);
        *(signed char *)(p + 0x3D) = *(signed char *)(a + 0x1);
        *(signed char *)(p + 0x3E) = *(signed char *)(a + 0x2);
        *(float *)(p + 0x40) = *(float *)(a + 0x4);
        *(float *)(p + 0x44) = *(float *)(a + 0x8);
        *(float *)(p + 0x48) = *(float *)(a + 0xC);
        *(float *)(p + 0x4C) = *(float *)(a + 0x10);
        *(float *)(p + 0x50) = *(float *)(a + 0x14);
        *(signed char *)(p + 0x54) = *(signed char *)(a + 0x18);
        *(float *)(p + 0x58) = *(float *)(a + 0x1C);
        *(signed char *)(p + 0x5C) = *(signed char *)(a + 0x20);
        *(float *)(p + 0x60) = *(float *)(a + 0x24);
        *(float *)(p + 0x64) = *(float *)(a + 0x28);
        *(float *)(p + 0x68) = *(float *)(a + 0x2C);
        *(unsigned char *)(p + 0x6C) = *(unsigned char *)(a + 0x30);
        *(int *)(p + 0x70) = *(int *)(a + 0x34);
        *(float *)(p + 0x74) = *(float *)(a + 0x38);
        *(signed char *)(p + 0x78) = *(signed char *)(a + 0x3C);
        *(signed char *)(p + 0x79) = *(signed char *)(a + 0x3D);
        *(signed char *)(p + 0x7A) = *(signed char *)(a + 0x3E);
        switch ((unsigned char)(*(C320 **)(p + 0xC))->m10()) {
        case 0:
            ((O320 *)p)->mB4(0x14);
            break;
        case 1:
            ((O320 *)p)->mB4(0x15);
            break;
        }
        *(unsigned char *)(p + 0x1D) = 3;
        ((O320 *)p)->m68(a, b);
    }
}

class V333 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual int m2C(char *, char *);
};

class W333 {
public:
    virtual void d8();
    virtual void mC(char *, char *);
};

static inline char *func_00333AB0_s(char *h, unsigned int i) {
    int o;
    if (*(unsigned int *)(h + 4) <= i) return 0;
    o = *(int *)(h + 8 + i * 4);
    if (o == 0) return 0;
    return h + o;
}

extern "C" int func_00333AB0(char *p) {
    char *a = *(char **)(p + 0x4D0);
    char *s;
    char *t;
    char *u;
    if (**(unsigned short **)(a + 8) == 0) {
        s = func_00333AB0_s(*(char **)(a + 0xC), 1);
    } else {
        s = *(char **)(a + 0xC);
    }
    if (**(unsigned short **)(a + 8) == 0) {
        t = func_00333AB0_s(*(char **)(a + 0xC), 0);
    } else {
        t = *(char **)(a + 0xC);
    }
    if ((unsigned char)((V333 *)(p + 0x740))->m2C(s, t) == 0) return 0;
    a = *(char **)(p + 0x4D0);
    if (**(unsigned short **)(a + 8) == 0) {
        u = func_00333AB0_s(*(char **)(a + 0xC), 0xB);
    } else {
        u = *(char **)(a + 0xC);
    }
    ((W333 *)(p + 0xD40))->mC(func_00279290(p + 0x740), u);
    return 1;
}

class O33A {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC();
    virtual void m2F0(int);
};

extern "C" void func_0033AF20(char *p, char *a) {
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    *(signed char *)(p + 0x16C) = *(signed char *)(a + 0x0);
    *(signed char *)(p + 0x16D) = *(signed char *)(a + 0x1);
    *(signed char *)(p + 0x16E) = *(signed char *)(a + 0x2);
    *(float *)(p + 0x170) = *(float *)(a + 0x4);
    *(float *)(p + 0x174) = *(float *)(a + 0x8);
    *(float *)(p + 0x178) = *(float *)(a + 0xC);
    *(float *)(p + 0x17C) = *(float *)(a + 0x10);
    *(float *)(p + 0x180) = *(float *)(a + 0x14);
    *(signed char *)(p + 0x184) = *(signed char *)(a + 0x18);
    *(float *)(p + 0x188) = *(float *)(a + 0x1C);
    *(signed char *)(p + 0x18C) = *(signed char *)(a + 0x20);
    *(float *)(p + 0x190) = *(float *)(a + 0x24);
    *(float *)(p + 0x194) = *(float *)(a + 0x28);
    *(float *)(p + 0x198) = *(float *)(a + 0x2C);
    *(unsigned char *)(p + 0x19C) = *(unsigned char *)(a + 0x30);
    *(int *)(p + 0x1A0) = *(int *)(a + 0x34);
    *(float *)(p + 0x1A4) = *(float *)(a + 0x38);
    *(signed char *)(p + 0x1A8) = *(signed char *)(a + 0x3C);
    *(signed char *)(p + 0x1A9) = *(signed char *)(a + 0x3D);
    *(signed char *)(p + 0x1AA) = *(signed char *)(a + 0x3E);
    *(float *)(p + 0x12A0) = *(float *)(p + 0x12A0) + *(float *)(a + 0x4);
    if (*(float *)(p + 0x12A0) < 50.0f) return;
    if (*(signed char *)(p + 0x16E) != 0) return;
    *(float *)(p + 0x1298) = *(float *)(p + 0x1298) - (0.8f * *(float *)(a + 0xC) + 0.2f * *(float *)(a + 0x14));
    *(float *)(p + 0x129C) = D_0059DC60[*(signed char *)(p + 0x134C)];
    if (*(float *)(p + 0x1298) <= 0.0f) {
        *(float *)(p + 0x1298) = *(float *)(p + 0x1294);
        *(float *)(p + 0x129C) = 0.0f;
        ((O33A *)p)->m2F0(0x1E);
    } else {
        ((O33A *)p)->m2F0(2);
    }
}

class O338 {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300();
    virtual void m304(int);
};

extern "C" void func_00338FF0(char *p) {
    float v[4] __attribute__((aligned(16)));
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(char **)(p + 0x12B0) != 0) {
        func_003023F0(*(char **)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 60.0f;
        func_0033A660(p, 1);
    case 1:
        func_00335EF0(p, 0x400);
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1358) = 10.0f;
            *(float *)(p + 0x135C) = 0.18f;
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 1.0f;
            *(float *)(p + 0x68) = 0.0f;
        }
        break;
    case 2:
        if (!(*(float *)(p + 0x1358) <= 0.0f)) {
            *(float *)(p + 0x1358) = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
            func_00132540(v, p + 0x60, *(float *)(p + 0x1358) * *(float *)(p + 0x10));
            VADDI(p + 0x50, v);
        }
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((O338 *)p)->m304(0x20);
        }
        break;
    }
    func_0033A580(p);
}

class O437 {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual int m2E8();
    virtual void d2EC(); virtual void d2F0();
    virtual void m2F4(int);
    virtual void d2F8();
    virtual void m2FC(int);
};

extern "C" void func_004370C0(char *p) {
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((O437 *)p)->m2FC(0x5C);
        break;
    case 1:
        *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, (int)(D_005BD9D4 * *(float *)(p + 0x10)));
        if (((O437 *)p)->m2E8() == 0x90) {
            *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
            func_004396F0(p, 0x56);
        }
        break;
    case 2:
        if ((unsigned char)func_0024E780(p + 0x41A0, 0, 0) == 1) {
            func_0024E7B0(p + 0x41A0, 0, 0);
        }
        if (((O437 *)p)->m2E8() == 0x90) {
            *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
            ((O437 *)p)->m2FC(0x59);
        }
        break;
    case 3:
        if (((O437 *)p)->m2E8() == 0x90) {
            ((O437 *)p)->m2F4(0x30);
        }
        break;
    }
}

class V42F {
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
    virtual char *m134(int);
};

extern "C" void func_0041D840(Sub40 *, char *, float);
extern "C" void func_0020FA50(char *);
extern "C" void func_00455480(char *);
extern "C" void func_002EF940(int, char *);
extern "C" void func_0030EA90(char *, int);
extern "C" void func_00105760(char *, char *, float);
extern "C" void func_001A2D70(char *, int, int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_003F3A90(char *);
extern "C" short func_00131D10(float, float);
extern "C" void func_002C31A0(char *, char *, int);
extern "C" void func_002C33D0(char *, char *, char *, char *, int);
extern "C" void func_002A6C10(char *, char *, char *);
extern "C" float D_00559990[];
extern "C" float D_00559994[];
extern "C" float D_005BC6A8;
extern "C" unsigned char D_005BCA88;
extern "C" unsigned char D_005BCA89;
extern "C" unsigned char D_005BCA8A;
extern "C" unsigned char D_005BCA8B;
extern "C" float D_005BCA8C;
extern "C" void func_001A2840(char *, int, float);
extern "C" T3E5 D_00573170[];
extern "C" int func_003B3F70(char *);
extern "C" void func_003B4840(char *);
extern "C" void func_003B4D80(char *, int, int);
extern "C" void func_003B4B60(char *, int);
extern "C" void func_003B4F60(char *);

extern "C" void func_0042FA20(Hit40 *h) {
    char *p = (char *)h;
    float v[4] __attribute__((aligned(16)));
    S42F b;
    char *e;
    if ((unsigned char)func_0041D600(p) == 0) return;
    func_001AD100(p);
    func_00206730(p + 0x450);
    b = D_005BD910;
    e = (*(V42F **)(p + 0xD0))->m134(b.c[*(int *)(p + 0x454)]);
    v[0] = 0.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    func_00131DF0(p + 0x50, *(char **)(e + 0x104), v);
    if ((unsigned char)func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(int *)(p + 0x454) == 0) {
            if (*(float *)(p + 0x458) <= 100.0f) {
                func_0034BA60(0x2A, p + 0x50, 0x26, 0, 1);
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
        } else {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 1:
        break;
    }
    func_0041D840(h, p + 0x150, 1.0f);
    if (!(*(float *)(p + 0x458) < 60.0f) && *(float *)(p + 0x458) <= 90.0f) {
        func_0028C5C0(p + 0x1D0, 0, 1.0f);
    }
}

class O455 {
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
    virtual void d128(); virtual void d12C();
    virtual void m130();
};

class W455 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_004552F0(char *p) {
    int i;
    int k;
    func_001AD100(p);
    for (i = 0; i < 8; i++) {
        func_00206730(p + i * 4 + 0x694);
    }
    func_0020FA50(p + 0x690);
    if (*(unsigned char *)(p + 0x640) == 0) return;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        ((O455 *)p)->m130();
        break;
    case 1:
        func_00455480(p);
        if (*(unsigned char *)(p + 0x642) != 1) {
            func_002EF940(*(int *)D_01CAFF0C, p + 0x990);
        }
        break;
    }
    func_0028C5C0(p + 0x6C0, 0, *(float *)(p + 0x10));
    ((W455 *)(p + 0x200))->mC8(p + 0x650);
    func_00195E20(D_005BE098, p);
    if (*(unsigned char *)(p + 0x641) == 1) {
        *(unsigned char *)(p + 0x641) = 0;
        k = 0;
        switch (*(unsigned char *)(p + 0x644)) {
        case 0: k = 0x7918; break;
        case 1: k = 0x7919; break;
        case 2: k = 0x791A; break;
        case 3: k = 0x791B; break;
        case 4: k = 0x791C; break;
        }
        func_0030EA90(D_01DFA340, k);
    }
}

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

class W488 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_00488530(char *p) {
    int i;
    char *q;
    for (i = 0; i < 6; i++) {
        if (*(signed char *)(p + 0x2002) == i) {
            func_001A2D70(func_00279290(p + 0x740), i, 0x80C0C0C0);
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x198) = 1.5f;
        } else if (i != 0) {
            func_001A2D70(func_00279290(p + 0x740), i, 0x80404040);
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x198) = 1.0f;
        }
    }
    for (i = 0; i < 6; i++) {
        if ((signed char)i == 0) {
            func_001A2000(func_00279290(p + 0x1940), i);
        } else if (*(signed char *)(p + 0x2003) == (signed char)i) {
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x198) = 1.5f;
        } else {
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x198) = 1.0f;
        }
    }
    q = p + 0x1F80;
    ((W488 *)(p + 0x740))->mC8(q);
    ((W488 *)(p + 0x1940))->mC8(q);
}

class O50E {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

extern "C" void func_0050EF10(char *p) {
    float d[4] __attribute__((aligned(16)));
    char *e;
    func_003F3A90(p + 0x228);
    if (*(char **)(p + 0x228) == 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    if (*(int *)(*(char **)(p + 0x228) + 0x35E4) != 1 || *(unsigned char *)(p + 0x231) == 1) {
        func_001AD140(p);
        return;
    }
    func_00105300(p + 0x1E0, *(char **)(p + 0x228) + 0x3680);
    *(float *)(p + 0x50) = *(float *)(p + 0x210);
    *(float *)(p + 0x54) = *(float *)(p + 0x214);
    *(float *)(p + 0x58) = *(float *)(p + 0x218);
    VSUBR54(d, p + 0x50, p + 0x1D0);
    *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
    QCOPY(p + 0x1D0, p + 0x50);
    e = *(char **)(p + 0x3BC);
    if (e != 0 && (*(int *)(e + 8) & 0x40) != 0) {
        *(unsigned char *)(*(char **)(p + 0x228) + 0x3A3C) = 1;
        func_001AD140(p);
        return;
    }
    if (!(*(float *)(*(char **)(p + 0x228) + 0x36C0) <= 1.0f)) {
        *(float *)(*(char **)(p + 0x228) + 0x36C0) = 1.0f;
        func_003E8330(*(char **)(p + 0x228));
        (*(O50E **)(p + 0x228))->m2F8(0x16);
        func_003E6750(*(char **)(p + 0x228), 0x2B, 0, 0);
        func_001AD140(p);
        return;
    }
    func_0028C5C0(p + 0x340, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

class O2A6 {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(char *, char *);
    virtual float m18();
    virtual float m1C();
    virtual void d20(); virtual void d24();
    virtual float m28();
};

static inline bool func_002A6E10_b(char *g) {
    if (*(int **)(g + 8) != 0 && **(int **)(g + 8) != 0) return true;
    if (*(int *)(g + 0x1C) - *(int *)(g + 0x20) != 0) return true;
    if (*(unsigned char *)(g + 0x1A) == 1) return true;
    return false;
}

static inline bool func_002A6E10_a(void) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) return func_002A6E10_b(g);
    return false;
}

extern "C" void func_002A6E10(char *p, char *a) {
    char *q;
    *(unsigned char *)(p + 0x90) = 1;
    *(char **)(p + 0xA0) = a;
    *(unsigned char *)(p + 0x1158) = 0;
    *(float *)(p + 0x115C) = 10000000.0f;
    *(float *)(p + 0x1160) = 10000000.0f;
    q = *(char **)(p + 0xA0) + 0x40;
    func_002C31A0(p + 0xB0, q, *(unsigned char *)(q + 0x400));
    func_002C31A0(p + 0x900, q + 0x180, *(unsigned char *)(q + 0x400));
    func_002C33D0(p + 0x900, p + 0x1150, p + 0x1154, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, 0);
    ((O2A6 *)p)->m14(p + 0x80, p + 0x70);
    *(float *)(p + 0x20) = ((O2A6 *)p)->m18();
    *(float *)(p + 0x24) = ((O2A6 *)p)->m1C();
    func_002A6C10(p, p + 0x70, p + 0x80);
    if (func_002A6E10_a()) {
        *(float *)(p + 0x9C) = ((O2A6 *)p)->m28();
    } else {
        *(float *)(p + 0x9C) = 1.0f;
    }
}

class V30B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual int m2C(int, int);
};

extern "C" void func_0030B1A0(char *p) {
    int i;
    *(float *)(p + 0x1380) = D_00559990[0] / D_00559994[0];
    *(float *)(p + 0x1730) = *(volatile float *)D_00559990;
    *(float *)(p + 0xE0) = 1.0f;
    *(float *)(p + 0xE4) = 1.0f;
    *(float *)(p + 0xE8) = 0.0f;
    if ((unsigned char)((V30B *)(p + 0x180))->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)((V30B *)(p + 0x780))->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)((V30B *)(p + 0xD80))->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x1734) = D_005BC6A8;
    *(unsigned char *)(p + 0x1738) = 1;
    if (*(unsigned char *)(p + 0x1739) == 1) {
        for (i = 0; i < 3; i++) {
            func_001A2840(func_00279290(p + i * 0x600 + 0x180), (D_005BCA8B << 24) + ((D_005BCA8A << 16) + (D_005BCA88 + (D_005BCA89 << 8))), 1.0f / D_005BCA8C);
        }
    }
    *(unsigned char *)(p + 4) = 1;
}

class S3E5 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual float m7C();
};

class O3E5b {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC();
    virtual void m2F0(int);
};

extern "C" void func_003E5F50(char *p) {
    float buf[0x100];
    int k;
    int n;
    T3E5 *t;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) func_001AD140(*(char **)(p + 0x3BE8));
    if (*(char **)(p + 0x3BEC) != 0) func_001AD140(*(char **)(p + 0x3BEC));
    if (*(char **)(p + 0x3BF0) != 0) func_001AD140(*(char **)(p + 0x3BF0));
    t = D_00573170;
    k = (int)(((S3E5 *)(p + 0x130))->m7C() / 300.0f);
    if (k > 3) k = 3;
    if (*(unsigned char *)(p + 0x1BD) != 0) k = 4;
    for (n = 0; !(t[n].v[0] < 0.0f); n++) {
        buf[n] = ((float *)((char *)(k * 4) + (int)t + n * 0x18))[1];
    }
    ((O3E5b *)p)->m2F0(D_00573170[func_0034BBE0(n, (char *)buf)].id);
}

class V3B1 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual float m28(int);
};

static inline unsigned char func_003B17C0_d(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) return 1;
    return 0;
}

extern "C" QF3B1 D_00564630;
extern "C" S83B1 D_005BCCF8;
extern "C" float D_005BD9D8;
extern "C" float D_00577C60[];
extern "C" float D_00577C64[];
extern "C" float D_00577C68[];
extern "C" int func_00437B60(char *);
extern "C" int func_004361D0(char *);
extern "C" int func_00437E00(char *, int);
extern "C" void func_0043D6B0(char *);
extern "C" void func_0043D8C0(char *);
extern "C" char D_00587ECC[];
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" void func_001A5CC0(char *);
extern "C" void func_001A5B90(char *);
extern "C" int func_0021CBA0(char *);
extern "C" int func_002D9EB0(char *);
extern "C" void func_00380F40(char *);
extern "C" void func_0041D670(char *);

extern "C" void func_003B17C0(char *p, unsigned char k) {
    S83B1 s;
    QF3B1 sc;
    short v;
    sc = D_00564630;
    s = D_005BCCF8;
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 0x10;
    *(float *)(p + 0x21D4) = 999.0f;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        v = s.h[k];
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = v;
        func_0024DA80(p + 0x1D00, 0, v);
        func_0024DA80(p + 0x1DD0, 0, v);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        if (!(((V3B1 *)(p + 0x704))->m28(0) < sc.f[k]) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            break;
        }
        func_003B4D80(p, 0x400, 0);
        if (func_003B17C0_d(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
}

class O435 {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0();
    virtual void m2F4(int);
    virtual void d2F8();
    virtual void m2FC(int);
};

extern "C" void func_00435BB0(char *p) {
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((O435 *)p)->m2FC(8);
        break;
    case 1:
        *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850) + 0x8000;
        func_0034B8C0(p + 0x4850, p + 0x47BA, (int)(D_005BD9D8 * *(float *)(p + 0x10)));
        if ((unsigned char)func_0024E800(p + 0x41A0) != 1) break;
        if (*(float *)(p + 0x164) < D_00577C60[0] && (unsigned char)func_00437B60(p) == 1) {
            ((O435 *)p)->m2F4(0x1D);
            break;
        }
        if (*(float *)(p + 0x164) < D_00577C64[0]) {
            ((O435 *)p)->m2F4(0x28);
            break;
        }
        if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 0 || !(*(float *)(p + 0x164) < D_00577C68[0])) {
            ((O435 *)p)->m2F4(0x17);
        } else {
            ((O435 *)p)->m2F4(0x16);
        }
        break;
    }
}

extern "C" void func_00435D50(char *p) {
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((O435 *)p)->m2FC(9);
        break;
    case 1:
        *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, (int)(D_005BD9D8 * *(float *)(p + 0x10)));
        if ((unsigned char)func_0024E800(p + 0x41A0) != 1) break;
        if (*(float *)(p + 0x164) < D_00577C60[0] && (unsigned char)func_00437B60(p) == 1) {
            ((O435 *)p)->m2F4(0x1D);
            break;
        }
        if (*(float *)(p + 0x164) < D_00577C64[0]) {
            ((O435 *)p)->m2F4(0x28);
            break;
        }
        if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 0 || !(*(float *)(p + 0x164) < D_00577C68[0])) {
            ((O435 *)p)->m2F4(0x17);
        } else {
            ((O435 *)p)->m2F4(0x16);
        }
        break;
    }
}

class V43D {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C();
    virtual void m60(int, int, int, int);
    virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80();
    virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0();
    virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0();
    virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_0043D510(char *p) {
    float f;
    func_001AD100(p);
    if (*(unsigned char *)(p + 0x33A) == 0) return;
    switch (*(unsigned char *)(p + 0x1400)) {
    case 0:
        func_0043D6B0(p);
        break;
    case 1:
        func_0043D8C0(p);
        break;
    }
    func_0028C5C0(p + 0x1470, 0, *(float *)(p + 0x10));
    f = *(float *)(p + 0x10);
    *(float *)(func_00279290(p + 0x340) + 0x1B0) = f;
    f = *(float *)(p + 0x10);
    *(float *)(func_00279290(p + 0x940) + 0x1B0) = f;
    ((V43D *)(p + 0x340))->m60(*(int *)(p + 0x1404), *(int *)(p + 0x1408), (int)((float)*(int *)(p + 0x140C) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x1410) * *(float *)(p + 0x10)));
    ((V43D *)(p + 0x940))->m60(*(int *)(p + 0x1414), *(int *)(p + 0x1418), (int)((float)*(int *)(p + 0x141C) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x1420) * *(float *)(p + 0x10)));
    ((V43D *)(p + 0x340))->mC8(p + 0x1380);
    ((V43D *)(p + 0x940))->mC8(p + 0x1380);
    if (*(unsigned char *)(p + 0x1424) == 1) {
        ((V43D *)(p + 0xF40))->mC8(p + 0x13C0);
    }
    func_00195E20(D_005BE098, p);
    *(unsigned char *)(p + 0x1425) = 0;
    *(int *)(p + 0x1428) = 0;
}

class O4C4 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float m1E0(unsigned int);
};

extern "C" void func_004C4630(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 0:
        case 1:
            func_00330BD0(D_01DFABA0, 0x3C, p + 0x50, 0x23, 0);
            break;
        case 2:
            func_00330BD0(D_01DFABA0, 0x31, p + 0x50, 0x23, 0);
            break;
        }
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((O4C4 *)p)->m1E0((unsigned int)*(float *)(D_00587ECC + *(unsigned char *)(p + 0xB2C8) * 0x54));
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = 0;
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        break;
    case 1:
        *(unsigned char *)(p + 4) = 2;
        break;
    }
}

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

class O2DF {
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
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174();
    virtual void m178(int, int);
};

extern "C" void func_002DFA80(char *p, int a, int b) {
    char *e;
    unsigned char k;
    if (func_0021CBA0(p) & 0x80000000) return;
    if (*(unsigned char *)(p + 0x28AC) == 1) return;
    if (*(signed char *)(p + 0x46) == 0 && *(unsigned char *)(p + 0x2848) == 0x11) {
        k = *(unsigned char *)(p + 0x2998);
        if (0xBE <= k && k <= 0xC5) return;
        if (*(unsigned short *)(p + 0x24C6) == 0x1107) return;
        if (k == 0x51 || k == 0x52) return;
        if (k == 0x56 || k == 0x57) return;
        if (*(unsigned short *)(p + 0x24C6) == 0x1004) return;
        if (k == 0x58) return;
        if (k == 0x5F) return;
        if (k == 0x12) return;
        if (k == 0x29) return;
    }
    e = func_00207480(3, 0x331, 0, 0x20);
    if (e != 0) {
        *(int *)(e + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
        *(unsigned char *)(e + 0x99) = 1;
    }
    *(unsigned char *)(p + 0x28A9) = 0;
    func_003305E0(D_01DFABA0, 0, 0x4B, p + 0x50, 0, 0, 0);
    ((O2DF *)p)->m178(a, b);
}

class O320b {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void m68(char *, int);
    virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88();
    virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0();
    virtual void mA4(int);
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void mB4(int);
};

class C320b {
public:
    virtual void d8(); virtual void dC();
    virtual int m10();
    virtual int m14();
    virtual int m18();
};

extern "C" void func_00320F30(char *p, char *a, int b) {
    if (*(unsigned char *)(p + 0x1D) != 3) {
        *(signed char *)(p + 0x3C) = *(signed char *)(a + 0x0);
        *(signed char *)(p + 0x3D) = *(signed char *)(a + 0x1);
        *(signed char *)(p + 0x3E) = *(signed char *)(a + 0x2);
        *(float *)(p + 0x40) = *(float *)(a + 0x4);
        *(float *)(p + 0x44) = *(float *)(a + 0x8);
        *(float *)(p + 0x48) = *(float *)(a + 0xC);
        *(float *)(p + 0x4C) = *(float *)(a + 0x10);
        *(float *)(p + 0x50) = *(float *)(a + 0x14);
        *(signed char *)(p + 0x54) = *(signed char *)(a + 0x18);
        *(float *)(p + 0x58) = *(float *)(a + 0x1C);
        *(signed char *)(p + 0x5C) = *(signed char *)(a + 0x20);
        *(float *)(p + 0x60) = *(float *)(a + 0x24);
        *(float *)(p + 0x64) = *(float *)(a + 0x28);
        *(float *)(p + 0x68) = *(float *)(a + 0x2C);
        *(unsigned char *)(p + 0x6C) = *(unsigned char *)(a + 0x30);
        *(int *)(p + 0x70) = *(int *)(a + 0x34);
        *(float *)(p + 0x74) = *(float *)(a + 0x38);
        *(signed char *)(p + 0x78) = *(signed char *)(a + 0x3C);
        *(signed char *)(p + 0x79) = *(signed char *)(a + 0x3D);
        *(signed char *)(p + 0x7A) = *(signed char *)(a + 0x3E);
        if ((unsigned char)(*(C320b **)(p + 0xC))->m14() == 1) {
            ((O320b *)p)->mB4(0x10);
        }
        switch ((unsigned char)(*(C320b **)(p + 0xC))->m10()) {
        case 0:
            break;
        case 1:
            if ((unsigned char)(*(C320b **)(p + 0xC))->m18() != 0) {
                ((O320b *)p)->mB4(8);
            }
            break;
        }
        ((O320b *)p)->m68(a, b);
    }
}

class L380 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual int mB4();
};

static inline float func_00380D90_r(void) {
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

extern "C" void func_00380D90(char *p) {
    float m[16] __attribute__((aligned(16)));
    int i;
    *(float *)(p + 0x1350) = func_001324E0((float *)(p + 0x1340));
    *(int *)(p + 0xDE8) = 0x2503F;
    *(unsigned char *)(p + 0xF9C) = 0;
    *(unsigned char *)(p + 0x103C) = 0;
    *(unsigned char *)(p + 0x10DC) = 0;
    func_00104E78(m, p + 0x1240);
    for (i = 0; i < ((L380 *)func_002792A0(p + 0x340))->mB4(); i++) {
        func_00104C00(*(char **)(*(char **)(p + i * 4 + 0x9D0) + 0x100), (char *)m, *(char **)(*(char **)(p + i * 4 + 0x9D0) + 0x104));
    }
    *(float *)(p + 0x1344) = *(float *)(p + 0x1344) + 0.2f * -func_00380D90_r();
    func_00380F40(p);
}

class O38E {
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
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0();
    virtual void m1F4(char *, int);
};

static inline unsigned char func_0038E490_f(char *p) {
    return (*(int *)(p + 0x42C) & 0x8000) != 0;
}

extern "C" float func_0041E060(Sub40 *);
extern "C" char *D_005BDC34;
extern "C" char *D_005BDC38;
extern "C" char *D_005BDC3C;
extern "C" void func_003A02B0(char *, int);
extern "C" float D_005647B0[];
extern "C" unsigned char D_01CAFF3C[];
extern "C" float D_005BDEB8;
extern "C" float D_005BDEBC;
extern "C" float func_004D2B70(char *);
extern "C" char D_00581F30[];
extern "C" short func_0034B940(char *, char *);
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" short func_002DACC0(char *);
extern "C" void func_002DBD00(char *);
extern "C" int func_0023DF80(char *, float);
extern "C" void func_0021BFC0(char *);
extern "C" void func_002DA540(char *);
extern "C" void func_002DA3A0(char *, int);
extern "C" void func_001A1F90(char *);
extern "C" int func_004B8780(char *, char *, float, float);
extern "C" void func_004B8850(char *, int);
extern "C" void func_004B87C0(char *, float);
extern "C" void func_004B87D0(char *, int);
extern "C" void func_004B8610(char *);
extern "C" void func_002F43B0(int, unsigned char *);
extern "C" char *func_002075D0(int, int, int, int, int);
extern "C" char D_00548FD0[];
extern "C" void func_0028B610(char *);
extern "C" int func_001AED80(char *, int, int, int);
extern "C" void func_00208050(int, int);
extern "C" int func_0028B8E0(char *);
extern "C" int func_0028B620(char *);
extern "C" void func_0028B980(char *, char *, int);
extern "C" int func_002242C0(char *);
extern "C" void func_002F44C0(int, char *);
extern "C" void func_0028BF50(char *);
extern "C" void func_00356470(char *);
extern "C" void func_003AB550(char *);
extern "C" void func_003AA6C0(char *);
extern "C" void func_0042C9B0(char *, char *, int);
extern "C" char D_00578580[];
extern "C" void func_003DEBF0(char *, char *, char *, int, char *);
extern "C" void func_003DF0C0(char *, float);
extern "C" char D_00645A30[];
extern "C" void func_001AAD30(char *);
extern "C" char *func_001B0FD0(char *, int, int);
extern "C" char *func_001B1610(int, char *);
extern "C" void func_004D9640(char *);
extern "C" void func_001B1440(char *, char *, char *);
extern "C" void func_001959E0(char *, int, char *);
extern "C" void func_001B1430(char *, int);
extern "C" void func_0013D240(char *, int);

extern "C" void func_0038E490(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 4;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0041D670(p + 0x410);
        if (func_0038E490_f(p) == 1) {
            func_0034BA60(0x28, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        if (*(char **)(p + 0x43C) != 0) {
            func_001AD140(*(char **)(p + 0x43C));
            *(int *)(p + 0x43C) = 0;
        }
        if (func_0038E490_f(p) == 1) {
            { char *q = p + 0x3D0; func_00207470(3, 0x1E9, q); }
        } else {
            QCOPY(v, p + 0x50);
            v[1] = func_0041E060((Hit40 *)p);
            UNIT(m);
            func_00105230((char *)m, (char *)m, (char *)v);
            func_00207470(3, 0x1EC, (char *)m);
            { char *q = p + 0x3D0; func_00207470(3, 0x1EB, q); }
        }
        *(float *)(p + 0x428) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + 0x428, *(float *)(p + 0x10)) == 1) {
            ((O38E *)p)->m1F4(p + 0x470, 0);
            func_001AD140(p);
        }
        break;
    }
    func_0041D840((Hit40 *)p, p + 0x390, 1.0f);
}

class O3A0 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float m1E0(unsigned int);
};

extern "C" void func_003A02D0(char *p) {
    char *g;
    int s;
    *(int *)(p + 0x2DCC) = 0;
    s = *(int *)(p + 0x2ED8);
    switch (*(unsigned char *)(p + 0x2DD5)) {
    case 1:
        g = D_005BDC38;
        break;
    case 2:
        g = D_005BDC3C;
        break;
    default:
        g = D_005BDC34;
        break;
    }
    *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = *(float *)(g + 0x44);
    *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((O3A0 *)p)->m1E0((unsigned int)*(float *)(g + 0x2C));
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
    *(unsigned char *)(p + 0x2DE7) = 0;
    func_001A5C30(func_00279290(p + 0x4C0));
    func_001A5C30(func_00279290(p + 0x1980));
    func_001A5C30(func_00279290(p + 0x1F80));
    func_001A5C30(func_00279290(p + 0xD80));
    func_001A5C30(func_00279290(p + 0x1380));
    if (s == 0) {
        if (!(*(unsigned char *)(p + 0x2F3D) > 0)) *(unsigned char *)(p + 0x2F3D) = 1;
        func_003A02B0(p, 0x27);
    } else {
        if (!(*(unsigned char *)(p + 0x2F3D) > 0)) *(unsigned char *)(p + 0x2F3D) = 1;
        func_003A02B0(p, 0x27);
    }
}

class Q3B9 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, Sub40 *);
    virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58();
    virtual void d5C(); virtual void d60();
    virtual void m64(char *, int, float, float, float);
    virtual float m68();
};

extern "C" void func_003B99E0(Hit40 *h, char *a, Q3B9 *q) {
    char *p = (char *)h;
    float f;
    if (a != 0 && q != 0) {
        func_00207480(3, 0x15E, p + 0x250, 0x20);
        if (*(unsigned char *)(p + 0x1B4) != 0) func_0034BA60(0x32, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        f = q->m68();
        f = *(float *)(a + 4) * f * D_005647B0[*(signed char *)(a + 2)] / 100.0f;
        q->m64(a, 0, f, 1.0f, *(signed char *)(a + 2) != 0 ? 0.7f : 0.3f);
        q->m38(a, h);
        *(float *)(p + 0x1C4) = *(float *)(p + 0x1C4) - f;
        if (*(unsigned char *)(a + 0x30) != 0 && *(float *)(p + 0x1C4) <= 1.0f) {
            *(float *)(p + 0x1C4) = 1.0f;
        }
        if (*(float *)(p + 0x1C4) <= 0.0f || D_01CAFF3D[0] != 0) {
            *(float *)(p + 0x1C4) = -1.0f;
            *(unsigned char *)(p + 0x1B0) = 1;
        }
    }
}

class C45A {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual int m14();
};

class O45A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual short m78(int, int);
    virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual int m90(int);
    virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void mB4(int);
    virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4();
    virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0();
    virtual int mF4();
};

extern "C" void func_0045A2D0(char *p, signed char k) {
    short v;
    int r;
    if (*(unsigned char *)(p + 0xB4) == 0xE && *(unsigned char *)(p + 0xCC) == 0xE) return;
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    if ((unsigned char)(*(C45A **)(p + 0xC))->m14() != 0) return;
    if ((unsigned char)((O45A *)p)->mF4() != 0) return;
    if (k != 0) return;
    ((O45A *)p)->m6C();
    ((O45A *)p)->m74();
    if (!(*(float *)(p + 0x34) < 400.0f)) return;
    ((O45A *)p)->m70();
    if ((short)(((O45A *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) < 0) return;
    v = ((O45A *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x90)) - 0x671C;
    if (v >= 0 && v < 0x31C8) {
        r = ((O45A *)p)->m90(0);
        if (r != 0xD) {
            ((O45A *)p)->mB4(r);
            return;
        }
    }
}

class O4CB {
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
    virtual int m1C8();
    virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4(); virtual void d1E8();
    virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204(); virtual void d208();
    virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224(); virtual void d228();
    virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244(); virtual void d248();
    virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264(); virtual void d268();
    virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284(); virtual void d288();
    virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4(); virtual void d2A8();
    virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4(); virtual void d2C8();
    virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4(); virtual void d2E8();
    virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

class S4CB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88();
    virtual void m8C();
    virtual void d90();
    virtual int m94(int);
};

class T4CB {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual int m14();
    virtual void m18(float);
};

extern "C" void func_004CBBE0(char *p, float f) {
    if (D_01CAFF3C[0] == 4 && func_004D2B70(p) < D_005BDEBC && *(float *)(p + 0xB2B4) <= 0.0f) {
        *(float *)(p + 0xB2B4) = D_005BDEB8;
        ((O4CB *)p)->m2F8(0x41);
        return;
    }
    if (((O4CB *)p)->m1C8() != 0) {
        if (((T4CB *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m14() != 0) {
            ((T4CB *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m18(f);
            ((S4CB *)(p + 0x130))->m8C();
            ((O4CB *)p)->m2F8((unsigned char)((S4CB *)(p + 0x130))->m94(0));
            return;
        }
        ((S4CB *)(p + 0x130))->m8C();
        ((O4CB *)p)->m2F8((unsigned char)((S4CB *)(p + 0x130))->m94(1));
        return;
    }
    ((S4CB *)(p + 0x130))->m8C();
    ((O4CB *)p)->m2F8((unsigned char)((S4CB *)(p + 0x130))->m94(1));
}

extern "C" void func_004F5F80(char *p) {
    char *t;
    char *o;
    char *b;
    p[0x44] = -1;
    p[0x45] = 4;
    p[0x46] = p[0x150];
    *(int *)(p + 0xB50) = 0;
    *(int *)(p + 0xB60) = 0;
    *(char **)(p + 0xB50) = func_00207480(2, 0x192, 0, 0x10);
    o = *(char **)(p + 0xB50);
    t = p + 0x1F0;
    if (o) {
        *(char **)(o + 0x90) = t;
        o[0x9A] = 0;
    } else {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = -1.0f;
    *(float *)(p + 0x7C) = 1.0f;
    QCOPY(p + 0x50, *(char **)(*(char **)(p + 0x194) + 0x104) + 0x30);
    *(short *)(p + 0x90) = func_0034B940(p + 0x50, *(char **)(p + 0xD0) + 0x50);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    b = p;
    if (b) b += 0x40;
    func_0041D840((Sub40 *)b, p + 0x1B0, 1.0f);
    p[0xAF0] = 1;
    p[0xAF1] = 0;
    *(short *)(p + 0xAF2) = 0;
    p[0xB00] = 2;
    *(int *)(p + 0xB10) = 0;
    *(float *)(p + 0xB14) = 180.0f;
    *(int *)(p + 0xB18) = 0;
    *(float *)(p + 0xB1C) = 1.0f;
    *(float *)(p + 0xB20) = 180.0f;
    func_0028C200(p + 0x8D0, p + 0xAF0, p + 0xB00, 3, D_00581F30, p, 0);
    *(int *)(p + 0x9A8) = 0x40;
    func_0028C8E0(p + 0x8D0, 6);
    func_0028C910(p + 0x8D0);
    func_0028C3A0(p + 0x8D0, 0, -1, (int)(p + 0x1F0));
    *(int *)(p + 0xB54) = 0;
}

#define VMOVE227(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VUNIT227(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

extern "C" void func_00227470(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0, 0x12, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        *(int *)(p + 0x150) = 0;
        *(int *)(p + 0x154) = 0;
        *(float *)(p + 0x64) = *(float *)(*(char **)(p + 0x283C) + 0x15C);
        *(float *)(p + 0x74) = *(float *)(*(char **)(p + 0x283C) + 0x160);
        func_002DBD00(p);
        func_0021C380(p, 0xB);
        p[0x2903] = 0xB;
        p[0x2904] = 4;
        p[0x2866] = 0;
        if (*(signed char *)(p + 0x46) == 0) {
            VMOVE227(v, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104));
            VUNIT227(m);
            func_00105230((char *)m, (char *)m, (char *)v);
            o = func_00207480(3, 0x83, (char *)m, 8);
            if (o) {
                *(unsigned char *)(o + 0x9C) = 0x8F;
                o[0x9D] = 0x70;
                o[0x9E] = 0x30;
                o[0x9B] = 2;
            }
        }
        func_003305E0(D_01DFABA0, 8, 0x3B, p + 0x50, 0x26, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        func_002496D0(p);
        func_002DA540(p);
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if (*(unsigned char *)(p + 0x2866) == 0 && func_00131B50(*(float *)(p + 0x64) / *(float *)(p + 0x74)) < 30.0f) {
            p[0x2866] = 1;
            func_002490F0(p, 0, 0x26, -1, 2, 0x1E, -1.0f);
        }
        break;
    }
}

class M3E5 {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual void z28();
    virtual float m7C();
};

class H3E5 {
public:
    virtual void z0();
    virtual void mC(signed char *, int, int);
};

extern "C" void func_003E53C0(char *p, signed char *a, int b, int c) {
    if (*(unsigned char *)(p + 0x3A31)) return;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    switch (*(unsigned char *)(p + 0x342C)) {
    case 0x46: case 0x47: case 0x48: case 0x49: case 0x4A: case 0x4B:
        return;
    }
    switch (*(int *)(p + 0x1F94)) {
    case 0x29:
        if (!(((M3E5 *)func_002792A0(p + 0x980))->m7C() <= 20.0f)) {
            switch (*a) {
            case 3: case 7:
                *(int *)(p + 0x3124) = 0;
                break;
            }
        }
        break;
    case 0x28:
        if (!(((M3E5 *)func_002792A0(p + 0x980))->m7C() <= 20.0f)) {
            switch (*a) {
            case 3: case 7:
                *(int *)(p + 0x3124) = 0;
                break;
            }
        }
        break;
    }
    if (*(H3E5 **)(p + 0x118)) (*(H3E5 **)(p + 0x118))->mC(a, b, c);
}

class W45Eo {
public:
    virtual void d8();
    virtual int mC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void m28(int);
};

class W45E {
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
    virtual void mB4(int);
};

static inline float frd45E(void) { unsigned int y; if (D_01DF8810[0] >= 0x270) { func_00207A90(D_01DF7E50); } { unsigned int i = D_01DF8810[0]; D_01DF8810[0] = i + 1; y = D_01DF7E50[i]; } y ^= y >> 11; y ^= (y << 7) & 0x9D2C5680; y ^= (y << 15) & 0xEFC60000; y ^= y >> 18; return 2.3283064e-10f * (float)y; }

extern "C" void func_0045E880(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        *(unsigned char *)(p + 0xB5) = 1;
    case 1:
        if (frd45E() < 0.5f) {
            (*(W45Eo **)(p + 0xC))->m28(0x45);
            *(unsigned char *)(p + 0xB5) = 2;
        } else {
            (*(W45Eo **)(p + 0xC))->m28(0x46);
            *(unsigned char *)(p + 0xB5) = 3;
        }
        break;
    case 2:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x45);
        *(unsigned char *)(p + 0xB5) = 6;
        break;
    case 3:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x46);
        *(unsigned char *)(p + 0xB5) = 7;
        break;
    case 4: case 5:
        break;
    case 6:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 7:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 8:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x49) break;
        ((W45E *)p)->mB4(0x17);
        break;
    }
}

static inline float frd45D(void) { unsigned int y; if (D_01DF8810[0] >= 0x270) { func_00207A90(D_01DF7E50); } { unsigned int i = D_01DF8810[0]; D_01DF8810[0] = i + 1; y = D_01DF7E50[i]; } y ^= y >> 11; y ^= (y << 7) & 0x9D2C5680; y ^= (y << 15) & 0xEFC60000; y ^= y >> 18; return 2.3283064e-10f * (float)y; }

extern "C" void func_0045DC90(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(W45Eo **)(p + 0xC))->m28(0x48);
        *(unsigned char *)(p + 0xB5) = 1;
        break;
    case 1:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x48) break;
        if (frd45D() < 0.5f) {
            (*(W45Eo **)(p + 0xC))->m28(0x45);
            *(unsigned char *)(p + 0xB5) = 2;
        } else {
            (*(W45Eo **)(p + 0xC))->m28(0x46);
            *(unsigned char *)(p + 0xB5) = 3;
        }
        break;
    case 2:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x45);
        *(unsigned char *)(p + 0xB5) = 6;
        break;
    case 3:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x46);
        *(unsigned char *)(p + 0xB5) = 7;
        break;
    case 4: case 5:
        break;
    case 6:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 7:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 8:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x49) break;
        ((W45E *)p)->mB4(0x17);
        break;
    }
}

class W4B7 {
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
    virtual void mB4(int, int, int, int);
    virtual void dB8();
    virtual void mBC(float);
};

class W4B7m {
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
    virtual int mAC();
};

extern "C" void func_004B77C0(char *p) {
    char *o;
    char *e;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_001A1E10(func_00279290(p + 0x1C0));
        *(float *)(p + 0x50) = 2410.0f;
        *(float *)(p + 0x54) = -10.0f;
        *(float *)(p + 0x58) = 3400.0f;
        *(float *)(p + 0x5C) = 1.0f;
        *(short *)(p + 0xAD4) = 0;
        *(short *)(p + 0x90) = 0;
        *(short *)(p + 0xAD6) = 0;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0xA40) = 0;
        *(int *)(p + 0xA44) = 0;
        *(int *)(p + 0xA48) = 0;
        *(int *)(p + 0xA4C) = 0;
        ((W4B7 *)(p + 0x1C0))->mB4(2, 0, 0, 0);
        *(float *)(p + 0xA50) = 173.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) != 1) break;
        *(float *)(p + 0xA50) = 135.0f;
        *(float *)(p + 0xA54) = 40.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 2:
        func_004B8780(p, p + 0xA50, 1.0f, 0.0f);
        if ((unsigned char)func_004B8780(p, p + 0xA54, 1.0f, 0.0f) != 1) break;
        o = *(char **)(p + 0xAC0);
        if (*(unsigned char *)(p + 0xA34) != 0) e = func_00207480(3, 0x3BE, 0, 0x10);
        else e = func_00207480(3, 0x3BD, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(func_00279290(p + 0x1C0) + 0x108) + 0x80;
            *(unsigned char *)(e + 0x9A) = 0;
            *(unsigned char *)(e + 0x3A) = 1;
        }
        func_0034BA60(0x59, *(char **)(func_00279290(p + 0x1C0) + 0x108) + 0xB0, *(signed char *)(o + 0x46), 0, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 3:
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) != 1) break;
        *(float *)(p + 0xA50) = 80.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 4:
        func_004B8780(p, p + 0xA50, 1.0f, 0.0f);
        if ((unsigned char)((W4B7m *)func_002792A0(p + 0x1C0))->mAC() == 4) {
            ((W4B7 *)(p + 0x1C0))->mB4(0, 0, 0, 0);
            *(float *)(p + 0x64) = 15.0f;
            *(float *)(p + 0xA44) = 15.0f;
            func_004B8850(p, 0x56);
            func_004B87C0(p, 5.0f);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        ((W4B7 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        break;
    case 5:
        ((W4B7 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) == 1) {
            func_001A1F90(func_00279290(p + 0x1C0));
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0xA40) = 0;
            *(int *)(p + 0xA44) = 0;
            *(int *)(p + 0xA48) = 0;
            *(int *)(p + 0xA4C) = 0;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        func_004B87D0(p, 0x20);
        break;
    case 6:
        break;
    }
    func_004B8610(p);
}

static inline void setc456(char *e, unsigned char r, unsigned char g, unsigned char b) { *(unsigned char *)(e + 0x9C) = r; *(unsigned char *)(e + 0x9D) = g; *(unsigned char *)(e + 0x9E) = b; *(unsigned char *)(e + 0x9B) = 2; *(unsigned char *)(e + 0x9F) = 0x80; *(unsigned char *)(e + 0x9B) = 3; *(unsigned char *)(e + 0x9B) = 1; }

extern "C" void func_00456280(char *p) {
    unsigned char c[4];
    bool f;
    unsigned char k;
    char *e;
    func_002F43B0(*(unsigned char *)(p + 0x644), c);
    f = false;
    switch (*(unsigned char *)(p + 0x642)) {
    case 0:
        k = *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90);
        break;
    case 1:
        k = 7;
        break;
    }
    switch (k) {
    case 0:
        break;
    case 7:
        if (*(char **)(p + 0x698) != 0) {
            *(unsigned char *)(*(char **)(p + 0x698) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x698));
            *(char **)(p + 0x698) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1DC) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 6:
        if (*(char **)(p + 0x69C) != 0) {
            *(unsigned char *)(*(char **)(p + 0x69C) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x69C));
            *(char **)(p + 0x69C) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1E0) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 5:
        if (*(char **)(p + 0x6A0) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6A0) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6A0));
            *(char **)(p + 0x6A0) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1D8) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 4:
        if (*(char **)(p + 0x6A4) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6A4) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6A4));
            *(char **)(p + 0x6A4) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1E4) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 3:
        if (*(char **)(p + 0x6A8) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6A8) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6A8));
            *(char **)(p + 0x6A8) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1D4) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 2:
        if (*(char **)(p + 0x6AC) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6AC) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6AC));
            *(char **)(p + 0x6AC) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1D0) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 1:
        if (*(char **)(p + 0x6B0) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6B0) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6B0));
            *(char **)(p + 0x6B0) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1E8) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    }
    if (f) func_003305E0(D_01DFABA0, 8, 0x44, p + 0x50, 0x22, 0, 0);
}

class S2A6b {
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
    virtual void m144(float, int);
};

class O2A6b {
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
    virtual void mB0(int, char *);
    virtual void mB4(int, int, int, int);
    virtual void dB8();
    virtual void mBC(float);
};

extern "C" void func_002A61B0(char *p) {
    float f;
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0028B610(p);
        func_00208050(func_001AED80(D_00666750, 2, (unsigned short)(*(signed char *)(p + 0x46) * 15 + 6), 2), 1);
        *(char **)(p + 0xE4) = D_00548FD0;
        *(unsigned char *)(p + 0xDC) = 0;
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    case 1:
        if ((unsigned char)func_0028B8E0(p) == 0) break;
        *(unsigned char *)(p + 0xD9) = *(unsigned char *)(p + 0xD8);
        if ((unsigned char)func_0028B620(p) == 0) {
            *(unsigned char *)(p + 0xD8) = 1;
        } else {
            *(unsigned char *)(p + 0xD8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        }
        if (!(*(float *)(*(char **)(p + 0xE0) + 0x29A8) <= 0.0f)) break;
        func_0028B980(p, p + 0x820, *(unsigned char *)(p + 0xD8));
        if (*(unsigned char *)(p + 0xD8) != 1 && *(unsigned char *)(p + 0xD9) == 1) {
            ((S2A6b *)p)->m144(0.1f, 8);
        }
        if (*(unsigned char *)(p + 0xDC) == 1) {
            ((O2A6b *)(p + 0x140))->mBC(*(float *)(p + 0x10));
            if ((unsigned char)func_002242C0(*(char **)(p + 0xE0)) == 0 && *(unsigned char *)(p + 0x860) == 0) {
                switch (*(signed char *)(p + 0xDA)) {
                case 1: f = 35.0f; break;
                case 5: f = 65.0f; break;
                case 6: f = 11.0f; break;
                default: f = 9999.0f; break;
                }
                if (!(*(float *)(func_002792A0(p + 0x140) + 0x128) < f)) {
                    func_002F44C0(2, *(char **)(*(char **)(p + 0x108) + 0x104));
                    func_002F44C0(2, *(char **)(*(char **)(p + 0x108) + 0x104));
                    *(unsigned char *)(p + 0x860) = *(unsigned char *)(p + 0x860) + 1;
                }
            }
        }
        switch (*(signed char *)(p + 0xDA)) {
        default:
        case 0:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) || *(unsigned char *)(p + 0xDC) == 1) {
                ((O2A6b *)(p + 0x140))->mB0(*(int *)(p + 0x7D0), p + 0x100);
            }
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case 1: case 2: case 3: case 4: case 5: case 6:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2)) {
                ((O2A6b *)(p + 0x140))->mB4(*(signed char *)(p + 0xDA) - 1, 0, 0, 0);
                *(unsigned char *)(p + 0xDC) = 1;
                *(unsigned char *)(p + 0x860) = 0;
            }
            break;
        }
        func_0028BF50(p);
        break;
    }
}

class Obj600 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int);
    virtual void d8();
    virtual int m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
};

class ObjB0 {
public:
    virtual void x0();
    virtual void x1();
    virtual void x2();
    virtual void x3();
    virtual void x4();
    virtual void x5();
    virtual void x6();
    virtual void x7();
    virtual void x8();
    virtual void x9();
    virtual void x10();
    virtual void x11();
    virtual void x12();
    virtual void x13();
    virtual void x14();
    virtual void x15();
    virtual void x16();
    virtual void x17();
    virtual void x18();
    virtual void x19();
    virtual void x20();
    virtual void x21();
    virtual void x22();
    virtual void x23();
    virtual void x24();
    virtual void x25();
    virtual void x26();
    virtual void x27();
    virtual void x28();
    virtual void x29();
    virtual void x30();
    virtual void x31();
    virtual void x32();
    virtual void x33();
    virtual void x34();
    virtual void x35();
    virtual void x36();
    virtual void x37();
    virtual void x38();
    virtual void x39();
    virtual void x40();
    virtual void x41();
    virtual void mB0(int, char *);
};

static inline char *ent600(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *chunk600(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent600(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" void func_00353580(char *p) {
    int i;
    char *b;
    char *a;
    int j;
    for (i = 0; i < 20; i++) {
        a = chunk600(*(char **)(p + 0x9C), i * 2);
        b = chunk600(*(char **)(p + 0x9C), i * 2 + 1);
        ((Obj600 *)(p + i * 0x600 + 0xC0))->m24(1);
        if ((unsigned char)((Obj600 *)(p + i * 0x600 + 0xC0))->m2C(b, a) == 0) {
            func_00356470(p);
            return;
        }
        ((Obj600 *)(p + i * 0x600 + 0xC0))->m3C(2);
        func_001A1F90(func_00279290(p + i * 0x600 + 0xC0));
        if (i == 0x13) {
            ((ObjB0 *)(p + i * 0x600 + 0xC0))->mB0(0, p + 0x78C0);
            for (j = 0; j < 6; j++) {
                func_00105300(p + j * 0x40 + 0x7B50, *(char **)(((char **)(p + 0x78C0))[j] + 0x100));
            }
        }
    }
    *(unsigned char *)(p + 0x78E0) = 0;
    *(int *)(p + 0x78F0) = 0;
    *(int *)(p + 0x78F4) = 0;
    *(int *)(p + 0x78F8) = 0;
    *(float *)(p + 0x78FC) = 1.0f;
    *(int *)(p + 0x7900) = 0;
    *(int *)(p + 0x7904) = 0;
    *(int *)(p + 0x7908) = 0;
    *(float *)(p + 0x790C) = 1.0f;
    *(float *)(p + 0x7910) = 1.0f;
    *(float *)(p + 0x7914) = 1.0f;
    *(float *)(p + 0x7918) = 1.0f;
    *(float *)(p + 0x791C) = 1.0f;
    UNIT(p + 0x7920);
    func_00131700(p + 0x7920, p + 0x7920, p + 0x7900);
    func_00105230(p + 0x7920, p + 0x7920, p + 0x78F0);
    func_001318E0(p + 0x7920, p + 0x7920, p + 0x7910);
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
    *(int *)(p + 0x796C) = 2;
}

class ObjC8 {
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
    virtual void mC8(char *);
};

static inline void vcpy(void *d, void *s) { __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory"); }

static inline void vcpz(void *d, void *s) { __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory"); }

static inline int get8(char *q) { return *(int *)(q + 8); }

extern "C" void func_003AA150(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    vcpz(v, p + 0x5030);
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    vcpy(p + 0x20D0, p + 0x50);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x2100) : "memory");
    func_00131700(p + 0x2100, p + 0x2100, p + 0x20E0);
    func_00105230(p + 0x2100, p + 0x2100, p + 0x20D0);
    func_001318E0(p + 0x2100, p + 0x2100, p + 0x20F0);
    for (i = 0; i < 23; i++) {
        if (((char **)(p + 0x718))[i] != 0 && *(char **)(((char **)(p + 0x718))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x718))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x718))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    func_0022C520((int)(p + 0x2B60), p + 0xE80, *(char **)(*(char **)(p + 0x718) + 0x104), p + 0x4A50);
    ((ObjC8 *)(p + 0xE80))->mC8(*(char **)(*(char **)(p + 0x718) + 0x104));
    func_00105300(p + 0x4A50, *(char **)(*(char **)(p + 0x718) + 0x104));
    func_0022C520((int)(p + 0x3A60), p + 0x1480, *(char **)(*(char **)(p + 0x718) + 0x104), p + 0x4A90);
    ((ObjC8 *)(p + 0x1480))->mC8(*(char **)(*(char **)(p + 0x718) + 0x104));
    func_00105300(p + 0x4A90, *(char **)(*(char **)(p + 0x718) + 0x104));
    {
        char *m = p + 0x2100;
        ((ObjC8 *)(p + 0x1A80))->mC8(m);
    }
    vcpy(p + 0xE0, v);
    vcpz(p + 0xF0, p + 0x5070);
    if ((unsigned char)func_001F9A70(get8(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 2;
        func_001AD140(p);
    }
}

class ObjSnd {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m2C();
};

extern "C" void func_003A9C60(char *p) {
    char m[64] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        o = *(char **)D_01CAFF0C;
        v[0] = *(float *)(*(char **)(o + 0xC) + 0x50);
        v[1] = 10.0f + *(float *)(*(char **)(o + 0xC) + 0x2924);
        v[2] = *(float *)(*(char **)(o + 0xC) + 0x58);
        v[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105230(m, m, (char *)v);
        func_00207480(3, 0x175, m, 0x10);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x724) + 0x104)) : "memory");
        v[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105230(m, m, (char *)v);
        func_0042C9B0(p, m, *(int *)(p + 0x5190));
    case 1:
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 10) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_003AB550(p);
            func_003AA6C0(p);
            ((ObjSnd *)D_005BC1A8)->m14(0x80FFFFFF, 0x28);
            *(unsigned char *)(p + 0x5165) = 1;
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

class Obj1F4 {
public:
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void w20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void w53();
    virtual void w54();
    virtual void w55();
    virtual void w56();
    virtual void w57();
    virtual void w58();
    virtual void w59();
    virtual void w60();
    virtual void w61();
    virtual void w62();
    virtual void w63();
    virtual void w64();
    virtual void w65();
    virtual void w66();
    virtual void w67();
    virtual void w68();
    virtual void w69();
    virtual void w70();
    virtual void w71();
    virtual void w72();
    virtual void w73();
    virtual void w74();
    virtual void w75();
    virtual void w76();
    virtual void w77();
    virtual void w78();
    virtual void w79();
    virtual void w80();
    virtual void w81();
    virtual void w82();
    virtual void w83();
    virtual void w84();
    virtual void w85();
    virtual void w86();
    virtual void w87();
    virtual void w88();
    virtual void w89();
    virtual void w90();
    virtual void w91();
    virtual void w92();
    virtual void w93();
    virtual void w94();
    virtual void w95();
    virtual void w96();
    virtual void w97();
    virtual void w98();
    virtual void w99();
    virtual void w100();
    virtual void w101();
    virtual void w102();
    virtual void w103();
    virtual void w104();
    virtual void w105();
    virtual void w106();
    virtual void w107();
    virtual void w108();
    virtual void w109();
    virtual void w110();
    virtual void w111();
    virtual void w112();
    virtual void w113();
    virtual void w114();
    virtual void w115();
    virtual void w116();
    virtual void w117();
    virtual void w118();
    virtual void w119();
    virtual void w120();
    virtual void w121();
    virtual void w122();
    virtual void m1F4(char *, int);
};

extern "C" void func_003BFE30(char *p) {
    char m[64] __attribute__((aligned(16)));
    float z = 0.0f;
    *(int *)(p + 0x1668) = 0;
    *(unsigned char *)(p + 0x1BC6) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1680, 0, 0) == 1) {
            func_0024E7B0(p + 0x1680, 0, 0);
            *(unsigned char *)(p + 0x1BC5) = 0;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1B98) = 60.0f;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(m + 0x30), "r"(*(char **)(*(char **)(p + 0x8B8) + 0x104) + 0x30) : "memory");
            *(float *)(m + 0x3C) = 1.0f;
            *(char **)(p + 0x2728) = func_00207480(3, 0x206, m, 0x10);
            func_0034BA60(0x22, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        break;
    case 2:
        *(float *)(p + 0x1B98) = *(float *)(p + 0x1B98) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B98) < z) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003DEBF0(p + 0x1BD0, p + 0x8B0, D_00578580, 0x1C, p);
            *(float *)(p + 0x1B98) = 90.0f;
            func_0034BA60(0x1A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        break;
    case 3:
        *(float *)(p + 0x1B98) = *(float *)(p + 0x1B98) - *(float *)(p + 0x10);
        *(float *)(p + 0x1BB4) = *(float *)(p + 0x1BB4) - 0.01f * *(float *)(p + 0x10);
        *(float *)(p + 0x1BB8) = *(float *)(p + 0x1BB8) - 0.01f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x1BB4) < z) {
            *(float *)(p + 0x1BB4) = z;
        }
        if (*(float *)(p + 0x1BB8) < 0.0f) {
            *(float *)(p + 0x1BB8) = 0.0f;
        }
        if (*(float *)(p + 0x1B98) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        func_003DF0C0(p + 0x1BD0, *(float *)(p + 0x10));
        break;
    case 4:
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        break;
    }
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x1B9C) = 30.0f;
    case 1:
        *(float *)(p + 0x1B9C) = *(float *)(p + 0x1B9C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B9C) < 0.0f) {
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            ((Obj1F4 *)p)->m1F4(p + 0x550, 0);
        }
        break;
    case 2:
        break;
    }
}

class ObjF2C {
public:
    virtual void u0();
    virtual void u1();
    virtual void u2();
    virtual void u3();
    virtual void u4();
    virtual void u5();
    virtual void u6();
    virtual void u7();
    virtual void u8();
    virtual int m2C(char *, char *);
    virtual void u10();
    virtual void u11();
    virtual void u12();
    virtual void u13();
    virtual void u14();
    virtual void u15();
    virtual void u16();
    virtual void u17();
    virtual void u18();
    virtual void u19();
    virtual void u20();
    virtual void u21();
    virtual void u22();
    virtual void u23();
    virtual void u24();
    virtual void u25();
    virtual void u26();
    virtual void u27();
    virtual void u28();
    virtual void u29();
    virtual void u30();
    virtual void u31();
    virtual void u32();
    virtual void u33();
    virtual void u34();
    virtual void u35();
    virtual void u36();
    virtual void u37();
    virtual void u38();
    virtual void u39();
    virtual void u40();
    virtual void u41();
    virtual void u42();
    virtual void u43();
    virtual void u44();
    virtual void u45();
    virtual void u46();
    virtual void u47();
    virtual void u48();
    virtual void u49();
    virtual void u50();
    virtual void mD4(int);
    virtual void u52();
    virtual void u53();
    virtual void u54();
    virtual void u55();
    virtual void u56();
    virtual void u57();
    virtual void u58();
    virtual void u59();
    virtual void u60();
    virtual void u61();
    virtual void u62();
    virtual void u63();
    virtual void u64();
    virtual void u65();
    virtual void u66();
    virtual void u67();
    virtual void u68();
    virtual void u69();
    virtual void u70();
    virtual void u71();
    virtual void u72();
    virtual void u73();
    virtual void m130();
};

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" char *func_004D9440(char *p, char *s, char *r2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (s == 0) {
        return 0;
    }
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0x590, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x590, t);
        if (r != 0) {
            func_004D9640(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x3, *b.pp);
        func_001B1430(*b.pp, 1);
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    if ((unsigned char)((ObjF2C *)(o + 0xE0))->m2C(s, p) == 0) {
        func_001AD140(ret);
        return 0;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(r2 + 0x10) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(ret + 0x520) : "memory");
    func_00105230(ret + 0x520, ret + 0x520, ret + 0x50);
    ((ObjF2C *)ret)->m130();
    return ret;
}
