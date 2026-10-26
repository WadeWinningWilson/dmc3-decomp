#include "game/mt_rand.h"
extern char D_005A77A0[];

extern char D_005AFA60[];

extern char D_005B03D0[];

extern char D_005B03F4[];

extern char D_005B0474[];

extern char D_005B0508[];

extern char D_005B05D4[];

extern char D_005B068C[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_003C8E10(char *p, short flag) {
    void func_003C86C0();
    if (p != 0) {
        *(char **)p = D_005B03D0;
        *(char **)(p + 64) = D_005B03F4;
        *(char **)(p + 160) = D_005B0474;
        *(char **)(p + 208) = D_005B0508;
        *(char **)(p + 304) = D_005B05D4;
        *(char **)(p + 464) = D_005B068C;
        func_00313E60((p + 7316), -1);
        func_002E8A50((p + 7292), -1);
        func_003C86C0((p + 7216), -1);
        func_001003E0((p + 5936), (void *)func_0028C1A0, 544, 2);
        func_001003E0((p + 5168), (void *)func_0024D9A0, 208, 2);
        if (p + 4960 != 0) {
            *(char **)(p + 4976) = D_005AFA60;
            if (p + 4960 != 0) {
                *(char **)(p + 4976) = D_005A77A0;
            }
        }
        func_001003E0((p + 4736), (void *)func_00401030, 28, 2);
        func_002791E0((p + 3200), -1);
        func_002791E0((p + 1664), -1);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 52);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

/* Compares a byte with a 3-byte-row table entry; the column is added first. */
extern unsigned char D_0056EA20[];

int func_003C5400(unsigned char *p) {
    return p[7414] < (D_0056EA20 + p[5585])[p[5584] * 3];
}

/* Byte flag compared signed after a zero-extending load (blez). */
int func_003C3FC0(unsigned char *p) {
    if (p[7417] == 1 && (int)p[5585] > 0) {
        return 1;
    }
    return 0;
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

void func_002075C0(int, int, char *, int);

void func_004F6390(char *, char *, int, int);

void func_003C6880(char *p, int a) {
    void func_0034BA60(int, char *, signed char, int, int);
    char stk[0x10] __attribute__((aligned(16)));
    func_002075C0(3, 572, *(char **)(*(char **)(p + 1508) + 260), 1);
    func_004F6390(p, *(char **)(*(char **)(p + 1508) + 260), a, *(int *)(p + 1440));
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(*(char **)(p + 1508) + 260)), "r"(stk) : "memory");
    func_0034BA60(45, stk, *(signed char *)(p + 70), 0, 1);
}

extern char D_01CAFF0C[];

void func_003C59D0(char *p) {
    void func_002EF940(int, char *);
    int func_0024E800(char *);
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

short func_0034B940(char *, char *);

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

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0022C820(char *);

void func_0024FE00(char *);

void func_00320540(char *);

void func_002E8A10(char *);

void func_00313E20(char *);

void func_0024D930(char *);

void func_0031E4A0(char *);

void func_00400FF0(char *);

void func_003AD780(char *);

void func_003C8680(char *);

char *func_003C1610(char *p) {
    int i;
    int j;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B03D0;
    *(char **)(p + 0x40) = D_005B03F4;
    *(char **)(p + 0xA0) = D_005B0474;
    *(char **)(p + 0xD0) = D_005B0508;
    *(char **)(p + 0x130) = D_005B05D4;
    *(char **)(p + 0x1D0) = D_005B068C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x34);
    func_002790E0(p + 0x680);
    func_002790E0(p + 0xC80);
    func_00100450(p + 0x1280, func_00400FF0, func_00401030, 0x1C, 2);
    q = p + 0x1360;
    p[0x12C0] = 0;
    *(char **)(p + 0x1370) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x1430, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_00100450(p + 0x1730, func_0028C110, func_0028C1A0, 0x220, 2);
    p[0x1BD0] = 0;
    p[0x1BD1] = 0;
    *(short *)(p + 0x1BD2) = 0;
    *(int *)(p + 0x1BD8) = 0;
    *(int *)(p + 0x1BDC) = 0;
    *(int *)(p + 0x1BE0) = 0;
    *(int *)(p + 0x1BF0) = 0;
    *(int *)(p + 0x1BF4) = 0;
    *(int *)(p + 0x1BF8) = 0;
    *(float *)(p + 0x1BFC) = 1.0f;
    *(float *)(p + 0x1C00) = 100000.0f;
    p[0x1C04] = 0;
    p[0x1C05] = 0;
    *(short *)(p + 0x1C06) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1C08) = -1;
    func_003C8680(p + 0x1C30);
    func_002E8A10(p + 0x1C7C);
    func_00313E20(p + 0x1C94);
    p[0x1424] = 0;
    p[0x1428] = 0;
    p[0x1427] = 0;
    p[0x1426] = 0;
    p[0x1425] = 0;
    p[0x15D0] = 0;
    p[0x15D1] = 0;
    *(int *)(p + 0x15D4) = 0;
    *(int *)(p + 0x15EC) = 0;
    *(int *)(p + 0x15E4) = 0;
    *(int *)(p + 0x15E0) = 0;
    *(int *)(p + 0x15F0) = 0;
    *(int *)(p + 0x15F4) = 0;
    *(int *)(p + 0x15DC) = 0;
    *(short *)(p + 0x15F8) = 0;
    for (j = 0; j < 40; j++) {
        p[j + 0x15FA] = 0;
        *(int *)(p + j * 4 + 0x1624) = 0;
    }
    *(int *)(p + 0x1400) = 0;
    *(int *)(p + 0x1404) = 0;
    *(int *)(p + 0x1408) = 0;
    *(int *)(p + 0x140C) = 0;
    *(int *)(p + 0x1410) = 0;
    *(int *)(p + 0x1414) = 0;
    *(int *)(p + 0x1418) = 0;
    *(int *)(p + 0x141C) = 0;
    *(int *)(p + 0x1420) = 0;
    *(int *)(p + 0x16E0) = 0;
    *(int *)(p + 0x16D0) = 0;
    *(int *)(p + 0x16D4) = 0;
    *(int *)(p + 0x16D8) = 0;
    *(float *)(p + 0x16DC) = 1.0f;
    *(int *)(p + 0x16E4) = 0;
    *(int *)(p + 0x16E8) = 0;
    *(int *)(p + 0x1CAC) = 0;
    *(int *)(p + 0x1CB0) = 0;
    *(int *)(p + 0x1CB4) = 0;
    *(int *)(p + 0x1CB8) = 0;
    *(int *)(p + 0x1CCC) = 0;
    *(int *)(p + 0x1CC8) = 0;
    *(int *)(p + 0x1CC4) = 0;
    *(int *)(p + 0x1CC0) = 0;
    *(int *)(p + 0x1CBC) = 0;
    *(int *)(p + 0x1CD0) = 0;
    *(int *)(p + 0x1CD4) = 0;
    p[0x1CE1] = 0;
    p[0x1CE2] = 0;
    p[0x1CE3] = 0;
    *(short *)(p + 0x1CE4) = 0;
    *(int *)(p + 0x1CD8) = 0;
    *(int *)(p + 0x1CDC) = 0;
    p[0x1CE0] = 5;
    p[0x1CF8] = 0;
    p[0x1CF9] = 0;
    p[0x1CE6] = 0;
    p[0x1CE7] = 0;
    p[0x1CE8] = 0;
    p[0x1CE9] = 0;
    p[0x1CEA] = 0;
    p[0x1CEB] = 0;
    p[0x1CEC] = 0;
    p[0x1CED] = 0;
    p[0x1CEE] = 0;
    p[0x1CEF] = 0;
    p[0x1CF0] = 0;
    p[0x1CF1] = 0;
    p[0x1CF2] = 0;
    p[0x1CF3] = 0;
    p[0x1CF4] = 0;
    p[0x1CF5] = 0;
    p[0x1CF6] = 0;
    return p;
}

