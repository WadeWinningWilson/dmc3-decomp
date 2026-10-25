/* Hand-matched C++ (virtual calls), part 7: functions whose callee prototypes conflict
 * with declarations in vcalls.cpp .. vcalls6.cpp. */
typedef struct { short s0; short s2; short s4; short s6; float f8; float fC; float f10; float f14; float f18; float f1C; float f20; unsigned char b24; } E3A1;
typedef struct { float v[4]; } F3A1;
extern "C" E3A1 D_00563FB0 __attribute__((aligned(16)));
extern "C" E3A1 D_00563FE0 __attribute__((aligned(16)));
extern "C" E3A1 D_00564010 __attribute__((aligned(16)));
extern "C" E3A1 D_00564040 __attribute__((aligned(16)));
extern "C" F3A1 D_00564070 __attribute__((aligned(16)));
extern "C" short D_00563DC0[];
extern "C" void func_003A0CD0(char *, short);
extern "C" unsigned char func_0024E800(char *);
extern "C" void func_0024DA80(char *, int, int);
extern "C" void func_0039D800(char *);
extern "C" void func_003A0F20(char *);
extern "C" unsigned char func_003A2080(char *, char *, float, float);
extern "C" unsigned char func_0039DDF0(char *, float);
static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }
static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }
static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }
class V3A1 {
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
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8();
    virtual int m1BC();
};

typedef struct { unsigned char b0; short s2; short s4; short s6; short s8; short sA; float fC; float f10; float f14; float f18; float f1C; float f20; float f24; float f28; float f2C; float f30; float f34; float f38; } G3A1;
extern "C" G3A1 D_00564080 __attribute__((aligned(16)));
extern "C" G3A1 D_005640C0 __attribute__((aligned(16)));
extern "C" G3A1 D_00564100 __attribute__((aligned(16)));
extern "C" G3A1 D_00564140 __attribute__((aligned(16)));
extern "C" G3A1 D_00564180 __attribute__((aligned(16)));
extern "C" G3A1 D_005641C0 __attribute__((aligned(16)));
extern "C" void func_003A1180(char *);
extern "C" char *D_005BDC30;
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" void func_0028C3A0(char *, int, int, char *);
extern "C" void func_004B7F80(char *, int);
extern "C" int func_002DA0B0(char *, int);
extern "C" void func_00496570(char *);
extern "C" void func_004962A0(char *);
extern "C" int func_0033DA60(char *);
extern "C" int func_0011FA58(float);
extern "C" int func_00100330(int, int);
extern "C" void func_00104B80(float *, char *, char *);
extern "C" void func_00104C00(char *, int, char *);
extern "C" char *func_002F7C10(int, int);
extern "C" char D_01DFABA0[];
extern "C" int D_00578A50[];
extern "C" char *func_00207480(int, int, char *, int);
extern "C" void func_001AD140(char *);
extern "C" void func_003305E0(char *, int, int, float *, int, int, int);
extern "C" void func_0028C790(char *, int);
extern "C" void func_0034C3E0(int);
extern "C" char D_01CAFF0C[];
extern "C" unsigned char func_002D9FA0(char *, float *);
extern "C" short func_0034B940(float *, float *);
extern "C" void func_00131700(float *, float *, float *);
extern "C" void func_00131650(char *, char *);
extern "C" void func_0033CC60(char *);
extern "C" void func_0033D430(char *);
extern "C" void func_0033D310(char *);
extern "C" void func_0033D350(char *);
extern "C" void func_001A1E10(char *);
extern "C" void func_001AD100(void);
extern "C" void func_00206730(char *);
extern "C" char *func_00279290(char *);
extern "C" void func_0034BA60(int, char *, int, int, int);
extern "C" void func_0037C0C0(char *, int);
extern "C" void func_0037D300(char *, int);
extern "C" void func_0037E850(char *, int);
extern "C" int func_004D2D90(char *);
extern "C" char **func_004D2740(char *);
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" void func_004D2B10(char *, unsigned char);
extern "C" void func_00207A90(unsigned int *);
extern "C" unsigned int D_01DF8810[];
extern "C" unsigned int D_01DF7E50[];
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
extern "C" float func_004D32F0(char *);
extern "C" int func_004D2890(float, char *, float *, int);
extern "C" float func_00132470(char *, char *);
extern "C" char D_0058ADC0[];
extern "C" float D_005BDD9C;
extern "C" float D_005BDE0C;
extern "C" float D_005BDE14;
extern "C" float D_005BDE18;
extern "C" float func_001324B0(char *, float *);
extern "C" float func_00131B50(float);
extern "C" short func_00131D10(float, float);
extern "C" void func_00131760(float *, float *, float *);
extern "C" int func_0024E780(char *, int, int);
extern "C" int func_0034B6B0(float, char *, char *, char *);
extern "C" void func_001ACC30(int, int, int, int, int);
extern "C" void func_0036DF10(char *, int, int, int, int, int);
extern "C" int D_005BE09C;
extern "C" char D_005BE1A8[8];
extern "C" short D_005BDDE4;
extern "C" short D_005BDDE8;
extern "C" float D_005BDDE0;
extern "C" void func_004398D0(char *, int);
extern "C" void func_0034B8C0(char *, char *, int);
extern "C" int func_0034B800(float, char *, char *, short, short);
extern "C" void func_00439700(char *, int, int);
extern "C" void func_00439970(char *, int, int);
extern "C" float D_005BD948;
extern "C" float D_005BD94C;
extern "C" float D_005BD950;
extern "C" float D_005BD9D4;
extern "C" short D_005BD9E0;
extern "C" short D_005BD9E2;
extern "C" float D_005BD9E4;
extern "C" float D_005BDA48;
extern "C" float D_005BDA50;
extern "C" int func_00437B60(char *);
extern "C" int func_004361D0(char *);
extern "C" int func_00437E00(char *, int);
extern "C" int func_00437C50(char *);
extern "C" float D_00577C60[];
extern "C" float D_00577C64[];
extern "C" float D_00577C68[];
extern "C" float D_005BD9C8;
extern "C" void func_0024E7B0(char *, int, int);
extern "C" void func_00277DE0(char *, char *, char *, int);
extern "C" void func_00277E70(char *);
extern "C" void func_00277ED0(char *);
extern "C" void func_00278060(char *, int);
extern "C" int D_01CAFF14[];
extern "C" char D_0058AE50[];
extern "C" int D_005875E0[];
extern "C" int func_002D9EB0(char *);
extern "C" void func_004E8DB0(float *, float *, int);
extern "C" float D_0058ADF0[];
extern "C" float D_005BDE34;
extern "C" short D_005BDE30;
extern "C" short D_005BDE32;
extern "C" unsigned char D_005BDE38[8];
extern "C" float D_005BDF34;
extern "C" float D_0056F520[];
extern "C" void func_0041D7F0(char *, float);
extern "C" void func_0041DAB0(char *, char *, int);

