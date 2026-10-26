#include "game/mt_rand.h"
/* An object whose virtual at 0x2F8 takes an int. */
class Obj2F8 {
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
    virtual void m2F8(int);
};

extern "C" {
extern float D_005BD100[];
}

extern "C" {
extern float D_005BD104[];
}

extern "C" {
void func_003EDC10(char *p) {
    void func_003E6750(char *, int, int, int);
    ((Obj2F8 *)p)->m2F8(0x19);
    p[0x3434] = 0;
    p[0x3435] = 0;
    p[0x3436] = 0;
    if (*(int *)(p + 0x1F94) != 1) {
        func_003E6750(p, 1, 0, 0);
    }
    *(float *)(p + 0x3A8C) = D_005BD100[0] + D_005BD104[0] * (2.0f * (2.3283064e-10f * mt_rand()) - 1.0f);
}
}

extern "C" {
void func_003EEEF0(char *p) {
    void func_003E6750(char *, int, int, int);
    ((Obj2F8 *)p)->m2F8(0x2D);
    p[0x3434] = 0;
    p[0x3435] = 3;
    p[0x3436] = 2;
    if (2.3283064e-10f * mt_rand() > 0.5f) {
        func_003E6750(p, 0xE, 0, 0);
    } else {
        func_003E6750(p, 0xF, 0, 0);
    }
}
}

extern "C" {
void func_003EED40(char *p) {
    void func_003E6750(char *, int, int, int);
    extern int func_003F3830(char *);
    extern int func_0024E800(char *);
    if (func_003F3830(p)) {
        p[0x3435] = 2;
        p[0x3437] = 2;
        p[0x3438] = 2;
    } else {
        p[0x3435] = 0;
        p[0x3437] = 0;
        p[0x3438] = 0;
    }
    *(float *)(p + 0x710) -= 20.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x714) -= 20.0f * *(float *)(p + 0x35B4);
    *(float *)(p + 0x718) -= 20.0f * *(float *)(p + 0x35B8);
    if (func_0024E800(p + 0x1FD0)) {
        ((Obj2F8 *)p)->m2F8(3);
        p[0x3A80] = 0;
        p[0x3A81] = 1;
        *(float *)(p + 0x3A8C) = 300.0f + 200.0f * (2.3283064e-10f * mt_rand());
        func_003E6750(p, 0, 0, 0);
    }
}
}

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

extern "C" float D_005731F0[];

extern "C" float D_005731D0[];

static inline int dist_level(char *p) {
    int l = ((Sub130 *)(p + 0x130))->m7C() / 300.0f;
    if (l > 3) {
        l = 3;
    }
    if (*(unsigned char *)(p + 0x1BD)) {
        l = 4;
    }
    return l;
}

extern "C" {
void func_003EA030(char *p) {
    void func_003E6750(char *, int, int, int);
    extern void func_003EAF00(char *);
    float r;
    ((Obj2F8 *)p)->m2F8(1);
    if (*(int *)(p + 0x1F94) != 0) {
        func_003E6750(p, 0, 0, 0);
    }
    r = 2.3283064e-10f * mt_rand();
    *(float *)(p + 0x3A8C) = (2.0f * r - 1.0f) * D_005731F0[dist_level(p)];
    *(float *)(p + 0x3A8C) += D_005731D0[dist_level(p)];
    if (*(float *)(p + 0x357C) < 0.70700002f) {
        func_003EAF00(p);
    }
}
}

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

extern "C" int func_0034BBE0(int, char *);

extern "C" char D_00572F50[];

extern "C" {
/* Enters state 0x11, clears the three phase bytes, restarts motion 3 and grabs effect handle 4. */
void func_003ECE20(char *p) {
    extern void func_003E6750(char *, int, int, int);
    ((ObjB *)p)->m2F8(0x11);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 3, 0, 0);
    *(int *)(p + 0x3A84) = func_0034BBE0(4, D_00572F50);
}
}

extern "C" {
/* Per-frame update: step past frame 1, always tick, and finish when the motion ends. */
void func_003EF680(char *p) {
    extern int func_0024E800(char *);
    extern Sub130 *func_002792A0(char *);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003E9930(char *);
    if (!(func_002792A0(p + 0x980)->m7C() <= 1.0f)) {
        func_003F2E90(p);
    }
    func_003F2F60(p);
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}
}

extern "C" void func_003F2F90(char *);

extern "C" {
/* Enters attack state 0x25 with its phase bytes, timer 22.4 and motion 0x16; arms a 180 delay once. */
void func_003EF700(char *p) {
    extern void func_003E6750(char *, int, int, int);
    ((ObjB *)p)->m2F8(0x25);
    *(unsigned char *)(p + 0x3434) = 1;
    *(unsigned char *)(p + 0x3435) = 3;
    *(unsigned char *)(p + 0x3436) = 6;
    *(float *)(p + 0x3A14) = 22.4f;
    func_003E6750(p, 0x16, 0, 0);
    func_003F2F90(p);
    if (*(unsigned char *)(p + 0x3A9C) == 0) {
        *(float *)(p + 0x3A94) = 180.0f;
    }
    *(unsigned char *)(p + 0x3A9C) = 1;
}
}

class Sub980 {
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
    virtual float m80(int);
};

extern "C" {
/* Past frame 40 of the current motion, switch to state 0x39. */
void func_003EFAE0(char *p) {
    extern Sub130 *func_002792A0(char *);
    if (!(((Sub980 *)func_002792A0(p + 0x980))->m80(0) <= 40.0f)) {
        ((ObjB *)p)->m2F8(0x39);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 8;
        *(unsigned char *)(p + 0x3A80) = 0;
        return;
    }
}
}

extern "C" {
/* Enters state 0x3B, sets its phase bytes, restarts motion 0x1B and sparks the six weapon joints. */
void func_003F0320(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern void func_003E6750(char *, int, int, int);
    ((ObjB *)p)->m2F8(0x3B);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 3;
    *(unsigned char *)(p + 0x3436) = 4;
    func_003E6750(p, 0x1B, 0, 0);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 16);
}
}

extern "C" {
/* On a fresh hit, set the knockback phase, push the body along its velocity and maybe enter 0x58. */
void func_003F29B0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern void func_003E6750(char *, int, int, int);
    extern int func_0024E780(char *, int, int);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) != 0) {
        *(unsigned char *)(p + 0x3437) = 2;
        *(unsigned char *)(p + 0x3438) = 2;
        *(unsigned char *)(p + 0x3A80) = 1;
        *(unsigned char *)(p + 0x3A81) = 0;
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x3A10) * *(float *)(p + 0x10);
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x3A18) * *(float *)(p + 0x10);
        *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -2.0f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
            func_003E6750(p, 0x32, 0, 0);
            ((ObjB *)p)->m2F8(0x58);
            func_00207480(0, 0xF, (int)(p + 0x6E0), 16);
        }
    }
}
}

