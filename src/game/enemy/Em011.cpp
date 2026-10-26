/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void m6C();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

/* An actor whose virtuals at 0x2EC..0x300 are used. */
class ObjB {
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
    virtual int m2EC();
    virtual void m2F0(int);
    virtual void m2F4(int);
    virtual void m2F8(int);
    virtual void m2FC(int);
    virtual void m300(int);
    virtual void m304(int);
};

extern "C" {
/* Moves 300 units out from the body along the facing, easing over 30 frames. */
void func_00337D50(char *p) {
    extern void func_00132540(float *, char *, float);
    extern int func_0033A660(char *, int);
    extern void func_00335EF0(char *, int);
    extern float func_00132470(char *, char *);
    float v[4] __attribute__((aligned(16)));
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        p[6] = 0;
    case 1:
        ((Sub130 *)(p + 0x130))->m6C();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50), "r"(p + 0x150) : "memory");
        v[1] = 0.0f;
        func_00132540(v, (char *)v, 300.0f);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x1330), "r"(p + 0x150), "r"(v) : "memory");
        func_00335EF0(p, 0x400);
        *(float *)(p + 0x50) += *(float *)(p + 0x10) * ((*(float *)(p + 0x1330) - *(float *)(p + 0x50)) / 30.0f);
        *(float *)(p + 0x54) += *(float *)(p + 0x10) * ((*(float *)(p + 0x1334) - *(float *)(p + 0x54)) / 30.0f);
        *(float *)(p + 0x58) += *(float *)(p + 0x10) * ((*(float *)(p + 0x1338) - *(float *)(p + 0x58)) / 30.0f);
        if (func_00132470(p + 0x50, p + 0x1330) < 30.0f) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}
}

class ObjV {
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
    virtual void m6C();
    virtual void m70();
    virtual void d27();
    virtual int m78(int, int);
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
    virtual int mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};

class ObjB2 {
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
    virtual int m2FC(char *, char *);
};

/* Copies a motion setup into the object and starts it. */
extern "C" int func_0033ADA0(char *p, char *a, char *b) {
    int r;
    if (*(unsigned char *)(p + 0x14D) != 3) {
    p[0x16C] = a[0];
    p[0x16D] = a[1];
    p[0x16E] = a[2];
    *(float *)(p + 0x170) = *(float *)(a + 4);
    *(float *)(p + 0x174) = *(float *)(a + 8);
    *(float *)(p + 0x178) = *(float *)(a + 12);
    *(float *)(p + 0x17C) = *(float *)(a + 16);
    *(float *)(p + 0x180) = *(float *)(a + 20);
    p[0x184] = a[24];
    *(float *)(p + 0x188) = *(float *)(a + 28);
    p[0x18C] = a[32];
    *(float *)(p + 0x190) = *(float *)(a + 36);
    *(float *)(p + 0x194) = *(float *)(a + 40);
    *(float *)(p + 0x198) = *(float *)(a + 44);
    p[0x19C] = *(unsigned char *)(a + 48);
    *(int *)(p + 0x1A0) = *(int *)(a + 52);
    *(float *)(p + 0x1A4) = *(float *)(a + 56);
    p[0x1A8] = a[60];
    p[0x1A9] = a[61];
    p[0x1AA] = a[62];
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x150), "r"(b + 0x10) : "memory");
    ((ObjV *)(p + 0x130))->m70();
    switch (*(unsigned char *)(a + 60)) {
    case 0:
        *(short *)(*(char **)(p + 0x140) + 0x50) = *(short *)(p + 0x160);
        break;
    case 1:
        *(short *)(*(char **)(p + 0x140) + 0x50) = *(short *)(b + 0x50) + 0x8000;
        break;
    }
    ((ObjB *)p)->m2F0(3);
    r = ((ObjB2 *)p)->m2FC(a, b);
    }
    return r;
}

extern "C" {
/* Recovers the stance from +0x134 and switches to state 0x20. */
void func_0033A170(char *p) {
    extern int func_0033A660(char *, int);
    func_0033A660(p, 1);
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
    ((ObjB *)p)->m304(0x20);
}
}

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0033A580(char *);

extern "C" {
void func_003388D0(char *p) {
    extern int func_0033A660(char *, int);
    extern int func_0024E800(char *);
    extern void func_003023F0(int);
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(int *)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0033A660(p, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(short *)(p + 0x90) = *(short *)(p + 0x90) + 0x71C;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
    }
    func_0033A580(p);
}
}

extern "C" {
void func_00338C30(char *p) {
    extern int func_0033A660(char *, int);
    extern int func_0024E800(char *);
    extern void func_003023F0(int);
    extern void func_00335EF0(char *, int);
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(int *)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0033A660(p, 1);
        func_00335EF0(p, 0x40);
    case 1:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
    }
    func_0033A580(p);
}
}

/* Buckets the current motion frame into six phases at +0x134C. */
extern "C" void func_00334AA0(char *p) {
    float f = ((Sub130 *)(p + 0x130))->m7C();
    if (f <= 300.0f) {
        *(unsigned char *)(p + 0x134C) = 0;
    } else if (f <= 500.0f) {
        *(unsigned char *)(p + 0x134C) = 1;
    } else if (f <= 700.0f) {
        *(unsigned char *)(p + 0x134C) = 2;
    } else if (f <= 800.0f) {
        *(unsigned char *)(p + 0x134C) = 3;
    } else if (f <= 900.0f) {
        *(unsigned char *)(p + 0x134C) = 4;
    } else {
        *(unsigned char *)(p + 0x134C) = 5;
    }
}

extern "C" void func_00208050(char *, int);

extern "C" int func_0032D3D0(int, char *, float);

extern "C" int func_002FF750(int, int, int);

static inline char *seg_n(char *t, unsigned int i) {
    if (*(unsigned int *)(t + 4) < i + 1) {
        return 0;
    }
    if (((int *)(t + 8))[i] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[i];
}

static inline char *motion_at(char *o, unsigned int i) {
    if (**(unsigned short **)(o + 8) == 0) {
        return seg_n(*(char **)(o + 0xC), i);
    }
    return *(char **)(o + 0xC);
}

extern "C" {
void func_00333FD0(char *p) {
    extern char *func_00207480(int, int, int, int);
    char *q;
    func_00208050(motion_at(*(char **)(p + 0x4D0), 8), 2);
    *(char **)(p + 0x12B4) = func_00207480(3, 0xFA, 0, 0x10);
    q = *(char **)(p + 0x12B4);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        q[0x9A] = 0;
        *(*(char **)(p + 0x12B4) + 0x3A) = 1;
    }
    *(char **)(p + 0x12B8) = func_00207480(3, 0xFD, 0, 0x10);
    q = *(char **)(p + 0x12B8);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x684) + 0x104);
        q[0x9A] = 0;
        *(*(char **)(p + 0x12B8) + 0x3A) = 1;
    }
    *(char **)(p + 0x12BC) = func_00207480(3, 0x2CD, 0, 0x10);
    q = *(char **)(p + 0x12BC);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x6B0) + 0x104);
        q[0x9A] = 0;
        *(*(char **)(p + 0x12BC) + 0x3A) = 1;
    }
    *(int *)(p + 0xC8) = func_0032D3D0(0, p, 2.5f);
    *(int *)(p + 0x12B0) = func_002FF750(0x11, *(int *)(*(char **)(p + 0x684) + 0x104), 0);
}
}

