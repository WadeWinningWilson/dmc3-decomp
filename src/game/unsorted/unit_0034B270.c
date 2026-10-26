#include "game/mt_rand.h"
int func_0034B940(char *, char *);

float func_001324B0(char *, char *);

int func_0034B800(char *a, char *b, int ang, int w, float dist) {
    short r = func_0034B940(a, b);
    unsigned short h = (unsigned int)(unsigned short)w >> 1;
    int d = (short)(r - (short)ang);
    if (d < 0) d = -d;
    if (h < d) return 0;
    return !(func_001324B0(a, b) > dist);
}

extern int D_005BE190;

extern int D_005BE194;

extern signed char D_005BE11C;

void func_002F2FB0(int);

char *func_002F3080(int);

void func_0034B270(signed char k, int a, int b) {
    extern unsigned char D_005BE120;
    extern unsigned char D_005BE124;
    extern char *D_01CAFF0C[];
    char *e;
    int *q;
    D_005BE190 = a;
    D_005BE194 = b;
    D_005BE11C = k;
    D_005BE120 = 0;
    D_005BE124 = 0;
    switch (k) {
    case 0: break;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    case 5:
        func_002F2FB0(*(int *)(D_01CAFF0C[0] + 0x20));
        q = &D_005BE190;
        while (1) {
            e = func_002F3080(*(int *)(D_01CAFF0C[0] + 0x20));
            if ((e != 0) ^ 1) break;
            if (*(signed char *)(e + 0x46) == 0x2C) *q++ = (int)e;
        }
        break;
    case 6: break;
    case 7: break;
    case 8: break;
    case 9: break;
    case 10: break;
    case 11: break;
    case 12: break;
    case 13: break;
    }
}

/* Picks an index with the given percentage weights. */
int func_0034BBE0(int n, float *w) {
    float r = 100.0f * (2.3283064e-10f * mt_rand());
    float acc = 0.0f;
    int i;
    for (i = 0; i < n - 1; i++) {
        if (acc <= r && r < acc + *w) {
            return i;
        }
        acc += *w;
        w++;
    }
    return n - 1;
}

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, char *, int, int, int);

void func_00330BD0(char *, int, char *, int, int);

void func_0034BA60(int a, char *b, signed char c, int d, int e) {
    int k = d;
    switch (c) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23:
        k = 0;
        break;
    case 24:
        k = 0x6;
        break;
    case 25:
        k = 0x7;
        break;
    case 26:
        k = 0x8;
        break;
    case 31:
        k = 0xd;
        break;
    case 32:
        k = 0xe;
        break;
    case 34:
        k = 0x10;
        break;
    case 35:
        k = 0x11;
        break;
    case 36:
        k = 0x12;
        break;
    case 37:
        k = 0x13;
        break;
    case 38:
        k = 0x14;
        break;
    case 39:
        k = 0x15;
        break;
    case 40:
        k = 0x16;
        break;
    case 41:
        k = 0x17;
        break;
    case 50:
        k = 0x1d;
        break;
    case 43:
        k = 0x19;
        break;
    case 51:
        k = 0x1e;
        break;
    case 49:
        k = 0x1c;
        break;
    case 52:
        k = 0x1f;
        break;
    case 42: case 53: case 54:
        k = 0x20;
        break;
    case 55:
        k = 0x22;
        break;
    case 58:
        k = 0x23;
        break;
    case 29:
        k = 0xb;
        break;
    case 30:
        k = 0xc;
        break;
    case 28:
        k = 0xa;
        break;
    case 44:
        k = 0x1a;
        break;
    case 27: case 33: case 45: case 46: case 47: case 48: case 56: case 57: case 59: case 60: case 61:
        break;
    }
    func_00330BD0(D_01DFABA0, a & 0xFFFF, b, k, d);
    if (e != 0 && ((unsigned int)a >> 16) != 0) {
        func_003305E0(D_01DFABA0, 0, (unsigned int)a >> 16, b, 0, 0, 0);
    }
}

