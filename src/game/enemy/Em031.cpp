class Obj1F0 {
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
    virtual int m1F0(int, char *);
};

static inline unsigned char flag1(char *p, int off) {
    return *(unsigned char *)(p + off) == 1;
}

extern "C" void func_003B4B80(char *);

extern "C" void func_003AF090(Obj1F0 *o, int a, int e) {
    char *p = (char *)o;
    if (*(unsigned char *)(p + 333) != 3) {
        *(unsigned char *)(p + 333) = 3;
        *(float *)(p + 1400) = 0.0f;
        *(int *)(p + 328) = e;
        o->m1F0(*(int *)(p + 328), p + 1312);
        if (flag1(p, 8648)) {
            func_003B4B80(p);
        }
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

extern "C" void func_0024DA80(char *, int, int);

extern "C" void func_003B6490(char *, int);

extern "C" int func_003B3F70(char *);

extern "C" void func_003B4840(char *);

extern "C" int func_0024E800(char *);

extern "C" void func_003B4B60(char *, int);

extern "C" void func_003B4F60(char *);

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

/* Two-channel wait state: start both channels, then branch on the clip time or both finishing. */
extern "C" void func_003B2F80(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x26;
        func_0024DA80(p + 0x1D00, 0, 0x26);
        func_0024DA80(p + 0x1DD0, 0, 0x26);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6490(p, 1);
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" void func_003B6060(char *);

extern "C" void func_003B6310(char *);

extern "C" void func_003B0B20(char *p) {
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x13;
        func_0024DA80(p + 0x1D00, 0, 0x13);
        func_0024DA80(p + 0x1DD0, 0, 0x13);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(int *)(p + 0x2204) = *(int *)(p + 0x2210);
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 36.0f)) {
            func_003B6310(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
}

extern "C" void func_003B30D0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x27;
        func_0024DA80(p + 0x1D00, 0, 0x27);
        func_0024DA80(p + 0x1DD0, 0, 0x27);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6490(p, 2);
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" void func_003B3220(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x28;
        func_0024DA80(p + 0x1D00, 0, 0x28);
        func_0024DA80(p + 0x1DD0, 0, 0x28);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6490(p, 3);
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" void func_003B4D80(char *, int, int);

extern "C" void func_003B02C0(char *p) {
    float f;
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 5;
        func_0024DA80(p + 0x1D00, 0, 5);
        func_0024DA80(p + 0x1DD0, 0, 5);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
            return;
        }
        break;
    }
    f = ((AnimF *)(p + 0x704))->m28(0);
    if (!(f < 44.0f) && f <= 63.0f) {
        func_003B4D80(p, 0x400, 0);
    }
    func_003B4F60(p);
}

extern "C" int func_003B3CF0(char *);

extern "C" void func_003B4E70(char *, int, int);

static inline unsigned char nz2217(char *p) {
    return *(unsigned char *)(p + 0x2217) != 0;
}

extern "C" void func_003B3B60(char *p) {
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x35;
        func_0024DA80(p + 0x1D00, 0, 0x35);
        func_0024DA80(p + 0x1DD0, 0, 0x35);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2217) = 0;
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 50.0f) && nz2217(p) == 1 && (unsigned char)func_003B3CF0(p) == 1) {
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        if (((AnimF *)(p + 0x704))->m28(0) < 9.0f) {
            func_003B4E70(p, 0x1000, 0);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" int func_00131D10(float, float);

extern "C" char D_00564300[];

class Sub78 {
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
    virtual int m78(short, short);
};

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

extern "C" short func_003B5700(char *p, int i) {
    float v[4];
    VSUBR(v, D_00564300 + i * 16, p + 0x50);
    return ((Sub78 *)(p + 0x130))->m78(func_00131D10(v[0], v[2]), *(short *)(p + 0x90));
}

extern "C" char D_00564370[];

extern "C" short func_003B5850(char *p, int i) {
    float v[4];
    VSUBR(v, D_00564370 + i * 16, p + 0x50);
    return ((Sub78 *)(p + 0x130))->m78(func_00131D10(v[0], v[2]), *(short *)(p + 0x90));
}

extern "C" int func_003B5A00(char *, short);

extern "C" int func_003B45B0(char *p) {
    int i;
    if (*(unsigned char *)(p + 0x14D) == 3) {
        return 0;
    }
    if ((*(unsigned char *)(p + 0x2219) == 1) == false) {
        return 0;
    }
    for (i = 0; i < 7; i++) {
        if ((unsigned char)func_003B5A00(p, i) == 0) {
            return 0;
        }
    }
    return 1;
}

extern "C" int func_003B5A20(char *);

extern "C" int func_003B5DC0(char *, char *, float, float);

extern "C" void func_003B4720(char *p) {
    float f;
    if (((*(unsigned short *)(p + 0x20CC) & 1) != 0) == true) {
        return;
    }
    if ((*(unsigned char *)(p + 0x21C9) != 0) == true) {
        return;
    }
    f = 1.0f + (1.0f - *(float *)(p + 0x21DC));
    if ((unsigned char)func_003B5A20(p) == 1) {
        f *= 3.0f;
        if (*(int *)(p + 0x2210) == *(int *)(p + 0x21FC)) {
            f *= 3.0f;
        }
    }
    if ((unsigned char)func_003B5DC0(p, p + 0x21D0, f, 0.0f) == 1 && *(unsigned char *)(p + 0x21C9) == 0) {
        *(unsigned char *)(p + 0x21C9) = 1;
    }
}

extern "C" char D_01CAFF0C[];

class Obj1E0 {
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
    virtual float m1E0(int);
};

extern "C" void func_002F2D30(char *, Obj1E0 *);

extern "C" char *D_005BD0CC;

extern "C" void func_003B6AE0(char *, int);

extern "C" void func_003B4B80(char *p) {
    Obj1E0 *o = (Obj1E0 *)p;
    *(int *)((char *)o + 0x21E0) = 0;
    *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = *(float *)(D_005BD0CC + 0x44);
    *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)o->m1E0((unsigned int)*(float *)(D_005BD0CC + 0x2C));
    func_003B6AE0((char *)o, 0x40);
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), o);
    }
    func_003B4B60((char *)o, 0x18);
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

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

