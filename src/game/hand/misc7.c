/* Hand-matched functions (seventh file: its callee declarations differ from the others). */

#include "game/mt_rand.h"

extern char D_01CAFF0C[];
short func_0034B940(char *);

extern float D_00568910[];
void func_0041E190(float *, float *, float);

/* Spawns beside the parent: offset by the parent's facing, with a random heading and timer. */
void func_003D3880(char *p) {
    float v[4] __attribute__((aligned(16)));
    v[0] = D_00568910[*(int *)(p + 0xB5C)];
    v[1] = -30.0f;
    v[2] = -220.0f;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190(v, v, *(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f * 6.2831850051879883f);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 10.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(unsigned short *)(p + 0x90) = (*(short *)(*(char **)(p + 0xD0) + 0x90) + 0x7000 + mt_rand()) & 0x1FFF;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = *(short *)(p + 0x90) / 65536.0f * 6.2831850051879883f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(unsigned short *)(p + 0xB66) = (mt_rand() & 0xFF) + 0x200;
}

void func_0038F300(char *, int);
void func_0038F2C0(char *, int);
int func_0041D6B0(char *, float);
void func_0041D6E0(char *, char *, int, float);
void func_0041DBA0(char *, char *);
char *func_00207480(int, int, float *, int);
void func_0041D820(char *, float, float);
int func_0041E120(float, char *);
void func_00105230(float *, float *, char *);

void func_004203C0(char *p) {
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

int func_001AD140(int, int, int);
int func_0039D440(char *p, int k) {
    int r;
    int m = k & 255;
    int *slot;
    if (m == 0) {
        *(unsigned char *)(p + 12004) &= 2;
    } else if (m == 1) {
        *(unsigned char *)(p + 12004) &= 1;
    }
    slot = (int *)(k ? p + 12028 : p + 12024);
    if (*slot != 0) {
        r = func_001AD140(*slot, k, m);
        *slot = 0;
    }
    return r;
}

unsigned char func_003AC650(int);
int func_003B99E0(char *, int, int, int);
int func_003B9B90(char *, int, int, int);
int func_003B96D0(char *p, int a, int b, int c) {
    int r;
    if (a != 0 && b != 0) {
        if (*(unsigned char *)(p + 436) != 0) {
            if (func_003AC650(*(int *)(p + 476)) == 0) {
                r = func_003B99E0(p, a, b, c);
            } else {
                r = func_003B9B90(p, a, b, c);
            }
        } else {
            r = func_003B99E0(p, a, b, c);
        }
    }
    return r;
}

typedef struct { short k; short pad; int v; } KLEnt;
typedef struct { short n; short pad; KLEnt e[272]; } KLTab272;
typedef struct { short n; short pad; KLEnt e[128]; } KLTab128;
int func_0019E7B0(char *);
int func_0019EAA0(char *);
extern int D_01DFAB70[];
int func_0023DF80(char *, float);
void func_0021C7A0(char *, int);
void func_0021C100(char *, int, int, float, float);
void func_00253CA0(char *);
void func_002D9F30(char *, int);
void func_002DBD00(char *);
void func_0021C380(char *, int);
void func_002490F0(char *, int, int, int, int, int, float);
void func_0021BFC0(char *);
void func_002DA3A0(char *, short);
int func_002496D0(char *);
void func_0021CBB0(char *, int);
void func_002DAF70(char *, int, int, int, float);
int func_002D9EB0(char *);
void func_002F30B0(int, char *, char *);
void func_002DB2C0(char *);
void func_0021B790(char *, int);
void func_002DBAA0(char *, short, float);
extern int D_01DFAB74[];
extern char *D_005BC2E0;
extern float D_0055C7F0[];
extern float D_0055C7F4[];
extern float D_0055C7F8[];
extern float D_0055C7FC[];
int func_00124EC0(int);
void func_002F9860(char *, int, int, int);
void func_0028C790(char *, int);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C3A0(char *, int, int, char *);
void func_0028C5C0(char *, int, float);
void func_0024DA80(char *, int, int);
int func_0024E800(char *);
void func_003B61B0(char *);
void func_003B6450(char *);
int func_003B3F70(char *);
void func_003B4840(char *);
void func_003B4F60(char *);
void func_0048AFC0(char *, int);
void func_0034BA60(int, char *, int, int, int);
void func_0048B400(char *);
void func_0048B320(char *);
int func_0048B150(char *);
void func_0041DAB0(char *, char *, int);
void func_0048AF80(char *, int);
extern int D_00541894[];
extern int D_00541898[];
char *func_001B0FD0(char *, int, int);
void *func_00128488(void *, int, unsigned int);
void func_00483620(char *);
int func_001F3A50(KLTab272 *t, short k) {
    int i;
    for (i = 0; i < 272; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}
int func_001FED70(KLTab128 *t, short k) {
    int i;
    for (i = 0; i < 128; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}
int func_001FEFB0(KLEnt *t, short k) {
    int i;
    for (i = 0; i < 500; i++) {
        if (t[i].k == k) {
            return t[i].v;
        }
    }
    return 0;
}

void func_0019DFF0(char *p) {
    *(float *)(p + 0x20) = 1.0f / *(float *)(p + 0x30) * *(float *)(p + 0x70);
    if ((unsigned char)func_0019E7B0(p) == 1) {
        *(float *)(p + 0x44) = *(float *)(p + 0x44) - *(float *)(p + 0x70);
        if (*(float *)(p + 0x44) <= 0.0f) {
            *(float *)(p + 0x44) = *(float *)(p + 0x34);
            *(short *)(p + 0x58) = -*(short *)(p + 0x58);
        }
    }
    *(float *)(p + 0x28) = 1.0f / *(float *)(p + 0x38) * *(float *)(p + 0x70);
    if ((unsigned char)func_0019EAA0(p) == 1) {
        *(float *)(p + 0x4C) = *(float *)(p + 0x4C) - *(float *)(p + 0x70);
        if (*(float *)(p + 0x4C) <= 0.0f) {
            *(float *)(p + 0x4C) = *(float *)(p + 0x3C);
            *(short *)(p + 0x5A) = -*(short *)(p + 0x5A);
        }
    }
}

void func_0021D000(char *p, int k) {
    switch ((unsigned char)k) {
    case 0:
        if (*(unsigned char *)(p + 0x2848) == 0x2A) {
            break;
        }
        *(unsigned char *)(p + 0x28A9) = 0;
        *(unsigned char *)(p + 0x28B3) = 1;
        *(float *)(p + 0x28CC) = 40.0f;
        *(float *)(p + 0x2AF0) = *(float *)(*(char **)(p + 0x283C) + 0x16C);
        if (*(unsigned char *)(p + 0x2848) == 0x29 || *(unsigned char *)(p + 0x2848) == 0x2C) {
            break;
        }
        if (*(unsigned char *)(p + 0x28AA) == 2) {
            break;
        }
        if (func_0023DF80(p, -20.0f) != 0) {
            func_0021C7A0(p, 0x28);
            break;
        }
        func_0021C100(p, 4, 0, 0.0f, -1.5f);
        break;
    case 1:
        func_00253CA0(p);
        *(float *)(p + 0x2AF0) = *(float *)(*(char **)(p + 0x283C) + 0x2C0);
        func_002D9F30(p, 5);
        func_0021C7A0(p, 0x28);
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    }
}

void func_00225D40(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        *(unsigned char *)(p + 0x2903) = 1;
        *(unsigned char *)(p + 0x2904) = 2;
        *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2830) + 0x8A4);
        *(float *)(p + 0x154) = *(float *)(*(char **)(p + 0x2830) + 0x8AC);
        *(float *)(p + 0x64) = *(float *)(*(char **)(p + 0x2830) + 0x8B0);
        *(float *)(p + 0x74) = *(float *)(*(char **)(p + 0x2830) + 0x8BC);
        func_002DBD00(p);
        func_0021C380(p, 0);
        func_002490F0(p, 0, 9, -1, 0, 0, 7.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DC));
            func_002496D0(p);
        }
        break;
    }
}

