#include "game/mt_rand.h"
void func_0041D800(char *, float, float);

void func_0048C070(char *);

void func_00423240(char *p) {
    void func_0041DAB0(char *, char *, int);
    int func_0041D6B0(char *, float);
    void func_0048AFC0(char *, int);
    int func_0048B150(char *);
    void func_0041D6E0(char *, char *, int, float);
    char *b;
    *(int *)(p + 0x45C) |= 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(float *)(p + 0x60) = 5.0f * (2.3283064e-10f * mt_rand() - 0.5f);
        *(float *)(p + 0x64) = 0.5f;
        *(float *)(p + 0x68) = -12.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 1.0f;
        *(float *)(p + 0x7C) = 1.0f;
        *(float *)(p + 0x458) = 30.0f;
        p[6] = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0048B150(p));
        func_0041D800(p + 0x68, *(float *)(p + 0x78) * *(float *)(p + 0x10), 0.0f);
        b = p;
        if (p) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) {
            func_0048C070(p);
        }
        break;
    }
}

extern char D_01CAFF0C[];

void func_0038F360(unsigned char *p);

float func_0041DB20(char *);

void func_0038F300(char *, int);

void func_0038F2C0(char *, int);

int func_0038F490(char *);

void func_0038F830(char *);

void func_0041F600(char *p) {
    void func_0041DAB0(char *, char *, int);
    int func_0041D6B0(char *, float);
    void func_0041D6E0(char *, char *, int, float);
    char *b;
    *(int *)(p + 0x42C) |= 0x2000;
    *(int *)(p + 0x42C) |= 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        func_0038F360((unsigned char *)p);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = -2.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        b = p;
        if (p) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0(p + 0x428, *(float *)(p + 0x10)) == 1) {
            func_0038F830(p);
            p[6] = 0;
        }
        break;
    }
    if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A) == 0x11 &&
        func_0041DB20(p + 0x50) < 500.0f) {
        *(int *)(p + 0x42C) |= 0x4000;
        if (100.0f * (2.3283064e-10f * mt_rand()) < 50.0f) {
            func_0038F2C0(p, 2);
        } else {
            func_0038F2C0(p, 3);
        }
    }
}

void func_003FA440(char *, int);

int func_003F9F90(char *);

void func_0041D7F0(char *, float);

void func_003FA3F0(char *, int);

typedef struct { float a, b, c, d; } E424;

extern E424 D_0056F3F0[];

void func_00424400(char *p) {
    int func_0041D6B0(char *, float);
    void func_0041D6E0(char *, char *, int, float);
    void func_0041DAB0(char *, char *, int);
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

char *func_00207480(int, int, char *, int);

void func_0041E120(char *, float);

void func_0041D840(char *a, char *b, float s);

float func_0041E060(char *);

void func_0041E9F0(char *p) {
    int func_0024E800(char *);
    void func_0041DAB0(char *, char *, int);
    char *b;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        *(float *)(p + 0x54) = func_0041E060(b);
        *(int *)(p + 0x80) = 0;
        *(int *)(p + 0x88) = 0;
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x390, 1.0f);
        func_00207480(3, 0x198, p + 0x3D0, 16);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041E120(b, 0.0f);
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F830(p);
        }
    }
}

void func_0034BA60(int, char *, int, int, int);

void func_0048B400(char *);

void func_0048B320(char *);

void func_00422AA0(char *p) {
    int func_0024E800(char *);
    void func_0048AFC0(char *, int);
    void func_0041DAB0(char *, char *, int);
    void func_0041DBA0(char *, char *);
    int func_0048B150(char *);
    void func_0048AF80(char *, int);
    char *g;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0034BA60(0x28, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_0048B400(p);
        func_0048B320(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        g = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (150.0f + *(float *)(g + 0x54) < *(float *)(p + 0x54)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) - 2.0f;
        } else {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 2.0f;
        }
        func_0041DBA0(p, p + 0xA40);
        func_0041DAB0(p + 0x50, p + 0x90, func_0048B150(p));
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            func_0048AF80(p, 0xB);
            *(int *)(p + 0x454) = 0;
        }
    }
}

void func_0048B270(char *, char *, unsigned int);

