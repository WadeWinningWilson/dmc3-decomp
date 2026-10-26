#include "game/mt_rand.h"
#include "game/vthunk.h"
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

extern "C" int func_004F2190(char *, int, int, int, char *, int, int);

extern "C" void func_0037BC90(char *, int);

struct O37E { char pad[0x69F8]; char *arr[1]; };

extern "C" void func_0037E590(char *p) {
    float f;
    int i;
    int n;
    f = ((Sub130 *)(p + 0x130))->m7C();
    n = ((Sub130 *)(p + 0x130))->m80(f);
    if (*(int *)(p + 0x6E4C) != 0) {
        return;
    }
    for (i = 0; i < *(int *)(p + 0x6E78); i += 2) {
        if (*(int *)(((O37E *)p)->arr[i] + 0x144C) > 0) {
            func_0037BC90(p, func_004F2190(p + 0x710, *(int *)(p + 0x750), i, 0, p, *(int *)(p + 0x77CC), n));
            func_0037BC90(p, func_004F2190(p + 0x710, *(int *)(p + 0x750), i, 1, p, *(int *)(p + 0x77CC), n));
        }
    }
}

extern "C" signed char D_00566330[][7][5];

extern "C" void func_0037C0C0(char *, int);

/* Picks a random entry (terminated by -1) of the row for the current state and level. */
extern "C" int func_0037BF20(char *p) {
    int k = ((Sub130 *)(p + 0x130))->m80(((Sub130 *)(p + 0x130))->m7C());
    int n;
    signed char *e;
    int v;
    if (*(unsigned char *)(p + 0x1BD)) {
        k = 6;
    }
    n = 0;
    e = D_00566330[*(int *)(p + 0x77CC)][k];
    for (;;) {
        if (*e == -1) {
            break;
        }
        n++;
        e++;
    }
    v = D_00566330[*(int *)(p + 0x77CC)][k][mt_rand() % n];
    if (v < 0 || v >= 13) {
        v = 1;
    }
    func_0037C0C0(p, v);
    return v;
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

extern "C" {
void func_0037A080(char *p) {
    extern void func_0034BA60(int, char *, int, int, int);
    extern void func_00104C00(char *, int, char *);
    extern void func_0037E850(char *, int);
    extern void func_001AD140(char *);
    int i;
    *(float *)(p + 0x78D0) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x78D0) < 0.0f) {
        *(float *)(p + 0x78D0) = *(float *)(p + 0x78D4);
        if (mt_rand() & 1) {
            func_0034BA60(0x28, p + 0x6F0, 0x29, 0, 1);
        } else {
            func_0034BA60(0x29, p + 0x6F0, 0x29, 0, 1);
        }
    }
    func_00104C00(p + 0x7880, *(int *)(*(char **)(p + 0x778) + 0x104), p + 0x7840);
    for (i = 0; i < *(int *)(p + 0x6E80); i++) {
        if (*(short *)(p + i * 2 + 0x6668) != 0) {
            *(short *)(p + i * 2 + 0x6668) += 0x200;
        }
    }
    *(float *)(p + 0x77E8) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x77E8) < 0.0f) {
        ((ObjB *)p)->m2FC(0xC);
        func_0037E850(p, 5);
        for (i = 1; i < *(int *)(p + 0x6E80); i++) {
            if (*(char **)(p + i * 4 + 0x6640) != 0) {
                func_001AD140(*(char **)(p + i * 4 + 0x6640));
            }
        }
    }
}
}

extern "C" void func_0037BDD0(char *);

extern "C" {
/* Every 40 frames a random effect; when no sub-part is alive the boss is defeated, otherwise
 * its parts spin (faster while the player is in state 0x3C78). */
void func_00379B90(char *p) {
    extern void func_0034BA60(int, char *, int, int, int);
    extern char D_01CAFF0C[];
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    int i;
    unsigned char dead;
    func_0037BDD0(p);
    (*(unsigned char *)(p + 0x78CC))++;
    if (*(unsigned char *)(p + 0x78CC) % 40 == 0) {
        if (mt_rand() & 1) {
            func_0034BA60(0x24, p + 0x6F0, 0x29, 0, 1);
        } else {
            func_0034BA60(0x25, p + 0x6F0, 0x29, 0, 1);
        }
    }
    dead = 1;
    for (i = 0; i < *(int *)(p + 0x6E78); i++) {
        if (*(int *)(*(char **)(p + i * 4 + 0x69F8) + 0x144C) > 0) {
            dead = 0;
        }
    }
    if (dead) {
        ((ObjB *)p)->m2F4(0x6A);
        *(float *)(p + 0x6E6C) = 5.0f;
        return;
    }
    for (i = 0; i < *(int *)(p + 0x6E80); i++) {
        if (*(short *)(p + i * 2 + 0x6668) != 0) {
            if (*(unsigned char *)(pl + 0x3C78)) {
                *(short *)(p + i * 2 + 0x6668) += 0x80;
                *(short *)(p + i * 2 + 0x6668) &= -0x80;
            } else {
                *(short *)(p + i * 2 + 0x6668) += 0x200;
                *(short *)(p + i * 2 + 0x6668) &= -0x200;
            }
        }
    }
    if (*(unsigned char *)(pl + 0x28AC) == 1 && *(unsigned char *)(p + 0x7805)) {
        ((ObjB *)p)->m2F4(0x69);
    }
}
}

extern "C" {
/* Counts the timer at +0x77E8 down; on motion end or expiry enters state 0x6A. */
void func_0037AE20(char *p) {
    extern int func_0024E800(char *);
    *(float *)(p + 0x77E8) = *(float *)(p + 0x77E8) - *(float *)(p + 0x10);
    if (func_0024E800(p + 0x6D70) != 0 || *(float *)(p + 0x77E8) < 0.0f) {
        ((ObjB *)p)->m2F4(0x6A);
        *(float *)(p + 0x6E6C) = 5.0f;
    }
}
}