void func_003C4EF0(unsigned char *);

void func_003C4F70(unsigned char *, int);

unsigned char func_003C7C30(unsigned char *p) {
    void func_003C3CA0(unsigned char *, int);
    int s;
    unsigned char r = 1;
    if (p[0x1CEB]) {
        p[0x1CEB] = 0;
        s = 10;
    } else if (p[0x1CED]) {
        s = 3;
        func_003C4EF0(p);
        func_003C4F70(p, 0);
        p[0x1CE8] = 0;
        p[0x1CED] = 0;
    } else if (p[0x1CEC]) {
        switch (p[0x1424]) {
        case 0: case 1: case 0xD: case 0xE: case 0xF: case 0x10: case 0x11: case 0xC:
            s = 6; break;
        case 0xB: case 0x15: case 0x16: case 0x17: case 0x18:
            r = 0; break;
        default:
            r = 0; break;
        }
        p[0x1CEC] = 0;
    } else if (p[0x1CEE]) {
        switch (p[0x1424]) {
        case 0: case 1: s = 0xB; break;
        default: r = 0; break;
        }
        p[0x1CEE] = 0;
    } else if (p[0x1CF5]) {
        switch (p[0x1424]) {
        case 0: case 1: s = 0x15; break;
        default: r = 0; break;
        }
        p[0x1CF5] = 0;
    } else if (p[0x1CF4]) {
        switch (p[0x1424]) {
        case 0: case 1: s = 0x12; break;
        default: r = 0; break;
        }
        p[0x1CF4] = 0;
    } else if (p[0x1CEF]) {
        switch (p[0x1424]) {
        case 0: case 1: s = 0xC; break;
        default: r = 0; break;
        }
        p[0x1CEF] = 0;
    } else if (p[0x1CF0]) {
        switch (p[0x1424]) {
        case 0: case 1: s = 0xF; break;
        default: r = 0; break;
        }
        p[0x1CF0] = 0;
    } else if (p[0x1CF1]) {
        switch (p[0x1424]) {
        case 0: case 1:
            if (p[0x15D1] == 0) s = 0xD; else s = 0xE;
            break;
        default: r = 0; break;
        }
        p[0x1CF1] = 0;
    } else if (p[0x1CF2]) {
        switch (p[0x1424]) {
        case 0: case 1:
            if (p[0x15D1] == 0) s = 0x10; else s = 0x11;
            break;
        default: r = 0; break;
        }
        p[0x1CF2] = 0;
    } else if (p[0x1CF3]) {
        switch (p[0x1424]) {
        case 0: case 1: s = 2; break;
        default: r = 0; break;
        }
        p[0x1CF3] = 0;
    } else {
        r = 0;
    }
    if (r == 1) func_003C3CA0(p, s);
    return r;
}

