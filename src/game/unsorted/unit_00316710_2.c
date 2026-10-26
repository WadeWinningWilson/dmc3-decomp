#include "game/mt_rand.h"
void func_003172E0(char *, short *, short *);

void func_0034B8C0(short *, short *, int);

void func_003176C0(char *, char *, char *);

int func_00317A30(char *p) {
    void func_00316F30(char *, float *, int);
    int func_00317740(char *, int);
    float v[4] __attribute__((aligned(16)));
    short t;
    short d;
    short spd;
    t = 0;
    d = 0;
    spd = 0;
    func_00316F30(p, v, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x190), "r"(v) : "memory");
    *(float *)(p + 0x238) = 700.0f;
    func_003172E0(p, &d, &spd);
    t = 0x1555 - *(short *)(p + 0x248);
    if (*(unsigned char *)(p + 0x2B6) == 0) {
        func_0034B8C0((short *)(p + 0x248), &t, 0x12);
        *(float *)(p + 0x210) = 6.2831850051879883f * (*(short *)(p + 0x248) / 65536.0f);
    }
    func_0034B8C0((short *)(p + 0x24A), &d, spd);
    *(float *)(p + 0x214) = 6.2831850051879883f * (*(short *)(p + 0x24A) / 65536.0f);
    func_003176C0(p, p + 0x1A0, p + 0x190);
    return func_00317740(p, 0);
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

short func_0034B940(char *, char *);

extern char D_01CAFF0C[];

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern signed char D_005BE11C;

extern char *D_005BE190;

void func_004FE7A0(char *);

void func_0041E1F0(float *, float *, float, float);

#define VADDY(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(y), "r"(x) : "memory")

void func_00316D80(char *p) {
    void func_00316F30();
    void func_002018A0(char *, char *, char *, char *, char *, int);
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

void func_00317850(char *p) {
    void func_00316F30(char *, float *, int);
    int func_002018A0(char *, char *, char *, char *, char *, int);
    void func_00317740(char *, int);
    short a;
    short b;
    short c;
    float pos[4];
    char buf[0x40];
    a = 0;
    b = 0;
    c = 0;
    func_00316F30(p, pos, 0);
    QCOPY(p + 0x190, pos);
    *(float *)(p + 0x238) = 400.0f;
    func_003172E0(p, &b, &c);
    a = 0x38E - *(short *)(p + 0x248);
    if (*(unsigned char *)(p + 0x2B6) == 0) {
        func_0034B8C0((short *)(p + 0x248), &a, 0x12);
        *(float *)(p + 0x210) = 6.2831850f * ((float)*(short *)(p + 0x248) / 65536.0f);
    }
    func_0034B8C0((short *)(p + 0x24A), &b, c);
    *(float *)(p + 0x214) = 6.2831850f * ((float)*(short *)(p + 0x24A) / 65536.0f);
    func_003176C0(p, p + 0x1A0, p + 0x190);
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x190, p + 0x1A0, p + 0x1A0, buf, 8) == 1) {
        *(float *)(p + 0x224) = *(float *)(p + 0x224) + 3.0f;
        if (!(*(float *)(p + 0x224) <= 40.0f)) {
            *(float *)(p + 0x224) = 40.0f;
        }
    } else {
        *(float *)(p + 0x224) = *(float *)(p + 0x224) - 3.0f;
        if (*(float *)(p + 0x224) < 0.0f) {
            *(float *)(p + 0x224) = 0.0f;
        }
    }
    *(float *)(p + 0x194) = *(float *)(p + 0x194) + *(float *)(p + 0x224);
    *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) + *(float *)(p + 0x224);
    func_00317740(p, 0);
}

void func_0031AE00(char *p);

void func_0031AF50(char *p);

void func_00319D50(char *p);

void func_00319F10(char *p);

void func_0031A0D0(char *p);

void func_0031A290(char *p);

void func_0031A4C0(char *p);

void func_00319B90(char *);

void func_00319C70(char *);

void func_0031A720(char *);

void func_0031AAC0(char *);

void func_003198F0(char *p, signed char a) {
    switch (*(unsigned char *)(p + 0x2998)) {
    case 0:
        break;
    case 1: case 10:
        switch (a) {
        case 0:
            break;
        case 1:
            func_00319B90(p);
            break;
        }
        break;
    case 2: case 11:
        switch (a) {
        case 0:
            break;
        case 1:
            func_00319C70(p);
            break;
        }
        break;
    case 3: case 12:
        switch (a) {
        case 0:
            break;
        case 1:
            func_00319D50(p);
            break;
        }
        break;
    case 4:
        switch (a) {
        case 0:
            break;
        case 1:
            func_00319F10(p);
            break;
        }
        break;
    case 5:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031A0D0(p);
            break;
        }
        break;
    case 6:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031A290(p);
            break;
        }
        break;
    case 7:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031A4C0(p);
            break;
        }
        break;
    case 8:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031A720(p);
            break;
        }
        break;
    case 9:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031AAC0(p);
            break;
        }
        break;
    case 13:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031AE00(p);
            break;
        }
        break;
    case 14:
        switch (a) {
        case 0:
            break;
        case 1:
            func_0031AF50(p);
            break;
        }
        break;
    }
}

int func_00316730();

int func_003169D0(p0) int p0; {
    int tmp0;
    tmp0 = func_00316730();
    *(char *)((char *)p0 + 4436) = 1;
    return tmp0;
}

extern void func_0031B470();

void func_0031B720(char *p) { func_0031B470(p + -64); }

void func_0031B730(char *p) { func_0031B470(p + -160); }

void func_0031B740(char *p) { func_0031B470(p + -208); }
