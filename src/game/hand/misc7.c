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
void func_002CB900(char *, int);
extern float D_0059E5C0[];
void func_001A3BD0(char *, int, float, float);
extern char D_01DFABA0[];
void func_0043EEF0(char *, int);
void func_003305E0(char *, int, int, char *, int, int, int);
extern int D_0058B1B0[];
char *func_0027A710(char *);
void func_001A1F30(char *, int);
void func_001C6600(char *, int);
extern char D_0055C2C0[];
extern char D_0055C300[];
extern char D_0056F590[];
void func_0024D9F0(char *, char *, int, int, char *, char *, char *, char *, char *);

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

void func_002CB130(char *p) {
    int v;
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 0;
    *(unsigned char *)(p + 0x1E3) = 0;
    v = *(unsigned char *)(p + 0x2F21) == 0 ? 20 : 14;
    func_0024DA80(p + 0x2450, 0, v);
    func_0024DA80(p + 0x2520, 0, v);
    func_0024DA80(p + 0x25F0, 0, v);
    func_0024DA80(p + 0x26C0, 0, v);
    func_0024DA80(p + 0x2790, 0, v);
    func_002CB900(p, 0x21);
    *(unsigned char *)(p + 0x2CE4) = 0x21;
    *(unsigned char *)(p + 0x2CE5) = 0x21;
    *(unsigned char *)(p + 0x2CE6) = 0x21;
    *(unsigned char *)(p + 0x2CE7) = 0x21;
    *(unsigned char *)(p + 0x2CE8) = 0x21;
    func_00128488(p + 0x5AD, 0, 0x14);
}

void func_003564A0(char *p, unsigned char k, char *l) {
    int i;
    for (i = 0; i < *(int *)(l + 0x10); i++) {
        int v = *(int *)(l + i * 4 + 0x14);
        if (v != -1) {
            float *e = &D_0059E5C0[v * 2];
            func_001A3BD0(func_00279290(p + k * 0x600 + 0xC0), i, e[0], e[1]);
        }
    }
}

#define VMOVXYZ30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0043FD00(char *p, signed char k, int v) {
    float a[4];
    switch (k) {
    case 0:
        *(int *)(p + 0x7DC) = *(int *)(p + 0x7DC) + v;
        break;
    case 10:
    case 11:
    case 12:
        *(int *)(p + 0x7E0) = *(int *)(p + 0x7E0) + v;
        break;
    }
    func_0043EEF0(p, 1);
    VMOVXYZ30(a, *(char **)(*(char **)(p + 0x1B0) + 0x104));
    func_003305E0(D_01DFABA0, 8, 0x82, (char *)a, 0x2D, 0, 0);
}

void func_004CFBD0(char *p, int k, int b, int m) {
    switch (m) {
    case -1:
        func_0024DA80(*(char **)(p + 0xAB00), (unsigned char)k, b);
        func_0024DA80(*(char **)(p + 0xAB04), (unsigned char)k, b);
        break;
    case 0:
        func_0024DA80(*(char **)(p + 0xAB00), (unsigned char)k, b);
        break;
    case 1:
        func_0024DA80(*(char **)(p + 0xAB04), (unsigned char)k, b);
        break;
    }
}

void func_004D9AC0(char *p, int k) {
    int i;
    for (i = 0; i < 12; i++) {
        if (*(unsigned char *)(p + i + 0x580) == 1) {
            func_001A1F30(func_0027A710(p + 0xE0), D_0058B1B0[i]);
        }
    }
    if ((unsigned char)k == 1 && *(unsigned char *)(p + 0x57F) == 1) {
        func_003305E0(D_01DFABA0, 8, 0x8D, p + 0x50, 0x2C, 0, 0);
    }
}

void func_001C6520(char *p, int a, int b, unsigned long long c) {
    if (*(int *)(p + 0x15894) != a || *(int *)(p + 0x15890) != b || *(unsigned long long *)(p + 0x15888) != c) {
        char *q;
        func_001C6600(p, 0);
        q = *(char **)(p + 0x158A4);
        *(char **)(p + 0x158A4) = q + 0x10;
        *(char **)(p + 0x15898) = q;
        *(int *)(p + 0x15894) = a;
        *(int *)(p + 0x15890) = b;
        *(unsigned long long *)(p + 0x15888) = c;
    }
}

typedef struct { int w[13]; } s13t;
void func_00131760(float *, float *, float *);
void func_00104B80(char *, float *, float *);
float func_001F9C40(char *, int);
extern char D_01DF5D20[];
char *func_00210240(int);
void func_001A4240(char *, int, int, float, float);
int func_0024CD10(char *, unsigned int, int);

static inline char *sub24(char *q) {
    if (*(unsigned int *)(q + 4) < 8) {
        return 0;
    }
    if (*(int *)(q + 0x24) == 0) {
        return 0;
    }
    return q + *(int *)(q + 0x24);
}

void func_00333EF0(char *p) {
    char *h;
    char *a;
    func_0028C200(p + 0xED0, D_0055C2C0, D_0055C300, 2, D_0056F590, p, 0);
    h = *(char **)(p + 0x4D0);
    if (**(unsigned short **)(h + 8) == 0) {
        a = sub24(*(char **)(h + 0xC));
    } else {
        a = *(char **)(h + 0xC);
    }
    func_0024D9F0(p + 0xDF0, a, 0, 1, p + 0xEC0, p + 0x744, p + 0x660, p + 0xDE0, p + 0xED0);
}

void func_00356FC0(char *p, s13t s) {
    int i;
    float x;
    float y;
    for (i = 0; i < 6; i++) {
        int k = s.w[6 + i];
        if (k != -1) {
            x = D_0059E5C0[k * 2];
            y = D_0059E5C0[k * 2 + 1];
        } else {
            x = y = 0.0f;
        }
        func_001A3BD0(func_00279290(p + 0x6C0), i, x, y);
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_003DA7C0(char *p) {
    char *q;
    if (*(unsigned char *)(p + 0xEFC) != 1) {
        return;
    }
    q = *(char **)(p + 0x308);
    if (q == 0) {
        return;
    }
    if (*(unsigned char *)(q + 0x1CE1) != 1) {
        return;
    }
    switch (*(unsigned char *)(q + 0x1CE2)) {
    case 0:
        break;
    case 1:
        if (*(unsigned char *)(p + 0xF00) % 2 == 0) {
            *(unsigned char *)(p + 0xF0D) = 1;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0xF00) % 2 != 0) {
            *(unsigned char *)(p + 0xF0D) = 1;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0xF0D) = 1;
        break;
    case 4:
        *(unsigned char *)(p + 0xF0B) = 1;
        break;
    }
}

void func_003DB7E0(char *p) {
    float m[16];
    float r[4];
    float v[4];
    if (*(unsigned char *)(p + 0xEFD) == 8) {
        return;
    }
    *(float *)(p + 0xEC4) = 40.0f;
    *(unsigned char *)(p + 0xEFD) = 8;
    *(unsigned char *)(p + 5) = 0;
    UNIT(m);
    r[0] = -1.5707962f;
    r[3] = 1.0f;
    r[1] = 0.0f;
    r[2] = 0.0f;
    func_00131760(m, m, r);
    v[2] = 1.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_00104B80(p + 0x60, m, v);
    func_00131650(p + 0x60, p + 0x60);
    *(float *)(p + 0xEDC) = 4.0f;
    *(int *)(p + 0xEE0) = 0;
    *(unsigned char *)(p + 0x1E1) = 1;
}

static inline void set4(float *d, float a, float b, float c, float e) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}

void func_001A9F90(char *p, float *v) {
    float *m = (float *)(p + *(signed char *)(D_005BE0D8 + 0xE) * 128 + 0x1C0);
    m[0] = 0.0f;
    m[1] = 0.0f;
    m[2] = 0.0f;
    m[3] = 1.0f;
    m[4] = 0.0f;
    m[5] = 0.0f;
    m[6] = 0.0f;
    m[7] = 1.0f;
    m[8] = 0.0f;
    m[9] = 0.0f;
    m[10] = 0.0f;
    m[11] = 1.0f;
    QCOPY(m + 12, v);
    set4(m + 16, 0.0f, 0.0f, 0.0f, 0.0f);
    set4(m + 20, 0.0f, 0.0f, 0.0f, 0.0f);
    set4(m + 24, 0.0f, 0.0f, 0.0f, 0.0f);
    set4(m + 28, 0.0f, 0.0f, 0.0f, 1.0f);
}

short func_001F8640(char *p, unsigned char k, short id) {
    short i;
    unsigned short *t;
    if (k != 10) {
        t = *(unsigned short **)((char *)(k * 4) + (int)p + 0x2C);
        for (i = 0; i < t[0]; i++) {
            unsigned short v = t[i + 0x6401];
            if (v == id) {
                return i;
            }
        }
    } else {
        t = *(unsigned short **)((char *)(k * 4) + (int)p + 0x2C);
        for (i = 0; i < t[0]; i++) {
            unsigned short v = t[i + 0x8001];
            if (v == id) {
                return i;
            }
        }
    }
    return -1;
}

typedef struct { unsigned short a; unsigned short b; int c; int d; } ent12;

extern ent12 D_00546270[];
int func_0024C320(char *, char *, ent12 *, int);
void func_00330DA0(char *, int, int, char *);
int func_002DA0B0(char *);
void func_00131700(float *, float *, float *);
extern float D_0057B9A0[];
void func_00480E90(char *, int);
extern unsigned char D_01CAFF3D[];
void func_00252FA0(char *);
extern char D_005B74C0[];
extern char D_005B74E4[];
extern char D_005B7564[];
void func_0028C110(char *);
void func_002790E0(char *);
void func_0013D6A0(char *);
float func_001324E0(float *);
void func_00131D70(char *, char *);
extern float D_0058BBA0[];
void func_00198FE0(char *, int);
char *func_00199090(char *, char *);
void func_00199950(char *);
char *func_00198460(char *, char *);
char *func_00199100(char *, char *);
char *func_00199180(char *, char *);
char *func_00199BB0(char *, char *);
char *func_00199ED0(char *, char *);
char *func_0019AB70(char *, char *);
char *func_0019B530(char *, char *);
void func_0019A040(char *);
int func_001BE6F0(char *, float *, float *, float *);
void func_00132540(float *, float *, float);

void func_00233920(char *p) {
    float t = func_001F9C40(D_01DF5D20, 0x86);
    char *e = func_00210240(*(int *)(p + 0x200C));
    float s = *(float *)(e + 0xC) + *(float *)(e + 0x10);
    if (4680.0f < s && s < 5060.0f) {
        func_001A4240(func_00279290(p + 0x40), 0, 0, 0.00025f * t, 0.0f);
    } else {
        func_001A4240(func_00279290(p + 0x40), 0, 0, 0.0005f * t, 0.0f);
    }
}

void func_0024C230(char *p) {
    ent12 *q = D_00546270;
    unsigned int i;
    *(int *)(p + 0x49F0) = 0;
    *(int *)(p + 0x49F4) = 0;
    for (i = 0; i < 52; i++) {
        ent12 *e = q;
        int d = q->d;
        q++;
        if (e->a != 0 && (unsigned char)func_0024CD10(p, i, e->b) == 1 && (unsigned char)func_0024C320(p, p + i * 12 + 0x3E9C, e, d) == 1) {
            *(unsigned int *)(p + (i >> 5) * 4 + 0x49F0) |= 1 << (i & 31);
        }
    }
}

static inline signed char slot_find(char *p, signed char id) {
    unsigned int i;
    if (id != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == id) {
                return i;
            }
        }
    }
    return -1;
}

void func_002EE2E0(char *p, char *e, int u, float *v) {
    float m[16];
    if (*(int *)(p + 0x444) == -1) {
        return;
    }
    *(int *)(p + 0x444) = (int)((float)*(int *)(p + 0x444) - *(float *)(e + 4));
    if (*(int *)(p + 0x444) <= 0) {
        *(unsigned char *)(p + 0x496) = 1;
    } else if (*(signed char *)(e + 2) == 1) {
        func_00330DA0(D_01DFABA0, 1, *(int *)(p + 0x720), p + 0x480);
    } else {
        func_00330DA0(D_01DFABA0, 2, *(int *)(p + 0x720), p + 0x480);
    }
    UNIT(m);
    func_00105230(m, m, (char *)v);
    func_00207480(3, 0x1C, m, 0x20);
}

int func_002DA1B0(char *p, signed char id, unsigned char which) {
    signed char k;
    if ((unsigned char)func_002DA0B0(p) == 0) {
        k = slot_find(p, id);
        if (k != -1) {
            if (which == 0) {
        *(signed char *)(p + 0x3D4A) = k;
        *(signed char *)(p + 0x3D49) = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C);
    } else {
        *(signed char *)(p + 0x3D4B) = k;
        *(signed char *)(p + 0x3D49) = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C);
    }
            return 1;
        }
    }
    return 0;
}

static inline int clampS(int a, short lim) {
    if (a < lim) {
        return (short)a;
    }
    if (lim < -a) {
        return (short)-a;
    }
    return lim;
}

void func_003B5910(char *p, int a, int flag) {
    int d = clampS(a, *(short *)(p + 0x220E));
    if (*(float *)(p + 0x10) != 1.0f) {
        float r = 6.283185f * ((float)d / 65536.0f);
        if (!flag) {
            r *= *(float *)(p + 0x10);
        }
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * r / 6.283185f);
    }
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
}

void func_003B4D80(char *p, int a, int flag) {
    int d = clampS(a, *(short *)(p + 0x2186));
    if (*(float *)(p + 0x10) != 1.0f) {
        float r = 6.283185f * ((float)d / 65536.0f);
        if (!flag) {
            r *= *(float *)(p + 0x10);
        }
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * r / 6.283185f);
    }
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
}

void func_003A0CD0(char *p, int a) {
    int d;
    if (a == 0) {
        return;
    }
    d = clampS(a, *(short *)(p + 0x2DEC));
    if (*(float *)(p + 0x10) != 1.0f) {
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * (6.283185f * ((float)d / 65536.0f) * *(float *)(p + 0x10)) / 6.283185f);
    }
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
}

void func_00472080(char *p) {
    float m[16];
    float r[4];
    UNIT(m);
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    func_00104B80(p + 0x480, m, D_0057B9A0 + *(int *)(p + 0x46C) * 4);
    *(float *)(p + 0x480) = *(float *)(p + 0x480) + *(float *)(p + 0x50);
    *(float *)(p + 0x484) = *(float *)(p + 0x484) + *(float *)(p + 0x54);
    *(float *)(p + 0x488) = *(float *)(p + 0x488) + *(float *)(p + 0x58);
    *(float *)(p + 0x48C) = 1.0f;
}

void func_00481B70(char *p, char *e, int c) {
    float d;
    if (e != 0 && c != 0) {
        if (*(signed char *)(p + 0x287) != 4) {
            d = *(float *)(e + 4);
            func_00480E90(p, 0);
            *(float *)(p + 0x2AC) = *(float *)(p + 0x2AC) + d;
            *(float *)(p + 0x29C) = *(float *)(p + 0x29C) - d;
            *(float *)(p + 0x2A8) = 0.0f;
            if (*(float *)(p + 0x29C) < 0.0f || D_01CAFF3D[0] != 0) {
                *(float *)(p + 0x29C) = -1.0f;
                *(unsigned char *)(p + 0x282) = 1;
            } else {
                *(unsigned char *)(p + 0x283) = 1;
                *(float *)(p + 0x2AC) = 0.0f;
            }
        }
        func_003305E0(D_01DFABA0, 8, 0x65, p + 0x50, 0x28, 0, 0);
    }
}

char *func_0048C820(char *p) {
    char *q;
    func_00252FA0(p);
    *(char **)p = D_005B74C0;
    *(char **)(p + 0x40) = D_005B74E4;
    *(char **)(p + 0xA0) = D_005B7564;
    func_0028C110(p + 0x1B0);
    func_002790E0(p + 0x4C0);
    func_002790E0(p + 0xAC0);
    q = p + 0x10C0;
    *(float *)(p + 0x10C8) = 0.3f;
    *(float *)(p + 0x10CC) = 0.98f;
    *(float *)(p + 0x10D0) = 0.95f;
    *(float *)(p + 0x10D4) = 50.0f;
    *(float *)(p + 0x10E0) = 0.0f;
    *(float *)(p + 0x10E4) = -0.1f;
    *(float *)(p + 0x10E8) = 0.0f;
    *(float *)(p + 0x10EC) = 0.0f;
    *(int *)(p + 0x10C4) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)q = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(float *)(q + 0x50) = 0.0f;
    *(float *)(q + 0x54) = 0.0f;
    *(float *)(q + 0x58) = 0.0f;
    *(float *)(q + 0x5C) = 0.0f;
    *(float *)(q + 0x60) = 0.0f;
    *(float *)(q + 0x68) = 1.0f;
    return p;
}

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_004DCE00(char *p) {
    float v[4];
    float u[4];
    float d;
    float e;
    QCOPYR(v, p + 0xFA0);
    v[1] = 0.0f;
    v[3] = 0.0f;
    VADDR54(p + 0xCE0, p + 0xCE0, v);
    QCOPY(u, v);
    d = func_001324E0(u);
    if (!(d <= 0.0f)) {
        u[0] = u[0] / d;
        u[2] = u[2] / d;
        e = func_00132630(u, p + 0xD80);
        *(float *)(p + 0xD80) = *(float *)(p + 0xD80) - 1.8f * (u[0] * e);
        *(float *)(p + 0xD88) = *(float *)(p + 0xD88) - 1.8f * (u[2] * e);
    }
}

void func_004F73C0(char *p, unsigned char k) {
    float m[16];
    float r[4];
    if (k == 0) {
        UNIT(m);
        r[0] = 0.0f;
        r[1] = 0.0f;
        r[2] = 0.0f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        func_00104B80(p + 0xBE0, m, D_0058BBA0 + *(int *)(p + 0xBA8) * 4);
        *(float *)(p + 0xF0) = *(float *)(p + 0xBE0);
        *(float *)(p + 0xF4) = *(float *)(p + 0xBE4);
        *(float *)(p + 0xF8) = *(float *)(p + 0xBE8);
        *(float *)(p + 0xFC) = 1.0f;
    } else {
        VSUBR54(p + 0xF0, p + 0xBD0, p + 0x50);
        func_00131650(p + 0xF0, p + 0xF0);
    }
    func_00131D70(p + 0x80, p + 0xF0);
}

void func_00199740(char *p, char *buf, int a) {
    char *c;
    char *n;
    func_00198FE0(p, a);
    n = func_00199090(p, buf);
    func_00199950(p);
    c = func_00198460(p, n);
    c = func_00199100(p, c);
    c = func_00199180(p, c);
    c = func_00199BB0(p, c);
    c = func_00199ED0(p, c);
    switch (*(unsigned int *)(p + 0xA0) & 0xF0000000) {
    case 0x10000000:
        c = func_0019AB70(p, c);
        break;
    case 0x20000000:
        c = func_0019B530(p, c);
        break;
    }
    *(int *)(p + 0xB0) = ((int)(c + 15) & -16) - (int)buf;
    func_0019A040(p);
}

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { float x; float y; float z; float w; } cf4;

