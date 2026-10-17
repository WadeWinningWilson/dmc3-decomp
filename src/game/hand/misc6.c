/* Hand-matched functions (sixth file: its callee declarations differ from the others). */

#include "game/mt_rand.h"

extern char D_00666710[];
extern char D_0066671A[];
extern char D_01DFC180[];
int func_001AE770();
int func_002D9EB0();
void func_004BD3C0(char *, int, short, int, unsigned char, unsigned char);

int func_0026E400(char *p0) {
    char *v0;
    unsigned char v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int tmp5;
    int tmp11;
    v0 = p0;
    v1 = 0;
    if ((*(unsigned char *)(p0 + 32663) < *(unsigned char *)(p0 + 32664))) {
        *(float *)(v0 + 32672) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 32672) <= 0.0f) {
            *(float *)(v0 + 32672) = *(float *)(v0 + 32668);
            *(char *)(v0 + 32665) = (*(unsigned char *)(v0 + 32665) + 1);
            if (*(unsigned char *)(v0 + 32665) > 10) {
                *(char *)(v0 + 32665) = 0;
            }
            if (*(unsigned char *)(v0 + 10648) == 83) {
                v1 = 1;
            }
            *(char *)(v0 + 32663) = (*(unsigned char *)(v0 + 32663) + 1);
            tmp5 = func_002D9EB0(v0);
            func_004BD3C0(v0, *(int *)(*(char **)((char *)((tmp5 << 2) + (int)v0) + 4996) + 260), *(short *)(v0 + 144), *(signed char *)(v0 + 32663), *(unsigned char *)(v0 + 212), v1);
        }
    }
    if (*(unsigned char *)(v0 + 32662) == 5) {
        v4 = 0;
        v5 = (D_01DFC180 + (*(unsigned char *)(v0 + 212) * 10));
        do {
            *(char *)(v5 + 0) = 1;
            *(char *)(v5 + 1) = 1;
            v4 = (v4 + 5);
            *(char *)(v5 + 2) = 1;
            *(char *)(v5 + 3) = 1;
            *(char *)(v5 + 4) = 1;
            v5 = (v5 + 5);
        } while ((v4 < 10));
        return (*(unsigned char *)(v0 + 32663) < *(unsigned char *)(v0 + 32664));
    } else {
        tmp11 = func_001AE770(D_00666710, 16);
        if ((*(unsigned short *)(v0 + 18880) & *(unsigned short *)((D_0066671A + ((tmp11 & 65535) << 1)) + 0))) {
            return 1;
        } else {
            v2 = 0;
            v3 = (D_01DFC180 + (*(unsigned char *)(v0 + 212) * 10));
            do {
                *(char *)(v3 + 0) = 1;
                *(char *)(v3 + 1) = 1;
                v2 = (v2 + 5);
                *(char *)(v3 + 2) = 1;
                *(char *)(v3 + 3) = 1;
                *(char *)(v3 + 4) = 1;
                v3 = (v3 + 5);
            } while ((v2 < 10));
            return 0;
        }
    }
}



int func_00250030(char *p) {
    return *(float *)(p + 0xF4) > 0.0f;
}


extern float D_0055FD10[];
extern float D_0055FD14[];
extern float D_0055FD18[];
extern float D_0055FD1C[];

void func_002A47D0(int a, float *out) {
    *out = D_0055FD1C[0] + (D_0055FD18[0] + (D_0055FD10[0] + D_0055FD14[0]));
}

extern float D_00563E30[];

int func_003A0800(char *p) {
    return D_00563E30[*(unsigned char *)(p + 0x2EE8)] >= *(float *)(p + 0x2E2C);
}

int func_003A2080(char *, char *, float, float);

int func_003A0670(char *p) {
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        return 0;
    }
    if (!(*(unsigned char *)(p + 0x2EE4) ? 1 : 0)) {
        return 0;
    }
    return func_003A2080(p, p + 0x2EEC, 1.0f, 0.0f);
}

extern char D_01CAFF0C[];
short func_0034B940(char *, char *);

void func_002CB910(char *p) {
    *(short *)(p + 0x2D28) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(short *)(p + 0x2D2A) = *(short *)(p + 0x2D28) - *(short *)(p + 0x90);
}

float func_0041DB20(char *);

int func_00423B90(char *p) {
    return func_0041DB20(p + 0x50) < 350.0f;
}

extern int D_01CAFF30[];

int func_0020F210(char *p) {
    if (D_01CAFF30[0] == 5 && !(*(int *)(p + 0x18) & 1)) {
        return 1;
    }
    return 0;
}

int func_0024E800(char *);
void func_002965E0(char *, int);

void func_00299A60(char *p) {
    if (func_0024E800(p + 0x8980)) {
        func_002965E0(p, 0xFFFF);
    }
}

float func_00131B50(float);

int func_002DAB50(char *p, float y, float lim) {
    return func_00131B50(*(float *)(p + 0x54) - y) <= lim;
}

int func_00400230(char *p, char *e) {
    if (e[2] == 0 && *(float *)(e + 0xC) >= 60.0f) {
        return 1;
    }
    return 0;
}

void func_0034BA60(int, char *, signed char, int, int);