extern "C" float D_005679BC[];

extern "C" float D_005679C0[];

extern "C" {
/* Enters the charge phase: state 1, motion 2, sound 0x23, 100-frame timer and reset ranges. */
void func_0037AD90(char *p) {
    extern void func_0037E850(char *, int);
    extern void func_0034BA60(int, char *, int, int, int);
    ((ObjB *)p)->m2FC(1);
    func_0037E850(p, 2);
    func_0034BA60(0x23, p + 0x6F0, 0x29, 0, 1);
    *(float *)(p + 0x77E8) = 100.0f;
    *(float *)(p + 0x7294) = D_005679BC[0];
    *(float *)(p + 0x7298) = D_005679C0[0];
    *(float *)(p + 0x7314) = *(float *)(p + 0x7294);
    *(float *)(p + 0x7318) = *(float *)(p + 0x7298);
}
}

extern "C" char D_00568010[];

extern "C" void func_0037E690(char *);

/* Advances the active rotor timers, and when the phase timer expires picks the next phase duration. */
extern "C" void func_00379F80(char *p) {
    int i;
    char *q;
    int k;
    for (i = 0, q = p; i < *(int *)(p + 0x6E80); i++, q += 2) {
        if (*(short *)(q + 0x6668) != 0) {
            *(short *)(q + 0x6668) = *(short *)(q + 0x6668) + 0x200;
        }
    }
    *(float *)(p + 0x77E8) = *(float *)(p + 0x77E8) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x77E8) < 0.0f) {
        ((ObjB *)p)->m2FC(0xB);
        k = ((Sub130 *)(p + 0x130))->m80(((Sub130 *)(p + 0x130))->m7C());
        *(float *)(p + 0x77E8) = *(float *)(k * 12 + (D_00568010 + *(int *)(p + 0x77CC) * 84));
        func_0037E690(p);
    }
}

class ObjT1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

class Obj98 {
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

extern "C" void func_00381A60(char *, char *, char *, char *);

extern "C" int D_0056842C[];

extern "C" {
void func_00381920(char *p, int a, int b, int c, int d) {
    extern char D_01CAFF0C[];
    char *g;
    char *m;
    char *n;
    float t;
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x1388) = 0;
    m = p;
    if (m != 0) {
        m += 0x40;
    }
    n = p;
    if (n != 0) {
        n += 0xD0;
    }
    func_00381A60(p, p + 0x2E0, n, m);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    switch (*(unsigned short *)(p + 0x302)) {
    case 1:
        ((ObjB *)p)->m2F0(0xE);
        break;
    default:
        ((ObjB *)p)->m2F0(0xE);
        break;
    }
    ((Obj98 *)(p + 0x130))->m98(D_0056842C[0]);
}
}

class Sub130c {
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

extern "C" void func_0037EAD0(char *, char *, char *, char *);

extern "C" {
void func_0037E8B0(char *p, int a1, int a2, int a3, int a4) {
    extern char D_01CAFF0C[];
    char *g;
    char *b1;
    char *b2;
    float t;
    *(int *)(p + 0x134) = a1;
    *(int *)(p + 0x138) = a2;
    *(int *)(p + 0x13C) = a3;
    *(int *)(p + 0x140) = a4;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x7818) = 0;
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (g != 0) {
        g += 0x40;
    }
    *(char **)(p + 0x148) = g;
    b1 = p;
    if (b1 != 0) {
        b1 += 0x40;
    }
    b2 = p;
    if (b2 != 0) {
        b2 += 0xD0;
    }
    func_0037EAD0(p, p + 0x710, b2, b1);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    switch (*(unsigned short *)(p + 0x732)) {
    case 1:
        ((ObjB *)p)->m2F4(0x64);
        break;
    default:
        ((ObjB *)p)->m2F4(0x64);
        break;
    }
    ((Sub130c *)(p + 0x130))->m98(D_0056842C[0]);
}
}

extern "C" char D_00568014[];

extern "C" char D_00568018[];

extern "C" void func_00505A70(char *, int, int, int, char *, int, int, float, float, float);

extern "C" void func_0037E690(char *p) {
    int k = ((Sub130 *)(p + 0x130))->m80(((Sub130 *)(p + 0x130))->m7C());
    func_00505A70(p + 0x710, *(int *)(p + 0x750), 0, 0, p, *(int *)(p + 0x77CC), k,
                  *(float *)(k * 12 + (D_00568010 + *(int *)(p + 0x77CC) * 84)),
                  *(float *)(k * 12 + (D_00568014 + *(int *)(p + 0x77CC) * 84)),
                  *(float *)(k * 12 + (D_00568018 + *(int *)(p + 0x77CC) * 84)));
}

extern "C" float D_005678BC[];

extern "C" float D_005678D4[];

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

extern "C" {
void func_0037B920(Obj1E0 *p) {
    extern char D_01CAFF0C[];
    *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)p->m1E0((int)D_005678BC[0]);
    *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (float)(int)D_005678D4[0];
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

class SubCCy {
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

class Obj1FC {
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
    virtual int m1FC(unsigned char *, int *);
};

extern "C" {
void func_0037D190(Obj1FC *o) {
    extern void func_00252B50(Obj1FC *, int, int, float, float);
    char *p = (char *)o;
    int s;
    unsigned char c;
    func_00252B50(o, 0x7F, 0x10, 400.0f, 300.0f);
    if ((unsigned char)o->m1FC(&c, &s) == 1) {
        func_001A5CC0(func_00279290(p + 0x8C0));
    } else {
        func_001A5B90(func_00279290(p + 0x8C0));
    }
    *(unsigned char *)(p + 0x7804) = *(unsigned char *)(p + 0x7804) + 1;
    ((SubCCy *)(p + 0x8C0))->mCC(p + 0x6C0);
}
}

extern "C" void func_00206730(char *);

class Obj2F4 {
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
    virtual void m2F4(int);
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void m318(int, int);
};

extern "C" {
void func_0037EDA0(Obj2F4 *o, int a, int b) {
    extern void func_001AD140(char *);
    char *p = (char *)o;
    int i;
    for (i = 1; i < *(int *)(p + 0x6E80); i++) {
        func_00206730(p + i * 4 + 0x6640);
        if (*(char **)(p + i * 4 + 0x6640) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x6640));
        }
    }
    o->m2F4(0x65);
    o->m318(a, b);
}
}

