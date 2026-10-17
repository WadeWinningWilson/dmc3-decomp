/* Hand-matched functions (fourth file: its callee declarations differ from the others). */

short func_00221710(void);
int func_00131B60(int);
float func_00131B50(float);
int func_002242C0(char *);

unsigned short func_00221600(char *p) {
    short a = func_00221710();
    unsigned short r;
    float f;
    if (a < 0x4000) {
        r = 0;
        if (a < 0x2000) {
            a = 0x2000;
        }
    } else {
        r = 2;
        if (a > 0x6000) {
            a = 0x6000;
        }
    }
    f = func_00131B50((short)func_00131B60(a - 0x4000) / 8192.0f);
    if (f > 1.0f) {
        f = 1.0f;
    }
    *(float *)(p + 0x2430) = f;
    if ((unsigned char)func_002242C0(p) == 1 && *(float *)(p + 0x2430) < 0.5f) {
        r = 1;
    }
    return r;
}

int func_002DAD40();
short func_002DACC0(char *);
float func_002DAAA0(char *, char *);

void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f) {
    *(short *)(p + 0x29A4) = a;
    *(float *)(p + 0x29D4) = f;
    if (b == 1) {
        if ((unsigned char)func_002DAD40(p, 1) != 2) {
            *(short *)(p + 0x3BA4) = func_002DACC0(p);
        } else {
            *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
        }
        return;
    } else {
        *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
        if (*(unsigned char *)(p + 0x3B9D) == 1) {
            if (c == 0 && *(unsigned char *)(p + 0x28A6) == 0 &&
                (unsigned char)func_002DAD40(p, 1) == 2 &&
                func_002DAAA0(p, p + 0x3C40) > *(float *)(*(char **)(p + 0x283C) + 0xDC)) {
                *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
            }
        } else if (*(unsigned char *)(p + 0x28A6) != 0) {
            *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
        } else if ((unsigned char)func_002DAD40(p, 1) != 2) {
            *(short *)(p + 0x3BA4) = func_002DACC0(p);
        }
    }
}

int func_002F0A50(char *, char *);
short func_002DAA60(char *, char *);

void func_002DB090(char *p, short a, unsigned char c, float f) {
    *(short *)(p + 0x29A4) = a;
    *(float *)(p + 0x29D4) = f;
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        if ((unsigned char)func_002DAD40(p) == 2) {
            if (func_002F0A50(p + 0x2B58, p + 0x3C40)) {
                *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
                *(unsigned char *)(p + 0x3B9D) = 1;
            }
            *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
        } else {
            switch (c) {
            case 0:
                *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
                break;
            case 1:
            case 2:
                if (func_002F0A50(p + 0x2B58, p + 0x3C40)) {
                    *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
                    *(unsigned char *)(p + 0x3B9D) = 1;
                }
                *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
                break;
            }
        }
    } else if (*(unsigned char *)(p + 0x3B9D) == 1) {
        *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
    } else {
        *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
    }
}

int func_002F0740(char *, int, unsigned char);
void func_0023F760(char *);
int func_0023F670(char *, char *, short);
void func_002F1830(char *, int);

void func_0023F8E0(char *p) {
    int r = 0;
    unsigned char ok;
    if (*(unsigned char *)(p + 0x3B9C) == 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        ok = func_002F0740(p + 0x2B58, 0, *(unsigned char *)(p + 0xD4));
        *(unsigned char *)(p + 0x3B9C) = 1;
        func_0023F760(p);
        *(unsigned char *)(p + 0x28A6) = 1;
        *(int *)(p + 0x3C60) = 0;
        if (ok == 1) {
            r = func_0023F670(p, p + 0x3C40, *(short *)(p + 0x90));
        }
    } else {
        ok = func_002F0740(p + 0x2B58, 1, *(unsigned char *)(p + 0xD4));
        *(unsigned char *)(p + 0x3B9C) = 1;
        func_0023F760(p);
        if (ok == 1) {
            r = func_002F0A50(p + 0x2B58, p + 0x3C40);
        }
    }
    if (r == 0) {
        *(short *)(p + 0x3BA2) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x3B9D) = 0;
    } else {
        *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
        *(unsigned char *)(p + 0x3B9D) = 1;
        func_002F1830(p + 0x2B58, r);
    }
}