void func_0048AB30(char *p) {
    func_0034BA60(0x18, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    p[0x448] = 1;
}

int func_00455B90(char *p) {
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (pl != 0 && *(signed char *)(p + 0x644) == *(signed char *)(pl + 0x3D49)) {
        return 1;
    }
    return 0;
}


void func_002EF940(int, char *);

/* Wanders inside the 500..4500 square; leaving it (or the timer / distance) ends the state. */
typedef struct Walker { char pad[0x50]; char pos[0x10]; } Walker;

void func_003DC500(Walker *q) {
    unsigned char *p = (unsigned char *)q;
    unsigned char out = 0;
    float x;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0034BA60(0x4D, q->pos, 0x35, 0, 1);
        if (mt_rand() & 1) {
            func_0034BA60(0x4E, q->pos, 0x35, 0, 1);
        }
    case 1:
        *(float *)(p + 0x54) = 110.0f;
        x = *(float *)(p + 0x50) + *(float *)(p + 0x60) * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) {
            *(float *)(p + 0x50) = x;
        } else {
            out = 1;
        }
        x = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) {
            *(float *)(p + 0x58) = x;
        } else {
            out = 1;
        }
        if (out == 0) {
            *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
            if (*(float *)(p + 0xEC4) < 0.0f) {
                p[0xF05] = 1;
            }
            if (*(float *)(p + 0xEE4) < 200.0f) {
                p[0xF05] = 1;
            }
        } else {
            p[0xF0B] = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0xAF0);
}

typedef struct PickRow {
    signed char id0[8];
    float w0[8];
    signed char id1[8];
    float w1[8];
} PickRow;
extern PickRow D_0056E190[][3];
void func_003ACB40(unsigned char *);

/* Picks the next attack (weights in percent) for the current level and difficulty. */
void func_003AC910(unsigned char *p) {
    unsigned char ok = 1;
    float r = mt_rand() % 100;
    float acc = 0.0f;
    int i;
    for (i = 0; i < 8; i++) {
        if (p[0x4E1E] == 0) {
            PickRow *row = &D_0056E190[p[0x4E17]][p[0x4E18]];
            acc += row->w0[i];
            if (!(acc <= r)) {
                p[0x4E1A] = row->id0[i];
                if (*(signed char *)(p + 0x4E1A) == -1) {
                    p[0x4E1A] = 0;
                    ok = 0;
                }
                break;
            }
        } else {
            acc += D_0056E190[p[0x4E17]][p[0x4E18]].w1[i];
            if (!(acc <= r)) {
                p[0x4E1A] = D_0056E190[p[0x4E17]][p[0x4E18]].id1[i];
                if (*(signed char *)(p + 0x4E1A) == -1) {
                    p[0x4E1A] = 0;
                    ok = 0;
                }
                break;
            }
        }
    }
    if (ok == 1) {
        p[0x4E1B] = 0;
        func_003ACB40(p);
    } else {
        func_003ACB40(p);
    }
}

extern char D_005BE098[4];
void func_00382A50(char *);
void func_00206730(char *);
void func_001AD140(char *);
void func_001AD100(char *);
void func_00458BF0(char *);
void func_00458CB0(char *);
void func_00459020(char *);
void func_004594B0(char *);
void func_0028C5C0(char *, int, float);
void func_00195E20(char *, char *);

void func_004589C0(char *p) {
    char *o;
    func_00382A50(p + 0x214);
    func_00206730(p + 0x218);
    o = *(char **)(p + 0x214);
    if (o == 0) {
        func_001AD140(p);
        return;
    }
    if (((unsigned char **)(o + 0x69F8))[*(int *)(p + 0x19C)][0x135C] == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(o + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00458BF0(p);
        break;
    case 1:
        func_00458CB0(p);
        break;
    case 2:
        func_00459020(p);
        break;
    case 3:
        func_004594B0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    *(float *)(p + 0x20C) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x20C) < 0.0f) {
        *(float *)(p + 0x20C) = *(float *)(p + 0x210);
        if (mt_rand() & 1) {
            func_0034BA60(0x26, p + 0x50, 0x29, 0, 1);
        } else {
            func_0034BA60(0x27, p + 0x50, 0x29, 0, 1);
        }
    }
    func_0028C5C0(p + 0x230, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

void func_00104C00(char *, float *, char *);

/* Camera shake: a random x/y offset within the current amplitude, which eases toward its
 * target over the remaining frames. */
void func_001ACA00(char *p) {
    float m[16] __attribute__((aligned(16)));
    if (*(int *)(p + 0x230) == 0) {
        return;
    }
    if (*(short *)(p + 0x23A) != 0) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        if (*(unsigned int *)(p + 0x234) & 2) {
            m[12] = (int)(mt_rand() % *(short *)(p + 0x23A)) - (*(short *)(p + 0x23A) >> 1);
        }
        if (*(unsigned int *)(p + 0x234) & 1) {
            m[13] = (int)(mt_rand() % *(short *)(p + 0x23A)) - (*(short *)(p + 0x23A) >> 1);
        }
        func_00104C00(p + 0x100, m, p + 0x100);
    }
    *(short *)(p + 0x23A) += (*(short *)(p + 0x238) - *(short *)(p + 0x23A)) / *(int *)(p + 0x230);
    if (*(short *)(p + 0x23A) < 0) {
        *(short *)(p + 0x23A) = 0;
    }
    if (*(int *)(p + 0x230) > 0) {
        (*(int *)(p + 0x230))--;
    }
}

void func_00105230(float *, float *, float *);
char *func_00207480(int, int, float *, int);

void func_003DD120(Walker *q) {
    unsigned char *p = (unsigned char *)q;
    unsigned char out;
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (p[5]) {
    case 0:
        *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            v[0] = *(float *)(p + 0x50);
            v[1] = -45.0f;
            v[2] = *(float *)(p + 0x58);
            v[3] = 1.0f;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105230(m, m, v);
            func_00207480(3, 0x146, m, 16);
            if (mt_rand() & 1) {
                func_0034BA60(0x4E, q->pos, 0x35, 0, 1);
            }
            func_0034BA60(0x4C, q->pos, 0x35, 0, 1);
            *(float *)(p + 0xEC4) = 60.0f;
            p[5]++;
        }
        break;
    case 1:
        out = 0;
        if (!(500.0f <= *(float *)(p + 0x50)) || !(*(float *)(p + 0x50) <= 4500.0f)) {
            out = 1;
        }
        if (!(500.0f <= *(float *)(p + 0x58)) || !(*(float *)(p + 0x58) <= 4500.0f)) {
            out = 1;
        }
        if (out == 0) {
            *(float *)(p + 0x54) += *(float *)(p + 0x10) * 5.1666665f;
            *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
            if (*(float *)(p + 0xEC4) < 0.0f) {
                p[0xF05] = 1;
            }
        } else {
            p[0xF0B] = 1;
        }
        break;
    }
}