typedef struct { cf4 c; float r; } sph5;
extern int D_005BE17C;
extern int D_005BE174;
extern int D_005BE180;
extern char D_01DF95C0[];
extern char D_01DF9604[];
extern char D_005588A0[];
void func_0010F9C0(char *);
void func_00130990(char *, int);
void func_00206730(char *);
float func_0011DBE0(float, float);

int func_001C0040(char *a, float *b, char *c, float *out) {
    float s[8];
    sph5 t;
    float tmp[4];
    QCOPY(s, c);
    QCOPY(s + 4, c + 0x10);
    t.c = ((sph5 *)b)->c;
    t.r = b[4];
    t.r = t.r + *(float *)(c + 0x20);
    if ((unsigned char)func_001BE6F0(a, s, (float *)&t, out) == 0) {
        return 0;
    }
    VSUB(tmp, b, out);
    func_00132540(tmp, tmp, *(float *)(c + 0x20));
    VADDIP(out, tmp);
    return 1;
}

int func_0023F760(char *p) {
    switch (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C)) {
    case 5:
        *(signed char *)(p + 0x3BA1) = 5;
        return 1;
    case 6:
        *(signed char *)(p + 0x3BA1) = 6;
        return 1;
    case 7:
        *(signed char *)(p + 0x3BA1) = 7;
        return 1;
    case 8:
        *(signed char *)(p + 0x3BA1) = 8;
        return 1;
    case 9:
        *(signed char *)(p + 0x3BA1) = 9;
        return 1;
    }
    if (slot_find(p, 5) != -1) {
        *(signed char *)(p + 0x3BA1) = 5;
    }
    return 1;
}

int func_002FA530(int type, char *src, int len) {
    if (D_005BE17C == 32) {
        func_0010F9C0(D_005588A0);
        return -1;
    }
    {
        int i = D_005BE174;
        *(int *)(D_01DF95C0 + i * 0x48) = type;
        *(int *)(D_01DF9604 + i * 0x48) = len;
        func_00128488(D_01DF95C0 + i * 0x48 + 4, 0, 0x40);
    }
    func_001282D0(D_01DF95C0 + D_005BE174 * 0x48 + 4, src, len);
    D_005BE174 = (D_005BE174 + 1) & 0x1F;
    D_005BE17C++;
    if (type == 3) {
        D_005BE180++;
    }
    return D_005BE17C;
}

void func_00195F60(char *p) {
    unsigned int i;
    unsigned int s;
    for (i = 0; i < (unsigned int)(*(int *)(p + 0xC318) / 32); i++) {
        *(unsigned char *)(p + i + 0x2000) = 0;
    }
    if (*(int *)(p + 0xC314) != 0) {
        s = (*(int *)(p + 0xC310) - *(unsigned short *)(D_005BE0D8 + 0x4C)) / 32;
        for (i = s; i < s + *(int *)(p + 0xC314) / 32; i++) {
            *(unsigned char *)(p + i + 0x2000) = 0xFF;
        }
    }
    func_00130990(p, 0x800);
}

typedef struct { int w[4]; } __attribute__((aligned(16))) q16t;

extern q16t D_0058B9E0;
void func_00133890(char *, char *, q16t *);
void func_001A49D0(char *, int, int, int);
void func_00104C00(char *, char *, float *);
char *func_00198710(char *, char *, int);
void func_0019C480(char *, char *);
void func_00199580(char *, int, int);
void func_001996C0(char *);
int func_00352CA0(void);
long long func_0011EF60(int, int);
extern float D_0057B8F0[];
extern float D_0058B450[];
void func_0050DB70(char *, float *, int);
int func_0020AC40(char *, char *);
int func_0020CFA0(char *);
void func_0020F700(char *, short, int);
unsigned char func_00226820(char *, int, int, int);
void func_0024DB10(char *, int, int, int, int, int, int);
void func_00249D50(char *);
void func_00249A00(char *, int);
extern int *D_00554060[];
float func_00132470(char *, char *);
void func_0024BBC0(char *, char *, char *, float *, float);
int func_001FF610(float *);
void func_001323A0(float *);
extern int D_01CAFF14[];
extern int D_01CAF560[];
extern char D_01CAF520[];
void func_001AA080(char *, int, int);
void func_001A2710(char *, int);
int func_002E7690(char *, int);
void func_001A5DB0(char *, int);
void func_001A5DE0(char *);
extern signed char D_00666717[];

void func_004E91F0(char *p) {
    float t;
    q16t up;
    func_00206730(p + 0x460);
    t = *(float *)(p + 0x10);
    t = *(float *)(p + 0x464) - t;
    *(float *)(p + 0x464) = t;
    if (t < 0.0f) {
        *(unsigned char *)(p + 4) = 3;
        return;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    up = D_0058B9E0;
    func_00133890(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}

void func_001A4770(char *p, unsigned int k, int x, int y) {
    char *e;
    int i;
    if (k < *(unsigned short *)(p + 0xA8)) {
        float s = *(float *)(p + 0x1B0);
        if (s != 1.0f) {
            if (x != 0) {
                x = (int)((float)x * s);
            }
            if (y != 0) {
                y = (int)((float)y * s);
            }
        }
        e = *(char **)(p + 0xBC) + k * 0x380;
        for (i = 0; i < *(unsigned char *)(e + 0xC); i++) {
            func_001A49D0(e, *(int *)(*(char **)(e + 0x1C) + i * 0x150 + 8), x, y);
        }
    }
}

void func_004BC390(char *p) {
    float r[4];
    float m[16];
    *(float *)(p + 0x3B0) = 3.0f;
    func_00207480(3, 0x251, (float *)(p + 0x370), 8);
    {
        float a = (float)(unsigned int)*(unsigned char *)(p + 0x3B4);
        r[1] = 0.0f;
        r[2] = 0.0f;
        r[0] = 6.283185f * ((20.0f * a) / 360.0f);
        r[3] = 1.0f;
    }
    UNIT(m);
    func_00131700(m, m, r);
    func_00104C00(p + 0x370, p + 0x370, m);
    func_00207480(3, 0x391, (float *)(p + 0x370), 8);
    *(unsigned char *)(p + 4) += 1;
    *(unsigned char *)(p + 5) = 0;
}

void func_00199840(char *p, char *buf, int k, int a) {
    char *c;
    char *n;
    func_00198FE0(p, a);
    n = func_00199090(p, buf);
    func_00199950(p);
    c = func_00198710(p, n, k);
    c = func_00199100(p, c);
    c = func_00199180(p, c);
    c = func_00199BB0(p, c);
    c = func_00199ED0(p, c);
    switch (*(unsigned int *)(p + 0xA0) & 0xF0000000) {
    case 0x10000000:
        c = func_0019AB70(p, c);
        break;
    case 0x20000000:
        c = func_0019B530(p, c);
        break;
    }
    *(int *)(p + 0xB0) = ((int)(c + 15) & -16) - (int)buf;
    func_0019A040(p);
}

char *func_0019C360(char *p, char *buf) {
    int i;
    for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
        char *e = *(char **)(p + 0xBC) + i * 0x380;
        int j;
        *(char **)(e + 0x1C) = buf;
        buf += *(unsigned char *)(e + 0xC) * 0x150;
        func_0019C480(p, e);
        for (j = 0; j < *(unsigned char *)(e + 0xC); j++) {
            char *s = *(char **)(e + 0x1C) + j * 0x150;
            *(int *)(e + 8) += *(int *)(s + 4);
            func_00199580(s, *(int *)(p + 0xC8), *(int *)(e + 0x14));
            func_001996C0(s);
        }
    }
    return buf;
}

void func_0032F910(short *p, char *e) {
    int n;
    if (*(unsigned short *)(e + 0x18) != 0) {
        n = *(unsigned short *)(e + 0x18);
        if (n < 0) {
            n = 0;
        }
        if (n > 0x2000) {
            n = 0x2000;
        }
        *(unsigned short *)p |= 0x8000;
        p[7] += func_0011EF60(func_00352CA0(), n * 2) - n;
    }
    if (*(unsigned short *)(e + 0x1A) != 0) {
        n = *(unsigned short *)(e + 0x1A);
        if (n < 0) {
            n = 0;
        }
        if (n > 0x7F) {
            n = 0x7F;
        }
        p[4] += func_0011EF60(func_00352CA0(), n * 2) - n;
        if (p[4] < 0) {
            p[4] = 0;
        }
        if (p[4] > 0x7F) {
            p[4] = 0x7F;
        }
    }
}

void func_00471F60(char *p, unsigned char k) {
    float m[16];
    float r[4];
    if (k == 0) {
        UNIT(m);
        r[0] = 0.0f;
        r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        r[2] = 0.0f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        func_00104B80(p + 0x4A0, m, D_0057B8F0 + *(int *)(p + 0x46C) * 4);
        *(float *)(p + 0xF0) = *(float *)(p + 0x4A0);
        *(float *)(p + 0xF4) = *(float *)(p + 0x4A4);
        *(float *)(p + 0xF8) = *(float *)(p + 0x4A8);
        *(float *)(p + 0xFC) = 1.0f;
    } else {
        VSUBR54(p + 0xF0, p + 0x490, p + 0x50);
        func_00131650(p + 0xF0, p + 0xF0);
    }
    func_00131D70(p + 0x80, p + 0xF0);
}

void func_004E3550(char *p, unsigned char k) {
    float m[16];
    float r[4];
    if (k == 0) {
        UNIT(m);
        r[0] = 0.0f;
        r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        r[2] = 0.0f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        func_00104B80(p + 0x670, m, D_0058B450 + *(int *)(p + 0x638) * 4);
        *(float *)(p + 0xF0) = *(float *)(p + 0x670);
        *(float *)(p + 0xF4) = *(float *)(p + 0x674);
        *(float *)(p + 0xF8) = *(float *)(p + 0x678);
        *(float *)(p + 0xFC) = 1.0f;
    } else {
        VSUBR54(p + 0xF0, p + 0x660, p + 0x50);
        func_00131650(p + 0xF0, p + 0xF0);
    }
    func_00131D70(p + 0x80, p + 0xF0);
}

int func_0050DA50(char *o, char *m, int c) {
    float w[4];
    float v[4];
    float r[4];
    float mm[16];
    int i;
    if (o == 0) {
        return 0;
    }
    v[0] = -54.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    func_00104B80((char *)w, (float *)m, v);
    w[3] = 1.0f;
    UNIT(mm);
    r[0] = -1.5707963f;
    r[3] = 1.0f;
    r[1] = 0.0f;
    r[2] = 0.0f;
    func_00131700(mm, mm, r);
    func_00105230(mm, mm, (char *)w);
    func_00207480(3, 0x394, mm, 8);
    for (i = 0; i < 2; i++) {
        func_0050DB70(o, w, c);
    }
    return 1;
}

void func_00209D00(char *p, unsigned int k) {
    *(int *)(p + 0xC) = *(int *)(p + 4);
    {
    unsigned int *q;
    unsigned int t;
    q = *(unsigned int **)(p + 0xC);
    t = *q;
    while ((t & 0xFF) != 1) {
        if ((t & 0xFF) == 7 && k == q[1]) {
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
            return;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
        q = *(unsigned int **)(p + 0xC);
        t = *q;
    }
    }
    if (*(int *)(p + 8) != 0) {
        *(int *)(p + 0xC) = *(int *)(p + 8);
        {
        unsigned int *q;
        unsigned int t;
        q = *(unsigned int **)(p + 0xC);
        t = *q;
        while ((t & 0xFF) != 1) {
            if ((t & 0xFF) == 7 && k == q[1]) {
                *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
                return;
            }
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
            q = *(unsigned int **)(p + 0xC);
            t = *q;
        }
        }
    }
    *(int *)(p + 0xC) = 0;
}

void func_0020CE70(char *a, char *s) {
    *(float *)(s + 8) = *(float *)(s + 8) + func_001F9C40(D_01DF5D20, 0x87);
    if (*(int *)s == 0) return;
    while (**(unsigned char **)(s + 4) != 0xE) {
        switch (func_0020AC40(a, s + 4)) {
        case 1: return;
        case 2: return;
        case -1:
            switch (func_0020CFA0(s)) {
            case 1: return;
            case 2: return;
            case -1: break;
            }
            break;
        }
        *(int **)(s + 4) = *(int **)(s + 4) + ((**(int **)(s + 4) >> 8 & 0xFF) + 1);
    }
    *(int *)s = 0;
    *(int *)(s + 4) = *(int *)s;
    *(int *)(s + 8) = 0;
}

static inline void setb2(char *p, short s) {
    int b = 1 << (s & 0x1F);
    char *w = (char *)((s / 32) * 4) + (int)p;
    *(unsigned int *)(w + 0x680) |= b;
    *(unsigned int *)(w + 0x688) |= b;
}

void func_0020F5D0(char *p, int c0, int k) {
    short c;
    int t;
    short s;
    if (k != -1) {
        t = k >> 16;
        s = k & 0xFFFF;
        switch (t) {
        case 0:
            ((unsigned int *)(p + 0x108))[s / 32] |= 1 << (s & 0x1F);
            break;
        case 1:
            ((unsigned int *)(p + 0x618))[s / 32] |= 1 << (s & 0x1F);
            break;
        case 2:
            break;
        }
    }
    c = (signed char)c0;
    func_0020F700(p, c, 1);
    setb2(p, c);
}

void func_00249370(float f, char *p, int a, int b, int c, int d, int e) {
    if (func_00226820(p, 1, a, b) == 1) {
        *(unsigned char *)(p + 0x24CF) = 1;
        d = 0;
        e = 0;
    }
    func_0024DB10(p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x41F0, a, b, (int)f, c, d, e);
    *(unsigned short *)(p + 0x24C6) = (a << 8) | (b & 0xFF);
    func_00249D50(p);
    func_00249A00(p, 1);
    *(int *)(p + 0x4864) = D_00554060[*(signed char *)(p + 0x46)][a];
}

int func_0024A540(char *a, char *p, char *q) {
    float v[4] __attribute__((aligned(16)));
    float d;
    float r;
    d = func_00132470(p + 0xD0, q + 0xD0);
    r = *(float *)(p + 0x130) + *(float *)(q + 0x130);
    if (d < 0.001f) {
        __asm__ volatile("lqc2 $vf4, 0x20(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x20), "r"(v) : "memory");
        v[1] = 0.0f;
        v[3] = 0.0f;
        func_00131650((char *)v, (char *)v);
        func_0024BBC0(a, p, q, v, r);
        return 1;
    }
    if (d < r) {
        r = r - d;
        VSUB(v, q + 0xD0, p + 0xD0);
        v[1] = 0.0f;
        v[3] = 0.0f;
        func_00131650((char *)v, (char *)v);
        func_0024BBC0(a, p, q, v, r);
        return 1;
    }
    return 0;
}

void func_0024A670(float f, char *a, char *p, char *q, float *s, int t) {
    float v[4] __attribute__((aligned(16)));
    t = (t != -1) ? t : func_001FF610(s);
    switch (t) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(s) : "memory");
        v[1] = 0.0f;
        func_001323A0(v);
        func_0024BBC0(a, p, q, v, f);
        break;
    case 1:
        func_0024BBC0(a, p, q, s, f);
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(s) : "memory");
        v[0] = v[2] = 0.0f;
        func_001323A0(v);
        func_0024BBC0(a, p, q, v, f);
        break;
    }
}

static inline void set13c(char *p, unsigned int i, int v) {
    if (i < *(unsigned short *)(p + 0xE8))
        *(int *)(*(char **)(p + 0xFC) + i * 0x340 + 0x13C) = v;
}

void func_00279FA0(char *p, int a) {
    int v;
    int i;
    if (*(unsigned char *)(p + 10) == 0) return;
    if (*(unsigned char *)(p + 0x5C0) == 0) func_001AA080(p + 0x40, D_01CAFF14[0], *(int *)(p + 0x5C4));
    if (*(unsigned char *)(p + 0x5C8) == 0) {
        func_001A2710(p + 0x40, D_01CAF560[0]);
        *(int *)(p + 0x5CC) = func_002E7690(D_01CAF520, a);
        v = *(int *)(p + 0x5CC);
        *(int *)(p + 0x1EC) = v;
        for (i = 0; (int)i < *(unsigned short *)(p + 0xE8); i++) {
            set13c(p, i, v << 4);
        }
    }
    if (*(unsigned char *)(p + 0xB) != 0) {
        func_001A5DE0(p + 0x40);
    } else if (*(unsigned char *)(p + 0x5C1) == 0) {
        func_001A5DB0(p + 0x40, a);
    } else {
        func_001A5DE0(p + 0x40);
    }
}

void func_00388220(char *p) {
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float l;
    float d;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0xFA0), "r"(v) : "memory");
    v[1] = 0.0f;
    v[3] = 0.0f;
    if ((unsigned char)*(unsigned char *)(p + 5) != 3 || *(float *)(p + 0xCA4) <= *(float *)(p + 0xD74)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xCE0), "r"(p + 0xCE0), "r"(v) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(w), "r"(v) : "memory");
        l = func_001324E0(w);
        if (!(l <= 0.0f)) {
            w[0] = w[0] / l;
            w[1] = w[1] / l;
            w[2] = w[2] / l;
            d = func_00132630(w, p + 0xD80);
            *(float *)(p + 0xD80) = *(float *)(p + 0xD80) - 1.8f * (w[0] * d);
            *(float *)(p + 0xD88) = *(float *)(p + 0xD88) - 1.8f * (w[2] * d);
        }
    }
}

typedef struct { float a; float b; } F2;

extern F2 D_005A0020[];
void func_00105760(float, float *, float *);
int func_002018A0(char *, char *, char *, float *, char *, int);
void func_00133450(float *, float *, float *);
char *func_00207470(int, int, float *);
void func_0024D6A0(char *, int, int);
void func_0048B020(char *);
void func_0021CC70(char *, float);
int func_0024D6B0(char *, unsigned char *);
void func_0041D670(char *);
void func_0048BF50(char *, float);
void func_00100450(char *, void *, void *, int, int);
void func_001AAD30();
void func_0013D240();
void func_0022C820(char *);
void func_0022B5A0(char *);
extern char D_005BA850[];
extern char D_005BA874[];
extern char D_005BA8F4[];
extern char D_005A77A0[];
extern char D_005A78F8[];
int func_002101A0(char *, float);

void func_003B7720(char *p) {
    int i;
    unsigned int n;
    F2 *e;
    for (i = 0; i < 2; i++) {
        n = D_00666717[0] < 0 ? -D_00666717[0] : D_00666717[0];
        e = &D_005A0020[n / 10];
        func_001A3BD0(func_00279290(p + 0x640), 1, e->a, e->b);
        e = &D_005A0020[n % 10];
        func_001A3BD0(func_00279290(p + 0x640), 2, e->a, e->b);
        if (D_00666717[0] < 0) func_001A1E70(func_00279290(p + 0x640), 3);
        else func_001A2000(func_00279290(p + 0x640), 3);
    }
}

