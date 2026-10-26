#include "game/mt_rand.h"
class ObjV134 {
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
    virtual int m134(int);
};

extern "C" void func_003FA550(char *, float);

extern "C" void func_003FA440(char *, int);

extern "C" void func_003FA3F0(char *, int);

extern "C" char *func_004FED00(char *, int, int);

extern "C" void func_0041D7F0(char *, float);

extern "C" void func_0041D6E0(char *, char *, int, float);

extern "C" int func_0041E120(char *, float);

extern "C" {
void func_003F8E90(char *p) {
    extern void func_0034BA60(int, char *, int, int, int);
    extern int func_0041D6B0(float *, float);
    char *e;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x16, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_003FA440(p, -1);
        *(int *)(p + 0x47C) = 0;
        e = func_004FED00(p, 1, 0);
        if (e != 0) {
            ((ObjV134 *)e)->m130();
        }
        *(float *)(p + 0x3B8) = 128.0f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 150.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x8000000;
        *(float *)(p + 0x47C) = *(float *)(p + 0x47C) + 1.0f;
        if (!(*(float *)(p + 0x47C) <= 128.0f)) {
            *(float *)(p + 0x47C) = 128.0f;
        }
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), *(float *)(p + 0x10)) == 1) {
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        if ((unsigned char)func_0041E120(b, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            func_003FA3F0(p, 0);
        }
        break;
    }
}
}

extern "C" void func_0013D5D0(char *);

class ObjD0 {
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
    virtual void mD0();
};

class Obj14 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14();
};

extern "C" void func_003F75B0(char *p) {
    int i;
    signed char k;
    *(int *)(p + 0x110) = 0;
    ((ObjD0 *)(p + 0x540))->mD0();
    k = *(signed char *)(p + 0x46);
    if (k == 0x23 || k == 0x26 || k == 0x28) {
        ((Obj14 *)(p + 0xB40))->m14();
    }
    for (i = 0; i < *(int *)(p + 0x210); i++) {
        func_0013D5D0(p + i * 16 + 0x214);
    }
}