typedef struct EffIds { int id[3][4]; } EffIds;
typedef struct EffPer { int n[3]; } EffPer;
extern EffIds D_00562B30;
extern EffPer D_00562B60;

/* Every few frames (period by mode) fires a random effect on two parts, cycling the parts. */
void func_0037C550(char *p, int mode) {
    EffPer per;
    EffIds ids;
    ids = D_00562B30;
    per = D_00562B60;
    (*(unsigned char *)(p + 0x78C5))++;
    if (!(*(unsigned char *)(p + 0x78C5) < per.n[mode])) {
        p[0x78C5] = 0;
    }
    if (*(unsigned char *)(p + 0x78C5) == 0) {
        func_0034BA60(ids.id[mode][mt_rand() & 3], ((char **)(p + 0x69F8))[*(signed char *)(p + 0x78C6)] + 0x50, 0x29, 0, 1);
        func_0034BA60(ids.id[mode][mt_rand() & 3], ((char **)(p + 0x69F8))[*(signed char *)(p + 0x78C8)] + 0x50, 0x29, 0, 1);
        (*(signed char *)(p + 0x78C6))++;
        if (*(signed char *)(p + 0x78C6) >= *(int *)(p + 0x6E78)) {
            p[0x78C6] = 0;
        }
        p[0x78C8] = (*(signed char *)(p + 0x78C6) + 3) % *(int *)(p + 0x6E78);
    }
}

void func_00496640(char *);

void func_004962F0(char *p) {
    p[0x371] = 0;
    func_00496640(p);
    p[0x372] = 1;
    *(float *)(p + 0x380) = 30.0f;
    if (mt_rand() & 1) {
        p[0x373] = 2;
    } else {
        p[0x373] = 3;
    }
    *(float *)(p + 0x390) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0x394) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0x398) = 60.0f;
    *(float *)(p + 0x39C) = 1.0f;
}

void func_0033D310(char *);
void func_0033D5B0(char *);

void func_0033D010(char *p) {
    p[0xB41] = 0;
    func_0033D310(p);
    p[0xB42] = 1;
    *(float *)(p + 0xB4C) = 40.0f;
    if (mt_rand() & 1) {
        p[0xB43] = 2;
    } else {
        p[0xB43] = 3;
    }
    *(float *)(p + 0xB60) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0xB64) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0xB68) = 60.0f;
    *(float *)(p + 0xB6C) = 1.0f;
    func_0033D5B0(p);
}

int func_001AE140(char *t, int i) {
    unsigned char k = *(unsigned char *)(t + i * 80 + 0x11);
    if (k == 6 || k == 2) {
        return 1;
    }
    return 0;
}

char *func_00279290(char *);

int func_003A25A0(char *p, int i) {
    if (i < *(unsigned short *)(func_00279290(p + 0x4C0) + 0xAA)) {
        return *(int *)(p + 0xCCC);
    }
    return 0;
}

int func_003B6B00(char *p, int i) {
    if (i < *(unsigned short *)(func_00279290(p + 0x700) + 0xAA)) {
        return *(int *)(p + 0x66C);
    }
    return 0;
}

int func_001AEA60(char *, int, unsigned short);
void func_001AF080(char *, int);

void func_001AF7A0(char *p, unsigned char a, unsigned char b) {
    int r = func_001AEA60(p, 1, a * 34 + b);
    if (r != 0) {
        func_001AF080(p, r);
    }
}

extern float D_0057895C[];

void func_00450480(char *p, float add) {
    float x, m;
    if (*(unsigned char *)(p + 0x80E) != 1 && *(unsigned char *)(p + 0x800) != 3) {
        x = *(float *)(p + 0x830) + add;
        m = D_0057895C[0];
        *(float *)(p + 0x830) = x < m ? x : m;
    }
}

int func_0020F180(char *p) {
    int v = D_01CAFF30[0];
    if (v >= 15 && v <= 19) {
        return *(unsigned char *)(p + 0x40);
    }
    return 0;
}

int func_003FA5B0(char *p, char *other) {
    return (unsigned char)((unsigned short)(func_0034B940(other, p + 0x50) + 0x1000) >> 13);
}

unsigned char func_0030A700(char *p) {
    unsigned char r = 0;
    if (*(unsigned char *)(p + 0x558A) == 0) {
        if (*(int *)(p + 0x558C) >= *(int *)(p + 0x5590)) {
            r = 1;
        }
    } else {
        if (*(int *)(p + 0x558C) <= 0) {
            r = 1;
        }
    }
    return r;
}

void func_00195D30(char *p, signed char i) {
    ((int *)(p + 0x450))[i / 32] &= ~(1 << (i & 31));
}

int func_001A2170(char *);

int func_001A2120(char *p, unsigned int i) {
    int ok = i < *(unsigned short *)(p + 0xA8);
    if (ok == 0) {
        return 0;
    } else {
        return func_001A2170((*(char (**)[832])(p + 0xBC))[i]);
    }
}

extern int D_01CAFF38[];