void func_00228140(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002496D0(p);
        break;
    case 0x65:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            func_002490F0(p, 0, 5, -1, 0, 10, -1.0f);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(float *)(p + 0x150) = 15.0f;
            *(float *)(p + 0x154) = 0.0f;
            *(float *)(p + 0x64) = 5.0f;
            *(float *)(p + 0x74) = -0.8f;
            func_002DBD00(p);
            *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            break;
        case 1:
            if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
                func_0021BFC0(p);
            } else {
                func_002496D0(p);
                func_002DA3A0(p, *(short *)(p + 0x28DC));
            }
            break;
        }
        break;
    }
}

void func_00260950(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xB4));
        func_002490F0(p, 13, 11, -1, 2, 3, -1.0f);
        func_002F30B0(0x11, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            D_01DFAB70[0] = D_01DFAB70[0] | 0x20000;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026C380(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x380));
        func_002490F0(p, 15, 0, -1, 0, 0, -1.0f);
        func_002F30B0(0x3F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x80000000;
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_001F8050(char *p, unsigned char k) {
    int *e = &D_00541894[k * 3];
    char **s = (char **)(p + k * 4);
    int n;
    *s = func_001B0FD0(p + k * 16 + 0x58, *e, 0);
    n = *e;
    func_00128488(*s, 0, n);
}

void func_001F8120(char *p, unsigned char k) {
    int *e = &D_00541898[k * 3];
    char **s = (char **)((char *)(k * 4) + (int)p + 0x2C);
    *s = func_001B0FD0(p + k * 16 + 0x108, *e, 0);
    func_00128488(*s, 0, *e);
}

int func_001980B0(char *p, short a, short b, int c, int k) {
    char *e = p + k * 20;
    char *q = e + 0xC;
    unsigned char *s = (unsigned char *)(*(char **)(e + 0x1C) + *(int *)(e + 0x14) * 132);
    if (*s > 0) {
        return 0;
    }
    s[0] = 1;
    *(short *)(s + 2) = a;
    *(short *)(s + 4) = b;
    *(int *)(s + 8) = c;
    q[0] = 1;
    {
        int t = *(int *)(q + 8);
        int c = *(int *)(q + 0xC);
        t++;
        *(int *)(q + 8) = t;
        *(int *)(q + 8) = t % c;
    }
    return 1;
}

typedef struct { short a; signed char c; signed char d; short e; } ret6;

ret6 func_00483CF0(char *, int, int);
void func_00131650(char *, char *);
float func_00132630(float *, char *);
void func_00132580(float *, char *, float);
float func_00131BA0(int);
float func_00131C20(int);
char *func_002FB170(int);
char *func_002FB8E0(int);
void *func_001282D0(void *, void *, unsigned int);
float func_0011DA38(float);
float func_0011D798(float);
char *func_00279290(char *);
void func_001A2000(char *, int);
void func_001A1E70(char *, int);
extern char *D_0057B060[];
extern unsigned char D_01CAFF3C[];
void func_0046F9A0(char *);
extern char *D_005BE0D8;
char *func_00277610(char *, float *, int, int);

void func_00483760(char *p) {
    func_00483620(p);
    if (*(unsigned char *)(p + 0xD3) != 0) {
        ret6 s = func_00483CF0(p, *(signed char *)(p + 0xD2), *(short *)(p + 0xD0));
        ((int *)p)[s.c] |= 1 << s.d;
    }
}

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define VADD(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

int func_001C1510(char *u, char *out, char *o, char *a, char *b) {
    float d1[4];
    float d2[4];
    VSUB(d1, a, o);
    func_00131650((char *)d1, (char *)d1);
    VSUB(d2, b, o);
    func_00132580(d2, (char *)d1, func_00132630(d2, (char *)d1));
    VADD(out, d2, o);
    return 1;
}

void func_002DB880(char *p, int a) {
    float s = func_00131BA0(a);
    float c;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * s);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    c = func_00131C20(a);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * c);
    *(float *)(p + 0x150) = *(float *)(p + 0x150) + *(float *)(p + 0x154) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74);
}

