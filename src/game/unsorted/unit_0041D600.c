#include "game/mt_rand.h"
void func_0041FC60(p0) char *p0; {
    int func_0024E800();
    int func_0038F2C0();
    void func_0038F300();
    void func_0041DBA0();
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int tmp1;
    v0 = *(int *)(p0 + 1068);
    *(int *)(p0 + 1068) = (v0 & -8193);
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 1);
    v1 = *(unsigned char *)(p0 + 6);
    v2 = p0;
    switch (v1) {
    case 0:
        func_0038F300(p0, -1, v0);
        *(char *)(v2 + 6) = 1;
        /* fall through */
    case 1:
        func_0041DBA0(v2, (v2 + 1536));
        v3 = func_0024E800((v2 + 3104));
        tmp1 = (v3 & 255);
        v4 = (int)v2;
        if (tmp1 == 1) {
            v3 = func_0038F2C0(v4, 12);
        }
        break;
    }
}

void func_00421A40(char *p) {
    void func_0038F300(char *, int);
    void func_0041E120(char *, float);
    void func_0038F2C0(char *, int);
    *(int *)(p + 0x42C) |= 0x2000;
    *(int *)(p + 0x42C) |= 0x8000;
    *(int *)(p + 0x42C) |= 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        p[6] = 1;
    case 1:
        {
            char *b = p;
            if (b) {
                b += 0x40;
            }
            func_0041E120(b, 0.0f);
        }
        if (*(float *)(p + 0x448) <= 0.0f) {
            func_0038F2C0(p, 0x12);
        }
        break;
    }
}

/* Hand-matched functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose callee prototypes conflict with misc3-13. */
extern char D_01CAFF0C[];

float func_001324B0(float *, float *);

#define VADD41E(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "r"(s) : "memory")

void func_0041E410(void) {
    extern char *D_005BE09C;
    extern float D_01DFC120[];
    extern float D_01DFC130[];
    extern float D_01DFC140[];
    extern float D_01DFC150[];
    short func_0034B940(float *, float *);
    void func_00105760(float *, float *, float);
    void func_00104B80(float *, float *, float *);
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float e[4] __attribute__((aligned(16)));
    float f[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float r;
    if (*(char **)(D_005BE09C + 0x23C) != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(D_005BE09C + 0x23C) + 0x70), "r"(e) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(f), "r"(*(char **)((*(char **)D_01CAFF0C) + 0xC) + 0x50) : "memory");
        a[0] = -400.0f;
        a[1] = 0.0f;
        a[2] = 0.0f;
        a[3] = 1.0f;
        b[0] = -100.0f;
        b[1] = 0.0f;
        b[2] = -70.0f;
        b[3] = 1.0f;
        c[0] = 100.0f;
        c[1] = 0.0f;
        c[2] = -70.0f;
        c[3] = 1.0f;
        d[0] = 400.0f;
        d[1] = 0.0f;
        d[2] = 0.0f;
        d[3] = 1.0f;
        d[2] = a[2] = -(300.0f + func_001324B0(e, f));
        r = 6.283185f * ((float)func_0034B940(f, e) / 65536.0f);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, r);
        func_00104B80(D_01DFC120, m, a);
        func_00104B80(D_01DFC130, m, b);
        func_00104B80(D_01DFC140, m, c);
        func_00104B80(D_01DFC150, m, d);
        VADD41E(D_01DFC120, f);
        VADD41E(D_01DFC130, f);
        VADD41E(D_01DFC140, f);
        VADD41E(D_01DFC150, f);
    }
}

 void func_0041D800(char *, float, float);

void func_00421F50(char *p) {
    void func_0048AFC0(char *, int);
    void func_0041D6E0(char *, char *, int, float);
    int func_0024E800(char *);
    void func_0048AF80(char *, int);
    char *b;
    *(int *)(p + 0x110) |= 2;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = -20.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        func_0041D800(p + 0x68, 2.0f * *(float *)(p + 0x10), 0.0f);
        b = p;
        if (b) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            func_0048AF80(p, 4);
        }
        break;
    }
}

/* Turn angle from degrees, two position updates, keeps 20 units above the target. */
extern char D_01CAFF0C[];

int func_0034B8C0(short *, short *, int);

unsigned char func_0041DAB0(char *a, short *b, int c) {
    short func_0034B940(char *, char *);
    short d;
    d = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, a);
    d = d - *b;
    return func_0034B8C0(b, &d, c);
}

void func_00105578(float *, float *, float);