extern "C" void func_0033A620(char *, int, int);

extern "C" {
void func_00338740(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0024E800(char *);
    extern int func_0033A660(char *, int);
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 120.0f;
        func_0033A660(p, 0);
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 120.0f;
            *(char **)(p + 0x12D4) = func_00207480(3, 0x340, 0, 0x10);
            q = *(char **)(p + 0x12D4);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x68C) + 0x104);
                q[0x9A] = 3;
            }
        }
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 0.75f * *(float *)(p + 0x10);
        break;
    case 2:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 0x1350) = 0;
            func_0033A660(p, 1);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 0, 6);
        }
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x10);
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}
}

extern "C" {
void func_0033A1C0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0024E800(char *);
    extern int func_0033A660(char *, int);
    char *q;
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(char **)(p + 0x12D8) = func_00207480(3, 0x182, 0, 0x10);
        q = *(char **)(p + 0x12D8);
        if (q != 0) {
            *(int *)(q + 0x94) = *(int *)(*(char **)(p + 0x668) + 0x104);
            q[0x99] = 0;
        }
        *(float *)(p + 0x1368) = 60.0f;
        *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
        break;
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 120.0f;
        }
        break;
    case 2:
        *(float *)(p + 0x1354) = *(float *)(p + 0x1354) + (1.0f / 120.0f) * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x1354) <= 1.0f)) {
            *(float *)(p + 0x1354) = 1.0f;
        }
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1354) = 1.0f;
        }
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}
}

static inline void fx_bind(char *e, int m) {
    *(int *)(e + 0x94) = m;
    *(unsigned char *)(e + 0x99) = 0;
}

extern "C" {
void func_00339EF0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0033A660(char *, int);
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
        *(unsigned char *)(p + 7) = 0;
        *(float *)(p + 0x1368) = 252.0f;
    case 1:
        switch (*(unsigned char *)(p + 6)) {
        case 0:
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(char **)(p + 0x12D8) = func_00207480(3, 0x182, 0, 0x10);
            if (*(char **)(p + 0x12D8) != 0) {
                fx_bind(*(char **)(p + 0x12D8), *(int *)(*(char **)(p + 0x668) + 0x104));
            }
            *(float *)(p + 0x136C) = 60.0f;
            *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
            break;
        case 1:
            *(float *)(p + 0x136C) = *(float *)(p + 0x136C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x136C) < 0.0f) {
                *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
                *(float *)(p + 0x136C) = 120.0f;
            }
            break;
        case 2:
            *(float *)(p + 0x1354) = *(float *)(p + 0x1354) + 0.008333334f * *(float *)(p + 0x10);
            if (!(*(float *)(p + 0x1354) <= 1.0f)) {
                *(float *)(p + 0x1354) = 1.0f;
            }
            *(float *)(p + 0x136C) = *(float *)(p + 0x136C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x136C) < 0.0f) {
                *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
                *(float *)(p + 0x1354) = 1.0f;
            }
            break;
        case 3:
            break;
        }
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 2, 2);
            *(float *)(p + 0x1368) = 27.0f;
        }
        break;
    case 2:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 2, 3);
            *(float *)(p + 0x1368) = 220.0f;
        }
        break;
    case 3:
        *(float *)(p + 0x50) = *(float *)(p + 0x50) + 0.4801f * *(float *)(p + 0x10);
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

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

#define SETPOS(m,s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIP(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_0033B710(char *p) {
    float m2[16];
    float m[16];
    float a[4];
    float *src = ((ObjPosC4 *)(p + 0x740))->mC4();
    QCOPY(a, src);
    SETPOS(m2, a);
    func_00105760(m, m2, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    GETPOS(a, m);
    VADDIP(p + 0x50, a);
}

class ObjSt304 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
    virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77();
    virtual void d78(); virtual void d79(); virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83();
    virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
    virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95();
    virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99(); virtual void d100(); virtual void d101();
    virtual void d102(); virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107();
    virtual void d108(); virtual void d109(); virtual void d110(); virtual void d111(); virtual void d112(); virtual void d113();
    virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118(); virtual void d119();
    virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124(); virtual void d125();
    virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129(); virtual void d130(); virtual void d131();
    virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136(); virtual void d137();
    virtual void d138(); virtual void d139(); virtual void d140(); virtual void d141(); virtual void d142(); virtual void d143();
    virtual void d144(); virtual void d145(); virtual void d146(); virtual void d147(); virtual void d148(); virtual void d149();
    virtual void d150(); virtual void d151(); virtual void d152(); virtual void d153(); virtual void d154(); virtual void d155();
    virtual void d156(); virtual void d157(); virtual void d158(); virtual void d159(); virtual void d160(); virtual void d161();
    virtual void d162(); virtual void d163(); virtual void d164(); virtual void d165(); virtual void d166(); virtual void d167();
    virtual void d168(); virtual void d169(); virtual void d170(); virtual void d171(); virtual void d172(); virtual void d173();
    virtual void d174(); virtual void d175(); virtual void d176(); virtual void d177(); virtual void d178(); virtual void d179();
    virtual void d180(); virtual void d181(); virtual void d182(); virtual void d183(); virtual void d184(); virtual void d185();
    virtual void d186(); virtual void d187(); virtual void d188(); virtual void d189(); virtual void d190(); virtual void m304(int);
};

#define VADDIPB(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" {
void func_00338540(char *p) {
    extern float func_00131BA0(int);
    extern float func_00131C20(int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
    extern int func_0033A660(char *, int);
    float t[4];
    float f;
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(unsigned char *)(p + 6) = 0;
        *(float *)(p + 0x1358) = 20.0f;
        *(float *)(p + 0x135C) = 1.0f;
        *(float *)(p + 0x60) = func_00131BA0(*(short *)(p + 0x90));
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = func_00131C20(*(short *)(p + 0x90));
    case 1:
    if (!(*(float *)(p + 0x1358) <= 0.0f)) {
        f = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
        *(float *)(p + 0x1358) = f;
        func_00132540(t, p + 0x60, f * *(float *)(p + 0x10));
        VADDIPB(p + 0x50, t);
    } else {
        ((ObjSt304 *)p)->m304(0x20);
    }
    break;
    }
}
}

#define QCOPYB(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" int func_00124EC0(int);

class ObjSt6C {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void m6C();
};