extern "C" {
void func_0037E590(char *p);
}

extern "C" void func_0037E260(char *);

extern "C" void func_0037E410(char *);

extern "C" void func_0037E750(char *);

class V2F4 {
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
    virtual void m2F4(int);
};

extern "C" void func_0037D030(char *p, unsigned int k) {
    *(unsigned int *)(p + 0x78C0) = k;
    switch (k) {
    case 1: func_0037E260(p); break;
    case 3: func_0037E410(p); break;
    case 5: func_0037E590(p); break;
    case 7: ((V2F4 *)p)->m2F4(0x6B); break;
    case 8: func_0037E750(p); break;
    case 10: ((V2F4 *)p)->m2F4(0x69); break;
    case 11: ((V2F4 *)p)->m2F4(0x6A); break;
    case 0: case 2: case 4: case 6: case 9: break;
    }
}

class Mot382 {
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
    virtual float m7C();
    virtual int m80(float);
};

class Mdl382 {
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
    virtual void m94(int, int);
    virtual void m98(int, int);
    virtual void m9C(int, unsigned char);
    virtual void mA0(int, unsigned char);
};

extern "C" int D_005683D0[];

#define M ((Mdl382 *)(p + 0x340))

extern "C" void func_003825C0(char *p) {
    int i = ((Mot382 *)(p + 0x130))->m80(((Mot382 *)(p + 0x130))->m7C());
    float f = 1.0f - (float)*(int *)(p + 0x144C) / (float)D_005683D0[i];
    M->m94(0, 0x20008);
    M->m98(0, 0x59);
    M->m9C(0, (unsigned int)(f * 126.0f));
    M->mA0(0, (unsigned int)(f * 96.0f));
    M->m94(1, 0x30009);
    M->m98(1, 0x39);
    M->m9C(1, (unsigned int)(f * 170.0f));
    M->mA0(1, (unsigned int)(f * 33.0f));
    M->m94(2, 0x4080C);
    M->m98(2, 0x47);
    M->m9C(2, (unsigned int)(f * 144.0f));
    M->mA0(2, (unsigned int)(f * 42.0f));
}