void func_0041DDC0(signed char k, float *a, float *b, float *out) {
    short func_0034B940(char *, char *);
    void func_00105760(float *, float *, float);
    void func_00104B80(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    short s;
    float ang;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v70), "r"(a) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v60), "r"(b) : "memory");
    s = func_0034B940((char *)v60, (char *)v70);
    v80[1] = 500.0f;
    v80[0] = 0.0f;
    v80[2] = 0.0f;
    v80[3] = 1.0f;
    switch (k) {
    case 0: case 11: ang = 3.1415925f; break;
    case 1: case 12: ang = 2.3561945f; break;
    case 2: case 13: ang = 1.5707963f; break;
    case 3: case 14: ang = 0.7853981f; break;
    case 4: case 15: ang = 0.0f; break;
    case 5: case 16: ang = -0.6981317f; break;
    case 6: case 17: ang = -1.5707963f; break;
    case 7: case 18: ang = -2.3561945f; break;
    case 8: case 9: case 10:
        v80[3] = 1.0f;
        v80[2] = -300.0f;
        v80[0] = 0.0f;
        ang = 0.0f;
        v80[1] = 0.0f;
        break;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105578(m, m, ang);
    func_00105760(m, m, 6.283185f * ((float)s / 65536.0f));
    func_00104B80(v80, m, v80);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(v80), "r"(a) : "memory");
}

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

extern int D_01CAFF38[];

extern char D_0056CCF4[];

extern unsigned char D_0056CB66[];

extern unsigned char D_0056CB67[];

static inline int lt425(float a, float b) { return a < b; }

void func_00425970(char *p) {
    unsigned int func_002F2FC0(char *, unsigned int);
    void func_003FA3F0(char *, int);
    int func_0034B800(char *, char *, short, short, float);
    int *t;
    char *e;
    float *q;
    float r;
    float acc;
    unsigned char lim;
    t = *(int **)(D_0056CCF4 + *(unsigned char *)(p + 5) * 52);
    lim = 14;
    if (D_01CAFF38[0] != 0x191) lim = 8;
    if (func_002F2FC0(*(char **)(*(char **)D_01CAFF0C + 0x20), 0x10000000) < lim && (*(unsigned char *)(p + 0x496) & 1)) {
        (*(signed char *)(p + 0x48B))--;
        if (!(*(signed char *)(p + 0x48B) > 0)) {
            *(unsigned char *)(p + 0x48B) = D_0056CB66[*(unsigned char *)(p + 0x3AB) * 36] + (unsigned char)(unsigned int)((float)D_0056CB67[*(unsigned char *)(p + 0x3AB) * 36] * (2.3283064e-10f * mt_rand()));
            func_003FA3F0(p, 7);
            return;
        }
    }
    for (; *t != 0; t += 3) {
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)(p + 0x90) + *(short *)((char *)t + 4), *(short *)((char *)t + 6), *(float *)((char *)t + 8)) == 1) {
            e = *(char **)t;
            r = 100.0f * (2.3283064e-10f * mt_rand());
            acc = 0.0f;
            q = (float *)((char *)(*(unsigned char *)(p + 0x3AB) * 4) + (int)e);
        lp:
            acc += *q;
            if (!lt425(r, acc)) goto adv;
            if (*(unsigned short *)(e + 0x10) == *(unsigned char *)(p + 5)) return;
            func_003FA3F0(p, *(unsigned short *)(e + 0x10));
            return;
        adv:
            q += 5;
            e += 0x14;
            goto lp;
        }
    }
}

void func_0048B3F0(char *);

void func_004235F0(char *p) {
    char *func_00207480(int, int, char *, int);
    void func_0048AFC0(char *, int);
    unsigned char func_0041D6B0(char *, float);
    void func_0048AF80(char *, int);
    char *q;
    *(unsigned int *)(p + 0x45C) |= 0x20000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, 0xD);
        *(int *)(p + 0x4BC) = 0;
        *(float *)(p + 0x458) = 2.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (*(char **)(p + 0x1494)) *(unsigned char *)(*(char **)(p + 0x1494) + 0xA1) = 0;
        *(unsigned int *)(p + 0x45C) |= 0x80000000;
        *(unsigned int *)(p + 0x45C) |= 0x8000000;
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) *(unsigned char *)(p + 6) = 2;
        break;
    case 2:
        q = p + 0x400;
        func_00207480(3, 0x1D8, q, 0x10);
        if (*(char **)(p + 0x1494)) *(unsigned char *)(*(char **)(p + 0x1494) + 0xA1) = 1;
        func_0048B3F0(p);
        *(float *)(p + 0x458) = 100.0f;
        *(float *)(p + 0x4BC) = 30.0f;
        *(int *)(p + 0x4C4) = 0;
        func_00207480(3, 0x1D8, q, 0x10);
        *(unsigned char *)(p + 6) = 3;
    case 3:
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) {
            func_0048B3F0(p);
            *(unsigned char *)(p + 6) = 4;
        }
        break;
    case 4:
        *(int *)(p + 0x4BC) = 0;
        *(float *)(p + 0x458) = 350.0f;
        *(unsigned char *)(p + 6) = 5;
    case 5:
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) func_0048AF80(p, 0);
        break;
    }
}