static inline void set3A1(char *v, float x, float y, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = y; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }

extern "C" unsigned char func_003A1890(char *p, int k) {
    G3A1 a __attribute__((aligned(16))) = D_00564080;
    G3A1 b __attribute__((aligned(16))) = D_005640C0;
    G3A1 c __attribute__((aligned(16))) = D_00564100;
    G3A1 d __attribute__((aligned(16))) = D_00564140;
    G3A1 f __attribute__((aligned(16))) = D_00564180;
    G3A1 g __attribute__((aligned(16))) = D_005641C0;
    G3A1 *t[6] = { &a, &b, &c, &d, &f, &g };
    G3A1 *e;
    e = t[(unsigned char)k];
    *(unsigned char *)(p + 0x2DE8) = 0;
    if (e->b0 > 0) func_003A0CD0(p, D_00563DC0[e->b0]);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        play3A1(p, e->s4);
        *(unsigned char *)(p + 6) = 1;
        *(unsigned char *)(p + 0x2DE0) = 0;
        break;
    case 1:
        if (both3A1(p) == 1) {
            play3A1(p, e->s6);
            *(unsigned char *)(p + 6) = 0xA;
            set3A1(p + 0x60, 0.0f, e->fC, 0.0f);
            set3A1(p + 0x70, e->f14, e->f10, e->f18);
            set3A1(p + 0x2E00, e->f1C, 0.0f, e->f20);
            *(unsigned char *)(p + 0x2DE3) = 0;
            *(unsigned char *)(p + 0x2DE4) = 0;
        }
        break;
    case 0xA:
        *(unsigned char *)(p + 6) = 0xB;
    case 0xB:
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(unsigned char *)(p + 6) = 0x14;
            set3A1(p + 0x70, e->f2C, e->f24, e->f30);
            set3A1(p + 0x2E00, e->f34, e->f28, e->f38);
        }
        break;
    case 0x14:
        *(unsigned char *)(p + 6) = 0x15;
        play3A1(p, e->s8);
    case 0x15:
        if ((unsigned char)((V3A1 *)p)->m1BC() == 1) {
            *(unsigned char *)(p + 6) = 0x1E;
            play3A1(p, e->sA);
            func_0039D800(p);
            *(unsigned char *)(p + 0x2DE3) = 1;
            *(unsigned char *)(p + 0x2DE4) = 1;
        }
        break;
    case 0x1E:
        *(unsigned char *)(p + 6) = 0x1F;
        *(float *)(p + 0x60) = 0.0f; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 0x1F:
        if (func_0039DDF0(p, 85.0f) != 1 && both3A1(p) == 1) {
            *(unsigned char *)(p + 6) = 0x28;
            return 1;
        }
        break;
    case 0x28:
        return 1;
    }
    if (!(*(unsigned char *)(p + 6) < 0xA) && *(unsigned char *)(p + 6) < 0x1F) {
        func_003A0F20(p);
        func_003A1180(p);
    }
    return 0;
}