int func_0020F1C0(char *p) {
    if (D_01CAFF30[0] == 19 && D_01CAFF38[0] == 421 && *(int *)(p + 0x30) == 1) {
        return 1;
    }
    return 0;
}

void func_00247710(char *p, char *src, signed char n) {
    int i;
    if (n > 0) {
        for (i = 0; i < n; i++) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + (i << 4) + 0xF0), "r"(src + (i << 4)) : "memory");
        }
        *(char *)(p + 0x170) = n;
    }
}

int func_001C52A0(char *, char *);

int func_001C52F0(char *p) {
    int i;
    int r;
    char *e;
    for (i = 0, e = p; i < 16; i++, e += 640) {
        if (*(unsigned char *)e != 0) {
            r = func_001C52A0(p, e);
        }
    }
    return r;
}

char *func_00287270(char *p, unsigned char k, int id) {
    char *v;
    for (v = *(char **)(p + 0x394); v != 0; v = *(char **)(v + 8)) {
        if (*(unsigned char *)(v + 0x11) == k && *(int *)(v + 0x14) == id) {
            *(int *)(v + 0x18) += 1;
            return v;
        }
    }
    return 0;
}

void func_004E9680(char *, int);
int func_004E98A0(char *);

int func_004E9840(char *p) {
    int r;
    unsigned char k = *(unsigned char *)(p + 4);
    switch (k) {
    case 0:
        func_004E9680(p, k);
        *(unsigned char *)(p + 4) += 1;
    case 1:
        r = func_004E98A0(p);
    }
    return r;
}

int func_004F7310(char *p) {
    char *q;
    *(char **)(p + 0xBA0) = func_00207480(2, 0x76, 0, 16);
    q = *(char **)(p + 0xBA0);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x8E0;
        *(char *)(q + 0x9A) = 0;
        return 1;
    }
    return 0;
}

extern float D_01DF5D20[];

int func_003A20C0(char *p, float *v, float rate, float floor) {
    float d;
    if (*(float *)(p + 0x10) <= 0.0f) {
        return 0;
    }
    d = D_01DF5D20[0];
    *v = *v - rate * d;
    if (*v <= floor) {
        *v = floor;
        return 1;
    }
    return 0;
}

void func_0021C100(char *, int, int, float, float);

void func_0023D5B0(char *p) {
    *(char *)(p + 0x28A9) = 0;
    *(float *)(p + 0x291C) = *(float *)(*(char **)(p + 0x283C) + 0x2F0);
    *(unsigned char *)(p + 0x299F) = (unsigned int)*(float *)(*(char **)(p + 0x283C) + 0x2C4);
    func_0021C100(p, 7, 10, 0.0f, -1.5f);
}

int func_003303A0(char *p, int k) {
    int i;
    if (k == -1) {
        return -1;
    }
    for (i = 0; i < 4; i++) {
        if (k == *(signed char *)(p + i + 0x114)) {
            return i + 3;
        }
    }
    return -1;
}
void func_001AF980(char *p, unsigned char a, signed char b) {
    int r = func_001AEA60(p, 2, a * 15 + b);
    if (r != 0) {
        func_001AF080(p, r);
    }
}
void func_001AFB30(char *p, unsigned char a, signed char b) {
    int r = func_001AEA60(p, 3, a * 6 + b);
    if (r != 0) {
        func_001AF080(p, r);
    }
}
void func_00195870(char *, signed char, int);
void func_00195C60(char *p, signed char i, int c) {
    ((int *)(p + 0x450))[i / 32] |= 1 << (i & 31);
    if (c != 0) {
        func_00195870(p, i, c);
    }
}
int func_001A4050(char *, int, int, int);
int func_001A39C0(char *p, unsigned int i, unsigned int j, int a, int b) {
    int r;
    if (i < *(unsigned short *)(p + 0xA8) && j < *(short *)(p + 0xAC)) {
        r = func_001A4050((*(char (**)[832])(p + 0xBC))[i], j, a, b);
    }
    return r;
}
void func_002E0580(char *, int, int, int);
int func_002E02C0(char *, int, int);
int func_002DF910(char *p, int a, int b) {
    int r;
    if (*(unsigned char *)(p + 0x3C80) == 6) {
        func_002E0580(p, a, b, 0);
        r = func_002E02C0(p, a, b);
    }
    return r;
}
extern char D_005A7AD0[];
void func_0022C850(char *, int);
void func_00100580(char *);
char *func_001ED5B0(char *p, short flag) {
    char *m;
    if (p != 0) {
        m = p + 0xC3C;
        if (m != 0) {
            *(char **)(p + 0xC3C) = D_005A7AD0;
            func_0022C850(m, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00471DF0(char *p) {
    char *q;
    *(char **)(p + 0x460) = func_00207480(3, 0xD3, 0, 8);
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}
int func_004F9040(char *p) {
    char *q;
    *(char **)(p + 0x138) = func_00207480(3, 0x19D, 0, 16);
    q = *(char **)(p + 0x138);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x5B0;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x138) + 0x3A) = 1;
        return 1;
    }
    return 0;
}
int func_004F9110(char *p) {
    char *q;
    *(char **)(p + 0x13C) = func_00207480(3, 0x19E, 0, 16);
    q = *(char **)(p + 0x13C);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x5B0;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x13C) + 0x3A) = 1;
        return 1;
    }
    return 0;
}
int func_0050E790(char *p) {
    char *q;
    *(char **)(p + 0x460) = func_00207480(3, 0xD3, 0, 8);
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

char *func_002109C0(char *p, int i) {
    char *e = *(char **)(p + 36) + (i << 4);
    char *v;
    if (*(int *)e != 0) {
        v = *(char **)(e + 4);
        switch (*(unsigned char *)v) {
        case 0:
            break;
        case 1:
        case 2:
        case 4:
        case 3:
            return v;
        default:
            return 0;
        }
    }
    return 0;
}

extern int D_0055BF10[];
void func_003303F0(int, int, unsigned int, int, int);
void func_00330C50(int p, unsigned int n, int a, int k) {
    unsigned int v;
    if (n < 20) {
        v = n;
    } else {
        v = n + D_0055BF10[k] - 20;
    }
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 52) != 0 && !(n < 20) && n < 50) {
        v += 30;
    }
    func_003303F0(p, 7, v, 0, k);
}
unsigned char func_001C6730(char *, char *);
int func_001C6790(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 16; i++, e += 640) {
        if (func_001C6730(p, e) == 0) {
            return 0;
        }
    }
    return 1;
}
extern char D_005A7AB0[];
void func_001003E0(char *, void *, int, int);
void func_00202ED0(void);
char *func_0023ADA0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A7AB0;
        func_001003E0(p + 2352, (void *)func_00202ED0, 16, 48);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005AC0F0[];