extern char D_01CAFF0C[];

typedef struct ZoneSel {
    float weight[4];
    unsigned short id;
    char pad[2];
} ZoneSel;

typedef struct Zone {
    ZoneSel *sel;
    short ang;
    short range;
    float dist;
} Zone;

extern Zone *D_0056C574[];

/* In the first zone the player stands in, picks the next state with the zone's weights. */
typedef struct Enemy239 { char pad[0x50]; char pos[0x40]; short ang; } Enemy239;

void func_004239B0(Enemy239 *q) {
    int func_0034B800(char *, char *, short, short, float);
    void func_003FA3F0(unsigned char *, int);
    unsigned char *p = (unsigned char *)q;
    Zone *z;
    ZoneSel *e;
    float r;
    float acc;
    for (z = D_0056C574[p[5] * 13]; z->sel != 0; z++) {
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, q->pos,
                                         q->ang + z->ang, z->range, z->dist) == 1) {
            e = z->sel;
            r = 100.0f * (2.3283064e-10f * mt_rand());
            acc = 0.0f;
            for (;; e++) {
                acc += e->weight[p[0x3AB]];
                if (!(r < acc)) {
                    continue;
                }
                if (e->id == p[5]) {
                    return;
                }
                func_003FA3F0(p, e->id);
                return;
            }
        }
    }
}

void func_0041D9E0(float *, float *, char *);

void func_0041FD00(char *p) {
    void func_0038F300(char *, int);
    void func_0041DBA0(char *, char *);
    void func_0038F2C0(char *, int);
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    *(int *)(p + 0x42C) &= ~0x2000;
    *(int *)(p + 0x110) |= 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        p[6] = 1;
    case 1:
        func_0041DBA0(p, p + 0x600);
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a), "r"(*(char **)(*(char **)(p + 0x4E0) + 0x104) + 0x30) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b), "r"(*(char **)(*(char **)(p + 0x4F0) + 0x104) + 0x30) : "memory");
            func_0041D9E0(a, b, p + 0x80);
            *(float *)(p + 0x84) += 6.2831850051879883f * ((100.0f * (2.3283064e-10f * mt_rand()) - 50.0f) / 360.0f);
            *(short *)(p + 0x90) = 0.5f + 65536.0f * *(float *)(p + 0x84) / 6.2831850051879883f;
            *(float *)(p + 0x80) = -0.6108652353286743f;
            func_0038F2C0(p, 0xE);
        }
        break;
    }
}

int func_0041DFD0(char *a, char *b, int ang, int w) {
    int func_0034B940(char *, char *);
    short r = func_0034B940(a, b);
    unsigned short h = (unsigned int)(unsigned short)w >> 1;
    int d = (short)(r - (short)ang);
    if (d < 0) d = -d;
    if (h < d) return 0;
    return 1;
}

int func_00423B90(char *p) {
    float func_0041DB20(char *);
    return func_0041DB20(p + 0x50) < 350.0f;
}

void func_003FA770(char *, char *, char *, float *, float *);

int func_00424DE0(char *p) {
    float func_0041DB20(char *);
    int func_002F2FC0(int, int);
    char stk[0x20] __attribute__((aligned(16)));
    float x;
    float y;
    if (func_002F2FC0(*(int *)(*(char **)D_01CAFF0C + 32), 1) != 0) {
        return 0;
    }
    func_003FA770(p, p + 80, *(char **)(*(char **)D_01CAFF0C + 12) + 80, (float *)stk, (float *)(stk + 16));
    x = func_0041DB20(stk);
    y = func_0041DB20(stk + 16);
    if (x < 60.0f || y < 60.0f) {
        return 1;
    }
    return 0;
}

void func_00424EB0(char *, int);

void func_004252D0(char *, int);

void func_004254B0(char *, int);

void func_00424B30(char *p) {
    void func_003F85D0(char *, int);
    void func_003F8E90(char *, int);
    void func_003F94A0(char *, int);
    void func_003F9700(char *, int);
    int k = *(unsigned char *)(p + 5);
    switch (k) {
    case 0:
        func_003F85D0(p, k);
        break;
    case 2:
        func_00424EB0(p, k);
        break;
    case 3:
        func_004252D0(p, k);
        break;
    case 4:
        func_004254B0(p, k);
        break;
    case 10:
        func_003F8E90(p, k);
        break;
    case 12:
        func_003F94A0(p, k);
        break;
    case 13:
        func_003F9700(p, k);
        break;
    }
}