class O4B6E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual void m2C(char *, char *);
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC();
    virtual void mB0(char *, char *);
};

static inline char *ent4B6(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch4B6(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent4B6(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_004B6E40(char *p) {
    char *x;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(char **)(p + 0x7C0) = gch4B6(*(char **)(p + 0x1B0), 0);
    if (*(unsigned char *)(p + 0xA34) == 0) x = gch4B6(*(char **)(p + 0x1B0), 2);
    else x = gch4B6(*(char **)(p + 0x1B0), 3);
    *(char **)(p + 0x7C4) = gch4B6(*(char **)(p + 0x1B0), 0x13);
    ((O4B6E *)(p + 0x1C0))->m2C(x, *(char **)(p + 0x7C0));
    ((O4B6E *)(p + 0x1C0))->mB0(*(char **)(p + 0x7C4), p + 0x1B4);
    *(unsigned char *)(p + 0xA5E) = 5;
    *(unsigned char *)(p + 0xA5F) = 0;
    *(short *)(p + 0xA60) = 0;
    *(unsigned char *)(p + 0xA70) = 2;
    *(float *)(p + 0xA80) = 0.0f;
    *(float *)(p + 0xA84) = 100.0f;
    *(float *)(p + 0xA88) = 0.0f;
    *(float *)(p + 0xA8C) = 1.0f;
    *(float *)(p + 0xA90) = 50.0f;
    func_0028C200(p + 0x7D0, p + 0xA5E, p + 0xA70, 3, D_005BDC30, p, 0);
    *(int *)(p + 0x8A8) = 0x35000;
    *(float *)(p + 0x8B4) = 1.0f;
    *(unsigned char *)(p + 0x7D3) = 1;
    func_0028C8E0(p + 0x7D0, 7);
    func_0028C910(p + 0x7D0);
    func_0028C3A0(p + 0x7D0, 0, -1, p + 0x170);
    *(unsigned char *)(p + 0xA5E) = 4;
    *(float *)(p + 0x50) = 0.0f;
    *(float *)(p + 0x54) = 0.0f;
    *(float *)(p + 0x58) = 0.0f;
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 0.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 0.0f;
    *(float *)(p + 0xA40) = 0.0f;
    *(float *)(p + 0xA44) = 0.0f;
    *(float *)(p + 0xA48) = 0.0f;
    *(float *)(p + 0xA4C) = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x170) : "memory");
    *(short *)(p + 0xAD4) = 0;
    *(short *)(p + 0x90) = 0;
    *(short *)(p + 0xAD6) = 0;
    *(float *)(p + 0x1A0) = *(float *)(p + 0x50);
    *(float *)(p + 0x1A4) = *(float *)(p + 0x54);
    *(float *)(p + 0x1A8) = *(float *)(p + 0x58);
    *(short *)(p + 0xA5A) = -1;
    func_004B7F80(p, 0);
    *(unsigned char *)(p + 0xA5C) = 1;
    (*(unsigned char *)(p + 4))++;
}

class V495 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C();
    virtual void g120(float *);
    virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130();
    virtual char *g134(int);
};

