#include "game/mt_rand.h"
extern char D_01CAFF0C[];

void func_0024E7B0(char *, int, int);

char *func_002D6540(char *);

int func_0034B800(char *, char *, short, short, float);

extern short D_00565624[];

extern short D_00565626[];

extern float D_00565628[];

extern int D_00565700[];

extern short D_005BCD90[4];

extern float D_005BCD98;

extern float D_005BE1C4;

void func_002D3DE0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E780(char *, int, int);
    int func_0024E800(char *);
    void func_00277DE0(char *, int *, char *, int);
    void func_00277E70(char *);
    void func_00277ED0(char *);
    void func_00278060(char *, int);
    void func_002D2270(char *, int);
    void func_002D6C50(char *);
    short func_002D6DB0(void);
    void func_0031E570(char *);
    void func_0034B8C0(char *, char *, int);
    extern signed char D_005BCD60[];
    extern int D_01CAFF14[];
    char *o;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = D_005BE1C4;
    case 1:
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x38DC) = D_005BCD98;
        }
        break;
    case 2:
        *(short *)(p + 0x37D8) = func_002D6DB0();
        *(short *)(p + 0x37D8) += 0x5B0;
        func_0034B8C0(p + 0x38FC, p + 0x37D8, *(float *)(p + 0x10) * D_005BCD90[*(unsigned char *)(p + 0x38D0)]);
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_00565624[0] + *(short *)(p + 0x38FC), D_00565626[0], D_00565628[0]) == 1) func_002D2270(p, 0xD);
            o = func_002D6540(p);
            if (o != 0 && (unsigned char)func_0034B800(o + 0x50, p + 0x50, D_00565624[0] + *(short *)(p + 0x38FC), D_00565626[0], D_00565628[0]) == 1) func_002D2270(p, 0xD);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(char **)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x6C8) + 0x104);
            *(signed char *)(o + 0x9A) = 3;
        }
    }
    func_002D6C50(p);
}

extern int D_005BE09C;

extern float D_005656C0[];

extern float D_00565680[];

void func_002D6F20(char *, int);

void func_0024DB10(char *, int, int, int, int, int, int);

void func_001ACC30(int, int, int, int, int);

void func_0036DF10(char *, int, int, int, int, int);

void func_002D6C60(char *, int);

void func_002D3270(char *p) {
    unsigned char func_0024E800(char *);
    extern char D_005BE1A8[8];
    void func_0031E570(char *);
    short func_002D6DB0(void);
    int func_0024E780(char *, int, int);
    char *func_00207480(int, int, char *, int);
    int s;
    short v;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
        (*(signed char *)(p + 0x3906))++;
        *(short *)(p + 0x38FE) = *(short *)(p + 0x38FC);
        if (100.0f * (2.3283064e-10f * mt_rand()) < D_005656C0[*(int *)(p + 0x38F8)]) {
            func_002D6F20(p, 1);
        }
    case 1:
        if ((*(float *)(p + 0x38DC) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x38DC) = 60.0f;
        }
        break;
    case 2:
        if ((*(float *)(p + 0x38DC) -= *(float *)(p + 0x10)) <= 0.0f) {
            (*(unsigned char *)(p + 5))++;
            break;
        }
        s = func_002D6DB0();
        if (s < 0) s += 0x10000;
        v = (float)s / *(float *)(p + 0x38DC);
        v = v < 0x71C ? v : 0x71C;
        *(short *)(p + 0x38FC) += (float)v * *(float *)(p + 0x10);
        break;
    case 3:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            if (100.0f * (2.3283064e-10f * mt_rand()) < D_00565680[*(unsigned char *)(p + 0x38D0)]) {
                func_0024DB10(p + 0x2F70, 3, 6, 0, 0, 1, 10);
                func_0024DB10(p + 0x3040, 3, 6, 0, 0, 1, 10);
                *(unsigned char *)(p + 0x37DA) = 0x12;
                *(unsigned char *)(p + 5) = 0;
                break;
            }
        }
        if (func_0024E800(p + 0x2F70) == 1) {
            func_0024DB10(p + 0x2F70, 0, 7, 0x6F, 0, 1, 4);
            func_0024DB10(p + 0x3040, 0, 7, 0x6F, 0, 1, 4);
            *(unsigned char *)(p + 0x37DA) = 2;
            *(unsigned char *)(p + 5) = 0x32;
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 2) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 2);
        func_001ACC30(D_005BE09C, 2, 0x1E, 10, 0);
        func_0036DF10(D_005BE1A8, 0, 1, 0x32, 10, 0);
        func_00207480(3, 0x319, p + 0x1EF0, 0x10);
    }
    func_002D6C60(p, *(short *)(p + 0x38FE));
}