#define VADDIP(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline unsigned char cam_lock2(char *p) {
    unsigned char r;
    if (*(unsigned char *)(p + 0x21CA) == 1) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

extern "C" {
void func_003B5240(char *p) {
    extern void func_00104B80(float *, char *, float *);
    float m[16];
    float v[4];
    float *src = ((ObjPosC4 *)(p + 0x700))->mC4();
    QCOPY(p + 0x21B0, src);
    if (cam_lock2(p) != 0) {
        float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        v[0] = *(float *)(p + 0x21B0);
        v[1] = 0.0f;
        v[2] = *(float *)(p + 0x21B8);
        v[3] = 0.0f;
        UNIT(m);
        func_00105760(m, m, a);
        func_00104B80(v, (char *)m, v);
        VADDIP(p + 0x50, v);
    }
}
}

extern "C" void func_003B61B0(char *);

extern "C" int func_003B4A30(char *, short);

class ObjCm78 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual short m78(short, short);
};

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

static inline unsigned char guard_on(char *p) {
    unsigned char r;
    if (*(unsigned char *)(p + 0x21C7) == 1) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

extern "C" void func_003AF140(char *p, int a, char *hit) {
    float d[4];
    short r;
    if (*(unsigned char *)(p + 0x14D) != 3 && guard_on(p) != 0) {
        func_003B61B0(p);
        VSUBR54(d, hit + 0x10, p + 0x50);
        r = ((ObjCm78 *)(p + 0x130))->m78(func_00131D10(d[0], d[2]), *(short *)(p + 0x90));
        if ((unsigned char)func_003B4A30(p, r) & 1) {
            func_003B4B60(p, 0x1A);
        } else {
            func_003B4B60(p, 0x19);
        }
    }
}

extern "C" void func_00104C00(char *, int, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

typedef struct { int w[4]; } __attribute__((aligned(16))) qw16;

extern "C" void func_00131760(char *, char *, float *);

extern "C" char *D_005642E0[];

extern "C" qw16 D_00564680;

extern "C" void func_003B3E70(char *p) {
    float t[4];
    float r[4];
    qw16 s = D_00564680;
    char *e = D_005642E0[*(unsigned char *)(p + 0x2181)];
    *(unsigned char *)(p + 0x2182) = *(unsigned char *)(e + 2);
    t[0] = *(float *)(e + 0x10);
    t[1] = *(float *)(e + 0x14);
    t[2] = *(float *)(e + 0x18);
    t[3] = 1.0f;
    r[0] = *(float *)(e + 0x20);
    r[1] = *(float *)(e + 0x24);
    r[2] = *(float *)(e + 0x28);
    r[3] = 1.0f;
    UNIT(p + 0x2140);
    func_00131760(p + 0x2140, p + 0x2140, r);
    func_00105230(p + 0x2140, p + 0x2140, (char *)t);
    func_001318E0(p + 0x2140, p + 0x2140, (char *)&s);
    func_00104C00(p + 0x2140, (int)(*(char **)(func_00279290(p + 0x700) + 0x108) + *(unsigned char *)(p + 0x2182) * 64), p + 0x2140);
}

extern "C" int func_00201770(char *, float *, float *, float *, int);

static inline unsigned char on21c4(char *p) {
    if (*(unsigned char *)(p + 0x21C4) == 1) return 1;
    return 0;
}

extern "C" int func_003B5340(char *p) {
    float v[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float d;
    if ((unsigned char)on21c4(p) == 0) return 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
    v[1] = v[1] + 100.0f;
    v[3] = 1.0f;
    if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, o, (float *)(p + 0x20F0), 0) == 1) {
        *(float *)(p + 0x2130) = o[1];
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2070), "r"(w) : "memory");
        if (w[1] <= 0.0f) {
            d = *(float *)(p + 0x54) - *(float *)(p + 0x2130);
            if (!(d <= 10.0f) && !(d <= 100.0f)) return 1;
        }
    }
    return 0;
}

