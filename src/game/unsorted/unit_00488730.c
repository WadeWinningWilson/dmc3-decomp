#include "game/mt_rand.h"
void func_0028C5C0(char *, int, float);

void func_0048D820(char *);

float func_0011DBE0(float, float);

void func_00195E20(char *, char *);

typedef struct { float v[4]; } V48C __attribute__((aligned(16)));

extern V48C D_00586710;

void func_00133010(char *, char *, V48C *);

void func_0048CE50(char *p) {
    extern char D_005BE098[8];
    unsigned char func_0048D140(char *);
    float tmp[4] __attribute__((aligned(16)));
    V48C up;
    func_0048D820(p + 0x1130);
    if (*(char **)(p + 0x22C) != 0 && (*(int *)(*(char **)(p + 0x22C) + 8) & 0x20000)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        return;
    }
    if (func_0048D140(p) == 1) return;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(tmp) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    up = D_00586710;
    func_00133010(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_0028C5C0(p + 0x1B0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

void func_0034BA60(int, char *, signed char, int, int);

void func_0048AB30(char *p) {
    func_0034BA60(0x18, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    p[0x448] = 1;
}

void func_00253000(char *, int);

extern char D_005B74C0[];

extern char D_005B74E4[];

extern char D_005B7564[];

char *func_0048D760(char *p, short flag) {
    void func_00100580(char *);
    void func_0013D240(char *, int);
    void func_002791E0(char *, int);
    void func_0028C1A0(char *, int);
    if (p != 0) {
        *(char **)p = D_005B74C0;
        *(char **)(p + 64) = D_005B74E4;
        *(char **)(p + 160) = D_005B7564;
        if (p + 4288 != 0) {
            func_0013D240(p + 4340, -1);
        }
        func_002791E0(p + 2752, -1);
        func_002791E0(p + 1216, -1);
        func_0028C1A0(p + 432, -1);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

short func_00131D10(float, float);

char *func_00207470(int, int, char *);

void func_00105760(float *, float *, float);

void func_00104D70(float *, float *);

void func_0048B440(char *, float *, float, float, float);

void func_0048B4A0(char *p, char *q, char *r) {
    float m[16] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    short ang;
    char *o;
    v[0] = *(float *)(*(char **)(*(char **)(p + 0x55C) + 0x104) + 0x30);
    v[1] = *(float *)(*(char **)(*(char **)(p + 0x55C) + 0x104) + 0x34);
    v[2] = *(float *)(*(char **)(*(char **)(p + 0x55C) + 0x104) + 0x38);
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(r + 0x10), "r"(v) : "memory");
    d[1] = 0.0f;
    func_00104D70(d, d);
    ang = func_00131D10(d[0], d[2]);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    switch (*(signed char *)(q + 0x20)) {
    case 0:
    case 11:
        func_0048B440(p, m, 0.7853981f, 0.0f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 1:
    case 12:
        func_0048B440(p, m, 0.7853981f, -0.7853981f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 2:
    case 13:
        func_0048B440(p, m, 0.7853981f, -1.5707962f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 3:
    case 14:
        func_0048B440(p, m, 0.7853981f, -2.3561945f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 4:
    case 15:
        func_0048B440(p, m, 0.7853981f, 3.1415925f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 5:
    case 16:
        func_0048B440(p, m, 0.7853981f, 2.3561945f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 6:
    case 17:
        func_0048B440(p, m, 0.7853981f, 1.5707962f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 7:
    case 18:
        func_0048B440(p, m, 0.7853981f, 0.7853981f, 6.283185f * ((float)ang / 65536.0f));
        break;
    case 8:
    case 9:
    case 10:
        func_00105760(m, m, 6.283185f * ((float)(ang + 0x8000) / 65536.0f));
        break;
    }
    o = func_00207470(3, 0x1BB, (char *)m);
    if (o) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x560) + 0x104);
        *(unsigned char *)(o + 0x9A) = 1;
    }
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0048C820(char *);

char *func_0048C6C0(float *v, float *w, int n, int c) {
    void func_0013D240(char *, int);
    void func_001AAD30(char *);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0x1140, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x1140, t);
        if (r != 0) {
            func_0048C820(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        func_001B1430(*b.pp, 1);
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(v) : "memory");
        *(int *)(ret + 0x480) = n;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(int *)(ret + 0x1130) = c;
    }
    return ret;
}

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_0022C820(char *);

extern char D_005A77A0[];

extern char D_005B0890[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_00204AD0();

void func_00204A70();

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00313E20(char *);

void func_0024D930(char *);

void func_0031E4A0(char *);

void func_00400FF0(char *);

void func_002E7840(char *);

extern char D_005B7160[];

extern char D_005B7184[];

extern char D_005B7204[];

extern char D_005B7298[];

extern char D_005B7364[];

extern char D_005B741C[];

char *func_00488A50(char *p) {
    void func_001AAD30();
    void func_0013D240();
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B7160;
    *(char **)(p + 0x40) = D_005B7184;
    *(char **)(p + 0xA0) = D_005B7204;
    *(char **)(p + 0xD0) = D_005B7298;
    *(char **)(p + 0x130) = D_005B7364;
    *(char **)(p + 0x1D0) = D_005B741C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x18);
    p[0x3C0] = 0;
    func_00100450(p + 0x5C0, func_00204AD0, func_00204A70, 0xC0, 6);
    func_002790E0(p + 0xA40);
    func_00400FF0(p + 0x1040);
    func_0024D930(p + 0x1060);
    func_0028C110(p + 0x1130);
    p[0x1350] = 0;
    p[0x1351] = 0;
    *(short *)(p + 0x1352) = 0;
    *(int *)(p + 0x1358) = 0;
    *(int *)(p + 0x135C) = 0;
    *(int *)(p + 0x1360) = 0;
    *(float *)(p + 0x1370) = 0.0f;
    *(float *)(p + 0x1374) = 0.0f;
    *(float *)(p + 0x1378) = 0.0f;
    *(float *)(p + 0x137C) = 1.0f;
    *(float *)(p + 0x1380) = 100000.0f;
    p[0x1384] = 0;
    p[0x1385] = 0;
    *(short *)(p + 0x1386) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1388) = -1;
    func_002E7840(p + 0x13B0);
    func_002E8A10(p + 0x13F4);
    func_00313E20(p + 0x140C);
    q = p + 0x1430;
    *(char **)(p + 0x1440) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    *(int *)(p + 0x1494) = 0;
    *(int *)(p + 0x4D4) = 0;
    *(int *)(p + 0x4D8) = 0;
    *(int *)(p + 0x4DC) = 0;
    *(int *)(p + 0x4E0) = 0;
    *(int *)(p + 0x440) = 0;
    return p;
}

typedef struct { float x, y, z, w; } V4j;

int func_0048AAA0(char *p, int k, V4j *out, float *r) {
    if (!(*(float *)(p + 0x4C4) <= 0.0f)) {
        switch (k) {
        case 0:
            *out = *(V4j *)(p + 0x50);
            *r = 150.0f;
            out->y += 150.0f;
            return 1;
        }
        return 0;
    }
    return 0;
}

extern char D_01CAFF0C[];

void func_002F2D30(char *, char *);

void func_0048A740(char *p) {
    void func_0041D670(char *);
    char *g;
    *(int *)(p + 0x110) = 0;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_0041D670(p + 0x4D4);
    func_0041D670(p + 0x4D8);
    func_0041D670(p + 0x4DC);
    func_0041D670(p + 0x4E0);
    func_0041D670(p + 0x440);
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_0048B320(char *p) {
    char *func_00207480(int, int, char *, int);
    float m[16];
    char *o;
    UNIT(m);
    m[12] = 5.0f;
    m[13] = 5.0f;
    m[14] = 15.0f;
    o = func_00207480(3, 0x173, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x570) + 0x104);
        *(unsigned char *)(o + 0x9A) = 0;
        *(unsigned char *)(o + 0x3A) = 1;
    }
    m[12] = -5.0f;
    o = func_00207480(3, 0x173, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x570) + 0x104);
        *(unsigned char *)(o + 0x9A) = 0;
        *(unsigned char *)(o + 0x3A) = 1;
    }
}

int func_001F9A70(int, char *, float);

static inline char *g548(void) {
    return *(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548;
}

void func_0048A7B0(char *p) {
    void func_001AD140(char *);
    float v[4] __attribute__((aligned(16)));
    int i;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x1300), "r"(v) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    for (i = 0; i < 23; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x55C) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x55C) + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x55C) + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x55C) + 0x104) + 0x3C) = 1.0f;
        }
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x1340), "r"(p + 0xF0) : "memory");
    if ((unsigned char)func_001F9A70(*(int *)(g548() + 8), p + 0x50, 1000.0f) == 0) func_001AD140(p);
}