extern "C" {
void func_003F01B0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern void func_003E6750(char *, int, int, int);
    *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
    *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -0.896f * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
        ((ObjB *)p)->m2F8(0x2C);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 2;
        func_003E6750(p, 0x20, 0, 0);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 0x10);
    }
}
}

extern "C" {
void func_003EFFC0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern void func_003E6750(char *, int, int, int);
    *(float *)(p + 0x3A94) = *(float *)(p + 0x3A94) - *(float *)(p + 0x10);
    *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
    *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -0.896f * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
        ((ObjB *)p)->m2F8(0x29);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 2;
        func_003E6750(p, 0x20, 0, 0);
        *(unsigned char *)(p + 0x3A9C) = 0;
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 0x10);
    }
}
}

extern "C" char *func_00279290(char *);

struct Ent340 {
    char pad[0x15C];
    int f15C;
    char pad2[0x340 - 0x160];
};

static inline void ent_clr(char *m, unsigned int i) {
    if (i < *(unsigned short *)(m + 0xA8)) {
        (*(Ent340 **)(m + 0xBC))[i].f15C = 0;
    }
}

extern "C" void func_001A2180(char *, int, int);

extern "C" {
void func_003F0FE0(char *p) {
    extern void func_003E6750(char *, int, int, int);
    char *m;
    int i;
    ((ObjB *)p)->m2F8(0x47);
    func_003E6750(p, 0, 0, 0);
    *(unsigned char *)(p + 0x3437) = 2;
    *(unsigned char *)(p + 0x3438) = 2;
    *(float *)(p + 0x3A8C) = 120.0f;
    func_001A2180(func_00279290(p + 0x980), 0x40, 1);
    func_001A2180(func_00279290(p + 0xF80), 0x40, 1);
    m = func_00279290(p + 0x980);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
    m = func_00279290(p + 0xF80);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
}
}

extern "C" {
void func_003F1210(char *p) {
    extern void func_003E6750(char *, int, int, int);
    char *m;
    int i;
    ((ObjB *)p)->m2F8(0x48);
    func_003E6750(p, 0, 0, 0);
    *(unsigned char *)(p + 0x3437) = 2;
    *(unsigned char *)(p + 0x3438) = 2;
    *(float *)(p + 0x3A8C) = 120.0f;
    func_001A2180(func_00279290(p + 0x980), 0x40, 1);
    func_001A2180(func_00279290(p + 0xF80), 0x40, 1);
    m = func_00279290(p + 0x980);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
    m = func_00279290(p + 0xF80);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
}
}

extern "C" void func_0024E7B0(char *, int, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" {
void func_003F24F0(char *p) {
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E800(char *);
    extern int func_0024E780(char *, int, int);
    extern char *func_0028C3A0(char *, int, int, char *);
    char *e;
    func_003F2E90(p);
    func_003F2F60(p);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 1:
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x6E0) * (2.0f * *(float *)(p + 0x10));
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x6E4) * (2.0f * *(float *)(p + 0x10));
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x6E8) * (2.0f * *(float *)(p + 0x10));
    }
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 4)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 5);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 0x1E, *(char **)(*(char **)(p + 0x8C8) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        func_0028C910(p + 0x2180);
        func_0028C8E0(p + 0x2180, 8);
        e = func_0028C3A0(p + 0x2180, 0xA, 0x1E, *(char **)(*(char **)(p + 0x7FC) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        ((ObjB *)p)->m2F8(0x54);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(float *)(p + 0x3A8C) = 10.0f;
    }
}
}

extern "C" char D_00572F60[];

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

struct Rate18 {
    float id;
    float v[5];
};

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

extern "C" {
void func_003ECC20(char *p) {
    extern void func_003F2F60(char *);
    extern int func_0024E800(char *);
    extern int func_0024E780(char *, int, int);
    extern float D_00570308[];
    extern void func_003F32B0(char *);
    extern void func_003F2D20(char *, float);
    float w[256];
    int k;
    int n;
    Rate18 *e;
    float r;
    func_003F32B0(p);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) != 0) {
        k = speed_band(p);
        r = D_00570308[k];
        func_003F2D20(p, r * *(float *)(p + 0x10));
    }
    func_003F2F60(p);
    func_003F32B0(p);
    if (func_0024E800(p + 0x1FD0) != 0) {
        ((ObjV2F8 *)p)->m2F8(0xF);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(int *)(p + 0x2170) = 0;
        e = (Rate18 *)D_00572F60;
        k = speed_band(p);
        for (n = 0; !(e->v[0] < 0.0f); n++) {
            w[n] = e->v[k];
            e++;
        }
        *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
    }
}
}

extern "C" float D_0057031C[];

extern "C" {
void func_003ECE90(char *p) {
    extern void func_003E6750(char *, int, int, int);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E800(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003F32B0(char *);
    extern void func_003F2D20(char *, float);
    float w[256];
    int k;
    int n;
    Rate18 *e;
    float r;
    func_003F32B0(p);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) != 0) {
        k = speed_band(p);
        r = D_0057031C[k];
        func_003F2D20(p, r * *(float *)(p + 0x10));
    }
    func_003F2E90(p);
    func_003F2F60(p);
    if (func_0024E800(p + 0x1FD0) != 0) {
        *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) - 1;
        if (*(int *)(p + 0x3A84) <= 0) {
            ((ObjV2F8 *)p)->m2F8(0x12);
            *(unsigned char *)(p + 0x3434) = 0;
            *(unsigned char *)(p + 0x3435) = 0;
            *(unsigned char *)(p + 0x3436) = 0;
            *(int *)(p + 0x2170) = 0;
            e = (Rate18 *)D_00572F60;
            k = speed_band(p);
            for (n = 0; !(e->v[0] < 0.0f); n++) {
                w[n] = e->v[k];
                e++;
            }
            *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
        } else {
            func_003E6750(p, 3, 0, 0);
        }
    }
}
}

extern "C" float D_005702CC[];