void func_004203C0(char *p) {
    void func_0038F300(char *, int);
    void func_0038F2C0(char *, int);
    int func_0041D6B0(char *, float);
    void func_0041D6E0(char *, char *, int, float);
    void func_0041DBA0(char *, char *);
    char *func_00207480(int, int, float *, int);
    void func_0041D820(char *, float, float);
    int func_0041E120(float, char *);
    void func_00105230(float *, float *, char *);
    char *b;
    float m[16] __attribute__((aligned(16)));
    float y;
    *(int *)(p + 0x42C) |= 0x2000;
    *(int *)(p + 0x42C) |= 0x8000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(float *)(p + 0x428) = 40.0f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x80) = 0.0f;
        *(float *)(p + 0x88) = 0.0f;
        p[6] = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + 0x428, *(float *)(p + 0x10)) == 1) {
            func_0041D820(p + 0x64, *(float *)(p + 0x10) * -9.0f, -30.0f);
            b = p;
            if (b) {
                b += 0x40;
            }
            func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        } else {
            y = *(float *)(p + 0x54);
            func_0041DBA0(p, p + 0x600);
            *(float *)(p + 0x64) = *(float *)(p + 0x54) - y;
        }
        b = p;
        if (b) {
            b += 0x40;
        }
        if ((unsigned char)func_0041E120(0.0f, b) == 1) {
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105230(m, m, p + 0x50);
            func_00207480(0, 0x2C, m, 16);
            if (100.0f * (2.3283064e-10f * mt_rand()) < 50.0f) {
                func_0038F2C0(p, 0x10);
            } else {
                func_0038F2C0(p, 0x17);
            }
        }
        break;
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

int func_002018A0(char *, char *, char *, float *, char *, int);

void func_00133450(float *, float *, float *);

char *func_00207470(int, int, float *);

int func_0041DC70(char *a, char *b, int f) {
    float h[4] __attribute__((aligned(16)));
    float info[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float n[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, a, b, h, (char *)info, 4) == 1) {
        UNIT(m);
        s[0] = 100.0f;
        s[1] = 100.0f;
        s[2] = 100.0f;
        n[3] = 0.0f;
        n[0] = info[10];
        n[1] = info[11];
        n[2] = info[12];
        func_00133450(m, n, s);
        m[12] = h[0] + 5.0f * info[10];
        m[15] = 1.0f;
        m[13] = h[1] + 5.0f * info[11];
        m[14] = h[2] + 5.0f * info[12];
        if (f == 0) {
            func_00207470(3, 0x1A9, m);
        } else {
            func_00207470(1, 0x2B3, m);
        }
        return 1;
    }
    return 0;
}

void func_0024D6A0(char *, int, int);

void func_0048B020(char *);

void func_0021CC70(char *, float);

int func_0024D6B0(char *, unsigned char *);

void func_0041D670(char *);

void func_0048BF50(char *, float);

void func_004227D0(char *p) {
    int func_0041D6B0(char *, float);
    void func_0048AFC0(char *, int);
    void func_0048AF80(char *, int);
    unsigned char c;
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(unsigned int *)(p + 0x45C) |= 0x8000000;
    *(unsigned int *)(p + 0x110) |= 0x4000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0024D6A0(g, 0, 0x3C);
        *(int *)(p + 0x454) = 0;
        func_0048B020(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0021CC70(*(char **)(*(char **)D_01CAFF0C + 0xC), *(float *)(p + 0x10) * 20.0f);
        if ((unsigned char)func_0024D6B0(g, &c) == 1) {
            func_0041D670(p + 0x4E0);
            func_0048AF80(p, 8);
            return;
        }
        if (c > 0) {
            *(unsigned int *)(p + 0x45C) |= 0x4000;
        }
        if ((unsigned char)func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) {
            func_0041D670(p + 0x4E0);
            func_0048AF80(p, 9);
        }
        break;
    }
    func_0048BF50(p, 1.0f);
}

int func_004243B0(char *p) {
    int func_0034B800(char *, char *, int, int, float);
    return (unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)(p + 0x90), 0x38E4, 300.0f) == 1;
}

void func_001AD140(char *);

void func_00228300(char *);

int func_0041D600(char *p) {
    func_00228300(p + 0xD0);
    if (*(char **)(p + 0xD0) == 0) {
        func_001AD140(p);
        return 0;
    }
    if (*(int *)(*(char **)(p + 0xD0) + 0x110) & 4) {
        func_001AD140(p);
        return 0;
    }
    return 1;
}

void func_003FA440(char *, int);

void func_004265D0(char *p) {
    int func_0024E800(char *);
    void func_003FA3F0(char *, int);
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
    }
}

void func_0038F360(char *);

void func_0041FBB0(char *p) {
    int func_0041D6B0(float *x, float d);
    void func_0038F300(char *, int);
    void func_0041E120(char *, float);
    void func_0038F2C0(char *, int);
    char *b;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        func_0038F360(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041E120(b, 0.0f);
        if ((unsigned char)func_0041D6B0((float *)(p + 0x428), *(float *)(p + 0x10)) == 1) {
            func_0038F2C0(p, 1);
        }
    }
}

