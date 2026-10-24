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

char *func_001B0FD0(char *, int, int);
int func_0030E500(char *, int);
int func_0030E450(char *p, int n, int a) {
    int i;
    int off;
    *(char **)p = func_001B0FD0(p + 4, n << 3, 0);
    *(int *)(p + 20) = n;
    i = 0;
    if (0 < *(int *)(p + 20)) {
        off = 0;
        do {
            i++;
            *(short *)(*(char **)p + off) = -1;
            *(int *)(*(char **)p + off + 4) = 0;
            off += 8;
        } while (i < *(int *)(p + 20));
    }
    i = func_0030E500(p, a);
    *(char *)(p + 28) = 0;
    return i;
}
void func_00286B90(char *, int, int);
void func_00287120(char *p, int k) {
    if (*(int *)(p + 928) == 12) {
        func_00286B90(p, 5, k);
        func_00286B90(p, 6, 28);
    } else if (k == 27) {
        func_00286B90(p, 5, 0);
        func_00286B90(p, 6, 27);
    } else {
        func_00286B90(p, 5, k);
        func_00286B90(p, 6, k);
    }
}
void func_004B9BA0(char *p) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 80), "r"(p + 80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 128), "r"(p + 128) : "memory");
    *(short *)(p + 144) = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 132) / 6.283185005187988f);
    if (*(int *)(p + 1276) == 2) {
        *(float *)(p + 84) += 150.0f;
    }
}
extern unsigned char D_0056C030[][44];
short func_0038F490(char *p) {
    return (short)(unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 16) * (unsigned int)D_0056C030[*(unsigned char *)(p + 5)][*(unsigned char *)(p + 1051)]) / 360.0f);
}

extern char D_005B5A80[];
extern char D_005B5AA4[];
extern char D_005B5B24[];
extern char D_005B5BB8[];
extern char D_005B5C84[];
extern char D_005B5D3C[];
void func_0031E4E0(char *, int);
void func_0024FEA0(char *, int);
char *func_0046FC30(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B5A80;
        *(char **)(p + 64) = D_005B5AA4;
        *(char **)(p + 160) = D_005B5B24;
        *(char **)(p + 208) = D_005B5BB8;
        *(char **)(p + 304) = D_005B5C84;
        *(char **)(p + 464) = D_005B5D3C;
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005B74C0[];
extern char D_005B74E4[];
extern char D_005B7564[];
char *func_0048D760(char *p, short flag) {
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


void func_003B92A0(char *);
void func_003BA400(char *);
void func_003B9E90(char *p, float *pos, int k, float f) {
    char *q;
    *(char *)(p + 437) = 1;
    *(char *)(p + 438) = 0;
    func_003B92A0(p);
    func_003BA400(p);
    *(char *)(p + 440) = k;
    *(char **)(p + 536) = func_00207480(3, 51, 0, 16);
    q = *(char **)(p + 536);
    if (q != 0) {
        *(char **)(q + 144) = p + 592;
        *(char *)(q + 154) = 0;
        *(char *)(*(char **)(p + 536) + 58) = 1;
    }
    *(float *)(p + 576) = pos[0];
    *(float *)(p + 580) = pos[1];
    *(float *)(p + 584) = pos[2];
    *(float *)(p + 468) = f;
    *(char *)(p + 5) = 0;
}
unsigned char func_002242C0(void);
int func_0024DB10(char *, int, int, int, int, int, int);
void func_002494A0(char *p, int a, int b, int c, int d, int e, float f) {
    if (func_002242C0() != 1) {
        if (*(unsigned char *)(p + 9423) == 1) {
            e = 0;
        }
        func_0024DB10(p + 18128, a, b, (int)f, c, d, e);
        *(char *)(p + 9422) = 2;
    }
}
void func_00249610(char *p, int a, int b, int c, int d, int e, float f) {
    if (func_002242C0() != 1) {
        if (*(unsigned char *)(p + 9423) == 1) {
            e = 0;
        }
        func_0024DB10(p + 17920, a, b, (int)f, c, d, e);
        *(char *)(p + 9422) = 2;
    }
}
extern char D_005B08A0[];
extern char D_005B08C4[];
extern char D_005B0944[];
extern char D_005A8DD0[];
extern char D_005A8DF4[];
extern char D_005A8E74[];
void func_0031DD00(char *, int);
void func_0024F810(char *, int);
char *func_003CAC50(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B08A0;
        *(char **)(p + 64) = D_005B08C4;
        *(char **)(p + 160) = D_005B0944;
        func_0031DD00(p + 1792, -1);
        func_002791E0(p + 256, -1);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
unsigned char func_002077F0(char *);
void func_00322D00(char *p) {
    int i;
    char *e;
    unsigned char *f;
    char *q;
    for (i = 0, e = p; i < 4; i++, e += 4) {
        f = (unsigned char *)(p + i + 1092);
        if (*f == 1) {
            func_00206730(e + 1096);
            if (*(char **)(e + 1096) != 0) {
                if (func_002077F0(*(char **)(e + 1096)) == 0) {
                    func_001AD140(*(char **)(e + 1096));
                    q = *(char **)(e + 1096);
                    *(int *)(*(char **)(e + 1096) + 144) = 0;
                    *(char *)(q + 154) = 0;
                    *f = 0;
                    *(int *)(e + 1096) = 0;
                }
            } else {
                *f = 0;
            }
        }
    }
}
void func_0028C790(char *, int);
void func_0024F130(char *p) {
    signed char ch;
    unsigned short id;
    int i;
    int off;
    *(int *)(p + 20) += 1;
    ch = *(*(signed char **)(p + 20))++;
    id = *(*(unsigned short **)(p + 20))++;
    if (*(int *)(p + 204) != 0 && ch == *(int *)(p + 56)) {
        for (i = 0, off = 0; i < 16; i++, off += 2) {
            if (id == *(unsigned short *)(*(char **)(p + 204) + off + 8)) {
                func_0028C790(*(char **)(p + 204), i);
            }
        }
    }
}

extern char D_005B84B0[];
extern char D_005B84D4[];
extern char D_005B8554[];
extern char D_005B85E8[];
void func_002E83B0(char *, int);
char *func_004B8870(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B84B0;
        *(char **)(p + 64) = D_005B84D4;
        *(char **)(p + 160) = D_005B8554;
        *(char **)(p + 208) = D_005B85E8;
        func_002E83B0(p + 2544, -1);
        func_0028C1A0(p + 2000, -1);
        func_002791E0(p + 448, -1);
        func_001003E0(p + 308, (void *)func_0013D240, 16, 3);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
unsigned char func_0021D1D0(char *);
int func_0021D320(char *p, unsigned char a, unsigned char b, int c, int d) {
    if (func_0021D1D0(p) == 0) {
        return 0;
    }
    if (*(unsigned char *)(p + 10312) != 43) {
        return 0;
    }
    if (*(unsigned char *)(p + 11001) != a) {
        return 0;
    }
    if (*(unsigned char *)(p + 11002) != b) {
        return 0;
    }
    *(char *)(p + 11004) = *(unsigned char *)(p + 11003);
    *(char *)(p + 11003) = d;
    *(char *)(p + 11005) = c;
    *(char *)(p + 11000) = 1;
    return 1;
}
extern char D_01CAFF0C[];
void func_00208830(int, int);
void func_00453AE0(char *);
void func_00453890(char *p) {
    float v;
    if (*(unsigned char *)(p + 4583) == 0) {
        if ((*(float *)(p + 4628) -= *(float *)(p + 16)) < 0.0f) {
            *(char *)(p + 5) = 1;
            func_00453AE0(p);
            switch (*(unsigned char *)(p + 4578)) {
            case 0:
                if (*(int *)(p + 4588) != -1) {
                    func_00208830(*(int *)(*(char **)D_01CAFF0C + 28), *(int *)(p + 4588));
                }
                break;
            case 1:
                break;
            case 2:
                if (*(int *)(p + 4592) != -1) {
                    func_00208830(*(int *)(*(char **)D_01CAFF0C + 28), *(int *)(p + 4592));
                }
                break;
            }
        }
    }
}
extern float D_00577D10[][3];
float func_001324B0(float *, int);
int func_00437A00(int p0, int a) {
    float v[4] __attribute__((aligned(16)));
    int i;
    int best;
    float m = 0.0f;
    for (i = 0; i < 16; i++) {
        v[0] = D_00577D10[i][0];
        v[1] = D_00577D10[i][1];
        v[2] = D_00577D10[i][2];
        v[3] = 1.0f;
        {
            float d = func_001324B0(v, a);
            if (d > m) {
                m = d;
                best = i;
            }
        }
    }
    return best;
}

static inline unsigned char is_zero8(char *q) {
    return *(unsigned char *)q == 0;
}

void func_001F87B0(char *, int, char *, float);
void func_001B3600(char *, char *, char *, char *);

void func_001B6060(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 2, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_001BB920(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 3, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_001BE070(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 3, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_001F7050(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 2, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_001F7DC0(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 2, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_00481800(char *p) {
    char stk[0x10] __attribute__((aligned(16)));
    int i;
    char *o;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 3856), "r"(stk) : "memory");
    *(float *)(stk + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 80), "r"(stk) : "memory");
    *(float *)(p + 92) = 1.0f;
    for (i = 0; i < 15; i++) {
        o = ((char **)(p + 576))[i];
        if (o != 0 && *(int *)(o + 260) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 576))[i] + 260) + 48), "r"(stk) : "memory");
            *(float *)(*(char **)(((char **)(p + 576))[i] + 260) + 60) = 1.0f;
        }
    }
}

extern char D_005B9A90[];
extern char D_005B9AB4[];
extern char D_005B9B34[];
extern char D_005B9BC8[];
void func_002047C0(void);
void func_00401030(char *, int);
void func_0027A660(char *, int);
char *func_004DD450(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B9A90;
        *(char **)(p + 64) = D_005B9AB4;
        *(char **)(p + 160) = D_005B9B34;
        *(char **)(p + 208) = D_005B9BC8;
        func_0028C1A0(p + 4896, -1);
        func_002E83B0(p + 4544, -1);
        func_001003E0(p + 1552, (void *)func_002047C0, 80, 31);
        func_00401030(p + 1472, -1);
        func_0027A660(p + 384, -1);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005BA850[];
extern char D_005BA874[];
extern char D_005BA8F4[];
extern char D_005A78F8[];
extern char D_005A77A0[];
char *func_004F7580(char *p, short flag) {
    char *m;
    if (p != 0) {
        *(char **)p = D_005BA850;
        *(char **)(p + 64) = D_005BA874;
        *(char **)(p + 160) = D_005BA8F4;
        func_0028C1A0(p + 2336, -1);
        m = p + 2080;
        if (m != 0) {
            *(char **)(p + 2096) = D_005A78F8;
            if (m != 0) {
                *(char **)(p + 2096) = D_005A77A0;
            }
        }
        func_002791E0(p + 512, -1);
        func_001003E0(p + 340, (void *)func_0013D240, 16, 7);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}
extern char D_005BB140[];
extern char D_005A6F50[];
char *func_00504110(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005BB140;
        if (p + 6592 != 0) {
            func_0013D240(p + 6680, -1);
            func_0013D240(p + 6664, -1);
        }
        func_002791E0(p + 5056, -1);
        func_002791E0(p + 3200, -1);
        func_002791E0(p + 1664, -1);
        func_001003E0(p + 128, (void *)func_002791E0, 1536, 1);
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
typedef struct { short k; short pad; int a; int b; } K12;
typedef struct { short n; short pad; K12 e[64]; } K12Tab;
int func_00287D90(K12Tab *, int, int, int);
int func_00287E30(K12Tab *t, int k, int a, int b) {
    if (func_00287D90(t, k, a, b) != 0) {
        return 1;
    }
    if (t->n >= 64) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].a = a;
    t->e[t->n].b = b;
    t->n += 1;
    return 1;
}
extern char D_01CAFF0C[];
int func_002F2FC0(int, int);
void func_003FA770(char *, char *, char *, float *, float *);
int func_00424DE0(char *p) {
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

void func_003F85D0(char *, int);
void func_00424EB0(char *, int);
void func_004252D0(char *, int);
void func_004254B0(char *, int);
void func_003F8E90(char *, int);
void func_003F94A0(char *, int);
void func_003F9700(char *, int);
void func_00424B30(char *p) {
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

extern char D_005455A6[];
extern char D_00666750[];
unsigned char func_001AF500(char *, int, int, int);
unsigned char func_001AF690(char *, int, int, int);
unsigned char func_001AF800(char *, int, int, int);
unsigned char func_001AF9E0(char *, int, int, int);
unsigned char func_00203670(unsigned char k) {
    unsigned char r = 1;
    if (func_001AF500(D_00666750, k, 1, 0) == 0) {
        r = 0;
    }
    if (func_001AF800(D_00666750, k, 14, 1) == 0) {
        r = 0;
    }
    if (func_001AF690(D_00666750, k, *(unsigned char *)D_005455A6, 1) == 0) {
        r = 0;
    }
    if (func_001AF9E0(D_00666750, k, 0, 1) == 0) {
        r = 0;
    }
    return r;
}
int func_0019F6C0(int, int, int);
void func_0019F8B0(int, char *, int, int);
int func_001A1CB0(int, int, int);
int func_0031E1B0(char *p, int a, int b, int c) {
    int n = func_0019F6C0(a, b, c);
    char *buf;
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 4, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_0019F8B0(a, buf, b, c);
    if (func_001A1CB0(a, b, n) != 0) {
        return 0;
    }
    *(int *)(p + 20) = a;
    *(int *)(p + 24) = b;
    *(char *)(p + 28) = 1;
    return 1;
}
void func_00253BC0(char *d, char *s) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        d[i] = s[i];
        if (d[i] != -1) {
            d[d[i] + 5] = s[i + 5];
        }
    }
    d[20] = s[10];
    d[21] = s[11];
    d[32] = s[18];
    d[*(unsigned char *)(s + 18) + 33] = s[19];
    ((float *)(d + 40))[*(unsigned char *)(s + 18)] = *(float *)(s + 52);
    d[23] = *(unsigned char *)(s + 17);
    *(float *)(d + 24) = *(float *)(s + 60);
    *(float *)(d + 28) = *(float *)(s + 68);
    *(int *)(d + 64) = *(int *)(s + 20);
    *(int *)(d + 68) = *(int *)(s + 24);
    *(int *)(d + 72) = *(int *)(s + 28);
    *(int *)(d + 76) = *(int *)(s + 32);
    *(int *)(d + 80) = *(int *)(s + 36);
    *(int *)(d + 84) = *(int *)(s + 40);
    *(int *)(d + 88) = *(int *)(s + 44);
    *(int *)(d + 92) = *(int *)(s + 48);
}

void func_0024F050(char *p) {
    signed char ch;
    signed char mask;
    int i;
    int off;
    *(int *)(p + 20) += 1;
    ch = *(*(signed char **)(p + 20))++;
    mask = *(*(signed char **)(p + 20))++;
    *(int *)(p + 20) += 1;
    if (*(int *)(p + 204) != 0 && ch == *(int *)(p + 56)) {
        for (i = 0, off = 0; i < 16; i++, off += 4) {
            char *o = *(char **)(*(char **)(p + 204) + off + 124);
            if (o != 0 && (mask & **(unsigned char **)(o + 256)) != 0) {
                func_0028C790(*(char **)(p + 204), i);
            }
        }
    }
}
float func_0041E060(char *);
void func_004B9AB0(char *p) {
    char *b;
    *(float *)(p + 1008) *= 0.5f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 80), "r"(p + 80) : "memory");
    *(float *)(p + 84) += 70.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 128), "r"(p + 128) : "memory");
    *(short *)(p + 144) = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 132) / 6.283185005187988f);
    b = p;
    if (b != 0) {
        b += 64;
    }
    *(float *)(p + 1252) = func_0041E060(b);
    *(float *)(p + 1260) = 1.0f;
}

void func_00206730(char *h) {
    char *o = *(char **)h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *(char **)h = 0;
            break;
        }
    }
}

void func_0024DA80(char *, int, int);
void func_002CB900(char *, int);
void func_00128488(char *, int, int);
void func_002CD970(char *p) {
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0x1D);
    func_0024DA80(p + 0x2520, 1, 0x1D);
    func_0024DA80(p + 0x25F0, 1, 0x1D);
    func_0024DA80(p + 0x26C0, 1, 0x1D);
    func_0024DA80(p + 0x2790, 1, 0x1D);
    func_002CB900(p, 0x2C);
    *(char *)(p + 0x2CE4) = 0x2C;
    *(char *)(p + 0x2CE5) = 0x2C;
    *(char *)(p + 0x2CE6) = 0x2C;
    *(char *)(p + 0x2CE7) = 0x2C;
    *(char *)(p + 0x2CE8) = 0x2C;
    func_00128488(p + 0x5AD, 0, 4);
}