extern "C" {
void func_00338640(char *p) {
    extern void func_00335EF0(char *, int);
    extern int func_0033A660(char *, int);
    float y;
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(unsigned char *)(p + 6) = 0;
        ((ObjSt6C *)(p + 0x130))->m6C();
        QCOPYB(p + 0x1330, p + 0x150);
    case 1:
    func_00335EF0(p, 0x400);
    y = *(float *)(p + 0x54) + *(float *)(p + 0x10) * ((*(float *)(p + 0x1334) - *(float *)(p + 0x54)) / 30.0f);
    *(float *)(p + 0x54) = y;
    if ((float)func_00124EC0((int)(y - *(float *)(p + 0x1334))) < 30.0f) {
        ((ObjSt304 *)p)->m304(0x20);
    }
    break;
    }
}
}

extern "C" char D_01CAFF0C[];

class ObjMvA {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void m8C(); virtual void d34(); virtual int m94(int);
    virtual void d36(); virtual void d37(); virtual void mA0();
};

class ObjMvB {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
    virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77();
    virtual void d78(); virtual void d79(); virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83();
    virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
    virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95();
    virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99(); virtual void d100(); virtual void d101();
    virtual void d102(); virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107();
    virtual void d108(); virtual void d109(); virtual void d110(); virtual void d111(); virtual int m1C8(); virtual void d113();
    virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118(); virtual void d119();
    virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124(); virtual void d125();
    virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129(); virtual void d130(); virtual void d131();
    virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136(); virtual void d137();
    virtual void d138(); virtual void d139(); virtual void d140(); virtual void d141(); virtual void d142(); virtual void d143();
    virtual void d144(); virtual void d145(); virtual void d146(); virtual void d147(); virtual void d148(); virtual void d149();
    virtual void d150(); virtual void d151(); virtual void d152(); virtual void d153(); virtual void d154(); virtual void d155();
    virtual void d156(); virtual void d157(); virtual void d158(); virtual void d159(); virtual void d160(); virtual void d161();
    virtual void d162(); virtual void d163(); virtual void d164(); virtual void d165(); virtual void d166(); virtual void d167();
    virtual void d168(); virtual void d169(); virtual void d170(); virtual void d171(); virtual void d172(); virtual void d173();
    virtual void d174(); virtual void d175(); virtual void d176(); virtual void d177(); virtual void d178(); virtual void d179();
    virtual void d180(); virtual void d181(); virtual void d182(); virtual void d183(); virtual void d184(); virtual void d185();
    virtual void m2F0(int);
};

class ObjMvC {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual int m14(); virtual void m18(float);
};

extern "C" void func_00335FC0(char *p, float t) {
    ((ObjMvA *)(p + 0x130))->m8C();
    ((ObjMvA *)(p + 0x130))->mA0();
    if (((ObjMvB *)p)->m1C8() != 0 && ((ObjMvC *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m14() != 0) {
        ((ObjMvC *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m18(t);
        if (*(unsigned char *)(p + 0x1350) == 1) {
            ((ObjMvB *)p)->m2F0((unsigned char)((ObjMvA *)(p + 0x130))->m94(1));
        } else {
            ((ObjMvB *)p)->m2F0((unsigned char)((ObjMvA *)(p + 0x130))->m94(0));
        }
    }
}

extern "C" float D_005BC784;

extern "C" float D_005BC788;

extern "C" {
void func_00339C40(char *p) {
    extern float func_00131BA0(int);
    extern float func_00131C20(int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
    extern int func_0033A660(char *, int);
    float t[4];
    float f;
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0x1358) = D_005BC784;
        *(float *)(p + 0x135C) = D_005BC788;
        *(float *)(p + 0x60) = func_00131BA0((short)(*(short *)(p + 0x90) + 0x8000));
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = func_00131C20((short)(*(short *)(p + 0x90) + 0x8000));
    case 1:
    if (!(*(float *)(p + 0x1358) <= 0.0f)) {
        f = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
        *(float *)(p + 0x1358) = f;
        func_00132540(t, p + 0x60, f * *(float *)(p + 0x10));
        VADDIPB(p + 0x50, t);
    } else {
        ((ObjSt304 *)p)->m304(0x20);
    }
    break;
    }
}
}

extern "C" float D_005BC78C;

extern "C" float D_005BC790;

extern "C" {
void func_00339D60(char *p) {
    extern float func_00131BA0(int);
    extern float func_00131C20(int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
    extern int func_0033A660(char *, int);
    float t[4];
    float f;
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0x1358) = D_005BC78C;
        *(float *)(p + 0x135C) = D_005BC790;
        *(float *)(p + 0x60) = func_00131BA0((short)(*(short *)(p + 0x90) + 0x8000));
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = func_00131C20((short)(*(short *)(p + 0x90) + 0x8000));
    case 1:
    if (!(*(float *)(p + 0x1358) <= 0.0f)) {
        f = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
        *(float *)(p + 0x1358) = f;
        func_00132540(t, p + 0x60, f * *(float *)(p + 0x10));
        VADDIPB(p + 0x50, t);
    } else {
        ((ObjSt304 *)p)->m304(0x20);
    }
    break;
    }
}
}

extern "C" void func_00132580(float *, char *, float);

#define VSUBB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

extern "C" {
void func_00339830(char *p) {
    extern int func_0024E800(char *);
    extern int func_0033A660(char *, int);
    extern void func_001323A0(char *);
    float t[4];
    float f;
    func_0033A660(p, 0);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0x1358) = -50.0f;
        *(float *)(p + 0x135C) = 2.0f;
        ((ObjSt6C *)(p + 0x130))->m6C();
        VSUBB(p + 0x60, p + 0x150, p + 0x50);
        *(float *)(p + 0x64) = 0.0f;
        func_001323A0(p + 0x60);
    case 1:
        if (*(float *)(p + 0x1358) < 0.0f) {
            *(float *)(p + 0x1358) += *(float *)(p + 0x135C);
            func_00132580(t, p + 0x60, *(float *)(p + 0x1358));
            VADDIPB(p + 0x50, t);
        }
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjSt304 *)p)->m304(0x20);
        }
        break;
    }
}
}

void func_00334AA0(char *p);

extern "C" float D_0059DC20[];

class V1Cf {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

class V2F0 {
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
    virtual void m2F0(int);
};

class V98 {
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
    virtual void m98(int);
};

static inline float get1c() {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) {
        V1Cf *o = *(V1Cf **)(g + 0x10);
        if (o != 0) return o->m1C();
    }
    return 0.0f;
}

extern "C" void func_00334970(char *p, int a, char *b, int c, int d) {
    *(int *)(p + 0x134) = a;
    *(char **)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    *(float *)(p + 0x144) = get1c();
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x1290) = 0;
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    *(unsigned char *)(p + 0x1395) = 1;
    *(unsigned char *)(p + 0x1396) = 0;
    *(unsigned char *)(p + 0x1397) = 0;
    *(unsigned char *)(p + 0x1398) = 0;
    *(unsigned char *)(p + 0x1399) = 0;
    ((V2F0 *)p)->m2F0(0xE);
    ((V98 *)(p + 0x130))->m98(*(int *)(b + 0x1C));
    func_00334AA0(p);
    *(int *)(p + 0x129C) = 0;
    *(float *)(p + 0x1298) = *(float *)(p + 0x1294) = D_0059DC20[*(signed char *)(p + 0x134C)];
    *(int *)(p + 0x12A0) = 0;
    *(short *)(p + 0x12A4) = 0;
    *(short *)(p + 0x12A6) = 0;
    *(int *)(p + 0x1354) = 0;
    *(unsigned char *)(p + 0x134F) = 1;
    *(int *)(p + 0x1374) = 0;
    *(unsigned char *)(p + 0x138C) = 0;
}