int func_002D65E0(char *);

void func_002D6D30(char *);

typedef struct O2D3 { char pad[0x2F70]; char sub[16]; } O2D3;

void func_002D38A0(O2D3 *q) {
    extern signed char D_005BCD60[];
    void func_0031E570(char *);
    int func_0024E780(char *, int, int);
    int func_0024E800(char *);
    void func_002D2270(char *, int);
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        p[0x1E2] = 3;
        p[0x1E3] = 2;
    case 1:
        if ((unsigned char)func_0024E780(q->sub, 0, 0) == 2) {
            func_0024E7B0(q->sub, 0, 0);
            if (*(char **)(p + 0x3914) != 0) {
                (*(char **)(p + 0x3914))[0x3B] = 0;
            }
        }
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            if (func_002D65E0((char *)p)) {
                func_002D2270((char *)p, 0x17);
            } else {
                func_002D2270((char *)p, D_005BCD60[p[0x38D0]]);
            }
            func_002D6D30((char *)p);
        }
        break;
    }
}

extern float D_005BE1D0;

extern float D_005BCDC8;

extern short D_005BCDC0[4];

void func_002D5170(O2D3 *q) {
    extern signed char D_005BCD60[];
    void func_0031E570(char *);
    int func_0024E780(char *, int, int);
    int func_0024E800(char *);
    void func_002D2270(char *, int);
    short func_002D6DB0(void);
    void func_0034B8C0(short *, short *, int);
    void func_00207480(int, int, char *, int);
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        *(float *)(p + 0x38DC) = D_005BE1D0;
    case 1:
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) {
            p[5]++;
            *(float *)(p + 0x38DC) = D_005BCDC8;
        }
        break;
    case 2:
        *(short *)(p + 0x37D8) = func_002D6DB0();
        func_0034B8C0((short *)(p + 0x38FC), (short *)(p + 0x37D8),
                      *(float *)(p + 0x10) * D_005BCDC0[*(unsigned char *)(p + 0x38D0)]);
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) {
            p[5]++;
        }
        break;
    case 3:
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            func_002D2270((char *)p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
        break;
    }
    if ((unsigned char)func_0024E780(q->sub, 0, 2) == 1) {
        func_0024E7B0(q->sub, 0, 2);
        func_00207480(3, 0x317, (char *)p + 0x1EF0, 16);
    }
}

extern float D_005656A0[];

int func_002075D0(int, int, int, int, int);

void func_002D56B0(O2D3 *q) {
    extern signed char D_005BCD60[];
    void func_0031E570(char *);
    int func_0024E780(char *, int, int);
    int func_0024E800(char *);
    void func_002D2270(char *, int);
    extern char D_005BE1A8[8];
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        if (100.0f * (2.3283064e-10f * mt_rand()) < D_005656A0[*(int *)(p + 0x38F8)]) {
            func_002D6F20((char *)p, 2);
        }
    case 1:
        if ((unsigned char)func_0024E780(q->sub, 0, 1) == 1) {
            func_001ACC30(D_005BE09C, 2, 0x1E, 0x3C, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x40, 0x3C, 0);
            *(int *)(p + 0x3918) = func_002075D0(3, 0x143, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1, 0x10);
            p[5]++;
        }
        break;
    case 2:
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            func_002D2270((char *)p, D_005BCD60[p[0x38D0]]);
        }
        break;
    }
}

typedef struct { float x, y, z, w; } V4f;

int func_002D7480(char *p, int k, V4f *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4f *)(*(char **)(*(char **)(p + 1676) + 260) + 48);
        *r = 150.0f;
        return 1;
    case 1:
        *out = *(V4f *)(*(char **)(*(char **)(p + 1664) + 260) + 48);
        *r = 150.0f;
        return 1;
    }
    return 0;
}

