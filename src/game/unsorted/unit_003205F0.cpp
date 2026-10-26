#include "game/mt_rand.h"
#include "game/vthunk.h"
class Anim4 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
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
    virtual void m74();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
};

extern "C" int func_00321980(char *p, int i) {
    char *list = (*(char ***)(*(char **)(p + 8) + 8))[i];
    float f = ((Anim4 *)p)->m7C();
    int k;
    char *e;
    float r;
    float acc;
    if (*(unsigned char *)(p + 0x8D)) {
        f = 1199.0f;
    }
    k = ((Anim4 *)p)->m80(f);
    if (*(unsigned char *)(p + 0x8D)) {
        k++;
    }
    e = ((char **)list)[k];
    r = 99.0f * (2.3283064e-10f * mt_rand());
    acc = 0.0f;
    for (;; e += 8) {
        acc += *(float *)(e + 4);
        if (!(acc > r)) {
            continue;
        }
        return *(int *)e;
    }
}

/* Like func_00321980, but the list is chosen by `which` and then by distance thresholds. */
extern "C" int func_00321B10(char *p, unsigned char which) {
    char **lst;
    char *e;
    float *t;
    float f;
    int k;
    char *w;
    float r;
    float acc;
    ((Anim4 *)p)->m6C();
    ((Anim4 *)p)->m74();
    switch (which) {
    case 0:
        lst = *(char ***)(*(char **)(p + 8) + 0);
        break;
    case 1:
        lst = *(char ***)(*(char **)(p + 8) + 4);
        break;
    }
    t = *(float **)(*(char **)(p + 8) + 0xC);
    e = *lst++;
    while (*t > 0.0f) {
        if (!(*t <= *(float *)(p + 0x34))) {
            break;
        }
        t++;
        e = *lst++;
    }
    f = ((Anim4 *)p)->m7C();
    if (*(unsigned char *)(p + 0x8D)) {
        f = 1199.0f;
    }
    k = ((Anim4 *)p)->m80(f);
    if (*(unsigned char *)(p + 0x8D)) {
        k++;
    }
    w = ((char **)e)[k];
    r = 99.0f * (2.3283064e-10f * mt_rand());
    acc = 0.0f;
    for (;; w += 8) {
        acc += *(float *)(w + 4);
        if (!(acc > r)) {
            continue;
        }
        return *(int *)w;
    }
}

class ObjB4 {
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
    virtual void mB4(int);
};

class ObjT1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

extern "C" {
/* Arms a timed event: stores its four parameters, snapshots the clock and enters state 0xE. */
void func_003205F0(char *p, int a, int b, int c, int d) {
    extern char D_01CAFF0C[];
    char *g;
    float t;
    *(int *)(p + 4) = a;
    *(int *)(p + 8) = b;
    *(int *)(p + 0xC) = c;
    *(int *)(p + 0x10) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x14) = t;
    *(short *)(p + 0x30) = 0;
    *(int *)(p + 0x34) = 0;
    *(int *)(p + 0x38) = 0;
    *(unsigned char *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 0x1D) = 0;
    ((ObjB4 *)p)->mB4(0xE);
}
}

extern "C" char D_01CAFF3C[];

class ObjAC {
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
    virtual void mA8();
    virtual void mAC();
};

extern "C" float D_01DF5D30[];

/* Accumulates the meter and edge-triggers the on/off handlers (not in state 3). */
extern "C" void func_00321E30(char *p) {
    *(float *)(p + 0x84) = *(float *)(p + 0x84) + *(float *)(p + 0x80) * D_01DF5D30[0];
    if (*(float *)(p + 0x84) < 0.0f) {
        *(float *)(p + 0x84) = 0.0f;
    }
    *(unsigned char *)(p + 0x8D) = *(unsigned char *)(p + 0x8E);
    if (!(*(float *)(p + 0x84) <= *(float *)(p + 0x88)) || *(unsigned char *)(p + 0x8C) != 0) {
        switch (*(unsigned char *)D_01CAFF3C) {
        case 4:
            *(unsigned char *)(p + 0x8D) = 1;
        }
    }
    if (*(unsigned char *)(p + 0x8D) != 0) {
        if (*(unsigned char *)(p + 0x8F) == 0 && *(unsigned char *)(p + 0x1D) != 3) {
            ((ObjAC *)p)->mA8();
        }
    } else {
        if (*(unsigned char *)(p + 0x8F) != 0 && *(unsigned char *)(p + 0x1D) != 3) {
            ((ObjAC *)p)->mAC();
        }
    }
    *(unsigned char *)(p + 0x8F) = *(unsigned char *)(p + 0x8D);
}

