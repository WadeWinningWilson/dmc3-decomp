#include "game/mt_rand.h"
/* A coin flip. */
void func_003A5C70(unsigned char *p) {
    p[0x4E1F] = mt_rand() & 1;
}

extern float D_00568C80[];

extern float D_00568C84[];

void func_003AAAD0(char *, int, int);

void func_003ABE80(char *, int);

void func_003AA990(char *p, signed char k) {
    *(signed char *)(p + 0x4BE6) = *(signed char *)(p + 0x4BE5);
    *(signed char *)(p + 0x4BE5) = *(signed char *)(p + 0x4BE4);
    *(signed char *)(p + 0x4BE4) = k;
    *(unsigned char *)(p + 0x4E14) = 0;
    func_003AAAD0(p, 0, *(unsigned char *)(p + 0x4BE4));
    *(unsigned char *)(p + 6) = 0;
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 12:
        *(unsigned char *)(p + 0x4E14) = 1;
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38:
        break;
    }
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 33: case 34: case 35: case 36: case 37: case 38:
        func_003ABE80(p, 1);
        break;
    case 12: case 13: case 14: case 15: case 32:
        func_003ABE80(p, 0);
        break;
    }
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 36: case 37: case 38:
        D_00568C80[0] = 70.0f;
        D_00568C84[0] = 60.0f;
        break;
    case 35:
        *(float *)(p + 0x50D8) = 350.0f;
        *(float *)(p + 0x50DC) = 300.0f;
        D_00568C80[0] = 350.0f;
        D_00568C84[0] = 300.0f;
        break;
    }
    *(unsigned char *)(p + 0x5164) = 0;
}

unsigned char func_003AC6C0(char *);

int func_003AC730(char *p) {
    return func_003AC6C0(p) == 0 ? 2 : 0;
}

unsigned char func_003AC650(char *p) {
    unsigned char r = 0;
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 7:
    case 8:
    case 9:
    case 0x1B:
    case 0x21:
    case 0x22:
        r = 1;
        break;
    }
    return r;
}

void func_003BA860(char *);

static inline unsigned char eqb(unsigned char a, unsigned char b) {
    return a == b;
}

void func_003AB550(char *p) {
    int i;
    for (i = 0; i < 16; i++) {
        if (*(unsigned char *)(p + i + 0x4DF0) == 1 && eqb(*(unsigned char *)(*(char **)(p + i * 4 + 0x4DB0) + 0x1B5), 0) == 1) {
            func_003BA860(*(char **)(p + i * 4 + 0x4DB0));
        }
    }
}

float func_0034C160(float, float, float);

extern char D_01CAFF0C[];

void func_00131650(char *, char *);

extern float D_00569404[];

extern float D_00569408[];

extern float D_0056940C[];

void func_003A53F0(char *p, unsigned char k) {
    float tmp[4] __attribute__((aligned(16)));
    float t;
    float d;
    float *dst;
    float *src;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x4DA0), "r"(p + 0x50), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    *(float *)(p + 0x4DA4) = 0.0f;
    func_00131650(p + 0x4DA0, p + 0x4DA0);
    *(float *)(p + 0x4DAC) = 1.0f;
    if (k == 0) {
        *(float *)(p + 0x4D94) = func_0034C160(*(float *)(p + 0x4D94), D_0056940C[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4], *(float *)(p + 0x10) * D_00569408[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]);
    } else {
        *(float *)(p + 0x4D94) = *(float *)(p + 0x4D94) * (0.98f * *(float *)(p + 0x10));
    }
    t = *(float *)(p + 0x4D94) * *(float *)(p + 0x4D94);
    d = *(float *)(p + 0x4E20) - D_00569404[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4];
    if (!(d <= 0.0f)) {
        if (d < t) {
            t = d;
            *(unsigned char *)(p + 0x4E15) = 1;
        }
    } else {
        t = 0.0f;
        *(unsigned char *)(p + 0x4E15) = 1;
    }
    src = (float *)(p + 0x4DA0);
    dst = tmp;
    asm {
        lqc2 vf4, 0x0(src)
        mfc1 t0, t
        nop
        qmtc2.ni t0, vf5
        vmulx.xyzw vf6, vf4, vf5x
        sqc2 vf6, 0x0(dst)
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
}

void func_00104B80(char *, char *, char *);

void func_00131700(char *, char *, char *);

short func_0034B940(char *, char *);

extern float D_005695B8[];

extern float D_005695BC[];