class VS130 {
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
    virtual void m6C();
    virtual void m70();
    virtual void m74();
};

class VO304 {
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
    virtual void m304(int);
};

extern "C" {
void func_00337EC0(char *p) {
    extern void func_00335EF0(char *, int);
    extern int func_0033A660(char *, int);
    float v[4] __attribute__((aligned(16)));
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
    case 1:
        ((VS130 *)(p + 0x130))->m6C();
        ((VS130 *)(p + 0x130))->m70();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x150), "r"(p + 0x50) : "memory");
        *(float *)(p + 0x50) -= *(float *)(p + 0x10) * (v[0] / 60.0f);
        *(float *)(p + 0x58) -= *(float *)(p + 0x10) * (v[2] / 60.0f);
        ((VS130 *)(p + 0x130))->m74();
        if (!(*(float *)(p + 0x164) <= 1000.0f)) ((VO304 *)p)->m304(0x20);
        func_00335EF0(p, 0x400);
        break;
    }
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

extern "C" void func_00138340(int);

class V200 {
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
    virtual unsigned char m200(unsigned char *, int *, char *);
};

class VCC {
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
    virtual void mCC(char *);
};

extern "C" void func_0033B530(char *p) {
    int t;
    unsigned char v;
    if (((V200 *)p)->m200(&v, &t, *(char **)(*(char **)(p + 0x66C) + 0x104) + 0x30) == 0) v = 0x80;
    v = (unsigned int)((float)(unsigned int)v * *(float *)(p + 0x1354));
    if (v != 0x80) {
        func_001A5CC0(func_00279290(p + 0x740));
        func_00138340(v);
    } else {
        func_001A5B90(func_00279290(p + 0x740));
    }
    ((VCC *)(p + 0x740))->mCC(p + 0xDA0);
}

extern "C" {
void func_00338D00(char *p) {
    extern float func_00131BA0(int);
    extern float func_00131C20(int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
    extern int func_0024E800(char *);
    extern void func_003023F0(int);
    extern int func_0033A660(char *, int);
    float v[4] __attribute__((aligned(16)));
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(char **)(p + 0x12B0) != 0) func_003023F0(*(int *)(p + 0x12B0));
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0033A660(p, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1358) = 20.0f;
        *(float *)(p + 0x135C) = 0.5f;
        *(float *)(p + 0x60) = func_00131BA0(*(short *)(p + 0x90));
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = func_00131C20(*(short *)(p + 0x90));
    case 1:
        if (!(*(float *)(p + 0x1358) <= 0.0f)) {
            *(float *)(p + 0x1358) = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
            func_00132540(v, p + 0x60, *(float *)(p + 0x1358) * *(float *)(p + 0x10));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
        }
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) ((VO304 *)p)->m304(0x20);
        break;
    }
    func_0033A580(p);
}
}

class O338c {
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

#define VADDI(d, y) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(y) : "memory")

extern "C" {
void func_00338E50(char *p) {
    extern float func_00131BA0(int);
    extern float func_00131C20(int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
    extern int func_0024E800(char *);
    extern void func_003023F0(int);
    extern void func_00335EF0(char *, int);
    extern int func_0033A660(char *, int);
    float v[4] __attribute__((aligned(16)));
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(char **)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
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
            *(float *)(p + 0x1358) = 20.0f;
            *(float *)(p + 0x135C) = 0.2f;
            *(float *)(p + 0x60) = func_00131BA0(*(short *)(p + 0x90));
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = func_00131C20(*(short *)(p + 0x90));
        }
        break;
    case 2:
        if (!(*(float *)(p + 0x1358) <= 0.0f)) {
            *(float *)(p + 0x1358) = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
            func_00132540(v, p + 0x60, *(float *)(p + 0x1358) * *(float *)(p + 0x10));
            VADDI(p + 0x50, v);
        }
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((O338c *)p)->m304(0x20);
        }
        break;
    }
    func_0033A580(p);
}
}

extern "C" {
void func_00339180(char *p) {
    extern float func_00131BA0(int);
    extern float func_00131C20(int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
    extern int func_0024E800(char *);
    extern void func_003023F0(int);
    extern void func_00335EF0(char *, int);
    extern int func_0033A660(char *, int);
    float v[4] __attribute__((aligned(16)));
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(char **)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 13.0f;
        func_0033A660(p, 1);
        *(float *)(p + 0x1358) = 20.0f;
        *(float *)(p + 0x135C) = 1.0f;
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        func_00335EF0(p, 0x100);
        *(float *)(p + 0x60) = func_00131BA0(*(short *)(p + 0x90));
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = func_00131C20(*(short *)(p + 0x90));
        if (!(*(float *)(p + 0x1358) <= 0.0f)) {
            *(float *)(p + 0x1358) = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
            func_00132540(v, p + 0x60, *(float *)(p + 0x1358) * *(float *)(p + 0x10));
            VADDI(p + 0x50, v);
        }
        break;
    case 2:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((O338c *)p)->m304(0x20);
        }
        break;
    }
    func_0033A580(p);
}
}

class V2F0_1_iv {
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
    virtual void m(int);
};