extern char D_005A7B60[];
void func_0024BE40(char *, int);
char *func_0023B480(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AC0F0;
        if (p != 0) {
            *(char **)p = D_005A7B60;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
int func_0027BDC0(char *, int, int);
int func_0027BF60(char *p) {
    int i;
    int r;
    char *e;
    for (i = 0, e = p; i < 20; i++, e += 2) {
        if (*(short *)(e + 4) >= 0) {
            func_0027BDC0(p, *(short *)(e + 4) & 255, 0);
            r = func_0027BDC0(p, *(unsigned char *)(e + 4), 1);
        }
    }
    return r;
}

unsigned char func_004908E0(char *, char *);
int func_00490870(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 2; i++, e += 12) {
        if (func_004908E0(p, e + 0x4320) == 0) {
            return 0;
        }
    }
    return 1;
}
unsigned char func_004B2F80(char *, char *);
int func_004B2F10(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 2; i++, e += 6) {
        if (func_004B2F80(p, e + 0x3DF4) == 0) {
            return 0;
        }
    }
    return 1;
}
void func_001AE0D0(char *t, int i, int a, int b, int n) {
    char *v;
    t = t + i * 80;
    *(short *)(t + 80) = 1;
    *(char *)(t + 84) = a;
    v = t + 16;
    *(char *)(t + 85) = b;
    if ((a | b) == 0) {
        *(short *)(v + 66) = 0;
    } else if (n == 0 || n > 180) {
        *(short *)(v + 66) = 180;
    } else {
        *(short *)(v + 66) = n;
    }
}
unsigned char func_003AC650(void);
unsigned char func_003AC6B0(char *);
int func_003AC6C0(char *p) {
    if (func_003AC650() == 1) {
        return 0;
    }
    if (func_003AC6B0(p) == 0 && *(unsigned short *)(p + 0x4E00) != 0) {
        return 0;
    }
    return 1;
}
unsigned char func_001C6730(char *p0, char *p1) {
    char *v;
    if (*(unsigned char *)p1 == 0) {
        return 1;
    }
    v = *(char **)(p1 + 16);
    if (v == 0) {
        return 0;
    }
    if (*(int *)(v + 32) == 0 || *(int *)(v + 36) == 0) {
        return 0;
    }
    return 1;
}
extern char D_00666750[];
int func_0036E050(int);
int func_00370000(char *p) {
    if (*(int *)(p + 24) == 0 && (*(int *)(p + 24) = func_0036E050(func_001AEA60(D_00666750, 6, 2))) == 0) {
        return 0;
    }
    return 1;
}