extern float D_0056ECB4[];

extern float D_0056ED00[];

extern short D_0056ED30[];

void func_003C62C0(char *p) {
    if (*(unsigned char *)(p + 0x1CE1) == 0) {
        if ((*(float *)(p + 0x1CD0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0x1CE1) = 1;
            *(unsigned char *)(p + 0x1CE2) = 0;
            *(unsigned char *)(p + 0x1CE3) = mt_rand() & 1;
            *(float *)(p + 0x1CD0) = D_0056ECB4[*(unsigned char *)(p + 0x15D0) * 6 + *(unsigned char *)(p + 0x15D1) * 2];
            *(float *)(p + 0x1CD4) = D_0056ED00[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
        }
    } else if ((*(float *)(p + 0x1CD0) -= *(float *)(p + 0x10)) < 0.0f) {
        *(unsigned char *)(p + 0x1CE1) = 0;
        *(float *)(p + 0x1CD0) = D_0056ECB0[*(unsigned char *)(p + 0x15D0) * 6 + *(unsigned char *)(p + 0x15D1) * 2];
    } else {
        *(short *)(p + 0x1CE4) = *(short *)(p + 0x1CE4) + (int)(*(float *)(p + 0x10) * (float)D_0056ED30[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]);
        switch (*(unsigned char *)(p + 0x1CE2)) {
        case 0:
            if ((*(float *)(p + 0x1CD4) -= *(float *)(p + 0x10)) < 0.0f) {
                switch (mt_rand() % 10) {
                case 0:
                case 1:
                case 2:
                    *(unsigned char *)(p + 0x1CE2) = 1;
                    break;
                case 3:
                case 4:
                case 5:
                    *(unsigned char *)(p + 0x1CE2) = 2;
                    break;
                case 6:
                case 7:
                    *(unsigned char *)(p + 0x1CE2) = 3;
                    break;
                case 8:
                case 9:
                    *(unsigned char *)(p + 0x1CE2) = 4;
                    break;
                }
                *(float *)(p + 0x1CD4) = 3.0f;
            }
            break;
        case 1:
        case 2:
        case 3:
            if ((*(float *)(p + 0x1CD4) -= *(float *)(p + 0x10)) < 0.0f) {
                *(unsigned char *)(p + 0x1CE2) = 0;
                *(unsigned char *)(p + 0x1CE3) = mt_rand() & 1;
                *(float *)(p + 0x1CD4) = D_0056ED00[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            }
            break;
        case 4:
            if ((*(float *)(p + 0x1CD4) -= *(float *)(p + 0x10)) < 0.0f) {
                *(unsigned char *)(p + 0x1CE2) = 0;
                *(unsigned char *)(p + 0x1CE3) = mt_rand() & 1;
                *(float *)(p + 0x1CD4) = D_0056ED00[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            }
            break;
        }
    }
}

void func_0024DA80(char *, int, int);

void func_003C3F70(char *p, int a, int b, signed char k) {
    if (a >= 0 && b >= 0) {
        func_0024DA80(p + k * 208 + 0x1430, a, b);
    }
}

int func_003C4B90(char *p) {
    switch (*(unsigned char *)(p + 0x1424)) {
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
        return 2;
    }
    return 0;
}

int func_003C4BF0(char *p) {
    switch (*(unsigned char *)(p + 0x1424)) {
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
        return 2;
    }
    return 0;
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

int func_0024E780(char *, int, int);

void func_0024E7B0(char *, int, int);

void func_0028C290(char *, int, int, char *);

void func_003C6A10(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 7)) {
    case 0:
        *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 4) {
            func_0024E7B0(p + 0x1500, 0, 0);
            func_0028C8E0(p + 0x1950, 2);
            func_0028C910(p + 0x1950);
            func_0028C290(p + 0x1950, 7, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 8, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 9, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 13, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 14, 10, p + 0x64C);
        }
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C5890(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(int *)(p + 0x15DC) = 0;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C5AE0(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(int *)(p + 0x15DC) = 0;
            *(float *)(p + 0x1CB8) = *(float *)(p + 0x1C24);
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C7390(char *p) {
    int func_0024E800(char *);
    void func_0034BA60(int, char *, int, int, int);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_0034BA60(0x3A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
}

float func_0034C160(float, float, float);

void func_003C5910(char *p) {
    void func_002EF940(int, char *);
    float f;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(int *)(p + 0x16E4) = 0;
    case 1:
        f = func_0034C160(*(float *)(p + 0x16E4), 40.0f, 0.5f * *(float *)(p + 0x10));
        *(float *)(p + 0x16E4) = f;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) - f * *(float *)(p + 0x10);
        if (!(-50.0f <= *(float *)(p + 0x54))) {
            *(float *)(p + 0x54) = -50.0f;
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

float func_00132470(char *, char *);

int func_003C49F0(char *p) {
    float v[4];
    float d;
    v[0] = 2500.0f;
    v[1] = -50.0f;
    v[2] = 2500.0f;
    v[3] = 1.0f;
    d = func_00132470((char *)v, p + 0x50);
    *(float *)(p + 0x16E8) = d;
    return d < 100.0f;
}

void func_00206730(char *);

void func_002F2D30(char *, char *);

void func_003AD5C0(char *);

void func_003C39C0(char *p) {
    void func_001AD140(char *);
    int i;
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
    for (i = 0; i < 8; i++) {
        func_00206730(p + i * 4 + 0x1400);
        if (*(char **)(p + i * 4 + 0x1400) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x1400));
            *(char **)(p + i * 4 + 0x1400) = 0;
        }
    }
    func_003AD5C0(p + 0x1CAC);
    if (*(char **)(p + 0x1CAC) != 0) {
        func_001AD140(*(char **)(p + 0x1CAC));
    }
}

extern unsigned char D_0056EA10[];

extern signed char D_0054A040[][2];

typedef struct { signed char type; char pad[15]; float x, y, z, w; short a, b; char pad2[4]; int c, d, e, f; } SP3C6;

char *func_003D9240(SP3C6 *, int);

int func_003C6060(char *p) {
    void func_001AD140(char *);
    SP3C6 s;
    char *o;
    int i;
    unsigned char ok;
    if (*(short *)(p + 0x15F8) < *(unsigned char *)(*(unsigned char *)(p + 0x15D0) * 3 + (D_0056EA10 + *(unsigned char *)(p + 0x15D1)))) {
        s.type = 0x36;
        s.x = 0.0f;
        s.y = 0.0f;
        s.z = 0.0f;
        s.w = 1.0f;
        s.a = 0;
        s.b = 0;
        s.f = 0;
        s.e = 0;
        s.d = 0;
        s.c = 0;
        o = func_003D9240(&s, *(int *)(p + 0x5A0));
        if (o != 0) {
            *(char **)(o + 0x308) = p;
            if (*(char **)(o + 0x308) != 0) {
                *(unsigned char *)(o + 0xEFC) = 1;
            }
            *(signed char *)(o + 0x44) = -1;
            *(signed char *)(o + 0x45) = 3;
            *(signed char *)(o + 0x46) = s.type;
            *(signed char *)(o + 0x47) = D_0054A040[s.type][0];
            ok = 0;
            for (i = 0; i < 40; i++) {
                if ((unsigned char)(p + i)[0x15FA] == 0) {
                    *(char **)((char *)(i * 4) + (int)p + 0x1624) = o;
                    (p + i)[0x15FA] = 1;
                    ok = 1;
                    *(short *)(p + 0x15F8) = *(short *)(p + 0x15F8) + 1;
                    *(signed char *)(o + 0xF00) = i;
                    break;
                }
            }
            if (ok == 0) {
                func_001AD140(o);
                return 0;
            }
        }
    } else {
        return 0;
    }
    return 1;
}

void func_00104B80(char *, char *, char *);

void func_00131700(char *, char *, char *);

void func_00131650(char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

#define VSUBI(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_003C8350(char *p) {
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    r[0] = 0.0f;
    r[1] = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    UNIT(m);
    func_00131700((char *)m, (char *)m, (char *)r);
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 100.0f;
    v[3] = 1.0f;
    func_00104B80((char *)v, (char *)m, (char *)v);
    w[0] = *(float *)(p + 0x50) + v[0];
    w[1] = *(float *)(p + 0x54) + v[1];
    w[2] = *(float *)(p + 0x58) + v[2];
    w[3] = 1.0f;
    VSUBI(p + 0x16D0, w, p + 0x50);
    func_00131650(p + 0x16D0, p + 0x16D0);
    *(float *)(p + 0x16DC) = 1.0f;
}

void func_003C2D30(char *, int);

extern float D_0056EA60[];

void func_003C4C50(char *p, unsigned int k) {
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 7: case 8: case 10: case 11: case 12:
        if (*(unsigned char *)(p + 0x1424) != 6 && *(unsigned char *)(p + 0x1424) != 7 && *(unsigned char *)(p + 0x1424) != 11) {
            if (!(*(float *)(p + 0x1CB8) - *(float *)(p + 0x1C24) <= D_0056EA60[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]))
                *(unsigned char *)(p + 0x1CEC) = 1;
        }
        func_003C2D30(p, 3);
        break;
    case 20:
        *(unsigned char *)(p + 0x1CEB) = 1;
        break;
    case 21:
        *(unsigned char *)(p + 0x1CEB) = 1;
        break;
    case 5: case 6: case 9: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 22:
        break;
    }
}

void func_003C80C0(char *);

void func_003C7FC0(char *p) {
    void func_003C3CA0(char *, int);
    int v;
    switch (*(unsigned char *)(p + 0x1424)) {
    case 0:
        if (!*(unsigned char *)(p + 0x1CE7)) v = 1;
        else v = 0;
        break;
    case 1: case 2: case 5: case 8: case 9: case 10: case 11: case 12: case 13: case 14:
    case 15: case 16: case 17: case 18: case 20: case 24:
        v = 0;
        break;
    case 3:
        v = 4;
        func_003C80C0(p);
        break;
    case 4:
        v = 5;
        break;
    case 6:
        v = 7;
        break;
    case 7:
        if (*(unsigned char *)(p + 0x1CE6)) v = 0x17;
        else if (*(unsigned char *)(p + 0x15D1) == 2) v = 0xC;
        else v = 0;
        break;
    case 19: v = 0x14; break;
    case 21: v = 0x16; break;
    case 22: v = 6; break;
    case 23: v = 0x18; break;
    }
    func_003C3CA0(p, v);
}

char *func_00279290(char *);

void func_001A29A0(char *);

void func_003C2F80(char *p) {
    switch (*(unsigned char *)(p + 0x1CE0)) {
    case 0:
        switch (*(unsigned char *)(p + 0x1424)) {
        case 0x15: case 0x16: break;
        default: func_003C2D30(p, 4); break;
        }
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x1424)) {
        case 0x17: case 0x18: break;
        default: func_003C2D30(p, 4); break;
        }
        break;
    case 2:
        switch (*(unsigned char *)(p + 0x1424)) {
        case 0xB: break;
        default: func_003C2D30(p, 4); break;
        }
        break;
    case 3:
        func_003C2D30(p, 4);
        break;
    case 4:
        *(float *)(p + 0x1CD8) = *(float *)(p + 0x1CD8) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1CD8) < 0.0f) func_003C2D30(p, 5);
        break;
    case 5:
        return;
    }
    func_001A29A0(func_00279290(p + 0x680));
    func_001A29A0(func_00279290(p + 0xC80));
}

extern float D_0056EA90[];

void func_003C51C0(char *p) {
    void func_003C8F90(char *);
    int i;
    char *q;
    char *r;
    int j;
    for (i = 0, q = p; i < 40; i++, q += 4) func_003C8F90(q + 0x1624);
    if (*(unsigned char *)(p + 0x1424) != 0xB) {
        if (*(float *)(p + 0x16E8) < 100.0f) {
            *(float *)(p + 0x15E8) = *(float *)(p + 0x15E8) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x15E8) < 0.0f) *(unsigned char *)(p + 0x1CEE) = 1;
        }
        switch (*(unsigned char *)(p + 0x1424)) {
        case 0: case 1: case 2: case 7: case 12: case 13: case 14: case 15: case 16: case 17:
            *(float *)(p + 0x15E4) = *(float *)(p + 0x15E4) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x15E4) < 0.0f) *(unsigned char *)(p + 0x1CEE) = 1;
            if (!(*(float *)(p + 0x1CB4) - *(float *)(p + 0x1C24) <= D_0056EA90[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]))
                *(unsigned char *)(p + 0x1CEE) = 1;
            break;
        case 3: case 4: case 5: case 6: case 8: case 9: case 10: case 11: case 18: case 19: case 20: case 21: case 22: case 23: case 24:
            break;
        }
    }
    *(short *)(p + 0x15F8) = 0;
    *(unsigned char *)(p + 0x1CF6) = 0;
    for (j = 0, r = p; j < 40; j++, r += 4) {
        if (*(char **)(r + 0x1624)) {
            *(unsigned char *)(p + j + 0x15FA) = 1;
            (*(short *)(p + 0x15F8))++;
            if (*(unsigned char *)(*(char **)(r + 0x1624) + 0xEFD) == 4) (*(unsigned char *)(p + 0x1CF6))++;
        } else {
            *(unsigned char *)(p + j + 0x15FA) = 0;
        }
    }
}

