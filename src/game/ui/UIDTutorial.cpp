#include "game/vthunk.h"
extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_001AD140(char *);

extern "C" char D_01DFABA0[];

extern "C" char D_01DF5D20[];

extern "C" float func_001F9C40(char *, int);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" char D_01DFA340[];

extern "C" void func_0030EA90(char *, int);

extern "C" int D_00569F10[];

class W3F4 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24(int);
    virtual void d28();
    virtual int m2C(char *, char *);
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
};

static inline char *inner3F4(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk3F4(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return inner3F4(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_003F4050(char *p) {
    char *a;
    char *b;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 0x640) = 0;
        *(float *)(p + 0x650) = 0.0f;
        *(float *)(p + 0x654) = 0.0f;
        *(float *)(p + 0x658) = 0.0f;
        *(float *)(p + 0x65C) = 1.0f;
        *(float *)(p + 0x660) = 0.0f;
        *(float *)(p + 0x664) = 0.0f;
        *(float *)(p + 0x668) = 0.0f;
        *(float *)(p + 0x66C) = 1.0f;
        *(float *)(p + 0x670) = 1.0f;
        *(float *)(p + 0x674) = 1.0f;
        *(float *)(p + 0x678) = 1.0f;
        *(float *)(p + 0x67C) = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x680) : "memory");
        func_00131700(p + 0x680, p + 0x680, p + 0x660);
        func_00105230(p + 0x680, p + 0x680, p + 0x650);
        func_001318E0(p + 0x680, p + 0x680, p + 0x670);
        a = chunk3F4(*(char **)(p + 0x38), -1);
        b = chunk3F4(*(char **)(p + 0x38), 0);
        ((W3F4 *)(p + 0x40))->m24(1);
        if ((unsigned char)((W3F4 *)(p + 0x40))->m2C(b, a) == 0) goto fail;
        ((W3F4 *)(p + 0x40))->m3C(3);
        *(unsigned char *)(p + 0x6C3) = 0;
        ((W3F4 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C3), 1);
        *(unsigned char *)(p + 0x6C1) = 0;
        *(unsigned char *)(p + 0x6C2) = 0;
        func_003303F0(D_01DFABA0, 0, 0x10, 0x40, 0);
        *(unsigned char *)(p + 4) = 1;
    case 1:
        if (*(unsigned char *)(p + 0x6C3) < 0x40) {
            *(unsigned char *)(p + 0x6C3) = *(unsigned char *)(p + 0x6C3) + 8;
            ((W3F4 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C3), 1);
            if (!(*(unsigned char *)(p + 0x6C3) < 0x40)) {
                ((W3F4 *)(p + 0x40))->m8C();
                func_0030EA90(D_01DFA340, D_00569F10[*(signed char *)(p + 0x6C0)]);
                *(float *)(p + 0x6C4) = 30.0f;
                *(unsigned char *)(p + 4) = 2;
            }
        }
        func_00195E20(D_005BE098, p);
        break;
    case 2:
        *(float *)(p + 0x6C4) = *(float *)(p + 0x6C4) - func_001F9C40(D_01DF5D20, 0x87);
        if (*(float *)(p + 0x6C4) < 0.0f) *(unsigned char *)(p + 4) = 3;
        func_00195E20(D_005BE098, p);
        break;
    case 3:
        if (*(unsigned char *)(p + 0x6C1) == 1) {
            *(unsigned char *)(p + 4) = 4;
            D_01DFA340[0] = 0;
            func_003303F0(D_01DFABA0, 0, 0x11, 0x40, 0);
            *(unsigned char *)(p + 0x6C3) = 0x40;
            ((W3F4 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C3), 1);
        } else {
            func_00195E20(D_005BE098, p);
            break;
        }
    case 4:
        if (0 < *(unsigned char *)(p + 0x6C3)) {
            *(unsigned char *)(p + 0x6C3) = *(unsigned char *)(p + 0x6C3) - 8;
            if (*(unsigned char *)(p + 0x6C3) < 0) *(unsigned char *)(p + 0x6C3) = 0;
            ((W3F4 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C3), 1);
        }
        if (*(unsigned char *)(p + 0x6C3) == 0) {
            ((W3F4 *)(p + 0x40))->m8C();
            *(unsigned char *)(p + 4) = 5;
            *(unsigned char *)(p + 0x6C2) = 1;
            break;
        }
        func_00195E20(D_005BE098, p);
        break;
    case 5:
        break;
    }
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 5;
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

extern "C" void func_003F3E10(char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" char *func_003F3F30(int p0, unsigned char k) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x700, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_003F3E10(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(unsigned char *)(ret + 0x6C0) = k;
    }
    return ret;
}

extern "C" void func_003F44C0(void) {}

extern "C" void func_003F4480(char *p) { ((VThunk *)(p + 0x40))->v50(); }

/* AUTO-GENERATED by tools/gen_clones.py: copies of functions in src/game/stage/Stage.cpp
 * with their constants and symbols substituted, verified byte-for-byte. */
class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_003F44A0(char *p) {
    ((SubCCc *)(p + 0x40))->mCC(p + 0x680);
}
}