void func_004513B0(char *p, char *a, char *b) {
    float v[4] __attribute__((aligned(16)));
    if (a != 0 && b != 0 && *(unsigned char *)(p + 0xEB) == 1) {
        ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] -= *(float *)(a + 4);
        if (((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] < 0.0f || D_01CAFF3D[0] != 0) {
            ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] = -1.0f;
            *(unsigned char *)(p + 0xE5) = 1;
        } else {
            *(unsigned char *)(p + 0xE6) = 1;
        }
        func_00207480(1, 0x573, (float *)(p + *(unsigned char *)(p + 0xEA) * 0x40 + 0x120), 0x40);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + *(unsigned char *)(p + 0xEA) * 0x40 + 0x120) : "memory");
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0xB, (char *)v, 0x29, 0, 0);
    }
}

void func_003591E0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    if (*(float *)(p + 0x108) <= 0.0f) {
        if (*(unsigned char *)(p + 0xCD) == 0) {
            *(float *)(*(char **)(p + 0x10) + 0x34) += -0.54f * *(float *)(p + 0xB0);
            *(float *)(*(char **)(p + 0x10) + 0x34) += *(float *)(*(char **)(p + 0xA8) + 0x24);
            if (!(*(float *)(*(char **)(p + 0x10) + 0x34) <= 0.0f)) *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) += *(float *)(*(char **)(p + 0x10) + 0x34);
        }
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(*(char **)(p + 0x10) + 0x20) : "memory");
        func_00105760(6.283185f * (*(short *)(*(char **)(p + 0x10) + 0x50) / 65536.0f), r, m);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(r) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(v) : "memory");
    }
}

void func_003A9A80(char *p) {
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[0] = -2.457f;
    v[2] = -39.76f;
    v[1] = 0.0f;
    v[3] = 1.0f;
    r[0] = 0.0f;
    r[1] = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    r[3] = 1.0f;
    r[2] = 0.0f;
    UNIT(m);
    func_00131700(m, m, r);
    func_00104B80((char *)v, m, v);
    *(float *)(p + 0x50) = *(float *)(g + 0x50) + v[0];
    *(float *)(p + 0x54) = *(float *)(g + 0x54) + v[1];
    *(float *)(p + 0x58) = *(float *)(g + 0x58) + v[2];
    *(float *)(p + 0x5C) = 1.0f;
    *(short *)(g + 0x90) = *(short *)(p + 0x90) + 0x8001;
    *(float *)(g + 0x84) = 6.283185f * (*(short *)(g + 0x90) / 65536.0f);
}

void func_003CCDF0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    if (*(float *)(p + 0x108) <= 0.0f) {
        if (*(unsigned char *)(p + 0xCD) == 0) {
            *(float *)(*(char **)(p + 0x10) + 0x34) += -0.54f * *(float *)(p + 0xB0);
            *(float *)(*(char **)(p + 0x10) + 0x34) += *(float *)(*(char **)(p + 0xA8) + 0x24);
            if (!(*(float *)(*(char **)(p + 0x10) + 0x34) <= 0.0f)) *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) += *(float *)(*(char **)(p + 0x10) + 0x34);
        }
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(*(char **)(p + 0x10) + 0x20) : "memory");
        func_00105760(6.283185f * (*(short *)(*(char **)(p + 0x10) + 0x50) / 65536.0f), r, m);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(r) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(v) : "memory");
    }
}

void func_003BA170(char *p, float *s, int f) {
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    if (s != 0) {
        if ((unsigned char)f == 1) {
            UNIT(m);
            if (*(unsigned char *)(p + 0x1B4)) {
                r[0] = 0.0f;
                r[1] = 6.283185f * (*(short *)(*(char **)(p + 0x1DC) + 0x90) / 65536.0f);
                r[3] = 1.0f;
                r[2] = 0.0f;
            } else {
                r[0] = 0.0f;
                r[1] = 0.0f;
                r[3] = 1.0f;
                r[2] = 0.0f;
            }
            func_00131700(m, m, r);
            func_00104B80(p + 0x50, m, s);
        } else {
            *(float *)(p + 0x50) = s[0];
            *(float *)(p + 0x54) = s[1];
            *(float *)(p + 0x58) = s[2];
        }
    } else {
        *(float *)(p + 0x50) = 0.0f;
        *(float *)(p + 0x54) = 0.0f;
        *(float *)(p + 0x58) = 0.0f;
    }
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x200) = *(float *)(p + 0x50);
    *(float *)(p + 0x204) = *(float *)(p + 0x54);
    *(float *)(p + 0x208) = *(float *)(p + 0x58);
    *(float *)(p + 0x20C) = 1.0f;
}

void func_003D0790(char *p, unsigned char k) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    char *e = (char *)(k * 0x720) + (int)p;
    t[0] = *(float *)(e + 0x560);
    t[1] = *(float *)(e + 0x564);
    t[2] = *(float *)(e + 0x568);
    t[3] = 1.0f;
    r[0] = 6.283185f * (*(float *)(e + 0x570) / 360.0f);
    r[1] = 6.283185f * (*(float *)(e + 0x574) / 360.0f);
    r[2] = 6.283185f * (*(float *)(e + 0x578) / 360.0f);
    r[3] = 1.0f;
    UNIT(e + 0x520);
    func_00131700((float *)(p + k * 0x720 + 0x520), (float *)(p + k * 0x720 + 0x520), r);
    func_00105230((float *)(p + k * 0x720 + 0x520), (float *)(p + k * 0x720 + 0x520), (char *)t);
}


void func_00497090(char *p) {
    float m[16] __attribute__((aligned(16)));
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    if (*(float *)(p + 0x108) <= 0.0f) {
        if (*(unsigned char *)(p + 0xCD) == 0) {
            *(float *)(*(char **)(p + 0x10) + 0x34) += -0.54f * *(float *)(p + 0xB0);
            *(float *)(*(char **)(p + 0x10) + 0x34) += *(float *)(*(char **)(p + 0xA8) + 0x24);
            if (!(*(float *)(*(char **)(p + 0x10) + 0x34) <= 0.0f)) *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) += *(float *)(*(char **)(p + 0x10) + 0x34) * *(float *)(p + 0xB0);
        }
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(*(char **)(p + 0x10) + 0x20) : "memory");
        func_00105760(6.283185f * (*(short *)(*(char **)(p + 0x10) + 0x50) / 65536.0f), r, m);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(r) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(v) : "memory");
    }
}

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

static inline void func_00221240_h(char *p, short d, signed char v) {
    if (!(d < -0x2000 || d > 0x2000)) {
        *(signed char *)(p + 0x3B9F) = 0;
    } else if (d < -0x5FFF) {
        *(signed char *)(p + 0x3B9F) = 2;
    } else if (d >= 0x6000) {
        *(signed char *)(p + 0x3B9F) = v;
    } else if (0 > d) {
        *(signed char *)(p + 0x3B9F) = 1;
    } else {
        *(signed char *)(p + 0x3B9F) = 4;
    }
}

signed char func_00221240(char *p) {
    short d = *(short *)(p + 0x3BA2) - *(short *)(p + 0x28DC);
    if (*(unsigned char *)(p + 0x28A5) == 2) {
        return *(signed char *)(p + 0x3B9F) = 5;
    }
    if (*(signed char *)(p + 0x3D49) == 5 || *(unsigned char *)(p + 0x28A7) != 0) {
        func_00221240_h(p, d, 3);
    } else {
        func_00221240_h(p, d, 2);
    }
    return *(signed char *)(p + 0x3B9F);
}

void func_004227D0(char *p) {
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

static inline void func_004F6850_v(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

static inline void func_004F6850_w(float *v, float x, float y) {
    v[0] = x;
    v[1] = y;
}

char *func_004F6850(char *p) {
    func_00252FA0(p);
    *(char **)p = D_005BA850;
    *(char **)(p + 0x40) = D_005BA874;
    *(char **)(p + 0xA0) = D_005BA8F4;
    func_00100450(p + 0x154, (void *)func_001AAD30, (void *)func_0013D240, 16, 7);
    func_002790E0(p + 0x200);
    {
        char *q = p + 0x820;
        *(char **)(p + 0x830) = D_005A77A0;
        func_0022C820(q);
        *(char **)(q + 0x10) = D_005A78F8;
        func_0022B5A0(q);
    }
    func_0028C110(p + 0x920);
    UNIT(p + 0x8E0);
    *(int *)(p + 0xBA0) = 0;
    *(int *)(p + 0xBA4) = 0;
    *(int *)(p + 0xBA8) = 0;
    func_004F6850_w((float *)(p + 0xBAC), 0.0f, 0.0f);
    *(short *)(p + 0x90) = 0;
    func_004F6850_v((float *)(p + 0xBC0), 0.0f, 0.0f, 0.0f, 1.0f);
    func_004F6850_v((float *)(p + 0xBD0), 0.0f, 0.0f, 0.0f, 1.0f);
    func_004F6850_v((float *)(p + 0xBE0), 0.0f, 0.0f, 0.0f, 1.0f);
    *(unsigned char *)(p + 0xBF0) = 1;
    return p;
}

typedef struct { short n; char x[0x16]; } T18;

extern T18 D_00541CE0[];
extern float D_00578C14[];
unsigned char func_002077F0(int);
void func_00358740(char *, int);
void func_001A2050(char *);
void func_003587C0(char *);
void func_003587A0(char *);
extern char D_00542C80[];

int func_00210850(float f, char *o, int k, char **out) {
    int i;
    int c = 0;
    char *e;
    char *s;
    *out = 0;
    for (i = 0; i < D_00541CE0[*(unsigned char *)(o + 6)].n; i++) {
        e = *(char **)(o + 0x24) + i * 16;
        if (*(int *)e != 0) {
            s = *(char **)(e + 4);
            switch (*(unsigned char *)s) {
            case 0:
                break;
            case 1:
            case 2:
            case 4:
            case 3:
                if ((unsigned char)func_002101A0(s, f) == 1) {
                    if (k == c) {
                        *out = s;
                    }
                    c++;
                }
                break;
            default:
                return 0;
            }
        }
    }
    return c;
}

int func_00458210(char *p) {
    float m[16] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    UNIT(m);
    switch ((unsigned char)*(unsigned char *)(p + 0x3D4)) {
    case 0:
        break;
    case 1:
        r[0] = 0.0f;
        r[1] = (float)*(short *)(p + 0x3D6) / 65536.0f * 6.283185f;
        r[2] = D_00578C14[*(unsigned char *)(p + 0x3D1) * 2] / 360.0f * 6.283185f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        break;
    }
    *(char **)(p + 0x508) = func_00207480(3, 0x1AE, m, 0x10);
    {
        char *o = *(char **)(p + 0x508);
        if (o == 0) return 0;
        *(char **)(o + 0x90) = p + 0x440;
        *(unsigned char *)(o + 0x9A) = 1;
    }
    switch (*(unsigned char *)(p + 0x3D4)) {
    case 0:
        *(char **)(p + 0x50C) = func_00207480(3, 0x321, 0, 0x10);
        {
            char *o = *(char **)(p + 0x50C);
            if (o == 0) return 0;
            *(char **)(o + 0x90) = p + 0x4C0;
            *(unsigned char *)(o + 0x9A) = 1;
        }
        break;
    case 1:
        break;
    }
    return 1;
}

void func_0032E640(char *p) {
    int i;
    int j;
    int m;
    unsigned char k;
    for (i = 0; i < 2; i++) {
        func_00206730(p + 0x84 + i * 4);
    }
    k = *(unsigned char *)(p + 0xA0);
    if (((unsigned int)(k - 1) <= 1 || k == 3) && *(int *)(p + 0xB8) != 0) {
        for (j = 0; j < *(unsigned char *)(p + 0xA5); j++) {
            func_00206730(*(char **)(p + 0xB8) + j * 0x50 + 0x40);
        }
    }
    for (i = 0; i < 2; i++) {
        if (*(int *)(p + 0x84 + i * 4) != 0 && func_002077F0(*(int *)(p + 0x84 + i * 4)) == 1) {
            *(int *)(p + 0x84 + i * 4) = 0;
        }
    }
    k = *(unsigned char *)(p + 0xA0);
    if (((unsigned int)(k - 1) <= 1 || k == 3) && *(int *)(p + 0xB8) != 0) {
        for (m = 0; m < *(unsigned char *)(p + 0xA5); m++) {
            if (*(int *)(*(char **)(p + 0xB8) + m * 0x50 + 0x40) != 0 && func_002077F0(*(int *)(p + 0x84)) == 1) {
                *(int *)(p + 0x84) = 0;
            }
        }
    }
}

void func_001EFFE0(char *p, float r) {
    float a[2];
    float v[4] __attribute__((aligned(16)));
    float g[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    a[0] = *(float *)(p + 0x704);
    a[1] = *(float *)(p + 0x708);
    if (!(a[0] <= 180.0f)) a[0] = a[0] - 360.0f;
    if (a[0] < -180.0f) a[0] = a[0] + 360.0f;
    if (!(a[1] <= 180.0f)) a[1] = a[1] - 360.0f;
    if (a[1] < -180.0f) a[1] = a[1] + 360.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[0] = r;
    v[3] = 1.0f;
    g[3] = 1.0f;
    g[0] = 0.0f;
    g[1] = 6.283185f * (a[0] / 360.0f);
    g[2] = 6.283185f * (a[1] / 360.0f);
    UNIT(m);
    func_00131700(m, m, g);
    func_00104B80((char *)o, m, v);
    *(float *)(p + 0x6F8) = o[0];
    *(float *)(p + 0x6FC) = o[1];
    *(float *)(p + 0x700) = o[2];
}

#define VGET3_30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_00358260(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    *(float *)(p + 0x7E8) = *(float *)(p + 0x7E8) + *(float *)(p + 0x10);
    if (*(float *)(p + 0x7E8) < 720.0f) {
        if (!(*(float *)(p + 0x7EC) < 0.0f)) {
            *(float *)(p + 0x7EC) = *(float *)(p + 0x7EC) - *(float *)(p + 0x10);
        }
        for (i = 0; i < 4; i++) {
            if (!(*(float *)(p + 0x7E8) <= 100.0f * (float)(i + 1))) {
                func_00358740(p, i);
            }
        }
        func_0028C5C0(p + 0x560, (unsigned int)*(float *)(p + 0x10), 1.0f);
        return;
    }
    *(unsigned char *)(p + 0x7E1) = 1;
    *(float *)(p + 0x7E8) = 0.0f;
    func_001A2050(func_0027A710(p + 0xE0));
    func_003587C0(p);
    func_003587A0(p);
    *(unsigned char *)(p + 0x7E2) = 2;
    VGET3_30(v, p + 0x520);
    v[3] = 1.0f;
    func_003305E0(D_01DFABA0, 8, 0x15, (char *)v, 0x21, 0, 0);
}

typedef struct { float v[12]; } __attribute__((aligned(16))) T404;
short func_0027CB50(char *, int);
int func_0027BDB0(char *, unsigned char);
int func_0027CBB0(char *, int, short);
int func_0027CCC0(char *, int, short);
int func_0027BCB0(char *, unsigned char);
int func_0027C1F0(char *, int, int, int, int);
extern unsigned char D_0055B9A0[];
unsigned int func_00331040(char *, int);
void func_00330B50(char *, int, char *, int);
void func_00330BD0(char *, int, char *, int, int);
extern char D_0058B3A0[];
void func_004DBF00(char *);
void func_00277DA0(char *);
void func_00277DE0(char *, char *, char *, int);
void func_00277E70(char *);
void func_00278060(char *, int);
extern char D_00645EB0[];
char *func_002864A0(char *, int);
void func_00198450(char *, int, int, unsigned short);
int func_001A4F90(char *);
void func_00199730(char *, char *, char *, int);
void func_00199720(char *, char *, int);
int func_001A5B30(char *, int);
void func_002242C0(char *);
float func_001324B0(char *, float *);
int func_00131D10(float, float);
unsigned char func_002DAD40(char *);
void func_003AAB30(int, int, char *, unsigned char);
int func_003B9390(char *);
void func_003B9E50(char *);
void func_003B9D20(char *);

void func_002276B0(char *p) {
    T404 t;
    t = *(T404 *)D_00542C80;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(float *)(p + 0x2870) = 15.0f;
        func_00207480(3, 0x3B5, *(float **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), 8);
        func_003305E0(D_01DFABA0, 8, 0x96, p + 0x50, 0x2D, 0, 0);
        if ((*(unsigned char *)(p + 0x2900) == 1 && *(unsigned char *)(p + 0x2901) == 2) ||
            (*(unsigned char *)(p + 0x2901) == 1 && *(unsigned char *)(p + 0x2900) == 2)) {
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 1:
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            QCOPY(p + 0x28F0, &t.v[*(unsigned char *)(p + 0x2900) * 4]);
            *(float *)(p + 0x2870) = 8.0f;
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_0021B790(p, 0);
        }
        break;
    }
}

int func_0027C040(char *p, int k) {
    short n;
    int i;
    int a;
    int b;
    int r;
    if (*(int *)(p + 0xA8) == 0) return -1;
    if (*(short *)p <= (short)k) return -2;
    n = func_0027CB50(p, k);
    for (i = 0; i < *(short *)(p + 0x54); i++) {
        if (*(short *)(p + i * 2 + 0x2C) >= 0) {
            func_0027BDB0(p, *(short *)(p + i * 2 + 0x2C));
            *(short *)(p + i * 2 + 0x2C) = -1;
        }
    }
    for (i = 0; i < n; i++) {
        a = func_0027CBB0(p, k, i);
        b = func_0027CCC0(p, k, i);
        if (b == 0) return -1;
        r = func_0027BCB0(p, a);
        if (r >= 0) {
            *(short *)(p + r * 2 + 0x2C) = a;
        }
        if (func_0027C1F0(p, a, b, 1, 0) != 0) return -1;
    }
    *(short *)(p + 2) = k;
    *(short *)(p + 0x54) = n;
    return 0;
}

void func_00330E30(char *d, int k, char *pos) {
    unsigned char *e = D_0055B9A0 + k * 16;
    unsigned int r = func_00331040(d, 100);
    unsigned int acc = 0;
    unsigned int i;
    int t;
    for (i = 0; i < 4; i++, e += 4) {
        acc += e[0];
        if (r < acc) {
            t = e[1];
            if (t == 0) {
                func_003305E0(d, 0, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t == 1) {
                func_003305E0(d, 1, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t == 2) {
                func_003305E0(d, 2, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t == 3) {
                func_003305E0(d, 8, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t >= 4 && t < 0x13) {
                func_00330B50(d, *(unsigned short *)(e + 2), pos, t - 4);
                return;
            }
            if (t >= 0x13 && t < 0x37) {
                func_00330BD0(d, *(unsigned short *)(e + 2), pos, t - 0x13, 0);
                return;
            }
        }
    }
}

static inline char *func_004DBD50_g(char *p, int i) {
    char *r;
    if (!(i < *(int *)(p + 0xC30))) {
        r = 0;
    } else {
        r = *(char **)(p + 0xC00) + i * 0x80;
    }
    return r;
}

void func_004DBD50(char *p) {
    float d[4] __attribute__((aligned(16)));
    int i;
    char *e;
    char *f;
    float x;
    float y;
    float z;
    *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) + *(float *)(p + 0xDA8);
    func_004DBF00(p);
    *(float *)(p + 0xDB0) = 100.0f;
    VSUBR54(d, p + 0xCE0, p + 0xCA0);
    d[3] = 1.0f;
    for (i = 0; i < 13; i++) {
        z = *(float *)(p + 0xCA8) + d[2] / 12.0f * (float)i;
        y = *(float *)(p + 0xCA4) + d[1] / 12.0f * (float)i;
        x = *(float *)(p + 0xCA0) + d[0] / 12.0f * (float)i;
        e = func_004DBD50_g(p, i);
        *(float *)(e + 0x20) = x;
        *(float *)(e + 0x24) = y;
        *(float *)(e + 0x28) = z;
        *(float *)(e + 0x2C) = 1.0f;
        QCOPY(e, e + 0x20);
        QCOPY(e + 0x10, e + 0x20);
        f = func_004DBD50_g(p, i);
        *(int *)(f + 0x30) = 0;
        *(int *)(f + 0x34) = 0;
        *(int *)(f + 0x38) = 0;
        *(int *)(f + 0x3C) = 0;
    }
    func_00277DA0(p + 0x11C0);
    func_00277DE0(p + 0x11C0, D_0058B3A0, p + 0xCB0, 1);
    func_00277E70(p + 0x11C0);
    func_00278060(p + 0x11C0, D_01CAFF14[0]);
    *(unsigned char *)(p + 0xDCD) = 0;
}

int func_002792E0(char *p, int a, int b) {
    char *h;
    unsigned short fl;
    int n;
    char *buf;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        h = func_002864A0(D_00645EB0, b);
        if (h != 0) {
            *(int *)(p + 0xC) = b;
            break;
        }
        *(unsigned char *)(p + 8) = 1;
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    switch (*(unsigned char *)(p + 9)) {
    case 0:
        break;
    case 1:
        fl |= 2;
        break;
    }
    func_00198450(p + 0x40, a, b, fl);
    n = func_001A4F90(p + 0x40);
    if (n <= 0) return 0;
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) return 0;
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_00199730(p + 0x40, buf, h, 0);
        break;
    case 1:
        func_00199720(p + 0x40, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x40, n) != 0) return 0;
    *(unsigned char *)(p + 0xA) = 1;
    return 1;
}

int func_001AE770(char *p, unsigned short b) {
    switch (b) {
    case 0x1000: return 0;
    case 0x4000: return 1;
    case 0x2000: return 2;
    case 0x8000: return 3;
    case 0x10: return 4;
    case 0x40: return 5;
    case 0x20: return 6;
    case 0x80: return 7;
    case 4: return 8;
    case 1: return 9;
    case 0x200: return 10;
    case 8: return 11;
    case 2: return 12;
    case 0x400: return 13;
    case 0x100: return 14;
    }
    return 0;
}

int func_0028BFE0(char *p) {
    char *o = *(char **)(p + 0xE0);
    if (*(unsigned char *)(o + 0x24F1) == 1) return 1;
    func_002242C0(o);
    return 0;
}

int func_00244DF0(char *p, unsigned int x) {
    if (x != 0) {
        switch (x & 0xFF000000) {
        case 0x80000000:
            if (*(unsigned char *)((char *)(x & 0xFF) + (int)p + 0x24DB) == 2) return 1;
            break;
        case 0x40000000:
            if ((x & 0xFF) == *(unsigned char *)(p + 0x2998)) return 1;
            break;
        }
    }
    return 0;
}

void func_00197D10(char *p) {
    *(char **)(p + 0x1C) = p + 0x34;
    *(int *)(p + 0x18) = 0x100;
    func_00128488(*(char **)(p + 0x1C), 0, *(int *)(p + 0x18));
    *(unsigned char *)(p + 0xC) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x10) = 0;
    *(unsigned char *)(p + 0xD) = 0;
    *(char **)(p + 0x30) = p + 0x8434;
    *(int *)(p + 0x2C) = 0x10;
    func_00128488(*(char **)(p + 0x30), 0, *(int *)(p + 0x2C));
    *(unsigned char *)(p + 0x20) = 0;
    *(int *)(p + 0x28) = 0;
    *(int *)(p + 0x24) = 0;
    *(unsigned char *)(p + 0x21) = 0;
    *(int *)(p + 8) = 0;
}

short func_00221710(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *o;
    short r = 0x4000;
    if (*(unsigned char *)(p + 0x3B9D) == 0) return r;
    o = *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x138C) + 0x104);
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(o) : "memory");
    r = func_00131D10(func_001324B0(p + 0x3C40, v), *(float *)(p + 0x3C44) - v[1]);
    return r;
}