typedef struct { short k; short pad; int v; } KEnt128;
typedef struct { short n; short pad; KEnt128 e[128]; } KTab128;
int func_001EDD20(KTab128 *t, short k) {
    int i;
    for (i = 0; i < 128; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}
void func_003F2F60(char *);
void func_003E9930(char *);
void func_003EBDA0(char *p) {
    func_003F2F60(p);
    if ((*(float *)(p + 0x3A8C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_003E9930(p);
    }
}

int func_00207060(char *);
extern signed char D_005BE0B4;
void func_001B2780(char *p) {
    func_001AD100(p);
    if (func_00207060(p) != 0) {
        func_001AD140(p);
    } else if (D_005BE0B4 != 0) {
        func_001AD140(p);
    } else {
        *(volatile unsigned char *)(p + 0x39);
    }
}
int func_0037BB70(char *p, char *o) {
    char *e;
    int i;
    int n;
    n = *(int *)(p + 0x6E54);
    if (*(int *)(p + 0x6E44) < n) {
        i = 0;
        if (0 < n) {
            e = p;
            do {
                if (*(int *)(e + 0x6C20) == 0) {
                    *(int *)(p + 0x6E44) += 1;
                    ((char **)(p + 0x6C20))[i] = o;
                    return i;
                }
                i++;
                e += 4;
            } while (i < n);
        }
    } else {
        func_001AD140(o);
    }
    return -1;
}
typedef struct { signed char k; signed char t; signed char v; } KVB;
extern KVB D_0056AEE0[];
int func_00406C60(int p0, signed char k) {
    int i;
    KVB *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].t != 0x3B) {
        e = D_0056AEE0;
        do {
            if (k == e->k) {
                return D_0056AEE0[i].v;
            }
            e++;
            i++;
        } while (e->t != 0x3B);
    }
    return -1;
}

void func_0031E570(char *);
void func_002D2270(char *, int);
extern signed char D_005BCD60[];
void func_0028C740(char *);
void func_001A1F90(char *);
extern char D_00568D20[];
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_0021CBB0(char *, int);
void func_002DAF70(char *, int, int, int, float);
void func_002490F0(char *, int, int, int, int, int, float);
void func_002DB2C0(char *);
int func_002496D0(char *);
void func_0021B790(char *, int);
void func_002DBAA0(char *, short, float);
void func_00253110(char *, char *, int, float);
int func_002536B0(char *, char *);
short func_00131D10(float, float);
void func_0026D0B0(char *);
void func_002DAB90(char *, int);
char *func_0027A710(char *);
char *func_00207470(int, int, char *);
void func_002EC050(int, char *, float);
extern int D_005BE09C;
unsigned char func_0024E780(char *, int, int);
short func_002D6DB0(char *);
void func_0034B8C0(char *, char *, int);
float func_00131BA0(char *);
float func_00131C20(char *);
void func_002D3720(char *p) {
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

void func_002CE1F0(char *p) {
    *(char *)(p + 0x1E1) = 0;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 4;
    func_0024DA80(p + 0x2450, 1, 7);
    func_0024DA80(p + 0x2520, 1, 7);
    func_0024DA80(p + 0x25F0, 1, 7);
    func_0024DA80(p + 0x26C0, 1, 7);
    func_0024DA80(p + 0x2790, 1, 7);
    func_002CB900(p, 0xF);
    *(char *)(p + 0x2CE4) = 0xF;
    *(char *)(p + 0x2CE5) = 0xF;
    *(char *)(p + 0x2CE6) = 0xF;
    *(char *)(p + 0x2CE7) = 0xF;
    *(char *)(p + 0x2CE8) = 0xF;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_0038F300(char *p, int c) {
    if (c == -1) {
        c = *(unsigned char *)(p + 5);
    }
    if (*(unsigned char *)(p + 0x41A) != c) {
        func_0024DA80(p + 0xC20, 0, c);
        *(unsigned char *)(p + 0x41A) = c;
    }
}

void func_00407380(char *p) {
    func_00206730(p + 0x414);
    if (*(char **)(p + 0x414) != 0 && func_002077F0(*(char **)(p + 0x414)) == 0) {
        func_001AD140(*(char **)(p + 0x414));
        *(char **)(p + 0x414) = 0;
    }
    func_0028C740(p + 0x150);
}

void func_0040DC30(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 24:
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_003C59D0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_0025D060(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 3, 5, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00471B40(char *p) {
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        func_001AD140(p);
        return;
    }
    func_00253110(p, p + 0x490, 3, *(float *)(p + 0x10));
    switch (func_002536B0(p, p + 0x490)) {
    case 0:
        break;
    case 1:
        break;
    case -1:
        func_001AD140(p);
        return;
    }
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
}

void func_0026CFF0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 6, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00319B90(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 0x1F, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_00319C70(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 0x1F, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_0025F2C0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x1EC));
        func_002490F0(p, 13, 19, -1, 2, 3, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026B100(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x334));
        func_002490F0(p, 5, 8, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026B1E0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x338));
        func_002490F0(p, 5, 9, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_002692B0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x1FC));
        func_002490F0(p, 4, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_002693A0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x200));
        func_002490F0(p, 4, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00269490(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x204));
        func_002490F0(p, 4, 5, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00269580(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x208));
        func_002490F0(p, 4, 6, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00269670(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x20C));
        func_002490F0(p, 4, 7, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025CF70(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x0));
        func_002490F0(p, 3, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AC50(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x320));
        func_002490F0(p, 5, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AD40(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x324));
        func_002490F0(p, 5, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AE30(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x328));
        func_002490F0(p, 5, 5, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AF20(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x32C));
        func_002490F0(p, 5, 6, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026B010(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x330));
        func_002490F0(p, 5, 7, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0038EB10(char *p) {
    func_0034BA60(0x18, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
}

void func_003A2060(char *p, int k) {
    func_0034BA60(k, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
}

void func_003B6AE0(char *p, int k) {
    func_0034BA60(k, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
}

void func_004B8850(char *p, int k) {
    func_0034BA60(k, p + 0x50, *(signed char *)(*(char **)(p + 0xAC0) + 0x46), 0, 1);
}

void func_004D85E0(char *p, int k) {
    func_0034BA60(k, p + 0x50, *(signed char *)(*(char **)(p + 0x508) + 0x46), 0, 1);
}

void func_004E0540(char *p, int a, int b, int c, int k) {
    char *e;
    char *o = func_0027A710(p + 0x180);
    e = *(char **)(o + 0x108) + k * 64;
    *(float *)((char *)(k * 4) + (int)p + 0x1638) = *(float *)((char *)(k * 4) + (int)p + 0x1638) - 10.0f;
    func_00207470(3, 0x225, e);
    func_002EC050(1, e + 0x30, 0.0f);
    func_0034BA60(0x3A, e + 0x30, 0x1C, 0, 1);
}

void func_00393DF0(char *p, char *a, char *b) {
    short k;
    if (*(signed char *)(b + 5) != 0) {
        return;
    }
    if (*(signed char *)(a + 1) == 2) {
        func_0034BA60(0x2A, b + 0x10, *(signed char *)(p + 0x46), 0, 1);
        return;
    }
    k = *(short *)(p + 0xAC0);
    if (k == 0x38 || k == 0x41) {
        func_0034BA60(0x5F, b + 0x10, *(signed char *)(p + 0x46), 0, 1);
        return;
    }
    if (*(unsigned char *)(a + 0x3D) != 7) {
        func_0034BA60(0x5E, b + 0x10, *(signed char *)(p + 0x46), 0, 1);
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_003A1FA0(char *p, int k, int flag) {
    float v[4];
    if ((unsigned char)func_003A2080(p, p + 0x2F34, 1.0f, 0.0f) == 1) {
        if (flag == 0) {
            func_0034BA60(k, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        } else {
            QCOPY(v, *(char **)((char *)D_005BE09C + 0x23C) + 0x70);
            func_0034BA60(k, (char *)v, *(signed char *)(p + 0x46), 0, 1);
        }
        *(float *)(p + 0x2F34) = *(float *)(p + 0x2F30);
    }
}

typedef struct { float x; float y; float z; float w; } cf4;

typedef struct { float x; float y; } cf2;

typedef struct { unsigned char x; unsigned char y; } cb2;

typedef struct { cf4 a; cf4 b; cf2 c; cb2 e; float d[10]; } cam54;

extern cam54 *D_005BC2E4;
void func_00195D70(char *, int);
extern char *D_00567300[];
void func_00204A70(char *, int);
extern char D_005AE980[];
extern char D_005AE9A4[];
extern char D_005AADD0[];
float func_0011DA38(float);
float func_0011D798(float);
float func_0034B5E0(float *, char *);
extern char D_01DFABA0[];
char *func_002075D0(int, int, int, int, int);
void func_003305E0(char *, int, int, char *, int, int, int);
void func_002F43B0(int, unsigned char *);
void func_00451890(char *);
void func_004518A0(char *, int);
void func_00450DC0(char *);
void func_0034C3E0(char *);
void func_00313930(int, int, signed char);
int func_00206190(char *, int);
int func_001C35D0(char *, char *, int, float *);
void func_00104B80(float *, char *, float *);
float func_002E7630(char *);
float func_002E7660(char *);
extern char *D_00565600[];
int func_0034B800(char *, char *, short, short, float);

void func_002D58C0(char *p) {
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

void func_002DA3A0(char *p, char *a) {
    float t;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131BA0(a));
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131C20(a));
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x150) = *(float *)(p + 0x150) + *(float *)(p + 0x154) * *(float *)(p + 0x10);
    t = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = t;
    if (t < -70.0f) {
        *(float *)(p + 0x64) = -70.0f;
    }
}

void func_002E0000(char *p, unsigned char k) {
    float s = *(float *)(p + 0x2AA8);
    cam54 *e = &D_005BC2E4[k];
    cam54 *d = (cam54 *)(p + 0x2A7C);
    d->a = e->a;
    d->b = e->b;
    d->c = e->c;
    d->e = e->e;
    d->d[0] = e->d[0];
    d->d[1] = e->d[1];
    d->d[2] = e->d[2];
    d->d[3] = e->d[3];
    d->d[4] = e->d[4];
    d->d[5] = e->d[5];
    d->d[6] = e->d[6];
    d->d[7] = e->d[7];
    d->d[8] = e->d[8];
    d->d[9] = e->d[9];
    *(float *)(p + 0x2AA8) = s;
}

char *func_002F7C10(int a, unsigned char b) {
    int e;
    char *r;
    func_00195D70(D_00645A30, 3);
    while ((e = func_00195D90(D_00645A30)) != 0) {
        r = func_001005E0(e, 0, D_00599090, D_00598570, 0);
        if (r != 0) {
            if (b == 0 && a == *(int *)(r + 8)) {
                return r;
            }
            if (b == *(unsigned char *)(r + 4) && a == *(int *)(r + 8)) {
                return r;
            }
        }
    }
    return 0;
}

int func_0037C0C0(char *p, int a) {
    char *t;
    if (a < 0 || a > 12) {
        a = 1;
    }
    t = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(int *)(p + 0x781C) = a;
    *(int *)(p + 0x7820) = 0;
    *(char **)(p + 0x7828) = D_00567300[*(int *)(p + 0x781C)] + *(int *)(p + 0x7820) * 44;
    if (t != 0) {
        if (*(float *)(t + 0x54) < 900.0f) {
            *(char **)(p + 0x782C) = *(char **)(p + 0x7828) + 0x2C;
        } else {
            *(char **)(p + 0x782C) = *(char **)(p + 0x7828);
        }
    } else {
        *(char **)(p + 0x782C) = *(char **)(p + 0x7828) + 0x2C;
    }
    *(int *)(p + 0x7824) = -1;
    *(unsigned char *)(p + 0x7830) = 0;
    *(unsigned char *)(p + 0x7831) = 0;
    *(unsigned char *)(p + 0x7832) = 0;
    *(unsigned char *)(p + 0x7833) = 0;
    return a;
}

char *func_00383D00(char *p, short n) {
    if (p != 0) {
        *(char **)p = D_005AE980;
        *(char **)(p + 0x38) = D_005AE9A4;
        func_002791E0(p + 0x780, -1);
        func_001003E0(p + 0x2C0, (void *)func_00204A70, 0xC0, 6);
        func_001003E0(p + 0x48, (void *)func_0013D240, 0x10, 0x1F);
        if (p + 0x38 != 0) {
            *(char **)(p + 0x38) = D_005AADD0;
        }
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 0x24, -1);
        }
        if (n > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0028F480(char *p, unsigned char k, unsigned char m) {
    char *e = *(char **)(*(char **)(p + 0xE4) + k * 4);
    *(signed char *)(p + 0xDA) = *(signed char *)e;
    if (m == 0 || m == 1) {
        *(unsigned char *)(p + 0xD6) = *(unsigned char *)(e + 2);
        *(unsigned char *)(p + 0xD4) = *(unsigned char *)(e + 3);
        *(float *)(p + 0x910) = *(float *)(e + 0x10);
        *(float *)(p + 0x914) = *(float *)(e + 0x14);
        *(float *)(p + 0x918) = *(float *)(e + 0x18);
        *(float *)(p + 0x91C) = 1.0f;
        *(float *)(p + 0x920) = *(float *)(e + 0x20);
        *(float *)(p + 0x924) = *(float *)(e + 0x24);
        *(float *)(p + 0x928) = *(float *)(e + 0x28);
        *(float *)(p + 0x92C) = 1.0f;
    }
    if (m == 0 || m == 2) {
        *(unsigned char *)(p + 0xD7) = *(unsigned char *)(e + 0x30);
        *(unsigned char *)(p + 0xD5) = *(unsigned char *)(e + 0x31);
        *(float *)(p + 0x910) = *(float *)(e + 0x40);
        *(float *)(p + 0x914) = *(float *)(e + 0x44);
        *(float *)(p + 0x918) = *(float *)(e + 0x48);
        *(float *)(p + 0x91C) = 1.0f;
        *(float *)(p + 0x920) = *(float *)(e + 0x50);
        *(float *)(p + 0x924) = *(float *)(e + 0x54);
        *(float *)(p + 0x928) = *(float *)(e + 0x58);
        *(float *)(p + 0x92C) = 1.0f;
    }
}

void func_0029DD80(char *p, int a, int b) {
    *(int *)(p + 0xA92C) = a;
    func_0024DB10(p + 0x8980, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
    func_0024DB10(p + 0x8A50, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
    func_0024DB10(p + 0x8B20, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
    func_0024DB10(p + 0x8BF0, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
}

int func_002CBF50(char *p, short a) {
    float v[4];
    float ang = 6.283185f * ((float)(a + *(short *)(p + 0x90)) / 65536.0f);
    v[0] = *(float *)(p + 0x50) + 180.0f * func_0011DA38(ang);
    v[1] = 130.0f + *(float *)(p + 0x54);
    v[2] = *(float *)(p + 0x58) + 180.0f * func_0011D798(ang);
    v[3] = 1.0f;
    return !(func_0034B5E0(v, p) < 200.0f);
}

void func_00450CD0(char *p) {
    int i;
    for (i = 0; i < 8; i++) {
        func_00206730(p + i * 4 + 0x320);
    }
    if (*(unsigned char *)(p + 0xE7) != 0) {
        *(unsigned char *)(p + 0xE7) = 0;
        func_00451890(p);
    }
    if (*(unsigned char *)(p + 0xE8) != 0) {
        *(unsigned char *)(p + 0xE8) = 0;
        func_004518A0(p, 0);
    }
    if (*(unsigned char *)(p + 0xE9) != 0) {
        *(unsigned char *)(p + 0xE9) = 0;
        func_004518A0(p, 1);
    }
    switch (*(unsigned char *)(p + 0xEB)) {
    case 0:
        break;
    case 1:
        func_00450DC0(p);
        break;
    case 2:
        func_0034C3E0(0);
        break;
    }
    func_0028C5C0(p + 0x340, 0, *(float *)(p + 0x10));
}

void func_00456190(char *p) {
    unsigned char c[4];
    char *e;
    if (*(char **)(p + 0x694) != 0) {
        *(unsigned char *)(*(char **)(p + 0x694) + 0x3A) = 1;
        func_001AD140(*(char **)(p + 0x694));
        *(int *)(p + 0x694) = 0;
    }
    func_002F43B0(*(unsigned char *)(p + 0x644), c);
    func_003305E0(D_01DFABA0, 8, 0x45, p + 0x50, 0x22, 0, 0);
    e = func_002075D0(3, 0x230, *(int *)(*(char **)(p + 0x1C8) + 0x104), 1, 0x40);
    if (e != 0) {
        unsigned char b2 = c[2];
        unsigned char b1 = c[1];
        unsigned char b0 = c[0];
        *(unsigned char *)(e + 0x9C) = b0;
        *(unsigned char *)(e + 0x9D) = b1;
        *(unsigned char *)(e + 0x9E) = b2;
        *(unsigned char *)(e + 0x9B) = 2;
        *(unsigned char *)(e + 0x9F) = 0x80;
        *(unsigned char *)(e + 0x9B) = 3;
        *(unsigned char *)(e + 0x9B) = 1;
    }
    func_002075D0(3, 0x22F, *(int *)(*(char **)(p + 0x1C8) + 0x104), 1, 0x40);
}

#define VADD(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_00208620(short *tbl, int i, int arg) {
    char *e;
    if (i < tbl[0]) {
        e = (char *)tbl + i * 0xD0 + 0x10;
        if (*(unsigned char *)(e + 1) != 0 && *(unsigned char *)(e + 0xC9) != 1) {
            *(unsigned char *)(e + 0xC9) = 1;
            if (*(int *)(e + 0xCC) != -1) {
                int s = (short)*(int *)(e + 0xCC);
                char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
                if (s < 32) {
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
                } else {
                    s -= 32;
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
                }
            }
            if (*(int *)(e + 0xC4) != 0) {
                func_00313930(*(int *)(e + 0xC4), arg, *(signed char *)(e + 0xC8));
            }
        }
    }
}

void func_00206590(char *p) {
    short n;
    int i;
    if (*(unsigned char *)(p + 0x3A) == 0) {
        *(unsigned char *)(p + 0x38) = 2;
        return;
    }
    *(unsigned char *)(p + 0x38) = 3;
    n = 0;
    for (i = 0; i < 8; i++) {
        if (*(unsigned char *)(p + i + 0xC4) == 1) {
            n++;
        }
    }
    for (i = 0; i < n; i++) {
        if (*(unsigned char *)(p + i + 0xCC) == 0) {
            if ((unsigned char)func_00206190(p, i) == 0) {
                *(unsigned char *)(p + i + 0xCC) = 1;
            } else {
                func_001AD140(*(char **)(p + i * 4 + 0xA4));
                *(unsigned char *)(p + i + 0xCC) = 1;
            }
        }
    }
}

int func_001C3B40(int a, char *r, int c, int *count, char *out) {
    float v[4];
    float t[2];
    int n;
    int i;
    *count = func_001C35D0(r, r + 0x10, c, t);
    n = 0;
    for (i = 0; i < *count; i++) {
        if (0.0f <= t[i] && t[i] <= 1.0f) {
            v[0] = *(float *)(r + 0x10) * t[i];
            v[1] = *(float *)(r + 0x14) * t[i];
            v[2] = *(float *)(r + 0x18) * t[i];
            v[3] = 0.0f;
            VADD(out + n * 16, r, v);
            n++;
        }
    }
    *count = n;
    return *count > 0;
}

#define FTOI0(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tvftoi0.xyzw $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_002E76D0(char *p, float *v) {
    float a[4];
    float c[4];
    int out[4];
    float inv;
    float b;
    func_00104B80(a, (char *)D_005BE09C + 0x140, v);
    if (a[3] < 0.0f) {
        return 0xFF;
    }
    inv = 1.0f / a[3];
    b = func_002E7630(p);
    b = b + inv * func_002E7660(p);
    if (b < 0.0f) {
        b = 0.0f;
    }
    if (!(b <= 255.0f)) {
        b = 255.0f;
    }
    c[3] = b;
    FTOI0(out, c);
    return out[3];
}

typedef struct { int v; short a; short r; float d; } zone12;
int func_00201770(char *, float *, float *, float *, int);
void func_00407BF0(char *);
void func_0040FDF0(char *, int);
int func_00332DD0(char *);
void func_00313AE0(int, int);
void func_002F2FB0(char *);
char *func_002F3080(char *);
int func_00124EC0(int);
void func_001A23D0(char *);
void func_00320710(char *, char *, int);
float func_0011DBE0(float, float);
void func_00330BD0(char *, int, char *, int, int);
void func_004F50B0(char *);
void func_0013D6A0(char *);
void func_002790E0(char *);
void func_00100450(char *, void *, void *, int, int);
void func_0024E7B0(char *, int, int);
int func_0024E810(char *);
void func_00105300(float *, char *);
void func_00406F20(char *, float *);
void func_003AA990(char *, int);
extern unsigned char D_005692D8[];
int func_0041D600(char *);
void func_0041D6E0(char *, float *, int, float);
int func_0041DC70(float *, char *, int);
void func_0041D840(char *, char *, float);
void func_004B7F80(char *, int);
void func_001A20C0(char *, int);
float func_00131AB0(float);
void func_00248AF0(char *, float *, float *, float);
void func_00247920(char *, char *, float *);
void func_00248580(char *);
void func_0024BF20(char *);
void func_00387830(char *);
void func_002282B0(char **);
int func_0040F1B0(char *);
void func_00105760(float *, float *, float);
void func_00105668(char *, char *, float);
extern int D_0054D9D0[];
extern unsigned char D_005BCA88;
extern unsigned char D_005BCA89;
void func_00133890(float *, float *, float *);
void func_003BA960(char **);
unsigned char func_003AD2F0(char *);
void func_00457840(char *);
void func_004579C0(char *);
int func_0022CD60(char *);
int func_00401350(char *, char *, void *);
extern int D_005BD000;
extern int D_005BD008;
extern int D_005BD010;
extern int D_005BD018;
extern char D_01CAF520[];
void func_0020FBD0(char *);
void func_0020FBE0(char *, int);
char *func_00210240(char *);
void func_00210090(char *, float);
void func_001AC630(int, float);
void func_001AC980(int, char *);
void func_002E74D0(char *);
void func_002E7510(char *, unsigned char, unsigned char, unsigned char, float, float, float, float);
extern signed char D_005BE11C;
extern char *D_005BE190;
void func_004FE7A0(char *);
void func_0041E1F0(float *, float *, float, float);
void func_002018A0(char *, char *, char *, char *, char *, int);
void func_002E3690(char *, int, int, int);
void func_001A2000(char *, int);
unsigned char func_002DA0B0(char *, signed char);
unsigned int *func_001AE4B0(int);
void func_001AE4F0(int);
void func_001282D0(int, unsigned int *, int);
extern float D_005BDEB4;
extern float D_005BDEB0;
extern char D_0058AE30[];
void func_00286040(char **);
void func_003023F0(char *);
void func_002530C0(char *, char *);
char *func_004E70B0(char *);
void func_004E6FF0(char *);
void func_00249290(char *, int, int, int, int, int, float);
void func_00226820(char *, int, int, int);
void func_0021EED0(char *);
void func_00249E70(char *, char *);
void func_0021C7A0(char *, int);

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

void func_004077E0(char *p) {
    float a[4];
    float out[4];
    float buf[16];
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
    *(short *)(p + 0x428) = func_0034B940(g, *(char **)(p + 0x420) + 0x50);
    QCOPY(a, p + 0x50);
    a[1] = a[1] + 100.0f;
    a[3] = 1.0f;
    if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, a, out, buf, 0x20) == 1) {
        *(float *)(p + 0x54) = out[1];
    }
    func_00407BF0(p);
    *(char **)(p + 0x424) = func_00207480(3, 0x167, (float *)(p + 0x3E0), 0x10);
    if (*(char **)(p + 0x424) == 0) {
        func_001AD140(p);
    } else {
        *(float *)(p + 0x434) = 50.0f;
    }
}

void func_0040F220(char *p) {
    int i;
    for (i = 0; i < *(short *)(p + 0xE2); i++) {
        if (**(unsigned char **)(p + i * 4 + 0x108) == 1 && (*(unsigned char **)(p + i * 4 + 0x108))[1] == 1) {
            func_0040FDF0(p, (unsigned short)i);
            func_0028C5C0(*(char **)(p + i * 4 + 0x108) + 0x4A0, 0, 1.0f);
            switch (*(unsigned short *)(*(char **)(p + i * 4 + 0x108) + 2)) {
            case 0:
            case 1:
                break;
            case 2:
            case 3:
                if (*(unsigned char *)(p + 0xE1) == 0) {
                    func_002EF940(*(int *)D_01CAFF0C, *(char **)(p + i * 4 + 0x108) + 0x720);
                }
                break;
            }
        }
    }
}

void func_00414BC0(char *p) {
    float d = *(float *)(p + 0xC) * D_01DF5D20[0];
    unsigned char k = func_00332DD0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90);
    switch (k) {
    case 0:
        d = d;
        break;
    case 1:
        d = d;
        break;
    case 2:
        d = d * 1.5f;
        break;
    case 3:
        d = d * 3.0f;
        break;
    case 4:
        d = d * 5.0f;
        break;
    }
    *(float *)(p + 4) += d;
    if (*(float *)(p + 4) > *(float *)(p + 0x10)) {
        *(float *)(p + 4) = *(float *)(p + 0x10);
    }
}

void func_00208720(short *tbl, int i, int arg) {
    char *e;
    if (i < tbl[0]) {
        e = (char *)tbl + i * 0xD0 + 0x10;
        if (*(unsigned char *)(e + 1) != 0 && *(unsigned char *)(e + 0xC9) != 0) {
            *(unsigned char *)(e + 0xC9) = 0;
            if (*(int *)(e + 0xCC) != -1) {
                int s = (short)*(int *)(e + 0xCC);
                char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
                if (s < 32) {
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) &= ~(1 << (s & 31));
                } else {
                    s -= 32;
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) &= ~(1 << (s & 31));
                }
            }
            if (*(int *)(e + 0xC4) != 0) {
                func_00313AE0(*(int *)(e + 0xC4), arg);
            }
        }
    }
}

void func_0020EF90(char *p, char **q) {
    char *e = *q;
    int s = *(int *)(e + 4);
    if (s < 32) {
        if (*(int *)(e + 8) == 1) {
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x18) |= 1 << (s & 31);
        } else {
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x18) &= ~(1 << (s & 31));
        }
    } else {
        if (*(int *)(e + 8) == 1) {
            s -= 32;
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x44) |= 1 << (s & 31);
        } else {
            s -= 32;
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x44) &= ~(1 << (s & 31));
        }
    }
}