extern char *D_005BE0D8;
extern short *D_00540ED0[];
extern short *D_00540E90[];
void func_001347E0(int, int, short);
int func_00134910(int, int);

int func_001EDAB0(int i, int alt) {
    short *s;
    D_005BE0D8[0] = 0;
    D_005BE0D8[1] = 1;
    if (alt) {
        D_005BE0D8[2] = 3;
        s = D_00540ED0[i];
    } else {
        D_005BE0D8[2] = 2;
        s = D_00540E90[i];
    }
    D_005BE0D8[3] = s[0];
    D_005BE0D8[4] = s[1];
    D_005BE0D8[5] = s[2];
    D_005BE0D8[8] = s[3];
    *(short *)(D_005BE0D8 + 0x20) = s[4];
    *(short *)(D_005BE0D8 + 0x22) = s[5];
    *(short *)(D_005BE0D8 + 0x24) = s[6];
    D_005BE0D8[6] = s[7];
    D_005BE0D8[7] = 0;
    D_005BE0D8[9] = 1;
    ((unsigned char *)D_005BE0D8)[10] = 0x80;
    func_001347E0(0, 0, (*(short *)(D_005BE0D8 + 0x22) - *(short *)(D_005BE0D8 + 0x24)) / 2);
    return func_00134910(0, 0);
}

void func_00316F30(char *, float *, int);
void func_003172E0(char *, short *, short *);
void func_0034B8C0(short *, short *, int);
void func_003176C0(char *, char *, char *);
int func_00317740(char *, int);