extern "C" int func_0022CBA0(char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0012B1A0(char *, char *);

extern "C" int func_002F6690(char *, char *, char *);

extern "C" float func_0022CD90(char *);

extern "C" int func_00383330(char *, char *, char *, float *);

extern "C" char D_005BCAC8[8];

extern "C" char D_005BCAD0[8];

extern "C" char D_005BCAD8[8];

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

extern "C" float D_005674B0[];

extern "C" float D_005674B4[];

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

extern "C" {
void func_0037A690(char *p) {
    extern void func_0037E850(char *, int);
    extern char *func_00207470(int, int, char *);
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
}

extern "C" float D_00567560[];

extern "C" float D_00567564[];

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

extern "C" {
void func_0037AA10(char *p) {
    extern void func_0037E850(char *, int);
    extern char *func_00207470(int, int, char *);
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
}

extern "C" void func_00105300(char *, char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" float func_001324E0(float *);

extern "C" void func_00104E78(float *, char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" {
void func_00380D90(char *p);
}

extern "C" void func_002EC050(int, char *, float);

extern "C" void func_0037B9C0(void);

extern "C" void func_0037C550(char *, int);

extern "C" void func_0037D300(char *, int);

extern "C" void func_0037E150(char *);

extern "C" void func_0037E8A0(char *);

class V37B {
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
    virtual int nB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void mC8(char *);
};

extern "C" {
void func_0037B280(char *p) {
    extern char *func_002792A0(char *);
    extern void func_00104C00(char *, char *, char *);
    extern void func_001AD100(char *);
    float m[16] __attribute__((aligned(16)));
    int i;
    float l;
    char *e;
    func_0037B9C0();
    func_001AD100(p);
    func_0037E8A0(p);
    *(short *)(p + 0x6668) += *(short *)(p + 0x6E68);
    *(float *)(p + 0x77E8) += *(float *)(p + 0x10);
    for (i = 1; i < *(int *)(p + 0x6E80); i++) {
        if (!(*(float *)(p + 0x77E8) <= 8.0f * i)) *(short *)((char *)(i * 2) + (int)p + 0x6668) += *(short *)(p + 0x6E68);
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x700), "r"(p + 0x6720) : "memory");
    func_0037D300(p, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x700), "r"(p + 0x6720), "r"(p + 0x700) : "memory");
    *(float *)(p + 0x70C) = 0.0f;
    func_00105300(p + 0x6C0, p + 0x66F0);
    ((V37B *)(p + 0x8C0))->mC8(p + 0x6C0);
    func_0037E150(p);
    func_0028C5C0(p + 0x6EE0, 0, 1.0f);
    func_0028C5C0(p + 0x73D0, 0, 1.0f);
    l = func_001324E0((float *)(p + 0x700));
    if (!(l <= 30.0f)) {
        func_0037C550(p, 2);
    } else if (!(l <= 20.0f)) {
        func_0037C550(p, 1);
    } else {
        func_0037C550(p, 0);
    }
    if (!(*(float *)(p + 0x77E8) <= 225.0f)) {
        *(float *)(p + 0x77E8) = 0.0f;
        (*(unsigned char *)(p + 5))++;
        func_00104E78(m, p + 0x6C0);
        for (i = 0; i < ((V37B *)func_002792A0(p + 0x8C0))->nB4(); i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x770);
            func_00104C00(*(char **)(e + 0x100), (char *)m, *(char **)(e + 0x104));
        }
        for (i = 0; i < *(int *)(p + 0x6E78); i++) {
            if (*(char **)((char *)(i * 4) + (int)p + 0x69F8) != 0) func_00380D90(*(char **)((char *)(i * 4) + (int)p + 0x69F8));
        }
        *(float *)(p + 0x50) = *(float *)(p + 0x6F0);
        *(float *)(p + 0x54) = 50.0f;
        *(float *)(p + 0x58) = *(float *)(p + 0x6F8);
        for (i = 1; i < *(int *)(p + 0x6E78); i++) func_002EC050(3, *(char **)((char *)(i * 4) + (int)p + 0x69F8) + 0x1270, 100.0f);
    }
    func_00195E20(D_005BE098, p);
}
}

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" void func_001A1F90(char *);

extern "C" void func_00382A50(char *);

class Self381 {
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
    virtual int m1FC(unsigned char *, char *);
};

class Mot381 {
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
    virtual float m7C();
    virtual int m80(float);
};

class Mdl381 {
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

#define SH(n) func_001A1E70(func_00279290(p + 0x340), n)

#define HD(n) func_001A2000(func_00279290(p + 0x340), n)

extern "C" {
void func_00381EA0(char *p) {
    extern void func_00252B50(float, float, char *, int, int);
    unsigned char c;
    char buf[7];
    func_00382A50(p + 0xB94);
    if (*(char **)(p + 0xB94) == 0) return;
    if (*(unsigned char *)(p + 5) != 0 && *(unsigned char *)(*(char **)(p + 0xB94) + 5) == 2) {
        func_001A1F90(func_00279290(p + 0x340));
        return;
    }
    func_00252B50(400.0f, 300.0f, p, 0x7F, 0x10);
    if ((unsigned char)((Self381 *)p)->m1FC(&c, buf) == 1) {
        func_001A5CC0(func_00279290(p + 0x340));
    } else {
        func_001A5B90(func_00279290(p + 0x340));
    }
    switch (D_005683D0[((Mot381 *)(p + 0x130))->m80(((Mot381 *)(p + 0x130))->m7C())]) {
    case 4:
        switch (*(int *)(p + 0x144C)) {
        case 0:
            HD(1);
            HD(2);
            HD(4);
            HD(5);
            break;
        case 1:
            SH(1);
            HD(2);
            HD(4);
            HD(5);
            break;
        case 2:
            SH(1);
            SH(2);
            HD(4);
            HD(5);
            break;
        case 3:
            SH(1);
            SH(2);
            SH(4);
            HD(5);
            break;
        default:
            SH(1);
            SH(2);
            SH(4);
            SH(5);
            break;
        }
        break;
    case 6:
        switch (*(int *)(p + 0x144C)) {
        case 0:
            HD(1);
            HD(2);
            HD(4);
            HD(5);
            break;
        case 1:
        case 2:
            SH(1);
            HD(2);
            HD(4);
            HD(5);
            break;
        case 3:
        case 4:
            SH(1);
            SH(2);
            HD(4);
            HD(5);
            break;
        case 5:
            SH(1);
            SH(2);
            SH(4);
            HD(5);
            break;
        default:
            SH(1);
            SH(2);
            SH(4);
            SH(5);
            break;
        }
        break;
    case 8:
        switch (*(int *)(p + 0x144C)) {
        case 0:
            HD(1);
            HD(2);
            HD(4);
            HD(5);
            break;
        case 1:
        case 2:
        case 3:
            SH(1);
            HD(2);
            HD(4);
            HD(5);
            break;
        case 4:
        case 5:
        case 6:
            SH(1);
            SH(2);
            HD(4);
            HD(5);
            break;
        case 7:
            SH(1);
            SH(2);
            SH(4);
            HD(5);
            break;
        default:
            SH(1);
            SH(2);
            SH(4);
            SH(5);
            break;
        }
        break;
    }
    ((Mdl381 *)(p + 0x340))->mCC(p + 0x1240);
}
}

class C392 {
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
    virtual unsigned int mB4();
};

extern "C" void func_00105578(float *, float *, float);

extern "C" void func_00133890(char *, float *, float *);

class C380 {
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
    virtual int mB4();
};

extern "C" {
void func_00380F70(char *p) {
    extern void func_00104C00(char *, char *, char *);
    extern void func_0034BA60(int, char *, signed char, int, int);
    extern C392 *func_002792A0(char *);
    extern void func_00207470(int, int, char *);
    float m[16] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    int i;
    for (i = 0; i < ((C380 *)func_002792A0(p + 0x340))->mB4(); i++) {
        func_00104C00(*(char **)(((char **)(p + 0x9D0))[i] + 0x104), p + 0x1240, *(char **)(((char **)(p + 0x9D0))[i] + 0x100));
    }
    *(float *)(p + 0x1270) = *(float *)(p + 0x1270) + *(float *)(p + 0x1340);
    *(float *)(p + 0x1274) = *(float *)(p + 0x1274) + *(float *)(p + 0x1344);
    *(float *)(p + 0x1278) = *(float *)(p + 0x1278) + *(float *)(p + 0x1348);
    *(float *)(p + 0x1344) = *(float *)(p + 0x1344) + (-(0.005f * *(float *)(p + 0x10)) * (float)*(short *)(p + 0xB90) - 0.1f * *(float *)(p + 0x10));
    if (*(float *)(p + 0x1274) < 100.0f) {
        *(unsigned char *)(p + 5) = 4;
        func_0034BA60(0x2C, p + 0x1270, 0x29, 0, 1);
        if (*(short *)(p + 0xB90) % 2) func_00207470(3, 0x3B6, p + 0x1240);
        *(float *)(p + 0x145C) = 5.0f;
        *(float *)(p + 0x1460) = 0.0f;
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105578(m, m, 0.0245436914f);
    func_00104C00(p + 0x1240, p + 0x1240, (char *)m);
    a[0] = *(float *)(p + 0x1260);
    a[1] = *(float *)(p + 0x1264) + 0.01f * *(float *)(p + 0x10);
    a[2] = *(float *)(p + 0x1268);
    a[3] = 0.0f;
    b[0] = *(float *)(p + 0x1250);
    b[1] = *(float *)(p + 0x1254);
    b[2] = *(float *)(p + 0x1258);
    func_00133890(p + 0x1240, a, b);
}
}

extern "C" void func_0037C7B0(char *, int);

class B0_37C {
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
    virtual void mF8(char *, char *);
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
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual int m310();
    virtual int m314();
    char pad[0x3C];
};

class B1_37C {
public:
    int x;
};

class D_37C : public B0_37C, public B1_37C {
public:
    int y;
};

class O37Ca {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int, float *, char *, char *, char *);
};

class O37Cb {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void m14(char *, char *, char *);
};

class E37C {
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
    virtual void m38(char *, char *);
};

typedef struct { int w[16]; } T37C;

extern "C" {
void func_0037C8A0(D_37C *self, char *a, E37C *e, float *v) {
    extern void func_0034BA60(int, float *, signed char, int, int);
    char *p = (char *)self;
    T37C t;
    if (*(unsigned char *)(p + 0x77C8) != 0) return;
    t = *(T37C *)a;
    if (*(unsigned char *)(p + 0x7805) != 0) {
        ((unsigned char *)&t)[0x20] = 4;
    }
    switch (*(signed char *)(a + 2)) {
    case 0:
        switch ((unsigned char)self->m310()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), v, *(signed char *)(p + 0x46), 0, 1);
            ((O37Ca *)(p + 0x75F0))->m18(0, v, (char *)&t, (char *)e, p + 0x6C0);
            ((O37Cb *)(p + 0x724C))->m14(a, (char *)e, p + 0x7264);
            e->m38(a, (char *)(B1_37C *)self);
            break;
        case 2:
            ((O37Ca *)(p + 0x75F0))->m18(2, v, a, (char *)e, p + 0x6C0);
            self->mF8(a, (char *)e);
            func_0034BA60(8, v, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        break;
    case 1:
        switch ((unsigned char)self->m314()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), v, *(signed char *)(p + 0x46), 0, 1);
            ((O37Ca *)(p + 0x75F0))->m18(0, v, a, (char *)e, p + 0x6C0);
            ((O37Cb *)(p + 0x724C))->m14(a, (char *)e, p + 0x7264);
            e->m38(a, (char *)(B1_37C *)self);
            break;
        case 2:
            ((O37Ca *)(p + 0x75F0))->m18(2, v, a, (char *)e, p + 0x6C0);
            self->mF8(a, (char *)e);
            func_0034BA60(6, v, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        break;
    }
    func_0037C7B0(p, 0);
}
}

extern "C" void func_001A1E10(char *);

class V37A {
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
    virtual void m1F0(int, int);
};

extern "C" {
void func_0037AEA0(char *p) {
    extern void func_001AD140(char *);
    extern char D_01CAFF0C[];
    extern void func_001AD100(void);
    extern void func_0034BA60(int, char *, int, int, int);
    extern void func_0037E850(char *, int);
    int i;
    char *t;
    *(int *)(p + 0xC) &= 0xEF;
    func_001AD100();
    t = *(char **)(*(char **)D_01CAFF0C + 0x18);
    *(unsigned char *)(t + 0x5C) |= 1;
    for (i = 0; i < *(int *)(p + 0x6E54); i++) {
        if (*(char **)(p + i * 4 + 0x6C20) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6C20));
    }
    for (i = 0; i < *(int *)(p + 0x6E58); i++) {
        if (*(char **)(p + i * 4 + 0x6C60) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6C60));
    }
    for (i = 0; i < *(int *)(p + 0x6E5C); i++) {
        if (*(char **)(p + i * 4 + 0x6C80) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6C80));
    }
    for (i = 1; i < *(int *)(p + 0x6E80); i++) {
        func_00206730(p + i * 4 + 0x6640);
        if (*(char **)(p + i * 4 + 0x6640) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6640));
    }
    func_0037C0C0(p, 0xA);
    *(float *)(p + 0x65F0) = 0.0f;
    *(int *)(p + 0x65A0) = **(int **)(p + 0x782C);
    *(int *)(p + 0x65C8) = **(int **)(p + 0x782C);
    *(int *)(p + 0x7670) = *(int *)(*(char **)(p + 0x782C) + 0x58);
    *(float *)(p + 0x667C) = 1.0f;
    *(short *)(p + 0x6668) = 0;
    for (i = 1; i < 10; i++) {
        *(float *)(p + i * 4 + 0x65F0) = *(float *)(p + i * 4 + 0x65EC) - *(float *)(p + *(int *)(p + 0x65A0) * 4 + 0x6410);
        *(float *)(p + i * 4 + 0x667C) = 1.0f;
        *(int *)(p + i * 4 + 0x65A0) = **(int **)(p + 0x782C);
        *(short *)(p + i * 2 + 0x6668) = 0;
        *(float *)(p + 0x6E6C) = 2.0f;
    }
    (*(unsigned char *)(p + 4))++;
    *(signed char *)(p + 5) = 0;
    *(float *)(p + 0x77E8) = 0.0f;
    *(short *)(p + 0x6E68) = 0x100;
    *(float *)(p + 0x6E6C) = 10.0f;
    for (i = 0; i < 0x82; i++) func_0037D300(p, 1);
    *(float *)(p + 0x6E6C) = 2.0f;
    *(signed char *)(p + 0x78CA) = 0;
    ((V37A *)p)->m1F0(*(int *)(p + 0x148), *(int *)(p + 0x11C));
    func_0037E850(p, 1);
    func_0034BA60(0x2B, p + 0x6F0, 0x29, 0, 1);
    func_001A1E10(func_00279290(p + 0x8C0));
    for (i = 0; i < 10; i++) {
        func_00206730(p + i * 4 + 0x6640);
        if (*(char **)(p + i * 4 + 0x6640) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6640));
        func_00206730(p + i * 4 + 0x6640);
    }
    *(int *)(p + 0x78E0) = 0;
}
}