int func_0024D260(char *p) {
    short d;
    if (func_002DAD40(p) != 2) {
        d = *(short *)(p + 0x49EC) - (*(unsigned short *)(p + 0x49E8) + 0x6000);
        if (0 <= d && d <= 0x4000) return 0;
        d = *(short *)(p + 0x49EC) - (*(unsigned short *)(p + 0x49E8) - 0x2000);
        if (0 <= d && d <= 0x4000) return 2;
    }
    return 4;
}

typedef struct { float f[4]; } F4_3B9;
extern char D_005599AC[];
extern char D_005599A8[];
extern int D_005BE098;
int func_0024E780(int, int, int);
void func_0030BBC0(char *);
void func_001A29A0(char *);
void func_00195E20(int *, char *);
extern char D_00559990[];
void func_0024E7B0(int, int, int);
void func_0030B920(char *);
void func_0030B770(char *);
extern unsigned char D_01CB1291[];
extern unsigned char D_01CB1292[];
extern char D_01C61820[];
void func_001B6480(char *, int);
void func_001B64E0(char *, short *);
void func_001B64C0(char *, int);
void func_001B6500(char *, int);
void func_001B6510(char *, int);
void func_001B6520(char *, int);
void func_001B6550(char *, int);
void func_001B7430(char *, int);

void func_003B9120(char *p) {
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AAB30(*(int *)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
    } else {
        *(F4_3B9 *)(p + 0x230) = *(F4_3B9 *)(p + 0x200);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        switch (func_003B9390(p)) {
        case 0:
            break;
        case 1:
            func_003B9E50(p);
            return;
        case -1:
            *(unsigned char *)(p + 0x1B6) = 0;
            break;
        }
        break;
    }
    func_003B9D20(p);
}

void func_0030BAC0(char *p) {
    unsigned char r;
    int i;
    r = func_0024E780(*(int *)(p + 0x173C), 0, 1);
    if (!(*(float *)(p + 0xE8) <= *(float *)D_005599AC)) {
        *(float *)(p + 0xE8) = *(float *)(p + 0xE8) + *(float *)D_005599A8;
        if (*(float *)(p + 0xE8) < *(float *)D_005599AC) {
            *(float *)(p + 0xE8) = *(float *)D_005599AC;
        }
    }
    if (r == 5) {
        *(unsigned char *)(p + 5) = 3;
        func_0030BBC0(p);
    } else {
        if (*(unsigned char *)(p + 0x1739) == 1) {
            for (i = 0; i < 3; i++) {
                func_001A29A0(func_00279290(p + i * 0x600 + 0x180));
            }
        }
        func_00195E20(&D_005BE098, p);
    }
}

void func_0030B820(char *p) {
    unsigned char r;
    int i;
    r = func_0024E780(*(int *)(p + 0x173C), 0, 1);
    if (r == 3) {
        *(unsigned char *)(p + 5) = 1;
        func_0024E7B0(*(int *)(p + 0x173C), 0, 1);
        func_0030B920(p);
    } else {
        if (*(float *)(p + 0xE8) < *(float *)D_00559990) {
            *(float *)(p + 0xE8) = *(float *)(p + 0xE8) + *(float *)(p + 0x1380);
            if (!(*(float *)(p + 0xE8) <= *(float *)D_00559990)) {
                *(float *)(p + 0xE8) = *(float *)D_00559990;
            }
        }
        func_0030B770(p);
        if (*(unsigned char *)(p + 0x1739) == 1) {
            for (i = 0; i < 3; i++) {
                func_001A29A0(func_00279290(p + i * 0x600 + 0x180));
            }
        }
        func_00195E20(&D_005BE098, p);
    }
}

void func_003E6560(char *p) {
    float m[16] __attribute__((aligned(16)));
    UNIT(m);
    func_00206730(p + 0x3BDC);
    if (*(char **)(p + 0x3BDC) == 0) {
        *(char **)(p + 0x3BDC) = func_00207480(3, 0x2CC, m, 0x10);
        if (*(char **)(p + 0x3BDC) != 0) {
            (*(char **)(p + 0x3BDC))[0x3A] = 1;
            {
                char *o = *(char **)(p + 0x3BDC);
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x81C) + 0x104);
                o[0x9A] = 1;
            }
        }
    }
    func_00206730(p + 0x3BE0);
    if (*(char **)(p + 0x3BE0) == 0) {
        *(char **)(p + 0x3BE0) = func_00207480(3, 0xDC, m, 0x10);
        if (*(char **)(p + 0x3BE0) != 0) {
            (*(char **)(p + 0x3BE0))[0x3A] = 1;
            {
                char *o = *(char **)(p + 0x3BE0);
                *(char **)(o + 0x90) = p + 0x6E0;
                o[0x9A] = 1;
            }
            {
                char *o = *(char **)(p + 0x3BE0);
                o[0x9C] = 0x40;
                o[0x9D] = 0x20;
                *(unsigned char *)(o + 0x9E) = 0x80;
                o[0x9B] = 2;
            }
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, p + 0x50, 0, 0, 0);
}

typedef struct { int x0; int y0; int c0; int o0; int x1; int y1; int c1; int o1; } R1B6;

typedef struct { unsigned char u0; unsigned char v0; unsigned char u1; unsigned char v1; } UV1B6;

extern UV1B6 D_005406C0[];
void func_001B6470(char *, R1B6 *);
void func_00245810(char *, char *, float *, float);
short func_002DACC0(char *);
int func_00245EF0(char *, float *, short, float *, char *, int, float);
void func_002DBCA0(char *, int);
void func_002DBD20(char *, float, float);
void func_00220860(char *, int, int, float);
void func_002498D0(char *);
void func_00249990(char *);
void func_002DAD80(char *, int, float);
unsigned short func_002DAE30(char *, char *, char *, short);
float func_00131B50(float);
void func_0021C770(char *, int);
void func_0021C580(char *, int);

int func_001B6800(int z, short x, short y, short w, short h, int a, int b, unsigned char k, int c) {
    R1B6 r;
    short uv[4];
    if (D_01CB1291[0] == 1 && D_01CB1292[0] == 0) {
        uv[0] = D_005406C0[k].u0 << 4;
        uv[1] = D_005406C0[k].v0 << 4;
        uv[2] = D_005406C0[k].u1 << 4;
        uv[3] = D_005406C0[k].v1 << 4;
        r.x0 = x;
        r.y0 = y;
        r.c0 = c;
        r.x1 = x + w;
        r.y1 = y + h / 2;
        r.c1 = c;
        func_001B6470(D_01C61820, &r);
        func_001B6480(D_01C61820, 0);
        func_001B64C0(D_01C61820, ((unsigned char)a << 24) + 0x808080);
        func_001B64E0(D_01C61820, uv);
        func_001B6500(D_01C61820, b);
        func_001B6510(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xF);
        func_001B6550(D_01C61820, 1);
        func_001B7430(D_01C61820, 0);
    }
    return D_005406C0[k].u1 - D_005406C0[k].u0;
}

int func_002450D0(char *p, unsigned char a, float lim) {
    float v[4] __attribute__((aligned(16)));
    float h;
    float d;
    unsigned int i;
    short ang;
    h = 100000.0f;
    if (*(unsigned char *)(p + 0x290D) == 1) return 0;
    func_00245810(p, p + 0x50, &h, 2000.0f);
    if (!(300.0f + *(float *)(p + 0x54) <= h)) return 0;
    QCOPY(v, p + 0x50);
    v[1] = v[1] + 100.0f;
    if (a == 0) {
        ang = func_002DACC0(p);
    } else {
        ang = *(short *)(p + 0x90);
    }
    i = 0;
    while (i < 4) {
        if ((unsigned char)func_00245EF0(p, v, ang, &d, p + 0x2928, 0x1000, i == 0 ? 60.0f : 100.0f) == 1) {
            if (!(d <= lim)) return 0;
        } else {
            return 0;
        }
        i++;
        v[1] = v[1] + 50.0f;
    }
    *(short *)(p + 0x28DC) = (short)func_00131D10(*(float *)(p + 0x2950), *(float *)(p + 0x2958)) + 0x8000;
    p[0x3C6D] = 2;
    return 1;
}

typedef struct { float a; float b; int pad[4]; } E220;
extern unsigned char D_005BBA28[3];
int func_001C12D0(char *, float *, char *, char *, int);
int func_001C15B0(char *, float *, char *, char *, char *);
extern char D_005AE340[];
extern char D_005AE364[];
extern char D_005AE3E4[];
extern char D_005AE478[];
extern char D_005AE544[];
extern char D_005AE5FC[];
extern char D_005B0890[];
void func_0024FE00(char *);
void func_00320540(char *);
void func_0031E400(char *);
void func_0031DCB0(char *);
void func_00204AD0();
void func_00204A70();
void func_00382970(char *);
void func_002E8A10(char *);
void func_003C9D90(char *);
void func_00204CD0();
void func_00204C70();
void func_00313E20(char *);
void func_00387550(char *);
extern char D_005AE660[];
extern char D_005AE684[];
extern char D_005AE704[];
extern char D_005AE798[];
extern char D_005AE864[];
extern char D_005AE91C[];
extern char D_005A7790[];
extern char D_005A7780[];
void func_0027A570();
void func_0027A660();
void func_0024D930(char *);
void func_00277D30(char *);
extern char D_005B1CB0[];
extern char D_005B1CD4[];
extern char D_005B1D54[];
extern char D_005B1DE8[];
extern char D_005B1EB4[];
extern char D_005B1F6C[];
void func_0031E4A0(char *);
void func_00400FF0(char *);
void func_002E7840(char *);
extern char D_005AF030[];
extern char D_005AF054[];
extern char D_005AF0D4[];
extern char D_005AF168[];
extern char D_005AF234[];
extern char D_005AF2EC[];
void func_00203040();
void func_00202FE0();
extern char D_005B7160[];
extern char D_005B7184[];
extern char D_005B7204[];
extern char D_005B7298[];
extern char D_005B7364[];
extern char D_005B741C[];
extern char D_005AAA98[];
extern char D_005AFA60[];
extern char D_005B4070[];
extern char D_005B4094[];
extern char D_005B4114[];
extern char D_005B41A8[];
extern char D_005B4274[];
extern char D_005B432C[];
void func_0024D9A0();
void func_002791E0();
void func_002E1BC0(char *);
void func_002E8370(char *);
void func_003AD780(char *);
extern char D_005AF390[];
extern char D_005AF3B4[];
extern char D_005AF434[];
extern char D_005AF4C8[];
extern char D_005AF594[];
extern char D_005AF64C[];
extern char D_005AFA70[];
extern char D_005AFA94[];
extern char D_005AFB14[];
extern char D_005AFBA8[];
extern char D_005AFC74[];
extern char D_005AFD2C[];
void func_0031DED0();
void func_0031DF20();
extern char D_005AA6D0[];
extern char D_005AA6F4[];
extern char D_005AA774[];
extern char D_005AA808[];
extern char D_005AA8D4[];
extern char D_005AA98C[];
extern char D_005ADFA0[];
extern char D_005ADFC4[];
extern char D_005AE044[];
extern char D_005AE0D8[];
extern char D_005AE1A4[];
extern char D_005AE25C[];
void func_001FBAB0(char *);
void func_00401030();
extern char D_005B14D0[];
extern char D_005B14F4[];
extern char D_005B1574[];
extern char D_005B1608[];
extern char D_005B16D4[];
extern char D_005B178C[];
void func_002E7BF0(char *);
extern char D_005AC7F0[];
extern char D_005AC814[];
extern char D_005AC894[];
extern char D_005AC928[];
extern char D_005AC9F4[];
extern char D_005ACAAC[];
extern char D_005B03D0[];
extern char D_005B03F4[];
extern char D_005B0474[];
extern char D_005B0508[];
extern char D_005B05D4[];
extern char D_005B068C[];
void func_0028C1A0();
void func_003C8680(char *);
extern char D_005A94C0[];
extern char D_005A94E4[];
extern char D_005A9564[];
extern char D_005A95F8[];
extern char D_005A96C4[];
extern char D_005A977C[];
void func_001F9E40(char *);
void func_001FBC10();
void func_002047C0();
void func_00231560();
void func_00291050();
void func_00291100();
void func_002E82A0(char *);
void func_002E82E0();
extern char D_005B8F80[];
extern char D_005B8FA4[];
extern char D_005B9024[];
extern char D_005B90B8[];
extern char D_005B9184[];
extern char D_005B923C[];
extern char D_01CAF2B0[];
void func_004BFDB0(char *, int);
char *func_004BFDC0(char *, int);
extern char D_005A8B10[];
extern char D_005A8B34[];
extern char D_005A8BB4[];
extern char D_005A8C48[];
extern char D_005A8D14[];
void func_0027CE00(char *);
extern char D_005A9A40[];
extern char D_005A9A64[];
extern char D_005A9AE4[];
extern char D_005A9B78[];
extern char D_005A9C44[];
void func_004598E0(char *);
extern char D_005A6F50[];
extern char D_005BB810[];
extern char D_005AADD0[];
extern char D_005AEB90[];
extern char D_005AEBB4[];
extern char D_005AEC34[];
extern char D_005AECC8[];
void func_0024F750(char *);
extern char D_005B9910[];
extern char D_005B9934[];
extern char D_005B99B4[];
extern char D_005B9A48[];
extern char D_005B31F0[];
extern int D_005BE09C;
extern char D_005BE1A8[4];
void func_001ACC30(int, int, int, int, int);
void func_00400C10(char *, float);
void func_0036DF10(char *, int, int, int, int, int);
void func_0028C740(char *);
void func_003FA440(char *, int);
int func_003F9F90(char *);
void func_0041D7F0(char *, float);
void func_003FA3F0(char *, int);

static inline unsigned short ang_220(float d) {
    int i = 65536.0f * d / 360.0f + 0.5f;
    return (short)i;
}

static inline unsigned char st_220(char *p) {
    return *(unsigned char *)(p + 0x284C);
}