extern "C" {
void func_003EBB80(char *p) {
    extern void func_003E6750(char *, int, int, int);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E800(char *);
    extern void func_003F32B0(char *);
    extern void func_003F2D20(char *, float);
    float w[256];
    int k;
    int n;
    Rate18 *e;
    float r;
    func_003F32B0(p);
    k = speed_band(p);
    r = D_005702CC[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    func_003F2E90(p);
    func_003F2F60(p);
    if (func_0024E800(p + 0x1FD0) != 0) {
        *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) - 1;
        if (*(int *)(p + 0x3A84) <= 0) {
            ((ObjV2F8 *)p)->m2F8(9);
            *(unsigned char *)(p + 0x3434) = 0;
            *(unsigned char *)(p + 0x3435) = 0;
            *(unsigned char *)(p + 0x3436) = 0;
            *(int *)(p + 0x2170) = 0;
            e = (Rate18 *)D_00572F60;
            k = speed_band(p);
            for (n = 0; !(e->v[0] < 0.0f); n++) {
                w[n] = e->v[k];
                e++;
            }
            *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
        } else {
            func_003E6750(p, 2, 0, 0);
        }
    }
}
}

extern "C" void func_00133450(char *, float *, float *);

extern "C" {
void func_003EB870(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern void func_003E6750(char *, int, int, int);
    extern int func_0024E780(char *, int, int);
    extern void func_003F32B0(char *);
    extern void func_003F2D20(char *, float);
    float b[4];
    float a[4];
    func_003F32B0(p);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) != 0) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x3A10) * *(float *)(p + 0x10);
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x3A18) * *(float *)(p + 0x10);
        *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -1.6f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
            ((ObjV2F8 *)p)->m2F8(0x24);
            func_003E6750(p, 4, 0, 0);
            func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 0x10);
            func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 0x10);
            func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 0x10);
            func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 0x10);
            func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 0x10);
            func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 0x10);
        }
    }
    a[0] = 0.98f * *(float *)(p + 0x6F0);
    a[1] = 0.02f + 0.98f * *(float *)(p + 0x6F4);
    a[2] = 0.98f * *(float *)(p + 0x6F8);
    b[0] = *(float *)(p + 0x700);
    b[1] = *(float *)(p + 0x704);
    b[2] = *(float *)(p + 0x708);
    b[3] = 0.0f;
    func_00133450(p + 0x6E0, a, b);
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 2) != 0) {
        func_003F2D20(p, 0.2f * *(float *)(p + 0x10));
    }
}
}

extern "C" float D_00570290[];

extern "C" int func_0024E810(char *);

class Sub88 {
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

extern "C" {
void func_003EA250(char *p) {
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003E9930(char *);
    extern int func_0024E800(char *);
    extern void func_003F32B0(char *);
    extern void func_003F2D20(char *, float);
    int k;
    func_003F32B0(p);
    k = speed_band(p);
    func_003F2D20(p, *(float *)(p + 0x10) * D_00570290[k]);
    func_003F2F60(p);
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    if (func_0024E800(p + 0x1FD0) != 0 || *(float *)(p + 0x3A8C) < 0.0f) {
        func_003E9930(p);
        return;
    }
    func_003F32B0(p);
    if (((Sub88 *)(p + 0x130))->m88() != 0) {
        func_003E9930(p);
        return;
    }
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
}
}

extern "C" char D_00572F28[];

extern "C" float D_00572F38[];

extern "C" void func_00133890(char *, float *, char *);

extern "C" {
void func_003EE230(char *p) {
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003F2D20(char *, float);
    float v[4];
    func_003F2D20(p, 0.04f * *(float *)(p + 0x10));
    v[0] = 0.8f * *(float *)(p + 0x700) + 0.2f * *(float *)(p + 0x3A20);
    v[1] = 0.8f * *(float *)(p + 0x704) + 0.2f * *(float *)(p + 0x3A24);
    v[2] = 0.8f * *(float *)(p + 0x708) + 0.2f * *(float *)(p + 0x3A28);
    func_00133890(p + 0x6E0, v, p + 0x6F0);
    func_003F2F60(p);
    if (func_0024E810(p + 0x1FD0) == 0) {
        func_003F2E90(p);
    }
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        ((ObjV2F8 *)p)->m2F8(0x1C);
        *(float *)(p + 0x3A8C) = D_00572F38[func_0034BBE0(3, D_00572F28)];
        *(int *)(p + 0x2170) = 0;
    }
}
}

extern "C" void func_0013D5D0(char *);

extern "C" void func_002E2BD0(char *);

class ObjSkD0 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void mD0();
};

class ObjSk14 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void m14();
};

extern "C" void func_003E4F80(char *p) {
    int i;
    ((ObjSkD0 *)(p + 0x980))->mD0();
    ((ObjSkD0 *)(p + 0xF80))->mD0();
    switch (*(int *)(p + 0x7D8)) {
    case 1:
        ((ObjSk14 *)(p + 0x1580))->m14();
        ((ObjSk14 *)(p + 0x1610))->m14();
        break;
    }
    ((ObjSkD0 *)(p + 0x16C0))->mD0();
    func_002E2BD0(p + 0x1E40);
    for (i = 0; i < *(int *)(p + 0x1D4); i++) {
        func_0013D5D0(p + i * 16 + 0x1D8);
    }
}

extern "C" char D_01CAFF0C[];

extern "C" int D_0057338C[];

extern "C" void func_003E79D0(char *, char *, char *, char *);