class V2F4_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_0037A4E0(int p0, int p1, int p2, int p3, char *p4) {
    extern char D_01CAFF0C[];
    int func_001AD140(...);
    int v4;
    char *v0;
    char *v5;
    char *v1;
    int v3;
    int v6;
    float v7;
    int v2;
    v0 = *(char **)D_01CAFF0C;
    v1 = (char *)p0;
    v0 = *(char **)(v0 + 12);
    if (*(unsigned char *)(v0 + 15480) != 0) {
        *(short *)(v1 + 26216) += 256;
        *(short *)(v1 + 26216) = (-256 & *(short *)(v1 + 26216));
    } else {
        p2 = *(short *)(v1 + 26216);
        *(short *)(v1 + 26216) = (p2 + *(short *)(v1 + 28264));
        *(short *)(v1 + 26216) = (-1024 & *(short *)(v1 + 26216));
    }
    *(float *)(v1 + 30696) = (*(float *)(v1 + 30696) + *(float *)(v1 + 16));
    v6 = 1;
    if (!(*(int *)(v1 + 28288) <= 1)) {
        p4 = (v1 + 2);
        v7 = 4.0f;
        p3 = -256;
        do {
            if (*(float *)(v1 + 30696) > (v7 * (float)v6)) {
                if (*(unsigned char *)(v0 + 15480) != 0) {
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) + 256);
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) & p3);
                } else {
                    p2 = *(short *)(p4 + 26216);
                    *(short *)(p4 + 26216) = (p2 + *(short *)(v1 + 28264));
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) & -1024);
                }
            }
            v6 = (v6 + 1);
            p4 = (p4 + 2);
        } while ((v6 < *(int *)(v1 + 28288)));
    }
    if (*(float *)(v1 + 30696) > *(float *)(v1 + 30700)) {
        v4 = ((V2F4_1_ii *)v1)->m(100);
        v2 = 1;
        if (!(*(int *)(v1 + 28288) <= 1)) {
            v5 = (v1 + 4);
            do {
                v3 = *(int *)(v5 + 26176);
                if (v3 != 0) {
                    v4 = func_001AD140(v3);
                }
                v2 = (v2 + 1);
                v5 = (v5 + 4);
            } while ((v2 < *(int *)(v1 + 28288)));
        }
    }
    return v4;
}
}