void func_002D3720(char *p) {
    int func_0024E800(char *);
    void func_0031E570(char *);
    void func_002D2270(char *, int);
    extern signed char D_005BCD60[];
    int k = *(unsigned char *)(p + 5);
    switch (k) {
    case 0:
        *(char *)(p + 5) = k + 1;
        func_0031E570(p + 0x1D0);
        *(char *)(p + 0x1E2) = 3;
        *(char *)(p + 0x1E3) = 2;
    case 1:
        if ((func_0024E800(p + 0x2F70) & 255) == 1) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
        break;
    }
}

void func_002D58C0(char *p) {
    int func_0024E800(char *);
    void func_0031E570(char *);
    void func_002D2270(char *, int);
    extern signed char D_005BCD60[];
    unsigned char func_0024E780(char *, int, int);
    short func_002D6DB0(char *);
    void func_0034B8C0(char *, char *, int);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        func_0031E570(p + 0x1D0);
    case 1:
        if (func_0024E780(p + 0x2F70, 0, 2) == 1) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(963.0f * *(float *)(p + 0x10)));
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
        break;
    }
}

extern char *D_00565600[];

typedef struct { int v; short a; short r; float d; } zone12;

int func_002D2700(char *p) {
    zone12 *t = (zone12 *)D_00565600[*(unsigned char *)(p + 0x38D0)];
    int i = 0;
    zone12 *e;
    if (t[0].v != 0) {
        e = t;
        do {
            *(float *)(p + 0x5C) = 1.0f;
            if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)(p + 0x38FC) + e->a, e->r, e->d) == 1) {
                return t[i].v;
            }
            e++;
            i++;
        } while (e->v != 0);
    }
    return t[i - 1].v;
}

void func_00105230(float *, float *, float *);

extern float D_005BC25C;

extern float D_005BC260;

extern float D_005BC264;

static inline void set4_2D7(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

unsigned char func_002D7E90(char *p) {
    void func_00104B80(float *, char *, float *);
    void func_00105760(float *, float *, float);
    float m[16] __attribute__((aligned(16)));
    unsigned char r = 1;
    switch (*(unsigned char *)(p + 0x3907)) {
    case 0:
        r = 0;
        break;
    case 1:
        *(unsigned char *)(p + 0x3907) = 2;
        switch (*(signed char *)(p + 0x37B8)) {
        case 0: case 11: set4_2D7((float *)(p + 0x37C0), 0.0f, -100.0f, 100.0f, 1.0f); break;
        case 1: case 12: set4_2D7((float *)(p + 0x37C0), -100.0f, -100.0f, 50.0f, 1.0f); break;
        case 2: case 13: set4_2D7((float *)(p + 0x37C0), -100.0f, 0.0f, 50.0f, 1.0f); break;
        case 3: case 14: set4_2D7((float *)(p + 0x37C0), -100.0f, 100.0f, 50.0f, 1.0f); break;
        case 5: case 16: set4_2D7((float *)(p + 0x37C0), 100.0f, 100.0f, 50.0f, 1.0f); break;
        case 6: case 17: set4_2D7((float *)(p + 0x37C0), 100.0f, 0.0f, 50.0f, 1.0f); break;
        case 7: case 18: set4_2D7((float *)(p + 0x37C0), 100.0f, -100.0f, 50.0f, 1.0f); break;
        case -1:
        default: set4_2D7((float *)(p + 0x37C0), 0.0f, 100.0f, 100.0f, 1.0f); break;
        }
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, 6.283185f * ((float)*(short *)(p + 0x38FC) / 65536.0f));
        func_00105230(m, m, (float *)(*(char **)(*(char **)(p + 0x684) + 0x104) + 0x30));
        func_00104B80((float *)(p + 0x37C0), (char *)m, (float *)(p + 0x37C0));
        *(char **)(p + 0x36A8) = p + 0x37C0;
        *(unsigned char *)(p + 0x36A4) = 1;
        *(float *)(p + 0x3710) = 0.0f;
        *(float *)(p + 0x37B4) = 1.0f;
        break;
    case 2:
        *(float *)(p + 0x37B4) = *(float *)(p + 0x37B4) * D_005BC260;
        *(float *)(p + 0x3710) = 1.0f - *(float *)(p + 0x37B4);
        if (!(*(float *)(p + 0x3710) < 0.9f)) {
            *(float *)(p + 0x3710) = 1.0f;
            *(unsigned char *)(p + 0x3907) = 3;
            *(float *)(p + 0x37B4) = D_005BC25C;
        }
        *(unsigned char *)(p + 0x3907) = 3;
        break;
    case 3:
        *(float *)(p + 0x37B4) = *(float *)(p + 0x37B4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x37B4) < 0.0f) *(unsigned char *)(p + 0x3907) = 4;
        break;
    case 4:
        *(float *)(p + 0x3710) = *(float *)(p + 0x3710) * D_005BC264;
        if (*(float *)(p + 0x3710) < 0.1f) {
            *(float *)(p + 0x3710) = 0.0f;
            *(unsigned char *)(p + 0x3907) = 0;
        }
        break;
    }
    return r;
}