class X3E {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

class S3E {
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

class Y3E {
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

extern "C" void func_003E6FD0(char *p, int a, int b, int c, int d) {
    char *g;
    char *q;
    char *r;
    float t;
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g && *(X3E **)(g + 0x10)) t = (*(X3E **)(g + 0x10))->m1C();
    else t = 0.0f;
    *(float *)(p + 0x144) = t;
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x3424) = 0;
    r = p;
    if (p) r += 0x40;
    q = p;
    if (p) q += 0xD0;
    func_003E79D0(p, p + 0x7B0, q, r);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    switch (*(unsigned short *)(p + 0x7D2)) {
    case 0: ((S3E *)p)->m2F0(0x80); break;
    case 1: ((S3E *)p)->m2F0(0x81); break;
    case 2: ((S3E *)p)->m2F0(0x82); break;
    case 3: ((S3E *)p)->m2F0(0x84); break;
    case 4: ((S3E *)p)->m2F0(0x85); break;
    case 5: ((S3E *)p)->m2F0(0x86); break;
    default: ((S3E *)p)->m2F0(0x80); break;
    }
    ((Y3E *)(p + 0x130))->m98(D_0057338C[0]);
}

extern "C" float D_00573260[];

class O3E5 {
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
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void m2F0(int);
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void m314(char *, char *);
};

class A3E5 {
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
    virtual float m7C();
};

static inline float frand3E5(void) { return 2.3283064e-10f * (float)mt_rand(); }

extern "C" {
void func_003E56D0(char *p, char *a, char *w) {
    extern int func_003F3830(char *);
    extern void func_00206730(char *);
    extern void func_001AD140(char *);
    float f;
    int k;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    *(char *)(p + 0x3B94) = *(signed char *)(a + 0);
    *(char *)(p + 0x3B95) = *(signed char *)(a + 1);
    *(char *)(p + 0x3B96) = *(signed char *)(a + 2);
    *(float *)(p + 0x3B98) = *(float *)(a + 4);
    *(float *)(p + 0x3B9C) = *(float *)(a + 8);
    *(float *)(p + 0x3BA0) = *(float *)(a + 0xC);
    *(float *)(p + 0x3BA4) = *(float *)(a + 0x10);
    *(float *)(p + 0x3BA8) = *(float *)(a + 0x14);
    *(char *)(p + 0x3BAC) = *(signed char *)(a + 0x18);
    *(float *)(p + 0x3BB0) = *(float *)(a + 0x1C);
    *(char *)(p + 0x3BB4) = *(signed char *)(a + 0x20);
    *(float *)(p + 0x3BB8) = *(float *)(a + 0x24);
    *(float *)(p + 0x3BBC) = *(float *)(a + 0x28);
    *(float *)(p + 0x3BC0) = *(float *)(a + 0x2C);
    *(char *)(p + 0x3BC4) = *(unsigned char *)(a + 0x30);
    *(int *)(p + 0x3BC8) = *(int *)(a + 0x34);
    *(float *)(p + 0x3BCC) = *(float *)(a + 0x38);
    *(char *)(p + 0x3BD0) = *(signed char *)(a + 0x3C);
    *(char *)(p + 0x3BD1) = *(signed char *)(a + 0x3D);
    *(char *)(p + 0x3BD2) = *(signed char *)(a + 0x3E);
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) func_001AD140(*(char **)(p + 0x3BE8));
    if (*(char **)(p + 0x3BEC) != 0) func_001AD140(*(char **)(p + 0x3BEC));
    if (*(char **)(p + 0x3BF0) != 0) func_001AD140(*(char **)(p + 0x3BF0));
    f = 100.0f * frand3E5();
    k = (int)(((A3E5 *)(p + 0x130))->m7C() / 300.0f);
    if (k > 3) k = 3;
    if (*(unsigned char *)(p + 0x1BD) != 0) k = 4;
    if (!(f <= D_00573260[k])) {
        ((O3E5 *)p)->m314(a, w);
        return;
    }
    if (func_003F3830(p) != 0) {
        if (*(unsigned char *)(p + 0x342C) == 0x20 || *(unsigned char *)(p + 0x342C) == 0x22) {
            ((O3E5 *)p)->m2F0(0x7D);
        } else if (*(unsigned char *)(p + 0x3434) == 0) {
            ((O3E5 *)p)->m2F0(0x10);
        }
    }
    ((O3E5 *)p)->m314(a, w);
}
}

extern "C" {
void func_003EDC10(char *p);
}

extern "C" {
void func_003EEEF0(char *p);
}

extern "C" {
void func_003EA030(char *p);
}

void func_003ECE20(char *p);

void func_003EF700(char *p);

void func_003F0320(char *p);

extern "C" {
void func_003F0FE0(char *p);
}

extern "C" {
void func_003F1210(char *p);
}

extern "C" void func_003EA390(char *);

extern "C" void func_003EB3D0(char *);

extern "C" void func_003EBB10(char *);

extern "C" void func_003EC030(char *);

extern "C" void func_003EC600(char *);

extern "C" void func_003ECBD0(char *);

extern "C" void func_003ED110(char *);

extern "C" void func_003EDA10(char *);

extern "C" void func_003EE030(char *);

extern "C" void func_003EE3A0(char *);

extern "C" void func_003EEA50(char *);

extern "C" void func_003EF160(char *);

extern "C" void func_003EF260(char *);

extern "C" void func_003EF8F0(char *);

extern "C" void func_003EF950(char *);

extern "C" void func_003EFDD0(char *);

extern "C" void func_003F0460(char *);

extern "C" void func_003F0500(char *);

extern "C" void func_003F0640(char *);

extern "C" void func_003F0AA0(char *);

extern "C" void func_003F0AF0(char *);

extern "C" void func_003F0D00(char *);

extern "C" void func_003F0D90(char *);

extern "C" void func_003F1440(char *);

extern "C" void func_003F1550(char *);

extern "C" void func_003F1660(char *);

extern "C" void func_003F16F0(char *);

extern "C" void func_003F1C10(char *);

extern "C" void func_003F1F60(char *);

extern "C" void func_003F2150(char *);

extern "C" void func_003F26D0(char *);

extern "C" void func_003F2800(char *);

extern "C" void func_003EB530(char *, int, int);

class Self3E7 {
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
    virtual void m2F4();
};