extern "C" {
int func_0037ABE0(int p0, int p1, int p2, int p3, char *p4) {
    extern char D_01CAFF0C[];
    int func_001AD140(...);
    int v4;
    char *v0;
    char *v5;
    char *v1;
    int v3;
    int v6;
    float v7;
    int v2;
    v0 = *(char **)D_01CAFF0C;
    v1 = (char *)p0;
    v0 = *(char **)(v0 + 12);
    if (*(unsigned char *)(v0 + 15480) != 0) {
        *(short *)(v1 + 26216) += 128;
        *(short *)(v1 + 26216) = (-128 & *(short *)(v1 + 26216));
    } else {
        p2 = *(short *)(v1 + 26216);
        *(short *)(v1 + 26216) = (p2 + *(short *)(v1 + 28264));
        *(short *)(v1 + 26216) = (-512 & *(short *)(v1 + 26216));
    }
    *(float *)(v1 + 30696) = (*(float *)(v1 + 30696) + *(float *)(v1 + 16));
    v6 = 1;
    if (!(*(int *)(v1 + 28288) <= 1)) {
        p4 = (v1 + 2);
        v7 = 4.0f;
        p3 = -128;
        do {
            if (*(float *)(v1 + 30696) > (v7 * (float)v6)) {
                if (*(unsigned char *)(v0 + 15480) != 0) {
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) + 128);
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) & p3);
                } else {
                    p2 = *(short *)(p4 + 26216);
                    *(short *)(p4 + 26216) = (p2 + *(short *)(v1 + 28264));
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) & -512);
                }
            }
            v6 = (v6 + 1);
            p4 = (p4 + 2);
        } while ((v6 < *(int *)(v1 + 28288)));
    }
    if (*(float *)(v1 + 30696) > *(float *)(v1 + 30700)) {
        v4 = ((V2F4_1_ii *)v1)->m(100);
        v2 = 1;
        if (!(*(int *)(v1 + 28288) <= 1)) {
            v5 = (v1 + 4);
            do {
                v3 = *(int *)(v5 + 26176);
                if (v3 != 0) {
                    v4 = func_001AD140(v3);
                }
                v2 = (v2 + 1);
                v5 = (v5 + 4);
            } while ((v2 < *(int *)(v1 + 28288)));
        }
    }
    return v4;
}
}

extern "C" {
int func_00379700(char *, int);
}

extern "C" {
int func_0037B210(char *, int);
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

class V2E8_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_00378190(char *p0) {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    tmp0 = 3;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = ((V130_1_ii *)p0)->m(v0);
            break;
        case 1:
            v1 = func_00379700(p0, v0);
            break;
        case 2:
            v1 = func_0037B210(p0, v0);
            break;
        }
    } else {
        v1 = ((V2E8_1_ii *)p0)->m(v0);
    }
    return v1;
}
}

