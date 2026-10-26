#include "game/mt_rand.h"
extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005A77A0[];

extern char D_005AE660[];

extern char D_005AE684[];

extern char D_005AE704[];

extern char D_005AE798[];

extern char D_005AE864[];

extern char D_005AE91C[];

extern char D_005B0890[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0027A660();

void func_0028C1A0();

void func_002E8A50();

void func_00313E60();

void func_0031E440();

void func_00320590();

char *func_00377990(char *p, short flag) {
    void func_003829B0();
    if (p != 0) {
        *(char **)p = D_005AE660;
        *(char **)(p + 64) = D_005AE684;
        *(char **)(p + 160) = D_005AE704;
        *(char **)(p + 208) = D_005AE798;
        *(char **)(p + 304) = D_005AE864;
        *(char **)(p + 464) = D_005AE91C;
        if ((p + 30336) != 0) {
                if (p + 30560 != 0) {
                *(char **)(p + 30560) = D_005A7780;
                if (p + 30560 != 0) {
                    *(char **)(p + 30560) = D_005A7790;
                }
            }
        }
        func_00313E60((p + 30192), -1);
        func_0028C1A0((p + 29648), -1);
        func_002E8A50((p + 29260), -1);
        func_003829B0((p + 29184), -1);
        func_0028C1A0((p + 28384), -1);
        func_0024D9A0((p + 28016), -1);
        if (p + 27920 != 0) {
            *(char **)(p + 27936) = D_005B0890;
            if (p + 27920 != 0) {
                *(char **)(p + 27936) = D_005A77A0;
            }
        }
        func_001003E0((p + 3776), (void *)func_0027A660, 1088, 20);
        func_002791E0((p + 2240), -1);
        func_001003E0((p + 472), (void *)func_0013D240, 16, 78);
        func_0031E440((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

typedef struct Blk40 {
    float a[4];
    float v[4];
    float b[4];
    float pos[4];
} Blk40;

typedef struct O37E1 {
    char pad0[0x69F8];
    char *arr[10];
    Blk40 blk[17];
    char pad1[0x6E78 - 0x6A20 - 17 * 0x40];
    int n;
    char pad2[0x6F5C - 0x6E7C];
    char *obj[10];
    char pad3[0x7805 - 0x6F84];
    unsigned char flag;
} O37E1;

void func_0037E150(O37E1 *p) {
    void func_00105300(float *, char *);
    char *o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    int i;
    p->flag = 0;
    for (i = 0; i < p->n; i++) {
        func_00105300(p->blk[i].a, p->arr[i] + 0x1240);
        if (p->obj[i] != 0 && (*(int *)(p->obj[i] + 8) & 0x1000) &&
            !(*(float *)(o + 0x54) <= p->blk[i].pos[1])) {
            p->flag = 1;
            p->blk[i].pos[0] += 25.0f * p->blk[i].v[0];
            p->blk[i].pos[1] += 25.0f * p->blk[i].v[1];
            p->blk[i].pos[2] += 25.0f * p->blk[i].v[2];
        }
    }
}

typedef struct EffIds { int id[3][4]; } EffIds;

typedef struct EffPer { int n[3]; } EffPer;

extern EffIds D_00562B30;

extern EffPer D_00562B60;

/* Every few frames (period by mode) fires a random effect on two parts, cycling the parts. */
void func_0037C550(char *p, int mode) {
    void func_0034BA60(int, char *, signed char, int, int);
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

int func_0037BB70(char *p, char *o) {
    void func_001AD140(char *);
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

extern char D_01CAFF0C[];

extern char *D_00567300[];

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

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0022C820(char *);

extern char D_005AE340[];

extern char D_005AE364[];

extern char D_005AE3E4[];

extern char D_005AE478[];

extern char D_005AE544[];

extern char D_005AE5FC[];

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

void func_0027A570();

void func_0024D930(char *);

void func_00277D30(char *);

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

void func_0037B280(char *);

void func_0037B560(char *);

void func_0037B8C0(char *);

void func_0037B210(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0037B280(p);
        break;
    case 1:
        func_0037B560(p);
        break;
    case 2:
        func_0037B8C0(p);
        break;
    }
}

void func_0037E850(char *, int);

void func_0037CCE0(char *p, int k) {
    void func_0034BA60(int, char *, int, int, int);
    void func_0037D030(char *, int);
    switch (k) {
    case 14:
        func_0037E850(p, 4);
        func_0034BA60(0x20, p + 0x6F0, 0x29, 0, 1);
        break;
    default:
        func_0037D030(p, *(int *)(*(char **)(p + 0x782C) + 0x10));
        break;
    }
}

void func_00278060(char *p, char *q);

void func_00104B80(char *, char *, char *);

void func_00277DE0(char *p, char *s, char *x, int flag);

extern int D_01CAFF14[];

int func_00277EF0(char *, float);

extern char D_00568430[];

void func_00277E70(char *);

void func_00277ED0(char *);

void func_0037E010(char *p) {
    char *m = p + 0x7770;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    *(float *)(p + 0x77A0) = 0.0f;
    *(float *)(p + 0x77A4) = -28.0f;
    *(float *)(p + 0x77A8) = 351.0f;
    *(float *)(p + 0x77AC) = 1.0f;
    func_00104B80(p + 0x77A0, *(char **)(*(char **)(p + 0x774) + 0x104), p + 0x77A0);
    if ((unsigned char)func_00277EF0(p + 0x7680, *(float *)(p + 0x10)) == 1) {
        func_00278060(p + 0x7680, ((char **)D_01CAFF14)[0]);
    } else {
        func_00277DE0(p + 0x7680, D_00568430, p + 0x7770, 1);
        *(float *)(p + 0x76AC) = *(float *)(p + 0x77B0);
        *(float *)(p + 0x76CC) = *(float *)(p + 0x77B0);
        *(float *)(p + 0x76B0) = *(float *)(p + 0x77B4);
        *(float *)(p + 0x76D0) = *(float *)(p + 0x77B4);
        *(short *)(p + 0x76B4) = *(unsigned short *)(p + 0x77B8);
        *(short *)(p + 0x76B6) = *(unsigned short *)(p + 0x77BA);
        *(short *)(p + 0x76B8) = *(unsigned short *)(p + 0x77BC);
        *(short *)(p + 0x76D4) = *(unsigned short *)(p + 0x77B8);
        *(short *)(p + 0x76D6) = *(unsigned short *)(p + 0x77BA);
        *(short *)(p + 0x76D8) = *(unsigned short *)(p + 0x77BC);
        func_00277E70(p + 0x7680);
        func_00277ED0(p + 0x7680);
        func_00278060(p + 0x7680, ((char **)D_01CAFF14)[0]);
    }
}

void func_00206730(char *);

void func_002EC050(int, char *, float);

void func_0037B9C0(char *);

void func_0037D300(char *, int);

void func_0037CDC0(char *p) {
    void func_001AD140(char *);
    void func_00105300(char *, char *);
    void func_0034BA60(int, char *, int, int, int);
    void func_0037B920(char *);
    int i;
    func_0034BA60(0x50, p + 0x50, 0x29, 0, 1);
    func_0037B9C0(p);
    if (*(unsigned char *)(p + 5) == 0) {
        while (*(float *)(p + 0x77E8) <= 225.0f) {
            *(float *)(p + 0x77E8) = *(float *)(p + 0x77E8) + *(float *)(p + 0x10);
            func_0037D300(p, 0);
        }
        func_00105300(p + 0x6C0, p + 0x66F0);
        *(float *)(p + 0x77E8) = 0.0f;
        *(float *)(p + 0x50) = *(float *)(p + 0x6F0);
        *(float *)(p + 0x54) = 50.0f;
        *(float *)(p + 0x58) = *(float *)(p + 0x6F8);
        func_0037B920(p);
        for (i = 1; i < *(int *)(p + 0x6E78); i++) {
            func_002EC050(3, p + *(short *)(*(char **)(p + i * 4 + 0x69F8) + 0xB92) * 64 + 0x66E0, 100.0f);
        }
        for (i = 0; i < *(int *)(p + 0x6E78); i++) {
            if (*(char **)(p + i * 4 + 0x69F8) != 0) func_001AD140(*(char **)(p + i * 4 + 0x69F8));
        }
        func_001AD140(p);
        return;
    }
    if (*(int *)(p + 0x78E0) < 10) {
        for (i = 0; i < *(int *)(p + 0x78E0); i++) {
            func_00206730(p + i * 4 + 0x6640);
            if (*(char **)(p + i * 4 + 0x6640) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6640));
            func_00206730(p + i * 4 + 0x6640);
        }
    } else {
        for (i = 0; i < 10; i++) {
            func_00206730(p + i * 4 + 0x6640);
            if (*(char **)(p + i * 4 + 0x6640) != 0) func_001AD140(*(char **)(p + i * 4 + 0x6640));
            func_00206730(p + i * 4 + 0x6640);
        }
    }
    func_0037B920(p);
    func_001AD140(p);
}

void func_002F2D30(char *, char *);

void func_0037D240(char *p) {
    void func_001AD140(char *);
    int i;
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
    if (*(char **)(p + 0x7814) != 0) {
        func_001AD140(*(char **)(p + 0x7814));
    }
    func_0037B9C0(p);
    for (i = 1; i < *(int *)(p + 0x6E80); i++) {
        if (*(char **)(p + i * 4 + 0x6640) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x6640));
        }
    }
}

void func_0037D000(int p0) {
    void func_001AD140();
    void func_0037B920();
    func_0037B920();
    func_001AD140(p0);
}

void func_001A1E10();

int func_00279290();

void func_00380F40(char *p0) {
    int t0;
    *(char *)(p0 + 5) = 3;
    t0 = func_00279290((p0 + 832));
    func_001A1E10(t0);
}

void func_00382AA0(char **h) {
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

void func_00382AF0(char **h) {
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

void func_00382B40(char **h) {
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

void func_00382B90(char **h) {
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

void func_00382BE0(char **h) {
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

void func_00382A50(char *h) {
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

int func_0037BC00(char *p, char *o) {
    void func_001AD140(char *);
    char *e;
    int i;
    int n;
    n = *(int *)(p + 0x6E58);
    if (*(int *)(p + 0x6E48) < n) {
        i = 0;
        if (0 < n) {
            e = p;
            do {
                if (*(int *)(e + 0x6C60) == 0) {
                    *(int *)(p + 0x6E48) += 1;
                    ((char **)(p + 0x6C60))[i] = o;
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

int func_0037BC90(char *p, char *o) {
    void func_001AD140(char *);
    char *e;
    int i;
    int n;
    n = *(int *)(p + 0x6E5C);
    if (*(int *)(p + 0x6E4C) < n) {
        i = 0;
        if (0 < n) {
            e = p;
            do {
                if (*(int *)(e + 0x6C80) == 0) {
                    *(int *)(p + 0x6E4C) += 1;
                    ((char **)(p + 0x6C80))[i] = o;
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

int func_0037BD20(char *p, char *o) {
    void func_001AD140(char *);
    char *e;
    int i;
    int n;
    n = *(int *)(p + 0x6E60);
    if (*(int *)(p + 0x6E50) < n) {
        i = 0;
        if (0 < n) {
            e = p;
            do {
                if (*(int *)(e + 0x6CA0) == 0) {
                    *(int *)(p + 0x6E50) += 1;
                    ((char **)(p + 0x6CA0))[i] = o;
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

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_0031DD00();

char *func_0037F260(char *p, short flag) {
    void func_003829B0();
    if (p != 0) {
        *(char * *)(p) = D_005AE340;
        *(char * *)(p + 64) = D_005AE364;
        *(char * *)(p + 160) = D_005AE3E4;
        *(char * *)(p + 208) = D_005AE478;
        *(char * *)(p + 304) = D_005AE544;
        *(char * *)(p + 464) = D_005AE5FC;
        func_00313E60(p + 4976, -1);
        func_001003E0(p + 3984, (void *)func_00204C70, 160, 3);
        if (p + 3888 != 0) {
            *(char * *)(p + 3904) = D_005B0890;
            if (p + 3888 != 0) {
                *(char * *)(p + 3904) = D_005A77A0;
            }
        }
        func_0028C1A0(p + 3344, -1);
        func_002E8A50(p + 3148, -1);
        func_003829B0(p + 3072, -1);
        func_001003E0(p + 2576, (void *)func_00204A70, 192, 2);
        func_0031DD00(p + 2368, -1);
        func_002791E0(p + 832, -1);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 16);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0037C1A0(p0) char *p0; {
    char *v0;
    v0 = *(char **)(*(char **)D_01CAFF0C + 12);
    *(int *)(p0 + 30760) = (*(int *)(p0 + 30760) + 88);
    if (v0 != 0) {
        if (*(float *)(v0 + 84) < 900.0f) {
            *(int *)(p0 + 30764) = (*(int *)(p0 + 30760) + 44);
        } else {
            *(int *)(p0 + 30764) = *(int *)(p0 + 30760);
        }
    } else {
        *(int *)(p0 + 30764) = (*(int *)(p0 + 30760) + 44);
    }
    *(int *)(p0 + 30752) = (*(int *)(p0 + 30752) + 2);
    *(char *)(p0 + 30768) = 0;
    *(char *)(p0 + 30769) = 0;
    *(char *)(p0 + 30770) = 0;
    *(char *)(p0 + 30771) = 0;
    return (~*(int *)(*(char **)(p0 + 30760) + 0) != 0);
}

void func_0037CD50(p0) char *p0; {
    void func_0037D030();
    func_0037D030(p0, *(int *)(*(char **)(p0 + 30764) + 24));
}

void func_0037CD60(p0) char *p0; {
    void func_0037D030();
    func_0037D030(p0, *(int *)(*(char **)(p0 + 30764) + 32));
}

void func_0037CD70(p0) char *p0; {
    void func_0037D030();
    func_0037D030(p0, *(int *)(*(char **)(p0 + 30764) + 40));
}

int func_0037F060(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 1904);
}

void func_00381C50(p0, p1) char *p0; char *p1; {
    *(float *)(*(char **)(p0 + 2964) + 30744) = *(float *)(p1 + 44);
}

void func_00381E60(p0) char *p0; {
    char stk[0x10] __attribute__((aligned(16)));
    char *tmp0;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 3808)), "r"(((stk + 0) + 0)) : "memory");
    tmp0 = (p0 + 4720);
    p0 = (p0 + 4720);
    *(float *)((stk + 0) + 12) = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + 0) + 0)), "r"(p0), "r"(tmp0) : "memory");
}

int func_00382940(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 2512);
}

void func_00382950(p0, p1) char *p0; char *p1; {
    *(float *)(p1 + 0) = *(float *)(*(char **)(p0 + 2964) + 30656);
}

void func_00382960(p0, p1) char *p0; char *p1; {
    *(float *)(p1 + 0) = *(float *)(*(char **)(p0 + 2964) + 29328);
}

void func_0037B9B0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_0024DD30();

void func_0037E8A0(char *p) { func_0024DD30(p + 28016); }

void func_00380310(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_00378230();

void func_00382C30(char *p) { func_00378230(p + -64); }

extern void func_0037F080();

void func_00382C40(char *p) { func_0037F080(p + -64); }

extern void func_0037F070();

void func_00382C50(char *p) { func_0037F070(p + -64); }

extern void func_0037EED0();

void func_00382C60(char *p) { func_0037EED0(p + -64); }

extern void func_0037EEC0();

void func_00382C70(char *p) { func_0037EEC0(p + -64); }

extern void func_0037ED30();

void func_00382C80(char *p) { func_0037ED30(p + -64); }

extern void func_0037EE90();

void func_00382C90(char *p) { func_0037EE90(p + -64); }

extern void func_0037EE80();

void func_00382CA0(char *p) { func_0037EE80(p + -64); }

extern void func_0037EE70();

void func_00382CB0(char *p) { func_0037EE70(p + -64); }

extern void func_0037ED20();

void func_00382CC0(char *p) { func_0037ED20(p + -64); }

extern void func_0037EDA0();

void func_00382CD0(char *p) { func_0037EDA0(p + -64); }

extern void func_0037ED40();

void func_00382CE0(char *p) { func_0037ED40(p + -64); }

extern void func_0037EEE0();

void func_00382CF0(char *p) { func_0037EEE0(p + -64); }

extern void func_0037EEB0();

void func_00382D00(char *p) { func_0037EEB0(p + -64); }

extern void func_0037ED10();

void func_00382D10(char *p) { func_0037ED10(p + -64); }

extern void func_0037EEA0();

void func_00382D20(char *p) { func_0037EEA0(p + -64); }

extern void func_0037C8A0();

void func_00382D30(char *p) { func_0037C8A0(p + -64); }

extern void func_0037EAC0();

void func_00382D70(char *p) { func_0037EAC0(p + -304); }

extern void func_0037CB80();

void func_00382D80(char *p) { func_0037CB80(p + -304); }

void func_00382D90(char *p) { func_0037ED30(p + -304); }

void func_00382DA0(char *p) { func_0037EE90(p + -304); }

void func_00382DB0(char *p) { func_0037EE80(p + -304); }

void func_00382DC0(char *p) { func_0037EE70(p + -304); }

void func_00382DD0(char *p) { func_0037ED20(p + -304); }

void func_00382DE0(char *p) { func_0037EDA0(p + -304); }

void func_00382DF0(char *p) { func_0037ED40(p + -304); }

void func_00382E00(char *p) { func_0037EEE0(p + -304); }

void func_00382E10(char *p) { func_0037EEB0(p + -304); }

void func_00382E20(char *p) { func_0037ED10(p + -304); }

void func_00382E30(char *p) { func_0037EEA0(p + -304); }

extern void func_0037E9F0();

void func_00382E40(char *p) { func_0037E9F0(p + -304); }

extern void func_0037ED00();

void func_00382E60(char *p) { func_0037ED00(p + -464); }

extern void func_0037ECF0();

void func_00382E70(char *p) { func_0037ECF0(p + -464); }

extern void func_0037ECE0();

void func_00382E80(char *p) { func_0037ECE0(p + -464); }

extern void func_0037ECD0();

void func_00382E90(char *p) { func_0037ECD0(p + -464); }

extern void func_0037ECC0();

void func_00382EA0(char *p) { func_0037ECC0(p + -464); }

extern void func_0037ECB0();

void func_00382EB0(char *p) { func_0037ECB0(p + -464); }

extern void func_0037EC90();

void func_00382EC0(char *p) { func_0037EC90(p + -464); }

extern void func_0037EB00();

void func_00382ED0(char *p) { func_0037EB00(p + -464); }

extern void func_0037F820();

void func_00382EF0(char *p) { func_0037F820(p + -64); }

extern void func_00381C40();

void func_00382F20(char *p) { func_00381C40(p + -64); }

extern void func_00381C30();

void func_00382F30(char *p) { func_00381C30(p + -64); }

extern void func_00381B50();

void func_00382F40(char *p) { func_00381B50(p + -64); }

extern void func_00381C00();

void func_00382F50(char *p) { func_00381C00(p + -64); }

extern void func_00381BF0();

void func_00382F60(char *p) { func_00381BF0(p + -64); }

extern void func_00381BE0();

void func_00382F70(char *p) { func_00381BE0(p + -64); }

extern void func_00381B20();

void func_00382F80(char *p) { func_00381B20(p + -64); }

extern void func_00381BB0();

void func_00382F90(char *p) { func_00381BB0(p + -64); }

extern void func_00381B60();

void func_00382FA0(char *p) { func_00381B60(p + -64); }

extern void func_00381C60();

void func_00382FB0(char *p) { func_00381C60(p + -64); }

extern void func_00381C20();

void func_00382FC0(char *p) { func_00381C20(p + -64); }

extern void func_00381B10();

void func_00382FD0(char *p) { func_00381B10(p + -64); }

extern void func_00382A40();

void func_00382FE0(char *p) { func_00382A40(p + -64); }

extern void func_00381C10();

void func_00382FF0(char *p) { func_00381C10(p + -64); }

extern void func_003813F0();

void func_00383000(char *p) { func_003813F0(p + -64); }

extern void func_00381A50();

void func_00383040(char *p) { func_00381A50(p + -304); }

void func_00383060(char *p) { func_00381B50(p + -304); }

void func_00383070(char *p) { func_00381C00(p + -304); }

void func_00383080(char *p) { func_00381BF0(p + -304); }

void func_00383090(char *p) { func_00381BE0(p + -304); }

void func_003830A0(char *p) { func_00381B20(p + -304); }

void func_003830B0(char *p) { func_00381BB0(p + -304); }

void func_003830C0(char *p) { func_00381B60(p + -304); }

void func_003830D0(char *p) { func_00381C60(p + -304); }

void func_003830E0(char *p) { func_00381C20(p + -304); }

void func_003830F0(char *p) { func_00381B10(p + -304); }

void func_00383100(char *p) { func_00381C10(p + -304); }

extern void func_00381A40();

void func_00383110(char *p) { func_00381A40(p + -304); }

extern void func_00381B00();

void func_00383130(char *p) { func_00381B00(p + -464); }

extern void func_00381AF0();

void func_00383140(char *p) { func_00381AF0(p + -464); }

extern void func_00381AE0();

void func_00383150(char *p) { func_00381AE0(p + -464); }

extern void func_00381AD0();

void func_00383160(char *p) { func_00381AD0(p + -464); }

extern void func_00381AC0();

void func_00383170(char *p) { func_00381AC0(p + -464); }

extern void func_00381AB0();

void func_00383180(char *p) { func_00381AB0(p + -464); }

extern void func_00381AA0();

void func_00383190(char *p) { func_00381AA0(p + -464); }

extern void func_00381A90();

void func_003831A0(char *p) { func_00381A90(p + -464); }

void func_003831C0(char *p) {
    extern void func_003829B0(); func_003829B0(p + -4); }

void func_003825A0(void) {}

void func_003825B0(void) {}

void func_00382A30(void) {}

extern char D_005678BC[];

float func_0037BDB0(char *p0) {
    float t0;
    t0 = *(float *)D_005678BC;
    *(float *)(p0 + 30660) = *(float *)D_005678BC;
    return t0;
}

float func_0037BDC0(char *p0) {
    float t0;
    t0 = *(float *)(p0 + 29456);
    *(float *)(p0 + 30656) = *(float *)(p0 + 29456);
    return t0;
}

void func_0037EAD0(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)(p0 + 30216) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)(p0 + 30228) = 1;
    *(char *)(p0 + 30229) = 0;
    *(char *)(p0 + 30230) = 0;
    *(char *)(p0 + 30231) = 0;
    *(char *)(p0 + 30232) = 0;
}

void func_00381A60(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)(p0 + 5176) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)(p0 + 5188) = 1;
    *(char *)(p0 + 5189) = 0;
    *(char *)(p0 + 5190) = 0;
    *(char *)(p0 + 5191) = 0;
    *(char *)(p0 + 5192) = 0;
}

void func_00382A20(char *p0, int p1, int p2) {
    *(int *)(p0 + 68) = p1;
    *(int *)(p0 + 72) = p2;
}