class V2FC_2_ppi {
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
    virtual int m(char *, char *);
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

extern "C" void func_0033ABC0(char *v0, char *v1, char *v2) {
    int v3;
    float v4;
    int tmp27;
    if (*(unsigned char *)(v0 + 333) != 3) {
        *(char *)(v0 + 364) = *(signed char *)(v1 + 0);
        *(char *)(v0 + 365) = *(signed char *)(v1 + 1);
        *(char *)(v0 + 366) = *(signed char *)(v1 + 2);
        *(float *)(v0 + 368) = *(float *)(v1 + 4);
        *(float *)(v0 + 372) = *(float *)(v1 + 8);
        *(float *)(v0 + 376) = *(float *)(v1 + 12);
        *(float *)(v0 + 380) = *(float *)(v1 + 16);
        *(float *)(v0 + 384) = *(float *)(v1 + 20);
        *(char *)(v0 + 388) = *(signed char *)(v1 + 24);
        *(float *)(v0 + 392) = *(float *)(v1 + 28);
        *(char *)(v0 + 396) = *(signed char *)(v1 + 32);
        *(float *)(v0 + 400) = *(float *)(v1 + 36);
        *(float *)(v0 + 404) = *(float *)(v1 + 40);
        *(float *)(v0 + 408) = *(float *)(v1 + 44);
        *(char *)(v0 + 412) = *(unsigned char *)(v1 + 48);
        *(int *)(v0 + 416) = *(int *)(v1 + 52);
        *(float *)(v0 + 420) = *(float *)(v1 + 56);
        *(char *)(v0 + 424) = *(signed char *)(v1 + 60);
        *(char *)(v0 + 425) = *(signed char *)(v1 + 61);
        *(char *)(v0 + 426) = *(signed char *)(v1 + 62);
        *(short *)(v0 + 4772) = (*(short *)(v0 + 4772) + 1);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((v0 + 336)), "r"((v2 + 16)) : "memory");
        ((V70_0_v *)(v0 + 304))->m();
        v3 = *(unsigned char *)(v1 + 60);
        switch (v3) {
        case 0:
            *(short *)(*(char **)(v0 + 320) + 80) = *(short *)(v0 + 352);
            break;
        case 1:
            *(short *)(*(char **)(v0 + 320) + 80) = ((*(short *)(v2 + 80) + 32767) + 1);
            break;
        }
        switch (*(signed char *)(v1 + 0)) {
        case 5:
            ((V2F0_1_iv *)v0)->m(5);
            break;
        default:
            ((V2F0_1_iv *)v0)->m(9);
            break;
        }
        *(float *)(v0 + 4484) = (*(float *)(v0 + 4484) + 50.0f);
        tmp27 = ((V2FC_2_ppi *)v0)->m(v1, v2);
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

extern "C" float D_0059DC60[];

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

extern "C" {
void func_00338FF0(char *p) {
    extern int func_0024E800(char *);
    extern void func_003023F0(char *);
    extern void func_0033A660(char *, int);
    extern void func_00335EF0(char *, int);
    extern float func_0034C190(float, float, float);
    extern void func_00132540(float *, char *, float);
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
}

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

extern "C" void func_0034BA60(int, char *, signed char, int, int);

class B33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, Sub40 *);
};

class O33Ab {
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
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300(); virtual void d304();
    virtual void d308(); virtual void d30C(); virtual void d310(); virtual void d314();
    virtual int m318(int);
};

class U33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(char *, B33A *, char *);
};

class W33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(int, char *, char *, B33A *);
};

class X33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40();
    virtual void m44(char *, Sub40 *);
};

extern "C" void func_0033A930(Hit40 *h, char *a, B33A *b, char *c) {
    char *p = (char *)h;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    switch ((unsigned char)((O33Ab *)p)->m318(*(unsigned char *)(p + 0x14D))) {
    case 0:
        func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
        ((U33A *)(p + 0x11F4))->m14(a, b, p + 0x1150);
        b->m38(a, h);
        ((W33A *)(p + 0x120C))->m14(0, c, a, b);
        break;
    case 2:
        ((W33A *)(p + 0x120C))->m14(2, c, a, b);
        if (*(unsigned char *)(p + 0x1350) != 2) {
            (*(X33A **)(p + 0x140))->m44(a, h);
        }
        switch (*(signed char *)(a + 2)) {
        case 0:
            func_0034BA60(8, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        case 1:
            func_0034BA60(6, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        break;
    }
}

struct M207 { float m[16]; };

extern "C" void func_001AD140(char *);

class V33A {
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

extern "C" {
void func_0033A350(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern void func_0033A660(char *, int);
    char *q;
    func_0033A660(p, 0);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(char **)(p + 0x12E0) = func_00207480(3, 0x10B, 0, 0x10);
        q = *(char **)(p + 0x12E0);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x6B0) + 0x104);
            *(unsigned char *)(q + 0x9A) = 3;
            *(unsigned char *)(*(char **)(p + 0x12E0) + 0x3A) = 1;
        }
        if (*(char **)(p + 0x12B8) != 0) {
            func_001AD140(*(char **)(p + 0x12B8));
            *(char **)(p + 0x12B8) = 0;
        }
        *(float *)(p + 0x1368) = 30.0f;
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 30.0f;
            ((V33A *)p)->m1F4(p + 0x490, 0);
        }
        break;
    case 2:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 120.0f;
        }
        break;
    case 3:
        *(float *)(p + 0x1354) = *(float *)(p + 0x1354) - 0.008333334f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x1354) < 0.0f) *(float *)(p + 0x1354) = 0.0f;
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1354) = 0.0f;
            if (*(char **)(p + 0xC8) != 0) {
                func_001AD140(*(char **)(p + 0xC8));
                *(char **)(p + 0xC8) = 0;
            }
        }
        break;
    case 4:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 60.0f;
        }
        break;
    case 5:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}
}

extern "C" float func_001324E0(float *);

extern "C" void func_00448C50(float *, float *);

class W339o {
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
    virtual void m6C();
};

class W339 {
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
    virtual void d2F8();
    virtual void d2FC();
    virtual void d300();
    virtual void m304(int);
};

extern "C" {
void func_00339320(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern float func_00131BA0(short);
    extern float func_00131C20(short);
    extern void func_0033A660(char *, int);
    extern void func_00335EF0(char *, int);
    float v50[4] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    float f;
    float d;
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 112.0f;
        func_0033A660(p, 1);
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 3, 6);
        }
        func_00335EF0(p, 0x400);
        break;
    case 2:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v50), "r"(p + 0x50) : "memory");
        v50[0] = v50[0] + 100.0f * func_00131BA0(*(short *)(p + 0x90));
        v50[1] = v50[1] + 250.0f;
        v50[2] = v50[2] + 100.0f * func_00131C20(*(short *)(p + 0x90));
        ((W339o *)(p + 0x130))->m6C();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v30), "r"(p + 0x150), "r"(p + 0x50) : "memory");
        v30[1] = 0.0f;
        d = func_001324E0(v30);
        if (d < 100.0f) f = -20.0f;
        else if (d < 300.0f) f = -16.0f;
        else if (d < 500.0f) f = -12.0f;
        else if (d < 700.0f) f = -8.0f;
        else f = -4.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v40), "r"(v50) : "memory");
        v40[0] = v40[0] + 10.0f * func_00131BA0(*(short *)(p + 0x90));
        v40[1] = v40[1] + f;
        v40[2] = v40[2] + 10.0f * func_00131C20(*(short *)(p + 0x90));
        func_00448C50(v50, v40);
        break;
    case 3:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 54.0f;
            *(unsigned char *)(p + 0x1352) = 0;
        }
        break;
    case 4:
        *(unsigned char *)(p + 0x1352) = 0;
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(unsigned char *)(p + 6) = 0;
            func_0033A620(p, 3, 7);
            *(char **)(p + 0x12DC) = func_00207480(3, 0x3BF, 0, 0x10);
            q = *(char **)(p + 0x12DC);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x684) + 0x104);
                *(unsigned char *)(q + 0x9A) = 3;
            }
            *(float *)(p + 0x136C) = 8.0f;
        }
        break;
    case 5:
        switch (*(unsigned char *)(p + 6)) {
        case 0:
            *(unsigned char *)(p + 0x1352) = 0;
            *(float *)(p + 0x136C) = *(float *)(p + 0x136C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x136C) < 0.0f) *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            break;
        case 1:
            break;
        }
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) ((W339 *)p)->m304(0x20);
        break;
    }
    func_0033A580(p);
}
}

extern "C" void func_0022BFA0(char *, char *, char *, int);