extern "C" void func_003AFE60(char *p, int k) {
    float t;
    *(unsigned short *)(p + 0x20CC) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (k) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 3;
            func_0024DA80(p + 0x1D00, 0, 3);
            func_0024DA80(p + 0x1DD0, 0, 3);
            *(unsigned char *)(p + 5) = 1;
        } else {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x29;
            func_0024DA80(p + 0x1D00, 0, 0x29);
            func_0024DA80(p + 0x1DD0, 0, 0x29);
            *(unsigned char *)(p + 5) = 2;
        }
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 22.0f)) {
            if (k == 1) {
                func_003B4B60(p, 8);
            } else if (k == 2) {
                func_003B4B60(p, 9);
            }
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
            return;
        }
        break;
    }
    t = ((AnimF *)(p + 0x704))->m28(0);
    if (!(t < 5.0f) && t <= 18.0f) {
        func_003B4D80(p, 0x400, 0);
    }
    func_003B4F60(p);
}

extern "C" void func_003B0080(char *p, int k) {
    float t;
    bool f = false;
    *(unsigned short *)(p + 0x20CC) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (k) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 4;
            func_0024DA80(p + 0x1D00, 0, 4);
            func_0024DA80(p + 0x1DD0, 0, 4);
            *(unsigned char *)(p + 5) = 1;
        } else {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2A;
            func_0024DA80(p + 0x1D00, 0, 0x2A);
            func_0024DA80(p + 0x1DD0, 0, 0x2A);
            *(unsigned char *)(p + 5) = 2;
        }
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (k && !(((AnimF *)(p + 0x704))->m28(0) < 39.0f)) {
            func_003B4B60(p, 10);
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
            return;
        }
        break;
    }
    t = ((AnimF *)(p + 0x704))->m28(0);
    if (!(t < 25.0f) && t <= 37.0f) {
        f = true;
    } else if (!(t < 80.0f) && t <= 108.0f) {
        f = true;
    }
    if (f) {
        func_003B4D80(p, 0x400, 0);
    }
    func_003B4F60(p);
}