void func_0041E190(float *, float *, float);

#define VADDX(d, a) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a) : "memory")

#define VSUBX(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_0048BF50(char *p, float s) {
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    char *cam = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[2] = 5.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_0041E190(v, v, 6.283185f * (*(short *)(p + 0x90) / 65536.0f));
    VADDX(v, p + 0x50);
    VSUBX(d, v, cam + 0x50);
    d[0] = d[0] * s;
    d[1] = d[1] * s;
    d[2] = d[2] * s;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) - d[0];
    *(float *)(p + 0x54) = *(float *)(p + 0x54) - d[1];
    *(float *)(p + 0x58) = *(float *)(p + 0x58) - d[2];
}

void func_0048B200(char *p, char **slot, int a, int b) {
    char *func_00207480(int, int, int, int);
    char *o;
    if (*slot == 0) {
        o = func_00207480(a, b, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x470;
            *(unsigned char *)(o + 0x9A) = 0;
            *(unsigned char *)(o + 0x3A) = 1;
            *slot = o;
        }
    }
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern V4 D_00586720;

void func_00132DF0(char *, char *, V4 *);

void func_0048CFC0(char *p) {
    extern char D_005BE098[4];
    int func_0048D140(char *);
    V4 t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        if ((unsigned char)func_0048D140(p) == 1) {
            break;
        }
    default:
        t = D_00586720;
        func_00132DF0(p + 0x150, p + 0xF0, &t);
        *(float *)(p + 0x180) = *(float *)(p + 0x50);
        *(float *)(p + 0x184) = *(float *)(p + 0x54);
        *(float *)(p + 0x188) = *(float *)(p + 0x58);
        *(float *)(p + 0x18C) = 1.0f;
        func_00195E20(D_005BE098, p);
        break;
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *el_48D(char *p, int i) {
    char *r;
    if (!(i < *(int *)(p + 0x10F0))) {
        r = 0;
    } else {
        r = *(char **)(p + 0x10C0) + i * 128;
    }
    return r;
}

void func_0048D6D0(char *p) {
    int i;
    char *e;
    float x, y, z;
    for (i = 0; i < 4; i++) {
        z = *(float *)(p + 0x58);
        y = *(float *)(p + 0x54);
        x = *(float *)(p + 0x50);
        e = el_48D(p, i);
        *(float *)(e + 0x20) = x;
        *(float *)(e + 0x24) = y;
        *(float *)(e + 0x28) = z;
        *(float *)(e + 0x2C) = 1.0f;
        QCOPY(e, e + 0x20);
        QCOPY(e + 0x10, e + 0x20);
    }
}

void func_00206730();

void func_00228350();

void func_00488CB0(int p0) {
    func_00228350((p0 + 5268));
    func_00206730((p0 + 1236));
    func_00206730((p0 + 1240));
    func_00206730((p0 + 1244));
    func_00206730((p0 + 1248));
    func_00206730((p0 + 1088));
}

void func_0048B400(int p0) {
    void func_0041D670();
    func_0041D670((p0 + 1240));
    func_0041D670((p0 + 1244));
    func_0041D670((p0 + 1236));
    func_0041D670((p0 + 1248));
}

typedef struct Rng2C {
    float base[4];
    float range[4];
    char pad[0xC];
} Rng2C;

void func_0048B020(unsigned char *p) {
    extern Rng2C D_0056DD10[];
    Rng2C *t = &D_0056DD10[p[5]];
    *(float *)(p + 0x458) = t->base[p[0x44B]] + t->range[p[0x44B]] * (2.3283064e-10f * mt_rand());
}

short func_0048B150(char *p) {
    extern unsigned char D_0056DD30[][44];
    return (short)(unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 16) * (unsigned int)D_0056DD30[*(unsigned char *)(p + 5)][*(unsigned char *)(p + 1099)]) / 360.0f);
}

