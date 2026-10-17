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
    float q;
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

extern float D_005624D0[];
extern float D_005624D4[];

void func_002CB6B0(unsigned char *p) {
    float range = D_005624D4[p[0x5C2] * 2] - D_005624D0[p[0x5C2] * 2];
    *(float *)(p + 0x2F30) = D_005624D0[p[0x5C2] * 2] + range * (2.3283064e-10f * mt_rand());
}

int func_003A0800(unsigned char *);
void func_003A07B0(unsigned char *);

int func_0039FD40(unsigned char *p) {
    if ((unsigned char)func_003A0800(p) == 1) {
        func_003A07B0(p);
        switch (p[0x2DD5]) {
        case 1:
            *(short *)(p + 0x2DDA) = 0x39;
            return 1;
        case 2:
            *(short *)(p + 0x2DDA) = 0x3A;
            return 1;
        default:
            if (mt_rand() & 4) {
                *(short *)(p + 0x2DDA) = 0x39;
                return 1;
            }
            *(short *)(p + 0x2DDA) = 0x3A;
            return 1;
        }
    }
    return 0;
}

int func_0050E790(char *);
void func_001AD140(char *);
void func_0050E5B0(char *);

void func_0050DE10(char *p) {
    if ((unsigned char)func_0050E790(p) == 0) {
        func_001AD140(p);
        return;
    }
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x464) + 0x90);
    *(float *)(p + 0x80) = -90.0f;
    *(float *)(p + 0x88) = (float)(mt_rand() % 360) - 180.0f;
    *(float *)(p + 0x46C) = 40.0f;
    *(int *)(p + 0x470) = 0;
    func_0050E5B0(p);
    ((unsigned char *)p)[4]++;
}

typedef struct Rng24 {
    float base[4];
    float range[4];
    char pad[4];
} Rng24;
extern Rng24 D_00582230[];
extern Rng24 D_00582530[];

void func_00376CF0(unsigned char *p) {
    Rng24 *t;
    if (p[0x972] == 0) {
        t = &D_00582230[p[5]];
    } else {
        t = &D_00582530[p[5]];
    }
    *(float *)(p + 0x8F8) = t->base[p[0x8EB]] + t->range[p[0x8EB]] * (2.3283064e-10f * mt_rand());
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

extern float D_005BD108[];
void func_003F2F60(char *);
void func_003F32B0(char *);
void func_003EDC10(char *);
void func_003E9930(char *);

void func_003EDEF0(char *p) {
    func_003F2F60(p);
    func_003F32B0(p);
    *(float *)(p + 0x3A8C) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        if (100.0f * (2.3283064e-10f * mt_rand()) > D_005BD108[0]) {
            func_003EDC10(p);
        } else {
            func_003E9930(p);
        }
        return;
    }
}

float func_0034C160(float, float, float);

void func_0050E000(char *p) {
    float v2;
    float v = func_0034C160(*(float *)(p + 0x470), 30.0f, 0.5f * *(float *)(p + 0x10));
    *(float *)(p + 0x470) = v;
    v2 = v * v;
    *(float *)(p + 0x54) += v2 * *(float *)(p + 0x10);
    *(float *)(p + 0x46C) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x46C) < 0.0f) {
        p[5] = 1;
        *(float *)(p + 0x46C) = 15.0f + mt_rand() % 15;
        *(int *)(p + 0x470) = 0;
    }
}

void func_003DADF0(unsigned char *);
void func_003DAE70(unsigned char *);
int func_003C5400(char *);
void func_003DB0B0(unsigned char *);

void func_003DAC90(unsigned char *p) {
    switch (mt_rand() % 3) {
    case 0:
        func_003DADF0(p);
        break;
    case 1:
        func_003DAE70(p);
        break;
    case 2:
        if (p[0xEFC]) {
            if (*(char **)(p + 0x308) != 0) {
                if ((unsigned char)func_003C5400(*(char **)(p + 0x308)) == 1) {
                    func_003DB0B0(p);
                    (*(unsigned char **)(p + 0x308))[0x1CF6]++;
                } else {
                    func_003DAE70(p);
                }
            }
        } else {
            func_003DB0B0(p);
        }
        break;
    }
}