void func_002CB020(char *p, unsigned char a) {
    int m;
    *(unsigned char *)(p + 0x1E1) = 1;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 0;
    *(unsigned char *)(p + 0x1E3) = 0;
    m = *(unsigned char *)(p + 0x2F21) == 0 ? 0x13 : 0xD;
    func_0024DA80(p + 0x2450, 0, m);
    func_0024DA80(p + 0x2520, 0, m);
    func_0024DA80(p + 0x25F0, 0, m);
    func_0024DA80(p + 0x26C0, 0, m);
    func_0024DA80(p + 0x2790, 0, m);
    func_002CB900(p, 0x20);
    *(unsigned char *)(p + 0x2CE4) = 0x20;
    *(unsigned char *)(p + 0x2CE5) = 0x20;
    *(unsigned char *)(p + 0x2CE6) = 0x20;
    *(unsigned char *)(p + 0x2CE7) = 0x20;
    *(unsigned char *)(p + 0x2CE8) = 0x20;
    func_00128488(p + 0x5AD, 0, 0x14);
    if (a == 1) {
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
    }
}

void func_00332F20(char *tbl, int id, unsigned char flag, unsigned char force, float val) {
    int i;
    int empty = -1;
    int found = 0;
    int fi = -1;
    int bi;
    float best = 1000.0f;
    char *e;
    for (i = 0, e = tbl; i < 20; i++, e += 12) {
        if (empty == -1 && *(unsigned char *)(e + 0xC) == 0) {
            empty = i;
        }
        if (!(best <= *(float *)(e + 0x14))) {
            best = *(float *)(e + 0x14);
            bi = i;
        }
        if (*(int *)(e + 0x10) == id) {
            found = 1;
            fi = i;
        }
    }
    if (found == 1 && force == 0 && fi != -1) {
        *(unsigned char *)((char *)(fi * 12) + (int)tbl + 0xC) = flag;
        *(int *)((char *)(fi * 12) + (int)tbl + 0x10) = id;
        *(float *)((char *)(fi * 12) + (int)tbl + 0x14) = val;
    } else if (found == 0) {
        if (empty != -1) {
            *(unsigned char *)((char *)(empty * 12) + (int)tbl + 0xC) = flag;
            *(int *)((char *)(empty * 12) + (int)tbl + 0x10) = id;
            *(float *)((char *)(empty * 12) + (int)tbl + 0x14) = val;
        } else {
            *(unsigned char *)((char *)(bi * 12) + (int)tbl + 0xC) = flag;
            *(int *)((char *)(bi * 12) + (int)tbl + 0x10) = id;
            *(float *)((char *)(bi * 12) + (int)tbl + 0x14) = val;
        }
    }
}

int func_003D6010(char *p) {
    float b[4];
    float a[4];
    int n = 0;
    char *o;
    QCOPY(a, p + 0x50);
    a[1] = 0.0f;
    func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
    for (;;) {
        o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
        if (o == 0) {
            break;
        }
        QCOPY(b, o + 0x50);
        b[1] = 0.0f;
        if (func_00132470(a, b) < 400.0f && (float)func_00124EC0((int)(*(float *)(p + 0x54) - *(float *)(o + 0x54))) < 135.0f) {
            n++;
        }
    }
    return n;
}

void func_003E63B0(char *p, char *e, int c) {
    if (*(unsigned char *)(p + 0x14D) != 3) {
        *(unsigned char *)(p + 0x3BFA) = 0;
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        func_00206730(p + 0x3BE8);
        func_00206730(p + 0x3BEC);
        func_00206730(p + 0x3BF0);
        if (*(char **)(p + 0x3BE8) != 0) {
            func_001AD140(*(char **)(p + 0x3BE8));
        }
        if (*(char **)(p + 0x3BEC) != 0) {
            func_001AD140(*(char **)(p + 0x3BEC));
        }
        if (*(char **)(p + 0x3BF0) != 0) {
            func_001AD140(*(char **)(p + 0x3BF0));
        }
        if (*(signed char *)(e + 2) == 0 && *(signed char *)e == 7) {
            *(unsigned char *)(p + 0x3BFA) = 1;
            *(unsigned char *)(p + 0x36E0) = 1;
        }
        func_00320710(p + 0x130, e, c);
        *(unsigned char *)(p + 0x3A31) = 1;
    }
}

void func_004F4E70(char *p) {
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0xBE0) = 10.0f;
    case 1:
        t = *(float *)(p + 0x10);
        t = *(float *)(p + 0xBE0) - t;
        *(float *)(p + 0xBE0) = t;
        if (t < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
            *(unsigned char *)(p + 5) = 0;
            func_00207480(3, 0x34B, (float *)(p + 0x170), 0x10);
            func_00330BD0(D_01DFABA0, 0x72, p + 0x50, 0x23, 0);
        }
        break;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_004F50B0(p);
    func_00195E20(D_005BE098, p);
}

char *func_00504000(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005BB140;
    func_00100450(p + 0x80, (void *)func_002790E0, (void *)func_002791E0, 0x600, 1);
    func_002790E0(p + 0x680);
    func_002790E0(p + 0xC80);
    *(unsigned char *)(p + 0x1280) = 0;
    *(unsigned char *)(p + 0x1300) = 0;
    func_002790E0(p + 0x13C0);
    {
        char *q = p + 0x19C0;
        func_0013D6A0(q + 0x48);
        func_0013D6A0(q + 0x58);
        *(short *)(q + 0x68) = 1;
        *(short *)(q + 0x6A) = 0;
    }
    *(unsigned char *)(p + 0x1380) = 2;
    *(int *)(p + 0x38) = 0;
    *(int *)(p + 0x3C) = 0;
    *(int *)(p + 0x40) = 0;
    return p;
}

float func_001F9C40(float *t, unsigned int m) {
    float r = 1.0f;
    int i;
    for (i = 0; i < 8; i++) {
        switch (m & (1 << i)) {
        case 0:
            break;
        case 1:
            r = r * t[0];
            break;
        case 2:
            r = r * t[1];
            break;
        case 4:
            r = r * t[2];
            break;
        case 8:
            r = r * t[3];
            break;
        case 16:
            r = r * t[4];
            break;
        case 32:
            r = r * t[5];
            break;
        case 64:
            r = r * t[6];
            break;
        case 128:
            r = r * t[7];
            break;
        }
    }
    return r;
}

void func_003AA4C0(char *p) {
    unsigned char on = 0;
    if ((unsigned char)func_003AC6C0(p) == 1) {
        on = 1;
    } else if (*(unsigned short *)(p + 0x4E00) == 0) {
        on = 1;
    }
    if (on) {
        if (*(char **)(p + 0x4AE4) != 0) {
            char *e;
            func_001AD140(*(char **)(p + 0x4AE4));
            *(int *)(p + 0x4AE4) = 0;
            e = func_00207480(3, 0x330, 0, 0x10);
            if (e != 0) {
                *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
                *(unsigned char *)(e + 0x9A) = 0;
            }
            func_0034BA60(0x36, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
    } else if (*(char **)(p + 0x4AE4) == 0) {
        char *e;
        *(char **)(p + 0x4AE4) = func_00207480(3, 0x32F, 0, 0x20);
        e = *(char **)(p + 0x4AE4);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
            *(unsigned char *)(e + 0x9A) = 0;
            *(unsigned char *)(*(char **)(p + 0x4AE4) + 0x3A) = 1;
        }
    }
}

void func_003A8C70(char *p) {
    float m[16];
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) += 1;
        *(signed char *)(p + 0x4E19) = 0;
    case 1:
        if (func_0024E780(p + 0x4BF0, 0, 0) == 6) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_00105300(m, *(char **)(*(char **)(p + 0x718) + 0x104));
            m[13] = *(float *)(p + 0x4E24) + 5.0f;
            func_00406F20(p, m);
        }
        if ((unsigned char)func_0024E810(p + 0x4BF0) == 1) {
            if (*(signed char *)(p + 0x4E19) == D_005692D8[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]) {
                func_003AA990(p, 0x1F);
            } else {
                *(signed char *)(p + 0x4E19) += 1;
            }
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_00448940(char *p) {
    float v[4];
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x460);
        *(float *)(p + 0x464) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x464) < 0.0f) {
            func_001AD140(p);
        } else {
            char *b;
            QCOPY(v, p + 0x50);
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            func_0041D6E0(b, (float *)(p + 0x60), 1, *(float *)(p + 0x10));
            if ((unsigned char)func_0041DC70(v, p + 0x50, 1) == 1) {
                func_0034BA60(0x2F, p + 0x50, 0x20, 0, 1);
                func_001AD140(p);
            } else {
                b = p;
                if (b != 0) {
                    b += 0x40;
                }
                func_0041D840(b, p + 0x150, 1.0f);
                func_0028C5C0(p + 0x1E0, 0, 1.0f);
            }
        }
    }
}

void func_00481E00(char *p, unsigned char a) {
    char *e;
    func_0028C790(p + 0xD40, 0);
    func_0028C790(p + 0xD40, 1);
    func_0028C200(p + 0xD40, p + 0xF60, p + 0xF70, 4, 0, p, 0);
    *(unsigned char *)(p + 0xD43) = 0xD;
    func_0028C8E0(p + 0xD40, 0);
    func_0028C910(p + 0xD40);
    *(unsigned char *)(p + 0xF60) = 6;
    *(unsigned char *)(p + 0xF61) = 0;
    *(short *)(p + 0xF62) = 0;
    *(unsigned char *)(p + 0xF70) = 2;
    *(float *)(p + 0xF80) = 0.0f;
    *(float *)(p + 0xF84) = 0.0f;
    *(float *)(p + 0xF88) = 0.0f;
    *(float *)(p + 0xF8C) = 1.0f;
    if (a == 0) {
        *(float *)(p + 0xF90) = 500.0f;
    } else {
        *(float *)(p + 0xF90) = 700.0f;
    }
    func_0028C3A0(p + 0xD40, 0, -1, p + 0x2C0);
    e = *(char **)(p + 0xDBC);
    if (e != 0) {
        *(unsigned int *)(e + 0xC) &= 0xFFFCFFFF;
        *(unsigned char *)(e + 0xC4) = 0;
        *(unsigned char *)(e + 0xC5) = 0;
        *(unsigned char *)(e + 0xC6) = 0;
        *(unsigned char *)(e + 0xC7) = 0x18;
    }
}