extern "C" {
void func_003B2150(char *p, int k) {
    extern char *func_00207480(int, int, int, int);
    float t;
    float v;
    char *e;
    *(unsigned char *)(p + 0x21CA) = 0;
    *(unsigned short *)(p + 0x20CC) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (k) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x24;
            func_0024DA80(p + 0x1D00, 0, 0x24);
            func_0024DA80(p + 0x1DD0, 0, 0x24);
        } else {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x23;
            func_0024DA80(p + 0x1D00, 0, 0x23);
            func_0024DA80(p + 0x1DD0, 0, 0x23);
        }
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6060(p);
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        func_003B4D80(p, 0x1000, 1);
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 31.0f)) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            e = func_00207480(3, 0x293, 0, 0x10);
            if (e != 0) {
                *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x664) + 0x104);
                *(unsigned char *)(e + 0x9A) = 0;
                *(unsigned char *)(e + 0x3A) = 1;
            }
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
        }
        break;
    }
    t = ((AnimF *)(p + 0x704))->m28(0);
    if (!(t < 17.0f) && t <= 20.0f) {
        func_003B4D80(p, 0x800, 0);
    }
    if (!(t < 17.0f) && t < 33.0f) {
        v = (*(float *)(p + 0x164) - 150.0f) / 10.0f + 4.0f;
        if (v < 4.0f) {
            v = 4.0f;
        } else if (!(v <= 12.0f)) {
            v = 12.0f;
        }
        *(float *)(p + 0x68) = v * *(float *)(p + 0x20E0);
    } else if (!(t < 70.0f) && t < 96.0f) {
        *(float *)(p + 0x68) = 0.6f * *(float *)(p + 0x20E0);
    } else {
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
    }
    func_003B4F60(p);
}
}

typedef struct { float f[4]; } __attribute__((aligned(16))) QF3B1;

typedef struct { short h[4]; } __attribute__((aligned(8))) S83B1;

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

extern "C" void func_003B6090(char *);

class O3B2 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual float m28(int);
};

static inline unsigned char e800_3B2(char *p) {
    return func_0024E800(p);
}

static inline unsigned char both_3B2(char *p) {
    if (e800_3B2(p + 0x1D00) == 1 && e800_3B2(p + 0x1DD0) == 1) return 1;
    return 0;
}

extern "C" void func_003B2DB0(char *p, int flag) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x25;
        func_0024DA80(p + 0x1D00, 0, 0x25);
        func_0024DA80(p + 0x1DD0, 0, 0x25);
        (*(unsigned char *)(p + 5))++;
        if (flag && *(short *)(p + 0x20D2) != 0x1F) func_003B4D80(p, 0xFFFF, 1);
        func_003B6490(p, 0);
        break;
    case 1:
        if (flag) func_003B4D80(p, 0x400, 0);
        if (!(((O3B2 *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_3B2(p) == 1) func_003B4B60(p, 2);
        break;
    }
    func_003B4F60(p);
    if (flag && *(int *)(p + 0x2210) == *(int *)(p + 0x21FC) && (unsigned char)func_003B5A00(p, *(int *)(p + 0x21FC)) == 0) {
        func_003B6060(p);
        return;
    }
    func_003B6090(p);
}

extern "C" void func_003B6140(char *);

extern "C" void func_003B62C0(char *);

class W704 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual float m28(int);
};

static inline unsigned char both3B3(char *p) { unsigned char r; if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) r = 1; else r = 0; return r; }