void func_004229E0(char *p) {
    int func_0041D6B0(float *x, float d);
    char *func_00207480(int, int, char *, int);
    void func_0048AFC0(char *, int);
    *(int *)(p + 0x45C) = *(int *)(p + 0x45C) | 0x4000000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x458) = 30.0f;
        *(unsigned char *)(p + 0x4D1) = 0;
        func_0048AFC0(p, -1);
        func_00207480(3, 0x1C4, p + 0x400, 16);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x458), *(float *)(p + 0x10)) == 1) {
            *(int *)(p + 0x110) = *(int *)(p + 0x110) | 4;
            func_001AD140(p);
        }
    }
}

void func_001318E0(char *, char *, float *);

void func_00131760(char *, char *, float *);

void func_0041D840(char *a, char *b, float s) {
    void func_00105230(char *, char *, float *);
    *(float *)(a + 0x44) = 6.283185f * (*(short *)(a + 0x50) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x20), "r"(a + 0x40) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x10), "r"(a + 0x10) : "memory");
    *(float *)(b + 0x30) = s;
    *(float *)(b + 0x34) = s;
    *(float *)(b + 0x38) = s;
    *(float *)(b + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(b + 0x40) : "memory");
    func_00131760(b + 0x40, b + 0x40, (float *)(b + 0x20));
    func_00105230(b + 0x40, b + 0x40, (float *)(b + 0x10));
    func_001318E0(b + 0x40, b + 0x40, (float *)(b + 0x30));
}

void func_0041D910(char *a, char *b, float x, float y, float z) {
    void func_00105230(char *, char *, float *);
    *(float *)(a + 0x44) = 6.283185f * (*(short *)(a + 0x50) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x20), "r"(a + 0x40) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x10), "r"(a + 0x10) : "memory");
    *(float *)(b + 0x30) = x;
    *(float *)(b + 0x34) = y;
    *(float *)(b + 0x38) = z;
    *(float *)(b + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(b + 0x40) : "memory");
    func_00131760(b + 0x40, b + 0x40, (float *)(b + 0x20));
    func_00105230(b + 0x40, b + 0x40, (float *)(b + 0x10));
    func_001318E0(b + 0x40, b + 0x40, (float *)(b + 0x30));
}

void func_00428040(char *p) {
    int func_0041D6B0(float *x, float d);
    int func_0024E800(char *);
    void func_003FA3F0(char *, int);
    if (*(float *)(p + 0x478) <= 0.0f) {
        *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x3B8) = 40.0f - 6.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), *(float *)(p + 0x10)) == 1) {
            func_003FA440(p, -1);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
        break;
    }
}

void func_0041D800(char *, float, float);

void func_00422BC0(char *p) {
    int func_0041D6B0(float *x, float d);
    void func_0048AFC0(char *, int);
    void func_0048AF80(char *, int);
    void func_0041D6E0(char *, char *, int, float);
    char *g;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0048B020(p);
        *(float *)(p + 0x458) = *(float *)(p + 0x458) + *(float *)(p + 0x454);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 25.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        g = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (150.0f + *(float *)(g + 0x54) < *(float *)(p + 0x54)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) - 2.0f;
        } else {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 2.0f;
        }
        func_0041D800(p + 0x68, *(float *)(p + 0x10), 30.0f);
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x458), *(float *)(p + 0x10)) == 1) {
            func_0048AF80(p, 0xC);
        }
    }
}

void func_003FA730(char *, char *, char *, float *, float *);

int func_00425D20(char *p) {
    int func_002F2FC0(char *, int);
    float func_0041DB20(float *);
    float func_00132470(char *, float *);
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float *pb;
    float da;
    float db;
    if (func_002F2FC0(*(char **)(*(char **)D_01CAFF0C + 0x20), 1) != 0) return 0;
    pb = b;
    func_003FA730(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, a, pb);
    da = func_0041DB20(a);
    db = func_0041DB20(pb);
    if (da < 60.0f) {
        if (func_00132470(p + 0x50, a) < 1500.0f) return 1;
    }
    if (db < 60.0f) {
        if (func_00132470(p + 0x50, pb) < 1500.0f) return 1;
    }
    return 0;
}

void func_00426C50(char *);

void func_004270C0(char *);

void func_003F9080(char *);