void func_0024DA80(char *, int, int);

void func_0048AFC0(char *p, int c) {
    if (c == -1) {
        c = *(unsigned char *)(p + 5);
    }
    if (*(unsigned char *)(p + 0x44A) != c) {
        func_0024DA80(p + 0x1060, 0, c);
        *(unsigned char *)(p + 0x44A) = c;
    }
}

void func_001AD100(char *);

void func_00488C10(char *p) {
    void func_00488D00(char *);
    void func_00489980(char *);
    void func_0048A470(char *);
    func_001AD100(p);
    *(float *)(p + 0x450) = *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3A0), "r"(p + 0x50) : "memory");
    *(int *)(p + 0x110) = 0;

    switch ((unsigned char)*(unsigned char *)(p + 4)) {
    case 0:
        func_00488D00(p);
        break;
    case 1:
        func_00489980(p);
        break;
    case 2:
        func_0048A470(p);
        break;
    case 3:
        break;
    }
}

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, int, int, int, int);

void func_0048A9D0(char *p) {
    char *func_00207480(int, int, char *, int);
    void func_0041D670(char *);
    char *e;
    if (*(int *)(p + 0x440) != 0) {
        func_0041D670(p + 0x440);
        e = func_00207480(3, 0xE9, 0, 16);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x560) + 0x104);
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
    }
}