int func_002FB930(int a, int b, void *src) {
    char *h = func_002FB170(a);
    char *d = func_002FB8E0(*(unsigned char *)(h + 0xA) & 0xF);
    if (d == 0) {
        return -1;
    }
    *(unsigned char *)(d + 2) = a;
    *(unsigned char *)(d + 3) = b;
    *(unsigned short *)(d + 4) = *(unsigned short *)(h + 0x18);
    *(unsigned short *)(d + 8) = *(unsigned short *)(h + 0x1A);
    *(unsigned short *)(d + 0xA) = *(unsigned short *)(h + 0x1C);
    *(unsigned short *)(d + 6) = *(unsigned short *)(h + 0x1E);
    *(unsigned short *)(d + 0xC) = 1;
    *(unsigned short *)(d + 0xE) = *(unsigned short *)(d + 6);
    func_001282D0(d + 0x10, src, 0x30);
    return 0;
}

void func_0034B9A0(float *v, int ang, float s, float y, float t) {
    float a = 6.283185f * ((float)ang / 65536.0f);
    v[0] = v[0] + t * (s * func_0011DA38(a));
    v[1] = v[1] + y * t;
    v[2] = v[2] + t * (s * func_0011D798(a));
}

void func_00356570(char *p, unsigned char k, char *l) {
    int i;
    int n = *(int *)(l + 0x10);
    for (i = 0; i < n; i++) {
        if (*(int *)(l + i * 4 + 0x14) == -1) {
            func_001A2000(func_00279290(p + k * 0x600 + 0xC0), i);
        } else {
            func_001A1E70(func_00279290(p + k * 0x600 + 0xC0), i);
        }
    }
}