void func_004B7E60(char *p) {
    short s = *(short *)(p + 0xA58);
    char *q = *(char **)(p + 0xAC0);
    switch (s) {
    case 0:
        if (*(unsigned char *)(q + 0x2F3C) == 2 || *(unsigned char *)(q + 0x2F3C) == *(unsigned char *)(p + 0xA34)) {
            if (*(short *)(q + 0xAC0) == 0x24 && *(short *)(q + 0x2F3E) == 0) {
                func_004B7F80(p, 1);
            } else if (*(short *)(q + 0xAC0) == 0x27 && *(short *)(q + 0x2F3E) == 10) {
                func_004B7F80(p, 3);
            }
        }
        break;
    case 1:
        if (*(short *)(q + 0x2F3E) == 0x14) {
            func_004B7F80(p, 4);
        } else if (*(short *)(q + 0x2F3E) == 1) {
            func_004B7F80(p, 2);
        }
        break;
    case 3:
        if (*(short *)(q + 0x2F3E) == 0x14) {
            func_004B7F80(p, 4);
        }
        break;
    case 4:
        break;
    }
}

void func_004E05E0(char *p) {
    int i;
    if (*(unsigned char *)(p + 4) != 0) {
        for (i = 0; i < *(unsigned char *)(*(char **)(p + 0x5DC) + 0x11); i++) {
            if (!(*(float *)(p + i * 4 + 0x1638) <= 0.0f)) {
                char *m = *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 0x40;
                *(float *)(p + i * 4 + 0x1638) -= 10.0f;
                func_001A20C0(func_0027A710(p + 0x180), i - 1);
                func_00207470(3, 0x225, m);
                func_002EC050(1, m + 0x30, 0.0f);
                func_0034BA60(0x3A, m + 0x30, 0x1C, 0, 1);
            }
        }
    }
}

int func_00230450(unsigned char *s) {
    if (s[0] == 'M' && s[1] == 'O' && s[2] == 'D') return 0;
    if (s[0] == 'E' && s[1] == 'F' && s[2] == 'M') return 1;
    if (s[0] == 'S' && s[1] == 'C' && s[2] == 'M') return 2;
    if (s[0] == 'M' && s[1] == 'R' && s[2] == 'P') return 3;
    if (s[0] == 'S' && s[1] == 'H' && s[2] == 'W') return 7;
    return -1;
}

#define QCP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_002477F0(char *p, float a) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    QCP(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    v[1] = v[1] + *(float *)(p + 0xD0);
    a = func_00131AB0(a);
    func_00248AF0(p, w, v, a);
    w[3] = 1.0f;
    QCP(p + 0x190, v);
    QCP(p + 0x1A0, w);
    func_00247920(p, p + 0x1B0, w);
    func_00248580(p);
    QCP(p + 0x1B0, p + 0x1A0);
    QCP(p + 0x1C0, p + 0x190);
    QCP(p + 0x70, p + 0x1A0);
    QCP(p + 0x80, p + 0x190);
    *(float *)(p + 0x1D0) = a;
    func_0024BF20(p);
    *(unsigned char *)(p + 0x91) = 1;
    QCP(p + 0xA0, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
}

void func_00387700(char *p) {
    int s;
    int f;
    *(float *)(p + 0xD80) = *(float *)(p + 0xD80) * 0.95f;
    *(float *)(p + 0xD84) = *(float *)(p + 0xD84) - 1.0f;
    *(float *)(p + 0xD88) = *(float *)(p + 0xD88) * 0.95f;
    *(float *)(p + 0xCE0) = *(float *)(p + 0xCE0) * 0.95f + *(float *)(p + 0xCA0) * 0.05f;
    *(float *)(p + 0xCE8) = *(float *)(p + 0xCE8) * 0.95f + *(float *)(p + 0xCA8) * 0.05f;
    s = *(short *)(p + 0x1340);
    if (s != -1) {
        char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
        if (s < 32) {
            unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
            f = (*w & (1 << (s & 31))) != 0;
        } else {
            int t = s - 32;
            unsigned int *w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
            f = (*w & (1 << (t & 31))) != 0;
        }
        if (f) func_00387830(p);
    }
}

void func_003D8EA0(char *p, int on) {
    int s = *(short *)(p + 0x224);
    if (s != -1) {
        if (on != 0) {
            char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
            if (s < 32) {
                *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
            } else {
                s -= 32;
                *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
            }
        } else {
            char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
            if (s < 32) {
                *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) &= ~(1 << (s & 31));
            } else {
                s -= 32;
                *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) &= ~(1 << (s & 31));
            }
        }
    }
}

void func_003FDFF0(char *p) {
    float v[4] __attribute__((aligned(16)));
    unsigned int f;
    func_002282B0((char **)(p + 0x428));
    if (*(char **)(p + 0x428) == 0) func_001AD140(p);
    func_001AD100(p);
    f = *(unsigned int *)(*(char **)(p + 0x1CC) + 8);
    *(float *)(p + 0x470) = *(float *)(p + 0x470) + *(float *)(p + 0x430) * *(float *)(p + 0x10);
    *(float *)(p + 0x474) = *(float *)(p + 0x474) + *(float *)(p + 0x434) * *(float *)(p + 0x10);
    *(float *)(p + 0x478) = *(float *)(p + 0x478) + *(float *)(p + 0x438) * *(float *)(p + 0x10);
    *(float *)(p + 0x4C0) = *(float *)(p + 0x4C0) - *(float *)(p + 0x10);
    if ((f & 0x40) != 0 || *(float *)(p + 0x478) < 1300.0f) {
        func_00207480(3, 0xED, (float *)(p + 0x440), 0x10);
        v[0] = *(float *)(p + 0x470);
        v[1] = *(float *)(p + 0x474);
        v[2] = *(float *)(p + 0x478);
        v[3] = 1.0f;
        func_0034BA60(0x1D, (char *)v, *(signed char *)(*(char **)(p + 0x428) + 0x46), 0, 1);
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
    }
}

static inline void setflag(short k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

void func_0040EA40(char *p) {
    float v[4] __attribute__((aligned(16)));
    if (*(unsigned char *)(p + 0xE1) == 0) {
        if ((unsigned char)func_0040F1B0(p) == 1) {
            *(unsigned char *)(p + 0xE1) = 1;
            if (*(short *)(p + 0xDC) != -1) setflag(*(short *)(p + 0xDC));
        }
    } else {
        func_0040F220(p);
    }
    *(float *)(p + 0xEC) = *(float *)(p + 0xEC) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xEC) < 0.0f) {
        *(float *)(p + 0xEC) = 20.0f;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(p + 0x108) + 0x450) : "memory");
        func_003305E0(D_01DFABA0, 8, 0x33, (char *)v, 0x24, 0, 0);
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002CB4E0(char *p, short a, int x, int y) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *o;
    short s = *(short *)(p + 0x90) + a;
    UNIT(m);
    func_00105760(m, m, (float)s / 65536.0f * 6.283185f);
    v[1] = -65.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[2] = 0.0f;
    func_00105230(m, m, v);
    if (*(char **)(p + 0x2F70) != 0) {
        func_001AD140(*(char **)(p + 0x2F70));
    }
    *(char **)(p + 0x2F70) = func_00207480(x, y, m, 0x10);
    {
        char *o1 = *(char **)(p + 0x2F70);
        if (o1 != 0) {
            *(int *)(o1 + 0x90) = *(int *)(*(char **)(p + 0x590) + 0x104);
            *(char *)(o1 + 0x9A) = 1;
        }
    }
    if (*(char **)(p + 0x2F74) != 0) {
        func_001AD140(*(char **)(p + 0x2F74));
    }
    *(char **)(p + 0x2F74) = func_00207480(x, y, m, 0x10);
    o = *(char **)(p + 0x2F74);
    if (o != 0) {
        *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x598) + 0x104);
        *(char *)(o + 0x9A) = 1;
    }
}

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SETPOS(m, s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

void func_0041D6E0(char *p, float *v, int f, float s) {
    float m[16] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    d[0] = v[0] * s;
    d[1] = v[1] * s;
    d[2] = v[2] * s;
    if ((unsigned char)f == 1) {
        UNIT(m);
        SETPOS(m, d);
        func_00105668((char *)m, (char *)m, *(float *)(p + 0x40));
        func_00105760(m, m, (float)*(short *)(p + 0x50) / 65536.0f * 6.283185f);
        GETPOS(d, m);
    }
    VADDIP(p + 0x10, d);
    *(float *)(p + 0x1C) = 1.0f;
}

void func_002CF320(char *p, unsigned char k) {
    float m[16] __attribute__((aligned(16)));
    if (*(char **)((char *)(k * 4) + (int)p + 0x2F58) == 0) {
        if (k == 2) {
            UNIT(m);
            func_00105760(m, m, 3.1415925f);
            *(char **)((char *)(k * 4) + (int)p + 0x2F58) = func_00207480(3, 0x127, m, 0x10);
        } else {
            *(char **)((char *)(k * 4) + (int)p + 0x2F58) = func_00207480(3, 0x127, 0, 0x10);
        }
        {
        char *o1;
        if (*(char **)((char *)(k * 4) + (int)p + 0x2F58) != 0) {
            o1 = *(char **)((char *)(k * 4) + (int)p + 0x2F58);
            *(int *)(o1 + 0x90) = *(int *)(*(char **)((char *)(D_0054D9D0[k] * 4) + (int)p + 0x4F4) + 0x104);
            *(unsigned char *)(o1 + 0x9A) = 3;
            *(unsigned char *)(*(char **)((char *)(k * 4) + (int)p + 0x2F58) + 0x3A) = 1;
            if (*(unsigned char *)(p + 0x5C6) == 1) {
                char *o2 = *(char **)((char *)(k * 4) + (int)p + 0x2F58);
                {
                    unsigned char b = D_005BCA89;
                    *(unsigned char *)(o2 + 0x9C) = D_005BCA88;
                    *(unsigned char *)(o2 + 0x9D) = b;
                    *(unsigned char *)(o2 + 0x9E) = b;
                }
                *(unsigned char *)(o2 + 0x9B) = 2;
            }
        }
        }
    }
}

void func_00370EF0(char *p) {
    float v[4];
    unsigned int f;
    func_001AD100(p);
    f = *(unsigned int *)(*(char **)(p + 0x1CC) + 8);
    *(float *)(p + 0x570) = *(float *)(p + 0x570) - 1.0f;
    if ((f & 3) != 0 || *(float *)(p + 0x570) < 0.0f) {
        (*(unsigned char *)(p + 5))++;
        if (*(char **)(p + 0x578) != 0) {
            func_001AD140(*(char **)(p + 0x578));
        }
        *(char **)(p + 0x578) = func_00207470(3, 0xAB, p + 0x4B0);
        if (*(char **)(p + 0x578) != 0) {
            *(unsigned char *)(*(char **)(p + 0x578) + 0x3A) = 1;
        }
        *(float *)(p + 0x570) = 50.0f;
        v[0] = *(float *)(p + 0x4E0);
        v[1] = *(float *)(p + 0x4E4);
        v[2] = *(float *)(p + 0x4E8);
        v[3] = 1.0f;
        func_0034BA60(0x1D, (char *)v, *(signed char *)(*(char **)(p + 0x480) + 0x46), 0, 1);
        func_0028C740(p + 0x150);
    }
    func_00105300((float *)(p + 0x4F0), p + 0x4B0);
    func_00105300((float *)(p + 0x530), p + 0x4B0);
    *(float *)(p + 0x524) = *(float *)(p + 0x524) - 80.0f;
    *(float *)(p + 0x564) = *(float *)(p + 0x564) + 80.0f;
    func_0028C5C0(p + 0x150, 0, 1.0f);
}

void func_002CEEA0(char *p, int n) {
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 2;
    if ((unsigned char)n > 0) {
        func_0024DB10(p + 0x2450, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x2520, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x25F0, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x26C0, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x2790, 1, 0xB, 0x30, 0, 1, n);
    } else {
        func_0024DA80(p + 0x2450, 1, 0xB);
        func_0024DA80(p + 0x2520, 1, 0xB);
        func_0024DA80(p + 0x25F0, 1, 0xB);
        func_0024DA80(p + 0x26C0, 1, 0xB);
        func_0024DA80(p + 0x2790, 1, 0xB);
    }
    func_002CB900(p, 0x13);
    *(unsigned char *)(p + 0x2CE4) = 0x13;
    *(unsigned char *)(p + 0x2CE5) = 0x13;
    *(unsigned char *)(p + 0x2CE6) = 0x13;
    *(unsigned char *)(p + 0x2CE7) = 0x13;
    *(unsigned char *)(p + 0x2CE8) = 0x13;
    func_00128488(p + 0x5AD, 0, 4);
}

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_004D8AB0(char *p) {
    float w[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int i;
    char *e;
    char *r;
    *(float *)(p + 0x174) = *(float *)(p + 0x174) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x174) < 0.0f) {
        for (i = 0; i < 16; i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x1FC);
            if (e != 0 && **(unsigned char **)(e + 0x104) == 1) {
                w[0] = *(float *)(e + 0x120);
                w[1] = *(float *)(e + 0x124);
                w[2] = *(float *)(e + 0x128);
                w[3] = 1.0f;
                VSUBR54(d, p + 0x150, p + 0x160);
                d[3] = 1.0f;
                u[1] = 1.0f;
                u[0] = 0.0f;
                u[2] = 0.0f;
                u[3] = 1.0f;
                UNIT(m);
                func_00133890(m, d, u);
                func_00105230(m, m, w);
                r = func_00207480(3, 0x289, m, 8);
                if (r != 0) {
                    *(unsigned char *)(r + 0x3A) = 1;
                }
            }
        }
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
    }
}

void func_004576B0(char *p) {
    int i;
    func_001AD100(p);
    func_003BA960((char **)(p + 0x500));
    for (i = 0; i < 3; i++) {
        func_00206730(p + i * 4 + 0x504);
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0x504) != 0) {
            if (func_002077F0(*(char **)(p + i * 4 + 0x504)) == 1) {
                *(int *)(p + i * 4 + 0x504) = 0;
                if (i != 2) {
                    func_001AD140(p);
                    return;
                }
            }
        } else if (i != 2) {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0x3D0) != 0) {
        if (*(char **)(p + 0x500) == 0) {
            *(unsigned char *)(p + 0x3D0) = 0;
            func_001AD140(p);
            return;
        }
        if (func_003AD2F0(*(char **)(p + 0x500)) == 1) {
            *(unsigned char *)(p + 0x3D0) = 0;
            func_001AD140(p);
            return;
        }
        *(unsigned char *)(p + 0x3D3) = *(unsigned char *)(*(char **)(p + 0x500) + 0x4E17);
    } else {
        *(unsigned char *)(p + 0x3D3) = 0;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00457840(p);
        break;
    case 1:
        func_004579C0(p);
        break;
    }
}

typedef struct {
    short a;
    short b;
    int c;
    int d;
    int e;
    int f;
} P397;

int func_004011B0(char *p, char *a, char *s) {
    char buf[0x20] __attribute__((aligned(16)));
    P397 st;
    st.a = -1;
    st.b = -1;
    st.f = -1;
    st.e = -1;
    st.d = -1;
    st.c = -1;
    if ((func_0022CBA0(s) != 0) ^ 1) {
        do {
            func_0022CBB0(s, buf);
            if (func_0012B1A0(buf, &D_005BD000) == 0) {
                return func_00401350(p, a, &st);
            } else if (func_0012B1A0(buf, &D_005BD008) == 0) {
                st.a = func_0022CD60(s);
            } else if (func_0012B1A0(buf, &D_005BD010) == 0) {
                st.b = func_0022CD60(s);
            } else if (func_0012B1A0(buf, &D_005BD018) == 0) {
                st.c = func_0022CD60(s);
                st.d = func_0022CD60(s);
                st.e = func_0022CD60(s);
                st.f = func_0022CD60(s);
            }
        } while ((func_0022CBA0(s) != 0) ^ 1);
    }
    return 0;
}

int func_00246030(char *p) {
    char *s;
    char *r;
    func_0020FBD0(p + 0x30);
    func_0020FBE0(p + 0x30, *(int *)(p + 0x20));
    s = *(char **)(p + 0x20);
    r = func_00210240(p);
    func_00210090(p + 0x30, *(float *)(s + 0x10) + ((*(float *)(r + 0xC) + *(float *)(r + 0x10)) - *(float *)(p + 4)) / *(float *)(p + 0x10));
    func_0024BF20(p + 0x30);
    func_001AC630(D_005BE09C, *(float *)(p + 0x50));
    func_001AC980(D_005BE09C, p + 0x30);
    func_002E74D0(D_01CAF520);
    if (*(unsigned char *)(p + 0x1FB) != 0) {
        D_01CAF520[0] = 1;
        func_002E7510(D_01CAF520, *(unsigned char *)(p + 0x1F8), *(unsigned char *)(p + 0x1F9), *(unsigned char *)(p + 0x1FA),
                      (float)(unsigned int)*(unsigned short *)(p + 0x1F2), (float)(unsigned int)*(unsigned short *)(p + 0x1F0),
                      (float)(unsigned int)*(unsigned short *)(p + 0x1F4), (float)(unsigned int)*(unsigned short *)(p + 0x1F6));
    } else {
        D_01CAF520[0] = 0;
    }
    return 1;
}

#define VADDY(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(y), "r"(x) : "memory")

void func_00316D80(char *p) {
    char buf[0x40] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    char *g = D_005BE190;
    short t;
    switch (D_005BE11C) {
    case 4:
        func_004FE7A0(p);
        break;
    default:
        func_00316F30((int)p, (char *)v, 0);
        QCOPY(p + 0x190, v);
        QCOPY(w, g + 0x50);
        w[1] = w[1] + 100.0f;
        w[3] = 1.0f;
        *(float *)(p + 0x238) = 400.0f;
        *(float *)(p + 0x210) = 0.05235988f;
        *(short *)(p + 0x248) = 0x38E;
        *(short *)(p + 0x24A) = func_0034B940((char *)w, (char *)v);
        t = *(short *)(p + 0x24A);
        *(short *)(p + 0x24A) = t + 0x38E;
        *(float *)(p + 0x214) = 6.283185f * ((float)*(short *)(p + 0x24A) / 65536.0f);
        u[0] = 0.0f;
        u[1] = 0.0f;
        u[2] = -*(float *)(p + 0x238);
        u[3] = 1.0f;
        func_0041E1F0(u, u, *(float *)(p + 0x210), *(float *)(p + 0x214));
        VADDY(p + 0x1A0, u, p + 0x190);
        break;
    }
    func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x190, p + 0x1A0, p + 0x1A0, buf, 8);
    QCOPY(p + 0x70, p + 0x1A0);
    QCOPY(p + 0x80, p + 0x190);
}