class O333 {
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
    virtual void mB0(char *, char *);
};

static inline char *ent333(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch333(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent333(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_00333C40(char *p) {
    char *e;
    *(char **)(p + 0xEC0) = gch333(*(char **)(p + 0x4D0), 3);
    *(char **)(p + 0xEC4) = gch333(*(char **)(p + 0x4D0), 4);
    *(char **)(p + 0xEC8) = gch333(*(char **)(p + 0x4D0), 5);
    *(char **)(p + 0xECC) = gch333(*(char **)(p + 0x4D0), 6);
    ((O333 *)(p + 0x740))->mB0(*(char **)(p + 0xEC0), p + 0x660);
    e = gch333(*(char **)(p + 0x4D0), 2);
    func_0022BFA0(p + 0x4E0, p + 0x660, e, 0);
    func_0022BFA0(p + 0x5A0, p + 0x660, e, 1);
    *(char **)(*(char **)(p + 0x660) + 0xFC) = p + 0x1230;
    *(unsigned char *)(p + 0x123C) = 0;
    *(int *)(p + 0x1250) = 0;
    *(int *)(p + 0x1254) = 0;
    *(int *)(p + 0x1258) = 0;
    *(int *)(p + 0x125C) = 0;
    *(int *)(p + 0x1260) = 0;
    *(int *)(p + 0x1264) = 0;
    *(int *)(p + 0x1268) = 0;
    *(int *)(p + 0x126C) = 0;
    *(int *)(p + 0x1270) = 0;
    *(int *)(p + 0x1274) = 0;
    *(int *)(p + 0x1278) = 0;
    *(int *)(p + 0x127C) = 0;
}

class S338 {
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
    virtual void m6C();
    virtual void m70();
};

class A338 {
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
    virtual void d2F8();
    virtual void d2FC();
    virtual void d300();
    virtual void m304(int);
};

extern "C" float func_00132630(float *, char *);

extern "C" {
void func_003389A0(char *p) {
    extern int func_0024E800(char *);
    extern void func_003023F0(int);
    extern void func_00335EF0(char *, int);
    extern int func_0033A660(char *, int);
    extern float func_00131BA0(short);
    extern float func_00131C20(short);
    extern void func_001323A0(float *);
    extern void func_00132540(float, float *, char *);
    extern float func_0034C190(float, float, float);
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float t;
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(int *)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0033A660(p, 1);
    case 1:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 0.0f;
        }
        func_00335EF0(p, 0x100);
        break;
    case 2:
        func_00335EF0(p, 0x100);
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 3, 3);
            ((S338 *)(p + 0x130))->m6C();
            ((S338 *)(p + 0x130))->m70();
            *(float *)(p + 0x154) = *(float *)(p + 0x154) + 100.0f;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(p + 0x150), "r"(*(char **)(*(char **)(p + 0x684) + 0x104) + 0x30) : "memory");
            v[0] = 2.0f * func_00131BA0(*(short *)(p + 0x90));
            t = func_00131C20(*(short *)(p + 0x90));
            v[2] = 2.0f * t;
            v[1] = -1.0f;
            func_001323A0((float *)(p + 0x60));
            func_001323A0(v);
            if (func_00132630(v, p + 0x60) < 0.5f) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x60), "r"(v) : "memory");
            }
            *(float *)(p + 0x1358) = 50.0f;
            *(float *)(p + 0x135C) = 2.0f;
        }
        break;
    case 3:
        *(float *)(p + 0x1358) = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
        func_00132540(*(float *)(p + 0x1358) * *(float *)(p + 0x10), d, p + 0x60);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(d) : "memory");
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((A338 *)p)->m304(0x20);
        }
        break;
    }
    func_0033A580(p);
}
}

/* Hand-matched C++ functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose prototypes/classes conflict with vcalls-vcalls7. */
extern "C" char D_01CAFF0C[];

extern "C" char D_005BE098[4];

extern "C" void func_00195E20(char *, char *);

#define FB(t, o) (*(t *)(p + (o)))