extern "C" void func_00495A70(char *p) {
    float v[4] __attribute__((aligned(16)));
    float f;
    unsigned char ok;
    char *o;
    if ((unsigned char)func_002DA0B0(*(char **)(p + 0x3F0), 9) == 2) {
        func_00496570(p);
        return;
    }
    if ((*(float *)(p + 0x37C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_004962A0(p);
        return;
    }
    if ((*(float *)(p + 0x380) -= *(float *)(p + 0x10)) < 0.0f) {
        func_00496570(p);
        return;
    }
    ok = 1;
    if (*(char **)(p + 0x3F4) == 0) {
        func_004962A0(p);
        return;
    }
    if ((unsigned char)func_0033DA60(*(char **)(p + 0x3F4)) == 0) {
        func_004962A0(p);
        return;
    }
    if (ok == 1) {
        f = -1.0f;
        (*(V495 **)(p + 0x3F4))->g120(&f);
        if (func_00100330(func_0011FA58(f), 0) != 0) {
            func_004962A0(p);
            return;
        }
        o = (*(V495 **)(p + 0x3F4))->g134(*(unsigned char *)(p + 0x373));
        if (o == 0) {
            func_004962A0(p);
            return;
        }
    }
    if (ok) {
        func_00104B80(v, *(char **)(o + 0x104), p + 0x390);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3B0) : "memory");
        func_00104C00(p + 0x3B0, *(int *)(o + 0x104), p + 0x3B0);
        *(float *)(p + 0x3E0) = v[0];
        *(float *)(p + 0x3E4) = v[1];
        *(float *)(p + 0x3E8) = v[2];
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x3E0);
    *(float *)(p + 0x54) = *(float *)(p + 0x3E4);
    *(float *)(p + 0x58) = *(float *)(p + 0x3E8);
}

class O451 {
public:
    virtual void d8();
    virtual void gC(int);
};

static inline void col451(unsigned char *o, int r, int g, int b) {
    o[0x9C] = r;
    o[0x9D] = g;
    o[0x9E] = b;
    o[0x9B] = 2;
}

extern "C" int func_004514E0(char *p) {
    float v[4] __attribute__((aligned(16)));
    O451 *o;
    int i;
    if (*(unsigned char *)(p + 0xE5) != 0) {
        *(unsigned char *)(p + 0xE5) = 0;
        func_00207480(3, 0x1EA, p + *(unsigned char *)(p + 0xEA) * 64 + 0x120, 0x40);
        if (*(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320) != 0) {
            func_001AD140(*(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320));
            *(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320) = 0;
        }
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + *(unsigned char *)(p + 0xEA) * 64 + 0x120) : "memory");
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0xA, v, 0x29, 0, 0);
        *(unsigned char *)((char *)*(unsigned char *)(p + 0xEA) + (int)p + 0xDD) = 1;
        o = (O451 *)func_002F7C10(D_00578A50[*(unsigned char *)(p + 0xEA)], 0);
        if (o != 0) o->gC(0);
        func_0028C790(p + 0x340, 0);
        func_0034C3E0(0);
        (*(unsigned char *)(p + 0xEC))++;
        if (*(unsigned char *)(p + 0xEC) >= 2) {
            for (i = 0; i < 8; i++) {
                if (*(unsigned char *)((char *)i + (int)p + 0xDD) == 0) {
                    char *a = (char *)(i * 4) + (int)p;
                    char *e = *(char **)(a + 0x320);
                    if (e != 0) {
                        e[0x7A3] = 0;
                        e[0x7A4] = 1;
                        col451(*(unsigned char **)(a + 0x320), 0x80, 0x80, 0x80);
                    }
                }
            }
            *(unsigned char *)(p + 0xEB) = 2;
            return 1;
        }
        for (i = 0; i < 8; i++) {
            if (*(unsigned char *)((char *)i + (int)p + 0xDD) == 0) *(float *)((char *)(i * 4) + (int)p + 0xF0) = 1000.0f;
        }
    }
    return 0;
}

static inline unsigned char on33D(char *q) {
    if (*(unsigned char *)(q + 0x28A6)) return 1;
    return 0;
}

extern "C" void func_0033D810(char *p) {
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *o;
    *(unsigned char *)(p + 0xB42) = 0;
    o = *(char **)D_01CAFF0C;
    a[0] = *(float *)(p + 0x50);
    a[1] = *(float *)(p + 0x54);
    a[2] = *(float *)(p + 0x58);
    a[3] = 1.0f;
    b[0] = *(float *)(*(char **)(o + 0xC) + 0x50);
    b[1] = *(float *)(*(char **)(o + 0xC) + 0x54);
    b[2] = *(float *)(*(char **)(o + 0xC) + 0x58);
    b[3] = 1.0f;
    if (on33D(*(char **)(p + 0xBC0)) == 1 && func_002D9FA0(*(char **)(p + 0xBC0), a) == 1) {
        b[0] = *(float *)(p + 0x50);
        b[1] = *(float *)(p + 0x54);
        b[2] = *(float *)(p + 0x58);
        b[3] = 1.0f;
    }
    *(short *)(p + 0x90) = func_0034B940(a, b);
    b[0] = *(float *)(p + 0x50);
    b[1] = *(float *)(p + 0x54);
    b[2] = *(float *)(p + 0x58);
    b[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    c[0] = 0.0f;
    c[1] = 0.0f;
    c[2] = 800.0f;
    c[3] = 1.0f;
    func_00104B80(d, (char *)m, (char *)c);
    a[0] = *(float *)(p + 0x50) + d[0];
    a[1] = *(float *)(p + 0x54);
    a[2] = *(float *)(p + 0x58) + d[2];
    a[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xB70), "r"(a), "r"(b) : "memory");
    func_00131650(p + 0xB70, p + 0xB70);
    *(float *)(p + 0xB7C) = 1.0f;
    *(float *)(p + 0xB44) = 1.0f;
    func_0033CC60(p);
    func_0033D430(p);
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    func_0033D310(p);
    func_0033D350(p);
}

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