void func_002DBCE0(unsigned char *);
void func_002490F0(unsigned char *, int, int, int, int, int, float);
int func_002496D0(unsigned char *);
void func_0021B790(unsigned char *, int);
void func_002DAB90(unsigned char *, int);

void func_0031B0A0(unsigned char *p) {
    switch (p[0x284C]) {
    case 0:
        func_002DBCE0(p);
        switch (mt_rand() & 1) {
        case 0:
            func_002490F0(p, 2, 0, -1, 2, 5, -1.0f);
            break;
        default:
            func_002490F0(p, 2, 1, -1, 2, 5, -1.0f);
            break;
        }
        p[0x284C]++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_004BE0D0(char *, int, float *);
void func_00330B50(char *, int, char *, int);
void func_004BE330(char *);

void func_004BD640(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *o;
    p[0x377] = 0;
    *(float *)(p + 0x3E8) = 7.0f;
    o = (char *)func_00207480(3, 0x270, 0, 8);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x380;
        o[0x9A] = 0;
        o[0x3A] = 1;
        *(char **)(p + 0x370) = o;
    }
    func_004BE0D0(p, *(signed char *)(p + 0x376), v);
    *(float *)(p + 0x50) = v[0];
    *(float *)(p + 0x54) = v[1];
    *(float *)(p + 0x58) = v[2];
    *(float *)(p + 0x5C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3C0), "r"(p + 0x50) : "memory");
    *(float *)(p + 0x3CC) = 1.0f;
    if (mt_rand() & 1) {
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 3);
    } else {
        func_00330B50(D_01DFABA0, 0xC, p + 0x50, 3);
    }
    func_004BE330(p);
}

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
int func_0034B800(char *, char *, short, short, float);
void func_003FA3F0(unsigned char *, int);

/* In the first zone the player stands in, picks the next state with the zone's weights. */
typedef struct Enemy239 { char pad[0x50]; char pos[0x40]; short ang; } Enemy239;

void func_004239B0(Enemy239 *q) {
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

void func_002F2D30(char *, unsigned char *);

void func_003DCF70(unsigned char *p) {
    switch (p[5]) {
    case 0:
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        *(float *)(p + 0xEC4) = mt_rand() % 5;
        p[5]++;
        break;
    case 1:
        *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            func_00207470(3, 0x397, (char *)p + 0x9A0);
            *(float *)(p + 0xEC4) = 5.0f;
            p[5]++;
        }
        break;
    case 2:
        *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            p[4]++;
        }
        break;
    }
}

void func_0041D800(char *, float, float);
void func_0048AFC0(char *, int);
int func_0048B150(char *);
void func_0041D6E0(char *, char *, int, float);
void func_0048C070(char *);

void func_00423240(char *p) {
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

int func_003BA680(char *p, unsigned char reset) {
    char *o;
    if (reset == 1) {
        p[0x1B7] = 0;
        if (*(char **)(p + 0x214) != 0) {
            (*(char **)(p + 0x214))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x214));
            *(char **)(p + 0x214) = 0;
        }
        if (*(char **)(p + 0x218) != 0) {
            (*(char **)(p + 0x218))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x218));
            *(char **)(p + 0x218) = 0;
        }
        if (*(char **)(p + 0x21C) != 0) {
            (*(char **)(p + 0x21C))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x21C));
            *(char **)(p + 0x21C) = 0;
        }
    }
    if (*(char **)(p + 0x210) != 0) {
        return 1;
    }
    switch (mt_rand() % 3) {
    case 0:
        *(char **)(p + 0x210) = func_00207480(0, 0xCB, 0, 16);
        break;
    case 1:
        *(char **)(p + 0x210) = func_00207480(0, 0xFB, 0, 16);
        break;
    case 2:
        *(char **)(p + 0x210) = func_00207480(0, 0xEB, 0, 16);
        break;
    }
    o = *(char **)(p + 0x210);
    if (o == 0) {
        return 0;
    }
    *(char **)(o + 0x90) = p + 0x250;
    o[0x9A] = 0;
    return 1;
}

