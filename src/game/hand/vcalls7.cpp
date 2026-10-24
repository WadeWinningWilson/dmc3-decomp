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