class HitRx {
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
    virtual void m68(char *, int);
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

static inline void hit_copy(char *p, char *h) {
    *(signed char *)(p + 0x3C) = *(signed char *)(h + 0);
    *(signed char *)(p + 0x3D) = *(signed char *)(h + 1);
    *(signed char *)(p + 0x3E) = *(signed char *)(h + 2);
    *(float *)(p + 0x40) = *(float *)(h + 4);
    *(float *)(p + 0x44) = *(float *)(h + 8);
    *(float *)(p + 0x48) = *(float *)(h + 0xC);
    *(float *)(p + 0x4C) = *(float *)(h + 0x10);
    *(float *)(p + 0x50) = *(float *)(h + 0x14);
    *(signed char *)(p + 0x54) = *(signed char *)(h + 0x18);
    *(float *)(p + 0x58) = *(float *)(h + 0x1C);
    *(signed char *)(p + 0x5C) = *(signed char *)(h + 0x20);
    *(float *)(p + 0x60) = *(float *)(h + 0x24);
    *(float *)(p + 0x64) = *(float *)(h + 0x28);
    *(float *)(p + 0x68) = *(float *)(h + 0x2C);
    *(unsigned char *)(p + 0x6C) = *(unsigned char *)(h + 0x30);
    *(int *)(p + 0x70) = *(int *)(h + 0x34);
    *(float *)(p + 0x74) = *(float *)(h + 0x38);
    *(signed char *)(p + 0x78) = *(signed char *)(h + 0x3C);
    *(signed char *)(p + 0x79) = *(signed char *)(h + 0x3D);
    *(signed char *)(p + 0x7A) = *(signed char *)(h + 0x3E);
}

extern "C" void func_003210E0(char *p, char *h, int a) {
    if (*(unsigned char *)(p + 0x1D) != 3) {
        hit_copy(p, h);
        ((HitRx *)p)->mB4(0x11);
        ((HitRx *)p)->m68(h, a);
    }
}

class V6C78 {
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
    virtual int m78(short, short);
};

extern "C" int func_003217B0(V6C78 *o) {
    char *p = (char *)o;
    float *e;
    unsigned short a;
    unsigned short w;
    o->m6C();
    o->m74();
    o->m70();
    e = *(float **)(*(char **)(p + 8) + 0x18);
    if (e[0] <= 0.0f) goto fail;
    do {
        if (*(float *)(p + 0x34) < e[0]) {
            a = o->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            w = (short)(int)(e[1] * 65536.0f / 360.0f + 0.5f);
            if ((unsigned short)(a + w) < w * 2) {
                *(float *)(p + 0x38) = *(float *)(p + 0x38) + e[2] * D_01DF5D30[0];
                return 1;
            }
        }
        e += 3;
    } while (e[0] > 0.0f);
fail:
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

class V80_1_fi {
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
    virtual int m(float);
};

extern "C" bool func_00321900(char *p0) {
    int tmp0;
    float tmp2;
    int tmp3;
    tmp0 = *(int *)(*(char **)(p0 + 8) + 20);
    tmp2 = ((V7C_0_f *)p0)->m();
    tmp3 = ((V80_1_fi *)p0)->m(tmp2);
    return *(float *)(p0 + 56) > *(float *)((char *)(tmp0 + (tmp3 << 2)) + 0);
}

typedef struct {
    signed char a, b, c;
    float f4, f8, fC, f10, f14;
    signed char c18;
    float f1C;
    signed char c20;
    float f24, f28, f2C;
    unsigned char u30;
    int i34;
    float f38;
    signed char c3C, c3D, c3E;
} S320;

class Q320 {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual unsigned char m18();
};

class P320 {
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
    virtual void m68(S320 *, char *);
    virtual void d6C();
    virtual void m70();
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

extern "C" void func_003208A0(char *p, S320 *s, char *q) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S320 *)(p + 0x3C) = *s;
    switch (s->a) {
    case 3:
        ((P320 *)p)->mB4(7);
        break;
    case 5:
        switch ((*(Q320 **)(p + 0xC))->m10()) {
        case 0:
            ((P320 *)p)->mB4(4);
            break;
        case 1:
            ((P320 *)p)->mB4(5);
            break;
        }
        break;
    default:
        (*(Q320 **)(p + 0xC))->m18();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(q + 0x10) : "memory");
        ((P320 *)p)->m70();
        if ((short)(*(short *)(p + 0x30) - *(short *)(*(char **)(p + 0x10) + 0x50) + 0x4000) > 0) {
            switch ((unsigned char)s->c3C) {
            case 0:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
                break;
            case 1:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(q + 0x50) + 0x8000;
                break;
            }
            ((P320 *)p)->mB4(2);
        } else {
            switch ((unsigned char)s->c3C) {
            case 0:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30) + 0x8000;
                break;
            case 1:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(q + 0x50);
                break;
            }
            ((P320 *)p)->mB4(3);
        }
        break;
    }
    ((P320 *)p)->m68(s, q);
}