void func_00426B20(char *p) {
    void func_003FA3F0(char *, int);
    void func_003F85D0(char *);
    void func_003F8E90(char *);
    void func_003F94A0(char *);
    void func_003F9700(char *);
    if (*(unsigned char *)(p + 0x488) == 0x14) {
        if (*(unsigned char *)(p + 5) == 0) {
            func_003FA3F0(p, 3);
        } else if (*(unsigned char *)(p + 5) == 3) {
            *(unsigned char *)(p + 0x488) = 0;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00426C50(p);
        break;
    case 3:
        func_004270C0(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 11:
        func_003F9080(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) & 0xBFFFFFFF;
    *(short *)(p + 0x484) = *(short *)(p + 0x90);
}

void func_001ACC30(int, int, int, int, int);

void func_0034BA60(int, char *, int, int, int);

void func_0041D7F0(char *, float);

void func_003FA550(char *, float);

static inline unsigned char nz4000(char *p) {
    return (*(int *)(p + 0x3BC) & 0x4000) != 0;
}

void func_00424790(char *p) {
    void func_003FA3F0(char *, int);
    void func_0041D6E0(char *, char *, int, float);
    extern int D_005BE09C;
    char *func_00207480(int, int, int, int);
    int func_0041E120(char *, float);
    char *q;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x20, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        if (*(int *)(p + 0x450) == 0) {
            *(char **)(p + 0x450) = func_00207480(3, 0x396, 0, 0x10);
            q = *(char **)(p + 0x450);
            if (q != 0) {
                *(char **)(q + 0x90) = p + 0x360;
                q[0x9A] = 1;
                (*(char **)(p + 0x450))[0x3A] = 1;
            }
        }
        func_003FA440(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = -5.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        if ((unsigned char)func_0041E120(b, 0.0f) == 1) {
            func_0041D670(p + 0x450);
            func_003FA550(p, 5.0f);
            func_001ACC30(D_005BE09C, 3, 0x1E, 0xF, 1);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if (nz4000(p) == 1) {
                *(signed char *)(p + 0x491) = *(signed char *)(p + 0x491) - 1;
                if (*(signed char *)(p + 0x491) > 0) {
                    func_003FA3F0(p, 4);
                } else {
                    *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) & ~0x4000;
                    func_003FA3F0(p, 9);
                }
            } else {
                func_003FA3F0(p, 9);
            }
        }
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

float func_0041DB40(char *s) {
    float func_00132470(char *, char *);
    float a[4];
    float b[4];
    QCOPY(a, s);
    QCOPY(b, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    a[1] = 0.0f;
    b[1] = 0.0f;
    return func_00132470((char *)a, (char *)b);
}

void func_0041E190(char *d, char *s, float r) {
    void func_00104B80(char *, char *, char *);
    void func_00105760(char *, char *, float);
    float m[16];
    UNIT(m);
    func_00105760((char *)m, (char *)m, r);
    func_00104B80(d, (char *)m, s);
}

void func_00105668(char *, char *, float);

void func_0041E1F0(char *d, char *s, float x, float y) {
    void func_00104B80(char *, char *, char *);
    void func_00105760(char *, char *, float);
    float m[16];
    UNIT(m);
    func_00105668((char *)m, (char *)m, x);
    func_00105760((char *)m, (char *)m, y);
    func_00104B80(d, (char *)m, s);
}

void func_001051C8(float *, float *, float);

void func_00105090(char *, float *, float *);

void func_0041E270(char *out, char *b, float s, float t) {
    float u[4];
    float w[4];
    float y0;
    float y1;
    QCOPY(u, out);
    y0 = u[1];
    u[1] = 0.0f;
    QCOPY(w, b);
    y1 = w[1];
    w[1] = 0.0f;
    func_001051C8(u, u, s);
    func_001051C8(w, w, 1.0f - s);
    u[1] = y0 * t;
    w[1] = y1 * (1.0f - t);
    func_00105090(out, u, w);
}

int func_0038F830();

int func_0041F830(p0) char *p0; {
    int func_0024E800();
    void func_0038F300();
    char *v1;
    int v2;
    int v0;
    int v3;
    int tmp2;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 2);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0038F300(p0, -1);
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        v3 = func_0024E800((v1 + 3104));
        tmp2 = (v3 & 255);
        v2 = (int)v1;
        if (tmp2 == 1) {
            v3 = func_0038F830(v2);
        }
        break;
    }
    return v3;
}

void func_00422020(char *p) {
    void func_0048AFC0(char *, int);
    void func_0041D6E0(char *, char *, int, float);
    int func_0024E800(char *);
    void func_0048AF80(char *, int);
    char *b;
    *(int *)(p + 0x110) |= 2;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = -20.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        func_0041D800(p + 0x68, 2.0f * *(float *)(p + 0x10), 0.0f);
        b = p;
        if (b) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            func_0048AF80(p, 4);
        }
        break;
    }
}

void func_004241D0(Enemy239 *q) {
    int func_0034B800(char *, char *, short, short, float);
    void func_003FA3F0(unsigned char *, int);
    extern Zone *D_0056D0D4[];
    unsigned char *p = (unsigned char *)q;
    Zone *z;
    ZoneSel *e;
    float r;
    float acc;
    for (z = D_0056D0D4[p[5] * 13]; z->sel != 0; z++) {
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, q->pos,
                                         q->ang + z->ang, z->range, z->dist) == 1) {
            e = z->sel;
            r = 100.0f * (2.3283064e-10f * mt_rand());
            acc = 0.0f;
            for (;; e++) {
                acc += e->weight[p[0x3AB]];
                if (!(r < acc)) {
                    continue;
                }
                if (e->id == p[5]) {
                    return;
                }
                func_003FA3F0(p, e->id);
                return;
            }
        }
    }
}

