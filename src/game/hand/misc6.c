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
void func_002282B0(char *);
int func_0040F1B0(char *);
void func_00105760(float *, float *, float);

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
    func_002282B0(p + 0x428);
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
