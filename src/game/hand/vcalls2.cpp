/* Hand-matched C++ (virtual calls), continued: functions whose real signatures conflict with
 * declarations used in vcalls.cpp (e.g. the release routine func_001AD140 returns int). */

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