void func_00252850(char *, int, int);
void func_0033B0B0(char *p, unsigned char k, int a, int b) {
    if (*(unsigned char *)(p + 333) == 3) {
        return;
    }
    switch (k) {
    case 0:
    case 1:
    case 4:
        break;
    case 2:
    case 3:
        func_00252850(p, a, b);
        break;
    }
}
void func_003C0890(char *p, unsigned char k, int a, int b) {
    if (*(unsigned char *)(p + 333) == 3) {
        return;
    }
    switch (k) {
    case 0:
    case 1:
    case 4:
        break;
    case 2:
    case 3:
        func_00252850(p, a, b);
        break;
    }
}
int func_002FFE20(char *, int);
int func_003002D0(char *, int);
void func_002FFBF0(char *p) {
    int k = *(unsigned char *)(p + 57);
    switch (k) {
    case 0:
    case 1:
        func_002FFE20(p, k);
        break;
    case 2:
    case 3:
        func_003002D0(p, k);
        break;
    }
}
extern float D_005BCD2C;
void func_003FF6F0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) += 1;
        break;
    case 1:
        *(float *)(p + 84) += D_005BCD2C * *(float *)(p + 16);
        if (*(float *)(p + 84) >= *(float *)(p + 4868)) {
            *(char *)(p + 5) = 0;
            *(char *)(p + 6) = 0;
        }
        break;
    }
}
extern char D_006480D0[];
int func_00196F20(char *, int, int, int);
int func_00197AC0(char *p) {
    int a = *(short *)(p + 24);
    int r = 0;
    if (a < 0 || *(short *)(p + 56) > 0) {
        return 0;
    }
    if (*(short *)(p + 20) == 0) {
        r += func_00196F20(D_006480D0, a, *(short *)(p + 30), *(short *)(p + 32));
    }
    return r;
}
char *func_004D2740(char *p) {
    char *r;
    switch (*(unsigned char *)(p + 45769)) {
    case 0:
    case 1:
        r = p + 3700;
        break;
    case 2:
        r = p + 3952;
        break;
    case 3:
        r = p + 4292;
        break;
    default:
        r = p + 3700;
        break;
    }
    return r;
}
extern char D_005AB850[];
extern char D_005A7910[];
void func_0048D900(char *, int);
char *func_002FE760(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB850;
        func_0048D900(p + 44, -1);
        if (p != 0) {
            *(char **)p = D_005A7910;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005B26C0[];
extern char D_005B2D48[];
void func_00406170(char *, int);
void func_0013D240(char *, int);
char *func_004027D0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B26C0;
        func_00406170(p + 92, -1);
        if (p + 24 != 0) {
            func_0013D240(p + 40, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
char *func_00408D60(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B2D48;
        func_00406170(p + 76, -1);
        if (p + 32 != 0) {
            func_0013D240(p + 48, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
void func_0034AE70(void);
void func_0034B040(void);
int func_0034ADE0(char *p) {
    switch (*(int *)(p + 16)) {
    case 0:
        func_0034AE70();
        break;
    case 1:
        func_0034B040();
        break;
    case 2:
        if (*(int *)(p + 12) == 1) {
            return -1;
        }
        return 1;
    }
    return 0;
}
int func_0024E800(char *);
void func_002965E0(char *, int);
void func_0029D0A0(char *p) {
    if (func_0024E800(p + 0x8980) != 0) {
        *(char *)(p + 43403) = 0;
        *(char *)(p + 43664) = 1;
        func_002965E0(p, 0xFFFF);
    }
    *(float *)(p + 43404) = 1000.0f;
    *(float *)(p + 43648) = 1000.0f;
}

extern char D_005A79B0[];
extern char D_005A6F50[];
void func_002791E0(char *, int);
char *func_0022E800(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A79B0;
        func_002791E0(p + 64, -1);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 36, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005B5610[];
extern char D_005B56C8[];
void func_0031E440(char *, int);
void func_00320590(char *, int);
char *func_00459930(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B5610;
        *(char **)(p + 160) = D_005B56C8;
        func_0031E440(p + 160, 0);
        func_00320590(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
void func_00387B20(char *p) {
    float v;
    if (*(float *)(p + 3236) < *(float *)(p + 3444) + *(float *)(p + 3496)) {
        *(float *)(p + 3236) += 10.0f;
    } else {
        func_001AD140(p);
    }
    v = *(float *)(p + 3504);
    if (v > 0.0f) {
        *(float *)(p + 3504) = v - *(float *)(p + 16);
    }
}
float func_00132470(float *, float *);
int func_001BE300(int p0, float *a, float *b, float *out) {
    if (func_00132470(a, b) - b[4] < 0.0f) {
        if (out != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(a), "r"(out) : "memory");
        }
        return 1;
    }
    return 0;
}
extern float D_00568110[][6];
void func_00505570(char *p) {
    float s;
    *(unsigned char *)(p + 5) += 1;
    s = D_00568110[*(int *)(p + 1272)][*(int *)(p + 1276)];
    *(float *)(p + 496) = *(float *)(p + 464) * s;
    *(float *)(p + 500) = *(float *)(p + 468) * s;
    *(float *)(p + 504) = *(float *)(p + 472) * s;
    *(float *)(p + 508) = 0.0f;
    *(float *)(p + 536) = 10.0f;
    *(float *)(p + 540) = 0.0f;
    *(float *)(p + 544) = 10.0f;
    *(char *)(p + 1280) = 0;
}

extern char D_005AAA50[];
char *func_002DDBA0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AAA50;
        func_004027D0(p + 104, -1);
        if (p + 32 != 0) {
            func_0013D240(p + 48, -1);
        }
        if (p != 0) {
            *(char **)p = D_005A7910;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005AB590[];
extern char D_005AB5B4[];
extern char D_005AB634[];
void func_0028C1A0(char *, int);
void func_00253000(char *, int);
char *func_002F9100(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB590;
        *(char **)(p + 64) = D_005AB5B4;
        *(char **)(p + 160) = D_005AB634;
        func_0028C1A0(p + 336, -1);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
int func_0024E820(char *, int);
int func_003C4950(char *p) {
    int r;
    switch (*(unsigned char *)(p + 5156)) {
    case 18:
    case 19:
    case 20:
        r = func_0024E820(p + 5376, 1);
        break;
    default:
        r = func_0024E820(p + 5376, 0);
        break;
    }
    return r;
}
void func_00316F30(p0, p1, p2) int p0; char *p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    float tmp2;
    if ((p2 & 255) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)D_01CAFF0C + 12) + 80)), "r"(((stk + 0) + 0)) : "memory");
    } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)D_01CAFF0C + 16) + 80)), "r"(((stk + 0) + 0)) : "memory");
    }
    *(float *)((stk + 0) + 4) = *(float *)((stk + 0) + 4) + 150.0f;
    *(float *)((stk + 0) + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(((stk + 0) + 0)), "r"(p1) : "memory");
}