int func_0019E2D0(char *p) {
    *(float *)(p + 0x40) -= *(float *)(p + 0x70);
    if (*(float *)(p + 0x40) <= 0.0f) {
        *(float *)(p + 0x40) = *(float *)(p + 0x50);
        *(float *)(p + 0x10) += *(float *)(p + 0x20) * *(short *)(p + 0x58);
        if (*(int *)p & 2) {
            *(float *)(p + 0x10) += *(float *)(p + 0x60) +
                (*(float *)(p + 0x64) - *(float *)(p + 0x60)) * (2.3283064e-10f * mt_rand());
        }
        if (*(float *)(p + 0x10) > 1.0f) {
            *(float *)(p + 0x10) -= 1.0f;
        } else if (*(float *)(p + 0x10) < 0.0f) {
            *(float *)(p + 0x10) += 1.0f;
        }
        *(unsigned short *)(p + 0xC) = (unsigned int)(4096.0f * *(float *)(p + 0x10));
        return 1;
    }
    return 0;
}

unsigned int func_002F3020(char *, int);
float func_0041DB20(char *);
unsigned int func_002F2FC0(char *, int);

static inline unsigned char has_8000(char *p) {
    return (*(int *)(p + 0x42C) & 0x8000) != 0;
}

int func_0038F630(char *p) {
    float d;
    float q;
    if (*(int *)(p + 0x110) & 1) {
        return 0;
    }
    if (has_8000(p) == 1) {
        return 0;
    }
    d = func_0041DB20(p + 0x50);
    if (d < 1000.0f) {
        d = 1000.0f;
    }
    q = 1000000.0f / (d * d);
    if ((unsigned char)func_0041D6B0(p + 0x454, q * *(float *)(p + 0x10)) == 0) {
        return 0;
    }
    if (func_002F2FC0(*(char **)(*(char **)D_01CAFF0C + 0x20), 0x80000000)) {
        return 0;
    }
    if (!(func_002F3020(*(char **)(*(char **)D_01CAFF0C + 0x20), *(signed char *)(p + 0x46)) < *(unsigned char *)(p + 0x461))) {
        return 0;
    }
    if (100.0f * (2.3283064e-10f * mt_rand()) > 75.0f) {
        return 0;
    }
    return *(int *)(p + 0x45C) > 0;
}

void func_0038F300(char *, int);
void func_0041DBA0(char *, char *);
void func_0041D9E0(float *, float *, char *);
void func_0038F2C0(char *, int);