extern "C" void func_003B3870(char *p) {
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x2E;
        func_0024DA80(p + 0x1D00, 0, 0x2E);
        func_0024DA80(p + 0x1DD0, 0, 0x2E);
        *(unsigned char *)(p + 5) = 2;
        *(float *)(p + 0x20C4) = 16.0f;
        func_003B6140(p);
        func_003B6060(p);
        break;
    case 1:
        if ((unsigned char)both3B3(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2E;
            func_0024DA80(p + 0x1D00, 0, 0x2E);
            func_0024DA80(p + 0x1DD0, 0, 0x2E);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if ((unsigned char)both3B3(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x34;
            func_0024DA80(p + 0x1D00, 0, 0x34);
            func_0024DA80(p + 0x1DD0, 0, 0x34);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
    case 3:
        if (((W704 *)(p + 0x704))->m28(0) < 36.0f) break;
        func_003B62C0(p);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 4:
        if (((W704 *)(p + 0x704))->m28(0) < 38.0f) break;
        func_003B61B0(p);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 5:
        if ((unsigned char)both3B3(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
        }
        break;
    }
    func_003B4F60(p);
    if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 0) func_003B4D80(p, 0x400, 0);
}

struct M207 { float m[16]; };

extern "C" void func_003B6330(char *);

extern "C" void func_003B6370(char *);

extern "C" void func_003B63E0(char *);

extern "C" void func_003B6450(char *);

extern "C" {
void func_003B1960(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    float t;
    char *e;
    unsigned char f = 0;
    *(unsigned char *)(p + 0x21CA) = 0;
    *(unsigned short *)(p + 0x20CC) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x1D;
        func_0024DA80(p + 0x1D00, 0, 0x1D);
        func_0024DA80(p + 0x1DD0, 0, 0x1D);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        func_003B4D80(p, 0x1000, 1);
    case 1:
        t = ((AnimF *)(p + 0x704))->m28(0);
        if (t <= 4.0f) {
            f |= 1;
        }
        if (!(t < 5.0f)) {
            f |= 2;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x68) = 23.2029f * *(float *)(p + 0x20E0);
            func_003B6330(p);
            func_003B6370(p);
            func_003B63E0(p);
        }
        break;
    case 2:
        ((AnimF *)(p + 0x704))->m28(0);
        f |= 2;
        if (both_done(p) == 1) {
            *(float *)(p + 0x20C4) = 15.0f;
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x1E;
            func_0024DA80(p + 0x1D00, 0, 0x1E);
            func_0024DA80(p + 0x1DD0, 0, 0x1E);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 3:
        f |= 2;
        *(float *)(p + 0x68) = 23.2029f * *(float *)(p + 0x20E0);
        if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1 || *(unsigned char *)(p + 0x218E) < 2) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x1F;
            func_0024DA80(p + 0x1D00, 0, 0x1F);
            func_0024DA80(p + 0x1DD0, 0, 0x1F);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003B6450(p);
            e = func_00207480(3, 0x9F, 0, 0x10);
            if (e != 0) {
                *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
                *(unsigned char *)(e + 0x9A) = 0;
                *(unsigned char *)(e + 0x3A) = 1;
            }
        }
        break;
    case 4:
        t = ((AnimF *)(p + 0x704))->m28(0);
        if (t <= 5.0f) {
            f |= 2;
            *(float *)(p + 0x68) = 8.0353f * *(float *)(p + 0x20E0);
        } else if (!(t < 20.0f) && t <= 35.0f) {
            f |= 2;
            *(float *)(p + 0x68) = 2.1354f * *(float *)(p + 0x20E0);
        }
        if (both_done(p) == 1) {
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            func_003B4B60(p, 2);
        }
        break;
    }
    if (f & 1) {
        func_003B4D80(p, 0x400, 0);
    }
    if (f & 2) {
        func_003B4F60(p);
    }
}
}

extern "C" void func_003B5910(char *, int, int);

extern "C" void func_003B51C0(char *);

class W4B8p {
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
    virtual int m1BC();
};