int func_0046F8E0(char *p) {
    unsigned char k = *(unsigned char *)(p + 0x254);
    if (k == 0 && *(short *)(p + 0x276) == 1 && *(short *)(p + 0x276) != *(short *)(p + 0x278)) {
        *(short *)(p + 0x27A) = 9;
    } else {
        short *t = *(short **)(D_0057B060[k] + D_01CAFF3C[0] * 4);
        short n = t[0];
        *(unsigned char *)(p + 0x256) = *(unsigned char *)(p + 0x256) + 1;
        if (!(*(unsigned char *)(p + 0x256) < n)) {
            *(unsigned char *)(p + 0x256) = 0;
        }
        *(short *)(p + 0x27A) = t[*(unsigned char *)(p + 0x256) + 1];
    }
    func_0046F9A0(p);
    return 1;
}

void func_00197910(char *p, char *q) {
    func_00128488(p, 0, 0x108);
    func_00128488(q, 0, 0x40);
    *(int *)(p + 0x100) = 1;
    *(int *)(p + 0x104) = 1;
    *(char **)p = q;
    *(short *)(q + 2) = -1;
    *(short *)(q + 0) = -1;
    *(short *)(q + 4) = 1;
    *(short *)(q + 8) = *(short *)(D_005BE0D8 + 0x20) / 64;
    *(short *)(q + 0xA) = *(short *)(D_005BE0D8 + 0x20);
    *(short *)(q + 0xC) = *(short *)(D_005BE0D8 + 0x22);
    if (*(signed char *)(D_005BE0D8 + 6) == 2) {
        *(unsigned short *)(q + 6) = *(unsigned short *)(D_005BE0D8 + 0x4C);
    } else {
        *(unsigned short *)(q + 6) = *(unsigned short *)(D_005BE0D8 + 0x48);
    }
    *(short *)(q + 0x18) = -1;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001AA4B0(char *p, char *m, char *src, int flags) {
    float v[4];
    char *r;
    int i;
    if (m != 0) {
        func_00128488(p + 0x2C0, 0, 0xC0);
        QCOPY(v, src + 0x30);
        v[3] = 1.0f;
        r = func_00277610(m, v, flags | 4, 0);
        for (i = 0; i < *(int *)(m + 4); i++) {
            func_001282D0(p + i * 48 + 0x2C0, r + i * 48, 0x30);
        }
    }
}

void func_0021CA00(char *p, unsigned char k) {
    switch (k) {
    case 0:
        if (*(unsigned int *)(p + 0x2898) & 2) {
            float f = *(float *)(*(char **)(p + 0x283C) + 0x2C4);
            if (!((float)(unsigned int)*(unsigned char *)(p + 0x299F) <= f)) {
                *(unsigned char *)(p + 0x299F) = (unsigned int)f;
            }
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x299F) = 0;
        break;
    }
}