void func_001A2970(char *);

void func_001A2900(char *, float);

void func_001A2840(char *, int, float);

void func_003C2D30(char *p, int k) {
    switch ((unsigned char)k) {
    case 0:
        *(int *)(p + 0x1CD8) = 0;
        *(unsigned int *)(p + 0x1CDC) = 0xC0000080;
        func_001A2840(func_00279290(p + 0x680), *(int *)(p + 0x1CDC), 1.0f);
        func_001A2840(func_00279290(p + 0xC80), *(int *)(p + 0x1CDC), 1.0f);
        break;
    case 1:
        *(int *)(p + 0x1CD8) = 0;
        *(unsigned int *)(p + 0x1CDC) = 0xC0008080;
        func_001A2840(func_00279290(p + 0x680), *(int *)(p + 0x1CDC), 1.0f);
        func_001A2840(func_00279290(p + 0xC80), *(int *)(p + 0x1CDC), 1.0f);
        break;
    case 2:
        *(int *)(p + 0x1CD8) = 0;
        *(unsigned int *)(p + 0x1CDC) = 0xC0803080;
        func_001A2840(func_00279290(p + 0x680), *(int *)(p + 0x1CDC), 1.0f);
        func_001A2840(func_00279290(p + 0xC80), *(int *)(p + 0x1CDC), 1.0f);
        break;
    case 3:
        *(int *)(p + 0x1CD8) = 0;
        *(unsigned int *)(p + 0x1CDC) = 0xA0E0E0E0;
        func_001A2840(func_00279290(p + 0x680), *(int *)(p + 0x1CDC), 1.0f);
        func_001A2840(func_00279290(p + 0xC80), *(int *)(p + 0x1CDC), 1.0f);
        break;
    case 4:
        if (*(unsigned char *)(p + 0x1CE0) != (unsigned char)k) {
            *(float *)(p + 0x1CD8) = 60.0f;
            func_001A2900(func_00279290(p + 0x680), 1.0f / *(float *)(p + 0x1CD8));
            func_001A2900(func_00279290(p + 0xC80), 1.0f / *(float *)(p + 0x1CD8));
        }
        break;
    case 5:
        if (*(unsigned char *)(p + 0x1CE0) != (unsigned char)k) {
            *(int *)(p + 0x1CD8) = 0;
            *(int *)(p + 0x1CDC) = 0;
            func_001A2970(func_00279290(p + 0x680));
            func_001A2970(func_00279290(p + 0xC80));
        }
        break;
    }
    *(unsigned char *)(p + 0x1CE0) = k;
}