extern "C" void func_003B0540(char *p, int k) {
    float v;
    bool b;
    *(unsigned short *)(p + 0x20CC) |= 1;
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (!k) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xB;
            func_0024DA80(p + 0x1D00, 0, 0xB);
            func_0024DA80(p + 0x1DD0, 0, 0xB);
        } else {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xF;
            func_0024DA80(p + 0x1D00, 0, 0xF);
            func_0024DA80(p + 0x1DD0, 0, 0xF);
        }
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(unsigned char *)(p + 0x21C4) = 0;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        func_003B5910(p, 0xFFFF, 1);
        if (k) {
            func_003B4E70(p, 0x8000, 1);
        }
        break;
    case 1:
        if (both_done(p) == 1) {
            if (!k) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xC;
                func_0024DA80(p + 0x1D00, 0, 0xC);
                func_0024DA80(p + 0x1DD0, 0, 0xC);
            } else {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x10;
                func_0024DA80(p + 0x1D00, 0, 0x10);
                func_0024DA80(p + 0x1DD0, 0, 0x10);
            }
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(int *)(p + 0x60) = 0;
            *(float *)(p + 0x64) = 30.0f;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(float *)(p + 0x74) = -1.0f;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            *(unsigned char *)(p + 0x21C7) = 0;
            *(unsigned char *)(p + 0x21C8) = 0;
            *(unsigned char *)(p + 0x2219) = 0;
            *(unsigned char *)(p + 0x2218) = 0;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) <= 0.0f) {
            if (!k) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xD;
                func_0024DA80(p + 0x1D00, 0, 0xD);
                func_0024DA80(p + 0x1DD0, 0, 0xD);
            } else {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x11;
                func_0024DA80(p + 0x1D00, 0, 0x11);
                func_0024DA80(p + 0x1DD0, 0, 0x11);
            }
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(int *)(p + 0x70) = 0;
            *(float *)(p + 0x74) = -1.0f;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(float *)(p + 0x21A4) = -20.0f;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
        }
        break;
    case 3:
        if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            if (!k) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xE;
                func_0024DA80(p + 0x1D00, 0, 0xE);
                func_0024DA80(p + 0x1DD0, 0, 0xE);
            } else {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x12;
                func_0024DA80(p + 0x1D00, 0, 0x12);
                func_0024DA80(p + 0x1DD0, 0, 0x12);
            }
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            *(unsigned char *)(p + 0x21C4) = 1;
            *(unsigned char *)(p + 0x21C7) = 1;
            *(unsigned char *)(p + 0x21C8) = 1;
            *(unsigned char *)(p + 0x2219) = 1;
            *(unsigned char *)(p + 0x2218) = 1;
        }
        break;
    case 4:
        if (both_done(p) == 1) {
            if ((*(unsigned char *)(p + 0x2216) != 0) == 1) {
                *(unsigned char *)(p + 0x2216) = 0;
                func_003B4B60(p, 0x1D);
            } else {
                func_003B4B60(p, 2);
            }
        } else if ((*(unsigned char *)(p + 0x2216) != 0) == 0) {
            func_003B4D80(p, 0x800, 0);
        }
        break;
    }
    if (*(unsigned char *)(p + 6) >= 2 && *(unsigned char *)(p + 6) < 4) {
        b = false;
        v = (*(float *)(p + 0x2208) - 250.0f) / 10.0f + 5.0f;
        if (v < 5.0f) {
            v = 5.0f;
        } else if (!(v <= 30.0f)) {
            v = 30.0f;
        }
        if (!k) {
            if (*(unsigned char *)(p + 0x220C) & 1) {
                b = true;
            }
        } else if ((unsigned char)((*(unsigned char *)(p + 0x220C) != 0) ^ 1)) {
            b = true;
        } else {
            v *= -1.0f;
        }
        if (!b) {
            *(float *)(p + 0x68) = v;
            *(float *)(p + 0x78) = v;
            *(float *)(p + 0x21A8) = v;
        } else {
            *(float *)(p + 0x68) = 5.0f;
            *(float *)(p + 0x78) = 5.0f;
            *(float *)(p + 0x21A8) = 5.0f;
        }
        func_003B4F60(p);
        func_003B51C0(p);
    }
}

extern "C" void func_003B5B90(char *, int);

extern "C" void func_003B5FB0(char *);

extern "C" void func_003B6760(char *);

extern "C" void func_003B6640(char *);

extern "C" void func_003B66F0(char *);

extern "C" void func_003B5F30(char *);

extern "C" void func_003B47F0(char *);