class VA4 {
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

class V1F0 {
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
    virtual void m1F0(int, int);
};

extern "C" void func_003F8540(char *p, unsigned int k) {
    if (*(unsigned char *)(p + 4) == 2) return;
    switch (k) {
    case 20: case 21:
        ((VA4 *)(p + 0x130))->mA4();
        ((V1F0 *)p)->m1F0(*(int *)(p + 0x148), *(int *)(p + 0x11C));
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
        *(unsigned char *)(p + 7) = 0;
        *(int *)(p + 0xEA4) = 0;
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 22:
        break;
    }
}

extern "C" float func_0041DB20(char *);

extern "C" void func_003F9940(char *);

extern "C" void func_003F98A0(char *);

extern "C" void func_003FA7E0(char *);

extern "C" {
void func_003F85D0(char *p) {
    extern void func_0034BA60(int, char *, int, int, int);
    extern int func_0041D6B0(float *, float);
    float dt = *(float *)(p + 0x10);
    float d;
    float s;
    char *b;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned int *)(p + 0x3BC) &= ~0x2000;
        func_003FA440(p, -1);
        func_003F9940(p);
        *(unsigned char *)(p + 0x488) = 0;
        *(float *)(p + 0x470) = 0.0f;
        if (*(unsigned char *)(p + 0x48D) == 2) {
            *(float *)(p + 0x3B8) = 3600.0f;
            *(unsigned char *)(p + 6) = 0x10;
        } else if (*(unsigned char *)(p + 0x48D) == 3) {
            *(float *)(p + 0x3B8) = 3600.0f;
            *(unsigned char *)(p + 6) = 0x20;
        } else {
            *(unsigned char *)(p + 6) = 1;
        }
        if (((*(unsigned int *)(p + 0x3BC) & 0x200) != 0) == 1) {
            *(float *)(p + 0x3B8) = 5.0f;
        } else if (((*(unsigned int *)(p + 0x3BC) & 0x400) != 0) == 1) {
            *(float *)(p + 0x3B8) *= 0.3f;
        }
        *(unsigned int *)(p + 0x3BC) &= ~0x200;
        *(unsigned int *)(p + 0x3BC) &= ~0x400;
    case 1:
        if (!(unsigned char)func_0041D6B0((float *)(p + 0x474), dt)) return;
        d = func_0041DB20(p + 0x50);
        if (d < 1000.0f) d = 1000.0f;
        s = 3.0f * (1000.0f / d);
        if (((*(unsigned int *)(p + 0x3BC) & 0x800) != 0) == 1) s *= 2.0f;
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), s) == 1) {
            if (*(signed char *)(p + 0x46) == 0x27 || *(signed char *)(p + 0x46) == 0x28) {
                func_003F98A0(p);
            } else {
                *(unsigned char *)(p + 6) = 2;
            }
        }
        break;
    case 2:
        *(float *)(p + 0x470) += dt;
        *(unsigned int *)(p + 0x110) |= 0x20000000;
        if (*(unsigned char *)(p + 0x488) == 10) {
            *(unsigned int *)(p + 0x3BC) |= 0x2000;
            *(float *)(p + 0x470) = 0.0f;
            func_003F98A0(p);
            *(unsigned int *)(p + 0x110) &= ~0x20000000;
            *(unsigned int *)(p + 0x110) |= 0x40000000;
        } else if (*(unsigned char *)(p + 0x488) == 0xF) {
            *(unsigned int *)(p + 0x3BC) |= 0x2000;
            *(float *)(p + 0x470) = 0.0f;
            func_003FA3F0(p, 4);
            *(unsigned int *)(p + 0x110) &= ~0x20000000;
            *(unsigned int *)(p + 0x110) |= 0x40000000;
            func_003FA7E0(p);
            *(unsigned char *)(p + 0x491) = (mt_rand() & 3) + 3;
        }
        break;
    case 0x10:
        *(unsigned int *)(p + 0x3BC) |= 0x2000;
        if (func_0041DB20(p + 0x50) < 500.0f) *(unsigned char *)(p + 6) = 0x11;
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), dt) == 1) *(unsigned char *)(p + 6) = 0x11;
        break;
    case 0x11:
        *(float *)(p + 0x3B8) = 30.0f;
        *(unsigned char *)(p + 0x48D) = 0;
        *(unsigned char *)(p + 6) = 0x12;
        func_0034BA60(0x2F, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(float *)(p + 0xF80) = 20.0f;
        *(unsigned char *)(p + 0xF3C) = 1;
    case 0x12:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), dt) == 1) *(unsigned char *)(p + 6) = 2;
        break;
    case 0x20:
        *(unsigned int *)(p + 0x3BC) |= 0x2000;
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), dt) == 1) *(unsigned char *)(p + 6) = 0x11;
        if (*(unsigned char *)(p + 0x48D) == 0) *(unsigned char *)(p + 6) = 0x21;
        break;
    case 0x21:
        *(float *)(p + 0x3B8) = 30.0f;
        *(unsigned char *)(p + 0x48D) = 0;
        *(unsigned char *)(p + 6) = 0x22;
        func_0034BA60(0x2F, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(float *)(p + 0xF80) = 20.0f;
        *(unsigned char *)(p + 0xF3C) = 1;
    case 0x22:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), dt) == 1) *(unsigned char *)(p + 6) = 0x23;
        break;
    case 0x23:
        *(float *)(p + 0x3B8) = 60.0f;
        *(unsigned char *)(p + 6) = 0x24;
    case 0x24:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), dt) == 1) {
            *(float *)(p + 0x470) = 0.0f;
            func_003FA3F0(p, 3);
            *(unsigned int *)(p + 0x110) &= ~0x20000000;
            *(unsigned int *)(p + 0x110) |= 0x40000000;
        }
        break;
    }
    b = p;
    if (b != 0) {
        b += 0x40;
    }
    func_0041E120(b, 0.0f);
}
}