extern "C" void func_001A1F90(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_0028C5C0(float, char *, int);

extern "C" void func_002EF940(char *, char *);

extern "C" void func_00206730(char *);

extern "C" int func_002077F0(char *);

extern "C" void func_00228350(char *);

extern "C" void func_00286040(char *);

extern "C" unsigned char D_0055C760[];

extern "C" unsigned char D_0055C780[];

struct A334 {
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
    virtual void d2F8();
    virtual void d2FC();
    virtual void m300();
    virtual void d304();
    virtual int m308();
};

struct C334 {
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

struct D334 {
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

struct E334 {
    virtual void d8();
    virtual void dC();
    virtual void m10(float);
};

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void kill334b(char *e) { *(unsigned char *)(e + 0x3A) = 1; }

static inline float add334(float a, float b) { return a + b; }

extern "C" void func_00334470(char *p) {
    int i;
    int k;
    char *m;
    float f;
    func_001A1F90(func_00279290(p + 0x740));
    switch (FB(unsigned char, 0x1350)) {
    case 0:
        for (i = 0; i < 0x13; i++)
            func_001A1E70(func_00279290(p + 0x740), D_0055C760[i]);
        break;
    case 1:
    case 2:
        for (i = 0; i < 0x11; i++)
            func_001A1E70(func_00279290(p + 0x740), D_0055C780[i]);
        break;
    }
    FB(unsigned char, 0x1352) = 1;
    FB(float, 0xDE0) = FB(float, 0x10);
    ((A334 *)p)->m2EC();
    ((A334 *)p)->m300();
    if (FB(unsigned char, 0x1352) == 0) {
        func_001A2000(func_00279290(p + 0x740), 0x18);
        if (FB(char *, 0x12B8) != 0)
            *(unsigned char *)(FB(char *, 0x12B8) + 0x3B) = 1;
    } else {
        if (FB(char *, 0x12B8) != 0)
            *(unsigned char *)(FB(char *, 0x12B8) + 0x3B) = 0;
    }
    FB(float, 0x84) = 6.283185f * ((float)FB(short, 0x90) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD80), "r"(p + 0x80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD70), "r"(p + 0x50) : "memory");
    UNIT(p + 0xDA0);
    func_00131700(p + 0xDA0, p + 0xDA0, p + 0xD80);
    func_00105230(p + 0xDA0, p + 0xDA0, p + 0xD70);
    func_001318E0(p + 0xDA0, p + 0xDA0, p + 0xD90);
    m = p + 0xDA0;
    FB(float, 0x590) = FB(float, 0x10);
    FB(float, 0x650) = FB(float, 0x10);
    ((C334 *)(p + 0x740))->mC8(m);
    for (i = 0; i < 0x10; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0xF4C) != 0)
            *(unsigned int *)(*(char **)((char *)(i * 4) + (int)p + 0xF4C) + 0xC) &= 0xFFFCBFFF;
    }
    if (!(FB(float, 0x1290) <= 0.0f))
        k = 1;
    else
        k = 0;
    func_0028C5C0(FB(float, 0x10), p + 0xED0, k);
    if ((FB(float, 0x129C) -= FB(float, 0x10)) <= 0.0f)
        FB(float, 0x129C) = 0.0f;
    if (FB(float, 0x129C) <= 0.0f) {
        f = FB(float, 0x10);
        f = add334(FB(float, 0x1298), f);
        FB(float, 0x1298) = f;
        if (!(f <= FB(float, 0x1294)))
            FB(float, 0x1298) = FB(float, 0x1294);
    }
    FB(int, 0x12A0) = 0;
    ((D334 *)(p + 0x11F4))->m10();
    ((D334 *)(p + 0x120C))->m10();
    if (FB(unsigned char, 0x134E) != 0)
        func_002EF940(*(char **)D_01CAFF0C, p + 0x10F0);
    for (i = 0; i < 12; i++) {
        func_00206730(p + i * 4 + 0x12B4);
        if (*(char **)((char *)(i * 4) + (int)p + 0x12B4) != 0 && (unsigned char)func_002077F0(*(char **)((char *)(i * 4) + (int)p + 0x12B4)) == 1)
            *(char **)((char *)(i * 4) + (int)p + 0x12B4) = 0;
        if (*(char **)((char *)(i * 4) + (int)p + 0x12B4) != 0) {
            if (i == 0) {
                if (FB(unsigned char, 0x134D) == 1)
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 0;
                else
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 1;
            }
            if (i == 2) {
                if (FB(unsigned char, 0x1351) == 1)
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 0;
                else
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 1;
            }
            if (i == 9) {
                if (((A334 *)p)->m308() != 0x1E) {
                    kill334b(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    *(char **)((char *)(i * 4) + (int)p + 0x12B4) = 0;
                }
            }
            if (i == 11) {
                if (((A334 *)p)->m308() != 0x1F) {
                    kill334b(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    *(char **)((char *)(i * 4) + (int)p + 0x12B4) = 0;
                }
            }
        }
    }
    func_00228350(p + 0xC8);
    func_00286040(p + 0x12B0);
    ((E334 *)(p + 0xD40))->m10(-1.0f);
    func_00195E20(D_005BE098, p);
}

extern "C" {
extern char D_0056FA40[];
}

class V2E8_4_ppiii {
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
    virtual int m(char *, char *, int, int);
};

extern "C" {
int func_00334330(char *p0) {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp1;
    int tmp2;
    v1 = p0;
    v2 = 0;
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
    v0 = *(char **)(*(char **)(p0 + 1640) + 260);
    *(char *)(p0 + 4336) = 0;
    *(char *)(p0 + 4337) = 0;
    *(short *)(p0 + 4338) = 0;
    *(int *)(p0 + 4344) = 0;
    *(int *)(p0 + 4348) = 0;
    *(int *)(p0 + 4352) = 0;
    *(int *)(p0 + 4368) = 0;
    *(int *)(p0 + 4372) = 0;
    *(int *)(p0 + 4376) = 0;
    *(int *)(p0 + 4380) = 0x3f800000;
    *(int *)(p0 + 4384) = 0x47c35000;
    *(char *)(p0 + 4388) = 0;
    *(char *)(p0 + 4389) = 0;
    *(short *)(p0 + 4390) = 0;
    while ((v2 < 10)) {
        tmp1 = ((v2 << 1) + (int)v1);
        v2 = (v2 + 1);
        *(short *)((char *)tmp1 + 4392) = -1;
    }
    *(char *)(v1 + 4336) = 0;
    *(char *)(v1 + 4337) = 0;
    *(short *)(v1 + 4338) = 0;
    *(short *)(v1 + 4340) = 0;
    *(char **)(v1 + 4344) = v1;
    *(char **)(v1 + 4348) = (v1 + 4416);
    *(char **)(v1 + 4352) = v0;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(v0), "r"((v1 + 4368)) : "memory");
    v3 = (int)v1;
    if (v3 != 0) {
        v3 = (int)(v1 + 304);
    }
    v4 = (int)v1;
    *(int *)(v1 + 276) = v3;
    if (v4 != 0) {
        v4 = (v4 + 64);
    }
    v5 = (int)v1;
    if (v5 != 0) {
        v5 = (v5 + 464);
    }
    tmp2 = ((V2E8_4_ppiii *)v1)->m((v1 + 1168), D_0056FA40, v5, v4);
    *(short *)(v1 + 4936) = 0;
    *(int *)(v1 + 4928) = 0;
    *(short *)(v1 + 4932) = 0;
    *(char *)(v1 + 4942) = 0;
    *(char *)(v1 + 4944) = 0;
    return tmp2;
}
}

class V304_1_ii {
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
    virtual int m(int);
};

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

extern "C" {
void func_00337FF0(int p0) {
    float func_00132470(char *, char *);
    void func_00335EF0(char *, int);
    int func_0033A660(int, int);
    char *v0;
    float v1;
    int v2;
    float v3;
    int tmp0;
    int tmp12;
    v0 = (char *)p0;
    tmp0 = func_0033A660(p0, 1);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        *(char *)(v0 + 6) = 0;
        ((V6C_0_v *)(v0 + 304))->m();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((v0 + 4912)), "r"((v0 + 336)) : "memory");
        *(float *)(v0 + 4916) = (*(float *)(v0 + 4916) - 400.0f);
        /* fall through */
    case 1:
        func_00335EF0(v0, 1024);
        *(float *)(v0 + 80) = (*(float *)(v0 + 80) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4912) - *(float *)(v0 + 80)) / 30.0f)));
        *(float *)(v0 + 84) = (*(float *)(v0 + 84) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4916) - *(float *)(v0 + 84)) / 30.0f)));
        *(float *)(v0 + 88) = (*(float *)(v0 + 88) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4920) - *(float *)(v0 + 88)) / 30.0f)));
        v3 = func_00132470((v0 + 80), (v0 + 4912));
        if (v3 < 30.0f) {
            tmp12 = ((V304_1_ii *)v0)->m(32);
        }
        return;
    }
}
}

extern "C" {
void func_003382D0(int p0) {
    float func_00132470(char *, char *);
    void func_00335EF0(char *, int);
    int func_0033A660(int, int);
    char *v0;
    float v1;
    int v2;
    float v3;
    int tmp0;
    int tmp12;
    v0 = (char *)p0;
    tmp0 = func_0033A660(p0, 1);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        *(char *)(v0 + 6) = 0;
        ((V6C_0_v *)(v0 + 304))->m();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((v0 + 4912)), "r"((v0 + 336)) : "memory");
        *(float *)(v0 + 4916) = (*(float *)(v0 + 4916) + 200.0f);
        /* fall through */
    case 1:
        func_00335EF0(v0, 1024);
        *(float *)(v0 + 80) = (*(float *)(v0 + 80) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4912) - *(float *)(v0 + 80)) / 30.0f)));
        *(float *)(v0 + 84) = (*(float *)(v0 + 84) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4916) - *(float *)(v0 + 84)) / 30.0f)));
        *(float *)(v0 + 88) = (*(float *)(v0 + 88) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4920) - *(float *)(v0 + 88)) / 30.0f)));
        v3 = func_00132470((v0 + 80), (v0 + 4912));
        if (v3 < 100.0f) {
            tmp12 = ((V304_1_ii *)v0)->m(32);
        }
        return;
    }
}
}