static inline void func_00387970_s(short k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

void func_00387970(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *e;
    int i;
    *(unsigned char *)(p + 5) = 4;
    func_002E3690(p + 0xC00, 0xB, 0xC, 0);
    func_001A2000(func_00279290(p + 0x600), 8);
    func_001A2000(func_00279290(p + 0x600), 9);
    UNIT(m);
    e = func_00207470(3, 0x1AF, (char *)m);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0xCB0;
        *(unsigned char *)(e + 0x9A) = 0;
    }
    for (i = 0; i < *(int *)(p + 0x11B8); i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x1190) != 0) {
            func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x1190));
        }
    }
    if (*(short *)(p + 0x1342) != -1) func_00387970_s(*(short *)(p + 0x1342));
    *(float *)(p + 0xDB0) = 10.0f;
    func_003305E0(D_01DFABA0, 8, 0x3E, p + 0xCE0, 0x21, 0, 0);
}

int func_002443D0(char *p, unsigned char mode, signed char c) {
    int k;
    if (c == -1) return 1;
    switch (mode) {
    case 0:
        if (c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C) && func_002DA0B0(p, c) == 0) return 1;
        break;
    case 1:
        if (c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) && func_002DA0B0(p, c) == 0) return 1;
        break;
    case 2:
        if ((c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) || c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C)) && func_002DA0B0(p, c) == 0) return 1;
        break;
    }
    if (c & 0x80) {
        k = c & 0x7F;
        if (k == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) || k == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C)) {
            if (func_002DA0B0(p, k) == 1 || func_002DA0B0(p, k) == 2 || func_002DA0B0(p, k) == 3) return 1;
        }
    }
    return 0;
}

void func_0028D560(char *p) {
    *(unsigned char *)(p + 0xD8) = 1;
    if (func_002DA0B0(*(char **)(p + 0xE0), *(signed char *)(p + 0xD2)) == 0 || func_002DA0B0(*(char **)(p + 0xE0), *(signed char *)(p + 0xD2)) == 3) {
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
    } else {
        *(signed char *)(p + 0xDA) = -1;
    }
}

void func_001EA910(int z, int dst, unsigned char *x) {
    unsigned int *t = func_001AE4B0(0x40);
    int i;
    int j;
    for (i = 0; i <= 0x80; i++) {
        t[i] = x[0] << 24;
    }
    for (j = 0x81; j <= 0xFF; j++) {
        t[j] = x[j - 0x80] << 24;
    }
    func_001282D0(dst, t, 0x400);
    func_001AE4F0(0x40);
}

void func_004E6B40(char *p) {
    short old;
    func_00206730(p + 0x470);
    func_00286040((char **)(p + 0x474));
    if (*(char **)(p + 0x474)) func_003023F0(*(char **)(p + 0x474));
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0xB14) = D_005BDEB4;
        *(float *)(p + 0xB18) = D_005BDEB0;
        func_002530C0(p, D_0058AE30);
    case 1:
        *(float *)(p + 0xB18) = *(float *)(p + 0xB18) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB18) < 0.0f) {
            *(float *)(p + 0xB18) = D_005BDEB0;
            func_0028C790(p + 0x1A0, 0);
            func_0028C8E0(p + 0x1A0, 10);
            func_0028C910(p + 0x1A0);
            func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
        }
        *(float *)(p + 0xB14) = *(float *)(p + 0xB14) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB14) < 0.0f) {
            p[4] = 3;
            p[5] = 0;
        }
        break;
    }
    func_00253110(p, func_004E70B0(p), 3, *(float *)(p + 0x10));
    old = *(short *)(p + 0xB10);
    *(short *)(p + 0xB10) = (float)old + 5461.0f * *(float *)(p + 0x10);
    if (*(short *)(p + 0xB10) * old < 0) func_00330BD0(D_01DFABA0, 0x73, p + 0x50, 0x23, 0);
    func_004E6FF0(p);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

unsigned char func_00226580(char *p, unsigned char f) {
    unsigned char r = 0;
    int t = *(unsigned char *)(p + 0x2848);
    if (t == 1 || t == 0xA || t == 3 || t == 0xD || t == 0x22 || t == 0x23 || t == 0x24) {
        func_00226820(p, 0, 0, 0);
        t = *(unsigned char *)(p + 0x2848);
        if (t == 3 || t == 0x22 || t == 0x23 || t == 0x24) {
            func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
            r = 1;
        }
        if (*(unsigned char *)(p + 0x2848) == 0xD) {
            func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
            func_00249290(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
            r = 1;
        }
        if (r == 1) {
            func_0021EED0(p);
            func_00249E70(p, p + 0x110);
            return 1;
        }
        if (f == 0) {
            if (*(unsigned int *)(p + 0x2898) & 1) func_0021C7A0(p, 0x21);
        } else {
            if (*(unsigned char *)(p + 0x2848) == 1) {
                func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
                r = 1;
            } else if (*(unsigned char *)(p + 0x2848) == 0xA) {
                func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
                func_00249290(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
                r = 1;
            }
            if (r == 1) {
                func_0021EED0(p);
                func_00249E70(p, p + 0x110);
            }
        }
    }
    return r;
}

typedef struct { float x; float y; } P235;

extern P235 D_00543EB0[];
int func_002DAD40(char *);
short func_002DACC0(char *);
void func_002DBCA0(char *, int);
void func_002DAE30(char *, char *, char *, int);
void func_002DBD20(char *, float, float);
void func_002DB880(char *, short);

void func_00235810(char *p) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int i;
    int n;
    char *e;
    n = *(unsigned short *)(func_0027A710(p + 0x640) + 0xA8);
    for (i = 0; i < n; i++) {
        e = *(char **)(func_0027A710(p + 0x640) + 0xBC) + i * 0x380;
        *(float *)(e + 0x20) = 0.0f;
        *(float *)(e + 0x24) = D_00543EB0[i].y;
        *(float *)(e + 0x28) = 0.0f;
        *(float *)(e + 0x2C) = D_00543EB0[i].x;
        v[0] = 0.0f;
        v[1] = D_00543EB0[i].y;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_00104B80(w, *(char **)(*(char **)(p + *(unsigned char *)(e + 0xE) * 4 + 0xB10) + 0x104), v);
    }
}

void func_0021C380(char *p, unsigned char k) {
    switch (k) {
    case 0:
        *(unsigned char *)(p + 0x29A1) = 0;
        *(unsigned char *)(p + 0x29A0) = 0;
        *(unsigned char *)(p + 0x299F) = 0;
        *(unsigned char *)(p + 0x2909) = 1;
    case 1:
    case 4:
    case 9:
    case 11:
        *(signed char *)(p + 0x2906) = *(signed char *)(*(char **)(p + 0x2830) + 0);
        *(signed char *)(p + 0x2907) = *(signed char *)(*(char **)(p + 0x2830) + 1);
        *(signed char *)(p + 0x2908) = *(signed char *)(*(char **)(p + 0x2830) + 2);
        *(unsigned char *)(p + 0x3C76) = (int)*(float *)(*(char **)(p + 0x283C) + 0x12C);
        *(unsigned char *)(p + 0x3C77) = 1;
        break;
    case 5:
        *(unsigned char *)(p + 0x2909) = 1;
        *(signed char *)(p + 0x2906) = *(signed char *)(*(char **)(p + 0x2830) + 0);
        *(signed char *)(p + 0x2907) = *(signed char *)(*(char **)(p + 0x2830) + 1);
        *(signed char *)(p + 0x2908) = *(signed char *)(*(char **)(p + 0x2830) + 2);
        *(unsigned char *)(p + 0x3C76) = (int)*(float *)(*(char **)(p + 0x283C) + 0x12C);
        *(unsigned char *)(p + 0x3C77) = 1;
        (*(signed char *)(p + 0x2908))--;
        break;
    case 8:
        *(unsigned char *)(p + 0x2909) = 1;
        *(signed char *)(p + 0x2906) = *(signed char *)(*(char **)(p + 0x2830) + 0);
        *(signed char *)(p + 0x2907) = *(signed char *)(*(char **)(p + 0x2830) + 1);
        *(signed char *)(p + 0x2908) = *(signed char *)(*(char **)(p + 0x2830) + 2);
        *(unsigned char *)(p + 0x3C76) = (int)*(float *)(*(char **)(p + 0x283C) + 0x12C);
        *(unsigned char *)(p + 0x3C77) = 1;
        break;
    case 2:
        (*(signed char *)(p + 0x2906))--;
        *(signed char *)(p + 0x2907) = 0;
        break;
    case 3:
        (*(signed char *)(p + 0x2907))--;
        *(signed char *)(p + 0x2906) = 0;
        break;
    case 6:
        (*(signed char *)(p + 0x2908))--;
        break;
    case 7:
    case 10:
    case 12:
        break;
    }
    *(unsigned char *)(p + 0x3C83) = 0;
    *(unsigned char *)(p + 0x29A2) = 0;
    if (*(signed char *)(p + 0x46)) {
        *(signed char *)(p + 0x2908) = 0;
        *(signed char *)(p + 0x2906) = 0;
        *(signed char *)(p + 0x2907) = 0;
    }
}

typedef struct { float a; float b; float c; short d; short pad; float e; float f; } E226F;
char *func_00215A30(char *, int, short);
int func_00210810(char *, float);
char *func_00210830(char *, int, float);
void func_00212DA0(char *, char *);
void func_00213010(char *, float);
void func_001A2050(char *);
void func_001A1E10(char *);
void func_001A1ED0(char *);
float func_002A4070(char *);
void func_001ACC30(int, int, int, int, int);
void func_00131650(char *, char *);
float func_001324E0(float *);
float func_00132630(char *, float *);
short func_00131CB0(float);
void func_00131EA0(float *, float *, short);
void func_00132600(char *, float *, char *);
extern float D_00568A20[], D_00568A24[], D_00568A28[], D_00568A30[], D_00568A34[], D_00568A38[], D_00568A40[], D_00568A44[], D_00568A48[];
void func_00131700(float *, float *, float *);
void func_001318E0(float *, float *, float *);
extern float D_00568F20[], D_00568F24[], D_00568F28[], D_00569020[], D_00569024[], D_00569028[];
void func_004061C0(char *);
int func_004047E0(char *);
int func_001AEB60(char *);
int func_00404710(char *);
int func_00404730(char *);
void func_00403030(char *);
void func_00403330(char *);
void func_00403720(char *);
void func_00403AC0(char *);
void func_00403E70(char *);
void func_00404180(char *);
void func_00196C40(char *, int);
int func_00402EC0(char *);
void func_00406740(char *);
int func_001AFFE0(char *);
extern char *D_005BC2E0;
void func_00104D70(float *, float *);
void func_0048B440(char *, float *, float, float, float);
void func_002F22F0(char *);
void func_002F21D0(char *);
void func_00323140(char *, int, int, int, int);
void func_0037CD80(char *);
void func_0037CDC0(char *);
void func_0020EA10(char *, int, int);
void func_0023A400(char *, int);
short *func_0023A470(char *);
void func_0020EA70(char *, char **);
void func_0020EB10(char *, char **);
void func_0020EC10(char *, char **);
void func_0020ED10(char *, char **);
void func_0020ED90(char *, char **);
void func_0020EDF0(char *, char **);
void func_0020EE50(char *, char **);
void func_0020EE70(char *, char **);
void func_0020EE90(char *, char **);
void func_0020EEA0(char *, char **);
void func_0020EEC0(char *, char **);
void func_0020EED0(char *, char **);
void func_0020EF10(char *, char **);
void func_0020EF50(char *, char **);
void func_0020F0A0(char *, char **);
void func_0020F0D0(char *, char **);
extern float D_005BC25C;
extern float D_005BC260;
extern float D_005BC264;
extern unsigned char D_005BBA28[4];
extern signed char D_00540870[][4];
extern signed char D_00540871[][4];
extern signed char D_00540872[][4];
extern signed char D_00540873[][4];

unsigned char func_00226F20(char *p, int fi) {
    unsigned char r = 0;
    short s;
    float v;
    float t;
    float c;
    unsigned char f;
    if ((unsigned char)func_002DAD40(p) == 2) return 0;
    f = fi;
    if (f == 0) *(unsigned char *)(p + 0x28A5) = 0;
    *(short *)(p + 0x28DC) = func_002DACC0(p);
    *(short *)(p + 0x28E2) = *(short *)(p + 0x28DC) - *(short *)(p + 0x90);
    func_002DBCA0(p, 1);
    if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) *(float *)(p + 0x54) = *(float *)(p + 0x54) + 1.0f;
    s = *(short *)(p + 0x28E2);
    if (s < 0xB6 && s > -0xB6) *(short *)(p + 0x28E2) = 0;
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        func_002DAE30(p, p + 0x90, p + 0x28E2, (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].d);
    }
    if (*(unsigned char *)(p + 0x28A5) == 0) {
        func_002DBD20(p, (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
    } else {
        v = (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].c;
        t = *(float *)(p + 0x150) - v;
        if (0.0f != t && -0.0f != t) {
            c = func_00131B50(*(float *)(p + 0x154));
            if (!(c <= func_00131B50(t))) func_002DBD20(p, v, 0.0f);
        }
    }
    if (f) {
        if (*(unsigned char *)(p + 0x28A5) == 0) {
            if ((unsigned char)func_002DAD40(p) == 1) {
                *(float *)(p + 0x2918) = *(float *)(p + 0x2918) - *(float *)(p + 0x10);
                if (*(float *)(p + 0x2918) <= 0.0f) {
                    *(unsigned char *)(p + 0x28A5) = 1;
                    r = 1;
                    *(float *)(p + 0x154) = ((*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].c - *(float *)(p + 0x150)) /
                                            (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].f;
                }
            } else {
                *(float *)(p + 0x2918) = (*(E226F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0) + 1].a;
            }
        } else if ((unsigned char)func_002DAD40(p) == 0) {
            *(unsigned char *)(p + 0x28A5) = 0;
            func_002DBD20(p, (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
            r = 2;
        }
    }
    func_002DB880(p, *(short *)(p + 0x28DC));
    return r;
}

int func_002462B0(char *p) {
    float t;
    char *g;
    char *o;
    char *r;
    char *e;
    g = func_00210240(p);
    t = *(float *)(g + 0xC) + *(float *)(g + 0x10);
    o = func_00215A30(func_00210240(p), 2, *(short *)(p + 0x58));
    if (func_00210810(o, t) > 0 && (r = func_00210830(o, 0, t)) != 0 && (e = *(char **)(r + 0x18)) != 0) {
        switch (*(unsigned char *)(p + 0x5D)) {
        case 0:
            if (*(char **)(p + 0x20)) {
                func_00212DA0(e + 0x2010, *(char **)(p + 0x20));
                func_00213010(e + 0x2010, *(float *)(*(char **)(p + 0x20) + 0xC) + (t - *(float *)(p + 4)) / *(float *)(p + 0x10));
            }
            break;
        case 1:
            switch (*(signed char *)(e + 0x1000)) {
            case 0:
            case 1:
                func_001A1F90(func_00279290(e + 0x40));
                break;
            case 2:
                func_001A2050(func_0027A710(e + 0x640));
                break;
            }
            break;
        case 2:
            switch (*(signed char *)(e + 0x1000)) {
            case 0:
            case 1:
                func_001A1E10(func_00279290(e + 0x40));
                break;
            case 2:
                func_001A1ED0(func_0027A710(e + 0x640));
                break;
            }
            break;
        }
        if (*(int *)(*(char **)(e + 0x200C) + 0x2C)) {
            switch (*(unsigned char *)(p + 0x5E)) {
            case 1: *(int *)(e + 0x3F9C) = 1; break;
            case 2: *(int *)(e + 0x3F9C) = 0; break;
            case 3: *(int *)(e + 0x3F9C) = 2; break;
            }
        }
    }
    return 1;
}

static inline void set4_297(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void func_00297370(char *p) {
    float m90[16] __attribute__((aligned(16)));
    float m50[16] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    char *q;
    float d;
    q = p + 0x9BB0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m50) : "memory");
    func_00105760(m50, m50, *(float *)(p + 0x9C40) * *(float *)(p + 0x10));
    func_00104C00((char *)m90, (float *)q, (char *)m50);
    if (m90[8] < -0.422f) {
        set4_297(v40, -0.422f, 0.0f, -0.9066f, 0.0f);
        set4_297(v30, 0.0f, 1.0f, 0.0f, 0.0f);
        func_00133890(m90, v40, v30);
    }
    if (!(m90[8] <= 0.422f)) {
        set4_297(v40, 0.422f, 0.0f, -0.9066f, 0.0f);
        set4_297(v30, 0.0f, 1.0f, 0.0f, 0.0f);
        func_00133890(m90, v40, v30);
    }
    *(short *)(p + 0x90) = func_00131D10(m90[8], m90[10]);
    func_00105300((float *)(p + 0x9BB0), (char *)m90);
    d = func_002A4070(p);
    *(float *)(p + 0xAA2C) = *(float *)(p + 0xAA2C) - d * *(float *)(p + 0x10);
    if (*(float *)(p + 0xAA2C) <= 0.0f) *(float *)(p + 0xAA2C) = 0.0f;
    if (func_0024E780(p + 0x8980, 0, 0) == 1) {
        func_0024E7B0(p + 0x8980, 0, 0);
        *(unsigned char *)(p + 5) = 3;
        func_001ACC30(D_005BE09C, 3, 0x14, 0xA, 0);
    }
}

static inline float clamp253(float x, float lo, float hi) {
    if (x > hi) return hi;
    if (x < lo) return lo;
    return x;
}

void func_00253310(char *p, float *t, float f) {
    float v90[4] __attribute__((aligned(16)));
    float m50[16] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float len;
    float c;
    short a;
    unsigned char r;
    func_00131650(p + 0xF0, p + 0xF0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v90), "r"(t), "r"(p + 0x50) : "memory");
    if ((len = func_001324E0(v90)) <= 0.0f) return;
    a = func_00131CB0(clamp253(func_00132630(p + 0xF0, v90) / len, -1.0f, 1.0f));
    if (*(short *)(p + 0x138) < a) a = *(short *)(p + 0x138);
    a = a * f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(p + 0xF0), "r"(v90), "r"(v90) : "memory");
    __asm__ volatile("lqc2 $vf10, 0x0(%1)\n\tvabs.xyz $vf10, $vf10\n\tvaddy.x $vf10, $vf10, $vf10y\n\tvaddz.x $vf10, $vf10, $vf10z\n\tsqc2 $vf10, 0x0(%0)" : : "r"(v40), "r"(v90) : "memory");
    r = v40[0] > 0.0f;
    if (r) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m50) : "memory");
        func_00131EA0(m50, v90, a);
        func_00132600(p + 0xF0, m50, p + 0xF0);
    }
}