extern float D_0056ED50[];

static inline void vunit(float *m) { __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory"); }

void func_003C5480(char *p, float *out, unsigned char k) {
    float o2[4] __attribute__((aligned(16)));
    float rot[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short a;
    float r;
    if (*(unsigned char *)(p + 0x1CE3) == 0) {
        a = *(short *)(p + 0x1CE4) + (short)(k * (0xFFFF / D_0056EA10[*(unsigned char *)(p + 0x15D0) * 3 + *(unsigned char *)(p + 0x15D1)]));
        r = D_0056ED50[*(unsigned char *)(p + 0x15D0) * 3 + *(unsigned char *)(p + 0x15D1)];
    } else {
        a = *(short *)(p + 0x1CE4) + (short)((unsigned char)(k % 4) << 14);
        r = 150.0f * (float)(int)((unsigned int)k >> 2) + D_0056ED50[*(unsigned char *)(p + 0x15D0) * 3 + *(unsigned char *)(p + 0x15D1)];
    }
    rot[1] = 6.283185f * ((float)a / 65536.0f);
    v[2] = r;
    rot[0] = 0.0f;
    rot[2] = 0.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    rot[3] = 1.0f;
    v[3] = 1.0f;
    vunit(m);
    func_00131700((char *)m, (char *)m, (char *)rot);
    func_00104B80((char *)o2, (char *)m, (char *)v);
    { float x = o2[0]; out[0] = x + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50); }
    out[1] = o2[1] + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
    out[2] = o2[2] + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x58);
    out[3] = 1.0f;
}

