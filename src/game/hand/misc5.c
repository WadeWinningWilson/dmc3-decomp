/* Hand-matched functions (fifth file: its callee declarations differ from the others). */

#include "game/mt_rand.h"

extern char D_00666750[];
extern char D_00547340[];
void func_001AD100(void);
void func_0028B610(char *);
int func_001AED80(char *, int, unsigned short, int);
void func_00208050(int, int);
int func_002242C0(int);
int func_002FF740(int, char *);
void func_0028D3D0(char *);
void func_0028D560(char *);
int func_0028B690(char *, unsigned char);
void func_0028BF50(char *);

void func_0028D2A0(unsigned char *p) {
    func_001AD100();
    switch (p[4]) {
    case 0:
        func_0028B610((char *)p);
        func_00208050(func_001AED80(D_00666750, 2, *(signed char *)(p + 0x46) * 15, 2), 1);
        if ((unsigned char)func_002242C0(*(int *)(p + 0xE0)) == 0) {
            *(int *)(p + 0x8D4) = func_002FF740(0, (char *)p + 0x130);
        } else {
            *(int *)(p + 0x8D4) = 0;
        }
        *(char **)(p + 0xE4) = D_00547340;
        p[0xDC] = 0;
        p[4]++;
        p[5] = 0;
    case 1:
        switch (p[5]) {
        case 0:
            func_0028D3D0((char *)p);
            break;
        case 1:
            func_0028D560((char *)p);
            break;
        }
        if ((unsigned char)func_0028B690((char *)p, p[0xD8])) {
            func_0028BF50((char *)p);
        }
        break;
    }
}

extern char D_01CAFF0C[];
unsigned int func_002EFB20(int);
char *func_002EFB30(int, unsigned int);
float func_00132470(float *, char *);

int func_00486220(char *p, float *out) {
    float pos[4] __attribute__((aligned(16)));
    float best[4] __attribute__((aligned(16)));
    unsigned int n = func_002EFB20(*(int *)D_01CAFF0C);
    float d;
    float min;
    unsigned int i;
    char *o;
    d = min = 0.0f;
    for (i = 0; i < n; i++) {
        o = func_002EFB30(*(int *)D_01CAFF0C, i);
        if (o != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(pos), "r"(*(char **)(o + 0x10) + 0x30) : "memory");
            d = func_00132470(pos, p + 0x50);
        }
        if (i == 0) {
            min = d;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(best), "r"(pos) : "memory");
        } else if (d < min) {
            min = d;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(best), "r"(pos) : "memory");
        }
    }
    if (min > 0.0f) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(best) : "memory");
        return 1;
    }
    return 0;
}

extern char *D_005BE0D8;
extern char D_01DFA340[];
extern int D_01DFA344[];
extern int D_01DFA348[];
unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
float func_002DBD40(int, int);

void func_004B3420(char *p, int left) {
    int x, y;
    unsigned char k;
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3108, 0xAF, y, 0x585858, 0, 0xFFFFF2, 1);
    k = (*(unsigned char **)(p + 0x3DE0))[0x5E];
    if (k != 4 && k != 5) {
        D_01DFA344[0] = *(float *)(*(char **)(p + 0x3DE0) + 0x80);
        D_01DFA348[0] = func_002DBD40(*(signed char *)(*(char **)(p + 0x3DE0) + 0x5E), *(signed char *)(*(char **)(p + 0x3DE0) + 0x5F));
        if (left) {
            x = 0xB0;
            y = 0xB2;
        } else {
            x = 0x190;
            y = 0xB2;
        }
        x += func_0030FD40(D_01DFA340, 0x30FC, x, y, 0x585858, 16, 0xFFFFF2, 1) >> 16;
        x += func_0030FD40(D_01DFA340, 0x30FE, x, y, 0x585858, 16, 0xFFFFF2, 1) >> 16;
        func_0030FD40(D_01DFA340, 0x30FD, x, y, 0x585858, 16, 0xFFFFF2, 1);
    }
}

int func_0024D6B0(unsigned char *p, unsigned char *n) {
    *n = 0;
    switch (p[0x49F8]) {
    case 0:
        if (p[0x49F9] != p[0x49FA]) {
            *n += 1;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x10) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x40) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x80) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x20) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x4) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x8) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x1) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x2) {
            *n += 2;
        }
        *(unsigned short *)(p + 0x49FC) += *n;
        if (*(unsigned short *)(p + 0x49FC) > *(unsigned short *)(p + 0x49FE)) {
            p[0x49F8]++;
            return 1;
        }
        break;
    case 1:
        return 1;
    }
    return 0;
}

char *func_00207480(int, int, int, int);