extern "C" void func_0037AEA0(char *p) {
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

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_004CAD30(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x54);
            FB(short, 0x90) = FB(short, 0x160);
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0xB178) = D_005BDE14;
            UNIT(m);
            func_00105760(3.1415925f, m, m);
            func_00104C00((char *)m, *(int *)(func_004D2740(p)[1] + 0x104), (char *)m);
            func_00207480(3, 0x338, (char *)m, 0x10);
            FB(float, 0xB2B0) = func_004D32F0(p);
            ((O4C9 *)p)->m300(0x55);
        }
        break;
    case 2:
        v[0] = 0.0f;
        v[1] = 0.0f;
        v[2] = D_005BDD9C;
        v[3] = 1.0f;
        if ((unsigned char)func_004D2890(D_005BDE0C, p, v, 1) == 1) {
            if (!(func_00132470(p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) <= D_005BDE18)) {
                FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
                func_00207480(3, 0x338, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
            } else {
                FB(unsigned char, 0xB158) = 10;
                FB(float, 0xB178) = D_005BDE14;
            }
        }
        break;
    case 3:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x54);
        FB(short, 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 0x8000;
        break;
    case 4:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            if (FB(unsigned char, 0xB154) == 0x2B)
                ((O4C9 *)p)->m2F8(0x2F);
            else
                ((O4C9 *)p)->m2F8(0x17);
        }
        break;
    case 10:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(D_0058ADC0 + FB(unsigned char, 0xB2C8) * 16) : "memory");
        if ((unsigned char)func_004D2890(D_005BDE0C, p, v, 2) == 1) {
            FB(unsigned char, 0xB158) = 3;
            func_00207480(3, 0x338, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    }
}

extern "C" void func_004CA980(char *p) {
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float d;
    char *o;
    short a;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x5F);
            FB(short, 0x90) = FB(short, 0x160);
            o = *(char **)(func_004D2740(p)[1] + 0x104);
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(o) : "memory");
            d = func_001324B0(p + 0x150, v);
            a = func_00131D10(func_00131B50(FB(float, 0x154) - FB(float, 0x54)), d);
            if (a < (unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE4 / 360.0f))
                a = (unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE4 / 360.0f);
            else if ((unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE8 / 360.0f) < a)
                a = (unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE8 / 360.0f);
            FB(float, 0x60) = 0.0f;
            FB(float, 0x64) = 0.0f;
            FB(float, 0x68) = D_005BDDE0;
            FB(float, 0x6C) = 1.0f;
            r[0] = 6.283185f * ((float)a / 65536.0f);
            r[1] = 6.283185f * ((float)FB(short, 0x90) / 65536.0f);
            r[2] = 0.0f;
            r[3] = 1.0f;
            UNIT(m);
            func_00131760(m, m, r);
            func_00104B80((float *)(p + 0x60), (char *)m, p + 0x60);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 0) == 1) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(s), "r"(p + 0x60), "f"(FB(float, 0x10)) : "t0", "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(s) : "memory");
            FB(float, 0x5C) = 1.0f;
        }
        if ((unsigned char)func_0034B6B0(0.0f, p + 0x50, p + 0xACB8, p) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x60);
            func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
        }
        break;
    case 2:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}

struct A436 {
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
    virtual void m2F4(int);
};