extern "C" {
int func_0037A270(char *p0) {
    int func_0024E800(...);
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = 0;
    if ((0 < *(int *)(p0 + 28288))) {
        v2 = v0;
        do {
            v3 = *(short *)(v2 + 26216);
            if (v3 != 0) {
                *(short *)(v2 + 26216) = (v3 + 512);
            }
            v1 = (v1 + 1);
            v2 = (v2 + 2);
        } while ((v1 < *(int *)(v0 + 28288)));
    }
    v4 = func_0024E800((v0 + 28016));
    if (v4 != 0) {
        v4 = ((V2F4_1_ii *)v0)->m(100);
    }
    return v4;
}
}

class V2FC_1_ii {
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
    virtual int m(int);
};

extern "C" {
void func_0037A490(char *p0) {
    char *v0;
    float v1;
    int tmp2;
    v1 = 0.0f;
    v0 = p0;
    *(float *)(p0 + 30696) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 30696) < v1) {
        tmp2 = ((V2FC_1_ii *)p0)->m(5);
        *(int *)(v0 + 30696) = 0;
    }
}
}

extern "C" {
void func_0037A810(char *p0) {
    char *v0;
    float v1;
    int tmp2;
    v1 = 0.0f;
    v0 = p0;
    *(float *)(p0 + 30696) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 30696) < v1) {
        tmp2 = ((V2FC_1_ii *)p0)->m(7);
        *(int *)(v0 + 30696) = 0;
    }
}
}

extern "C" {
int func_0037A860(int p0, int p1, int p2, int p3, char *p4) {
    extern char D_01CAFF0C[];
    int func_001AD140(...);
    int v4;
    char *v0;
    char *v5;
    char *v1;
    int v3;
    int v6;
    float v7;
    int v2;
    v0 = *(char **)D_01CAFF0C;
    v1 = (char *)p0;
    v0 = *(char **)(v0 + 12);
    if (*(unsigned char *)(v0 + 15480) != 0) {
        *(short *)(v1 + 26216) += 128;
        *(short *)(v1 + 26216) = (-128 & *(short *)(v1 + 26216));
    } else {
        p2 = *(short *)(v1 + 26216);
        *(short *)(v1 + 26216) = (p2 + *(short *)(v1 + 28264));
        *(short *)(v1 + 26216) = (-512 & *(short *)(v1 + 26216));
    }
    *(float *)(v1 + 30696) = (*(float *)(v1 + 30696) + *(float *)(v1 + 16));
    v6 = 1;
    if (!(*(int *)(v1 + 28288) <= 1)) {
        p4 = (v1 + 2);
        v7 = 4.0f;
        p3 = -128;
        do {
            if (*(float *)(v1 + 30696) > (v7 * (float)v6)) {
                if (*(unsigned char *)(v0 + 15480) != 0) {
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) + 128);
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) & p3);
                } else {
                    p2 = *(short *)(p4 + 26216);
                    *(short *)(p4 + 26216) = (p2 + *(short *)(v1 + 28264));
                    *(short *)(p4 + 26216) = (*(short *)(p4 + 26216) & -512);
                }
            }
            v6 = (v6 + 1);
            p4 = (p4 + 2);
        } while ((v6 < *(int *)(v1 + 28288)));
    }
    if (*(float *)(v1 + 30696) > *(float *)(v1 + 30700)) {
        v4 = ((V2F4_1_ii *)v1)->m(100);
        v2 = 1;
        if (!(*(int *)(v1 + 28288) <= 1)) {
            v5 = (v1 + 4);
            do {
                v3 = *(int *)(v5 + 26176);
                if (v3 != 0) {
                    v4 = func_001AD140(v3);
                }
                v2 = (v2 + 1);
                v5 = (v5 + 4);
            } while ((v2 < *(int *)(v1 + 28288)));
        }
    }
    return v4;
}
}

extern "C" {
void func_0037AB90(char *p0) {
    char *v0;
    float v1;
    int tmp2;
    v1 = 0.0f;
    v0 = p0;
    *(float *)(p0 + 30696) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 30696) < v1) {
        tmp2 = ((V2FC_1_ii *)p0)->m(9);
        *(int *)(v0 + 30696) = 0;
    }
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
int func_0037D0F0(int p0) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 2240))->m();
    v1 = 0;
    v2 = v0;
    do {
        v3 = ((VD0_0_i *)(v2 + 3776))->m();
        v1 = (v1 + 1);
        v2 = (v2 + 1088);
    } while ((v1 < 20));
    if ((0 < *(int *)(v0 + 468))) {
        v4 = 0;
        v5 = (int)v0;
        do {
            v3 = func_0013D5D0((v5 + 472));
            v4 = (v4 + 1);
            v5 = (v5 + 16);
        } while ((v4 < *(int *)(v0 + 468)));
    }
    return v3;
}
}

class V2F4_1_iv {
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
    virtual void m(int);
};