extern "C" void func_003B0C70(char *p, unsigned char k) {
    float v;
    bool b;
    *(unsigned short *)(p + 0x20CC) |= 1;
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(int *)(p + 0x2200) = 6;
        switch (k) {
        case 0:
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xB;
            func_0024DA80(p + 0x1D00, 0, 0xB);
            func_0024DA80(p + 0x1DD0, 0, 0xB);
            break;
        case 1:
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xF;
            func_0024DA80(p + 0x1D00, 0, 0xF);
            func_0024DA80(p + 0x1DD0, 0, 0xF);
            break;
        case 2:
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 7;
            func_0024DA80(p + 0x1D00, 0, 7);
            func_0024DA80(p + 0x1DD0, 0, 7);
            break;
        }
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 0;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        if (k != 2) {
            func_003B5910(p, 0xFFFF, 1);
        }
        if (k == 1) {
            func_003B4E70(p, 0x8000, 1);
        }
        break;
    case 1:
        if (both_done(p) == 1) {
            switch (k) {
            case 0:
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xC;
                func_0024DA80(p + 0x1D00, 0, 0xC);
                func_0024DA80(p + 0x1DD0, 0, 0xC);
                break;
            case 1:
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x10;
                func_0024DA80(p + 0x1D00, 0, 0x10);
                func_0024DA80(p + 0x1DD0, 0, 0x10);
                break;
            case 2:
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 8;
                func_0024DA80(p + 0x1D00, 0, 8);
                func_0024DA80(p + 0x1DD0, 0, 8);
                break;
            }
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(int *)(p + 0x60) = 0;
            *(float *)(p + 0x64) = 30.0f;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(float *)(p + 0x74) = -1.0f;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            if (k == 2) {
                *(float *)(p + 0x20C4) = 20.0f;
            } else {
                *(float *)(p + 0x20C4) = 300.0f;
            }
            *(unsigned char *)(p + 0x21C7) = 0;
            *(unsigned char *)(p + 0x21C8) = 0;
            *(unsigned char *)(p + 0x2219) = 0;
            *(unsigned char *)(p + 0x2218) = 0;
        }
        break;
    case 2:
        if (k == 2) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -1.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x21A0) = 0.0f;
            *(float *)(p + 0x21A4) = -8.0f;
            *(float *)(p + 0x21A8) = 0.0f;
            *(float *)(p + 0x21AC) = 0.0f;
        }
    case 3:
        b = false;
        if (k == 2) {
            if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1) {
                b = true;
            }
        } else if (*(float *)(p + 0x2208) <= 50.0f || (unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1) {
            b = true;
        }
        if (b) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x14;
            func_0024DA80(p + 0x1D00, 0, 0x14);
            func_0024DA80(p + 0x1DD0, 0, 0x14);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x64) = -0.5f;
        } else if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x13;
            func_0024DA80(p + 0x1D00, 0, 0x13);
            func_0024DA80(p + 0x1DD0, 0, 0x13);
            *(unsigned char *)(p + 5) = 6;
            func_003B5B90(p, 6);
        }
        break;
    case 4:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x15;
            func_0024DA80(p + 0x1D00, 0, 0x15);
            func_0024DA80(p + 0x1DD0, 0, 0x15);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x64) = -10.0f;
            *(float *)(p + 0x74) = -8.0f;
            *(float *)(p + 0x21A4) = -30.0f;
        }
        break;
    case 5:
        if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x16;
            func_0024DA80(p + 0x1D00, 0, 0x16);
            func_0024DA80(p + 0x1DD0, 0, 0x16);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
        }
        break;
    case 6:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 35.0f)) {
            func_003B5FB0(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 7:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 40.0f)) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003B5B90(p, 6);
            func_003B6760(p);
            func_003B6640(p);
            func_003B66F0(p);
        }
        break;
    case 8:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 6;
            func_0024DA80(p + 0x1D00, 0, 6);
            func_0024DA80(p + 0x1DD0, 0, 6);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 9:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 10.0f)) {
            func_003B5F30(p);
            func_003B6060(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 10:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            func_003B6090(p);
            *(unsigned char *)(p + 0x21C9) = 0;
            func_003B47F0(p);
            *(unsigned char *)(p + 0x21CC) = 0;
        }
        break;
    }
    if (k != 2 && (*(unsigned char *)(p + 5) == 2 || *(unsigned char *)(p + 5) == 3)) {
        b = false;
        v = (*(float *)(p + 0x2208) - 250.0f) / 10.0f + 10.0f;
        if (v < 10.0f) {
            v = 10.0f;
        } else if (!(v <= 20.0f)) {
            v = 20.0f;
        }
        switch (k) {
        case 0:
            if (*(unsigned char *)(p + 0x220C) & 1) {
                b = true;
            }
            break;
        case 1:
            if ((unsigned char)((*(unsigned char *)(p + 0x220C) != 0) ^ 1)) {
                b = true;
            } else {
                v *= -1.0f;
            }
            break;
        }
        if (!b) {
            *(float *)(p + 0x68) = v;
            *(float *)(p + 0x78) = v;
            *(float *)(p + 0x21A8) = v;
        } else {
            *(float *)(p + 0x68) = 10.0f;
            *(float *)(p + 0x78) = 10.0f;
            *(float *)(p + 0x21A8) = 10.0f;
        }
        func_003B4F60(p);
    }
    if (*(unsigned char *)(p + 5) >= 2 && *(unsigned char *)(p + 5) < 6) {
        func_003B51C0(p);
    }
}