void func_00220FF0(char *p) {
    short s;
    switch (st_220(p)) {
    case 0:
        func_002DBCA0(p, 1);
        p[0x28A5] = 0;
        func_002DBD20(p, (*(E220 **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
        p[0x3BA0] = p[0x3B9F];
        func_00221240(p);
        func_00220860(p, 0, 0, 0.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002498D0(p);
        func_00249990(p);
        break;
    }
    {
        func_002DAD80(p, 0, 1.0f);
        s = func_002DAE30(p, p + 0x90, p + 0x28E2, ang_220(*(float *)(*(char **)(p + 0x283C) + 0xC0)));
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        func_002DB880(p, *(short *)(p + 0x28DC));
        if (func_00131B50(360.0f * (float)s / 65536.0f) < 0.5f * (*(float *)(*(char **)(p + 0x283C) + 0xC0) * *(float *)(p + 0x10))) {
            func_0021C770(p, 0xD);
            if (*(unsigned char *)(p + 0x284B) == 0xC) func_0021C580(p, 0xD);
        }
    }
}

#define VSUB3(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

int func_001BF640(char *o, char *pt, char *tri, char *out) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float d;
    int i;
    VSUB3(v, pt, tri);
    d = func_00132630(v, tri + 0x30);
    if (func_00131B50(d) <= *(float *)(pt + 0x10)) {
        func_00132580(w, tri + 0x30, d);
        VSUB3(w, pt, w);
        if (func_001C12D0(o, w, tri, tri + 0x30, 3)) {
            if (out) QCOPY(out, w);
            return 1;
        }
    }
    i = 0;
    while (i < 3) {
        if (func_00132470(pt, tri + i * 16) <= *(float *)(pt + 0x10)) {
            if (out) QCOPY(out, tri + i * 16);
            return 1;
        }
        if ((unsigned char)func_001C15B0(o, w, tri + i * 16, tri + D_005BBA28[i] * 16, pt) == 1) {
            if (func_00132470((char *)w, pt) <= *(float *)(pt + 0x10)) {
                if (out) QCOPY(out, w);
                return 1;
            }
        }
        i++;
    }
    return 0;
}

char *func_0037F090(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)p = D_005AE340;
    *(char **)(p + 0x40) = D_005AE364;
    *(char **)(p + 0xA0) = D_005AE3E4;
    *(char **)(p + 0xD0) = D_005AE478;
    *(char **)(p + 0x130) = D_005AE544;
    *(char **)(p + 0x1D0) = D_005AE5FC;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x10);
    func_002790E0(p + 0x340);
    func_0031DCB0(p + 0x940);
    func_00100450(p + 0xA10, func_00204AD0, func_00204A70, 0xC0, 2);
    p[0xBA0] = 0;
    p[0xBA1] = 0;
    *(short *)(p + 0xBA2) = 0;
    *(int *)(p + 0xBA8) = 0;
    *(int *)(p + 0xBAC) = 0;
    *(int *)(p + 0xBB0) = 0;
    *(float *)(p + 0xBC0) = 0.0f;
    *(float *)(p + 0xBC4) = 0.0f;
    *(float *)(p + 0xBC8) = 0.0f;
    *(float *)(p + 0xBCC) = 1.0f;
    *(float *)(p + 0xBD0) = 100000.0f;
    p[0xBD4] = 0;
    p[0xBD5] = 0;
    *(short *)(p + 0xBD6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xBD8) = -1;
    func_00382970(p + 0xC00);
    func_002E8A10(p + 0xC4C);
    func_0028C110(p + 0xD10);
    q = p + 0xF30;
    *(char **)(p + 0xF40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_00100450(p + 0xF90, func_00204CD0, func_00204C70, 0xA0, 3);
    func_00313E20(p + 0x1370);
    *(int *)(p + 0xB94) = 0;
    *(int *)(p + 0xB98) = 0;
    *(int *)(p + 0xB9C) = 0;
    return p;
}

#define VSUBR(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

static inline char *node_387(char *p, int i) {
    if (i >= *(int *)(p + 0xC30)) return 0;
    return *(char **)(p + 0xC00) + i * 0x80;
}

void func_00387390(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    float x;
    float y;
    float z;
    char *e;
    char *f;
    *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) + *(float *)(p + 0xDA8);
    func_00387550(p);
    *(float *)(p + 0xDB0) = 100.0f;
    VSUBR(v, p + 0xCE0, p + 0xCA0);
    v[3] = 1.0f;
    i = 0;
    while (i < 13) {
        z = *(float *)(p + 0xCA8) + v[2] / 12.0f * (float)i;
        y = *(float *)(p + 0xCA4) + v[1] / 12.0f * (float)i;
        x = *(float *)(p + 0xCA0) + v[0] / 12.0f * (float)i;
        e = node_387(p, i);
        *(float *)(e + 0x20) = x;
        *(float *)(e + 0x24) = y;
        *(float *)(e + 0x28) = z;
        *(float *)(e + 0x2C) = 1.0f;
        QCOPY(e, e + 0x20);
        QCOPY(e + 0x10, e + 0x20);
        f = node_387(p, i);
        *(int *)(f + 0x30) = 0;
        *(int *)(f + 0x34) = 0;
        *(int *)(f + 0x38) = 0;
        *(int *)(f + 0x3C) = 0;
        i++;
    }
    func_00277DA0(p + 0x1200);
    func_00277DE0(p + 0x1200, p + 0x12F0, p + 0xCB0, 1);
    func_00277E70(p + 0x1200);
    func_00278060(p + 0x1200, D_01CAFF14[0]);
    VUNIT(p + 0x11C0);
    p[0xDCD] = 0;
}

char *func_003777C0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)p = D_005AE660;
    *(char **)(p + 0x40) = D_005AE684;
    *(char **)(p + 0xA0) = D_005AE704;
    *(char **)(p + 0xD0) = D_005AE798;
    *(char **)(p + 0x130) = D_005AE864;
    *(char **)(p + 0x1D0) = D_005AE91C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x4E);
    func_002790E0(p + 0x8C0);
    func_00100450(p + 0xEC0, func_0027A570, func_0027A660, 0x440, 0x14);
    q = p + 0x6D10;
    *(char **)(p + 0x6D20) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_0024D930(p + 0x6D70);
    p[0x6E90] = 0;
    p[0x6E91] = 0;
    *(short *)(p + 0x6E92) = 0;
    *(int *)(p + 0x6E98) = 0;
    *(int *)(p + 0x6E9C) = 0;
    *(int *)(p + 0x6EA0) = 0;
    *(float *)(p + 0x6EB0) = 0.0f;
    *(float *)(p + 0x6EB4) = 0.0f;
    *(float *)(p + 0x6EB8) = 0.0f;
    *(float *)(p + 0x6EBC) = 1.0f;
    *(float *)(p + 0x6EC0) = 100000.0f;
    p[0x6EC4] = 0;
    p[0x6EC5] = 0;
    *(short *)(p + 0x6EC6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x6EC8) = -1;
    func_0028C110(p + 0x6EE0);
    func_00382970(p + 0x7200);
    func_002E8A10(p + 0x724C);
    func_0028C110(p + 0x73D0);
    func_00313E20(p + 0x75F0);
    q = p + 0x7680;
    *(char **)(p + 0x7760) = D_005A7790;
    *(int *)(p + 0x7768) = 0;
    *(int *)(p + 0x7764) = 0;
    *(char **)(p + 0x7760) = D_005A7780;
    func_00277D30(q);
    return p;
}

char *func_003F5160(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)p = D_005B1CB0;
    *(char **)(p + 0x40) = D_005B1CD4;
    *(char **)(p + 0xA0) = D_005B1D54;
    *(char **)(p + 0xD0) = D_005B1DE8;
    *(char **)(p + 0x130) = D_005B1EB4;
    *(char **)(p + 0x1D0) = D_005B1F6C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0xE);
    p[0x320] = 0;
    func_002790E0(p + 0x540);
    func_00400FF0(p + 0xB40);
    func_0024D930(p + 0xB60);
    func_0028C110(p + 0xC30);
    p[0xE50] = 0;
    p[0xE51] = 0;
    *(short *)(p + 0xE52) = 0;
    *(int *)(p + 0xE58) = 0;
    *(int *)(p + 0xE5C) = 0;
    *(int *)(p + 0xE60) = 0;
    *(float *)(p + 0xE70) = 0.0f;
    *(float *)(p + 0xE74) = 0.0f;
    *(float *)(p + 0xE78) = 0.0f;
    *(float *)(p + 0xE7C) = 1.0f;
    *(float *)(p + 0xE80) = 100000.0f;
    p[0xE84] = 0;
    p[0xE85] = 0;
    *(short *)(p + 0xE86) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xE88) = -1;
    func_002E7840(p + 0xEB0);
    func_002E8A10(p + 0xEF4);
    func_00313E20(p + 0xF0C);
    q = p + 0xF30;
    *(char **)(p + 0xF40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    *(int *)(p + 0x450) = 0;
    *(int *)(p + 0x454) = 0;
    *(int *)(p + 0x458) = 0;
    *(int *)(p + 0x45C) = 0;
    *(int *)(p + 0x460) = 0;
    *(int *)(p + 0x464) = 0;
    *(int *)(p + 0x3A0) = 0;
    return p;
}

char *func_0038CDF0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AF030;
    *(char **)(p + 0x40) = D_005AF054;
    *(char **)(p + 0xA0) = D_005AF0D4;
    *(char **)(p + 0xD0) = D_005AF168;
    *(char **)(p + 0x130) = D_005AF234;
    *(char **)(p + 0x1D0) = D_005AF2EC;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x15);
    p[0x390] = 0;
    q = p + 0x530;
    *(char **)(p + 0x540) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_002790E0(p + 0x600);
    func_00400FF0(p + 0xC00);
    func_0024D930(p + 0xC20);
    func_0028C110(p + 0xCF0);
    p[0xF10] = 0;
    p[0xF11] = 0;
    *(short *)(p + 0xF12) = 0;
    *(int *)(p + 0xF18) = 0;
    *(int *)(p + 0xF1C) = 0;
    *(int *)(p + 0xF20) = 0;
    *(float *)(p + 0xF30) = 0.0f;
    *(float *)(p + 0xF34) = 0.0f;
    *(float *)(p + 0xF38) = 0.0f;
    *(float *)(p + 0xF3C) = 1.0f;
    *(float *)(p + 0xF40) = 100000.0f;
    p[0xF44] = 0;
    p[0xF45] = 0;
    *(short *)(p + 0xF46) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xF48) = -1;
    func_002E7840(p + 0xF70);
    func_002E8A10(p + 0xFB4);
    func_00313E20(p + 0xFCC);
    func_00100450(p + 0xFF0, func_00203040, func_00202FE0, 0x60, 5);
    *(int *)(p + 0x43C) = 0;
    *(int *)(p + 0x410) = 0;
    return p;
}

char *func_00488A50(char *p) {
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

char *func_00431B00(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B4070;
    *(char **)(p + 0x40) = D_005B4094;
    *(char **)(p + 0xA0) = D_005B4114;
    *(char **)(p + 0xD0) = D_005B41A8;
    *(char **)(p + 0x130) = D_005B4274;
    *(char **)(p + 0x1D0) = D_005B432C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x2A);
    func_002790E0(p + 0x580);
    func_002790E0(p + 0xB80);
    func_002790E0(p + 0x1180);
    func_00100450(p + 0x1780, func_002790E0, func_002791E0, 0x600, 2);
    func_002790E0(p + 0x2380);
    func_002790E0(p + 0x2980);
    func_0031DCB0(p + 0x2F80);
    func_0031DCB0(p + 0x3010);
    q = p + 0x30A0;
    *(char **)(p + 0x30B0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x3140;
    *(char **)(p + 0x3150) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x31E0, func_00204CD0, func_00204C70, 0xA0, 2);
    q = p + 0x3320;
    *(char **)(p + 0x3330) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x33C0;
    *(char **)(p + 0x33D0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x34B0;
    *(char **)(p + 0x34C0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x3550;
    *(char **)(p + 0x3560) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x40D0, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0024D930(p + 0x4270);
    func_0028C110(p + 0x43B0);
    p[0x45D0] = 0;
    p[0x45D1] = 0;
    *(short *)(p + 0x45D2) = 0;
    *(int *)(p + 0x45D8) = 0;
    *(int *)(p + 0x45DC) = 0;
    *(int *)(p + 0x45E0) = 0;
    *(int *)(p + 0x45F0) = 0;
    *(int *)(p + 0x45F4) = 0;
    *(int *)(p + 0x45F8) = 0;
    *(float *)(p + 0x45FC) = 1.0f;
    *(float *)(p + 0x4600) = 100000.0f;
    p[0x4604] = 0;
    p[0x4605] = 0;
    *(short *)(p + 0x4606) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x4608) = -1;
    func_002E8370(p + 0x4630);
    func_002E8A10(p + 0x4674);
    func_00313E20(p + 0x468C);
    q = p + 0x46B0;
    *(char **)(p + 0x46C0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x4710;
    *(char **)(p + 0x4720) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    *(int *)(p + 0x47AC) = 0;
    *(int *)(p + 0x47C0) = 0;
    p[0x485E] = 0;
    p[0x485F] = 0;
    return p;
}

char *func_00390960(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AF390;
    *(char **)(p + 0x40) = D_005AF3B4;
    *(char **)(p + 0xA0) = D_005AF434;
    *(char **)(p + 0xD0) = D_005AF4C8;
    *(char **)(p + 0x130) = D_005AF594;
    *(char **)(p + 0x1D0) = D_005AF64C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x23);
    func_002790E0(p + 0x4C0);
    p[0xB20] = 0;
    p[0xB21] = 0;
    *(short *)(p + 0xB22) = 0;
    *(int *)(p + 0xB28) = 0;
    *(int *)(p + 0xB2C) = 0;
    *(int *)(p + 0xB30) = 0;
    *(int *)(p + 0xB40) = 0;
    *(int *)(p + 0xB44) = 0;
    *(int *)(p + 0xB48) = 0;
    *(float *)(p + 0xB4C) = 1.0f;
    *(float *)(p + 0xB50) = 100000.0f;
    p[0xB54] = 0;
    p[0xB55] = 0;
    *(short *)(p + 0xB56) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xB58) = -1;
    func_002E8370(p + 0xBD4);
    func_002E8A10(p + 0xC18);
    func_00313E20(p + 0xC30);
    q = p + 0xC50;
    *(char **)(p + 0xC60) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_002790E0(p + 0xD80);
    func_002790E0(p + 0x1380);
    func_002790E0(p + 0x1980);
    func_002790E0(p + 0x1F80);
    func_0031DCB0(p + 0x2580);
    func_0031DCB0(p + 0x2610);
    func_0031DCB0(p + 0x26A0);
    func_0031DCB0(p + 0x2730);
    func_0031DCB0(p + 0x27C0);
    q = p + 0x2850;
    *(char **)(p + 0x2860) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x2910;
    *(char **)(p + 0x2920) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x29D0, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x2B70);
    *(int *)(p + 0x2DD0) = 0;
    return p;
}

char *func_003ADE70(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AFA70;
    *(char **)(p + 0x40) = D_005AFA94;
    *(char **)(p + 0xA0) = D_005AFB14;
    *(char **)(p + 0xD0) = D_005AFBA8;
    *(char **)(p + 0x130) = D_005AFC74;
    *(char **)(p + 0x1D0) = D_005AFD2C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x22);
    p[0x4D0] = 0;
    p[0x4D1] = 0;
    *(short *)(p + 0x4D2) = 0;
    *(int *)(p + 0x4D8) = 0;
    *(int *)(p + 0x4DC) = 0;
    *(int *)(p + 0x4E0) = 0;
    *(int *)(p + 0x4F0) = 0;
    *(int *)(p + 0x4F4) = 0;
    *(int *)(p + 0x4F8) = 0;
    *(float *)(p + 0x4FC) = 1.0f;
    *(float *)(p + 0x500) = 100000.0f;
    p[0x504] = 0;
    p[0x505] = 0;
    *(short *)(p + 0x506) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x508) = -1;
    func_002E8370(p + 0x584);
    func_002E8A10(p + 0x5C8);
    func_00313E20(p + 0x5E0);
    q = p + 0x600;
    *(char **)(p + 0x610) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_002790E0(p + 0x700);
    func_002790E0(p + 0xD00);
    func_002790E0(p + 0x1300);
    func_00100450(p + 0x1900, func_0031DED0, func_0031DF20, 0x20, 0xB);
    func_00100450(p + 0x1A60, func_00204CD0, func_00204C70, 0xA0, 3);
    q = p + 0x1C40;
    *(char **)(p + 0x1C50) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x1D00, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x1EA0);
    *(int *)(p + 0x21E4) = 0;
    return p;
}

char *func_002D01A0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AA6D0;
    *(char **)(p + 0x40) = D_005AA6F4;
    *(char **)(p + 0xA0) = D_005AA774;
    *(char **)(p + 0xD0) = D_005AA808;
    *(char **)(p + 0x130) = D_005AA8D4;
    *(char **)(p + 0x1D0) = D_005AA98C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x41);
    func_002790E0(p + 0x780);
    func_002790E0(p + 0xD80);
    func_002790E0(p + 0x1380);
    func_0031DCB0(p + 0x1980);
    func_0031DCB0(p + 0x1A10);
    func_0031DCB0(p + 0x1AA0);
    q = p + 0x1B30;
    *(char **)(p + 0x1B40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x1BD0;
    *(char **)(p + 0x1BE0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x1CD0, func_00204CD0, func_00204C70, 0xA0, 3);
    p[0x1EB0] = 0;
    func_00100450(p + 0x2F70, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0024D930(p + 0x3110);
    func_0024D930(p + 0x31E0);
    func_00400FF0(p + 0x32B0);
    func_00400FF0(p + 0x32CC);
    func_0028C110(p + 0x3330);
    p[0x3550] = 0;
    p[0x3551] = 0;
    *(short *)(p + 0x3552) = 0;
    *(int *)(p + 0x3558) = 0;
    *(int *)(p + 0x355C) = 0;
    *(int *)(p + 0x3560) = 0;
    *(int *)(p + 0x3570) = 0;
    *(int *)(p + 0x3574) = 0;
    *(int *)(p + 0x3578) = 0;
    *(float *)(p + 0x357C) = 1.0f;
    *(float *)(p + 0x3580) = 100000.0f;
    p[0x3584] = 0;
    p[0x3585] = 0;
    *(short *)(p + 0x3586) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x3588) = -1;
    func_002E8370(p + 0x35B0);
    func_002E8A10(p + 0x35F4);
    func_00313E20(p + 0x360C);
    q = p + 0x3630;
    *(char **)(p + 0x3640) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x3690;
    *(char **)(p + 0x36A0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x3720;
    *(char **)(p + 0x3730) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x37E0;
    *(char **)(p + 0x38C0) = D_005A7790;
    *(int *)(p + 0x38C8) = 0;
    *(int *)(p + 0x38C4) = 0;
    *(char **)(p + 0x38C0) = D_005A7780;
    func_00277D30(q);
    *(int *)(p + 0x37D4) = 0;
    *(int *)(p + 0x390C) = 0;
    *(int *)(p + 0x3910) = 0;
    *(int *)(p + 0x3914) = 0;
    *(int *)(p + 0x3918) = 0;
    return p;
}

char *func_003732A0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005ADFA0;
    *(char **)(p + 0x40) = D_005ADFC4;
    *(char **)(p + 0xA0) = D_005AE044;
    *(char **)(p + 0xD0) = D_005AE0D8;
    *(char **)(p + 0x130) = D_005AE1A4;
    *(char **)(p + 0x1D0) = D_005AE25C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x62);
    p[0x860] = 0;
    func_002E8A10(p + 0x97C);
    func_002790E0(p + 0xC00);
    func_00100450(p + 0x1200, func_002790E0, func_002791E0, 0x600, 3);
    func_002790E0(p + 0x2400);
    func_0031DCB0(p + 0x2A00);
    func_00400FF0(p + 0x2A90);
    func_00100450(p + 0x2AAC, func_00400FF0, func_00401030, 0x1C, 3);
    func_00400FF0(p + 0x2B00);
    func_0024D930(p + 0x2B20);
    func_00100450(p + 0x2BF0, func_0024D930, func_0024D9A0, 0xD0, 3);
    func_0024D930(p + 0x2E60);
    q = p + 0x2F30;
    *(char **)(p + 0x2F40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x2FD0, func_00204AD0, func_00204A70, 0xC0, 3);
    q = p + 0x3210;
    *(char **)(p + 0x3220) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x32D0;
    *(char **)(p + 0x32E0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_0028C110(p + 0x3360);
    func_0028C110(p + 0x3580);
    func_001FBAB0(p + 0x3850);
    p[0x39F0] = 0;
    p[0x39F1] = 0;
    *(short *)(p + 0x39F2) = 0;
    *(int *)(p + 0x39F8) = 0;
    *(int *)(p + 0x39FC) = 0;
    *(int *)(p + 0x3A00) = 0;
    *(int *)(p + 0x3A10) = 0;
    *(int *)(p + 0x3A14) = 0;
    *(int *)(p + 0x3A18) = 0;
    *(float *)(p + 0x3A1C) = 1.0f;
    *(float *)(p + 0x3A20) = 100000.0f;
    p[0x3A24] = 0;
    p[0x3A25] = 0;
    *(short *)(p + 0x3A26) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x3A28) = -1;
    func_002E8370(p + 0x3A50);
    func_00313E20(p + 0x3A94);
    q = p + 0x3AB0;
    *(char **)(p + 0x3AC0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x3B10;
    *(char **)(p + 0x3BF0) = D_005A7790;
    *(int *)(p + 0x3BF8) = 0;
    *(int *)(p + 0x3BF4) = 0;
    *(char **)(p + 0x3BF0) = D_005A7780;
    func_00277D30(q);
    return p;
}