extern float D_005BCD64;

extern short D_005BCD70[4];

extern char D_01DFC090[];

extern char D_00565614[];

extern char D_00565616[];

extern char D_00565618[];

void func_002D29F0(char *p) {
    void func_0031E570(char *);
    short func_002D6DB0(char *);
    void func_0034B8C0(char *, char *, int);
    void func_002D2270(char *, int);
    void func_002D6C50(char *);
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

int func_002D2650(int x, int k, unsigned char *t) {
    int i = 0;
    unsigned char *e;
    if (*t != 0x1C) {
        e = t;
        do {
            if ((unsigned char)k != *e) {
                return (signed char)t[i * 8];
            }
            e += 8;
            i++;
        } while (*e != 0x1C);
    }
    return k;
}

void func_002D59A0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    extern signed char D_005BCD60[];
    void func_0031E570(char *);
    void func_002D2270(char *, int);
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(char **)(p + 0x390C) = func_00207480(3, 0x16B, 0, 16);
        q = *(char **)(p + 0x390C);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x688) + 0x104);
            q[0x9A] = 3;
            *(*(char **)(p + 0x390C) + 0x3A) = 1;
        }
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
    }
}

void func_002D37C0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    int func_0024E780(char *, int, int);
    void func_0031E570(char *);
    void func_002D2270(char *, int);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(unsigned char *)(p + 0x1E2) = 3;
        *(unsigned char *)(p + 0x1E3) = 2;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            func_00207480(3, 0x144, p + 0x1EF0, 16);
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            if (*(unsigned char *)(p + 0x38D0) != 2) {
                *(unsigned char *)(p + 0x38D0) = *(unsigned char *)(p + 0x38D0) + 1;
            }
            func_002D2270(p, 7);
        }
    }
}

void func_002D26A0(char *, int, int);

void func_002D4C40(char *p) {
    int func_0024E780(char *, int, int);
    int func_0024E800(char *);
    extern char D_005BE1A8[4];
    extern signed char D_005BCD60[];
    void func_002D2270(char *, int);
    void func_0031E570(char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (func_002D65E0(p) == 0) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
            break;
        }
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(int *)(p + 0x38F4) = 3;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            func_001ACC30(D_005BE09C, 2, 0x3C, 0x28, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x80, 0xA, 0);
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            if (--*(int *)(p + 0x38F4) > 0) {
                func_002D26A0(p, 3, 0xF);
            } else {
                func_002D6F20(p, 0);
                func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
            }
        }
    }
}