void func_00424C00(Enemy239 *q) {
    int func_0034B800(char *, char *, short, short, float);
    void func_003FA3F0(unsigned char *, int);
    extern Zone *D_0056D4C4[];
    unsigned char *p = (unsigned char *)q;
    Zone *z;
    ZoneSel *e;
    float r;
    float acc;
    for (z = D_0056D4C4[p[5] * 13]; z->sel != 0; z++) {
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, q->pos,
                                         q->ang + z->ang, z->range, z->dist) == 1) {
            e = z->sel;
            r = 100.0f * (2.3283064e-10f * mt_rand());
            acc = 0.0f;
            for (;; e++) {
                acc += e->weight[p[0x3AB]];
                if (!(r < acc)) {
                    continue;
                }
                if (e->id == p[5]) {
                    return;
                }
                func_003FA3F0(p, e->id);
                return;
            }
        }
    }
}

void func_00426940(Enemy239 *q) {
    int func_0034B800(char *, char *, short, short, float);
    void func_003FA3F0(unsigned char *, int);
    extern Zone *D_0056C914[];
    unsigned char *p = (unsigned char *)q;
    Zone *z;
    ZoneSel *e;
    float r;
    float acc;
    for (z = D_0056C914[p[5] * 13]; z->sel != 0; z++) {
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, q->pos,
                                         q->ang + z->ang, z->range, z->dist) == 1) {
            e = z->sel;
            r = 100.0f * (2.3283064e-10f * mt_rand());
            acc = 0.0f;
            for (;; e++) {
                acc += e->weight[p[0x3AB]];
                if (!(r < acc)) {
                    continue;
                }
                if (e->id == p[5]) {
                    return;
                }
                func_003FA3F0(p, e->id);
                return;
            }
        }
    }
}

int func_00427DE0(char *p) {
    int func_0034B800(char *, char *, int, int, float);
    return (unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)(p + 0x90), 0x4000, 170.0f) == 1;
}

void func_0041E340();

void func_0041E680(p0) int p0; {
    extern char D_01DFC120[];
    extern char D_01DFC130[];
    extern char D_01DFC140[];
    extern char D_01DFC150[];
    func_0041E340(p0, D_01DFC120, D_01DFC130, D_01DFC140, D_01DFC150);
}

int func_0041F8C0(p0) char *p0; {
    int func_0024E800();
    void func_0038F300();
    char *v1;
    int v2;
    int v0;
    int v3;
    int tmp2;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 2);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0038F300(p0, -1);
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        v3 = func_0024E800((v1 + 3104));
        tmp2 = (v3 & 255);
        v2 = (int)v1;
        if (tmp2 == 1) {
            v3 = func_0038F830(v2);
        }
        break;
    }
    return v3;
}

void func_004216C0(p0) char *p0; {
    int func_0024E800();
    int func_0038F2C0();
    void func_0038F300();
    void func_0041D6E0(int, char *, int, float);
    void func_0041D820(char *p0, float f0, float f1);
    int func_0041E120(int p0, float f0);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp2;
    int tmp6;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 32768);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0038F300(p0, -1);
        *(int *)(v1 + 96) = 0;
        *(int *)(v1 + 100) = 0;
        *(int *)(v1 + 104) = 0;
        *(int *)(v1 + 108) = 0x3f800000;
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        tmp2 = func_0024E800((v1 + 3104));
        if ((tmp2 & 255) == 1) {
            *(char *)(v1 + 6) = 2;
        }
        /* fall through */
    case 2:
        func_0041D820((v1 + 100), (-9.0f * *(float *)(v1 + 16)), -30.0f);
        v5 = (int)v1;
        if (v1 != 0) {
            v5 = (v5 + 64);
        }
        func_0041D6E0(v5, (v1 + 96), 1, *(float *)(v1 + 16));
        v2 = (int)v1;
        if (v1 != 0) {
            v2 = (v2 + 64);
        }
        v4 = func_0041E120(v2, 0.0f);
        tmp6 = (v4 & 255);
        v3 = (int)v1;
        if (tmp6 == 1) {
            v4 = func_0038F2C0(v3, 26);
        }
        break;
    }
}