void func_002534D0(char *p, float *t, float f) {
    float m60[16] __attribute__((aligned(16)));
    float v50[4] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float len;
    float sv;
    short a;
    unsigned char r;
    sv = *(float *)(p + 0xF4);
    *(float *)(p + 0xF4) = 0.0f;
    len = func_001324E0((float *)(p + 0xF0));
    if (len <= 0.0f) {
        *(float *)(p + 0xF4) = sv;
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v50), "r"(t), "r"(p + 0x50) : "memory");
    v50[1] = 0.0f;
    func_00131650((char *)v50, (char *)v50);
    a = func_00131CB0(clamp253(func_00132630(p + 0xF0, v50) / len, -1.0f, 1.0f));
    if (*(short *)(p + 0x138) < a) a = *(short *)(p + 0x138);
    a = a * f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(p + 0xF0), "r"(v50), "r"(v50) : "memory");
    __asm__ volatile("lqc2 $vf10, 0x0(%1)\n\tvabs.xyz $vf10, $vf10\n\tvaddy.x $vf10, $vf10, $vf10y\n\tvaddz.x $vf10, $vf10, $vf10z\n\tsqc2 $vf10, 0x0(%0)" : : "r"(v40), "r"(v50) : "memory");
    r = v40[0] > 0.0f;
    if (r) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m60) : "memory");
        func_00131EA0(m60, v50, a);
        func_00132600(p + 0xF0, m60, p + 0xF0);
        *(float *)(p + 0xF4) = sv;
    }
}

void func_00470AB0(char *p, float *a, int x, float *m) {
    float v[4] __attribute__((aligned(16)));
    float m30[16] __attribute__((aligned(16)));
    unsigned char f;
    float s;
    f = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x550), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    switch (*(unsigned char *)(p + 0x580)) {
    case 0: if (!(v[0] <= 0.0f)) f = 1; break;
    case 1: if (!(v[1] <= 0.0f)) f = 1; break;
    case 2: if (!(v[2] <= 0.0f)) f = 1; break;
    case 3: if (v[0] < 0.0f) f = 1; break;
    case 4: if (v[1] < 0.0f) f = 1; break;
    case 5: if (v[2] < 0.0f) f = 1; break;
    }
    if (f) {
        s = *(float *)(p + 0x5A0);
        if (!(s <= 0.0f)) *(float *)(p + 0x8D0) = *(float *)(p + 0x8D0) + a[1] * s;
        else *(float *)(p + 0x8D0) = *(float *)(p + 0x8D0) + func_00131B50(s);
        func_00207470(0, 0x2C, p + 0x520);
    }
    func_003305E0(D_01DFABA0, 8, 0x93, p + 0x550, 0x12, 0, 0);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m30) : "memory");
    func_00105230(m30, m30, m);
    func_00207470(3, 0x1C, (char *)m30);
}

void func_003AA6C0(char *p) {
    float v90[4] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int i;
    for (i = 0; i < 8; i++) {
        v90[0] = *(float *)((char *)D_00568A20 + i * 48);
        v90[1] = *(float *)((char *)D_00568A24 + i * 48);
        v90[2] = *(float *)((char *)D_00568A28 + i * 48);
        v90[3] = 1.0f;
        v80[0] = 6.283185f * (*(float *)((char *)D_00568A30 + i * 48) / 360.0f);
        v80[1] = 6.283185f * (*(float *)((char *)D_00568A34 + i * 48) / 360.0f);
        v80[2] = 6.283185f * (*(float *)((char *)D_00568A38 + i * 48) / 360.0f);
        v80[3] = 1.0f;
        v70[0] = *(float *)((char *)D_00568A40 + i * 48);
        v70[1] = *(float *)((char *)D_00568A44 + i * 48);
        v70[2] = *(float *)((char *)D_00568A48 + i * 48);
        v70[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00131700(m, m, v80);
        func_00105230(m, m, v90);
        func_001318E0(m, m, v70);
        if (*(int *)((char *)(i * 4) + (int)p + 0x4AF4) == 0) {
            switch (i) {
            case 0: case 4: case 6:
                *(char **)((char *)(i * 4) + (int)p + 0x4AF4) = func_00207480(1, 0x143, m, 0x40);
                break;
            case 1: case 5: case 7:
                *(char **)((char *)(i * 4) + (int)p + 0x4AF4) = func_00207480(1, 0x159, m, 0x40);
                break;
            case 2: case 3: case 8: case 9:
                *(char **)((char *)(i * 4) + (int)p + 0x4AF4) = func_00207480(1, 0x15A, m, 0x40);
                break;
            }
        }
    }
}

void func_003AAB30(char *p, unsigned char b, float *out, unsigned char c) {
    float va0[4] __attribute__((aligned(16)));
    float v90[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short a;
    a = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    va0[0] = 0.0f;
    va0[1] = 6.283185f * ((float)a / 65536.0f);
    va0[2] = 0.0f;
    va0[3] = 1.0f;
    func_00131700(m, m, va0);
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 27: case 33: case 34:
        v90[0] = *(float *)((char *)D_00568F20 + b * 16);
        v90[1] = *(float *)((char *)D_00568F24 + b * 16);
        v90[2] = *(float *)((char *)D_00568F28 + b * 16);
        v90[3] = 1.0f;
        break;
    case 22: case 23: case 24: case 25: case 26: case 28: case 29: case 30: case 31: case 32: case 35: case 36: case 37: case 38:
        if (c == 0) {
            v90[0] = *(float *)((char *)D_00569020 + b * 16);
            v90[1] = *(float *)((char *)D_00569024 + b * 16);
            v90[2] = *(float *)((char *)D_00569028 + b * 16);
            v90[3] = 1.0f;
        } else {
            v90[0] = *(float *)((char *)D_00568F20 + b * 16);
            v90[1] = *(float *)((char *)D_00568F24 + b * 16);
            v90[2] = *(float *)((char *)D_00568F28 + b * 16);
            v90[3] = 1.0f;
        }
        break;
    }
    func_00104B80(out, (char *)m, v90);
    out[0] = out[0] + *(float *)(p + 0x50);
    out[1] = out[1] + *(float *)(p + 0x54);
    out[2] = out[2] + *(float *)(p + 0x58);
    out[3] = 1.0f;
}

static inline int ok402(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

void func_004028A0(char *p) {
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        func_004061C0(p + 0x5C);
        *(int *)(p + 0x160) = *(unsigned char *)(p + 0x14);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
    case 1:
        if ((unsigned char)func_004047E0(p) == 1) {
            *(int *)(p + 4) = *(int *)(p + 4) + 1;
            *(int *)(p + 8) = 0;
        }
        break;
    case 2:
        *(signed char *)(p + 0x16) = *(signed char *)(p + 0x15);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
    case 3:
        if ((unsigned char)func_001AEB60(D_00666750) == 0) break;
        if (*(unsigned char *)(p + 0x17) == 0 && (unsigned char)func_00404710(p) == 0) {
            *(int *)(p + 4) = 0xA;
            break;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 4:
        switch (*(unsigned char *)(p + 0x15)) {
        case 0:
            func_00403030(p);
            break;
        case 3:
            func_00403330(p);
            break;
        case 4:
            func_00403720(p);
            break;
        case 5:
            func_00403AC0(p);
            break;
        case 2:
            func_00403E70(p);
            break;
        case 1:
            func_00404180(p);
            break;
        }
        break;
    case 5:
        if (*(unsigned char *)(p + 0x14) == 0) {
            if (*(unsigned char *)(p + 0x15) != *(unsigned char *)(p + 0x16)) {
                *(signed char *)(p + 0x170) = *(signed char *)(p + 0x16);
                *(int *)(p + 4) = *(int *)(p + 4) + 1;
            } else if (*(unsigned char *)(p + 0x15) == 0) {
                *(int *)(p + 4) = 7;
            } else {
                *(int *)(p + 4) = *(unsigned int *)(p + 4) + 1;
                *(unsigned char *)(p + 0x16) = 0;
            }
        } else {
            *(int *)(p + 4) = 7;
        }
        break;
    case 6:
        if ((unsigned char)func_001AEB60(D_00666750) == 0) break;
        if (*(unsigned char *)(p + 0x17) == 1 && (unsigned char)func_00404730(p) == 0) {
            *(int *)(p + 4) = 0xA;
            break;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 7:
        switch (*(unsigned char *)(p + 0x15)) {
        case 0:
            func_00403030(p);
            break;
        case 3:
            func_00403330(p);
            break;
        case 4:
            func_00403720(p);
            break;
        case 5:
            func_00403AC0(p);
            break;
        case 2:
            func_00403E70(p);
            break;
        case 1:
            func_00404180(p);
            break;
        }
        break;
    case 8:
        if (*(unsigned char *)(p + 0x14) == 0) {
            if (*(unsigned char *)(p + 0x15) != *(unsigned char *)(p + 0x16)) {
                *(signed char *)(p + 0x15) = *(signed char *)(p + 0x16);
                *(int *)(p + 4) = 9;
            } else if (*(unsigned char *)(p + 0x15) == 0) {
                *(int *)(p + 4) = 0xA;
            } else {
                *(unsigned char *)(p + 0x15) = 0;
                *(int *)(p + 4) = 9;
            }
        } else {
            *(int *)(p + 4) = 0xA;
        }
        break;
    case 9:
        *(int *)(p + 0x54) = (*(int *)(p + 0x54) + 1) & 1;
        *(int *)(p + 4) = 2;
        break;
    case 10:
        if (*(char **)(p + 0x44) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x44))) break;
        }
        if (*(char **)(p + 0x48) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x48))) break;
        }
        if (*(char **)(p + 0x4C) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x4C))) break;
        }
        if (*(char **)(p + 0x50) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x50))) break;
        }
        if (*(char **)(p + 0x164) != 0) func_001AD140(*(char **)(p + 0x164));
        if (*(char **)(p + 0x168) != 0) func_001AD140(*(char **)(p + 0x168));
        if (*(char **)(p + 0x16C) != 0) func_001AD140(*(char **)(p + 0x16C));
        if (*(char **)(p + 0x174) != 0) func_001AD140(*(char **)(p + 0x174));
        if (*(char **)(p + 0x178) != 0) func_001AD140(*(char **)(p + 0x178));
        if (*(char **)(p + 0x17C) != 0) func_001AD140(*(char **)(p + 0x17C));
        if (*(char **)(p + 0x180) != 0) func_001AD140(*(char **)(p + 0x180));
        if (*(char **)(p + 0x184) != 0) func_001AD140(*(char **)(p + 0x184));
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 11: case 12:
        *(int *)(p + 4) = *(unsigned int *)(p + 4) + 1;
        break;
    case 13:
        if (*(int *)(p + 0x44) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x44));
            *(int *)(p + 0x44) = 0;
        }
        if (*(int *)(p + 0x48) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x48));
            *(int *)(p + 0x48) = 0;
        }
        if (*(int *)(p + 0x4C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x4C));
            *(int *)(p + 0x4C) = 0;
        }
        if (*(int *)(p + 0x50) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x50));
            *(int *)(p + 0x50) = 0;
        }
        if (*(int *)(p + 0x58) != 0) {
            func_00196C40(D_006480D0, *(int *)(p + 0x58));
            *(int *)(p + 0x58) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 14:
        if ((unsigned char)func_00402EC0(p) == 1) *(int *)(p + 4) = *(int *)(p + 4) + 1;
        else *(int *)(p + 4) = 0x10;
        func_00406740(p + 0x5C);
        break;
    case 15:
        if ((unsigned char)func_001AFFE0(p + 0x18) != 1) break;
        if ((unsigned char)func_001AEB60(D_00666750) != 1) break;
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 16:
        break;
    default:
        *(int *)(p + 4) = 0xA;
        break;
    }
}

static inline float *mtx2E6(char *e) { return (float *)(e + 0x110); }

void func_002E6E60(char *p) {
    float v70[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int k;
    int i;
    char *e;
    char *t;
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(float *)(p + 0x170) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3C0), "r"(p + 0x160) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3D0), "r"(p + 0x150) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x150) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(v70), "r"(p + 0x160), "r"(p + 0x150) : "memory");
        *(short *)(p + 0x90) = func_00131D10(v70[0], v70[2]);
        *(unsigned char *)(p + 0x3A0) = 5;
        *(unsigned char *)(p + 0x3A1) = 0;
        *(short *)(p + 0x3A2) = 0;
        *(unsigned char *)(p + 0x3B0) = 1;
        *(unsigned char *)(p + 0x400) = 0;
        if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x28A7) != 0) *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
        switch (*(unsigned char *)(p + 0x401)) {
        case 0: k = 0; break;
        case 1: k = 1; break;
        case 2: k = 2; break;
        case 3: k = 3; break;
        case 4: k = 4; break;
        case 5:
            k = 5;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        case 6: k = 6; break;
        case 7:
            k = 7;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        case 8:
            k = 7;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        case 9:
            k = 7;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        }
        t = D_005BC2E0 + k * 64;
        *(signed char *)(p + 0x40C) = *(signed char *)(t + 0x0);
        *(signed char *)(p + 0x40D) = *(signed char *)(t + 0x1);
        *(signed char *)(p + 0x40E) = *(signed char *)(t + 0x2);
        *(float *)(p + 0x410) = *(float *)(t + 0x4);
        *(float *)(p + 0x414) = *(float *)(t + 0x8);
        *(float *)(p + 0x418) = *(float *)(t + 0xC);
        *(float *)(p + 0x41C) = *(float *)(t + 0x10);
        *(float *)(p + 0x420) = *(float *)(t + 0x14);
        *(signed char *)(p + 0x424) = *(signed char *)(t + 0x18);
        *(float *)(p + 0x428) = *(float *)(t + 0x1C);
        *(signed char *)(p + 0x42C) = *(signed char *)(t + 0x20);
        *(float *)(p + 0x430) = *(float *)(t + 0x24);
        *(float *)(p + 0x434) = *(float *)(t + 0x28);
        *(float *)(p + 0x438) = *(float *)(t + 0x2C);
        *(unsigned char *)(p + 0x43C) = *(unsigned char *)(t + 0x30);
        *(int *)(p + 0x440) = *(int *)(t + 0x34);
        *(float *)(p + 0x444) = *(float *)(t + 0x38);
        *(signed char *)(p + 0x448) = *(signed char *)(t + 0x3C);
        *(signed char *)(p + 0x449) = *(signed char *)(t + 0x3D);
        *(signed char *)(p + 0x44A) = *(signed char *)(t + 0x3E);
        switch (*(unsigned char *)(p + 0x408)) {
        case 0:
            break;
        case 1:
            *(float *)(p + 0x410) = *(float *)(p + 0x410) * 1.2f;
            break;
        case 2:
            *(float *)(p + 0x410) = *(float *)(p + 0x410) * 1.5f;
            break;
        }
        func_0028C200(p + 0x180, p + 0x3A0, p + 0x3B0, 1, p + 0x40C, p, 0);
        *(unsigned char *)(p + 0x183) = 0;
        *(int *)(p + 0x25C) = 1;
        *(int *)(p + 0x258) = 0x30700;
        func_0028C8E0(p + 0x180, 0);
        func_0028C910(p + 0x180);
        func_0028C3A0(p + 0x180, 0, -1, 0);
        func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
        *(float *)(p + 0x170) = *(float *)(p + 0x170) - *(float *)(p + 0x10);
        break;
    default:
    *(float *)(p + 0x170) = *(float *)(p + 0x170) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x170) < 0.0f) {
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        for (i = 0; i < 16; i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x1FC);
            if (e != 0 && **(unsigned char **)(e + 0x104) == 1 && (*(int *)(e + 8) & 0x30000)) {
                __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
                m[12] = mtx2E6(e)[4];
                m[13] = mtx2E6(e)[5];
                m[14] = mtx2E6(e)[6];
                if (!*(unsigned char *)(p + 0x400)) func_00207470(3, 0xA, (char *)m);
                else func_00207470(3, 0x32, (char *)m);
            }
        }
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
    }
        break;
    }
}

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