extern "C" {
int func_001AD140(char *p);
}

extern "C" char D_01CAFF0C[];

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" int func_001F9A70(int, char *, float);

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

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

extern "C" void func_0041D800(char *, float, float);

class B0_3F9 {
public:
    char pad[0x40];
};

class B1_3F9 {
public:
    int x;
};

class D_3F9 : public B0_3F9, public B1_3F9 {
public:
    int y;
};

extern "C" {
void func_003F94A0(D_3F9 *self) {
    extern void func_0034BA60(int, char *, int, int, int);
    extern int func_0041D6B0(char *, float);
    char *p = (char *)self;
    short s;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(int *)(p + 0x3BC) |= 0x200;
        func_003FA440(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 20.0f;
        *(float *)(p + 0x68) = -5.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D800(p + 0x68, *(float *)(p + 0x10), 0.0f);
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        s = *(short *)(p + 0x90);
        *(short *)(p + 0x90) = *(short *)(p + 0x486);
        func_0041D6E0((char *)(B1_3F9 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        *(short *)(p + 0x90) = s;
        if ((unsigned char)func_0041E120((char *)(B1_3F9 *)self, 0.0f) == 1) {
            func_003FA550(p, 10.0f);
            func_003FA3F0(p, 0);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
        } else if (*(float *)(p + 0x64) < 0.0f) {
            *(float *)(p + 0x3B4) = 13.0f;
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        if ((unsigned char)func_0041D6B0(p + 0x3B4, *(float *)(p + 0x10)) == 1) {
            *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        func_0041D800(p + 0x68, *(float *)(p + 0x10), 0.0f);
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0((char *)(B1_3F9 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120((char *)(B1_3F9 *)self, 0.0f) == 1) {
            func_003FA550(p, 10.0f);
            func_003FA3F0(p, 0);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
        }
        break;
    }
}
}

extern "C" unsigned char D_00569FB0[];

extern "C" unsigned char D_00569FB1[];

extern "C" unsigned char D_00569FB2[];

extern "C" unsigned char D_00569FB3[];

extern "C" unsigned char D_00569FB4[];

extern "C" unsigned char D_00569FB5[];

extern "C" signed char D_005BCFB8[4];

extern "C" signed char D_005BCFBC[4];

extern "C" char *D_00569FD0[];

extern "C" char *D_00569FE0[];

extern "C" int func_003F5C00(char *);

static inline char *ent3F5(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)((char *)(i * 4) + (int)t + 8) == 0) { r = 0; } else { r = t + *(int *)((char *)(i * 4) + (int)t + 8); } return r; }

static inline char *gch3F5(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent3F5(t, k); } else { r = *(char **)(h + 0xC); } return r; }

static inline char *ent3F5c(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *gch3F5c(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent3F5c(t, k); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_003F5480(char *p, unsigned char x) {
    int j;
    int i;
    switch (*(signed char *)(p + 0x4A0)) {
    case 0x23:
        x = 0;
        break;
    case 0x24:
        x = 1;
        break;
    case 0x25:
        x = 2;
        break;
    case 0x26:
        x = 3;
        break;
    }
    *(char **)(p + 0x4E4) = gch3F5c(*(char **)(p + 0x4E0), 0);
    *(char **)(p + 0x4F8) = gch3F5c(*(char **)(p + 0x4E0), 1);
    i = x;
    j = i * 6;
    *(char **)(p + 0x4E8) = gch3F5(*(char **)(p + 0x4E0), D_00569FB0[j]);
    *(char **)(p + 0x4EC) = gch3F5(*(char **)(p + 0x4E0), D_00569FB1[j]);
    *(char **)(p + 0x4FC) = gch3F5(*(char **)(p + 0x4E0), D_00569FB2[j]);
    *(char **)(p + 0x4F0) = gch3F5(*(char **)(p + 0x4E0), D_00569FB3[j]);
    *(char **)(p + 0x4F4) = gch3F5(*(char **)(p + 0x4E0), D_00569FB4[j]);
    *(char **)(p + 0x500) = gch3F5(*(char **)(p + 0x4E0), D_00569FB5[j]);
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 3;
    *(signed char *)(p + 0x46) = D_005BCFB8[i];
    *(signed char *)(p + 0x47) = D_005BCFBC[i];
    *(char **)(p + 0xF90) = D_00569FD0[i];
    *(char **)(p + 0x11C) = D_00569FE0[i];
    if (!(unsigned char)func_003F5C00(p)) return 0;
    return 1;
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A2000(char *, int);

extern "C" short func_0034B940(char *, char *);

class Hit3F {
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
    virtual void m34(char *, char *);
    virtual void m38(char *, char *);
};

class St3F {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual int m1C();
};

class Fx3F {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int, char *, char *, Hit3F *, int);
};

class Ef3F {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, Hit3F *, int);
};

class Self3F {
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
    virtual void m358(char *, Hit3F *);
};

extern "C" {
void func_003F8050(char *p, char *hit, Hit3F *obj, char *pos) {
    extern void func_0034BA60(int, char *, signed char, int, int);
    char *b;
    unsigned char i;
    float f;
    if (*(unsigned char *)(p + 0x14D) == 3 || *(float *)(p + 0xEA4) <= 0.0f) goto end;
    switch ((unsigned char)((St3F *)(p + 0x1D0))->m1C()) {
    case 0:
        *(unsigned char *)(p + 0x498) += 0x1E;
        if (*(unsigned char *)(p + 0x498) > 0x78) *(unsigned char *)(p + 0x498) = 0x78;
        *(int *)(p + 0x474) = 0;
        *(signed char *)(p + 0x495) = *(signed char *)(hit + 0x20);
        func_0034BA60(*(int *)(hit + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
        ((Fx3F *)(p + 0xF0C))->m18(0, pos, hit, obj, *(int *)(*(char **)(p + 0x504) + 0x104));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        obj->m38(hit, b);
        ((Ef3F *)(p + 0xEF4))->m14(hit, obj, *(int *)(p + 0x11C));
        f = *(float *)(p + 0xEA4);
        if (f <= 0.0f) {
            *(unsigned char *)(p + 0x48F) = 4;
        } else if (f < 0.25f * *(float *)(p + 0x3AC)) {
            *(unsigned char *)(p + 0x48F) = 3;
        } else if (f < 0.5f * *(float *)(p + 0x3AC)) {
            *(unsigned char *)(p + 0x48F) = 2;
        } else if (f < 0.75f * *(float *)(p + 0x3AC)) {
            *(unsigned char *)(p + 0x48F) = 1;
        }
        if (*(int *)(p + 0x468) != 0) {
            for (i = 0; i < *(unsigned char *)(p + 0x48E); i++) {
                if (!((1 << i) & (*(unsigned short **)(p + 0x468))[*(unsigned char *)(p + 0x48F)])) {
                    func_001A2000(func_00279290(p + 0x540), i);
                }
            }
        }
        if (*(unsigned char *)(p + 0x14D) == 3 || *(float *)(p + 0xEA4) <= 0.0f || *(unsigned char *)(p + 4) == 2) goto end;
        *(float *)(p + 0xF80) = 5.0f;
        *(unsigned char *)(p + 0xF3C) = 1;
        if (*(unsigned char *)(p + 5) == 0) {
            *(short *)(p + 0x486) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
            switch (*(signed char *)(hit + 2)) {
            case 0:
                switch (*(signed char *)hit) {
                case 0:
                case 1:
                case 2:
                case 5:
                case 6:
                    switch (*(signed char *)(p + 0x46)) {
                    case 0x23:
                    case 0x24:
                    case 0x25:
                        *(unsigned int *)(p + 0x3BC) |= 0x100;
                        func_003FA3F0(p, 0xD);
                        break;
                    case 0x26:
                    case 0x27:
                    case 0x28:
                        break;
                    }
                    break;
                case 3:
                    func_003FA3F0(p, 0xC);
                    break;
                case 4:
                case 7:
                    func_003FA3F0(p, 0xD);
                    break;
                }
                break;
            case 1:
                break;
            }
        }
        break;
    case 2:
        switch (*(signed char *)(hit + 2)) {
        case 0:
            func_0034BA60(8, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        case 1:
            func_0034BA60(6, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        func_0034BA60(*(int *)(hit + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
        ((Fx3F *)(p + 0xF0C))->m18(2, pos, hit, obj, *(int *)(*(char **)(p + 0x504) + 0x104));
        ((Self3F *)p)->m358(hit, obj);
        break;
    case 5:
        switch (*(signed char *)(hit + 2)) {
        case 0:
            func_0034BA60(8, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            obj->m34(hit, b);
            break;
        case 1:
            func_0034BA60(6, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        ((Fx3F *)(p + 0xF0C))->m18(2, pos, hit, obj, *(int *)(*(char **)(p + 0x504) + 0x104));
        break;
    }
    if (*(unsigned char *)(p + 0x48D) != 0) *(unsigned char *)(p + 0x48D) = 0;
end:;
}
}

class Obj358 {
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
    virtual void m358(int, int);
};

extern "C" {
extern "C" void func_003F7E70(Obj358 *o, unsigned char k, int a, int b) {
    switch (k) {
    case 0:
    case 1:
        break;
    case 4:
    case 2:
    case 3:
        o->m358(a, b);
        break;
    }
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
void func_003F7EF0(char *p0, int p1, int p2) {
    int v0;
    char *v1;
    float v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = *(int *)(p0 + 284);
    v1 = p0;
    if (v0 != 0) {
        if (*(unsigned char *)(v1 + 4) != 0) {
            tmp0 = ((V18_3_iiii *)(v1 + 3828))->m(p1, p2, v0);
            v3 = *(unsigned char *)(v1 + 333);
            if (v3 != 3) {
                v2 = 0.0f;
                if (*(float *)(v1 + 3748) > v2) {
                    tmp1 = mt_rand();
                    v4 = (tmp1 & 3);
                    tmp2 = 3;
                    if (v4 != tmp2) {
                        switch (v4) {
                        case 0:
                            *(int *)(v1 + 3968) = 0x41880000;
                            *(char *)(v1 + 3900) = 1;
                            break;
                        case 1:
                            *(int *)(v1 + 3968) = 0x41a00000;
                            *(char *)(v1 + 3900) = 1;
                            break;
                        case 2:
                            *(int *)(v1 + 3968) = 0x41b00000;
                            *(char *)(v1 + 3900) = 1;
                            break;
                        }
                    } else {
                        *(int *)(v1 + 3968) = 0x41700000;
                        *(char *)(v1 + 3900) = 1;
                    }
                }
            }
        }
    }
}
}

class V94_0_v {
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
    virtual void m(void);
};

class V98_2_iiv {
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
    virtual void m(int, int);
};

class V9C_2_iiv {
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
    virtual void m(int, int);
};

class VA0_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_003FA4A0(int p0, int p1, int p2, int p3, int p4, int p5) {
    int tmp0;
    ((V94_0_v *)(p0 + 1344))->m();
    ((V98_2_iiv *)(p0 + 1344))->m(p1, p3);
    ((V9C_2_iiv *)(p0 + 1344))->m(p1, p4);
    tmp0 = ((VA0_2_iii *)(p0 + 1344))->m(p1, p5);
    return tmp0;
}
}