extern "C" void func_00436D00(char *p) {
    switch (FB(unsigned char, 0x47BF)) {
    case 0:
        FB(unsigned char, 0x47BF)++;
        func_004398D0(p, 0x45);
        break;
    case 1:
        if (FB(unsigned char, 0x4860) == 0) {
            ((A436 *)p)->m2F4(0x33);
            break;
        }
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if ((unsigned char)func_0034B800(D_005BD9E4, p + 0x150, p + 0x50, D_005BD9E0 + FB(short, 0x4850), D_005BD9E2) == 1) {
            FB(unsigned char, 0x47BF)++;
            func_00439700(p, 0x49, 1);
        }
        break;
    case 2:
        if (FB(unsigned char, 0x4860) == 0) {
            ((A436 *)p)->m2F4(0x33);
            break;
        }
        if (!(FB(float, 0x483C) < D_005BDA48)) {
            FB(float, 0x483C) = 0.0f;
            if (!(FB(float, 0x4838) < D_005BDA50))
                ((A436 *)p)->m2F4(0x32);
            else
                ((A436 *)p)->m2F4(0x31);
            break;
        }
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if (func_0011CED0(FB(float, 0xF0)) > 1.0 || func_0011CED0(FB(float, 0xF8)) > 1.0) {
            ((A436 *)p)->m2F4(0x2F);
            break;
        }
        if (!(FB(float, 0x4840) <= D_005BD948)) {
            float d = func_00132470(p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
            if (!(d <= D_005BD94C) && d < D_005BD950) {
                ((A436 *)p)->m2F4(0x2F);
                break;
            }
        }
        if ((unsigned char)func_0024E800(p + 0x41A0) == 1)
            func_00439700(p, 0x49, 1);
        if ((unsigned char)func_0024E800(p + 0x40D0) == 1)
            func_00439970(p, 0x49, 0);
        break;
    }
    FB(float, 0x4840) += FB(float, 0x10);
}

struct A433 {
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
    virtual int m2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void m2F4(int);
    virtual void d2F8();
    virtual void m2FC(int);
};

struct B433 {
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
    virtual int m84();
    virtual int m88();
};

extern "C" void func_00433F90(char *p) {
    if ((unsigned char)((B433 *)(p + 0x130))->m84() == 0)
        FB(float, 0x168) += D_005BD9C8 * FB(float, 0x10);
    switch (FB(unsigned char, 0x47BF)) {
    case 0:
        FB(unsigned char, 0x47BF)++;
        func_004398D0(p, 0x30);
        break;
    case 1:
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if ((unsigned char)func_0034B800(D_005BD9E4, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BD9E0 + FB(short, 0x4850), D_005BD9E2) == 1) {
            FB(unsigned char, 0x47BF)++;
            func_00439700(p, 0x34, 1);
        }
        break;
    case 2:
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if ((unsigned char)((B433 *)(p + 0x130))->m88() == 1 && (unsigned char)func_00437C50(p) == 1)
            break;
        if (FB(float, 0x164) < D_00577C60[0] && (unsigned char)func_00437B60(p) == 1) {
            ((A433 *)p)->m2F4(0x1D);
            break;
        }
        if (FB(float, 0x164) < D_00577C64[0]) {
            ((A433 *)p)->m2F4(0x28);
            break;
        }
        if (FB(float, 0x164) < D_00577C68[0]) {
            if (FB(int, 0x47C8) <= 2) {
                ((A433 *)p)->m2F4(0x19);
                break;
            }
            if (FB(int, 0x47DC) > 0 && FB(unsigned char, 0x47BD) != 0x1A) {
                ((A433 *)p)->m2F4(0x1A);
                break;
            }
            ((A433 *)p)->m2F4(0x28);
            break;
        }
        if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 0) {
            if (!(FB(int, 0x47C8) < 3)) {
                ((A433 *)p)->m2F4(0x2C);
                break;
            }
            if (FB(int, 0x47DC) <= 0) {
                ((A433 *)p)->m2F4(0x2D);
                break;
            }
            ((A433 *)p)->m2F4(0x17);
            if (FB(signed char, 0x4863) > 0)
                FB(unsigned char, 0x4858) = FB(unsigned char, 0x4858) != 1;
            break;
        }
        if (FB(int, 0x47C8) <= 2) {
            if ((unsigned char)func_0024E800(p + 0x41A0) == 1) {
                if ((unsigned char)func_0034B800(D_005BD9E4, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BD9E0 + FB(short, 0x4850), D_005BD9E2) == 1)
                    func_00439700(p, 0x34, 1);
                else
                    func_00439970(p, 0x31, 0);
            }
            break;
        }
        if (FB(int, 0x47DC) > 0 && FB(unsigned char, 0x47BD) != 0x1A) {
            ((A433 *)p)->m2F4(0x1A);
            break;
        }
        ((A433 *)p)->m2F4(0x28);
        break;
    }
}