extern "C" {
void func_003E71A0(char *p) {
    extern void func_003EAF00(char *);
    extern void func_003E9930(char *);
    if (*(unsigned char *)(p + 0x3A4D) != 0) {
        *(unsigned char *)(p + 0x3A4D) = 0;
        *(unsigned char *)(p + 0x3A4E) = 0;
        *(int *)(p + 0x3A10) = 0;
        *(int *)(p + 0x3A14) = 0;
        *(int *)(p + 0x3A18) = 0;
        switch (*(int *)(p + 0x3430)) {
        case 0x64:
            func_003E9930(p);
            break;
        case 0x65:
            func_003EA030(p);
            break;
        case 0x73:
            func_003EAF00(p);
            break;
        case 0x74:
            func_003EB3D0(p);
            break;
        case 0x66:
            func_003EBB10(p);
            break;
        case 0x67:
            func_003EC030(p);
            break;
        case 0x68:
            func_003EC600(p);
            break;
        case 0x6B:
            func_003ECE20(p);
            break;
        case 0x6C:
            func_003ECBD0(p);
            break;
        case 0x6D:
            func_003ED110(p);
            break;
        case 0x76:
            func_003EDA10(p);
            break;
        case 0x6E:
            func_003EDC10(p);
            break;
        case 0x6F:
            func_003EE030(p);
            break;
        case 0x77:
            func_003F16F0(p);
            break;
        case 0x78:
            func_003F1C10(p);
            break;
        case 0x7A:
            func_003F2150(p);
            break;
        case 0x79:
            func_003F1F60(p);
            break;
        case 0x7B:
            func_003F2800(p);
            break;
        case 0x71:
            func_003EB530(p, 1, 1);
            break;
        case 0x72:
            func_003EB530(p, 1, 1);
            break;
        case 0x70:
            func_003EA390(p);
            break;
        case 0x0:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                func_003EEEF0(p);
            }
            break;
        case 0x1:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                func_003EF160(p);
            }
            break;
        case 0x3:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                *(float *)(p + 0x6E0) *= -1.0f;
                *(float *)(p + 0x6E4) *= -1.0f;
                *(float *)(p + 0x6E8) *= -1.0f;
                *(float *)(p + 0x700) *= -1.0f;
                *(float *)(p + 0x704) *= -1.0f;
                *(float *)(p + 0x708) *= -1.0f;
                func_003EF260(p);
            }
            break;
        case 0x4:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                func_003F0320(p);
            }
            break;
        case 0x7:
            func_003EF700(p);
            break;
        case 0xA:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                func_003F0320(p);
            }
            break;
        case 0xB:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                func_003F0460(p);
            }
            break;
        case 0xC:
            if (*(unsigned char *)(p + 0x35E0) != 0) {
                func_003EF950(p);
            } else {
                func_003EF8F0(p);
            }
            break;
        case 0xD:
            break;
        case 0x5:
            break;
        case 0x6:
            break;
        case 0x12:
            break;
        case 0x13:
            break;
        case 0xF:
            break;
        case 0x10:
            func_003EE3A0(p);
            break;
        case 0x7E:
            func_003F26D0(p);
            break;
        case 0x7D:
            func_003EEA50(p);
            break;
        case 0x7F:
            func_003EF950(p);
            break;
        case 0x87:
            func_003F0AA0(p);
            break;
        case 0x88:
            func_003F0AF0(p);
            break;
        case 0x9:
            func_003EFDD0(p);
            break;
        case 0x8:
            func_003EFDD0(p);
            break;
        case 0x11:
            break;
        case 0x2:
            func_003EF260(p);
            break;
        case 0xE:
            func_003F0D00(p);
            break;
        case 0x80:
            func_003F0D90(p);
            break;
        case 0x81:
            func_003F0FE0(p);
            break;
        case 0x82:
            func_003F1210(p);
            break;
        case 0x84:
            func_003F1440(p);
            break;
        case 0x85:
            func_003F1550(p);
            break;
        case 0x86:
            func_003F1660(p);
            break;
        case 0x14:
            switch (*(unsigned char *)(p + 0x3BFA)) {
            case 0:
                func_003F0500(p);
                break;
            case 1:
                func_003F0640(p);
                break;
            }
            ((Self3E7 *)p)->m1F0(*(int *)(p + 0x148), *(int *)(p + 0x11C));
            break;
        case 0x15:
            *(unsigned char *)(p + 0x36E0) = 1;
            if (!(2.3283064e-10f * mt_rand() <= 0.5f)) {
                func_003F0500(p);
            } else {
                func_003F0640(p);
            }
            ((Self3E7 *)p)->m1F0(*(int *)(p + 0x148), *(int *)(p + 0x11C));
            *(unsigned char *)(p + 0x3A31) = 1;
            break;
        case 0x16:
            break;
        }
    }
    ((Self3E7 *)p)->m2F4();
}
}

extern "C" void func_003EF580(char *);