char *func_003D9620(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B14D0;
    *(char **)(p + 0x40) = D_005B14F4;
    *(char **)(p + 0xA0) = D_005B1574;
    *(char **)(p + 0xD0) = D_005B1608;
    *(char **)(p + 0x130) = D_005B16D4;
    *(char **)(p + 0x1D0) = D_005B178C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 8);
    func_002790E0(p + 0x340);
    func_00400FF0(p + 0x940);
    q = p + 0x9E0;
    p[0x960] = 0;
    *(char **)(p + 0x9F0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    p[0xAF0] = 0;
    p[0xAF1] = 0;
    *(short *)(p + 0xAF2) = 0;
    *(int *)(p + 0xAF8) = 0;
    *(int *)(p + 0xAFC) = 0;
    *(int *)(p + 0xB00) = 0;
    *(int *)(p + 0xB10) = 0;
    *(int *)(p + 0xB14) = 0;
    *(int *)(p + 0xB18) = 0;
    *(float *)(p + 0xB1C) = 1.0f;
    *(float *)(p + 0xB20) = 100000.0f;
    p[0xB24] = 0;
    p[0xB25] = 0;
    *(short *)(p + 0xB26) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xB28) = -1;
    func_002E7BF0(p + 0xB50);
    func_002E8A10(p + 0xB9C);
    func_00313E20(p + 0xBB4);
    func_0028C110(p + 0xBD0);
    p[0xEFD] = 0;
    *(int *)(p + 0xEC4) = 0;
    p[0xEFC] = 0;
    *(int *)(p + 0x308) = 0;
    p[0xEFE] = 0;
    *(unsigned char *)(p + 0xEFF) = 0x80;
    *(int *)(p + 0xEA0) = 0;
    *(int *)(p + 0xEDC) = 0;
    *(int *)(p + 0xEE0) = 0;
    *(int *)(p + 0xEE4) = 0;
    *(int *)(p + 0xEE8) = 0;
    *(int *)(p + 0xEEC) = 0;
    *(int *)(p + 0xEF0) = 0;
    *(int *)(p + 0xEF4) = 0;
    p[0xEF8] = 2;
    *(int *)(p + 0xED4) = 0;
    *(int *)(p + 0xED0) = 0;
    *(int *)(p + 0xECC) = 0;
    *(int *)(p + 0xEC8) = 0;
    *(int *)(p + 0xED8) = 0;
    *(short *)(p + 0xEFA) = 0;
    p[0xF01] = 0;
    p[0xF02] = 0;
    p[0xF03] = 0;
    p[0xF04] = 0;
    p[0xF05] = 0;
    p[0xF06] = 1;
    p[0xF07] = 0;
    p[0xF0A] = 0;
    p[0xF09] = 0;
    p[0xF08] = 0;
    p[0xF0B] = 0;
    p[0xF0C] = 0;
    p[0xF0D] = 0;
    return p;
}

char *func_003331F0(char *p) {
    int i;
    int j;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AC7F0;
    *(char **)(p + 0x40) = D_005AC814;
    *(char **)(p + 0xA0) = D_005AC894;
    *(char **)(p + 0xD0) = D_005AC928;
    *(char **)(p + 0x130) = D_005AC9F4;
    *(char **)(p + 0x1D0) = D_005ACAAC;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x2B);
    func_00100450(p + 0x4E0, func_00204AD0, func_00204A70, 0xC0, 2);
    func_00100450(p + 0x740, func_002790E0, func_002791E0, 0x600, 1);
    func_00400FF0(p + 0xD40);
    p[0xD60] = 0;
    func_00100450(p + 0xDF0, func_0024D930, func_0024D9A0, 0xD0, 1);
    func_0028C110(p + 0xED0);
    p[0x10F0] = 0;
    p[0x10F1] = 0;
    *(short *)(p + 0x10F2) = 0;
    *(int *)(p + 0x10F8) = 0;
    *(int *)(p + 0x10FC) = 0;
    *(int *)(p + 0x1100) = 0;
    *(int *)(p + 0x1110) = 0;
    *(int *)(p + 0x1114) = 0;
    *(int *)(p + 0x1118) = 0;
    *(float *)(p + 0x111C) = 1.0f;
    *(float *)(p + 0x1120) = 100000.0f;
    p[0x1124] = 0;
    p[0x1125] = 0;
    *(short *)(p + 0x1126) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1128) = -1;
    func_002E7BF0(p + 0x11A8);
    func_002E8A10(p + 0x11F4);
    func_00313E20(p + 0x120C);
    q = p + 0x1230;
    *(char **)(p + 0x1240) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    for (j = 0; j < 12; j++) *(int *)(p + j * 4 + 0x12B4) = 0;
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0x12B0) = 0;
    p[0x1351] = 0;
    *(int *)(p + 0x1378) = 0;
    return p;
}

char *func_003C1610(char *p) {
    int i;
    int j;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B03D0;
    *(char **)(p + 0x40) = D_005B03F4;
    *(char **)(p + 0xA0) = D_005B0474;
    *(char **)(p + 0xD0) = D_005B0508;
    *(char **)(p + 0x130) = D_005B05D4;
    *(char **)(p + 0x1D0) = D_005B068C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x34);
    func_002790E0(p + 0x680);
    func_002790E0(p + 0xC80);
    func_00100450(p + 0x1280, func_00400FF0, func_00401030, 0x1C, 2);
    q = p + 0x1360;
    p[0x12C0] = 0;
    *(char **)(p + 0x1370) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x1430, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_00100450(p + 0x1730, func_0028C110, func_0028C1A0, 0x220, 2);
    p[0x1BD0] = 0;
    p[0x1BD1] = 0;
    *(short *)(p + 0x1BD2) = 0;
    *(int *)(p + 0x1BD8) = 0;
    *(int *)(p + 0x1BDC) = 0;
    *(int *)(p + 0x1BE0) = 0;
    *(int *)(p + 0x1BF0) = 0;
    *(int *)(p + 0x1BF4) = 0;
    *(int *)(p + 0x1BF8) = 0;
    *(float *)(p + 0x1BFC) = 1.0f;
    *(float *)(p + 0x1C00) = 100000.0f;
    p[0x1C04] = 0;
    p[0x1C05] = 0;
    *(short *)(p + 0x1C06) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1C08) = -1;
    func_003C8680(p + 0x1C30);
    func_002E8A10(p + 0x1C7C);
    func_00313E20(p + 0x1C94);
    p[0x1424] = 0;
    p[0x1428] = 0;
    p[0x1427] = 0;
    p[0x1426] = 0;
    p[0x1425] = 0;
    p[0x15D0] = 0;
    p[0x15D1] = 0;
    *(int *)(p + 0x15D4) = 0;
    *(int *)(p + 0x15EC) = 0;
    *(int *)(p + 0x15E4) = 0;
    *(int *)(p + 0x15E0) = 0;
    *(int *)(p + 0x15F0) = 0;
    *(int *)(p + 0x15F4) = 0;
    *(int *)(p + 0x15DC) = 0;
    *(short *)(p + 0x15F8) = 0;
    for (j = 0; j < 40; j++) {
        p[j + 0x15FA] = 0;
        *(int *)(p + j * 4 + 0x1624) = 0;
    }
    *(int *)(p + 0x1400) = 0;
    *(int *)(p + 0x1404) = 0;
    *(int *)(p + 0x1408) = 0;
    *(int *)(p + 0x140C) = 0;
    *(int *)(p + 0x1410) = 0;
    *(int *)(p + 0x1414) = 0;
    *(int *)(p + 0x1418) = 0;
    *(int *)(p + 0x141C) = 0;
    *(int *)(p + 0x1420) = 0;
    *(int *)(p + 0x16E0) = 0;
    *(int *)(p + 0x16D0) = 0;
    *(int *)(p + 0x16D4) = 0;
    *(int *)(p + 0x16D8) = 0;
    *(float *)(p + 0x16DC) = 1.0f;
    *(int *)(p + 0x16E4) = 0;
    *(int *)(p + 0x16E8) = 0;
    *(int *)(p + 0x1CAC) = 0;
    *(int *)(p + 0x1CB0) = 0;
    *(int *)(p + 0x1CB4) = 0;
    *(int *)(p + 0x1CB8) = 0;
    *(int *)(p + 0x1CCC) = 0;
    *(int *)(p + 0x1CC8) = 0;
    *(int *)(p + 0x1CC4) = 0;
    *(int *)(p + 0x1CC0) = 0;
    *(int *)(p + 0x1CBC) = 0;
    *(int *)(p + 0x1CD0) = 0;
    *(int *)(p + 0x1CD4) = 0;
    p[0x1CE1] = 0;
    p[0x1CE2] = 0;
    p[0x1CE3] = 0;
    *(short *)(p + 0x1CE4) = 0;
    *(int *)(p + 0x1CD8) = 0;
    *(int *)(p + 0x1CDC) = 0;
    p[0x1CE0] = 5;
    p[0x1CF8] = 0;
    p[0x1CF9] = 0;
    p[0x1CE6] = 0;
    p[0x1CE7] = 0;
    p[0x1CE8] = 0;
    p[0x1CE9] = 0;
    p[0x1CEA] = 0;
    p[0x1CEB] = 0;
    p[0x1CEC] = 0;
    p[0x1CED] = 0;
    p[0x1CEE] = 0;
    p[0x1CEF] = 0;
    p[0x1CF0] = 0;
    p[0x1CF1] = 0;
    p[0x1CF2] = 0;
    p[0x1CF3] = 0;
    p[0x1CF4] = 0;
    p[0x1CF5] = 0;
    p[0x1CF6] = 0;
    return p;
}

char *func_002909A0(char *p) {
    int i;
    int j;
    int k;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005A94C0;
    *(char **)(p + 0x40) = D_005A94E4;
    *(char **)(p + 0xA0) = D_005A9564;
    *(char **)(p + 0xD0) = D_005A95F8;
    *(char **)(p + 0x130) = D_005A96C4;
    *(char **)(p + 0x1D0) = D_005A977C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x190);
    func_002790E0(p + 0x1D00);
    func_002790E0(p + 0x2300);
    func_00100450(p + 0x2900, func_002790E0, func_002791E0, 0x600, 3);
    func_00100450(p + 0x3B00, func_002790E0, func_002791E0, 0x600, 3);
    func_00100450(p + 0x4D00, func_002790E0, func_002791E0, 0x600, 5);
    func_002790E0(p + 0x6B00);
    func_00100450(p + 0x7100, func_002790E0, func_002791E0, 0x600, 3);
    func_00100450(p + 0x8300, func_0031DED0, func_0031DF20, 0x20, 3);
    func_00100450(p + 0x8458, func_001FBAB0, func_001FBC10, 0x194, 3);
    func_0024D930(p + 0x8980);
    func_00100450(p + 0x8A50, func_0024D930, func_0024D9A0, 0xD0, 3);
    func_00100450(p + 0x8CC0, func_0024D930, func_0024D9A0, 0xD0, 3);
    p[0x8F30] = 0;
    p[0x8F31] = 0;
    *(short *)(p + 0x8F32) = 0;
    *(int *)(p + 0x8F38) = 0;
    *(int *)(p + 0x8F3C) = 0;
    *(int *)(p + 0x8F40) = 0;
    *(int *)(p + 0x8F50) = 0;
    *(int *)(p + 0x8F54) = 0;
    *(int *)(p + 0x8F58) = 0;
    *(float *)(p + 0x8F5C) = 1.0f;
    *(float *)(p + 0x8F60) = 100000.0f;
    p[0x8F64] = 0;
    p[0x8F65] = 0;
    *(short *)(p + 0x8F66) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x8F68) = -1;
    p[0x8F80] = 0;
    p[0x8F81] = 0;
    *(short *)(p + 0x8F82) = 0;
    *(int *)(p + 0x8F88) = 0;
    *(int *)(p + 0x8F8C) = 0;
    *(int *)(p + 0x8F90) = 0;
    *(int *)(p + 0x8FA0) = 0;
    *(int *)(p + 0x8FA4) = 0;
    *(int *)(p + 0x8FA8) = 0;
    *(float *)(p + 0x8FAC) = 1.0f;
    *(float *)(p + 0x8FB0) = 100000.0f;
    p[0x8FB4] = 0;
    p[0x8FB5] = 0;
    *(short *)(p + 0x8FB6) = 0;
    for (j = 0; j < 10; j++) *(short *)(p + j * 2 + 0x8FB8) = -1;
    p[0x8FD0] = 0;
    p[0x8FD1] = 0;
    *(short *)(p + 0x8FD2) = 0;
    *(int *)(p + 0x8FD8) = 0;
    *(int *)(p + 0x8FDC) = 0;
    *(int *)(p + 0x8FE0) = 0;
    *(int *)(p + 0x8FF0) = 0;
    *(int *)(p + 0x8FF4) = 0;
    *(int *)(p + 0x8FF8) = 0;
    *(float *)(p + 0x8FFC) = 1.0f;
    *(float *)(p + 0x9000) = 100000.0f;
    p[0x9004] = 0;
    p[0x9005] = 0;
    *(short *)(p + 0x9006) = 0;
    for (k = 0; k < 10; k++) *(short *)(p + k * 2 + 0x9008) = -1;
    func_00100450(p + 0x9020, func_00291100, func_002047C0, 0x50, 3);
    func_0028C110(p + 0x9200);
    func_0028C110(p + 0x9420);
    func_00100450(p + 0x9930, func_00291050, func_00231560, 0x70, 5);
    p[0x9B70] = 0;
    func_001F9E40(p + 0x9C44);
    func_001F9E40(p + 0x9C58);
    func_0028C110(p + 0x9CA0);
    func_00100450(p + 0x9EC0, func_0028C110, func_0028C1A0, 0x220, 3);
    func_002E82A0(p + 0xA564);
    func_00100450(p + 0xA5A8, func_002E82A0, func_002E82E0, 0x44, 3);
    q = p + 0xA680;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_00100450(p + 0xA710, func_00203040, func_00202FE0, 0x60, 3);
    q = p + 0xA830;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0xA890;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    return p;
}