int func_004580B0(char *p) {
    char *o;
    switch (mt_rand() % 3) {
    case 0:
        *(char **)(p + 0x504) = func_00207480(0, 0xCB, 0, 16);
        break;
    case 1:
        *(char **)(p + 0x504) = func_00207480(0, 0xFB, 0, 16);
        break;
    case 2:
        *(char **)(p + 0x504) = func_00207480(0, 0xEB, 0, 16);
        break;
    }
    o = *(char **)(p + 0x504);
    if (o == 0) {
        return 0;
    }
    *(char **)(o + 0x90) = p + 0x440;
    o[0x9A] = 0;
    return 1;
}

extern int D_005BE1AC;
void func_00376E40(void);
void func_00376B80(char *, int);
void func_0041DAB0(char *, char *, int);
void func_0041D6E0(char *, char *, int, float);
int func_0041D6B0(char *, float);
void func_00376B40(char *, int);

void func_004B0CC0(unsigned char *p) {
    char *b;
    D_005BE1AC |= 0x80000000;
    func_00376E40();
    *(int *)(p + 0x8FC) |= 0x400000;
    switch (p[6]) {
    case 0:
        func_00376B80((char *)p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 50.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x8F8) = 45.0f;
        p[6] = 1;
    case 1:
        if (p[0x8EB] >= 2) {
            func_0041DAB0((char *)p + 0x50, (char *)p + 0x90, 255.0f * *(float *)(p + 0x10));
        } else if (p[0x8EB] == 1) {
            func_0041DAB0((char *)p + 0x50, (char *)p + 0x90, 127.0f * *(float *)(p + 0x10));
        }
        b = (char *)p;
        if (p) {
            b += 0x40;
        }
        func_0041D6E0(b, (char *)p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((char *)p + 0x8F8, *(float *)(p + 0x10)) == 1) {
            func_00376B40((char *)p, 8);
            return;
        }
        break;
    }
}

/* A coin flip. */
void func_003A5C70(unsigned char *p) {
    p[0x4E1F] = mt_rand() & 1;
}

extern float D_0056ECB0[];

void func_003C61D0(unsigned char *p) {
    p[0x1CE1] = 0;
    p[0x1CE2] = 0;
    *(short *)(p + 0x1CE4) = 0;
    *(float *)(p + 0x1CD0) = D_0056ECB0[p[0x15D0] * 6 + p[0x15D1] * 2];
    *(float *)(p + 0x1CD4) = 0.0f;
    p[0x1CE3] = mt_rand() & 1;
}

void func_00239420(char *);
void func_002391E0(char *);

void func_002390D0(char *p, char k) {
    p[0x18FF8] = k;
    if (mt_rand() & 1) {
        *(int *)(p + 0x18F98) = 1;
    } else {
        *(int *)(p + 0x18F98) = 0;
    }
    if (*(int *)(p + 0x18F98)) {
        func_00239420(p);
    } else {
        func_002391E0(p);
    }
}

extern char D_01DFABA0[];
void func_003305E0(char *, int, int, char *, int, int, int);

void func_00482470(char *p) {
    *(float *)(p + 0x2B0) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x2B0) < 0.0f) {
        *(float *)(p + 0x2B0) = 30.0f;
        func_003305E0(D_01DFABA0, 8, (mt_rand() & 3) + 0x67, p + 0x50, 0x28, 0, 0);
    }
}

void func_00312980(char *);

void func_00312870(char *p) {
    float t = mt_rand() % 300 + 60;
    *(float *)(p + 0xD58) = t;
    *(float *)(p + 0xD54) = t;
    *(float *)(p + 0xD5C) = 0.0f;
    *(float *)(p + 0xD60) = 1.0f;
    p[0xD68] = 0;
    *(float *)(p + 0xD64) = 5.0f;
    func_00312980(p);
}

typedef struct Rng2C {
    float base[4];
    float range[4];
    char pad[0xC];
} Rng2C;
extern Rng2C D_0056C010[];

/* A random value in [base, base + range) from the row of the current state. */
void func_0038F360(unsigned char *p) {
    Rng2C *t = &D_0056C010[p[5]];
    *(float *)(p + 0x428) = t->base[p[0x41B]] + t->range[p[0x41B]] * (2.3283064e-10f * mt_rand());
}

void func_003DB330(unsigned char *);

void func_003DB220(unsigned char *p) {
    if (p[0xEFD] == 5) {
        return;
    }
    p[0xEFD] = 5;
    p[5] = 0;
    func_003DB330(p);
    *(float *)(p + 0xEC4) += mt_rand() % 60;
    p[0x1E1] = 1;
}