void func_0048A8E0(char *p) {
    char *func_00207480(int, int, char *, int);
    char *q;
    char *e;
    if (*(int *)(p + 0x440) == 0) {
        *(char **)(p + 0x440) = func_00207480(3, 0x2D1, 0, 16);
        q = *(char **)(p + 0x440);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x560) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0x440) + 0x3A) = 1;
        }
        e = func_00207480(3, 0xDC, 0, 16);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x560) + 0x104);
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
    }
}

void func_001003E0();

void func_0024D9A0();

void func_0024FEA0();

void func_002E78A0();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_0048C420(char *p, short flag) {
    void func_00100580();
    void func_0013D240();
    void func_002791E0();
    void func_0028C1A0();
    if (p != 0) {
        *(char * *)(p) = D_005B7160;
        *(char * *)(p + 64) = D_005B7184;
        *(char * *)(p + 160) = D_005B7204;
        *(char * *)(p + 208) = D_005B7298;
        *(char * *)(p + 304) = D_005B7364;
        *(char * *)(p + 464) = D_005B741C;
        if (p + 5168 != 0) {
            *(char * *)(p + 5184) = D_005B0890;
            if (p + 5168 != 0) {
                *(char * *)(p + 5184) = D_005A77A0;
            }
        }
        func_00313E60(p + 5132, -1);
        func_002E8A50(p + 5108, -1);
        func_002E78A0(p + 5040, -1);
        func_0028C1A0(p + 4400, -1);
        func_0024D9A0(p + 4192, -1);
        func_00401030(p + 4160, -1);
        func_002791E0(p + 2624, -1);
        func_001003E0(p + 1472, (void *)func_00204A70, 192, 6);
        func_001003E0(p + 532, (void *)func_0013D240, 16, 24);
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0048AF80(p0, p1) char *p0; int p1; {
    if (*(float *)(p0 + 5028) > 0.0f) {
        if (*(unsigned char *)(p0 + 5) != p1) {
            *(char *)(p0 + 5) = p1;
            *(char *)(p0 + 6) = 0;
            *(char *)(p0 + 7) = 0;
        }
    }
}

void func_0048B2A0(p0, p1, p2, p3, p4, p5, p6) int p0; char *p1; char *p2; int p3; int p4; int p5; int p6; {
    char *v0;
    char *v1;
    v0 = *(char **)(p1 + 0);
    if (v0 != 0) {
        *(char *)(v0 + 156) = p3;
        *(char *)(v0 + 157) = p4;
        *(char *)(v0 + 158) = p5;
        *(char *)(v0 + 155) = 2;
        *(char *)(v0 + 159) = p6;
        *(char *)(v0 + 155) = 3;
        *(char *)(v0 + 155) = 1;
    }
    v1 = *(char **)(p2 + 0);
    if (v1 != 0) {
        *(char *)(v1 + 156) = p3;
        *(char *)(v1 + 157) = p4;
        *(char *)(v1 + 158) = p5;
        *(char *)(v1 + 155) = 2;
        *(char *)(v1 + 159) = p6;
        *(char *)(v1 + 155) = 3;
        *(char *)(v1 + 155) = 1;
    }
}

extern void func_0048C400();

void func_0048C580(char *p) { func_0048C400(p + -64); }

extern void func_0048C410();

void func_0048C590(char *p) { func_0048C410(p + -64); }

extern void func_0048AA80();

void func_0048C5B0(char *p) { func_0048AA80(p + -64); }

extern void func_0048AB70();

void func_0048C5D0(char *p) { func_0048AB70(p + -64); }

extern void func_0048AB20();

void func_0048C5E0(char *p) { func_0048AB20(p + -64); }

extern void func_0048ABF0();

void func_0048C5F0(char *p) { func_0048ABF0(p + -64); }

extern void func_0048AE50();

void func_0048C630(char *p) { func_0048AE50(p + -304); }

extern void func_0048ABE0();

void func_0048C660(char *p) { func_0048ABE0(p + -304); }

void func_0048C680(char *p) { func_0048AB70(p + -304); }

void func_0048C690(char *p) { func_0048AB20(p + -304); }

void func_0048D070(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_0048D1F0();

void func_0048D130(void) { func_0048D1F0(); }

extern void func_0048C9B0();

void func_0048D870(char *p) { func_0048C9B0(p + -64); }

extern void func_00435510();

void func_0048D880(char *p) { func_00435510(p + -64); }

void func_0048D120(void) {}

int func_002EF940();

int func_0048B870(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int v0;
    int v1;
    v0 = (int)(p0 + 4944);
    if (*(float *)(p0 + 1212) > 0.0f) {
        v1 = func_002EF940(*(int *)D_01CAFF0C, v0);
    }
    return v1;
}