extern char D_005A9980[];
extern char D_005A99B0[];
extern char D_005A9A10[];
void func_0023ACD0(void);
char *func_002A7E80(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9980;
        func_001003E0(p + 176, (void *)func_0023ACD0, 2128, 4);
        if (p != 0) {
            *(char **)p = D_005A9A10;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
char *func_002A7F30(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A99B0;
        func_001003E0(p + 176, (void *)func_0023ACD0, 2128, 2);
        if (p != 0) {
            *(char **)p = D_005A9A10;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
short func_004838E0(void);
signed char func_00483960(char *, int);
short func_004844D0(char *, int, int);
void func_00483620(char *p, int t, int id, float f) {
    if (id == 0 || t > 699) {
        *(char *)(p + 211) = 0;
    } else {
        *(char *)(p + 211) = 1;
        *(int *)(p + 212) = id;
        *(int *)(p + 216) = (int)f;
        *(short *)(p + 208) = func_004838E0();
        *(char *)(p + 210) = func_00483960(p, *(short *)(p + 208));
        *(short *)(p + 208) = func_004844D0(p, *(signed char *)(p + 210), *(short *)(p + 208));
    }
}

void func_002E9A50(char *);
void func_002EA330(char *);
void func_002E9EC0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(float *)(p + 152) -= *(float *)(p + 16);
        if (*(float *)(p + 152) <= 0.0f) {
            *(float *)(p + 152) = 0.0f;
            func_002E9A50(p);
            *(unsigned char *)(p + 4) += 1;
        }
        break;
    case 1:
        func_002EA330(p);
        break;
    }
}
void func_004D8060(char *p) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 784), "r"(stk) : "memory");
    *(float *)(stk + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 80), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 224), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 848), "r"(p + 240) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 1248), "r"(stk) : "memory");
    *(float *)(p + 1260) = 1.0f;
}

void func_004F89D0(char *p) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 784), "r"(stk) : "memory");
    *(float *)(stk + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 80), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 224), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 848), "r"(p + 240) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 1504), "r"(stk) : "memory");
    *(float *)(p + 1516) = 1.0f;
}

typedef struct { float x, y, z, w; } V4f;
void func_003008D0(void);
void func_00300840(char *p, unsigned char flag) {
    int n;
    int off;
    if (flag == 1) {
        n = *(int *)(*(char **)(p + 68) + 17124) + 1;
        off = n << 5;
        while (n > 0) {
            n--;
            *(V4f *)(*(char **)(p + 68) + off) = *(V4f *)(*(char **)(p + 68) + off - 32);
            *(V4f *)(*(char **)(p + 68) + off + 16) = *(V4f *)(*(char **)(p + 68) + off - 16);
            off -= 32;
        }
    }
    func_003008D0();
}
extern char D_005AB870[];
extern char D_005A7AE0[];
extern char D_005A7910[];
char *func_002FF6B0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB870;
        if (p + 136 != 0) {
            *(char **)(p + 136) = D_005A7AE0;
        }
        func_0048D900(p + 60, -1);
        if (p != 0) {
            *(char **)p = D_005A7910;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
int func_0022CBA0(char *);
void func_0022CBB0(char *, char *);
int func_0012B1A0(char *, int *);
extern int D_005BDA80;
int func_0044C8B0(void);
int func_0044C820(char *p) {
    char buf[0x20] __attribute__((aligned(16)));
    if ((func_0022CBA0(p) != 0) ^ 1) {
        do {
            func_0022CBB0(p, buf);
            if (func_0012B1A0(buf, &D_005BDA80) == 0) {
                return func_0044C8B0();
            }
        } while ((func_0022CBA0(p) != 0) ^ 1);
    }
    return 0;
}
int func_00207060(char *p) {
    char *v = *(char **)(p + 68);
    if (v != 0) {
        switch (*(unsigned char *)(v + 56)) {
        case 0:
            return 0;
        case 2:
            *(int *)(p + 68) = 0;
            return 0;
        case 1:
            return 1;
        case 3:
            *(int *)(p + 68) = 0;
            return 1;
        }
    }
    return 0;
}
char *func_002089D0(char *p) {
    char *e;
    while (*(short *)(p + 2) < *(short *)p) {
        e = p + *(short *)(p + 2) * 208 + 16;
        if (!((*(unsigned char *)(e + 1) != 0) ^ 1)) {
            *(short *)(p + 2) += 1;
            return e;
        }
        *(short *)(p + 2) += 1;
    }
    return 0;
}
int func_00220860(char *, int, int, float);
void func_002497E0(void);
void func_00249860(char *);
void func_00221920(char *p) {
    int cur;
    func_002497E0();
    func_00249860(p);
    cur = *(unsigned short *)(p + 9414);
    if (cur != (unsigned short)func_00220860(p, 1, 1, 0.0f)) {
        func_00220860(p, 1, 0, 6.0f);
    }
    if (*(unsigned char *)(p + 10423) == 1) {
        func_00220860(p, 1, 0, 0.0f);
    }
}
extern int D_005BDA98;
int func_00450800(void);
int func_00450770(char *p) {
    char buf[0x20] __attribute__((aligned(16)));
    if ((func_0022CBA0(p) != 0) ^ 1) {
        do {
            func_0022CBB0(p, buf);
            if (func_0012B1A0(buf, &D_005BDA98) == 0) {
                return func_00450800();
            }
        } while ((func_0022CBA0(p) != 0) ^ 1);
    }
    return 0;
}

char *func_002D6540(char *p) {
    char *best;
    int i;
    float d;
    char *e;
    float v;
    best = 0;
    d = 1000000.0f;
    for (i = 0, e = p; i < 6; i++, e += 4) {
        if (*(char **)(e + 14620) != 0) {
            v = func_00132470((float *)(p + 80), (float *)(*(char **)(e + 14620) + 80));
            if (v < d) {
                best = *(char **)(e + 14620);
                d = v;
            }
        }
    }
    return best;
}
extern char D_00598570[];
extern char D_00599090[];
extern int D_005BC5F8;
extern char D_00645A30[];
char *func_001005E0(int, int, char *, char *, int);
int func_00195D90(char *);
char *func_002F7D10(void) {
    int v;
    char *o;
    v = func_00195D90(D_00645A30);
    if (v != 0) {
        do {
            o = func_001005E0(v, 0, D_00599090, D_00598570, 0);
            if (o != 0 && D_005BC5F8 == *(int *)(o + 8)) {
                return o;
            }
            v = func_00195D90(D_00645A30);
        } while (v != 0);
    }
    return 0;
}
void func_004AB580(char *p) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(*(char **)(p + 1184) + 260) + 48), "r"(p + 80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 128), "r"(p + 128) : "memory");
    *(short *)(p + 144) = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 132) / 6.283185005187988f);
    *(float *)(p + 1232) = *(float *)(*(char **)(p + 208) + 84);
}
extern char D_005AFE30[];
extern char D_005AFE54[];
extern char D_005AFED4[];
extern char D_005AFF68[];
void func_004FE840(char *, int);
char *func_003BA8C0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AFE30;
        *(char **)(p + 64) = D_005AFE54;
        *(char **)(p + 160) = D_005AFED4;
        *(char **)(p + 208) = D_005AFF68;
        func_0028C1A0(p + 672, -1);
        func_004FE840(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
void func_002075C0(int, int, char *, int);
void func_004F6390(char *, char *, int, int);
void func_003C6880(char *p, int a) {
    char stk[0x10] __attribute__((aligned(16)));
    func_002075C0(3, 572, *(char **)(*(char **)(p + 1508) + 260), 1);
    func_004F6390(p, *(char **)(*(char **)(p + 1508) + 260), a, *(int *)(p + 1440));
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(*(char **)(p + 1508) + 260)), "r"(stk) : "memory");
    func_0034BA60(45, stk, *(signed char *)(p + 70), 0, 1);
}