typedef struct {
    signed char a, b, c;
    float f4, f8, fC, f10, f14;
    signed char c18;
    float f1C;
    signed char c20;
    float f24, f28, f2C;
    unsigned char u30;
    int i34;
    float f38;
    signed char c3C, c3D, c3E;
} S32B;

class Q32B {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual unsigned char m18();
};

class P32B {
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
    virtual void m68(S32B *, char *);
    virtual void d6C();
    virtual void m70();
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

extern "C" void func_00320B60(char *p, S32B *s, char *q) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S32B *)(p + 0x3C) = *s;
    switch ((*(Q32B **)(p + 0xC))->m10()) {
    case 0:
        switch ((*(Q32B **)(p + 0xC))->m18()) {
        case 1:
            break;
        case 4:
        case 7:
            ((P32B *)p)->mB4(0xA);
            break;
        case 5:
            ((P32B *)p)->mB4(0xB);
            break;
        default:
            switch ((*(Q32B **)(p + 0xC))->m14()) {
            case 4:
                break;
            }
            switch (s->a) {
            case 6:
                ((P32B *)p)->mB4(0xC);
                break;
            default:
                    switch ((unsigned char)s->c3C) {
                    case 0:
                        __asm__ volatile("lqc2 $vf4, 0x0(%1)
    	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(q + 0x10) : "memory");
                        ((P32B *)p)->m70();
                        if ((short)(*(short *)(p + 0x30) - *(short *)(*(char **)(p + 0x10) + 0x50) + 0x4000) > 0) {
                            ((P32B *)p)->mB4(0);
                        } else {
                            ((P32B *)p)->mB4(1);
                        }
                        break;
                    case 1:
                        if ((short)(*(short *)(q + 0x50) - *(short *)(*(char **)(p + 0x10) + 0x50) - 0x4000) > 0) {
                            ((P32B *)p)->mB4(0);
                        } else {
                            ((P32B *)p)->mB4(1);
                        }
                        break;
                    }
                break;
            }
            break;
        }
        break;
    case 1:
        switch ((*(Q32B **)(p + 0xC))->m18()) {
        case 1:
            break;
        default:
            switch (s->a) {
            case 3:
                ((P32B *)p)->mB4(7);
                break;
            default:
                switch (s->c) {
                case 0:
                    ((P32B *)p)->mB4(9);
                    break;
                case 1:
                    ((P32B *)p)->mB4(8);
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    ((P32B *)p)->m68(s, q);
}

class V68_3_piii {
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
    virtual int m(char *, int, int);
};

extern "C" {
int func_003211F0(char *p0, char *p1, int p2) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 29);
    if (v0 != 3) {
        *(char *)(p0 + 60) = *(signed char *)(p1 + 0);
        *(char *)(p0 + 61) = *(signed char *)(p1 + 1);
        *(char *)(p0 + 62) = *(signed char *)(p1 + 2);
        *(float *)(p0 + 64) = *(float *)(p1 + 4);
        *(float *)(p0 + 68) = *(float *)(p1 + 8);
        *(float *)(p0 + 72) = *(float *)(p1 + 12);
        *(float *)(p0 + 76) = *(float *)(p1 + 16);
        *(float *)(p0 + 80) = *(float *)(p1 + 20);
        *(char *)(p0 + 84) = *(signed char *)(p1 + 24);
        *(float *)(p0 + 88) = *(float *)(p1 + 28);
        *(char *)(p0 + 92) = *(signed char *)(p1 + 32);
        *(float *)(p0 + 96) = *(float *)(p1 + 36);
        *(float *)(p0 + 100) = *(float *)(p1 + 40);
        *(float *)(p0 + 104) = *(float *)(p1 + 44);
        *(char *)(p0 + 108) = *(unsigned char *)(p1 + 48);
        *(int *)(p0 + 112) = *(int *)(p1 + 52);
        *(float *)(p0 + 116) = *(float *)(p1 + 56);
        *(char *)(p0 + 120) = *(signed char *)(p1 + 60);
        *(char *)(p0 + 121) = *(signed char *)(p1 + 61);
        *(char *)(p0 + 122) = *(signed char *)(p1 + 62);
        v1 = ((V68_3_piii *)p0)->m(p1, p2, v0);
    }
    return v1;
}
}

extern "C" {
int func_003212D0(char *p0, char *p1, int p2) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 29);
    if (v0 != 3) {
        *(char *)(p0 + 60) = *(signed char *)(p1 + 0);
        *(char *)(p0 + 61) = *(signed char *)(p1 + 1);
        *(char *)(p0 + 62) = *(signed char *)(p1 + 2);
        *(float *)(p0 + 64) = *(float *)(p1 + 4);
        *(float *)(p0 + 68) = *(float *)(p1 + 8);
        *(float *)(p0 + 72) = *(float *)(p1 + 12);
        *(float *)(p0 + 76) = *(float *)(p1 + 16);
        *(float *)(p0 + 80) = *(float *)(p1 + 20);
        *(char *)(p0 + 84) = *(signed char *)(p1 + 24);
        *(float *)(p0 + 88) = *(float *)(p1 + 28);
        *(char *)(p0 + 92) = *(signed char *)(p1 + 32);
        *(float *)(p0 + 96) = *(float *)(p1 + 36);
        *(float *)(p0 + 100) = *(float *)(p1 + 40);
        *(float *)(p0 + 104) = *(float *)(p1 + 44);
        *(char *)(p0 + 108) = *(unsigned char *)(p1 + 48);
        *(int *)(p0 + 112) = *(int *)(p1 + 52);
        *(float *)(p0 + 116) = *(float *)(p1 + 56);
        *(char *)(p0 + 120) = *(signed char *)(p1 + 60);
        *(char *)(p0 + 121) = *(signed char *)(p1 + 61);
        *(char *)(p0 + 122) = *(signed char *)(p1 + 62);
        v1 = ((V68_3_piii *)p0)->m(p1, p2, v0);
    }
    return v1;
}
}