extern "C" void func_004343E0(char *p) {
    ((B433 *)(p + 0x130))->m84();
    switch (FB(unsigned char, 0x47BF)) {
    case 0:
        FB(unsigned char, 0x47BF)++;
        func_004398D0(p, 0x3E);
        break;
    case 1:
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if ((unsigned char)func_0034B800(D_005BD9E4, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BD9E0 + FB(short, 0x4850), D_005BD9E2) == 1) {
            FB(unsigned char, 0x47BF)++;
            func_00439700(p, 0x42, 1);
        }
        break;
    case 2:
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if ((unsigned char)((B433 *)(p + 0x130))->m88() == 1 && (unsigned char)func_00437C50(p) == 1)
            break;
        if (FB(float, 0x164) < D_00577C60[0] && (unsigned char)func_00437B60(p) == 1) {
            ((A433 *)p)->m2F4(0x1D);
            break;
        }
        if (FB(float, 0x164) < D_00577C64[0]) {
            ((A433 *)p)->m2F4(0x28);
            break;
        }
        if (FB(float, 0x164) < D_00577C68[0]) {
            if (FB(int, 0x47C8) < 3)
                break;
            if (FB(int, 0x47DC) > 0 && FB(unsigned char, 0x47BD) != 0x1A) {
                ((A433 *)p)->m2F4(0x1A);
                break;
            }
            ((A433 *)p)->m2F4(0x28);
            break;
        }
        if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 0) {
            if (!(FB(int, 0x47C8) < 3)) {
                ((A433 *)p)->m2F4(0x2C);
                break;
            }
            if (FB(int, 0x47DC) <= 0) {
                ((A433 *)p)->m2F4(0x2D);
                break;
            }
            ((A433 *)p)->m2F4(0x17);
            if (FB(signed char, 0x4863) > 0)
                FB(unsigned char, 0x4858) = FB(unsigned char, 0x4858) != 1;
            break;
        }
        if (FB(int, 0x47C8) <= 2) {
            if ((unsigned char)func_0024E800(p + 0x41A0) == 1) {
                if ((unsigned char)func_0034B800(D_005BD9E4, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BD9E0 + FB(short, 0x4850), D_005BD9E2) == 1)
                    func_00439700(p, 0x42, 1);
                else
                    func_00439970(p, 0x3F, 0);
            }
            break;
        }
        if (FB(int, 0x47DC) > 0 && FB(unsigned char, 0x47BD) != 0x1A) {
            ((A433 *)p)->m2F4(0x1A);
            break;
        }
        ((A433 *)p)->m2F4(0x28);
        break;
    }
}

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

class A428 {
public:
    char pad[0x40];
};

class B428 {
public:
    int x;
};

class P428 : public A428, public B428 {
public:
    int y;
};

extern "C" void func_003FA440(P428 *, int);
extern "C" int func_003F9F90(P428 *);
extern "C" void func_0041D6E0(B428 *, char *, float, int);
extern "C" int func_0041E120(B428 *, float);
extern "C" void func_003FA550(P428 *, float);
extern "C" int func_00427DE0(P428 *);
extern "C" void func_003FA3F0(P428 *, int);
extern "C" short D_0054EF70[];
extern "C" char D_005BE098[8];
extern "C" unsigned char func_0034C1C0(unsigned char, int, int);
extern "C" unsigned char func_0034C1E0(unsigned char, int, int);
extern "C" void func_002DE780(char *);
extern "C" void func_002DF290(char *);
extern "C" void func_00195E20(char *, char *);

static inline int f428(char *p) { return (*(int *)(p + 0x3BC) & 0x800) != 0; }

extern "C" void func_00428160(P428 *q) {
    char *p = (char *)q;
    float *t;
    t = &D_0056F520[*(unsigned char *)(p + 0x3AB) * 3];
    *(int *)(p + 0x110) |= 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(q, -1);
        *(int *)(p + 0x60) = 0;
        *(float *)(p + 0x64) = t[0];
        *(float *)(p + 0x68) = t[1];
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D7F0(p + 0x64, t[2] * *(float *)(p + 0x10));
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x68) = 0.0f;
            *(unsigned char *)(p + 6) = 2;
        }
        if (!f428(p)) func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(q));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        break;
    case 2:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        if ((unsigned char)func_0041E120(q, 0.0f) == 1) {
            func_003FA550(q, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00427DE0(q) == 1) func_003FA3F0(q, 3);
            else *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        *(int *)(p + 0x60) = 0;
        *(float *)(p + 0x64) = t[0];
        *(float *)(p + 0x68) = t[1];
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 4;
    case 4:
        func_0041D7F0(p + 0x64, t[2] * *(float *)(p + 0x10));
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x68) = 0.0f;
            *(unsigned char *)(p + 6) = 5;
        }
        if (!f428(p)) func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(q));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        break;
    case 5:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        if ((unsigned char)func_0041E120(q, 0.0f) == 1) {
            func_003FA550(q, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00427DE0(q) == 1) func_003FA3F0(q, 3);
            else func_003FA3F0(q, 0);
        }
        break;
    }
}