int func_003C8470(char *p, unsigned char a, unsigned char b) {
    float tmp[4] __attribute__((aligned(16)));
    float q;
    float x;
    int fl;
    if (a == 1) *(float *)(p + 0x16E0) = func_0034C160(*(float *)(p + 0x16E0), 1.5f, 0.05f * *(float *)(p + 0x10));
    else *(float *)(p + 0x16E0) = func_0034C160(*(float *)(p + 0x16E0), 2.5f, 0.05f * *(float *)(p + 0x10));
    q = *(float *)(p + 0x16E0) * *(float *)(p + 0x16E0);
    if (b == 1 && *(float *)(p + 0x16E8) < q) q = *(float *)(p + 0x16E8);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x16D0), "f"(q) : "t0", "memory");
    fl = 0;
    x = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
    if (x < 2000.0f || 3000.0f < x) fl |= 1;
    else *(float *)(p + 0x50) = x;
    x = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
    if (x < 2000.0f || 3000.0f < x) fl |= 2;
    else *(float *)(p + 0x58) = x;
    if (fl == 3) return 0;
    return 1;
}

int func_003C4D80(char *p, int a) {
    switch (a) {
    case 0:
        return 0;
    default:
        return 0;
    }
}

void func_003C6910(char *p) {
    void func_002EF940(int, char *);
    int func_0024E800(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C6990(char *p) {
    void func_002EF940(int, char *);
    int func_0024E800(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C4F30(char *p) {
    void func_001A1F90(char *);
    func_001A1F90(func_00279290(p + 0x680));
    func_001A1F90(func_00279290(p + 0xC80));
}

extern char D_01DFABA0[];

char *func_00207480(int, int, char *, int);

void func_003305E0(char *, int, int, int, int, int, int);

void func_003C4DB0(char *p) {
    char *q;
    func_00206730(p + 0x1420);
    if (*(char **)(p + 0x1420) == 0) {
        *(char **)(p + 0x1420) = func_00207480(3, 0xDC, 0, 16);
        q = *(char **)(p + 0x1420);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x5B0) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0x1420) + 0x3A) = 1;
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5B, (int)(p + 0x50), 0, 0, 0);
}

void func_003C4E50(char *p) {
    void func_001AD140(char *);
    char *q;
    func_00206730(p + 0x1420);
    if (*(char **)(p + 0x1420) != 0) {
        func_001AD140(*(char **)(p + 0x1420));
        *(char **)(p + 0x1420) = 0;
    }
    q = func_00207480(3, 0xDC, 0, 16);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x5B0) + 0x104);
        q[0x9A] = 1;
        q[0x3A] = 1;
    }
    func_003305E0(D_01DFABA0, 0, 0x5D, (int)(p + 0x50), 0, 0, 0);
}