extern "C" {
bool func_003B4FA0(char *p) {
    extern void func_00104B80(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    unsigned char f = 0;
    bool r;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) = *(float *)(p + 0x60) + *(float *)(p + 0x70);
        if (!(*(float *)(p + 0x70) <= 0.0f)) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x21A0))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x21A0);
                f |= 1;
            }
        } else if (*(float *)(p + 0x60) <= *(float *)(p + 0x21A0)) {
            *(float *)(p + 0x60) = *(float *)(p + 0x21A0);
            f |= 1;
        }
    } else {
        f |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78);
        if (!(*(float *)(p + 0x78) <= 0.0f)) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x21A8))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x21A8);
                f |= 2;
            }
        } else if (*(float *)(p + 0x68) <= *(float *)(p + 0x21A8)) {
            *(float *)(p + 0x68) = *(float *)(p + 0x21A8);
            f |= 2;
        }
    } else {
        f |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105760(m, m, a);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    if (f == 3) {
        r = true;
    } else {
        r = false;
    }
    return r;
}
}

extern "C" {
int func_003AF2D0(char *, int);
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
void func_003AE080(char *p0) {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    switch (v0) {
    default:
        return;
    case 0:
        tmp0 = ((V130_1_ii *)p0)->m(v0);
        return;
    case 1:
        v1 = func_003AF2D0(p0, v0);
        return;
    }
}
}

extern "C" {
int func_0013D5D0(...);
}

class V24_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m(void);
};

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
int func_003AEBB0(int p0) {
    int v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = 0;
    v1 = (char *)p0;
    v2 = v1;
    do {
        ((V24_0_v *)(v2 + 6400))->m();
        v0 = (v0 + 1);
        v2 = (v2 + 32);
    } while ((v0 < 11));
    ((VD0_0_v *)(v1 + 1792))->m();
    ((VD0_0_v *)(v1 + 3328))->m();
    v5 = ((VD0_0_i *)(v1 + 4864))->m();
    v3 = 0;
    if ((0 < *(int *)(v1 + 528))) {
        v4 = (int)v1;
        do {
            v5 = func_0013D5D0((v4 + 532));
            v3 = (v3 + 1);
            v4 = (v4 + 16);
        } while ((v3 < *(int *)(v1 + 528)));
    }
    return v5;
}
}

class VCC_1_ii {
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
    virtual int m(int);
};

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_003AEDE0(int p0) {
    int tmp0;
    ((VCC_1_iv *)(p0 + 1792))->m((p0 + 1088));
    ((VCC_1_iv *)(p0 + 3328))->m((p0 + 1088));
    tmp0 = ((VCC_1_ii *)(p0 + 4864))->m((p0 + 1088));
    return tmp0;
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
int func_003AF260(int p0, int p1, int p2) {
    int v0;
    char *v1;
    int v2;
    if (p1 != 0) {
        v0 = (p0 + 1312);
        if (p2 != 0) {
            v1 = (char *)(p0 + 1480);
            if (v0 != 0) {
                if (v1 != 0) {
                    v2 = ((V18_3_iiii *)v1)->m(p1, p2, v0);
                }
            }
        }
    }
    return v2;
}
}

extern "C" {
void func_003B4950(int);
}

extern "C" {
void func_003B4A00(int);
}

extern "C" {
int func_003B4B00(int);
}

class V6C_0_v {
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
    virtual void m(void);
};

class V70_0_v {
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
    virtual void m(void);
};

class V74_0_v {
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
    virtual void m(void);
};

class V78_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_003B48B0(int p0) {
    int tmp2;
    int tmp3;
    ((V6C_0_v *)(p0 + 304))->m();
    ((V74_0_v *)(p0 + 304))->m();
    ((V70_0_v *)(p0 + 304))->m();
    tmp2 = ((V78_2_iii *)(p0 + 304))->m(*(short *)((char *)p0 + 352), *(short *)((char *)p0 + 144));
    *(short *)((char *)p0 + 8582) = tmp2;
    func_003B4950(p0);
    func_003B4A00(p0);
    tmp3 = func_003B4B00(p0);
    *(short *)((char *)p0 + 8588) = *(short *)((char *)p0 + 8586);
    *(short *)((char *)p0 + 8586) = ((*(unsigned char *)((char *)p0 + 8590) << 4) | *(unsigned char *)((char *)p0 + 8591));
    return tmp3;
}
}