int func_00317A30(char *p) {
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

extern char D_006663C0[];
extern unsigned char D_01CB1292[];
int func_001AE140(char *, int);
int func_001ECEB0(char *);

void func_001ECD70(char *p) {
    if (func_001AE140(D_006663C0, 0)) {
        p[0x3D0]++;
        p[0x3D0] = p[0x3D0] < 40 ? p[0x3D0] : 40;
    } else {
        p[0x3D0]--;
        p[0x3D0] = p[0x3D0] > 0 ? p[0x3D0] : 0;
    }
    if (*(short *)(p + 0x3D2) < 0) {
        if (p[0x3D0] < 20) {
            p[0x3CD] = 0;
            if ((unsigned char)func_001ECEB0(p) == 1) {
                p[0x3D1] = 1;
                D_01CB1292[0] = 1;
                p[0x3CE] = 1;
            } else {
                p[0x3D1] = 0;
                D_01CB1292[0] = 0;
                p[0x3CE] = 0;
            }
        } else {
            if (*(unsigned char *)(p + 0x3CD) == 0) {
                p[0x3CD] = 1;
            }
            p[0x3D1] = 0;
            D_01CB1292[0] = 0;
            p[0x3CE] = 0;
        }
    } else {
        p[0x3CD] = 1;
        (*(short *)(p + 0x3D2))--;
        D_01CB1292[0] = 0;
        p[0x3CE] = 0;
    }
}

int func_00406D80(char *, signed char);

void func_004B1F30(char *p) {
    int i;
    signed char k;
    unsigned char *t;
    *(unsigned short *)(p + 0x3DEA) = 0;
    for (i = 0; i < *(signed char *)(p + 0x3DED); i++) {
        k = func_00406D80(*(char **)(p + 0x3DE0), i + *(signed char *)(p + 0x3DEC));
        t = *(unsigned char **)(p + 0x3DE0);
        if ((k == 0 ? *(int *)(t + 4) : t[k + 8]) != 0) {
            *(unsigned short *)(p + 0x3DEA) |= (unsigned short)(1 << i);
        }
    }
    *(unsigned short *)(p + 0x3DE8) = 0;
    for (i = 0; i < *(signed char *)(p + 0x3DEF); i++) {
        k = func_00406D80(*(char **)(p + 0x3DE0), i + *(signed char *)(p + 0x3DEE));
        t = *(unsigned char **)(p + 0x3DE0);
        if ((k == 0 ? *(int *)(t + 4) : t[k + 8]) != 0) {
            *(unsigned short *)(p + 0x3DE8) |= (unsigned short)(1 << i);
        }
    }
}

extern char D_01CAFF0C[];
void func_003E6E20(char *p0) {
    char *v1;
    float tmp3;
    float tmp4;
    float tmp7;
    float tmp8;
    float tmp11;
    float tmp12;
    float tmp15;
    float tmp16;
    v1 = *(char **)(*(char **)D_01CAFF0C + 12);
    if (*(float *)(p0 + 14644) > *(float *)(p0 + 14640)) {
        *(float *)(p0 + 14640) += 0.05f * *(float *)(p0 + 16);
        if (*(float *)(p0 + 14640) >= *(float *)(p0 + 14644)) {
            *(float *)(p0 + 14640) = *(float *)(p0 + 14644);
        }
    }
    if (*(float *)(p0 + 14644) < *(float *)(p0 + 14640)) {
        *(float *)(p0 + 14640) -= 0.05f * *(float *)(p0 + 16);
        if (*(float *)(p0 + 14640) <= *(float *)(p0 + 14644)) {
            *(float *)(p0 + 14640) = *(float *)(p0 + 14644);
        }
    }
    tmp3 = (150.0f + *(float *)(v1 + 84));
    tmp4 = *(float *)(v1 + 88);
    *(float *)(p0 + 14112) = *(float *)(v1 + 80);
    *(float *)(p0 + 14116) = tmp3;
    *(float *)(p0 + 14120) = tmp4;
    *(int *)(p0 + 14124) = 0x3f800000;
    *(char *)(p0 + 14084) = 2;
    *(float *)(p0 + 14192) = (0.5f * *(float *)(p0 + 14640));
    tmp7 = (150.0f + *(float *)(v1 + 84));
    tmp8 = *(float *)(v1 + 88);
    *(float *)(p0 + 14400) = *(float *)(v1 + 80);
    *(float *)(p0 + 14404) = tmp7;
    *(float *)(p0 + 14408) = tmp8;
    *(int *)(p0 + 14412) = 0x3f800000;
    *(char *)(p0 + 14372) = 2;
    *(float *)(p0 + 14480) = *(float *)(p0 + 14640);
    tmp11 = (150.0f + *(float *)(v1 + 84));
    tmp12 = *(float *)(v1 + 88);
    *(float *)(p0 + 14256) = *(float *)(v1 + 80);
    *(float *)(p0 + 14260) = tmp11;
    *(float *)(p0 + 14264) = tmp12;
    *(int *)(p0 + 14268) = 0x3f800000;
    *(char *)(p0 + 14228) = 2;
    *(float *)(p0 + 14336) = (0.5f * *(float *)(p0 + 14640));
    tmp15 = (150.0f + *(float *)(v1 + 84));
    tmp16 = *(float *)(v1 + 88);
    *(float *)(p0 + 14544) = *(float *)(v1 + 80);
    *(float *)(p0 + 14548) = tmp15;
    *(float *)(p0 + 14552) = tmp16;
    *(int *)(p0 + 14556) = 0x3f800000;
    *(char *)(p0 + 14516) = 2;
    *(float *)(p0 + 14624) = *(float *)(p0 + 14640);
}
extern char D_00645EB0[];
char *func_00286610(char *, int, int);
void func_00198450(char *, int, int, unsigned short);
int func_001A4F90(char *);
char *func_001B0FD0(char *, int, int);
void func_00130990(char *, int);
void func_0019BDC0(char *, char *, char *, int);
void func_0019BDB0(char *, char *, int);
int func_001A5B30(char *, int);

int func_0027A900(char *p, int a, int id, int b) {
    char *src;
    unsigned short fl;
    int n;
    char *buf;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        src = func_00286610(D_00645EB0, id, b);
        if (src != 0) {
            *(int *)(p + 0xC) = id;
        } else {
            p[8] = 1;
        }
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    func_00198450(p + 0x30, a, id, fl);
    n = func_001A4F90(p + 0x30);
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_0019BDC0(p + 0x30, buf, src, 0);
        break;
    case 1:
        func_0019BDB0(p + 0x30, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x30, n) != 0) {
        return 0;
    }
    p[0xA] = 1;
    return 1;
}