void func_003C6B30(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 7)) {
    case 0:
        *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 5) {
            func_0024E7B0(p + 0x1500, 0, 0);
            func_0028C8E0(p + 0x1950, 3);
            func_0028C910(p + 0x1950);
            func_0028C290(p + 0x1950, 7, 30, p + 0x64C);
            func_0028C290(p + 0x1950, 8, 30, p + 0x64C);
            func_0028C290(p + 0x1950, 9, 30, p + 0x64C);
            func_0028C290(p + 0x1950, 13, 30, p + 0x64C);
            func_0028C290(p + 0x1950, 14, 30, p + 0x64C);
        }
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C6C50(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 7)) {
    case 0:
        *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 6) {
            func_0024E7B0(p + 0x1500, 0, 0);
            func_0028C8E0(p + 0x1950, 4);
            func_0028C910(p + 0x1950);
            func_0028C290(p + 0x1950, 7, 25, p + 0x64C);
            func_0028C290(p + 0x1950, 8, 25, p + 0x64C);
            func_0028C290(p + 0x1950, 9, 25, p + 0x64C);
            func_0028C290(p + 0x1950, 13, 25, p + 0x64C);
            func_0028C290(p + 0x1950, 14, 25, p + 0x64C);
        }
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C49C0(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    v0 = *(unsigned char *)(p0 + 5156);
    tmp0 = 3;
    v1 = 4;
    if (v0 != tmp0) {
        if (v0 != v1) {
            tmp1 = 11;
            v2 = 0xc2480000;
            if (v0 != tmp1) {
                *(int *)(p0 + 84) = v2;
            }
        }
    }
}

void func_003C4A60(p0) char *p0; {
    float v0;
    int v1;
    v0 = *(float *)(p0 + 7204);
    if (v0 > 9000.0f) {
        *(char *)(p0 + 5585) = 0;
    } else {
        v1 = 1;
        if (v0 > 3000.0f) {
            *(char *)(p0 + 5585) = v1;
        } else {
            *(char *)(p0 + 5585) = 2;
        }
    }
}