extern "C" {
void func_003EF340(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E780(char *, int, int);
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
}

extern "C" float D_005703D0[];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void attach(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 0;
}

extern "C" {
void func_003F1850(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003F2D20(char *, float);
    extern void func_003E6750(char *, int, int, int);
    extern void func_00206730(char *);
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
}

extern "C" float D_00570380[];

extern "C" {
void func_003EDD50(char *p) {
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003F2D20(char *, float);
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
}

extern "C" float D_00570434[];

extern "C" void func_004E09F0(char *, int, int);

extern "C" {
void func_003F1FB0(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003F2D20(char *, float);
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
}

extern "C" float D_00570330[];

extern "C" int func_0021D120(char *, float);

extern "C" void func_00105300(char *, char *);

extern "C" int func_002018A0(char *, char *, char *, char *, char *, int);

extern "C" void func_003ED420(char *);

extern "C" {
void func_003ED270(char *p) {
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003F2D20(char *, float);
    extern void func_003E6750(char *, int, int, int);
    extern void func_003E9930(char *);
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
}

extern "C" float D_00570344[];

extern "C" void func_003E8070(char *);

extern "C" void func_003E8330(char *);

extern "C" {
void func_003ED660(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003F2D20(char *, float);
    extern void func_003E6750(char *, int, int, int);
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
}

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_003E6FA0(char *p) {
    func_0028C5C0(p + 0x2180, (unsigned char)(*(float *)(p + 0x3424) > 0.0f), *(float *)(p + 0x10));
}

extern "C" int func_00201770(char *, float *, char *, char *, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" int func_003F2FA0(char *p, char *a, char *b) {
    float v[4];
    QCOPY(v, p + 0x710);
    v[1] = v[1] + 100.0f;
    return (unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, a, b, 0x10);
}

extern "C" {
void func_003F1490(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003E9930(char *);
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
}

extern "C" {
void func_003F15A0(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003E9930(char *);
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

extern "C" int D_005BE09C;

extern "C" char D_005729C0[];

extern "C" char D_00572F00[];

extern "C" int func_001ACCF0(int, float, float, float, float);

extern "C" int func_003F3420(char *, char *);

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

extern "C" {
void func_003E9EB0(char *p) {
    extern void func_003E9930(char *);
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

extern "C" {
void func_003EFB70(char *p) {
    extern void func_003F2F60(char *);
    extern char *func_002792A0(char *);
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
}

extern "C" float D_00570284[];

extern "C" float D_00570288[];

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

extern "C" float func_001324E0(float *);

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

extern "C" float D_00573330[];

extern "C" float func_0011D798(float);

extern "C" void func_00104E78(float *, char *);

extern "C" void func_00104B80(float *, float *, float *);

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
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

extern "C" float D_00573080[];

extern "C" float D_005703E4[];

extern "C" {
void func_003F19B0(char *p) {
    extern int func_0024E800(char *);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003F2D20(char *, float);
    extern void func_003E9930(char *);
    extern char *func_002792A0(char *);
    extern char *func_0028C3A0(char *, int, int, int);
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
}

extern "C" float D_005703F8[];

extern "C" float D_0057040C[];

extern "C" {
void func_003F2AB0(char *p) {
    extern void func_003F2E90(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003F2D20(char *, float);
    extern void func_003E6750(char *, int, int, int);
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
}

extern "C" {
void func_003F1C80(char *p) {
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern int func_0024E780(char *, int, int);
    extern void func_003F2D20(char *, float);
    extern void func_003E6750(char *, int, int, int);
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
}

extern "C" float D_00570420[];

extern "C" {
void func_003F2200(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern void func_003F2E90(char *);
    extern void func_003F2F60(char *);
    extern void func_003F2D20(char *, float);
    extern void func_003E6750(char *, int, int, int);
    extern void func_00206730(char *);
    extern char *func_002792A0(char *);
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
}

typedef struct {
    unsigned char id;
    float v[5];
} T3E5;

extern "C" T3E5 D_00573170[];

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

extern "C" {
void func_003E5F50(char *p) {
    int func_001AD140(char *p);
    extern void func_00206730(char *);
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

extern "C" {
void func_003E53C0(char *p, signed char *a, int b, int c) {
    extern char *func_002792A0(char *);
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
}

extern "C" void func_003E9180(char *);

class O3E4a {
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
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void m2F8(int);
};

class O3E4b {
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
    virtual void uB0();
    virtual int mB4();
};

extern "C" {
void func_003E4D10(char *p) {
    extern void func_003E6750(char *, int, int, int);
    extern char *func_002792A0(char *);
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    int n;
    int m;
    int i;
    if (*(unsigned char *)(p + 4) == 0) return;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2350), "r"(a) : "memory");
    a[3] = 0.0f;
    a[1] = 0.0f;
    if (!(func_001324E0(a) <= 0.9f) && *(int *)(p + 0x3430) == 0x78 && *(unsigned char *)(p + 0x342C) == 0x4F) {
        ((O3E4a *)p)->m2F8(0x50);
        func_003E6750(p, 0x2E, 0, 0);
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2350), "r"(b) : "memory");
    b[3] = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3AA0), "r"(b) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x710), "r"(p + 0x710), "r"(b) : "memory");
    switch (*(unsigned char *)(p + 0x342C)) {
    case 3:
    case 0x20:
    case 0x22:
        break;
    default:
        if (*(signed char *)(p + 0x1FC7) != 0 && !(*(float *)(p + 0x3AA4) <= 0.0f)) {
            *(float *)(p + 0x3A14) = 0.0f;
        }
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x710) : "memory");
    n = ((O3E4b *)func_002792A0(p + 0x980))->mB4();
    m = ((O3E4b *)func_002792A0(p + 0xF80))->mB4();
    for (i = 0; i < n; i++) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%1)" : : "r"(*(char **)(((char **)(p + 0x7F4))[i] + 0x104) + 0x30), "r"(*(char **)(((char **)(p + 0x7F4))[i] + 0x104) + 0x30), "r"(b) : "memory");
    }
    for (i = 0; i < m; i++) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%1)" : : "r"(*(char **)(((char **)(p + 0x8A4))[i] + 0x104) + 0x30), "r"(*(char **)(((char **)(p + 0x8A4))[i] + 0x104) + 0x30), "r"(b) : "memory");
    }
    if (*(int *)(p + 0x35E4) > 0 || *(unsigned char *)(p + 0x36E1) == 1) {
        func_003E9180(p);
    }
}
}

extern "C" {
int func_003E4130(char *);
}

extern "C" {
int func_003F3900(void);
}

class V130_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_003E2600(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_003F3900();
    v2 = *(unsigned char *)(v0 + 4);
    if (v2 != 1) {
        if (v2 != 0) {
            return v1;
        } else {
            tmp0 = ((V130_0_i *)v0)->m();
            return tmp0;
        }
    } else {
        v3 = func_003E4130(v0);
        return v3;
    }
}
}

class V2F0_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_003E6290(char *p0, int p1) {
    int func_001AD140(...);
    int func_00206730(...);
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    v0 = p0;
    v1 = p1;
    if (*(unsigned char *)(p0 + 333) != 3) {
        func_00206730((v0 + 15336));
        func_00206730((v0 + 15340));
        v4 = func_00206730((v0 + 15344));
        v2 = *(int *)(v0 + 15336);
        if (v2 != 0) {
            v4 = func_001AD140(v2);
        }
        v3 = *(int *)(v0 + 15340);
        if (v3 != 0) {
            v4 = func_001AD140(v3);
        }
        v5 = *(int *)(v0 + 15344);
        if (v5 != 0) {
            v4 = func_001AD140(v5);
        }
        v6 = (v1 & 255);
        tmp0 = 1;
        if (v6 != tmp0) {
            switch (v6) {
            case 4:
                v4 = ((V2F0_1_ii *)v0)->m(0);
                *(char *)(v0 + 14926) = 1;
                break;
            case 2:
                v4 = ((V2F0_1_ii *)v0)->m(0);
                *(char *)(v0 + 14926) = 1;
                break;
            case 0:
            case 3:
                break;
            }
        }
    }
    return v4;
}
}

class V7C_0_f {
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
    virtual float m(void);
};

extern "C" {
int func_003EB430(int p0) {
    extern char D_00570308[];
    int func_0024E780(...);
    int func_0024E800(...);
    int func_003EAF00(int);
    void func_003F2D20(char *, float);
    void func_003F32B0(void);
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp4;
    float tmp5;
    v0 = (char *)p0;
    func_003F32B0();
    *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) - (20.0f * *(float *)(v0 + 13744)));
    *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) - (20.0f * *(float *)(v0 + 13752)));
    tmp4 = func_0024E780((v0 + 8144), 0, 0);
    if ((tmp4 & 255) != 0) {
        tmp5 = ((V7C_0_f *)(v0 + 304))->m();
        v1 = (int)(tmp5 / 300.0f);
        if (v1 > 3) {
            v1 = 3;
        }
        if (*(unsigned char *)(v0 + 445) != 0) {
            v1 = 4;
        }
        func_003F2D20(v0, (*(float *)((D_00570308 + (v1 << 2)) + 0) * *(float *)(v0 + 16)));
    }
    v3 = func_0024E800((v0 + 8144));
    v2 = (int)v0;
    if (v3 != 0) {
        v3 = func_003EAF00(v2);
    }
    return v3;
}
}

class V2F8_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_003EBDF0(char *p0) {
    int func_003E6750(char *, int, int, int);
    int tmp0;
    ((V2F8_1_iv *)p0)->m(10);
    *(char *)(p0 + 14976) = 0;
    *(char *)(p0 + 14977) = 1;
    tmp0 = func_003E6750(p0, 2, 1, 5);
    return tmp0;
}
}

extern "C" {
int func_003ED850(char *p0) {
    int func_003E6750(char *, int, int, int);
    int v0;
    if (*(int *)(p0 + 13796) == 0) {
        ((V2F8_1_iv *)p0)->m(22);
        v0 = func_003E6750(p0, 43, 0, 0);
    }
    return v0;
}
}

extern "C" {
extern char D_0057036C[];
}

extern "C" {
int func_003EDB50(int p0) {
    int func_0024E800(...);
    int func_003E9930(int);
    void func_003F2D20(char *, float);
    void func_003F2E90(...);
    void func_003F2F60(...);
    char *v0;
    int v1;
    int v2;
    int v3;
    float tmp0;
    v0 = (char *)p0;
    tmp0 = ((V7C_0_f *)(v0 + 304))->m();
    v1 = (int)(tmp0 / 300.0f);
    if (v1 > 3) {
        v1 = 3;
    }
    if (*(unsigned char *)(v0 + 445) != 0) {
        v1 = 4;
    }
    v1 = (v1 << 2);
    func_003F2D20(v0, (*(float *)((D_0057036C + v1) + 0) * *(float *)(v0 + 16)));
    func_003F2E90(v0);
    func_003F2F60(v0);
    v2 = func_0024E800((v0 + 8144));
    v3 = (int)v0;
    if (v2 != 0) {
        v2 = func_003E9930(v3);
    }
    return v2;
}
}

extern "C" {
extern char D_00570394[];
}

class V2F8_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_003EE6F0(int p0) {
    int func_0024E800(...);
    void func_003F2D20(char *, float);
    void func_003F2E90(...);
    void func_003F2F60(...);
    int func_003F3830(void);
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    float tmp2;
    v0 = (char *)p0;
    tmp0 = func_003F3830();
    if (tmp0 != 0) {
        tmp1 = *(unsigned char *)(v0 + 15248);
        v1 = 2;
        if (tmp1 == 0) {
            *(char *)(v0 + 13365) = v1;
            *(char *)(v0 + 13367) = v1;
            *(char *)(v0 + 13368) = v1;
        } else {
            *(char *)(v0 + 13365) = 6;
            *(char *)(v0 + 13367) = 4;
            *(char *)(v0 + 13368) = 2;
        }
    } else {
        *(char *)(v0 + 13365) = 0;
        *(char *)(v0 + 13367) = 0;
        *(char *)(v0 + 13368) = 0;
    }
    func_003F2F60(v0);
    func_003F2E90(v0);
    tmp2 = ((V7C_0_f *)(v0 + 304))->m();
    v3 = (int)(tmp2 / 300.0f);
    if (v3 > 3) {
        v3 = 3;
    }
    if (*(unsigned char *)(v0 + 445) != 0) {
        v3 = 4;
    }
    v3 = (v3 << 2);
    func_003F2D20(v0, (*(float *)((D_00570394 + v3) + 0) * *(float *)(v0 + 16)));
    *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) + (*(float *)(v0 + 1792) * *(float *)(v0 + 14872)));
    *(float *)(v0 + 1812) = (*(float *)(v0 + 1812) + (*(float *)(v0 + 1796) * *(float *)(v0 + 14872)));
    *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) + (*(float *)(v0 + 1800) * *(float *)(v0 + 14872)));
    *(float *)(v0 + 14872) = (*(float *)(v0 + 14872) * 0.699999988079071f);
    v2 = func_0024E800((v0 + 8144));
    if (v2 != 0) {
        v2 = ((V2F8_1_ii *)v0)->m(30);
        *(int *)(v0 + 14988) = 0x41a00000;
    }
    return v2;
}
}