void func_003A5D20(char *p, unsigned char k) {
    float out[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    float t;
    if (*(float *)(p + 0x4E20) < 200.0f) {
        k = 1;
    }
    s = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    if (*(unsigned char *)(p + 0x4E1F) != 0) {
        s = s - 0x4000;
    } else {
        s = s + 0x4000;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)s / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700((char *)m, (char *)m, (char *)r);
    if (k == 0) {
        t = func_0034C160(*(float *)(p + 0x4D94), D_005695BC[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4], *(float *)(p + 0x10) * D_005695B8[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]);
        *(float *)(p + 0x4D94) = t;
        t = t * t;
    } else {
        t = *(float *)(p + 0x4D94) * (0.98f * *(float *)(p + 0x10));
        *(float *)(p + 0x4D94) = t;
    }
    u[2] = t;
    u[3] = 1.0f;
    u[0] = 0.0f;
    u[1] = 0.0f;
    func_00104B80((char *)out, (char *)m, (char *)u);
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + out[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + out[2] * *(float *)(p + 0x10);
}

extern float D_00569644[];

extern float D_00569648[];

extern float D_0056964C[];

void func_003A60E0(char *p, unsigned char k) {
    float out[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    float t;
    float v;
    float d;
    if (*(float *)(p + 0x4E20) < 200.0f) {
        k = 1;
    }
    s = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    if (*(unsigned char *)(p + 0x4E1F) != 0) {
        s = s - 0x3555;
    } else {
        s = s + 0x3555;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)s / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700((char *)m, (char *)m, (char *)r);
    if (k == 0) {
        v = func_0034C160(*(float *)(p + 0x4D94), D_0056964C[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4], *(float *)(p + 0x10) * D_00569648[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]);
        t = v * v;
        *(float *)(p + 0x4D94) = v;
    } else {
        t = *(float *)(p + 0x4D94) * (0.98f * *(float *)(p + 0x10));
        *(float *)(p + 0x4D94) = t;
    }
    d = *(float *)(p + 0x4E20) - D_00569644[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4];
    if (!(d <= 0.0f)) {
        if (d < t) {
            t = d;
            *(unsigned char *)(p + 0x4E15) = 1;
        }
    } else {
        t = 0.0f;
        *(unsigned char *)(p + 0x4E15) = 1;
    }
    u[2] = t;
    u[3] = 1.0f;
    u[0] = 0.0f;
    u[1] = 0.0f;
    func_00104B80((char *)out, (char *)m, (char *)u);
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + out[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + out[2] * *(float *)(p + 0x10);
}

extern float D_005696D4[];

extern float D_005696D8[];

extern float D_005696DC[];

void func_003A6510(char *p, unsigned char k) {
    float out[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    float t;
    float v;
    float d;
    s = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    if (*(unsigned char *)(p + 0x4E1F) != 0) {
        s = s - 0x8000 - 0x3556;
    } else {
        s = s + 0x7FFF + 0x3557;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)s / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700((char *)m, (char *)m, (char *)r);
    if (k == 0) {
        v = func_0034C160(*(float *)(p + 0x4D94), D_005696DC[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4], *(float *)(p + 0x10) * D_005696D8[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]);
        t = v * v;
        *(float *)(p + 0x4D94) = v;
    } else {
        t = *(float *)(p + 0x4D94) * (0.98f * *(float *)(p + 0x10));
        *(float *)(p + 0x4D94) = t;
    }
    d = D_005696D4[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4] - *(float *)(p + 0x4E20);
    if (!(d <= 0.0f)) {
        if (d < t) {
            t = d;
            *(unsigned char *)(p + 0x4E15) = 1;
        }
    } else {
        t = 0.0f;
        *(unsigned char *)(p + 0x4E15) = 1;
    }
    u[2] = t;
    u[3] = 1.0f;
    u[0] = 0.0f;
    u[1] = 0.0f;
    func_00104B80((char *)out, (char *)m, (char *)u);
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + out[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + out[2] * *(float *)(p + 0x10);
}

int func_003AC760(char *p) {
    return func_003AC6C0(p) == 0 ? 2 : 0;
}

void func_003AB5D0(p0) int p0; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = (char *)p0;
    do {
        if (*(unsigned char *)((char *)(p0 + v0) + 19952) == 1) {
            *(char *)(*(char **)(v1 + 19888) + 435) = 1;
        }
        v0 = (v0 + 1);
        v1 = (v1 + 4);
    } while ((v0 < 16));
}

int func_003AA8F0();

int func_003AC850();

int func_003AC910();

int func_003ACBE0();

int func_003AC790(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    v6 = func_003AC850();
    v1 = (int)v0;
    if (v6 != 0) {
        v6 = func_003ACBE0(v1);
        if ((v6 & 255) == 0) {
            tmp0 = *(unsigned char *)(v0 + 19989);
            v2 = (int)v0;
            if (tmp0 == 1) {
                v6 = func_003AC910(v2);
                v3 = (int)v0;
                if ((v6 & 255) == 0) {
                    *(char *)(v0 + 19990) = 0;
                    v6 = func_003AA8F0(v3);
                }
                *(char *)(v0 + 19989) = 0;
                *(int *)(v0 + 19424) = 0;
            }
        }
    } else {
        tmp1 = *(unsigned char *)(v0 + 19989);
        v4 = (int)v0;
        if (tmp1 == 1) {
            v6 = func_003AC910(v4);
            v5 = (int)v0;
            if ((v6 & 255) == 0) {
                *(char *)(v0 + 19990) = 0;
                v6 = func_003AA8F0(v5);
            }
            *(char *)(v0 + 19989) = 0;
            *(int *)(v0 + 19424) = 0;
        }
    }
    return v6;
}

extern void func_003AC490();

void func_003AD640(char *p) { func_003AC490(p + -64); }

extern void func_003AD390();

void func_003AD690(char *p) { func_003AD390(p + -64); }

void func_003AD6A0(char *p) { func_003AD390(p + -160); }

void func_003AD6B0(char *p) { func_003AD390(p + -208); }

extern void func_003AC5B0();

void func_003AD6D0(char *p) { func_003AC5B0(p + -304); }

extern void func_003AC510();

void func_003AD6E0(char *p) { func_003AC510(p + -304); }

void func_003AD730(char *p) { func_003AD390(p + -304); }

void func_003AD770(char *p) { func_003AD390(p + -464); }

void func_003AC480(void) {}

int func_003AC6B0(void) { return 0; }

signed char func_003AD380(char *p) { return *(signed char *)(p + 481); }

float func_003AA380(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 20852) = *(float *)(p1 + 44);
    return t0;
}

float func_003AD360(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 20840);
    *(float *)(p1 + 0) = *(float *)(p0 + 20840);
    return t0;
}

float func_003AD370(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 20692);
    *(float *)(p1 + 0) = *(float *)(p0 + 20692);
    return t0;
}