void func_0020E0A0(char *p, char **s) {
    char *c;
    char *e;
    char **t;
    char *b;
    for (;;) {
        c = *s;
        switch (*(unsigned char *)c) {
        case 80:
            func_002F22F0(*(char **)(p + 0x6A0));
            func_002F21D0(*(char **)(p + 0x6A0));
            *(unsigned char *)(p + 0x8B) = *(int *)(*s + 4);
            break;
        case 81:
            func_00323140(*(char **)(p + 0x6A4), *(unsigned char *)(c + 4), *(unsigned char *)(c + 8), *(unsigned char *)(c + 0xC), *(unsigned char *)(c + 0x10));
            break;
        case 82:
            func_0020ED10(p, s);
            break;
        case 83:
            switch (*(int *)(c + 4)) {
            case 0:
                func_002F2FB0(*(char **)(p + 0x6A0));
                while ((e = func_002F3080(*(char **)(p + 0x6A0))) != 0) {
                    if (*(signed char *)(e + 0x46) == 0x29) {
                        func_0037CD80(e);
                        break;
                    }
                }
                if (e == 0) func_0020EA10(p, 3, 0);
                break;
            case 1:
                func_002F2FB0(*(char **)(p + 0x6A0));
                while ((e = func_002F3080(*(char **)(p + 0x6A0))) != 0) {
                    if (*(signed char *)(e + 0x46) == 0x29) {
                        func_0037CDC0(e);
                        break;
                    }
                }
                break;
            }
            break;
        case 48: func_0020EA70(p, s); break;
        case 51: func_0020EB10(p, s); break;
        case 52: func_0020EC10(p, s); break;
        case 53: func_0020ED10(p, s); break;
        case 54: func_0020ED90(p, s); break;
        case 55: func_0020EDF0(p, s); break;
        case 56: func_0020EE50(p, s); break;
        case 57: func_0020EE70(p, s); break;
        case 61: func_0020EE90(p, s); break;
        case 62: func_0020EEA0(p, s); break;
        case 63: func_0020EEC0(p, s); break;
        case 67: func_0020EED0(p, s); break;
        case 68: func_0020EF10(p, s); break;
        case 69: func_0020EF50(p, s); break;
        case 98: func_0020EF90(p, s); break;
        case 91: func_0020F0A0(p, s); break;
        case 86:
            func_0023A400(*(char **)(p + 0x69C), *(int *)(c + 4));
            break;
        case 72: func_0020F0D0(p, s); break;
        case 65:
            func_00208620(func_0023A470(*(char **)(p + 0x69C)), *(int *)(c + 4), 0);
            break;
        case 66:
            func_00208720(func_0023A470(*(char **)(p + 0x69C)), *(int *)(c + 4), 0);
            break;
        case 77:
            b = *(char **)p;
            t = (char **)(p + *(int *)(c + 4) * 12 + 0xD8);
            t[0] = b + *(int *)(b + *(int *)(b + 8) + *(int *)(c + 8) * 4);
            t[1] = t[0];
            t[2] = 0;
            func_0020E0A0(p, (char **)(p + *(int *)(*s + 4) * 12 + 0xDC));
            break;
        case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 49: case 50: case 58: case 59: case 60: case 64: case 70: case 71: case 74: case 75: case 76: case 78: case 79: case 84: case 85: case 87: case 88: case 89: case 90: case 92: case 93: case 94: case 95: case 96: case 97: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122: case 123: case 124: case 125: case 126: case 127: case 128: case 129: case 130: case 131: case 132:
        case 133:
            break;
        case 14:
        case 73:
            return;
        }
        *s = *s + (((*(int *)*s >> 8) & 0xFF) + 1) * 4;
    }
}

static inline void set4_2D7(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

unsigned char func_002D7E90(char *p) {
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

#define QC1BF(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { float v[4]; } __attribute__((aligned(16))) V1BF;

int func_001C1180(char *, V1BF *, V1BF *);
int func_001BFA00(char *, V1BF *, V1BF *, V1BF *, int, V1BF *);
void func_0041E190(float *, float *, float);

int func_001BFB50(char *a, V1BF *box, V1BF *tri, V1BF *out) {
    V1BF e[2];
    V1BF q[4];
    int i;
    int j;
    for (i = 0; i < 3; i++) {
        if (func_001C1180(a, &tri[i], box)) {
            if (out != 0) QC1BF(out, &tri[i]);
            return 1;
        }
    }
    for (i = 0; i < 3; i++) {
        QC1BF(&e[0], &tri[i]);
        QC1BF(&e[1], &tri[D_005BBA28[i]]);
        for (j = 0; j < 6; j++) {
            QC1BF(&q[0], &box[D_00540870[j][0]]);
            QC1BF(&q[1], &box[D_00540871[j][0]]);
            QC1BF(&q[2], &box[D_00540872[j][0]]);
            QC1BF(&q[3], &box[D_00540873[j][0]]);
            if (func_001BFA00(a, e, q, (V1BF *)((char *)&box[j] + 0x80), 4, out)) return 1;
        }
    }
    return 0;
}

void func_003D14C0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float d;
    v[1] = 60.0f;
    v[0] = 0.0f;
    v[2] = 150.0f;
    v[3] = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 30.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190(v, v, 6.283185f * ((float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    d = func_0041DB20(p + 0x50);
    if (!(d <= 4000.0f)) d = 4000.0f;
    if (d < 1000.0f) d = 1000.0f;
    *(float *)(p + 0x68) = d / (85.0f - (float)(*(unsigned int *)(p + 0xB88) * 2));
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x222;
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + (short)(*(unsigned int *)(p + 0xB88) % 3 * 0x222);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V1C0;

float func_001C2B60(char *, V1C0 *, V1C0 *, V1C0 *, V1C0 *);
void func_00132540(V1C0 *, V1C0 *, float);
char *func_001B4250(float *, int, int, int);
char *func_001EDE80(float *, int, int, int);
char *func_001B11B0(float *, int, int, int);
char *func_00205A00(float *, int, int, int);
void func_001AAD30(char *);
char *func_001B1610(int, char *);
void func_003E1000(char *);
void func_001B1440(char *, char *, char *);
void func_001959E0(char *, int, char *);
void func_001B1430(char *, int);

int func_001BFE50(char *a, V1C0 *tri, V1C0 *cap, V1C0 *out) {
    V1C0 c2;
    V1C0 c1;
    V1C0 bc[2];
    V1C0 dd;
    V1C0 e[2];
    V1C0 seg[2];
    float best;
    float d;
    int i;
    best = -1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&seg[0]), "r"(&cap[0]) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&seg[1]), "r"(&cap[1]) : "memory");
    for (i = 0; i < 3; i++) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&e[0]), "r"(&tri[i]) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&e[1]), "r"(&tri[D_005BBA28[i]]) : "memory");
        d = func_001C2B60(a, seg, e, &c1, &c2);
        if (d < cap[2].v[0]) {
            if (best == -1.0f || d < best) {
                best = d;
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&bc[0]), "r"(&c1) : "memory");
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&bc[1]), "r"(&c2) : "memory");
            }
        }
    }
    if (best != -1.0f) {
        if (out != 0) {
            if (best < 0.001f) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(&bc[0]) : "memory");
            } else {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(&dd), "r"(&bc[1]), "r"(&bc[0]) : "memory");
                func_00132540(&dd, &dd, cap[2].v[0]);
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(&bc[0]), "r"(&dd) : "memory");
            }
        }
        return 1;
    }
    return 0;
}

void func_002EED10(char *e) {
    float r[4] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *h;
    int i;
    char *o;
    h = e;
    for (i = 0, e += 0x10; i < *(unsigned short *)(h + 6); e += 0x28, i++) {
        t[0] = *(float *)(e + 4);
        t[1] = *(float *)(e + 8);
        t[2] = *(float *)(e + 0xC);
        t[3] = 1.0f;
        r[0] = 6.283185f * (*(float *)(e + 0x10) / 360.0f);
        r[1] = 6.283185f * (*(float *)(e + 0x14) / 360.0f);
        r[2] = 6.283185f * (*(float *)(e + 0x18) / 360.0f);
        r[3] = 1.0f;
        s[0] = *(float *)(e + 0x1C);
        s[1] = *(float *)(e + 0x20);
        s[2] = *(float *)(e + 0x24);
        s[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00131700(m, m, r);
        func_00105230(m, m, t);
        func_001318E0(m, m, s);
        switch (*(short *)e) {
        case 0: o = func_001B4250(m, 0, *(short *)(e + 2), 0); break;
        case 1: o = func_001EDE80(m, 0, *(short *)(e + 2), 0); break;
        case 2: o = func_001B11B0(m, 0, *(short *)(e + 2), 0); break;
        case 3: o = func_00205A00(m, 0, *(short *)(e + 2), 0); break;
        }
        if (o != 0) *(int *)(o + 0xC) |= 0x40;
    }
}

void func_003D1B90(char *p) {
    float v[4] __attribute__((aligned(16)));
    unsigned char n;
    float d;
    n = *(unsigned int *)(p + 0xB88) & 0xF;
    v[1] = 60.0f;
    v[2] = 150.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    *(int *)(p + 0x60) = 0;
    *(float *)(p + 0x64) = 30.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190(v, v, 6.283185f * ((float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    d = func_0041DB20(p + 0x50);
    if (!(d <= 4000.0f)) {
        d = 4000.0f;
    }
    if (d < 1000.0f) {
        d = 1000.0f;
    }
    switch (*(unsigned int *)(p + 0xB88) >> 4) {
    case 0:
        *(float *)(p + 0x68) = d / (85.0f - (float)(n * 2));
        break;
    case 1:
        *(float *)(p + 0x68) = d / (80.0f - (float)(n * 2));
        break;
    case 2:
        *(float *)(p + 0x68) = d / (75.0f - (float)(n * 2));
        break;
    }
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x400;
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + (short)(n << 10);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
}

typedef struct { unsigned char f; int x; char **pp; } HB;

typedef struct { unsigned char b[3]; } S3;
void func_00325B00(char *);
void func_0022E470(char *);
void func_001B5F70(char *);
extern char D_01DF7E20[];
char *func_0013D2A0(char *, char *, int);
void func_002F4600(char *);
void func_00303430(char *);
void func_003271B0(char *);
void func_0042D400(char *);
void func_00494960(char *);
void func_004E63D0(char *);
void func_004E9590(char *);
void func_0044C190(char *);
void func_0033BB50(char *);
void func_004B8AE0(char *);
void func_004E1D40(char *);
void func_00484AC0(char *);
void func_0048C820(char *);
void func_003221A0(char *);
void func_00495280(char *);
void func_002F8090(char *);
void func_004BCA90(char *);
void func_0032D5A0(char *);
void func_0032D6E0(char *, char *, float);
void func_00417FA0(char *);
void func_002E84C0(char *, char *);
typedef struct { float f[3]; } SF3;
void func_003703B0(char *);
void func_002EA110(char *);
void func_00456F20(char *);
void func_00457F00(char *, char *);
void func_002FF910(char *);
void func_002FF9D0(char *);
int func_002FFA10(char *);
void func_001AD140(char *);
void func_0046F580(char *);

char *func_003E0E70(char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x6C, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x6C, t);
        if (r != 0) {
            func_003E1000(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(int *)(o + 0x50) = *(int *)(s + 0x0);
    *(int *)(o + 0x54) = *(int *)(s + 0x4);
    *(int *)(o + 0x58) = *(int *)(s + 0x8);
    *(int *)(o + 0x5C) = *(int *)(s + 0xC);
    *(int *)(o + 0x60) = *(int *)(s + 0x10);
    *(S3 *)(o + 0x64) = *(S3 *)(s + 0x14);
    *(S3 *)(o + 0x67) = *(S3 *)(s + 0x17);
    *(unsigned char *)(o + 0x6A) = *(unsigned char *)(s + 0x1A);
    return ret;
}

char *func_003259E0(char *p) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x1940, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1940, t);
        if (r != 0) {
            func_00325B00(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

char *func_0022E360(void) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x6C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x6C0, t);
        if (r != 0) {
            func_0022E470(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    return ret;
}

char *func_001B5E00(char *p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0x4B0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0x4B0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0x4B0, t);
        if (r != 0) {
            func_001B5F70(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xD, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x440) = p;
        *(char **)(ret + 0x4A0) = s;
        *(int *)(ret + 0xC0) = *(int *)(p + 0x44);
    }
    return ret;
}

char *func_002F44C0(unsigned char p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x140, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x140, t);
        if (r != 0) {
            func_002F4600(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(unsigned char *)(ret + 0xA0) = p;
        *(char **)(ret + 0x80) = s;
    }
    return ret;
}

char *func_003032F0(char *p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x48, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x48, t);
        if (r != 0) {
            func_00303430(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x38) = p;
        *(char **)(ret + 0x3C) = s;
    }
    return ret;
}

char *func_00327060(unsigned char p, char *s, char *u) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xB0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xB0, t);
        if (r != 0) {
            func_003271B0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(unsigned char *)(ret + 0xA0) = p;
        *(char **)(ret + 0x80) = s;
        *(char **)(ret + 0x90) = u;
    }
    return ret;
}

char *func_0042D2B0(char *p, char *s, char *u) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x460, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x460, t);
        if (r != 0) {
            func_0042D400(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0xD0) = p;
        *(char **)(ret + 0x458) = s;
        *(char **)(ret + 0x45C) = u;
    }
    return ret;
}

char *func_00494810(float *v, float *w, float c) {
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
    *b.pp = func_001B0FD0(a, 0x470, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x470, t);
        if (r != 0) {
            func_00494960(r);
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(float *)(ret + 0x468) = c;
    }
    return ret;
}

char *func_004E6280(float *v, float *w, int n) {
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
    *b.pp = func_001B0FD0(a, 0xB40, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0xB40, t);
        if (r != 0) {
            func_004E63D0(r);
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(int *)(ret + 0x478) = n;
    }
    return ret;
}

char *func_004E9430(float *v, int n) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xF0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xF0, t);
        if (r != 0) {
            func_004E9590(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o != 0) {
        *(float *)(o + 0x50) = v[0];
        *(float *)(o + 0x54) = v[1];
        *(float *)(o + 0x58) = v[2];
        *(float *)(o + 0x5C) = 1.0f;
        *(int *)(ret + 0x60) = n;
    }
    return ret;
}

unsigned char func_003C8130(char *p, unsigned char k) {
    float v[4] __attribute__((aligned(16)));
    short s;
    float tgt;
    float cur;
    float d;
    unsigned char r;
    if (k == 1) {
        s = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    } else {
        v[0] = 2500.0f;
        v[1] = -50.0f;
        v[2] = 2500.0f;
        v[3] = 1.0f;
        s = func_0034B940((char *)v, p + 0x50);
    }
    tgt = 360.0f * (float)s / 65536.0f;
    cur = 360.0f * (float)*(short *)(p + 0x90) / 65536.0f;
    d = tgt - cur;
    if (d < -180.0f) {
        d += 360.0f;
    }
    if (!(d < 180.0f)) {
        d -= 360.0f;
    }
    r = 1;
    if (!(d <= 0.0f)) {
        if (!(d <= 4.0f)) {
            cur += 2.0f * *(float *)(p + 0x10);
            if (!(cur <= 180.0f)) {
                cur -= 360.0f;
            }
        } else {
            r = 0;
            cur = tgt;
        }
    } else if (d < -4.0f) {
        cur -= 2.0f * *(float *)(p + 0x10);
        if (cur < -180.0f) {
            cur += 360.0f;
        }
    } else {
        r = 0;
        cur = tgt;
    }
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * cur / 360.0f);
    return r;
}

char *func_0044C030(char *p, char *s, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x430, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x430, t);
        if (r != 0) {
            func_0044C190(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x420) = p;
        *(char **)(ret + 0x3D0) = s;
        *(float *)(ret + 0x428) = f;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

char *func_0033B9F0(char *p, char *s, short h) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xC00, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xC00, t);
        if (r != 0) {
            func_0033BB50(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0xBC8) = s;
        *(short *)(ret + 0x90) = h;
        *(char **)(ret + 0xBC0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

char *func_004B8980(char *p, char *s, short h) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x400, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x400, t);
        if (r != 0) {
            func_004B8AE0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x38C) = s;
        *(short *)(ret + 0x90) = h;
        *(char **)(ret + 0x3FC) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

char *func_004E1BE0(char *p, char *s, unsigned char c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x750, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x750, t);
        if (r != 0) {
            func_004E1D40(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x744) = p;
        *(char **)(ret + 0x740) = s;
        *(unsigned char *)(ret + 0x641) = c;
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

char *func_00484960(float *v, float *w, int n, unsigned char c) {
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
    *b.pp = func_001B0FD0(a, 0xB00, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0xB00, t);
        if (r != 0) {
            func_00484AC0(r);
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
        *(int *)(ret + 0x470) = n;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(unsigned char *)(ret + 0xAF5) = c;
    }
    return ret;
}

char *func_0048C6C0(float *v, float *w, int n, int c) {
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

char *func_00322030(char *p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x500, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x500, t);
        if (r != 0) {
            func_003221A0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x1A4) = p;
        *(unsigned char *)(ret + 0x45) = 4;
        *(char **)(ret + 0x4F4) = s;
        *(int *)(ret + 0x448) = 0;
        *(int *)(ret + 0x44C) = 0;
        *(int *)(ret + 0x450) = 0;
        *(int *)(ret + 0x454) = 0;
    }
    return ret;
}

char *func_00495110(char *p, char *s, short h) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x410, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x410, t);
        if (r != 0) {
            func_00495280(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x3F8) = s;
        *(short *)(ret + 0x374) = h;
        *(char **)(ret + 0x3F0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

char *func_002F7F10(char *p, char *s, short h, unsigned char c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x460, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x460, t);
        if (r != 0) {
            func_002F8090(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x3F0) = s;
        *(short *)(ret + 0x3F4) = h;
        *(char **)(ret + 0x45C) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
        *(unsigned char *)(ret + 0x458) = c;
    }
    return ret;
}

char *func_004BC900(char *p, char *s, short h, unsigned char c, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x400, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x400, t);
        if (r != 0) {
            func_004BCA90(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x3F0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
        *(char **)(ret + 0x3F4) = s;
        *(short *)(ret + 0x90) = h;
        *(unsigned char *)(ret + 0x370) = c;
        *(float *)(ret + 0x3E8) = f;
    }
    return ret;
}

char *func_0032D410(unsigned char p, char *s, char *tt, char *u, float f1, float f2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xE0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xE0, t);
        if (r != 0) {
            func_0032D5A0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(unsigned char *)(ret + 0xA0) = p;
        *(float *)(ret + 0xC8) = f1;
        *(char **)(ret + 0x90) = s;
        *(char **)(ret + 0xC0) = tt;
        func_0032D6E0(ret, u, f2);
    }
    return ret;
}

char *func_00417E20(char *p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xE0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xE0, t);
        if (r != 0) {
            func_00417FA0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x4, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        func_002E84C0(ret, p);
        o = ret;
        *(unsigned char *)(o + 0x38) = *(unsigned char *)s;
        *(S3 *)(o + 0x39) = *(S3 *)(s + 1);
        *(SF3 *)(o + 0x3C) = *(SF3 *)(s + 4);
        *(float *)(o + 0x48) = *(float *)(s + 0x10);
    }
    return ret;
}

char *func_00370240(char *p, float *v, int n, int m) {
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
    *b.pp = func_001B0FD0(a, 0x590, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x590, t);
        if (r != 0) {
            func_003703B0(r);
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
        *(char **)(ret + 0x480) = p;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x490), "r"(v) : "memory");
        *(int *)(ret + 0x57C) = n;
        *(int *)(ret + 0x584) = m;
        *(unsigned char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x578) = 0;
    }
    return ret;
}