extern "C" {
int func_003EE880(int p0) {
    int func_003E6750(char *, int, int, int);
    int func_003F3830(void);
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_003F3830();
    if (v2 != 0) {
        tmp0 = *(unsigned char *)(v0 + 15248);
        v1 = 2;
        if (tmp0 == 0) {
            *(char *)(v0 + 13365) = v1;
            *(char *)(v0 + 13367) = v1;
            *(char *)(v0 + 13368) = v1;
        } else {
            *(char *)(v0 + 13365) = 6;
            *(char *)(v0 + 13367) = 4;
            *(char *)(v0 + 13368) = 2;
        }
    } else {
        *(char *)(v0 + 13365) = 0;
        *(char *)(v0 + 13367) = 0;
        *(char *)(v0 + 13368) = 0;
    }
    *(float *)(v0 + 14988) = (*(float *)(v0 + 14988) - *(float *)(v0 + 16));
    *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) + (*(float *)(v0 + 1792) * *(float *)(v0 + 14872)));
    *(float *)(v0 + 1812) = (*(float *)(v0 + 1812) + (*(float *)(v0 + 1796) * *(float *)(v0 + 14872)));
    *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) + (*(float *)(v0 + 1800) * *(float *)(v0 + 14872)));
    *(float *)(v0 + 14872) = (*(float *)(v0 + 14872) * 0.699999988079071f);
    if (*(float *)(v0 + 14988) < 0.0f) {
        ((V2F8_1_iv *)v0)->m(31);
        v2 = func_003E6750(v0, 7, 0, 0);
    }
    return v2;
}
}

extern "C" {
extern char D_005703A8[];
}

extern "C" {
int func_003EEB10(int p0) {
    int func_0024E800(...);
    void func_003F2D20(char *, float);
    int func_003F3830(void);
    char *v0;
    int v1;
    int v2;
    int tmp0;
    float tmp1;
    v0 = (char *)p0;
    tmp0 = func_003F3830();
    if (tmp0 != 0) {
        *(char *)(v0 + 13365) = 2;
        *(char *)(v0 + 13367) = 2;
        *(char *)(v0 + 13368) = 2;
    } else {
        *(char *)(v0 + 13365) = 0;
        *(char *)(v0 + 13367) = 0;
        *(char *)(v0 + 13368) = 0;
    }
    tmp1 = ((V7C_0_f *)(v0 + 304))->m();
    v1 = (int)(tmp1 / 300.0f);
    if (v1 > 3) {
        v1 = 3;
    }
    if (*(unsigned char *)(v0 + 445) != 0) {
        v1 = 4;
    }
    func_003F2D20(v0, (*(float *)((D_005703A8 + (v1 << 2)) + 0) * *(float *)(v0 + 16)));
    *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) - (20.0f * *(float *)(v0 + 13744)));
    *(float *)(v0 + 1812) = (*(float *)(v0 + 1812) - (20.0f * *(float *)(v0 + 13748)));
    *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) - (20.0f * *(float *)(v0 + 13752)));
    v2 = func_0024E800((v0 + 8144));
    if (v2 != 0) {
        v2 = ((V2F8_1_ii *)v0)->m(33);
        *(char *)(v0 + 14976) = 0;
        *(char *)(v0 + 14977) = 1;
        *(int *)(v0 + 14988) = 0x41f00000;
    }
    return v2;
}
}