int func_002018A0(char *, char *, char *, char *, char *, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern float D_005BC254;

int func_002D6E00(char *p) {
    void func_00104B80(char *, char *, char *);
    void func_00105760(char *, char *, float);
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float e[4] __attribute__((aligned(16)));
    float h[16] __attribute__((aligned(16)));
    float g[4] __attribute__((aligned(16)));
    char *w;
    d[0] = 0.0f;
    d[1] = 0.0f;
    d[2] = D_005BC254;
    d[3] = 1.0f;
    UNIT(m);
    func_00105760((char *)m, (char *)m, *(float *)(p + 0x84));
    func_00104B80((char *)d, (char *)m, (char *)d);
    w = *(char **)D_01CAFF0C;
    s[0] = *(float *)(p + 0x50);
    s[1] = 100.0f + *(float *)(p + 0x54);
    s[2] = *(float *)(p + 0x58);
    s[3] = 1.0f;
    e[0] = *(float *)(p + 0x50) + d[0];
    e[1] = 100.0f + (*(float *)(p + 0x54) + d[1]);
    e[2] = *(float *)(p + 0x58) + d[2];
    e[3] = 1.0f;
    if ((unsigned char)func_002018A0(*(char **)(w + 0x14) + 0x548, (char *)s, (char *)e, (char *)g, (char *)h, 0x10) == 1) return 1;
    return 0;
}

void func_002D8470(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_002D39A0(char *p) {
    int func_0024E800(char *);
    void func_0031E570(char *);
    void func_002D2270(char *, int);
    extern signed char D_005BCD60[];
    int k = *(unsigned char *)(p + 5);
    switch (k) {
    case 0:
        *(char *)(p + 5) = k + 1;
        func_0031E570(p + 0x1D0);
        *(char *)(p + 0x1E2) = 3;
        *(char *)(p + 0x1E3) = 2;
    case 1:
        if ((func_0024E800(p + 0x2F70) & 255) == 1) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
        break;
    }
}

void func_002D3D40(char *p) {
    int func_0024E800(char *);
    void func_0031E570(char *);
    void func_002D2270(char *, int);
    extern signed char D_005BCD60[];
    int k = *(unsigned char *)(p + 5);
    switch (k) {
    case 0:
        *(char *)(p + 5) = k + 1;
        func_0031E570(p + 0x1D0);
        *(char *)(p + 0x1E2) = 3;
        *(char *)(p + 0x1E3) = 2;
    case 1:
        if ((func_0024E800(p + 0x2F70) & 255) == 1) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
        break;
    }
}

void func_0024DA80();

void func_002D5130(p) char *p; {
    func_0024DA80(p + 12768, 0, 0);
    *(char *)(p + 14592) = 0;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005AA6D0[];

extern char D_005AA6F4[];

extern char D_005AA774[];

extern char D_005AA808[];

extern char D_005AA8D4[];

extern char D_005AA98C[];

extern char D_005AAA98[];

extern char D_005AFA60[];

extern char D_005B0890[];

void func_001003E0();

void func_0013D240();

void func_00204C70();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E83B0();

void func_002E8A50();

void func_00313E60();

void func_0031DD00();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_002D81D0(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005AA6D0;
        *(char * *)(p + 64) = D_005AA6F4;
        *(char * *)(p + 160) = D_005AA774;
        *(char * *)(p + 208) = D_005AA808;
        *(char * *)(p + 304) = D_005AA8D4;
        *(char * *)(p + 464) = D_005AA98C;
        if (p + 14304 != 0) {
            if (p + 14528 != 0) {
                *(char * *)(p + 14528) = D_005A7780;
                if (p + 14528 != 0) {
                    *(char * *)(p + 14528) = D_005A7790;
                }
            }
        }
        if (p + 14112 != 0) {
            *(char * *)(p + 14128) = D_005AAA98;
            if (p + 14112 != 0) {
                *(char * *)(p + 14128) = D_005A77A0;
            }
        }
        if (p + 13968 != 0) {
            *(char * *)(p + 13984) = D_005AAA98;
            if (p + 13968 != 0) {
                *(char * *)(p + 13984) = D_005A77A0;
            }
        }
        if (p + 13872 != 0) {
            *(char * *)(p + 13888) = D_005B0890;
            if (p + 13872 != 0) {
                *(char * *)(p + 13888) = D_005A77A0;
            }
        }
        func_00313E60(p + 13836, -1);
        func_002E8A50(p + 13812, -1);
        func_002E83B0(p + 13744, -1);
        func_0028C1A0(p + 13104, -1);
        func_00401030(p + 13004, -1);
        func_00401030(p + 12976, -1);
        func_0024D9A0(p + 12768, -1);
        func_0024D9A0(p + 12560, -1);
        func_001003E0(p + 12144, (void *)func_0024D9A0, 208, 2);
        func_001003E0(p + 7376, (void *)func_00204C70, 160, 3);
        if (p + 7120 != 0) {
            *(char * *)(p + 7136) = D_005A78F8;
            if (p + 7120 != 0) {
                *(char * *)(p + 7136) = D_005A77A0;
            }
        }
        if (p + 6960 != 0) {
            *(char * *)(p + 6976) = D_005AFA60;
            if (p + 6960 != 0) {
                *(char * *)(p + 6976) = D_005A77A0;
            }
        }
        func_0031DD00(p + 6816, -1);
        func_0031DD00(p + 6672, -1);
        func_0031DD00(p + 6528, -1);
        func_002791E0(p + 4992, -1);
        func_002791E0(p + 3456, -1);
        func_002791E0(p + 1920, -1);
        func_001003E0(p + 532, (void *)func_0013D240, 16, 65);
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_002D31E0(p0) char *p0; {
    extern char D_005BCD60[];
    int func_0024E800();
    void func_002D2270();
    int func_002D6C50();
    void func_0031E570();
    int v0;
    char *v1;
    int tmp0;
    int tmp4;
    v0 = *(unsigned char *)(p0 + 5);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 5) = (v0 + 1);
        func_0031E570((v1 + 464));
        /* fall through */
    case 1:
        tmp0 = func_0024E800((v1 + 12144));
        if ((tmp0 & 255) == 1) {
            func_002D2270(v1, *(signed char *)((D_005BCD60 + *(unsigned char *)(v1 + 14544)) + 0));
        }
        break;
    }
    tmp4 = func_002D6C50(v1);
    return tmp4;
}

int func_001AD140();

int func_002F2D30();

int func_002D6950(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    v0 = p0;
    v1 = *(int *)(p0 + 14604);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
    }
    v5 = *(int *)(v0 + 14608);
    if (v5 != 0) {
        v2 = func_001AD140(v5);
    }
    v6 = *(int *)(v0 + 14612);
    if (v6 != 0) {
        v2 = func_001AD140(v6);
    }
    v7 = *(int *)(v0 + 14616);
    if (v7 != 0) {
        v2 = func_001AD140(v7);
    }
    v8 = *(int *)(v0 + 14292);
    if (v8 != 0) {
        v2 = func_001AD140(v8);
    }
    v3 = *(int *)(*(char **)D_01CAFF0C + 32);
    v4 = (int)v0;
    if (v3 != 0) {
        v2 = func_002F2D30(v3, v4);
    }
    return v2;
}

extern char D_00565750[];

int func_002D7380(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    extern char D_01CAFF14[];
    void func_00277DE0();
    void func_00277E70();
    void func_00277ED0();
    int func_00278060();
    int v0;
    char *v1;
    int v2;
    unsigned char v3;
    v3 = 0;
    v0 = *(unsigned char *)(p0 + 14298);
    v1 = p0;
    switch (v0) {
    case 12:
        p2 = 21;
        v3 = 1;
        break;
    case 13:
        p2 = 14;
        v3 = 1;
        break;
    case 14:
        p2 = 21;
        v3 = 1;
        break;
    case 17:
        p2 = 14;
        v3 = 1;
        break;
    }
    if ((v3 & 255) == 1) {
        func_00277DE0((v1 + 14304), D_00565750, *(int *)(*(char **)((char *)((p2 << 2) + (int)v1) + 1652) + 260), 1);
        func_00277E70((v1 + 14304));
        func_00277ED0((v1 + 14304));
        v2 = func_00278060((v1 + 14304), *(int *)D_01CAFF14);
    }
    *(char *)(v1 + 14594) = 1;
    return v2;
}

void func_002D7520(p0, p1) char *p0; int p1; {
    switch (p1) {
    case 0:
        *(int *)(p0 + 13920) = 0x3eb2b8c2;
        *(int *)(p0 + 13924) = 0x3eb2b8c2;
        *(int *)(p0 + 13928) = 0x3eb2b8c2;
        *(int *)(p0 + 13932) = 0;
        *(int *)(p0 + 13952) = 0x41200000;
        *(char *)(p0 + 13884) = 1;
        break;
    case 1:
        break;
    }
}

int func_002D8190(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 38)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1652);
    }
    return (int)v0;
}

extern void func_002D0520();

void func_002D84C0(char *p) { func_002D0520(p + -64); }

extern void func_002D81B0();

void func_002D84D0(char *p) { func_002D81B0(p + -64); }

extern void func_002D81C0();

void func_002D84E0(char *p) { func_002D81C0(p + -64); }

extern void func_002D7570();

void func_002D8510(char *p) { func_002D7570(p + -64); }

extern void func_002D7650();

void func_002D8520(char *p) { func_002D7650(p + -64); }

extern void func_002D7780();

void func_002D8540(char *p) { func_002D7780(p + -64); }

extern void func_002D2100();

void func_002D8580(char *p) { func_002D2100(p + -304); }

extern void func_002D7470();

void func_002D8590(char *p) { func_002D7470(p + -304); }

void func_002D85A0(char *p) { func_002D7570(p + -304); }

void func_002D85B0(char *p) { func_002D7650(p + -304); }