char *func_004BF580(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B8F80;
    *(char **)(p + 0x40) = D_005B8FA4;
    *(char **)(p + 0xA0) = D_005B9024;
    *(char **)(p + 0xD0) = D_005B90B8;
    *(char **)(p + 0x130) = D_005B9184;
    *(char **)(p + 0x1D0) = D_005B923C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0xC5);
    func_002790E0(p + 0x11C0);
    func_002790E0(p + 0x17C0);
    func_002790E0(p + 0x1DC0);
    func_002790E0(p + 0x23C0);
    func_002790E0(p + 0x29C0);
    func_002790E0(p + 0x2FC0);
    func_002790E0(p + 0x35C0);
    func_002790E0(p + 0x3BC0);
    func_002790E0(p + 0x41C0);
    func_002790E0(p + 0x47C0);
    func_002790E0(p + 0x4DC0);
    func_002790E0(p + 0x53C0);
    q = p + 0x59C0;
    *(char **)(p + 0x59D0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_00100450(p + 0x5A60, func_00204AD0, func_00204A70, 0xC0, 2);
    func_00100450(p + 0x5E00, func_00204CD0, func_00204C70, 0xA0, 3);
    q = p + 0x5FE0;
    *(char **)(p + 0x5FF0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x62C0, func_00204CD0, func_00204C70, 0xA0, 3);
    q = p + 0x64A0;
    *(char **)(p + 0x64B0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x6780;
    *(char **)(p + 0x6790) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x6880, func_00204CD0, func_00204C70, 0xA0, 4);
    q = p + 0x6B00;
    *(char **)(p + 0x6B10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x6C00;
    *(char **)(p + 0x6C10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x6CA0;
    *(char **)(p + 0x6CB0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x6D40;
    *(char **)(p + 0x6D50) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x6DE0;
    *(char **)(p + 0x6DF0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x6E80, func_00204CD0, func_00204C70, 0xA0, 0xA);
    func_00400FF0(p + 0x74C4);
    func_00100450(p + 0xA620, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_00100450(p + 0xA7C0, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_00100450(p + 0xA960, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0024D930(p + 0xAB10);
    func_0024D930(p + 0xABE0);
    func_0028C110(p + 0xAD20);
    p[0xAF40] = 0;
    p[0xAF41] = 0;
    *(short *)(p + 0xAF42) = 0;
    *(int *)(p + 0xAF48) = 0;
    *(int *)(p + 0xAF4C) = 0;
    *(int *)(p + 0xAF50) = 0;
    *(int *)(p + 0xAF60) = 0;
    *(int *)(p + 0xAF64) = 0;
    *(int *)(p + 0xAF68) = 0;
    *(float *)(p + 0xAF6C) = 1.0f;
    *(float *)(p + 0xAF70) = 100000.0f;
    p[0xAF74] = 0;
    p[0xAF75] = 0;
    *(short *)(p + 0xAF76) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xAF78) = -1;
    func_002E8370(p + 0xAFA0);
    func_002E8A10(p + 0xAFE4);
    func_00313E20(p + 0xAFFC);
    q = p + 0xB020;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0xB080;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0xB190;
    *(char **)(q + 0xE0) = D_005A7790;
    *(int *)(q + 0xE8) = 0;
    *(int *)(q + 0xE4) = 0;
    *(char **)(q + 0xE0) = D_005A7780;
    func_00277D30(q);
    *(int *)(p + 0xB118) = 0;
    *(int *)(p + 0xB308) = 0;
    *(int *)(p + 0xB30C) = 0;
    *(int *)(p + 0xB310) = 0;
    *(int *)(p + 0xB314) = 0;
    p[0xB2C9] = 0;
    p[0xB2CC] = 0;
    p[0xB2CD] = 0;
    p[0xB2CE] = 0;
    p[0x74C0] = 0;
    p[0x74C1] = 0;
    p[0x74C2] = 0;
    p[0x74C3] = 0;
    p[0xB2CF] = 1;
    p[0xB2D0] = 1;
    p[0xB2D1] = 0;
    p[0xB2D2] = 0;
    *(int *)(p + 0xB288) = 0;
    *(int *)(p + 0xB28C) = 0;
    *(int *)(p + 0xB290) = 0;
    *(int *)(p + 0xB294) = 0;
    *(int *)(p + 0xB298) = 0;
    *(float *)(p + 0xB29C) = 1000.0f;
    p[0xB2CB] = 0;
    p[0xB2D3] = 0;
    *(int *)(p + 0xB2A0) = 0;
    *(int *)(p + 0xB2A4) = 0;
    *(int *)(p + 0xB2A8) = 0;
    p[0xB2CA] = 0;
    p[0xB2D4] = 0;
    *(int *)(p + 0xB2C4) = 1;
    p[0xB2D5] = 0;
    *(float *)(p + 0xB2AC) = 1.0f;
    p[0xB2D6] = 0;
    p[0xB2D7] = 0;
    *(int *)(p + 0xB114) = 0;
    *(int *)(p + 0xB2B4) = 0;
    p[0xB2D8] = 0;
    *(float *)(p + 0xB2B8) = 1.0f;
    *(int *)(p + 0xB2C0) = 0;
    *(int *)(p + 0xB2BC) = 0;
    p[0xB2D9] = 0;
    func_004BFDB0(func_004BFDC0(D_01CAF2B0, 1), 0);
    *(int *)(p + 0xB2DC) = 0;
    *(int *)(p + 0xB2E0) = 0;
    *(int *)(p + 0xB2E4) = 0;
    *(int *)(p + 0xB2E8) = 0;
    *(int *)(p + 0xB2EC) = 0;
    *(int *)(p + 0xB2F0) = 0;
    *(int *)(p + 0xB2F4) = 0;
    *(int *)(p + 0xB2F8) = 0;
    *(int *)(p + 0xB2FC) = 0;
    *(int *)(p + 0xB300) = 0;
    *(int *)(p + 0xB304) = 0;
    *(int *)(p + 0xB280) = 0;
    p[0xB318] = 0;
    return p;
}

char *func_0027CE70(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_0027CE00(p + 0x130);
    *(char **)(p + 0x0) = D_005A8B10;
    *(char **)(p + 0x40) = D_005A8B34;
    *(char **)(p + 0xA0) = D_005A8BB4;
    *(char **)(p + 0xD0) = D_005A8C48;
    *(char **)(p + 0x130) = D_005A8D14;
    func_00100450(p + 0x138, func_001AAD30, func_0013D240, 0x10, 0x27);
    func_002790E0(p + 0x4C0);
    func_002790E0(p + 0xAC0);
    func_002790E0(p + 0x10C0);
    func_002790E0(p + 0x16C0);
    q = p + 0x1CC0;
    *(char **)(p + 0x1CD0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x1D80;
    *(char **)(p + 0x1D90) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    p[0x1E40] = 0;
    p[0x1EC0] = 0;
    func_0028C110(p + 0x1F40);
    func_00100450(p + 0x2160, func_0024D930, func_0024D9A0, 0xD0, 2);
    p[0x2370] = 0;
    p[0x2371] = 0;
    *(short *)(p + 0x2372) = 0;
    *(int *)(p + 0x2378) = 0;
    *(int *)(p + 0x237C) = 0;
    *(int *)(p + 0x2380) = 0;
    *(int *)(p + 0x2390) = 0;
    *(int *)(p + 0x2394) = 0;
    *(int *)(p + 0x2398) = 0;
    *(float *)(p + 0x239C) = 1.0f;
    *(float *)(p + 0x23A0) = 100000.0f;
    p[0x23A4] = 0;
    p[0x23A5] = 0;
    *(short *)(p + 0x23A6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x23A8) = -1;
    func_00100450(p + 0x2438, func_0031DED0, func_0031DF20, 0x20, 0xA);
    q = p + 0x2580;
    *(char **)(p + 0x2590) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_002E7BF0(p + 0x26A8);
    func_002E8A10(p + 0x26F4);
    func_00313E20(p + 0x270C);
    q = p + 0x2730;
    *(char **)(p + 0x2740) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x27F0;
    *(char **)(p + 0x2800) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x28B0;
    *(char **)(p + 0x28C0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x2950;
    *(char **)(p + 0x2960) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x29F0;
    *(char **)(p + 0x2A00) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    p[0x3F4] = 0;
    p[0x23C0] = 0;
    *(int *)(p + 0x23C4) = 0;
    *(int *)(p + 0x23C8) = 0;
    p[0x23CC] = 0;
    *(int *)(p + 0x23D0) = 0;
    *(int *)(p + 0x23D4) = 0;
    p[0x23D8] = 0;
    *(int *)(p + 0x23DC) = 0;
    *(int *)(p + 0x23E0) = 0;
    p[0x23E4] = 0;
    *(int *)(p + 0x23E8) = 0;
    *(int *)(p + 0x23EC) = 0;
    p[0x23F0] = 0;
    *(int *)(p + 0x23F4) = 0;
    *(int *)(p + 0x23F8) = 0;
    p[0x23FC] = 0;
    *(int *)(p + 0x2400) = 0;
    *(int *)(p + 0x2404) = 0;
    p[0x2408] = 0;
    *(int *)(p + 0x240C) = 0;
    *(int *)(p + 0x2410) = 0;
    p[0x2414] = 0;
    *(int *)(p + 0x241C) = 0x80;
    p[0x2415] = 0;
    *(int *)(p + 0x2420) = 0x80;
    p[0x2416] = 0;
    *(int *)(p + 0x2424) = 0x80;
    p[0x2417] = 0;
    *(int *)(p + 0x2428) = 0x80;
    p[0x2418] = 0;
    *(int *)(p + 0x242C) = 0x80;
    p[0x2419] = 0;
    *(int *)(p + 0x2430) = 0x80;
    p[0x241A] = 0;
    *(int *)(p + 0x2434) = 0x80;
    p[0x2724] = 0;
    p[0x2725] = 0;
    p[0x2726] = 0;
    p[0x2727] = 0;
    p[0x2728] = 0;
    p[0x2729] = 0;
    p[0x272A] = 0;
    p[0x2620] = 0;
    p[0x2621] = 0;
    p[0x2622] = 0;
    p[0x262C] = 0;
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0x2630) = 0;
    *(int *)(p + 0x2634) = 0;
    *(int *)(p + 0x2690) = 0;
    *(int *)(p + 0x2694) = 0;
    *(int *)(p + 0x2698) = 0;
    *(int *)(p + 0x269C) = 0;
    *(int *)(p + 0x26A0) = 0;
    *(int *)(p + 0x26A4) = 0;
    *(int *)(p + 0x2B30) = 0;
    *(int *)(p + 0x2B34) = 0;
    *(int *)(p + 0x2B38) = 0;
    *(int *)(p + 0x2B3C) = 0;
    p[0x2B40] = 1;
    *(int *)(p + 0x2B44) = 0;
    *(int *)(p + 0x2B48) = 0;
    return p;
}

char *func_002A80B0(char *p) {
    int i;
    char *q;
    func_0027CE70(p);
    *(char **)(p + 0x0) = D_005A9A40;
    *(char **)(p + 0x40) = D_005A9A64;
    *(char **)(p + 0xA0) = D_005A9AE4;
    *(char **)(p + 0xD0) = D_005A9B78;
    *(char **)(p + 0x130) = D_005A9C44;
    func_00100450(p + 0x2BC4, func_001AAD30, func_0013D240, 0x10, 0x84);
    func_002790E0(p + 0x35C0);
    func_002790E0(p + 0x3BC0);
    func_002790E0(p + 0x41C0);
    func_002790E0(p + 0x47C0);
    func_002790E0(p + 0x4DC0);
    func_002790E0(p + 0x53C0);
    func_00400FF0(p + 0x59C0);
    func_00400FF0(p + 0x59DC);
    func_00400FF0(p + 0x59F8);
    func_00400FF0(p + 0x5A14);
    func_00400FF0(p + 0x5A30);
    func_00400FF0(p + 0x5A4C);
    func_00400FF0(p + 0x5A68);
    func_00400FF0(p + 0x5A84);
    q = p + 0x5AA0;
    *(char **)(p + 0x5AB0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5B60;
    *(char **)(p + 0x5B70) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5C20;
    *(char **)(p + 0x5C30) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5CE0;
    *(char **)(p + 0x5CF0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5DA0;
    *(char **)(p + 0x5DB0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5E60;
    *(char **)(p + 0x5E70) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5F20;
    *(char **)(p + 0x5F30) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x5FB0;
    *(char **)(p + 0x5FC0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x6040;
    *(char **)(p + 0x6050) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x60D0;
    *(char **)(p + 0x60E0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x6160;
    *(char **)(p + 0x6170) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x61F0;
    *(char **)(p + 0x6200) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_004598E0(p + 0x62C0);
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0x2630) = 0;
    *(int *)(p + 0x2634) = 0;
    *(int *)(p + 0x2690) = 0;
    *(int *)(p + 0x2694) = 0;
    *(int *)(p + 0x2698) = 0;
    *(int *)(p + 0x269C) = 0;
    *(int *)(p + 0x26A0) = 0;
    *(int *)(p + 0x26A4) = 0;
    *(int *)(p + 0x2B30) = 0;
    *(int *)(p + 0x2B34) = 0;
    *(int *)(p + 0x2B38) = 0;
    *(int *)(p + 0x2B3C) = 0;
    *(int *)(p + 0x2B44) = 0;
    *(int *)(p + 0x2B48) = 0;
    *(int *)(p + 0x63E0) = 0;
    return p;
}

char *func_0050F150(char *p) {
    int i;
    char *q;
    *(char **)(p + 0x0) = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    p[0x7] = 0;
    p[0x6] = 0;
    p[0x5] = 0;
    p[0x4] = 0;
    p[0x18] = 0;
    *(int *)(p + 0x8) = 0;
    p[0x34] = -1;
    p[0x35] = 0;
    p[0x36] = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)(p + 0x0) = D_005BB810;
    func_002790E0(p + 0x40);
    p[0x640] = 0;
    *(int *)(p + 0x38) = 0;
    return p;
}

char *func_00386A90(char *p) {
    int i;
    char *q;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)(p + 0x0) = D_005AEB90;
    *(char **)(p + 0x40) = D_005AEBB4;
    *(char **)(p + 0xA0) = D_005AEC34;
    *(char **)(p + 0xD0) = D_005AECC8;
    func_00100450(p + 0x1E0, func_001AAD30, func_0013D240, 0x10, 0x40);
    func_002790E0(p + 0x600);
    q = p + 0xC00;
    *(float *)(p + 0xC08) = 0.3f;
    *(float *)(p + 0xC0C) = 0.98f;
    *(float *)(p + 0xC10) = 0.95f;
    *(float *)(p + 0xC14) = 50.0f;
    *(int *)(p + 0xC20) = 0;
    *(float *)(p + 0xC24) = -0.1f;
    *(int *)(p + 0xC28) = 0;
    *(int *)(p + 0xC2C) = 0;
    *(int *)(p + 0xC04) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)(q + 0x0) = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(int *)(q + 0x50) = 0;
    *(int *)(q + 0x54) = 0;
    *(int *)(q + 0x58) = 0;
    *(int *)(q + 0x5C) = 0;
    *(int *)(q + 0x60) = 0;
    *(float *)(q + 0x68) = 1.0f;
    func_0028C110(p + 0xDD0);
    p[0x1130] = 0;
    p[0x1131] = 0;
    *(short *)(p + 0x1132) = 0;
    *(int *)(p + 0x1138) = 0;
    *(int *)(p + 0x113C) = 0;
    *(int *)(p + 0x1140) = 0;
    *(int *)(p + 0x1150) = 0;
    *(int *)(p + 0x1154) = 0;
    *(int *)(p + 0x1158) = 0;
    *(float *)(p + 0x115C) = 1.0f;
    *(float *)(p + 0x1160) = 100000.0f;
    p[0x1164] = 0;
    p[0x1165] = 0;
    *(short *)(p + 0x1166) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1168) = -1;
    q = p + 0x1200;
    *(char **)(p + 0x12E0) = D_005A7790;
    *(int *)(p + 0x12E8) = 0;
    *(int *)(p + 0x12E4) = 0;
    *(char **)(p + 0x12E0) = D_005A7780;
    func_00277D30(q);
    *(short *)(p + 0x1340) = -1;
    *(short *)(p + 0x1342) = -1;
    p[0xDCB] = 1;
    return p;
}

char *func_004DB550(char *p) {
    int i;
    char *q;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)(p + 0x0) = D_005B9910;
    *(char **)(p + 0x40) = D_005B9934;
    *(char **)(p + 0xA0) = D_005B99B4;
    *(char **)(p + 0xD0) = D_005B9A48;
    func_00100450(p + 0x1E0, func_001AAD30, func_0013D240, 0x10, 0x40);
    func_002790E0(p + 0x600);
    q = p + 0xC00;
    *(float *)(p + 0xC08) = 0.3f;
    *(float *)(p + 0xC0C) = 0.98f;
    *(float *)(p + 0xC10) = 0.95f;
    *(float *)(p + 0xC14) = 50.0f;
    *(int *)(p + 0xC20) = 0;
    *(float *)(p + 0xC24) = -0.1f;
    *(int *)(p + 0xC28) = 0;
    *(int *)(p + 0xC2C) = 0;
    *(int *)(p + 0xC04) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)(q + 0x0) = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(int *)(q + 0x50) = 0;
    *(int *)(q + 0x54) = 0;
    *(int *)(q + 0x58) = 0;
    *(int *)(q + 0x5C) = 0;
    *(int *)(q + 0x60) = 0;
    *(float *)(q + 0x68) = 1.0f;
    func_0028C110(p + 0xDD0);
    p[0x1130] = 0;
    p[0x1131] = 0;
    *(short *)(p + 0x1132) = 0;
    *(int *)(p + 0x1138) = 0;
    *(int *)(p + 0x113C) = 0;
    *(int *)(p + 0x1140) = 0;
    *(int *)(p + 0x1150) = 0;
    *(int *)(p + 0x1154) = 0;
    *(int *)(p + 0x1158) = 0;
    *(float *)(p + 0x115C) = 1.0f;
    *(float *)(p + 0x1160) = 100000.0f;
    p[0x1164] = 0;
    p[0x1165] = 0;
    *(short *)(p + 0x1166) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1168) = -1;
    q = p + 0x11C0;
    *(char **)(p + 0x12A0) = D_005A7790;
    *(int *)(p + 0x12A8) = 0;
    *(int *)(p + 0x12A4) = 0;
    *(char **)(p + 0x12A0) = D_005A7780;
    func_00277D30(q);
    *(short *)(p + 0x12B0) = -1;
    *(short *)(p + 0x12B2) = -1;
    *(short *)(p + 0x12B4) = -1;
    p[0xDCB] = 1;
    *(int *)(p + 0x12B8) = 0;
    *(int *)(p + 0x12BC) = 0;
    *(int *)(p + 0x12C0) = 0;
    return p;
}

char *func_00415040(char *p) {
    int i;
    char *q;
    *(char **)(p + 0x0) = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    p[0x7] = 0;
    p[0x6] = 0;
    p[0x5] = 0;
    p[0x4] = 0;
    p[0x18] = 0;
    *(int *)(p + 0x8) = 0;
    p[0x34] = -1;
    p[0x35] = 0;
    p[0x36] = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)(p + 0x0) = D_005B31F0;
    func_00100450(p + 0x3C, func_001AAD30, func_0013D240, 0x10, 0x19);
    func_00100450(p + 0x200, func_002790E0, func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2C00);
    p[0x3270] = 0;
    p[0x6] = 0;
    p[0x5] = 0;
    p[0x4] = 0;
    *(int *)(p + 0x1D0) = 0;
    *(int *)(p + 0x1D4) = 0;
    p[0x32F4] = 2;
    p[0x32F5] = 0;
    for (i = 0; i < 9; i++) p[i + 0x32F7] = -1;
    *(int *)(p + 0x3300) = 0;
    *(int *)(p + 0x3304) = 0;
    *(int *)(p + 0x3308) = 0;
    p[0x330C] = 0;
    *(unsigned char *)(p + 0x330D) = 0xFF;
    *(unsigned char *)(p + 0x330E) = 0x80;
    p[0x330F] = 0;
    p[0x3310] = 0;
    p[0x3311] = 0;
    p[0x32F6] = 0;
    return p;
}

void func_003FF510(char *p) {
    unsigned char u;
    unsigned int fl;
    char *o;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_001ACC30(D_005BE09C, 1, 0x14, 0xA, 0);
        func_00330BD0(D_01DFABA0, 0x15, p + 0x50, 0x1E, 0);
        func_00400C10(p, 30.0f);
        func_001ACC30(D_005BE09C, 2, 0x1E, 0x3C, 0);
        func_0036DF10(D_005BE1A8, 0, 1, 0x40, 0x3C, 0);
        func_0028C740(p + 0xF40);
        p[0x1164] = 4;
        p[0x1165] = 0;
        *(short *)(p + 0x1166) = 1;
        p[0x11C0] = 2;
        *(int *)(p + 0x11D0) = 0;
        *(float *)(p + 0x11D4) = 500.0f;
        *(int *)(p + 0x11D8) = 0;
        *(float *)(p + 0x11DC) = 1.0f;
        *(float *)(p + 0x11E0) = 150.0f;
        *(int *)(p + 0x1018) = 0x3D44F;
        func_0028C3A0(p + 0xF40, 0, -1, p + 0x1F0);
        func_0028C3A0(p + 0xF40, 1, -1, p + 0x1F0);
        o = *(char **)(p + 0xFBC);
        if (o) {
            o[0xC4] = 3;
            o[0xC5] = u;
            o[0xC6] = 8;
            o[0xC7] = 0;
        }
        o = *(char **)(p + 0xFC0);
        if (o) {
            o[0xC4] = 3;
            o[0xC5] = u;
            o[0xC6] = 8;
            o[0xC7] = 0;
        }
        p[0x12D5] = 0;
        break;
    case 1:
        fl = 0;
        if (*(char **)(p + 0xFBC)) fl |= *(unsigned int *)(*(char **)(p + 0xFBC) + 8);
        if (*(char **)(p + 0xFC0)) fl |= *(unsigned int *)(*(char **)(p + 0xFC0) + 8);
        if (fl & 0x10008) {
            p[5] = 4;
            p[6] = 0;
        }
        break;
    }
}

typedef struct { float a, b, c, d; } E424;

extern E424 D_0056F3F0[];
extern float D_005BCD64;
extern short D_005BCD70[4];
extern char D_01DFC090[];
extern char D_00565614[];
extern char D_00565616[];
extern char D_00565618[];
void func_0031E570(char *);
void func_002D6F20(char *, int);
short func_002D6DB0(char *);
void func_0034B8C0(char *, char *, int);
int func_0034B800(char *, char *, short, short, float);
void func_002D2270(char *, int);
char *func_002D6540(char *);
void func_002D6C50(char *);
void func_0025EE70(char *, int, float, float, float);
int func_0025EE90(char *);
float func_00249DD0(char *, int);
extern char D_005408E0[];
extern char D_00662370[];
extern char D_01100000[];
extern char D_01100004[];
extern char D_01100018[];
extern char D_0110001C[];
void func_0010DF60();
int func_0010E080();
int func_0010E0A0();
int func_00111BE8();
void func_00111E70();
int func_00111FF0();
void func_00112228();
int func_00114A28();
void func_00114B90();
int func_0013CB00();
void func_001AAB00();
void func_001C3ED0();
int func_001C3F30();
void func_002F9620();
extern int D_01CAFF30[];

void func_00424400(char *p) {
    E424 *e = &D_0056F3F0[*(unsigned char *)(p + 0x3AB)];
    char *b;
    *(int *)(p + 0x110) |= 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        if (*(unsigned char *)(p + 5) == 4) *(int *)(p + 0x3BC) |= 0x4000;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = e->a;
        *(float *)(p + 0x68) = e->b;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(p));
        func_0041D7F0(p + 0x64, e->c * *(float *)(p + 0x10));
        func_0041D7F0(p + 0x68, e->d * *(float *)(p + 0x10));
        b = p;
        if (b) b += 0x40;
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x3B8) = 30.0f - 5.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
            p[6] = 2;
        }
        break;
    case 2:
        *(int *)(p + 0x110) |= 0x40000001;
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) func_003FA3F0(p, 8);
        break;
    }
}

