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