extern "C" {
int func_003213B0(char *p0, char *p1, int p2) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 29);
    if (v0 != 3) {
        *(char *)(p0 + 60) = *(signed char *)(p1 + 0);
        *(char *)(p0 + 61) = *(signed char *)(p1 + 1);
        *(char *)(p0 + 62) = *(signed char *)(p1 + 2);
        *(float *)(p0 + 64) = *(float *)(p1 + 4);
        *(float *)(p0 + 68) = *(float *)(p1 + 8);
        *(float *)(p0 + 72) = *(float *)(p1 + 12);
        *(float *)(p0 + 76) = *(float *)(p1 + 16);
        *(float *)(p0 + 80) = *(float *)(p1 + 20);
        *(char *)(p0 + 84) = *(signed char *)(p1 + 24);
        *(float *)(p0 + 88) = *(float *)(p1 + 28);
        *(char *)(p0 + 92) = *(signed char *)(p1 + 32);
        *(float *)(p0 + 96) = *(float *)(p1 + 36);
        *(float *)(p0 + 100) = *(float *)(p1 + 40);
        *(float *)(p0 + 104) = *(float *)(p1 + 44);
        *(char *)(p0 + 108) = *(unsigned char *)(p1 + 48);
        *(int *)(p0 + 112) = *(int *)(p1 + 52);
        *(float *)(p0 + 116) = *(float *)(p1 + 56);
        *(char *)(p0 + 120) = *(signed char *)(p1 + 60);
        *(char *)(p0 + 121) = *(signed char *)(p1 + 61);
        *(char *)(p0 + 122) = *(signed char *)(p1 + 62);
        v1 = ((V68_3_piii *)p0)->m(p1, p2, v0);
    }
    return v1;
}
}