class VA2DE {
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
    virtual void mB4(int, int, int, int);
    virtual void d44();
    virtual unsigned char mBC(float);
};

class VB2DE {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(float);
    virtual void d6();
    virtual float m24();
};

static inline void sm2DE(char *p, unsigned int k, unsigned char v) {
    char *m = func_00279290(p + 0x80);
    if (k < *(unsigned short *)(m + 0xA8)) *(int *)(*(char **)(m + 0xBC) + k * 0x340 + 0x15C) = v;
}

extern "C" VB2DE *func_002792A0(char *);
extern "C" unsigned char *func_00210240(char *);

extern "C" void func_002DE3A0(char *p) {
    int i;
    unsigned char v;
    int k;
    unsigned char r;
    int j;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        ((VA2DE *)(p + 0x80))->mB4(0, 0, 0, 0);
        func_002792A0(p + 0x80)->m1C(1.0f);
        (*(unsigned char *)(p + 5))++;
    case 1:
        *(unsigned char *)(p + 0x6D0) = func_0034C1C0(*(unsigned char *)(p + 0x6D0), 0x80, 0xC);
        for (i = 0; i < 6; i++) {
            v = *(unsigned char *)(p + 0x6D0);
            k = D_0054EF70[i];
            sm2DE(p, k, v);
        }
        r = ((VA2DE *)(p + 0x80))->mBC(1.0f);
        if (r == 4 || r == 0 || !(func_002792A0(p + 0x80)->m24() < 12.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 2:
        func_002DE780(p);
        break;
    case 3:
        *(unsigned char *)(p + 0x6D0) = func_0034C1E0(*(unsigned char *)(p + 0x6D0), 0, 0xC);
        for (i = 0; i < 6; i++) {
            v = *(unsigned char *)(p + 0x6D0);
            j = D_0054EF70[i];
            sm2DE(p, j, v);
        }
        sm2DE(p, 8, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 9, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 10, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 11, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 12, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 13, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 14, *(unsigned char *)(p + 0x6D0));
        r = ((VA2DE *)(p + 0x80))->mBC(1.0f);
        if (r == 4 || r == 0 || !(func_002792A0(p + 0x80)->m24() < 30.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 4:
        func_002DF290(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

class Snd2F5 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(int, unsigned int);
    virtual void m18(int, unsigned int);
    virtual void m1C(int, unsigned int, int);
    virtual void m20(int, unsigned int, int);
    virtual void m24(int, unsigned int);
    virtual void m28(int, unsigned int, int);
};

class Ev2F5 {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual float m14();
};

#define VOL() (unsigned int)(*(float *)(p + 0x10) * ((Ev2F5 *)p)->m14())

extern "C" Snd2F5 *D_005BC1A8;

extern "C" int func_002F56C0(char *p) {
    float f = *(float *)(p + 0x10);
    int id;
    if (f < 0.0f) f = -f;
    if (f <= 0.0001f) return 0;
    id = (*(unsigned char *)(p + 0x24) << 24) + ((*(unsigned char *)(p + 0x23) << 16) + (*(unsigned char *)(p + 0x21) + (*(unsigned char *)(p + 0x22) << 8)));
    switch (*(unsigned char *)(p + 0x20)) {
    case 0:
        if (*func_00210240(p) == 0) {
            D_005BC1A8->m14(id, VOL());
        } else {
            D_005BC1A8->m1C(id, VOL(), 0xFFFFF0);
        }
        break;
    case 1:
        if (*func_00210240(p) == 0) {
            D_005BC1A8->m18(id, VOL());
        } else {
            D_005BC1A8->m20(id, VOL(), 0xFFFFF0);
        }
        break;
    case 2:
        if (*func_00210240(p) == 0) {
            D_005BC1A8->m24(id, VOL());
        } else {
            D_005BC1A8->m28(id, VOL(), 0xFFFFF0);
        }
        break;
    }
    return 1;
}