extern "C" {
void func_00338410(int p0) {
    float func_00132470(char *, char *);
    void func_00335EF0(char *, int);
    int func_0033A660(int, int);
    char *v0;
    float v1;
    int v2;
    float v3;
    int tmp0;
    int tmp12;
    v0 = (char *)p0;
    tmp0 = func_0033A660(p0, 1);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        *(char *)(v0 + 6) = 0;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((v0 + 4912)), "r"((v0 + 80)) : "memory");
        *(float *)(v0 + 4916) = (*(float *)(v0 + 4916) + 200.0f);
        /* fall through */
    case 1:
        func_00335EF0(v0, 1024);
        *(float *)(v0 + 80) = (*(float *)(v0 + 80) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4912) - *(float *)(v0 + 80)) / 30.0f)));
        *(float *)(v0 + 84) = (*(float *)(v0 + 84) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4916) - *(float *)(v0 + 84)) / 30.0f)));
        *(float *)(v0 + 88) = (*(float *)(v0 + 88) + (*(float *)(v0 + 16) * ((*(float *)(v0 + 4920) - *(float *)(v0 + 88)) / 30.0f)));
        v3 = func_00132470((v0 + 80), (v0 + 4912));
        if (v3 < 100.0f) {
            tmp12 = ((V304_1_ii *)v0)->m(32);
        }
        return;
    }
}
}

extern "C" {
extern float D_005BE19C;
}

extern "C" {
extern float D_005BE1A0;
}

extern "C" {
int func_00339700(int p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    void func_00132540(char *, char *, float);
    int func_0024E800(...);
    int func_0033A660(int, int);
    float func_0034C190(float, float, float);
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    int v5;
    float tmp3;
    float tmp5;
    float tmp9;
    v0 = (char *)p0;
    v1 = func_0033A660(p0, 0);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return v1;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        *(float *)(v0 + 4952) = D_005BE19C;
        *(float *)(v0 + 4956) = D_005BE1A0;
        tmp3 = func_00131BA0((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 96) = tmp3;
        *(int *)(v0 + 100) = 0;
        tmp5 = func_00131C20((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 104) = tmp5;
        /* fall through */
    case 1:
        v3 = *(float *)(v0 + 4952);
        v4 = 0.0f;
        if (v3 > v4) {
            tmp9 = func_0034C190(v3, v4, (*(float *)(v0 + 4956) * *(float *)(v0 + 16)));
            *(float *)(v0 + 4952) = tmp9;
            func_00132540(((stk + -32) + 32), (v0 + 96), (tmp9 * *(float *)(v0 + 16)));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v0 + 80)), "r"(((stk + -32) + 32)) : "memory");
        }
        v5 = func_0024E800((v0 + 3568));
        if ((v5 & 255) == 1) {
            v5 = ((V304_1_ii *)v0)->m(32);
        }
        return v5;
    }
}
}

extern "C" {
extern float D_005BC77C;
}

extern "C" {
extern float D_005BC780;
}

extern "C" {
int func_00339950(int p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    void func_00132540(char *, char *, float);
    int func_0024E800(...);
    int func_0033A660(int, int);
    float func_0034C190(float, float, float);
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    int v5;
    float tmp3;
    float tmp5;
    float tmp9;
    v0 = (char *)p0;
    v1 = func_0033A660(p0, 0);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return v1;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        *(float *)(v0 + 4952) = D_005BC77C;
        *(float *)(v0 + 4956) = D_005BC780;
        tmp3 = func_00131BA0((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 96) = tmp3;
        *(int *)(v0 + 100) = 0;
        tmp5 = func_00131C20((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 104) = tmp5;
        /* fall through */
    case 1:
        v3 = *(float *)(v0 + 4952);
        v4 = 0.0f;
        if (v3 > v4) {
            tmp9 = func_0034C190(v3, v4, (*(float *)(v0 + 4956) * *(float *)(v0 + 16)));
            *(float *)(v0 + 4952) = tmp9;
            func_00132540(((stk + -32) + 32), (v0 + 96), (tmp9 * *(float *)(v0 + 16)));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v0 + 80)), "r"(((stk + -32) + 32)) : "memory");
        }
        v5 = func_0024E800((v0 + 3568));
        if ((v5 & 255) == 1) {
            v5 = ((V304_1_ii *)v0)->m(32);
        }
        return v5;
    }
}
}

extern "C" {
extern char D_0059DC80[];
}

extern "C" {
void func_00339A80(int p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    int func_00207480(int, int, int, int);
    int func_0024E800(...);
    int func_0033A660(int, int);
    char *v0;
    float v1;
    int v2;
    float v3;
    int tmp0;
    float tmp2;
    float tmp4;
    int tmp7;
    int tmp11;
    int tmp12;
    v0 = (char *)p0;
    tmp0 = func_0033A660(p0, 0);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        tmp2 = func_00131BA0((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 96) = tmp2;
        *(int *)(v0 + 100) = 0;
        tmp4 = func_00131C20((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 104) = tmp4;
        *(char *)(v0 + 4944) = 1;
        tmp7 = func_00207480(3, 831, *(int *)(*(char **)(v0 + 1676) + 260), 16);
        *(int *)(v0 + 4816) = tmp7;
        *(float *)(v0 + 4984) = *(float *)((D_0059DC80 + (*(signed char *)(v0 + 4940) << 2)) + 0);
        /* fall through */
    case 1:
        tmp11 = func_0024E800((v0 + 3568));
        if ((tmp11 & 255) == 1) {
            tmp12 = ((V304_1_ii *)v0)->m(32);
        }
        return;
    }
}
}

extern "C" {
int func_00339B80(int p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    int func_0024E800(...);
    int func_0033A660(int, int);
    char *v0;
    int v1;
    int v2;
    int v3;
    float tmp1;
    float tmp3;
    v0 = (char *)p0;
    v1 = func_0033A660(p0, 0);
    v2 = *(unsigned char *)(v0 + 5);
    switch (v2) {
    default:
        return v1;
    case 0:
        *(char *)(v0 + 5) = (v2 + 1);
        tmp1 = func_00131BA0((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 96) = tmp1;
        *(int *)(v0 + 100) = 0;
        tmp3 = func_00131C20((short)((*(short *)(v0 + 144) + 32767) + 1));
        *(float *)(v0 + 104) = tmp3;
        /* fall through */
    case 1:
        v3 = func_0024E800((v0 + 3568));
        if ((v3 & 255) == 1) {
            v3 = ((V304_1_ii *)v0)->m(32);
        }
        return v3;
    }
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
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

extern "C" {
int func_0033B4A0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((V14_0_v *)(v0 + 3392))->m();
    v1 = ((VD0_0_i *)(v0 + 1856))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 468))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 472));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 468)));
    }
    return v1;
}
}