void func_00422E10(char *p) {
    void func_0048AFC0(char *, int);
    void func_0041DAB0(char *, char *, int);
    int func_0048B150(char *);
    void func_0048B3F0(char *);
    *(int *)(p + 0x45C) |= 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(float *)(p + 0x458) = 0.0f;
        func_00207480(3, 0x1D8, p + 0x400, 0x10);
        p[6] = 1;
    case 1:
        func_0048B270(p, p + 0xA40, (unsigned int)(*(float *)(p + 0x458) * 64.0f / 100.0f));
        *(int *)(p + 0x45C) |= 0x20000000;
        func_0041DAB0(p + 0x50, p + 0x90, func_0048B150(p));
        *(float *)(p + 0x458) = *(float *)(p + 0x458) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x458) < 120.0f)) {
            func_0048C070(p);
            func_0048B3F0(p);
        }
        break;
    }
}

void func_00421BF0(char *p) {
    void func_0048AFC0(char *, int);
    void func_0048B020(char *);
    int func_0048B150(char *);
    void func_0041DAB0(char *, char *, int);
    int func_0041D6B0(float *, float);
    void func_0048AF80(char *, int);
    *(int *)(p + 0x45C) = *(int *)(p + 0x45C) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0048B020(p);
        *(float *)(p + 0x454) = 0.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0048B150(p));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x458), *(float *)(p + 0x10)) == 1) {
            *(float *)(p + 0x454) = *(float *)(p + 0x454) + 1.0f;
            if (!(*(float *)(p + 0x454) <= 2.0f)) {
                func_0048AF80(p, 4);
            } else {
                func_0048C070(p);
                if (*(unsigned char *)(p + 5) == 0) {
                    func_0048B020(p);
                }
            }
        }
    }
    if (*(float *)(p + 0x4BC) <= 0.0f && *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A) == 0x11 &&
        func_0041DB20(p + 0x50) < 200.0f) {
        func_0048AF80(p, 0x10);
    }
}

void func_00421D50(char *p) {
    void func_0041D6E0(char *, char *, int, float);
    void func_0048AFC0(char *, int);
    void func_0048B020(char *);
    int func_0048B150(char *);
    void func_0041DAB0(char *, char *, int);
    int func_0041D6B0(float *, float);
    void func_0048AF80(char *, int);
    float func_0041DB40(char *);
    float f;
    char *b;
    *(int *)(p + 0x45C) = *(int *)(p + 0x45C) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        f = func_0041DB20(p + 0x50);
        if (!(f <= 2000.0f)) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 12.0f;
            *(float *)(p + 0x6C) = 1.0f;
        } else if (!(f <= 1000.0f)) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 8.0f;
            *(float *)(p + 0x6C) = 1.0f;
        } else {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 4.0f;
            *(float *)(p + 0x6C) = 1.0f;
        }
        func_0048B020(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0048B150(p));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if (func_0041DB40(p + 0x50) < 200.0f) {
            func_0048AF80(p, 5);
            break;
        }
        if ((unsigned char)func_0041D6B0((float *)(p + 0x458), *(float *)(p + 0x10)) == 1) {
            func_0048C070(p);
            if (*(unsigned char *)(p + 5) == 1) {
                func_0048B020(p);
            }
        }
    }
    if (*(float *)(p + 0x4BC) <= 0.0f && *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A) == 0x11 &&
        func_0041DB20(p + 0x50) < 200.0f) {
        func_0048AF80(p, 0x10);
    }
}

float func_00132470(char *, char *);

short func_00131D10(float, float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_0041D9E0(char *a, char *b, char *out) {
    float d[4];
    float r[4];
    VSUB(d, b, a);
    r[0] = 6.283185f * ((float)func_00131D10(-d[1], func_00132470(a, b)) / 65536.0f);
    r[1] = 6.283185f * ((float)func_00131D10(d[0], d[2]) / 65536.0f);
    r[3] = 1.0f;
    r[2] = 0.0f;
    QCOPY(out, r);
}

int func_001AD140();

int func_0041D670(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 0);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 0) = 0;
    }
    return v2;
}

void func_0041D820(char *p0, float f0, float f1) {
    float v0;
    v0 = (*(float *)(p0 + 0) + f0);
    *(float *)(p0 + 0) = v0;
    if (v0 < f1) {
        *(float *)(p0 + 0) = f1;
    }
}