int func_003C5370(p0) int p0; {
    int func_003C8F90();
    int v0;
    int v2;
    int v6;
    int v4;
    int v3;
    char *v1;
    char *v5;
    v0 = 0;
    v1 = (char *)p0;
    v3 = (int)v1;
    do {
        v2 = func_003C8F90((v3 + 5668));
        v0 = (v0 + 1);
        v3 = (v3 + 4);
    } while ((v0 < 40));
    v6 = 0;
    v4 = 1;
    do {
        v5 = *(char **)(v1 + 5668);
        if (v5 != 0) {
            *(char *)(v5 + 3847) = v4;
            *(char *)(v5 + 3836) = 0;
            *(int *)(v5 + 776) = 0;
            *(int *)(v1 + 5668) = 0;
        }
        v6 = (v6 + 1);
        v1 = (v1 + 4);
    } while ((v6 < 40));
    return v2;
}

void func_003C5430(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = (char *)p0;
    do {
        if (*(int *)(v1 + 5668) == p1) {
            *(int *)((char *)((v0 << 2) + p0) + 5668) = 0;
            break;
        }
        v0 = (v0 + 1);
        v1 = (v1 + 4);
    } while ((v0 < 40));
}

void func_003C5690(p0) char *p0; {
    void func_002EF940();
    int v0;
    v0 = *(unsigned char *)(p0 + 6);
    switch (v0) {
    case 0:
        *(char *)(p0 + 6) = (v0 + 1);
        *(int *)(p0 + 5588) = 0x42f00000;
        /* fall through */
    case 1:
        *(float *)(p0 + 5588) -= *(float *)(p0 + 16);
        if (*(float *)(p0 + 5588) < 0.0f) {
            *(char *)(p0 + 7402) = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (p0 + 7120));
}

extern char D_0056EAC0[];

void func_003C5A50(p0, p1, p2) char *p0; int p1; int p2; {
    void func_002EF940();
    int v0;
    v0 = *(unsigned char *)(p0 + 6);
    switch (v0) {
    case 0:
        *(char *)(p0 + 6) = (v0 + 1);
        p2 = *(unsigned char *)(p0 + 5585);
        *(float *)(p0 + 5588) = *(float *)((D_0056EAC0 + ((p2 + (*(unsigned char *)(p0 + 5584) * 3)) << 2)) + 0);
        /* fall through */
    case 1:
        *(float *)(p0 + 5588) -= *(float *)(p0 + 16);
        if (*(float *)(p0 + 5588) < 0.0f) {
            *(char *)(p0 + 7402) = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (p0 + 7120), p2);
}

void func_003C5B60(p0) char *p0; {
    int func_0024E800();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 6);
    switch (v1) {
    default:
        return;
    case 0:
        *(char *)(v0 + 6) = (v1 + 1);
        /* fall through */
    case 1:
        v2 = func_0024E800((v0 + 5168));
        if ((v2 & 255) == 1) {
            *(char *)(v0 + 7402) = 1;
        }
        return;
    }
}

void func_003C5BD0(p0) char *p0; {
    int func_0024E800();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 6);
    switch (v1) {
    default:
        return;
    case 0:
        *(char *)(v0 + 6) = (v1 + 1);
        /* fall through */
    case 1:
        v2 = func_0024E800((v0 + 5168));
        if ((v2 & 255) == 1) {
            *(char *)(v0 + 7402) = 1;
        }
        return;
    }
}

extern char D_0056EEA0[];

void func_003C8620(p0) char *p0; {
    float v0;
    v0 = *(float *)(p0 + 7372);
    if (v0 < 1000.0f) {
        *(float *)(p0 + 7372) = (v0 + *(float *)((D_0056EEA0 + ((*(unsigned char *)(p0 + 5585) + (*(unsigned char *)(p0 + 5584) * 3)) << 2)) + 0));
    }
}

int func_003C8DC0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 40)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1452);
    }
    return (int)v0;
}

void func_003C3880(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_003C19D0();

void func_003C8FE0(char *p) { func_003C19D0(p + -64); }

extern void func_003C8DE0();

void func_003C8FF0(char *p) { func_003C8DE0(p + -64); }

extern void func_003C8DF0();

void func_003C9000(char *p) { func_003C8DF0(p + -64); }

extern void func_003C4D70();

void func_003C9020(char *p) { func_003C4D70(p + -64); }

extern void func_003C4D20();

void func_003C9030(char *p) { func_003C4D20(p + -64); }

extern void func_003C3C90();

void func_003C90A0(char *p) { func_003C3C90(p + -304); }

void func_003C90B0(char *p) { func_003C4D20(p + -304); }

extern void func_003C8E00();

void func_003C90F0(char *p) { func_003C8E00(p + -464); }

void func_003C9110(char *p) {
    extern void func_003C86C0(); func_003C86C0(p + -4); }

void func_003C8730(char *p0, int p1, int p2) {
    *(int *)(p0 + 68) = p1;
    *(int *)(p0 + 72) = p2;
}