class V318_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_0037ED40(char *p0, int p1, int p2) {
    int tmp0;
    ((V2F4_1_iv *)p0)->m(101);
    tmp0 = ((V318_2_iii *)p0)->m(p1, p2);
    return tmp0;
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VA4_0_v {
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
    virtual void m(void);
};

extern "C" {
void func_0037EEE0(char *p0, int p1, int p2) {
    int v0;
    char *v1;
    int v2;
    int v3;
    v0 = p2;
    v1 = p0;
    if (*(unsigned char *)(p0 + 333) != 3) {
        ((VA4_0_v *)(v1 + 304))->m();
        *(int *)(v1 + 328) = v0;
        *(char *)(v1 + 364) = *(signed char *)((char *)p1 + 0);
        *(char *)(v1 + 365) = *(signed char *)((char *)p1 + 1);
        *(char *)(v1 + 366) = *(signed char *)((char *)p1 + 2);
        *(float *)(v1 + 368) = *(float *)((char *)p1 + 4);
        *(float *)(v1 + 372) = *(float *)((char *)p1 + 8);
        *(float *)(v1 + 376) = *(float *)((char *)p1 + 12);
        *(float *)(v1 + 380) = *(float *)((char *)p1 + 16);
        *(float *)(v1 + 384) = *(float *)((char *)p1 + 20);
        *(char *)(v1 + 388) = *(signed char *)((char *)p1 + 24);
        *(float *)(v1 + 392) = *(float *)((char *)p1 + 28);
        *(char *)(v1 + 396) = *(signed char *)((char *)p1 + 32);
        *(float *)(v1 + 400) = *(float *)((char *)p1 + 36);
        *(float *)(v1 + 404) = *(float *)((char *)p1 + 40);
        *(float *)(v1 + 408) = *(float *)((char *)p1 + 44);
        *(char *)(v1 + 412) = *(unsigned char *)((char *)p1 + 48);
        *(int *)(v1 + 416) = *(int *)((char *)p1 + 52);
        *(float *)(v1 + 420) = *(float *)((char *)p1 + 56);
        *(char *)(v1 + 424) = *(signed char *)((char *)p1 + 60);
        *(char *)(v1 + 425) = *(signed char *)((char *)p1 + 61);
        *(char *)(v1 + 426) = *(signed char *)((char *)p1 + 62);
        v3 = ((V10_0_i *)*(char **)(v1 + 316))->m();
        v2 = (v3 & 255);
        switch (v2) {
        case 0:
            v3 = ((V2F4_1_ii *)v1)->m(20);
            break;
        case 1:
            v3 = ((V2F4_1_ii *)v1)->m(21);
            break;
        }
        *(char *)(v1 + 333) = 3;
        *(char *)(v1 + 30664) = 1;
        *(int *)(v1 + 29456) = 0;
    }
}
}

extern "C" {
int func_00380080(char *, int);
}

extern "C" {
void func_0037F7C0(char *p0) {
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
        v1 = func_00380080(p0, v0);
        return;
    }
}
}

class V314_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00381B60(char *p0) {
    int tmp0;
    tmp0 = ((V314_0_i *)p0)->m();
    *(char *)(p0 + 5200) = 1;
    *(int *)(p0 + 5204) = 0x41200000;
    *(int *)(p0 + 5208) = 0x42a00000;
    return tmp0;
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
void func_00381C60(char *p0, int p1, int p2) {
    int v0;
    char *v1;
    int v2;
    int v3;
    v0 = p2;
    v1 = p0;
    if (*(unsigned char *)(p0 + 333) != 3) {
        ((VA4_0_v *)(v1 + 304))->m();
        *(int *)(v1 + 328) = v0;
        *(char *)(v1 + 364) = *(signed char *)((char *)p1 + 0);
        *(char *)(v1 + 365) = *(signed char *)((char *)p1 + 1);
        *(char *)(v1 + 366) = *(signed char *)((char *)p1 + 2);
        *(float *)(v1 + 368) = *(float *)((char *)p1 + 4);
        *(float *)(v1 + 372) = *(float *)((char *)p1 + 8);
        *(float *)(v1 + 376) = *(float *)((char *)p1 + 12);
        *(float *)(v1 + 380) = *(float *)((char *)p1 + 16);
        *(float *)(v1 + 384) = *(float *)((char *)p1 + 20);
        *(char *)(v1 + 388) = *(signed char *)((char *)p1 + 24);
        *(float *)(v1 + 392) = *(float *)((char *)p1 + 28);
        *(char *)(v1 + 396) = *(signed char *)((char *)p1 + 32);
        *(float *)(v1 + 400) = *(float *)((char *)p1 + 36);
        *(float *)(v1 + 404) = *(float *)((char *)p1 + 40);
        *(float *)(v1 + 408) = *(float *)((char *)p1 + 44);
        *(char *)(v1 + 412) = *(unsigned char *)((char *)p1 + 48);
        *(int *)(v1 + 416) = *(int *)((char *)p1 + 52);
        *(float *)(v1 + 420) = *(float *)((char *)p1 + 56);
        *(char *)(v1 + 424) = *(signed char *)((char *)p1 + 60);
        *(char *)(v1 + 425) = *(signed char *)((char *)p1 + 61);
        *(char *)(v1 + 426) = *(signed char *)((char *)p1 + 62);
        v3 = ((V10_0_i *)*(char **)(v1 + 316))->m();
        v2 = (v3 & 255);
        switch (v2) {
        case 0:
            v3 = ((V2F0_1_ii *)v1)->m(20);
            break;
        case 1:
            v3 = ((V2F0_1_ii *)v1)->m(21);
            break;
        }
        *(char *)(v1 + 333) = 3;
        *(char *)(v1 + 4656) = 1;
    }
}
}

extern "C" {
int func_00381DE0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 832))->m();
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

extern "C" {
extern char D_005678C0[];
}

extern "C" {
extern char D_005678C4[];
}

extern "C" {
int func_00379B20(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int func_0037E850(int, int);
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = ((V2FC_1_ii *)p0)->m(0);
    v1 = (int)v0;
    if (*(int *)(v0 + 28224) != 0) {
        v2 = func_0037E850(v1, 0);
    }
    *(float *)(v0 + 29332) = *(float *)D_005678C0;
    *(float *)(v0 + 29336) = *(float *)D_005678C4;
    *(float *)(v0 + 29460) = *(float *)(v0 + 29332);
    *(float *)(v0 + 29464) = *(float *)(v0 + 29336);
    return v2;
}
}

extern "C" void func_0037ED30(char *p) { ((VThunk *)p)->v196(); }

extern "C" void func_00381B50(char *p) { ((VThunk *)p)->v195(); }

extern "C" void func_00381BE0(void) {}

extern "C" void func_0037ED20(char *p) { ((VThunk *)p)->v196(); }
