/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-11. */
extern short D_00563DC0[];
unsigned char func_0024E800(char *);
void func_0024DA80(char *, int, int);
void func_003A0CD0(char *, short);
void func_0039D800(char *);
void func_003A0F20(char *);
unsigned char func_003A2080(char *, char *, float, float);
unsigned char func_0039DDF0(char *, float);

typedef struct { short s0; short s2; short s4; short s6; float f8; float fC; float f10; float f14; float f18; float f1C; float f20; unsigned char b24; } E3A1;

typedef struct { float v[4]; } F3A1;

extern E3A1 D_00563FB0 __attribute__((aligned(16)));
extern E3A1 D_00563FE0 __attribute__((aligned(16)));
extern E3A1 D_00564010 __attribute__((aligned(16)));
extern E3A1 D_00564040 __attribute__((aligned(16)));
extern F3A1 D_00564070 __attribute__((aligned(16)));

static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }

static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }

static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }

unsigned char func_003A1320(char *p, int k) {
    E3A1 a __attribute__((aligned(16))) = D_00563FB0;
    E3A1 b __attribute__((aligned(16))) = D_00563FE0;
    E3A1 c __attribute__((aligned(16))) = D_00564010;
    E3A1 d __attribute__((aligned(16))) = D_00564040;
    E3A1 *t[4] = { &a, &b, &c, &d };
    F3A1 f __attribute__((aligned(16))) = D_00564070;
    E3A1 *e;
    unsigned char r;
    int s;
    e = t[(unsigned char)k];
    *(unsigned char *)(p + 0x2DE8) = 0;
    r = 0;
    if (e->b24 > 0) func_003A0CD0(p, D_00563DC0[e->b24]);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if ((s = e->s0) >= 0) play3A1(p, s);
        *(unsigned char *)(p + 5) = 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
        break;
    case 1:
        if (both3A1(p) == 1) {
            if ((s = e->s2) >= 0) play3A1(p, s);
            *(unsigned char *)(p + 5) = 2;
            func_0039D800(p);
            *(float *)(p + 0x60) = 0.0f; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            xz3A1(p + 0x70, e->f8, e->fC);
            xz3A1(p + 0x2E00, e->f10, e->f14);
            *(float *)(p + 0x2E30) = e->f18;
        }
        break;
    case 2:
        func_003A0F20(p);
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1 && both3A1(p) != 0) {
            if ((s = e->s4) >= 0) play3A1(p, s);
            xz3A1(p + 0x70, e->f1C, e->f20);
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 5) = 3;
        }
        break;
    case 3:
        func_003A0F20(p);
        if (both3A1(p) == 1) {
            if ((s = e->s6) >= 0) play3A1(p, s);
            *(unsigned char *)(p + 5) = 4;
            func_0039D800(p);
        }
        break;
    case 4:
        func_003A0F20(p);
        if (func_0039DDF0(p, f.v[(unsigned char)k]) == 1) {
            *(float *)(p + 0x60) = 0.0f; r = 0; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
        } else if (both3A1(p) == 1) {
            *(float *)(p + 0x60) = 0.0f; r = 1; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 5) = 5;
        }
        break;
    case 5:
        r = 1;
        break;
    }
    return r;
}