void func_003EF580(char *);
void func_003EF860(char *p) {
    *(float *)(p + 1812) += *(float *)(p + 14868) * *(float *)(p + 16);
    *(float *)(p + 14868) += -0.896f * *(float *)(p + 16);
    if (func_0024E800(p + 8144) != 0 || *(float *)(p + 15012) > 0.0f) {
        func_003EF580(p);
    }
}
void func_002207C0(char *p) {
    int cur;
    *(short *)(p + 10460) = *(short *)(p + 144);
    func_002497E0();
    func_00249860(p);
    cur = *(unsigned short *)(p + 9414);
    if (cur != (unsigned short)func_00220860(p, 1, 1, 0.0f)) {
        func_00220860(p, 1, 0, 5.0f);
    }
    if (*(unsigned char *)(p + 10423) == 1) {
        func_00220860(p, 1, 0, 0.0f);
    }
}
typedef struct { short k; short pad; int v; } KEnt;
typedef struct { short n; short pad; KEnt e[272]; } KTab;
int func_001F3A50(KTab *, int);
int func_001F3AA0(KTab *t, int v, int k) {
    if (func_001F3A50(t, k) != 0) {
        return 1;
    }
    if (t->n >= 272) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].v = v;
    t->n += 1;
    return 1;
}
int func_001FED70(KTab *, int);
int func_001FEDC0(KTab *t, int v, int k) {
    if (func_001FED70(t, k) != 0) {
        return 1;
    }
    if (t->n >= 128) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].v = v;
    t->n += 1;
    return 1;
}

extern char D_00543B00[];
extern char D_00543BF0[];
void func_00233820(char *p) {
    int i = 0;
    char *s = D_00543BF0;
    char *d = p;
    char *t = D_00543B00;
    do {
        i++;
        *(char *)(p + 15600) = *(unsigned char *)(s + 0);
        *(char *)(p + 15601) = *(unsigned char *)(s + 1);
        *(short *)(p + 15602) = *(unsigned short *)(s + 2);
        s += 4;
        *(char *)(d + 15632) = 4;
        p += 4;
        *(V4f *)(d + 15648) = *(V4f *)(t + 0);
        *(V4f *)(d + 15664) = *(V4f *)(t + 16);
        *(float *)(d + 15680) = *(float *)(t + 32);
        t += 48;
        d += 80;
    } while (i < 5);
}
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
extern char D_005B26D0[];
extern char D_005B37F0[];
extern char D_005A6F50[];

char *func_00404AC0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B26D0;
        func_001003E0(p + 320, (void *)func_002791E0, 1536, 5);
        func_001003E0(p + 60, (void *)func_0013D240, 16, 16);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 36, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
char *func_0041C8F0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B37F0;
        func_001003E0(p + 320, (void *)func_002791E0, 1536, 5);
        func_001003E0(p + 60, (void *)func_0013D240, 16, 16);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 36, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
void func_00474E80(char *, int);
void func_00474DD0(char *p) {
    float d;
    *(float *)(p + 408) += *(float *)(p + 400) * *(float *)(p + 16);
    d = *(float *)(*(char **)(p + 2756) + 4);
    if (*(float *)(p + 408) >= d) {
        *(float *)(p + 408) -= d;
        *(int *)(p + 2760) = *(int *)(p + 2756);
        *(int *)(p + 2756) = *(int *)(p + 2752);
        *(int *)(p + 2752) = 0;
    }
    if (*(int *)(p + 2760) != 0 && *(float *)(p + 408) >= 0.5235988f) {
        *(int *)(p + 2752) = *(int *)(p + 2760);
        func_00474E80(p, *(int *)(p + 2752));
        *(int *)(p + 2760) = 0;
    }
}
unsigned char func_003A1180(char *p) {
    float old;
    float v;
    unsigned char r;
    *(float *)(p + 84) += *(float *)(p + 100) * *(float *)(p + 16);
    old = *(float *)(p + 100);
    v = old + *(float *)(p + 116) * *(float *)(p + 16);
    r = 0;
    if (v < 0.0f && old >= 0.0f) {
        r = 1;
    }
    if (v < 0.0f || v != *(float *)(p + 11780)) {
        if (v < *(float *)(p + 11780)) {
            v = *(float *)(p + 11780);
        }
    }
    *(float *)(p + 100) = v;
    return r;
}