void func_00199730(char *, char *, char *, int);
void func_00199720(char *, char *, int);
void func_003AAB30(int, int, char *, unsigned char);
void func_003B9F50(char *);
void func_003B92A0(char *);
char *func_00207480(int, int, char *, int);
void func_003BA4E0(char *);
void func_0034BA60(int, char *, int, int, int);
int func_003B9390(char *);
void func_003BA070(char *, int, int);
int func_003AD2F0(char *);
void func_003B9D20(char *);

int func_002794A0(char *p, int a, int id, int b) {
    char *src;
    unsigned short fl;
    int n;
    char *buf;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        src = func_00286610(D_00645EB0, id, b);
        if (src != 0) {
            *(int *)(p + 0xC) = id;
        } else {
            p[8] = 1;
        }
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    switch (*(unsigned char *)(p + 9)) {
    case 0:
        break;
    case 1:
        fl |= 2;
        break;
    }
    func_00198450(p + 0x40, a, id, fl);
    n = func_001A4F90(p + 0x40);
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_00199730(p + 0x40, buf, src, 0);
        break;
    case 1:
        func_00199720(p + 0x40, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x40, n) != 0) {
        return 0;
    }
    p[0xA] = 1;
    return 1;
}

typedef struct { float v[4]; } F4u;
extern int D_005BE1AC;
void func_00376E40(char *);
void func_00376B80(char *, int);
void func_00376B40(char *, int);
void func_0041DBA0(char *, char *);
int func_0024E800(char *);

void func_003B8EF0(char *p) {
    int i;
    int f;
    char *q;
    char *e;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(unsigned char *)(p + 0x1B4) != 0) {
            func_003AAB30(*(int *)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
        } else {
            *(F4u *)(p + 0x230) = *(F4u *)(p + 0x200);
        }
        *(float *)(p + 0x1D4) = *(float *)(p + 0x1D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1D4) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003B9F50(p);
            func_003B92A0(p);
            func_00207480(3, 1, p + 0x250, 0x10);
            func_003BA4E0(p);
            func_0034BA60(0x1D, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        } else {
            func_003B9390(p);
        }
        break;
    case 1:
        for (i = 0, q = p; i <= 2; i++, q += 4) {
            e = *(char **)(q + 0x31C);
            f = 0;
            if (e != 0) {
                f = *(int *)(e + 8);
            }
            if (f & 0x20000) {
                func_003BA070(p, 1, 1);
                return;
            }
        }
        if ((unsigned char)func_003AD2F0(*(char **)(p + 0x1DC)) == 1) {
            func_003BA070(p, 1, 1);
            return;
        }
        switch (func_003B9390(p)) {
        case 0:
            break;
        case 1:
            func_003BA070(p, 1, 1);
            return;
        case -1:
            func_003BA070(p, 1, 1);
            return;
        }
        break;
    }
    func_003B9D20(p);
}

void func_004ADC50(char *p) {
    func_00376E40(p);
    *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x4000000;
    *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x800000;
    *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x20000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x49, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x1000000;
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) & ~0x1000;
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x2000;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 470.0f;
        func_00207480(1, 0x26D, p + 0x8A0, 0x10);
        func_00376B80(p, -1);
        *(float *)(p + 0x95C) = 64.0f;
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x80000000;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (*(float *)(p + 0x95C) < 64.0f) {
            *(float *)(p + 0x95C) = *(float *)(p + 0x95C) + 2.0f;
        }
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            *(float *)(p + 0x95C) = 64.0f;
            *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) & ~0x4000;
            *(unsigned char *)(p + 0x975) = *(unsigned char *)(p + 0x975) + 1;
            if (*(unsigned char *)(p + 0x8EB) == 0) {
                if (*(unsigned char *)(p + 0x975) % 3 == 0 || *(unsigned char *)(p + 0x975) > 6) {
                    func_00376B40(p, 4);
                    func_00376B80(p, -1);
                } else {
                    func_00376B40(p, 0x12);
                }
            } else {
                if (*(unsigned char *)(p + 0x975) % 4 == 0 || *(unsigned char *)(p + 0x975) > 8) {
                    func_00376B40(p, 4);
                    func_00376B80(p, -1);
                } else {
                    func_00376B40(p, 0x12);
                }
            }
            D_005BE1AC = 3;
        }
        break;
    }
}