void func_004217E0(p0) char *p0; {
    int func_0024E800();
    int func_0038F2C0();
    void func_0038F300();
    void func_0041D6E0(int, char *, int, float);
    void func_0041D820(char *p0, float f0, float f1);
    void func_0041DBA0();
    int func_0041E120(int p0, float f0);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp2;
    int tmp6;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 32768);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0038F300(p0, -1);
        *(int *)(v1 + 96) = 0;
        *(int *)(v1 + 100) = 0;
        *(int *)(v1 + 104) = 0;
        *(int *)(v1 + 108) = 0x3f800000;
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        func_0041DBA0(v1, (v1 + 1536));
        tmp2 = func_0024E800((v1 + 3104));
        if ((tmp2 & 255) == 1) {
            *(char *)(v1 + 6) = 2;
        }
        /* fall through */
    case 2:
        func_0041D820((v1 + 100), (-9.0f * *(float *)(v1 + 16)), -30.0f);
        v5 = (int)v1;
        if (v1 != 0) {
            v5 = (v5 + 64);
        }
        func_0041D6E0(v5, (v1 + 96), 1, *(float *)(v1 + 16));
        v2 = (int)v1;
        if (v1 != 0) {
            v2 = (v2 + 64);
        }
        v4 = func_0041E120(v2, 0.0f);
        tmp6 = (v4 & 255);
        v3 = (int)v1;
        if (tmp6 == 1) {
            v4 = func_0038F2C0(v3, 26);
        }
        break;
    }
}

void func_00421910(p0) char *p0; {
    int func_0024E800();
    int func_0038F2C0();
    void func_0038F300();
    void func_0041D6E0(int, char *, int, float);
    void func_0041D820(char *p0, float f0, float f1);
    void func_0041DBA0();
    int func_0041E120(int p0, float f0);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp2;
    int tmp6;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 32768);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0038F300(p0, -1);
        *(int *)(v1 + 96) = 0;
        *(int *)(v1 + 100) = 0;
        *(int *)(v1 + 104) = 0;
        *(int *)(v1 + 108) = 0x3f800000;
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        func_0041DBA0(v1, (v1 + 1536));
        tmp2 = func_0024E800((v1 + 3104));
        if ((tmp2 & 255) == 1) {
            *(char *)(v1 + 6) = 2;
        }
        /* fall through */
    case 2:
        func_0041D820((v1 + 100), (-9.0f * *(float *)(v1 + 16)), -30.0f);
        v5 = (int)v1;
        if (v1 != 0) {
            v5 = (v5 + 64);
        }
        func_0041D6E0(v5, (v1 + 96), 1, *(float *)(v1 + 16));
        v2 = (int)v1;
        if (v1 != 0) {
            v2 = (v2 + 64);
        }
        v4 = func_0041E120(v2, 0.0f);
        tmp6 = (v4 & 255);
        v3 = (int)v1;
        if (tmp6 == 1) {
            v4 = func_0038F2C0(v3, 26);
        }
        break;
    }
}

int func_004227C0(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 1372);
}

void func_00422930(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_0024E800();
    void func_0041DBA0();
    int func_0048AF80();
    void func_0048AFC0();
    int v2;
    int v3;
    char *v1;
    int v0;
    int tmp1;
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 1);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0048AFC0(p0, -1);
        *(char *)(v1 + 1233) = 5;
        *(int *)(v1 + 96) = 0;
        *(int *)(v1 + 100) = 0;
        *(int *)(v1 + 104) = 0;
        *(int *)(v1 + 108) = 0x3f800000;
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        func_0041DBA0(v1, (v1 + 2624));
        v2 = func_0024E800((v1 + 4192));
        v3 = (int)v1;
        tmp1 = (v2 & 255);
        if (tmp1 == 1) {
            v2 = func_0048AF80(v3, 0);
        }
        break;
    }
}

extern char D_0056F3A8[];

void func_004237A0(char *p0) {
    *(char *)(p0 + 1166) = 10;
    *(char **)(p0 + 1128) = D_0056F3A8;
}

extern char D_0056F3E0[];

void func_00423FE0(char *p0) {
    *(char *)(p0 + 1166) = 3;
    *(char **)(p0 + 1128) = D_0056F3E0;
}

extern char D_0056F430[];

void func_00424B10(char *p0) {
    *(char *)(p0 + 1166) = 3;
    *(char **)(p0 + 1128) = D_0056F430;
}

extern char D_0056F460[];

void func_00425820(char *p0) {
    *(char *)(p0 + 1166) = 7;
    *(char **)(p0 + 1128) = D_0056F460;
}

extern char D_0056F490[];

void func_00426920(char *p0) {
    *(char *)(p0 + 1166) = 9;
    *(char **)(p0 + 1128) = D_0056F490;
}

extern char D_0056F4E0[];

void func_004279D0(char *p0) {
    *(char *)(p0 + 1166) = 4;
    *(char **)(p0 + 1128) = D_0056F4E0;
}