class VB4_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_00321490(char *p0, char *p1) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 29);
    if (v0 != 3) {
        *(char *)(p0 + 60) = *(signed char *)(p1 + 0);
        *(char *)(p0 + 61) = *(signed char *)(p1 + 1);
        *(char *)(p0 + 62) = *(signed char *)(p1 + 2);
        *(float *)(p0 + 64) = *(float *)(p1 + 4);
        *(float *)(p0 + 68) = *(float *)(p1 + 8);
        *(float *)(p0 + 72) = *(float *)(p1 + 12);
        *(float *)(p0 + 76) = *(float *)(p1 + 16);
        *(float *)(p0 + 80) = *(float *)(p1 + 20);
        *(char *)(p0 + 84) = *(signed char *)(p1 + 24);
        *(float *)(p0 + 88) = *(float *)(p1 + 28);
        *(char *)(p0 + 92) = *(signed char *)(p1 + 32);
        *(float *)(p0 + 96) = *(float *)(p1 + 36);
        *(float *)(p0 + 100) = *(float *)(p1 + 40);
        *(float *)(p0 + 104) = *(float *)(p1 + 44);
        *(char *)(p0 + 108) = *(unsigned char *)(p1 + 48);
        *(int *)(p0 + 112) = *(int *)(p1 + 52);
        *(float *)(p0 + 116) = *(float *)(p1 + 56);
        *(char *)(p0 + 120) = *(signed char *)(p1 + 60);
        *(char *)(p0 + 121) = *(signed char *)(p1 + 61);
        *(char *)(p0 + 122) = *(signed char *)(p1 + 62);
        v1 = ((VB4_2_iii *)p0)->m(16, v0);
    }
    return v1;
}
}

extern "C" {
void func_002F2FB0(int);
}

extern "C" {
int func_002F3080(int);
}

class V1F8_1_fv {
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
    virtual void m(float);
};

extern "C" {
void func_00321F90(int p0) {
    extern char D_01CAFF0C[];
    char *v0;
    int v1;
    char *v2;
    v0 = (char *)p0;
    func_002F2FB0(*(int *)(*(char **)D_01CAFF0C + 32));
    for (;;) {
        v1 = func_002F3080(*(int *)(*(char **)D_01CAFF0C + 32));
        v2 = (char *)v1;
        if ((((int)v2 != 0) ^ 1)) break;
        ((V1F8_1_fv *)v2)->m(*(float *)(v0 + 124));
    }
}
}

extern "C" void func_003206E0(char *p) { ((VThunk *)p)->v24(); }