void func_002D29F0(char *p) {
    char *o;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = D_005BCD64;
        if (100.0f * (2.3283064e-10f * mt_rand()) < ((float *)D_01DFC090)[*(int *)(p + 0x38F8)]) func_002D6F20(p, 1);
    case 1:
        *(short *)(p + 0x37D8) = func_002D6DB0(p);
        func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCD70[*(unsigned char *)(p + 0x38D0)]));
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565614 + *(short *)(p + 0x38FC), *(short *)D_00565616, *(float *)D_00565618) == 1) {
            func_002D2270(p, 0x18);
            break;
        }
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565614 + *(short *)(p + 0x38FC), *(short *)D_00565616, *(float *)D_00565618) == 1) {
            func_002D2270(p, 0x18);
            break;
        }
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (t < 0.0f) func_002D2270(p, 0);
        break;
    }
    func_002D6C50(p);
}

#define ANG25F(x) ((short)(unsigned short)(short)(int)(65536.0f * (x) / 360.0f + 0.5f))

void func_0025FA60(char *p) {
    char *g;
    short a;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0xD, 0x12, -1, 0, 0, -1.0f);
        func_0025EE70(p, 4, *(float *)(*(char **)(p + 0x2844) + 0x634), *(float *)(*(char **)(p + 0x2844) + 0x63C), *(float *)(*(char **)(p + 0x2844) + 0x638));
        g = func_00207480(3, 0x90, 0, 8);
        if (g) {
            *(int *)(g + 0x90) = *(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
            g[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x2867) = 1;
        *(unsigned char *)(p + 0x2868) = 0;
        *(short *)(p + 0x28DE) = 0;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) *(unsigned char *)(p + 0x2868) = 1;
        if ((unsigned char)func_0025EE90(p) == 0) *(unsigned char *)(p + 0x2866) = 1;
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DE) + ANG25F(*(float *)(*(char **)(p + 0x2844) + 0x620) * *(float *)(p + 0x10));
        if (*(unsigned char *)(p + 0x2868) == 1 &&
            *(unsigned short *)(p + 0x28DE) > (unsigned short)(short)(int)(65536.0f * *(float *)(*(char **)(p + 0x2844) + 0x640) / 360.0f + 0.5f)) {
            func_002490F0(p, 0xD, 0x15, -1, 0, 0, 24.0f);
            *(short *)(p + 0x28DE) = 0;
            func_003305E0(D_01DFABA0, 1, 4, p + 0x50, 0, 0, 0);
        }
        if (*(unsigned char *)(p + 0x2867) == 1) {
            if (!(func_00249DD0(p, 1) < 23.0f)) *(unsigned char *)(p + 0x2867) = 0;
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            break;
        }
        *(short *)(p + 0x90) = *(short *)(p + 0x90) + ANG25F(*(float *)(*(char **)(p + 0x2844) + 0x620) * *(float *)(p + 0x10));
        if (*(unsigned char *)(p + 0x2866) == 1) (*(unsigned char *)(p + 0x284C))++;
        break;
    case 2:
        func_002496D0(p);
        a = *(short *)(p + 0x90);
        *(short *)(p + 0x90) = a + ANG25F(*(float *)(*(char **)(p + 0x2844) + 0x620) * *(float *)(p + 0x10));
        if ((short)(a - *(short *)(p + 0x28DC) + 0x8000) - (short)(*(short *)(p + 0x90) - *(short *)(p + 0x28DC) + 0x8000) < 0) {
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC);
            func_002490F0(p, 0xD, 0x14, -1, 0, 0, -1.0f);
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

int func_001C3C50(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v7;
    int v6;
    int v8;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp17;
    v0 = p0;
    while ((v1 = func_00111BE8(D_005408E0, 1)) < 0) {
    }
    tmp1 = func_00111FF0(v1, 0, 2);
    func_00111FF0(v1, 0, 0);
    func_00112228(v1, 0x1000000, tmp1);
    func_00111E70(v1);
    tmp2 = func_0013CB00(0x1000000, 0x1100000);
    v3 = tmp2;
    while ((v4 = func_00114A28(v3)) == 0) {
    }
    *(int *)((stk + -64) + 64) = 0x1100000;
    *(int *)((stk + -64) + 72) = v3;
    *(int *)((stk + -64) + 68) = v4;
    *(int *)((stk + -64) + 76) = 0;
    func_0010DF60(0);
    tmp4 = func_0010E0A0(((stk + -64) + 64), 1);
    v5 = tmp4;
    do {
        tmp5 = func_0010E080(v5);
    } while (tmp5 >= 0);
    v6 = *(int *)D_01100000;
    v2 = D_01100004;
    v7 = 0;
    if ((0 < v6)) {
        v8 = (v6 + -8);
        if (v6 > 8) {
            do {
                v7 = (v7 + 8);
                *(int *)(v2 + 0) = (*(int *)(v2 + 0) + v4);
                *(int *)(v2 + 4) = (*(int *)(v2 + 4) + v4);
                *(int *)(v2 + 8) = (*(int *)(v2 + 8) + v4);
                *(int *)(v2 + 12) = (*(int *)(v2 + 12) + v4);
                *(int *)(v2 + 16) = (*(int *)(v2 + 16) + v4);
                *(int *)(v2 + 20) = (*(int *)(v2 + 20) + v4);
                *(int *)(v2 + 24) = (*(int *)(v2 + 24) + v4);
                *(int *)(v2 + 28) = (*(int *)(v2 + 28) + v4);
                v2 = (v2 + 32);
            } while ((v7 < v8));
        }
        if ((v7 < v6)) {
            do {
                v7 = (v7 + 1);
                *(int *)(v2 + 0) = (*(int *)(v2 + 0) + v4);
                v2 = (v2 + 4);
            } while ((v7 < v6));
        }
    }
    func_001C3ED0(v0, 0x1100000, 0, 0, 0);
    func_001C3ED0(v0, 0x1100000, 1, 0, 0);
    func_001C3ED0(v0, 0x1100000, 2, 0, 0);
    func_001C3ED0(v0, 0x1100000, 3, 0, 0);
    func_001C3ED0(v0, 0x1100000, 4, 0, 0);
    func_002F9620(D_01DFABA0, *(int *)D_01100018);
    func_001AAB00(D_00662370, *(int *)D_0110001C);
    func_00114B90(v4);
    tmp17 = func_001C3F30(v0);
    return tmp17;
}

typedef struct { char pad[16]; int e[4][33]; char rest[120]; } C357;

extern C357 D_0054A0E0[];
float func_0024B880(float, float, float, float);
void func_0022CBB0(char *, char *);
void func_00124F40(char *);
void func_0022CB30(char *);
extern char D_01DF5B50[];
extern char D_005BBB18[8];
extern char D_00542100[];
extern char D_005BE0D0[8];
void func_001F8580(char *, int);
int func_001F8590(char *, int);
void func_001F85A0(char *, int, int, char *);
void func_0012B2E8(char *, char *);
char *func_0012BA60(char *, char *);
void func_0012ACE8(char *, char *, char *);
int func_001EBB20(char *, char *);
int func_00197C30(char *, char *, int, int);
int func_0013CEF0(char *, char *);
int func_0013CFC0(char *, int);
int func_001EBB10(char *, char *, int);
int func_002F3120(int, int, int, int);
int func_002F3BB0(int, int, int);
extern float D_00568C80[];
extern float D_00568C84[];
void func_003AAAD0(char *, int, int);
void func_003ABE80(char *, int);
void func_002E1B90(char *);
void func_002D9450(char *, int, int, float);
void func_002E1AB0(char *, int);
void func_0021CB60(char *, unsigned int);

void func_00357560(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)D_0054A0E0[D_01CAFF30[0]].e[D_01CAFF3C[0]];
    switch (p1) {
    case 1:
        v5 = *(int *)(p0 + 12);
        if ((v5 < *(int *)(v0 + 0))) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((v5 < *(int *)(v0 + 4))) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((v5 < *(int *)(v0 + 8))) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((v5 < *(int *)(v0 + 12))) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 2:
        v1 = *(int *)(p0 + 12);
        if ((*(int *)(v0 + 16) < v1)) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((*(int *)(v0 + 20) < v1)) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((*(int *)(v0 + 24) < v1)) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((*(int *)(v0 + 28) < v1)) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 3:
        v2 = *(int *)(p0 + 12);
        if ((*(int *)(v0 + 32) < v2)) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((*(int *)(v0 + 36) < v2)) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((*(int *)(v0 + 40) < v2)) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((*(int *)(v0 + 44) < v2)) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 4:
        v3 = *(int *)(p0 + 12);
        if ((v3 < *(int *)(v0 + 48))) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((v3 < *(int *)(v0 + 52))) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((v3 < *(int *)(v0 + 56))) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((v3 < *(int *)(v0 + 60))) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 5:
        v4 = *(int *)(p0 + 12);
        if ((v4 < *(int *)(v0 + 64))) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((v4 < *(int *)(v0 + 68))) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((v4 < *(int *)(v0 + 72))) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((v4 < *(int *)(v0 + 76))) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    }
}

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

int func_0024B940(char *p, char *a, char *b) {
    float v60[4] __attribute__((aligned(16)));
    float v50[4] __attribute__((aligned(16)));
    float t;
    float r;
    float d;
    float s;
    v60[0] = (*(float *)((b) + (0x120))) - (*(float *)((a) + (0x120)));
    v60[1] = 0.0f;
    v60[2] = (*(float *)((b) + (0x128))) - (*(float *)((a) + (0x128)));
    t = (*(float *)((a) + (0x130))) + (*(float *)((b) + (0x134)));
    t = t - func_001324E0(v60);
    if (t < 0.0f) return 0;
    r = func_0024B880((*(float *)((a) + (0x124))) + (*(float *)((a) + (0x130))), (*(float *)((a) + (0x124))) - (*(float *)((a) + (0x130))), (*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))), (*(float *)((b) + (0x124))));
    if (r < 0.0f) return 0;
    if (t < r) {
        if (!((*(float *)((a) + (0x124))) <= (*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))))) {
            d = (*(float *)((a) + (0x124))) - ((*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))));
            r = func_001324E0(v60) - (*(float *)((b) + (0x134)));
            t = fsqrt((*(float *)((a) + (0x130))) * (*(float *)((a) + (0x130))) - d * d) - r;
        } else if ((*(float *)((a) + (0x124))) < (*(float *)((b) + (0x124)))) {
            d = (*(float *)((b) + (0x124))) - (*(float *)((a) + (0x124)));
            r = func_001324E0(v60) - (*(float *)((b) + (0x134)));
            t = fsqrt((*(float *)((a) + (0x130))) * (*(float *)((a) + (0x130))) - d * d) - r;
        }
        if (t < 0.0f) return 0;
        func_0024BBC0(p, a, b, v60, t);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a + 0x120), "r"(a + 0xD0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x120), "r"(b + 0xD0) : "memory");
    } else {
        v50[1] = 1.0f;
        v50[2] = 0.0f;
        v50[0] = 0.0f;
        if (!((*(float *)((a) + (0x124))) <= (*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))) / 2.0f))
            r = (*(float *)((a) + (0x124))) - ((*(float *)((a) + (0x130))) + ((*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130)))));
        else
            r = (*(float *)((a) + (0x124))) - ((*(float *)((b) + (0x124))) - (*(float *)((a) + (0x130))));
        func_0024BBC0(p, a, b, v50, r);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a + 0x120), "r"(a + 0xD0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x120), "r"(b + 0xD0) : "memory");
    }
    return 1;
}

static inline char *inner213(char *q) {
    if (*(unsigned int *)(q + 4) < 1) return 0;
    if (*(int *)(q + 8) == 0) return 0;
    return q + *(int *)(q + 8);
}

int func_00213CA0(char *p) {
    char b70[64];
    char b30[64];
    int h;
    char *r;
    if (*(unsigned char *)p == 0) {
        *(char **)(p + 0x14) = inner213(*(char **)(*(char **)(p + 0x25C0) + 0xC));
    } else if (*(unsigned char *)p == 2) {
        *(char **)(p + 0x14) = inner213(*(char **)(*(char **)(p + 0x25C0) + 0xC));
    } else {
        func_001F8580(D_01DF5B50, 9);
        if (!(unsigned char)func_001F8590(D_01DF5B50, 9)) return 0;
        func_001F85A0(D_01DF5B50, 9, *(short *)(p + 4), b70);
        func_0012B2E8(p + 0x18, b70);
        *func_0012BA60(p + 0x18, D_005BBB18) = 0;
        func_0012ACE8(b30, D_00542100, b70);
        h = func_001EBB20(D_005BE0D0, b30);
        if (!h) return 0;
        r = func_001B0FD0(p + 0x25C8, 0x10000, 0);
        if (!r) return 0;
        if (!(unsigned char)func_00197C30(p + 0x25D8, r, 0x10000, 5)) return 0;
        if (!(unsigned char)func_0013CEF0(p + 0x25F4, p + 0x25D8)) return 0;
        if (!func_0013CFC0(p + 0x25F4, h + 1)) return 0;
        if (!(unsigned char)func_001EBB10(D_005BE0D0, b30, *(int *)(p + 0x25F8))) return 0;
        *(int *)(p + 0x14) = *(int *)(p + 0x25F8);
    }
    return 1;
}

int func_002F30C0(int k, int a, int b, int c) {
    int r = 0;
    switch ((unsigned char)k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 39: case 40: case 64: case 65:
        r = func_002F3120(k, a, b, c);
        break;
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63: case 66: case 67: case 68: case 69: case 70: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122: case 123: case 124: case 125: case 126: case 127:
        r = func_002F3BB0(k, a, c);
        break;
    case 71:
        break;
    }
    return r;
}

void func_003AA990(char *p, signed char k) {
    *(signed char *)(p + 0x4BE6) = *(signed char *)(p + 0x4BE5);
    *(signed char *)(p + 0x4BE5) = *(signed char *)(p + 0x4BE4);
    *(signed char *)(p + 0x4BE4) = k;
    *(unsigned char *)(p + 0x4E14) = 0;
    func_003AAAD0(p, 0, *(unsigned char *)(p + 0x4BE4));
    *(unsigned char *)(p + 6) = 0;
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 12:
        *(unsigned char *)(p + 0x4E14) = 1;
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38:
        break;
    }
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 33: case 34: case 35: case 36: case 37: case 38:
        func_003ABE80(p, 1);
        break;
    case 12: case 13: case 14: case 15: case 32:
        func_003ABE80(p, 0);
        break;
    }
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 36: case 37: case 38:
        D_00568C80[0] = 70.0f;
        D_00568C84[0] = 60.0f;
        break;
    case 35:
        *(float *)(p + 0x50D8) = 350.0f;
        *(float *)(p + 0x50DC) = 300.0f;
        D_00568C80[0] = 350.0f;
        D_00568C84[0] = 300.0f;
        break;
    }
    *(unsigned char *)(p + 0x5164) = 0;
}

void func_002E00E0(char *p, int a, int b, signed char c) {
    func_002E1B90(p);
    *(int *)(p + 0x2AEC) = b;
    *(int *)(p + 0x2AE8) = a;
    *(unsigned char *)(p + 0x28A9) = 0;
    func_002D9450(p, 7, 0, 0.0f);
    func_002E1AB0(p, b);
    func_0021C7A0(p, 0x29);
    func_0021CB60(p, 0x10000);
    if (c == -1) *(signed char *)(p + 0x2AE2) = *(signed char *)(*(char **)(p + 0x2AEC) + 0x18);
    else *(signed char *)(p + 0x2AE2) = c;
    switch (*(signed char *)(p + 0x2AE2)) {
    case -1: case 0:
    default:
        if (*(unsigned int *)(p + 0x2898) & 2) *(unsigned char *)(p + 0x2AE1) = 3;
        else *(unsigned char *)(p + 0x2AE1) = 1;
        break;
    case 1:
        if (*(unsigned int *)(p + 0x2898) & 2) *(unsigned char *)(p + 0x2AE1) = 3;
        else *(unsigned char *)(p + 0x2AE1) = 2;
        break;
    case 2: *(unsigned char *)(p + 0x2AE1) = 3; break;
    case 3: *(unsigned char *)(p + 0x2AE1) = 3; break;
    case 4: *(unsigned char *)(p + 0x2AE1) = 5; break;
    case 5: *(unsigned char *)(p + 0x2AE1) = 5; break;
    case 6: *(unsigned char *)(p + 0x2AE1) = 6; break;
    case 7:
        if (*(unsigned int *)(p + 0x2898) & 2) *(unsigned char *)(p + 0x2AE1) = 3;
        else *(unsigned char *)(p + 0x2AE1) = 4;
        break;
    }
    if (*(float *)(p + 0x2AD4) <= 0.0f && *(unsigned char *)(p + 0x2AE1) != 3) *(unsigned char *)(p + 0x2AE1) = 3;
    *(unsigned char *)(p + 0x2998) = 0;
}