float func_0011DA38(float);

float func_0011D798(float);

void func_0034B9A0(float *v, int ang, float s, float y, float t) {
    float a = 6.283185f * ((float)ang / 65536.0f);
    v[0] = v[0] + t * (s * func_0011DA38(a));
    v[1] = v[1] + y * t;
    v[2] = v[2] + t * (s * func_0011D798(a));
}

int func_0034C1C0(int a, int lim, int d) {
    int v = a + d;
    return v < lim ? v : lim;
}

int func_0034C1E0(int a, int lim, int d) {
    int v = a - d;
    return lim < v ? v : lim;
}

float func_00132470(char *, char *);

float func_0034B980(char *q) {
    extern char D_01CAFF0C[];
    return func_00132470(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, q);
}

float func_0034C200(float *t, int n, float x) {
    int i;
    if (x <= t[0]) {
        return t[1];
    }
    if (!(x < t[n * 2 - 2])) {
        return t[n * 2 - 1];
    }
    for (i = 0; i < n - 1; i++) {
        if (t[i * 2] <= x && x <= t[i * 2 + 2]) {
            float *e = &t[i * 2];
            float r = (x - e[0]) / (e[2] - e[0]);
            return (1.0f - r) * e[1] + r * e[3];
        }
    }
    return 0.0f;
}

int func_00201770();

float func_0034B5E0(p0, p1) int p0; char *p1; {
    extern char D_01CAFF0C[];
    char stk[0x50] __attribute__((aligned(16)));
    char *v0;
    int v1;
    float v2;
    int v3;
    int tmp0;
    int tmp3;
    v3 = 0;
    v0 = (char *)p0;
    if (p1 != 0) {
        v1 = *(signed char *)(p1 + 69);
        tmp0 = 4;
        if (v1 != tmp0) {
            switch (v1) {
            case 0:
                v3 = 64;
                break;
            case 3:
                v3 = 16;
                break;
            case 2:
                v3 = 2;
                break;
            }
        } else {
            v3 = 32;
        }
    }
    tmp3 = func_00201770((*(int *)(*(char **)D_01CAFF0C + 20) + 1352), v0, ((stk + -32) + 32), ((stk + -32) + 48), v3);
    if ((tmp3 & 255) == 1) {
        v2 = (*(float *)(v0 + 4) - *(float *)((stk + -32) + 36));
    } else {
        v2 = 0.0f;
    }
    return v2;
}

int func_0034B8C0(p0, p1, p2) char *p0; char *p1; int p2; {
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = *(short *)(p1 + 0);
    v1 = v0;
    if (v0 < 0) {
        v1 = -v0;
    }
    v2 = (short)p2;
    if ((v1 < v2)) {
        v3 = 1;
        *(short *)(p0 + 0) = (*(short *)(p0 + 0) + v0);
        *(short *)(p1 + 0) = 0;
    } else {
        if (v0 < 0) {
            p2 = (short)-v2;
        }
        v3 = 0;
        *(short *)(p0 + 0) = (*(short *)(p0 + 0) + p2);
        *(short *)(p1 + 0) = (*(short *)(p1 + 0) - p2);
    }
    return v3;
}

float func_0034C160(float f0, float f1, float f2) {
    float v0;
    float v1;
    v0 = (f0 + f2);
    if (v0 < f1) {
        return v0;
    } else {
        v1 = f1;
        return v1;
    }
}

float func_0034C190(float f0, float f1, float f2) {
    float v0;
    float v1;
    v0 = (f0 - f2);
    if (v0 > f1) {
        return v0;
    } else {
        v1 = f1;
        return v1;
    }
}

void func_0034B330(int p0) {
    extern char D_005BE120;
    extern char D_005BE124;
    D_005BE120 = p0;
    D_005BE124 = 1;
}