void func_0041FD00(char *p) {
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

extern unsigned char D_00569230[];
extern char D_00569120[];
extern float D_00569280[];
void func_003B9E90(char *, char *, unsigned char, float);

static inline int state_is(unsigned char *o, int st) {
    return o[0x1B5] == st;
}

/* Wakes up to the level's count of idle slot objects with random presets and staggered delays. */
void func_003AB360(unsigned char *p) {
    int i;
    int cnt = 0;
    float delay = 0.0f;
    int k;
    for (i = 0; i < 16; i++) {
        switch (p[0x4E16]) {
        case 0xB:
            if (cnt < D_00569230[p[0x4E17] * 3 + p[0x4E18]]) {
                if (p[0x4DF0 + i] == 1 && state_is(*(unsigned char **)(p + 0x4DB0 + i * 4), 0) == 1) {
                    k = mt_rand() & 0xF;
                    if (k == 0) {
                        k++;
                        if (k > 15) {
                            k = 0;
                        }
                    }
                    func_003B9E90(*(char **)(p + 0x4DB0 + i * 4), D_00569120 + k * 16, i, delay);
                    cnt++;
                    delay += D_00569280[p[0x4E17] * 3 + p[0x4E18]];
                }
            } else {
                return;
            }
            break;
        case 0xA:
        case 0xC:
        case 0xD:
            break;
        }
    }
}

void func_0021CBB0(unsigned char *);
int func_002DAA00(unsigned char *, int);
void func_002DBAA0(unsigned char *, short, float);

void func_002E0A60(unsigned char *p) {
    unsigned char ok = 1;
    switch (p[0x284C]) {
    case 0:
        func_0021CBB0(p);
        if (*(int *)(p + 0x2AE8) != 0) {
            ok = func_002DAA00(p, *(int *)(p + 0x2AE8) + 0x10);
        }
        if (ok) {
            if (mt_rand() % 10 > 4) {
                func_002490F0(p, 1, 0, -1, 1, 0, -1.0f);
                *(short *)(p + 0x2856) = 10;
            } else {
                func_002490F0(p, 1, 0xF, -1, 1, 0, -1.0f);
                *(short *)(p + 0x2856) = 8;
            }
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        } else {
            func_002490F0(p, 1, 1, -1, 1, 0, -1.0f);
            *(short *)(p + 0x2856) = 8;
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4) + 0x8000;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        }
        p[0x284C]++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, p[0x2856]);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

typedef struct Rec0B40 {
    unsigned char active;
    char pad0[0xAFF];
    float pos[4];
    float rot[4];
    char pad1[0x14];
    unsigned char alpha;
    char pad2[0xB];
} Rec0B40;
typedef struct RecTbl {
    char pad[0x100];
    Rec0B40 e[1];
} RecTbl;
extern char D_0056A110[];

void func_00401C90(RecTbl *q, unsigned char i) {
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q->e[i].pos), "r"(D_0056A110 + i * 80) : "memory");
    q->e[i].pos[3] = 1.0f;
    q->e[i].rot[0] = 0.0f;
    q->e[i].rot[1] = 0.0f;
    q->e[i].rot[2] = 0.0f;
    q->e[i].rot[3] = 1.0f;
    q->e[i].alpha = 0x40;
    q->e[i].active = 0;
}

typedef struct RecA0 {
    unsigned char active;
    char pad0[0x4F];
    float pos[4];
    float dir[4];
    char pad1[0x10];
    float rot[4];
    char pad2[0x10];
} RecA0;
typedef struct RecA0Tbl {
    char pad[0xE0];
    RecA0 e[1];
} RecA0Tbl;
extern char D_00581AD0[];

void func_0047CCF0(RecA0Tbl *q, unsigned char i) {
    q->e[i].active = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q->e[i].pos), "r"(D_00581AD0 + i * 48) : "memory");
    q->e[i].pos[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q->e[i].dir), "r"(D_00581AD0 + i * 48 + 32) : "memory");
    q->e[i].dir[3] = 1.0f;
    q->e[i].rot[0] = 0.0f;
    q->e[i].rot[1] = 0.0f;
    q->e[i].rot[2] = 0.0f;
    q->e[i].rot[3] = 1.0f;
}

typedef struct InputTbl {
    char pad[0x5D];
    unsigned char st[1][5];
} InputTbl;

int func_0024E780(InputTbl *p, int a, int b) {
    if (b >= 5) {
        return 0;
    }
    return p->st[a][b];
}

void func_00481C60(int a, int b, int c, char *pos) {
    func_003305E0(D_01DFABA0, 8, 0x6C, pos, 0x28, 0, 0);
}