void func_00422450(p0) char *p0; {
    int func_0041D6B0(char *, float);
    void func_0041D6E0(int, char *, int, float);
    void func_0041DAB0();
    float func_0041DB40();
    int func_0048AF80();
    void func_0048AFC0();
    void func_0048B020();
    int func_0048B150();
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    float v7;
    int v8;
    int v9;
    int tmp0;
    float tmp2;
    int tmp3;
    int tmp5;
    int tmp6;
    int tmp7;
    int tmp12;
    int tmp13;
    v0 = *(int *)(p0 + 1116);
    *(int *)(p0 + 1116) = (v0 | 0x10000000);
    v1 = *(unsigned char *)(p0 + 6);
    v2 = p0;
    switch (v1) {
    case 0:
        func_0048AFC0(p0, -1, v0);
        func_0048B020(v2);
        *(int *)(v2 + 96) = 0;
        *(int *)(v2 + 100) = 0;
        *(int *)(v2 + 104) = 0;
        *(int *)(v2 + 108) = 0x3f800000;
        *(char *)(v2 + 6) = 1;
        /* fall through */
    case 1:
        tmp0 = func_0048B150(v2);
        func_0041DAB0((v2 + 80), (v2 + 144), tmp0);
        v6 = (int)v2;
        if (v2 != 0) {
            v6 = (v6 + 64);
        }
        func_0041D6E0(v6, (v2 + 96), 1, *(float *)(v2 + 16));
        v7 = func_0041DB40((v2 + 80));
        v8 = 0x42700000;
        if (v7 < 100.0f) {
            *(int *)(v2 + 1112) = v8;
            *(int *)(v2 + 104) = 0xc1400000;
            *(char *)(v2 + 6) = 2;
        } else {
            tmp2 = func_0041DB40((v2 + 80));
            v9 = (int)v2;
            if (tmp2 > 500.0f) {
                tmp3 = func_0048AF80(v9, 1);
            } else {
                *(int *)(v2 + 104) = 0;
                tmp5 = func_0041D6B0((v2 + 1112), *(float *)(v2 + 16));
                tmp6 = (tmp5 & 255);
                v3 = (int)v2;
                if (tmp6 == 1) {
                    tmp7 = func_0048AF80(v3, 6);
                }
            }
        }
        break;
    case 2:
        *(float *)(v2 + 1204) = (*(float *)(v2 + 1204) + (3.0f * *(float *)(v2 + 16)));
        func_0041DAB0((v2 + 80), (v2 + 144), 32767);
        v4 = (int)v2;
        if (v2 != 0) {
            v4 = (v4 + 64);
        }
        func_0041D6E0(v4, (v2 + 96), 1, *(float *)(v2 + 16));
        tmp12 = func_0041D6B0((v2 + 1112), *(float *)(v2 + 16));
        v5 = (int)v2;
        if ((tmp12 & 255) == 1) {
            tmp13 = func_0048AF80(v5, 1);
        }
        break;
    }
}

void func_00422D00(p0) char *p0; {
    int func_0024E800();
    void func_0041DAB0();
    void func_0041DBA0();
    int func_0048AF80();
    void func_0048AFC0();
    void func_0048B3F0();
    int v0;
    char *v1;
    int v2;
    int v3;
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 1);
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0048AFC0(p0, -1);
        *(int *)(v1 + 96) = 0;
        *(int *)(v1 + 100) = 0;
        *(int *)(v1 + 104) = 0;
        *(int *)(v1 + 108) = 0x3f800000;
        *(char *)(v1 + 1096) = (*(signed char *)(v1 + 1096) + -1);
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        if (*(signed char *)(v1 + 1096) > 0) {
            func_0041DAB0((v1 + 80), (v1 + 144), (int)(4096.0f * *(float *)(v1 + 16)));
        }
        func_0041DBA0(v1, (v1 + 2624));
        v2 = func_0024E800((v1 + 4192));
        if ((v2 & 255) == 1) {
            v3 = (int)v1;
            if (*(signed char *)(v1 + 1096) <= 0) {
                func_0048B3F0(v3);
                v2 = func_0048AF80(v1, 0);
            } else {
                *(int *)(v1 + 1108) = 0x41f00000;
                v2 = func_0048AF80(v1, 11);
            }
        }
        break;
    }
}