char *func_002E9F70(char *p, char *s, unsigned char c, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x110, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x110, t);
        if (r != 0) {
            func_002EA110(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x4, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        func_002E84C0(ret, p);
        o = ret;
        *(unsigned char *)(o + 0x38) = *(unsigned char *)s;
        *(S3 *)(o + 0x39) = *(S3 *)(s + 1);
        *(SF3 *)(o + 0x3C) = *(SF3 *)(s + 4);
        *(float *)(o + 0x48) = *(float *)(s + 0x10);
        *(unsigned char *)(ret + 0x92) = c;
        *(float *)(ret + 0x98) = f;
    }
    return ret;
}

char *func_00456D70(char *p, char *s, unsigned char x, unsigned char y, unsigned char z, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x510, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x510, t);
        if (r != 0) {
            func_00456F20(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o != 0) {
        *(char **)(o + 0x500) = p;
        if (*(char **)(o + 0x500) != 0) {
            *(unsigned char *)(o + 0x3D0) = 1;
        }
        func_00457F00(ret, s);
        *(unsigned char *)(ret + 0x3D1) = y;
        *(unsigned char *)(ret + 0x3D2) = z;
        *(unsigned char *)(ret + 0x3D4) = x;
        *(float *)(ret + 0x3E0) = f;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

char *func_002FF750(short h, char *p, unsigned char c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x6C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x6C0, t);
        if (r != 0) {
            func_002FF910(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        func_002FF9D0(ret);
        *(char **)(ret + 0x3C) = p;
        *(short *)(ret + 0x3A) = h;
        o = ret;
        *(signed char *)(o + 0x39) = *(signed char *)(*(char **)(o + 0x40) + *(short *)(o + 0x3A) * 0xB0);
        if ((unsigned char)func_002FFA10(ret) == 0) {
            func_001AD140(ret);
            return 0;
        }
        *(unsigned char *)(ret + 0x6A4) = c;
        *(unsigned int *)(ret + 0xC) = *(unsigned int *)(ret + 0xC) | 0x40;
    }
    return ret;
}

typedef struct { float f[4]; } SF4;
void func_003D0EA0(char *);
void func_00471520(char *);
void func_003E05E0(char *);
void func_001B1450(char *);
void func_00207410(char *, char *, char *, char *);
void func_00207460(char *, char *, char *);
void func_001B1620(char *, char *);
extern char D_01DF7E20[];
char *func_0013D2A0(char *, char *, int);
void func_0042CB10(char *);
void func_00205D40(char *);
void func_00205DE0(char *, char *);
void func_0040E5E0(char *);

char *func_0046F3A0(char *sc, char *p, unsigned char c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x290, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x290, t);
        if (r != 0) {
            func_0046F580(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x6, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return o;
    }
    *(signed char *)(o + 0x210) = *(signed char *)sc;
    *(SF4 *)(o + 0x220) = *(SF4 *)(sc + 0x10);
    *(short *)(o + 0x230) = *(short *)(sc + 0x20);
    *(unsigned short *)(o + 0x232) = *(unsigned short *)(sc + 0x22);
    *(unsigned short *)(o + 0x234) = *(unsigned short *)(sc + 0x24);
    *(SF4 *)(o + 0x238) = *(SF4 *)(sc + 0x28);
    *(char **)(ret + 0x250) = p;
    *(unsigned char *)(ret + 0x254) = c;
    *(int *)(ret + 0x270) = 0;
    *(int *)(ret + 0x26C) = 0;
    *(int *)(ret + 0x268) = 0;
    *(int *)(ret + 0x264) = 0;
    return ret;
}

char *func_003D0CB0(char *sc, char *pa, char *pb, char *pc, char *pd, char *pe) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xBC0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xBC0, t);
        if (r != 0) {
            func_003D0EA0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o != 0) {
        *(signed char *)(o + 0x150) = *(signed char *)sc;
        *(SF4 *)(o + 0x160) = *(SF4 *)(sc + 0x10);
        *(short *)(o + 0x170) = *(short *)(sc + 0x20);
        *(unsigned short *)(o + 0x172) = *(unsigned short *)(sc + 0x22);
        *(unsigned short *)(o + 0x174) = *(unsigned short *)(sc + 0x24);
        *(SF4 *)(o + 0x178) = *(SF4 *)(sc + 0x28);
        *(char **)(ret + 0x190) = pa;
        *(char **)(ret + 0xD0) = pb;
        *(char **)(ret + 0x194) = pc;
        *(char **)(ret + 0xB84) = pd;
        *(char **)(ret + 0xB88) = pe;
    }
    return ret;
}

char *func_00471330(char *p, float *v, int n, int m, float *w, unsigned char c, float f) {
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
    *b.pp = func_001B0FD0(a, 0x4C0, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x4C0, t);
        if (r != 0) {
            func_00471520(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
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
        *(char **)(ret + 0x464) = p;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(v) : "memory");
        *(float *)(ret + 0x5C) = 1.0f;
        *(int *)(ret + 0x46C) = n;
        *(int *)(ret + 0x468) = m;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x490), "r"(w) : "memory");
        *(float *)(ret + 0x49C) = 1.0f;
        *(float *)(ret + 0x470) = f;
        *(unsigned char *)(ret + 0x4B1) = c;
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

char *func_003E03E0(char *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xC0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xC0, t);
        if (r != 0) {
            func_003E05E0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(unsigned char *)(o + 0x50) = *(unsigned char *)sc;
    *(unsigned char *)(o + 0x51) = *(unsigned char *)(sc + 1);
    *(int *)(o + 0x54) = *(int *)(sc + 4);
    *(SF4 *)(o + 0x58) = *(SF4 *)(sc + 8);
    *(SF4 *)(o + 0x68) = *(SF4 *)(sc + 0x18);
    *(SF4 *)(o + 0x78) = *(SF4 *)(sc + 0x28);
    *(SF4 *)(o + 0x88) = *(SF4 *)(sc + 0x38);
    *(SF4 *)(o + 0xA0) = *(SF4 *)(sc + 0x50);
    *(int *)(o + 0xB0) = *(int *)(sc + 0x60);
    *(int *)(o + 0xB4) = *(int *)(sc + 0x64);
    *(int *)(o + 0xB8) = *(int *)(sc + 0x68);
    return ret;
}

char *func_001B1270(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0x120, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0x120);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0x120, t);
        if (r != 0) {
            func_001B1450(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xA, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        func_001B1620(ret, a2);
    }
    return ret;
}

char *func_0042C9B0(char *p, char *s, int n) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x4C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x4C0, t);
        if (r != 0) {
            func_0042CB10(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x4A0) = p;
        func_00105300((float *)(ret + 0x420), s);
        *(int *)(ret + 0x4B4) = n;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

char *func_00205AC0(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    int i;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0xE0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xE0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xE0, t);
        if (r != 0) {
            func_00205D40(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xB, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        func_00205DE0(ret, a2);
        for (i = 0; i < 8; i++) {
            *(unsigned char *)(ret + i + 0xC4) = 0;
            *(int *)(ret + i * 4 + 0xA4) = 0;
            *(unsigned char *)(ret + i + 0xCC) = 0;
        }
    }
    return ret;
}

typedef struct { int id; unsigned int n; int off[1]; } CT;
void func_0050DCF0(char *);
extern char D_005B8940[];
extern char D_005B8964[];
extern char D_005B89E4[];
void func_00252FA0(char *);
void func_0028C110(char *);
void func_0013D640(char *, char *);
void func_0048E9D0(char *);
extern signed char D_01CAFF3C[];
extern unsigned char D_01CAFF3D[];
extern signed char D_005BDD30[8];
char func_002A67F0(int, int);
extern char D_005B9620[];
extern char D_005B9644[];
extern char D_005B96C4[];
extern char D_005BA990[];
extern char D_005BA9B4[];
extern char D_005BAA34[];
extern char D_005BAAC8[];
void func_0024FE00(char *);
extern char D_005B9410[];
extern char D_005B9434[];
extern char D_005B94B4[];
extern char D_005B9548[];
void func_0030C180(char *);
extern char D_005AB240[];
extern char D_005AB264[];
extern char D_005AB2E4[];
void func_0024F750(char *);
extern char D_00557300[];
extern char D_005B23D0[];
extern char D_005B23F4[];
extern char D_005B2474[];
void func_0027A570();
void func_00330B50(char *, int, char *, int);
int func_0050E800(char *);

static inline char *ent10(CT *t, int i) { char *r; if (t->n < i + 1) { r = 0; } else if (t->off[i] == 0) { r = 0; } else { r = (char *)t + t->off[i]; } return r; }

char *func_0040E2B0(char *p, char *h, short *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x490, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x490, t);
        if (r != 0) {
            func_0040E5E0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(short *)(o + 0xF0) = sc[0];
    *(short *)(o + 0xF2) = sc[1];
    *(short *)(o + 0xF4) = sc[2];
    *(short *)(o + 0xF6) = sc[3];
    *(short *)(o + 0xF8) = sc[4];
    *(SF3 *)(o + 0xFC) = *(SF3 *)((char *)sc + 0xC);
    *(char **)(ret + 0x2F8) = p;
    *(char **)(ret + 0x2FC) = ent10((CT *)h, sc[0] * 10);
    *(char **)(ret + 0x300) = ent10((CT *)h, sc[1] * 10);
    *(char **)(ret + 0x304) = ent10((CT *)h, sc[2] * 10);
    *(char **)(ret + 0x308) = ent10((CT *)h, sc[3] * 10);
    return ret;
}

char *func_0050DB70(char *p0, char *p1, int p2) {
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
    *b.pp = func_001B0FD0(a, 0x4A0, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x4A0, t);
        if (r != 0) {
            func_0050DCF0(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
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
        *(char **)(ret + 0x464) = p0;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        *(float *)(ret + 0x5C) = 1.0f;
        *(int *)(ret + 0x468) = p2;
        *(signed char *)(ret + 0x44) = -1;
        *(signed char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

char *func_004BAD60(char *p0, int p1, short p2, char p3) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x3F0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B8940;
            *(char **)(t + 0x40) = D_005B8964;
            *(char **)(t + 0xA0) = D_005B89E4;
            func_0028C110(t + 0x150);
            *(int *)(t + 0x370) = 0;
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x8, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x378) = p1;
        *(short *)(ret + 0x90) = p2;
        *(char *)(ret + 0x374) = p3;
        *(char **)(ret + 0x3E8) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

char *func_0048EB80(int p0, signed char p1, char p2, char p3) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x4340, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0048E9D0(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(char *)(ret + 0x4302) = p2;
        *(char *)(ret + 0x4303) = p3;
        if (p1 == 0) {
            *(char *)(ret + 0x430F) = func_002A67F0(D_01CAFF3C[0], D_01CAFF3D[0]);
        } else {
            *(signed char *)(ret + 0x430F) = D_005BDD30[p1];
        }
    }
    return ret;
}

char *func_004D86E0(char *p0, float *p1, float *p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x400, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B9620;
            *(char **)(t + 0x40) = D_005B9644;
            *(char **)(t + 0xA0) = D_005B96C4;
            func_0028C110(t + 0x180);
            *(int *)(t + 0x170) = 0;
            *(int *)(t + 0x174) = 0;
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
        r = *b.pp; r[0x18] = 1;
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x150), "r"(p1) : "memory");
        *(float *)(ret + 0x15C) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x160), "r"(p2) : "memory");
        *(float *)(ret + 0x16C) = 1.0f;
        *(char **)(ret + 0x170) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

char *func_004F7680(int p0, int p1, char p2, short p3, float *p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x620, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0024FE00(t);
            *(char **)t = D_005BA990;
            *(char **)(t + 0x40) = D_005BA9B4;
            *(char **)(t + 0xA0) = D_005BAA34;
            *(char **)(t + 0xD0) = D_005BAAC8;
            func_0028C110(t + 0x140);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
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
    if (ret == 0) {
        return 0;
    }
    *(int *)(ret + 0x130) = p0;
    *(char *)(ret + 0x60C) = p2;
    *(short *)(ret + 0x90) = p3;
    *(int *)(ret + 0x608) = p1;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p4) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    *(int *)(ret + 0x610) = 0;
    return ret;
}

char *func_004D6C20(int p0, int p1, char p2, short p3, float *p4, int p5) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x640, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0024FE00(t);
            *(char **)t = D_005B9410;
            *(char **)(t + 0x40) = D_005B9434;
            *(char **)(t + 0xA0) = D_005B94B4;
            *(char **)(t + 0xD0) = D_005B9548;
            func_0028C110(t + 0x140);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
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
    if (ret == 0) {
        return 0;
    }
    *(int *)(ret + 0x130) = p0;
    *(char *)(ret + 0x50C) = p2;
    *(short *)(ret + 0x90) = p3;
    *(int *)(ret + 0x508) = p1;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p4) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    *(int *)(ret + 0x510) = p5;
    return ret;
}

char *func_0030BF70(int p0, int p1, int p2, int p3, int p4, int p5, char p6, char *p7, char p8, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0xBC0, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0030C180(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
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
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0xD4) = p1;
        *(int *)(ret + 0xD8) = p2;
        *(int *)(ret + 0xB9C) = p3;
        *(int *)(ret + 0xBA0) = p4;
        *(int *)(ret + 0xBA4) = p5;
        *(char *)(ret + 0xBA8) = p6;
        *(char *)(ret + 0x45) = 3;
        *(char *)(ret + 0xB98) = p8;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(p7 + 0x20) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xB00), "r"(p7 + 0x30) : "memory");
        *(float *)(ret + 0xE0) = 1.0f;
        *(float *)(ret + 0xE4) = 1.0f;
        *(float *)(ret + 0xE8) = f;
        *(float *)(ret + 0xEC) = 1.0f;
    }
    return ret;
}

char *func_002EE6D0(char *p0) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    char *v;
    char *w;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x360, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0024F750(t);
            *(char **)t = D_005AB240;
            *(char **)(t + 0x40) = D_005AB264;
            *(char **)(t + 0xA0) = D_005AB2E4;
            func_0028C110(t + 0xD0);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
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
    o = ret;
    if (o == 0) {
        return 0;
    }
    func_0028C200(o + 0xD0, o + 0x2F0, o + 0x300, 4, D_00557300, o, 0);
    w = ret; *(char *)(w + 0xD3) = 0xD;
    *(char *)(ret + 0x2F0) = 1;
    *(char *)(ret + 0x2F1) = 0;
    *(short *)(ret + 0x2F2) = 0;
    *(char *)(ret + 0x300) = 2;
    *(int *)(ret + 0x310) = 0;
    *(int *)(ret + 0x314) = 0;
    *(int *)(ret + 0x318) = 0;
    *(float *)(ret + 0x31C) = 1.0f;
    *(float *)(ret + 0x320) = 300.0f;
    func_0028C8E0(ret + 0xD0, 0);
    func_0028C910(ret + 0xD0);
    func_0028C3A0(ret + 0xD0, 0, 3, p0);
    *(float *)(ret + 0x350) = 3.0f;
    if ((v = *(char **)(ret + 0x14C)) != 0) {
        *(int *)(v + 0xC) = 0x140;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0 + 0x30) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    *(int *)(ret + 0xC) |= 0x40;
    return ret;
}

char *func_003FE7C0(char *p) {
    int i;
    char *q;
    func_00252FA0(p);
    *(char **)p = D_005B23D0;
    *(char **)(p + 0x40) = D_005B23F4;
    *(char **)(p + 0xA0) = D_005B2474;
    func_00100450(p + 0x154, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 9);
    func_0027A570(p + 0x280);
    func_0027A570(p + 0x6C0);
    func_0027A570(p + 0xB00);
    func_0028C110(p + 0xF40);
    p[0x1210] = 0;
    p[0x1211] = 0;
    *(short *)(p + 0x1212) = 0;
    *(int *)(p + 0x1218) = 0;
    *(int *)(p + 0x121C) = 0;
    *(int *)(p + 0x1220) = 0;
    *(float *)(p + 0x1230) = 0.0f;
    *(float *)(p + 0x1234) = 0.0f;
    *(float *)(p + 0x1238) = 0.0f;
    *(float *)(p + 0x123C) = 1.0f;
    *(float *)(p + 0x1240) = 100000.0f;
    p[0x1244] = 0;
    p[0x1245] = 0;
    *(short *)(p + 0x1246) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1248) = -1;
    q = p + 0x1260;
    *(float *)(p + 0x1268) = 0.3f;
    *(float *)(p + 0x126C) = 0.98f;
    *(float *)(p + 0x1270) = 0.95f;
    *(float *)(p + 0x1274) = 50.0f;
    *(float *)(p + 0x1280) = 0.0f;
    *(float *)(p + 0x1284) = -0.1f;
    *(float *)(p + 0x1288) = 0.0f;
    *(float *)(p + 0x128C) = 0.0f;
    *(int *)(p + 0x1264) = 0;
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

void func_0050E160(char *p) {
    char *m;
    if ((*(float *)(p + 0x46C) -= *(float *)(p + 0x10)) < 0.0f) {
        p[5] = 2;
        func_00330B50(D_01DFABA0, 0, p + 0x50, 7);
        *(float *)(p + 0x80) = 90.0f;
        if (!(unsigned char)func_0050E800(p)) {
            func_001AD140(p);
            return;
        }
        m = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
        *(float *)(p + 0x50) = (*(float *)m + (float)(unsigned int)(mt_rand() % 700U)) - 350.0f;
        m = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
        *(float *)(p + 0x58) = (*(float *)(m + 8) + (float)(unsigned int)(mt_rand() % 700U)) - 350.0f;
        *(float *)(p + 0x54) = 2000.0f + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
        *(float *)(p + 0x480) = *(float *)(p + 0x50);
        *(float *)(p + 0x484) = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
        *(float *)(p + 0x488) = *(float *)(p + 0x58);
        *(float *)(p + 0x48C) = 1.0f;
        *(float *)(p + 0x46C) = 300.0f;
        *(int *)(p + 0x470) = 0;
    }
}