void func_00482580(char *p) {
    if (*(unsigned char *)(p + 0x284) == 0) {
        return;
    }
    switch (*(signed char *)(p + 0x28A)) {
    case 0:
        if (mt_rand() & 1) {
            func_003305E0(D_01DFABA0, 8, 0x6F, p + 0x50, 0x28, 0, 0);
        } else {
            func_003305E0(D_01DFABA0, 8, 0x70, p + 0x50, 0x28, 0, 0);
        }
        *(float *)(p + 0x2B4) = 60.0f;
        (*(signed char *)(p + 0x28A))++;
        break;
    case 1:
        *(float *)(p + 0x2B4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x2B4) < 0.0f) {
            if (mt_rand() & 1) {
                func_003305E0(D_01DFABA0, 8, 0x6D, p + 0x50, 0x28, 0, 0);
            } else {
                func_003305E0(D_01DFABA0, 8, 0x6E, p + 0x50, 0x28, 0, 0);
            }
            p[0x284] = 0;
        }
        break;
    }
}

int func_0038F490(char *);
void func_0038F830(char *);
void func_00387550(char *);
extern char D_0056FFB0[];
void func_003F3A90(char *);
void func_0028C200(char *, char *, char *, int, char *, char *, char *);
void func_002E7920(char *, int, int, int, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
char *func_0028C3A0(char *, int, int, char *);
void func_00105300(char *, char *);

void func_0041F600(char *p) {
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

void func_00387870(char *p) {
    if (!(*(float *)(p + 0xCA4) <= *(float *)(p + 0xD74))) {
        *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) - 20.0f * *(float *)(p + 0x10);
    } else {
        if (*(signed char *)(p + 0xDCC) == 0) {
            *(float *)(p + 0xD80) = *(float *)(p + 0xD80) + 3.0f * *(float *)(p + 0x10);
            *(float *)(p + 0xD88) = *(float *)(p + 0xD88) + 3.0f * *(float *)(p + 0x10);
            *(signed char *)(p + 0xDCC) = 1;
            func_003305E0(D_01DFABA0, 8, 0xA3, p + 0xCE0, 0x21, 0, 0);
        }
        *(float *)(p + 0xCA4) = *(float *)(p + 0xD74);
    }
    *(float *)(p + 0xDB0) = *(float *)(p + 0xDB0) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xDB0) < 0.0f) {
        *(signed char *)(p + 0xDCC) = 0;
        func_00387550(p);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(int *)(p + 0xDC4) = 0;
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0050EDC0(char *p) {
    char *b;
    char *e;
    char *d;
    char *s;
    func_003F3A90(p + 0x228);
    if (*(int *)(p + 0x228) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x2F0) = 2;
    *(float *)(p + 0x300) = 0.0f;
    *(float *)(p + 0x304) = 0.0f;
    *(float *)(p + 0x308) = 0.0f;
    *(float *)(p + 0x30C) = 1.0f;
    *(float *)(p + 0x310) = 150.0f;
    *(unsigned char *)(p + 0x2E4) = 5;
    *(unsigned char *)(p + 0x2E5) = 0;
    *(short *)(p + 0x2E6) = 0;
    func_0028C200(p + 0x340, p + 0x2E4, p + 0x2F0, 3, D_0056FFB0, p, p + 0x2A0);
    b = p;
    if (b != 0) {
        b += 0x40;
    }
    func_002E7920(p + 0x2A0, 0, 0, 0, b, 0);
    func_0028C8E0(p + 0x340, 1);
    *(int *)(p + 0x418) = 0x20040;
    *(unsigned char *)(p + 0x343) = 0;
    func_0028C910(p + 0x340);
    e = func_0028C3A0(p + 0x340, 0, -1, p + 0x1E0);
    if (e != 0) {
        e[2] = 1;
    }
    *(unsigned char *)(p + 0x231) = 0;
    func_00105300(p + 0x1E0, *(char **)(p + 0x228) + 0x3680);
    d = p + 0x50;
    s = p + 0x210;
    QCOPY(d, s);
    s = p + 0x210;
    d = p + 0x1D0;
    QCOPY(d, s);
    (*(unsigned char *)(p + 4))++;
}