extern "C" {
int func_003EEC50(int p0) {
    int func_003E6750(char *, int, int, int);
    int func_003F3830(void);
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_003F3830();
    v1 = 2;
    if (v2 != 0) {
        *(char *)(v0 + 13365) = v1;
        *(char *)(v0 + 13367) = v1;
        *(char *)(v0 + 13368) = v1;
    } else {
        *(char *)(v0 + 13365) = 0;
        *(char *)(v0 + 13367) = 0;
        *(char *)(v0 + 13368) = 0;
    }
    *(float *)(v0 + 14988) = (*(float *)(v0 + 14988) - *(float *)(v0 + 16));
    *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) - (20.0f * *(float *)(v0 + 13744)));
    *(float *)(v0 + 1812) = (*(float *)(v0 + 1812) - (20.0f * *(float *)(v0 + 13748)));
    *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) - (20.0f * *(float *)(v0 + 13752)));
    if (*(float *)(v0 + 14988) < 0.0f) {
        ((V2F8_1_iv *)v0)->m(34);
        *(char *)(v0 + 14976) = 0;
        *(char *)(v0 + 14977) = 1;
        v2 = func_003E6750(v0, 7, 0, 0);
    }
    return v2;
}
}

extern "C" {
extern char D_005703BC[];
}

extern "C" {
int func_003EF030(char *p0) {
    int func_0024E800(...);
    void func_003F2D20(char *, float);
    void func_003F2E90(...);
    void func_003F2F60(...);
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    float tmp0;
    v0 = p0;
    if (*(signed char *)(p0 + 8132) != 0) {
        tmp0 = ((V7C_0_f *)(v0 + 304))->m();
        v1 = (int)(tmp0 / 300.0f);
        if (v1 > 3) {
            v1 = 3;
        }
        if (*(unsigned char *)(v0 + 445) != 0) {
            v1 = 4;
        }
        func_003F2D20(v0, (*(float *)((D_005703BC + (v1 << 2)) + 0) * *(float *)(v0 + 16)));
    }
    v3 = (int)v0;
    if (*(signed char *)(v0 + 8133) != 0) {
        func_003F2E90(v3);
    }
    v4 = (int)v0;
    if (*(signed char *)(v0 + 8134) != 0) {
        func_003F2F60(v4);
    }
    v2 = func_0024E800((v0 + 8144));
    if (v2 != 0) {
        if (*(unsigned char *)(v0 + 13356) != 47) {
            v2 = ((V2F0_1_ii *)v0)->m(16);
        } else {
            v2 = ((V2F0_1_ii *)v0)->m(111);
        }
    }
    return v2;
}
}

extern "C" {
int func_003EF1C0(char *p0) {
    int func_003E6750(char *, int, int, int);
    int tmp0;
    ((V2F8_1_iv *)p0)->m(49);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 3;
    *(char *)(p0 + 13366) = 7;
    tmp0 = func_003E6750(p0, 18, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003EF5E0(char *p0) {
    int func_003E6750(char *, int, int, int);
    int tmp0;
    ((V2F8_1_iv *)p0)->m(53);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 5;
    tmp0 = func_003E6750(p0, 21, 0, 0);
    return tmp0;
}
}

extern "C" {
void func_003EF790(char *p0) {
    int func_0024E780(...);
    int func_003E6750(char *, int, int, int);
    int v0;
    char *v1;
    float v2;
    int tmp7;
    int tmp8;
    v1 = p0;
    *(float *)(p0 + 1812) = (*(float *)(p0 + 1812) + (*(float *)(p0 + 14868) * *(float *)(p0 + 16)));
    *(float *)(p0 + 14868) = (*(float *)(p0 + 14868) + (-0.8960000276565552f * *(float *)(p0 + 16)));
    *(float *)(p0 + 14996) = (*(float *)(p0 + 14996) - *(float *)(p0 + 16));
    tmp7 = func_0024E780((v1 + 8144), 0, 0);
    v2 = 0.0f;
    v0 = (tmp7 & 255);
    if (*(float *)(v1 + 15012) > v2) {
        if ((v0 & 255) == 1) {
            ((V2F8_1_iv *)v1)->m(38);
            tmp8 = func_003E6750(v1, 32, 0, 0);
            *(char *)(v1 + 15004) = 0;
        }
    }
}
}

extern "C" {
int func_003EFF40(char *p0) {
    int func_0024E800(...);
    int func_003E6750(char *, int, int, int);
    char *v0;
    int v1;
    v0 = p0;
    *(float *)(p0 + 14996) = (*(float *)(p0 + 14996) - *(float *)(p0 + 16));
    v1 = func_0024E800((v0 + 8144));
    if (v1 != 0) {
        ((V2F8_1_iv *)v0)->m(40);
        *(char *)(v0 + 13364) = 1;
        *(char *)(v0 + 13365) = 3;
        *(char *)(v0 + 13366) = 3;
        v1 = func_003E6750(v0, 8, 0, 0);
        *(int *)(v0 + 14868) = 0;
    }
    return v1;
}
}

extern "C" {
int func_003F0150(int p0) {
    int func_0024E800(...);
    int func_003E6750(char *, int, int, int);
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 8144));
    if (v1 != 0) {
        ((V2F8_1_iv *)v0)->m(43);
        v1 = func_003E6750(v0, 8, 0, 0);
    }
    return v1;
}
}

extern "C" {
int func_003F0A40(char *p0) {
    int func_003E6750(char *, int, int, int);
    int tmp0;
    ((V2F8_1_iv *)p0)->m(63);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 7;
    tmp0 = func_003E6750(p0, 31, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F0B80(int p0) {
    extern char D_00570308[];
    int func_0024E780(...);
    int func_0024E800(...);
    int func_003E6750(char *, int, int, int);
    void func_003F2D20(char *, float);
    void func_003F2F60(...);
    void func_003F32B0(void);
    char *v0;
    int v1;
    int v2;
    int tmp0;
    float tmp1;
    v0 = (char *)p0;
    func_003F32B0();
    tmp0 = func_0024E780((v0 + 8144), 0, 0);
    if ((tmp0 & 255) != 0) {
        tmp1 = ((V7C_0_f *)(v0 + 304))->m();
        v1 = (int)(tmp1 / 300.0f);
        if (v1 > 3) {
            v1 = 3;
        }
        if (*(unsigned char *)(v0 + 445) != 0) {
            v1 = 4;
        }
        func_003F2D20(v0, (*(float *)((D_00570308 + (v1 << 2)) + 0) * *(float *)(v0 + 16)));
    }
    func_003F2F60(v0);
    v2 = func_0024E800((v0 + 8144));
    if (v2 != 0) {
        ((V2F8_1_iv *)v0)->m(66);
        v2 = func_003E6750(v0, 35, 0, 0);
    }
    return v2;
}
}

extern "C" {
int func_003F2720(int p0) {
    int func_0024E800(...);
    void func_003F2E90(...);
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_003F2E90();
    v1 = func_0024E800((v0 + 8144));
    if (v1 != 0) {
        v1 = ((V2F0_1_ii *)v0)->m(122);
    }
    return v1;
}
}
