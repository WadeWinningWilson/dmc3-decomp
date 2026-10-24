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
extern char D_005646F0[];
extern char D_005646F8[];
extern char D_005A7790[];
extern char D_005A7780[];
float func_00132470(char *, char *);
void func_00277D30(char *);
void func_00197910(char *, char *);

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

void func_003B8DE0(char *p) {
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AAB30(*(int *)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
    } else {
        *(F4u *)(p + 0x230) = *(F4u *)(p + 0x200);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1: {
        float d = func_00132470(p + 0x230, p + 0x50);
        if (!(d <= *(float *)(D_005646F0 + *(unsigned char *)(p + 0x1B5) * 40))) {
            if (!(d <= *(float *)(D_005646F8 + *(unsigned char *)(p + 0x1B5) * 40))) {
                func_003BA070(p, 0, 0);
                return;
            }
            func_003B9390(p);
        }
        break;
    }
    }
    func_003B9D20(p);
}

typedef struct { int a[64]; int x; int y; } Buf66;
extern unsigned int D_01DF8810[];
extern unsigned int D_01DF7E50[];
void func_00207A90(unsigned int *);
void func_002490F0(char *, int, int, int, int, int, float);
int func_002496D0(char *);
void func_0021B790(char *, int);
void func_002DAB90(char *, int);
int func_002D9EB0(char *);
void func_00104C00(char *, char *, char *);
void func_00105760(char *, char *, float);
int func_0031B220(char *, short, float);
extern int D_01DFAB70[];
void func_0021CBB0(char *, int);
void func_0021CB60(char *, int);
void func_0021CB50(char *, int);
void func_002DB2C0(char *);
void func_002DBAA0(char *, short, float);
float func_001324B0(char *, float *);
short func_00131D10(float, float);
float func_00131C20(short);
float func_00131BA0(short);
void func_002DBD20(char *, float, float);
void func_002DBCC0(char *, int, float, float);
void func_002DBD00(char *);
void func_002F30B0(int, char *, char *);
int func_0023DF80(char *, float);
void func_002DA3A0(char *, short);
extern char D_01DFABA0[];
void func_002DBD30(char *);
void func_00105230(char *, char *, char *);
void func_00330B50(char *, int, char *, int);
int func_0023E110(char *);
extern char D_00666710[];
extern char D_0066671A[];
char *func_002D9C80(char *, int, int);
void func_00495110(char *, char *, short);
unsigned short func_001AE770(char *, int);
extern float D_01DF5D20[];
extern int D_01DFAB74[];
float func_002D8B50(char *);
void func_00430AD0(char *);
void func_002DBCA0(char *, int);
void func_0021CA00(char *, int);
void func_002DB940(char *, short, float);
void func_0021C100(char *, int, int, float, float);
void func_0021BFC0(char *);
void func_002DBCE0(char *);
void func_0021C7A0(char *, int);
void func_00430DA0(char *, int, int);
void func_0021BDB0(char *, int, int);
int func_002DA0B0(char *, int);
void func_00245810(char *, char *, float *, float);
unsigned char func_00245EF0(char *, float *, short, float *, char *, int, float);
float func_00132510(float *);
float func_0011DBE0(float, float);
void func_00132540(float *, float *, float);
unsigned char func_002018A0(char *, float *, float *, float *, char *, int);
float func_00132D80(float *, float *);
unsigned char func_00245590(char *, float *, float *, char *, float, float);
void func_00105300(float *, float *);
void func_00131650(float *, float *);
char *func_001B4250(float *, int, int, int);
char *func_001EDE80(float *, int, int, int);
char *func_001B11B0(float *, int, int, int);
char *func_00205A00(float *, int, int, int);
void func_001AD140(char *);
char *func_00207470(int, int, int);
void func_003305E0(char *, int, int, char *, int, int, int);
void func_0048AFC0(char *, int);
unsigned char func_0041D6B0(char *, float);
void func_0048B3F0(char *);
void func_0048AF80(char *, int);
extern int D_01CAFF38[];
extern signed char D_005BE11C;
extern char D_005BE124;
extern int D_005BE190;
extern int D_005BE194;
short func_0034B940(char *, char *);
void func_00316D80(char *);
void func_00228300(int *);
void func_00317850(char *);
void func_004E8500(char *);
void func_004E8980(char *);
void func_00317B50(char *);
void func_005080A0(char *);
void func_005090D0(char *);
void func_00507A90(char *);
void func_004F56C0(char *);
void func_004FE000(char *);
void func_004E8120(char *);
void func_00506900(char *);
void func_00509600(char *);
void func_005086C0(char *);
int func_00430C20(char *, char *, int, int, int, int);
void func_00332AE0(char *, int, float, float);
void func_002DFFA0(char *, float);
void func_002E1AB0(char *, char *);
extern char *D_005BC2E0;
extern int D_005BCFC8;
extern char D_0056A010[];
void func_001AD100(char *);
void func_00206730(char *);
void func_00286040(char *);
void func_00133890(char *, char *, float *);
void func_0028C200(char *, char *, char *, int, char *, char *, char *);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_0028C5C0(char *, int, float);
char *func_002FF750(int, char *, int);
void func_003FBDA0(char *p);
void func_003FBFA0(char *);
void func_003023F0(char *);
extern char D_00562DB0[];
void func_0038B130(char *);
void func_002F7660(char *, char *);
void func_00131700(float *, float *, float *);
void func_00104B80(char *, float *, float *);
void func_003DD4D0(char *);
extern unsigned char D_01CAFF3C[];
extern float D_005BD9EC;
void func_0043A150(char *, float *, char *);
char *func_004361D0(char *);
int func_004722C0(char *, float *, int);
void func_00330BD0(char *, int, char *, int, int);
extern char D_005BE098;
int func_0041D600(char *);
char *func_00279290(char *);
void func_001A5C30(char *);
void func_001A5D00(char *);
void func_003D3790(char *);
void func_003D3AD0(char *);
void func_0041D6E0(char *, char *, int, float);
int func_0041E120(char *, float);
void func_0041D820(char *, float, float);
void func_0041D840(char *, char *, float);
void func_00195E20(char *, char *);
extern char D_00645A30[];
void func_001AAD30(char *);
char *func_001B1610(int, char *);
void func_00450930(char *);
void func_001B1440(char *, char *, char *);
void func_001959E0(char *, int, char *);
void func_001B1430(char *, int);
void func_0013D240(char *, int);

int func_0036F5E0(char *p, int a, int id) {
    Buf66 b;
    char t[64];
    int i;
    int n;
    char *buf;
    for (i = 0; i < 64; i++) b.a[i] = 0;
    b.y = 0;
    b.x = 0;
    func_00197910((char *)&b, t);
    func_00198450(p + 0x40, a, id, 0);
    n = func_001A4F90(p + 0x40);
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_00130990(buf, n >> 2);
    func_00199730(p + 0x40, buf, (char *)&b, 0);
    if (func_001A5B30(p + 0x40, n) != 0) {
        return 0;
    }
    p[0xA] = 1;
    return 1;
}

static inline float frand_31a(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

void func_0031AAC0(char *p) {
    float m[16] __attribute__((aligned(16)));
    unsigned char st = *(unsigned char *)(p + 0x284C);
    switch (st) {
    case 0:
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x0));
        func_002490F0(p, 0x1F, 0x1E, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            (*(unsigned char *)(p + 0x284C))++;
            *(float *)(p + 0x7DC0) = 60.0f;
            func_00207480(3, 0x338, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), 8);
            *(short *)(p + 0x7DC4) = (int)(65536.0f * (360.0f * frand_31a()) / 360.0f + 0.5f);
        }
        break;
    case 2:
        if ((unsigned char)func_0031B220(p, *(short *)(p + 0x7DC4), 50.0f) == 1) {
            (*(unsigned char *)(p + 0x284C))++;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105760((char *)m, (char *)m, 3.1415925f);
            func_00104C00((char *)m, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), (char *)m);
            func_00207480(3, 0x338, (char *)m, 8);
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x284C) = st + 1;
        func_002490F0(p, 0x1F, 0x1E, -1, 0, 0, -1.0f);
        *(short *)(p + 0x90) = (int)(65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f + 0.5f);
        break;
    case 4:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DAB90(p, 3);
        break;
    }
}

#define VMOVE260(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline unsigned short ang_260(float d) {
    return (short)(int)(65536.0f * d / 360.0f + 0.5f);
}

static inline void setbit_260(int k) {
    int w = k / 32;
    D_01DFAB70[w] |= 1 << (k - w * 32);
}

void func_00260110(char *p) {
    float v[4] __attribute__((aligned(16)));
    short s;
    unsigned short t;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0xC0));
        func_002490F0(p, 0xD, 4, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            s = (unsigned short)(short)(int)(65536.0f * *(float *)(*(char **)(p + 0x2844) + 0x55C) / 360.0f + 0.5f);
            if (*(unsigned char *)(p + 0x3B9D) == 1) {
                VMOVE260(v, *(char **)(((char **)(p + 0x1388))[func_002D9EB0(p)] + 0x104));
                f = func_001324B0(p + 0x3C40, v);
                s = func_00131D10(func_00131B50(*(float *)(p + 0x3C44) - v[1]), f);
                t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x564));
                if (s < t) {
                    s = t;
                } else {
                    t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x568));
                    if (t < s) s = t;
                }
            }
            f = *(float *)(*(char **)(p + 0x2844) + 0x560);
            func_002DBD20(p, f * func_00131C20(s), 0.0f);
            func_002DBCC0(p, 1, -f * func_00131BA0(s), 0.0f);
            func_002DBD00(p);
            *(short *)(p + 0x28DE) = *(short *)(p + 0x90);
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0xE, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x64, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_002490F0(p, 0xD, 5, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                setbit_260(0xE);
            } else {
                setbit_260(0x64);
            }
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
            func_002496D0(p);
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_00260530(char *p) {
    float v[4] __attribute__((aligned(16)));
    short s;
    unsigned short t;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xC0));
        func_002490F0(p, 7, 0xC, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            s = (unsigned short)(short)(int)(65536.0f * *(float *)(*(char **)(p + 0x2844) + 0x55C) / 360.0f + 0.5f);
            if (*(unsigned char *)(p + 0x3B9D) == 1) {
                VMOVE260(v, *(char **)(((char **)(p + 0x1388))[func_002D9EB0(p)] + 0x104));
                f = func_001324B0(p + 0x3C40, v);
                s = func_00131D10(func_00131B50(*(float *)(p + 0x3C44) - v[1]), f);
                t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x564));
                if (s < t) {
                    s = t;
                } else {
                    t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x568));
                    if (t < s) s = t;
                }
            }
            f = *(float *)(*(char **)(p + 0x2844) + 0x560);
            func_002DBD20(p, f * func_00131C20(s), 0.0f);
            func_002DBCC0(p, 1, -f * func_00131BA0(s), 0.0f);
            func_002DBD00(p);
            *(short *)(p + 0x28DE) = *(short *)(p + 0x90);
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0xE, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x64, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_002490F0(p, 7, 0xD, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                setbit_260(0xE);
            } else {
                setbit_260(0x64);
            }
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
            func_002496D0(p);
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_0031A720(char *p) {
    float v[4] __attribute__((aligned(16)));
    short s;
    unsigned short t;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xC0));
        func_002490F0(p, 0x1F, 0x2C, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            s = (unsigned short)(short)(int)(65536.0f * *(float *)(*(char **)(p + 0x2844) + 0x55C) / 360.0f + 0.5f);
            if (*(unsigned char *)(p + 0x3B9D) == 1) {
                VMOVE260(v, *(char **)(((char **)(p + 0x1388))[func_002D9EB0(p)] + 0x104));
                f = func_001324B0(p + 0x3C40, v);
                s = func_00131D10(func_00131B50(*(float *)(p + 0x3C44) - v[1]), f);
                t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x564));
                if (s < t) {
                    s = t;
                } else {
                    t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x568));
                    if (t < s) s = t;
                }
            }
            f = *(float *)(*(char **)(p + 0x2844) + 0x560);
            func_002DBD20(p, f * func_00131C20(s), 0.0f);
            func_002DBCC0(p, 1, -f * func_00131BA0(s), 0.0f);
            func_002DBD00(p);
            *(short *)(p + 0x28DE) = *(short *)(p + 0x90);
            func_002F30B0(0x4D, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_002490F0(p, 0x1F, 0x2D, -1, 0, 0, -1.0f);
            setbit_260(0x4D);
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
            func_002496D0(p);
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_0025D460(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *g;
    float d;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x6C));
        d = *(float *)(p + 0x54) - *(float *)(p + 0x2924);
        if (d < *(float *)(*(char **)(p + 0x2844) + 0x70)) {
            func_002490F0(p, 3, 0xA, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2858) = 0;
        } else if (d < *(float *)(*(char **)(p + 0x2844) + 0x74)) {
            func_002490F0(p, 3, 0x28, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2858) = 1;
        } else {
            func_002490F0(p, 3, 0x29, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2858) = 2;
        }
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x64), *(float *)(*(char **)(p + 0x2844) + 0x68));
        func_002DBD30(p);
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            switch (*(short *)(p + 0x2858)) {
            case 0:
                func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x78), *(float *)(*(char **)(p + 0x2844) + 0x7C));
                break;
            case 1:
                func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x80), *(float *)(*(char **)(p + 0x2844) + 0x84));
                break;
            case 2:
                func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x88), *(float *)(*(char **)(p + 0x2844) + 0x8C));
                break;
            }
            func_002DBD30(p);
            *(short *)(p + 0x2856) = 0;
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (*(short *)(p + 0x2856) == 0) func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 2) *(short *)(p + 0x2856) = 1;
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CB50(p, 1);
            func_0021CB60(p, 2);
            func_0021CBB0(p, 1);
            g = func_00207480(3, 0x8E, 0, 8);
            if (g) {
                *(char **)(g + 0x94) = *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
                g[0x99] = 0;
            }
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105230((char *)m, (char *)m, p + 0x50);
            m[15] = 1.0f;
            switch (*(unsigned char *)(p + 0x2928)) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
                func_00207480(0, 0x2C, (char *)m, 8);
                break;
            case 11:
                func_00207480(3, 0xF2, (char *)m, 8);
                break;
            case 12: case 13: case 14: case 15:
                break;
            }
            func_00330B50(D_01DFABA0, 4, p + 0x50, 0);
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
        }
        break;
    case 3:
        if ((unsigned char)func_0023E110(p) == 1 && !(*(float *)(p + 0x54) <= *(float *)(p + 0x2924))) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64);
            if (*(float *)(p + 0x54) < *(float *)(p + 0x2924)) *(float *)(p + 0x54) = *(float *)(p + 0x2924);
        }
        if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 0xA);
        break;
    }
}

#define QCOPY268E(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VMOVE268E(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline signed char find_268E(char *p, signed char k) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)((char *)i + (int)p + 0x3D4C) == k) return i;
    }
    return -1;
}

void func_00268EE0(char *p) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    signed char s;
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0x16, 0, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x5A8));
        (*(unsigned char *)(p + 0x2850))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5)) {
            VMOVE268E(w, *(char **)(((char **)(p + 0x1390))[func_002D9EB0(p)] + 0x104));
            QCOPY268E(v, p + 0x3C40);
            if (*(unsigned char *)(p + 0x3B9D) == 0) {
                v[0] = w[0] + 1500.0f * func_00131BA0(*(short *)(p + 0x90));
                v[1] = w[1];
                v[2] = w[2] + 1500.0f * func_00131C20(*(short *)(p + 0x90));
                v[3] = 1.0f;
            }
            func_00495110(p, *(char **)(func_002D9C80(p, 9, 1) + 0x104), *(short *)(p + 0x90));
            *(float *)(p + 0x2870) = 30.0f;
            *(float *)(p + 0x2874) = 300.0f;
            s = find_268E(p, 9);
            *(float *)((char *)(s * 4) + (int)p + 0x3D74) = 10.0f + *(float *)(p + 0x2870);
            *(unsigned char *)((char *)s + (int)p + 0x3D68) = 1;
            (*(unsigned char *)(p + 0x2850))++;
        }
        break;
    case 2:
        func_002496D0(p);
        s = find_268E(p, 9);
        *(float *)((char *)(s * 4) + (int)p + 0x3D74) = 10.0f;
        if (*(unsigned char *)((char *)s + (int)p + 0x3D68) == 1) {
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) <= 0.0f &&
                (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x20) * 2))) {
                *(unsigned char *)((char *)s + (int)p + 0x3D68) = 2;
                *(float *)(p + 0x2874) = 120.0f;
            }
        }
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2874) <= 0.0f || *(unsigned char *)((char *)s + (int)p + 0x3D68) == 3) {
            func_002490F0(p, 0x16, 1, -1, 0, 0, -1.0f);
            (*(unsigned char *)(p + 0x2850))++;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_00275DE0(char *p) {
    float f;
    char *q;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(unsigned char *)(p + 0x2866) = 1;
        *(float *)(p + 0x2870) = 1.0f;
        f = *(float *)(p + 0x3C88);
        if (0.0f == f) f = 1.0f;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        switch (*(unsigned char *)(p + 0x2998)) {
        case 0xBE:
            func_002490F0(p, 0x18, 0xF, -1, 0, 0, -1.0f);
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x254) * (*(float *)(q + 0x250) + f * *(float *)(q + 0x24C));
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x218));
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 0xBF:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x11, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x25, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x26, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x27, -1, 0, 0, -1.0f); break;
            }
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x23C) * (*(float *)(q + 0x238) + f * *(float *)(q + 0x234));
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x2C8);
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC0:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x28, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x29, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x2A, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x2B, -1, 0, 0, -1.0f); break;
            }
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x248) * (*(float *)(q + 0x244) + f * *(float *)(q + 0x240));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC1:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x10, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x2D, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x2E, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x2F, -1, 0, 0, -1.0f); break;
            }
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x254) * (*(float *)(q + 0x250) + f * *(float *)(q + 0x24C));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(float *)(p + 0x2A1C) < 1.0f) *(float *)(p + 0x2A1C) = 1.0f;
        *(unsigned char *)(p + 0x299A) = *(unsigned char *)(p + 0x2998);
        *(float *)(p + 0x2A18) = *(float *)(p + 0x2A1C) * func_002D8B50(p);
        *(float *)(p + 0x3C90) = 0.0f;
        if (*(unsigned char *)(p + 0x2998) != 0xBE) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        *(unsigned char *)(p + 0x299D) = 0;
        if (*(unsigned char *)(p + 0x3C86)) func_002F30B0(0x3D, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        func_002F30B0(0xF, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        break;
    case 1:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x10, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x2D, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x2E, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x2F, -1, 0, 0, -1.0f); break;
            }
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xBE && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        func_002DBAA0(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    case 2:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x20000000;
            D_01DFAB70[0] = D_01DFAB70[0] | 0x8000;
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xBE && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        func_002DBAA0(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    }
}

void func_00276520(char *p) {
    float f;
    char *q;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(unsigned char *)(p + 0x2866) = 1;
        *(float *)(p + 0x2870) = 1.0f;
        f = *(float *)(p + 0x3C88);
        if (0.0f == f) f = 1.0f;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        switch (*(unsigned char *)(p + 0x2998)) {
        case 0xC2:
            func_002490F0(p, 0x18, 0x12, -1, 0, 0, -1.0f);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1C8), *(float *)(*(char **)(p + 0x283C) + 0x1CC));
            *(float *)(p + 0x2A1C) = 0.1f * *(float *)(p + 0x3C88);
            *(unsigned char *)(p + 0x2866) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x218));
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 0xC3:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x14, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x31, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x32, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x33, -1, 0, 0, -1.0f); break;
            }
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1D0), *(float *)(*(char **)(p + 0x283C) + 0x1D4));
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x23C) * (*(float *)(q + 0x238) + f * *(float *)(q + 0x234));
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x2C8);
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC4:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x34, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x35, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x36, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x37, -1, 0, 0, -1.0f); break;
            }
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1D8), *(float *)(*(char **)(p + 0x283C) + 0x1DC));
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x248) * (*(float *)(q + 0x244) + f * *(float *)(q + 0x240));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC5:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x13, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x39, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x3A, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x3B, -1, 0, 0, -1.0f); break;
            }
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1E0), *(float *)(*(char **)(p + 0x283C) + 0x1E4));
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x254) * (*(float *)(q + 0x250) + f * *(float *)(q + 0x24C));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(float *)(p + 0x2A1C) < 1.0f) *(float *)(p + 0x2A1C) = 1.0f;
        *(unsigned char *)(p + 0x299A) = *(unsigned char *)(p + 0x2998);
        *(float *)(p + 0x2A18) = *(float *)(p + 0x2A1C) * func_002D8B50(p);
        *(float *)(p + 0x3C90) = 0.0f;
        if (*(unsigned char *)(p + 0x2998) != 0xC2) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        *(unsigned char *)(p + 0x299D) = 0;
        func_002DBCA0(p, 1);
        func_0021CA00(p, 0);
        if (*(unsigned char *)(p + 0x3C86)) func_002F30B0(0x3D, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        func_002F30B0(0xF, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        break;
    case 1:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x13, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x39, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x3A, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x3B, -1, 0, 0, -1.0f); break;
            }
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xC2 && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        func_002DB940(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    case 2:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x20000000;
            D_01DFAB70[0] = D_01DFAB70[0] | 0x8000;
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xC2 && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) *(float *)(p + 0x74) = -1.5f;
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, 0.0f)) {
            func_0021BFC0(p);
            break;
        }
        func_002DB940(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    }
}

static inline unsigned char both_21B(char *p) {
    if (*(unsigned char *)(p + 0x28AE) == 1 && *(unsigned char *)(p + 0x28A9) == 1) return 1;
    return 0;
}

static inline signed char fs_21B(char *p) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)(p + i + 0x3D4C) == 0) {
            return (signed char)i;
        }
    }
    return -1;
}

static inline unsigned char busy2_21B(char *o) {
    if (*(int **)(o + 8) && **(int **)(o + 8)) return 1;
    if (*(int *)(o + 0x1C) - *(int *)(o + 0x20)) return 1;
    if (*(unsigned char *)(o + 0x1A) == 1) return 1;
    return 0;
}

static inline unsigned char busyo_21B(char *o) {
    if (o) return busy2_21B(o);
    return 0;
}

void func_0021B790(char *p, int k) {
    char *o;
    func_002DBCE0(p);
    *(unsigned char *)(p + 0x24D0) = k;
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
    *(unsigned char *)(p + 0x2998) = 0;
    if (both_21B(p) == 1) {
        func_002490F0(p, 6, 0x34, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
        func_0021C7A0(p, 0x22);
        return;
    }
    *(unsigned char *)(p + 0x28A9) = 0;
    if (*(unsigned char *)(p + 0x3C6E) == 1 && !(*(unsigned int *)(p + 0x2898) & 2)) {
        func_00430DA0(p, 0, 0);
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
    *(float *)(p + 0x2870) = 2.0f;
    *(float *)(p + 0x2874) = 600.0f;
    *(unsigned char *)(p + 0x28A5) = 2;
    *(unsigned char *)(p + 0x29A1) = 0;
    *(unsigned char *)(p + 0x29A0) = 0;
    *(unsigned char *)(p + 0x299F) = 0;
    *(unsigned char *)(p + 0x3C6D) = 2;
    if (*(signed char *)(p + 0x46) == 1) {
        func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
        func_0021C7A0(p, 1);
        return;
    }
    if (*(unsigned char *)(p + 0x3C6C) == 0 && fs_21B(p) != -1 && *(signed char *)(p + 0x3D49) == 0 &&
        (unsigned char)func_002DA0B0(p, 0)) {
        *(float *)(p + 0x2870) = 1000000.0f;
        func_002490F0(p, 0xD, 6, -1, 2, *(unsigned char *)(p + 0x24D0), 10.0f);
    } else {
        o = *(char **)(*(char **)D_01CAFF0C + 0x20);
        if ((busyo_21B(o) == 1 && *(unsigned char *)(p + 0x284B) == 0x11) || busyo_21B(o) == 1) {
            switch (*(signed char *)(p + 0x3D49)) {
            case 0:
                if ((unsigned char)func_002DA0B0(p, 0) && *(unsigned char *)(p + 0x3C6C) == 0) {
                    func_002490F0(p, 0xD, 6, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                } else {
                    func_002490F0(p, 3, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                }
                break;
            case 1:
                func_002490F0(p, 4, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 2:
                func_002490F0(p, 5, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 3:
                func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 4:
                func_002490F0(p, 7, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 5:
                func_002490F0(p, 8, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 6:
                func_002490F0(p, 9, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 7:
                func_002490F0(p, 0xA, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 8:
                func_002490F0(p, 0xB, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 9:
                func_002490F0(p, 0xC, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 10:
            case 11:
            case 12:
            case 13:
                func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            }
        } else {
            func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
        }
    }
    func_0021C7A0(p, 1);
    return;
    }
    func_0021BDB0(p, k, 1);
}

int func_002452A0(char *p, float lim) {
    float d8C;
    float f88;
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    float v50[4] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    short ang;
    float e;
    short a;
    d8C = 100000.0f;
    if (*(unsigned char *)(p + 0x290D) == 1) return 0;
    func_00245810(p, p + 0x50, &d8C, 300.0f);
    if (!(300.0f + *(float *)(p + 0x54) <= d8C)) return 0;
    ang = func_002DACC0(p);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v70), "r"(p + 0x50) : "memory");
    v70[1] = v70[1] + 100.0f;
    if (func_00245EF0(p, v70, ang, &f88, p + 0x2928, 0x1000, 100.0f) == 1) {
        v60[0] = *(float *)(p + 0x2950);
        v60[1] = *(float *)(p + 0x2954);
        v60[2] = *(float *)(p + 0x2958);
        v60[3] = 1.0f;
        e = func_0011DBE0(v60[1], func_00132510(v60));
        if (e < 0.5235988f) {
            if (!(e <= -0.5235988f)) {
                v60[1] = 0.0f;
                func_00132540(v60, v60, 100.0f);
                v60[0] = v70[0] - v60[0];
                v60[1] = v70[1];
                v60[2] = v70[2] - v60[2];
                if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v70, v60, v40, p + 0x2928, 0) == 1) {
                    v60[0] = func_00131BA0(ang);
                    v60[1] = 0.0f;
                    v60[2] = func_00131C20(ang);
                    v60[3] = 1.0f;
                    v50[0] = *(float *)(p + 0x2950);
                    v50[1] = *(float *)(p + 0x2954);
                    v50[2] = *(float *)(p + 0x2958);
                    v50[3] = 1.0f;
                    f88 = func_00132D80(v60, v50);
                    if (f88 < lim) {
                        v50[0] = v50[0] * -1.0f;
                        v50[2] = v50[2] * -1.0f;
                        if (func_00245590(p, v70, v50, p + 0x2928, -0.5235988f, 300.0f) == 1) {
                            a = func_00131D10(v50[0], v50[2]);
                            if ((short)(a - ang) > 0) {
                            *(short *)(p + 0x28DC) = a - 0x4000;
                            *(unsigned char *)(p + 0x3C6D) = 0;
                            } else {
                            *(short *)(p + 0x28DC) = a + 0x4000;
                            *(unsigned char *)(p + 0x3C6D) = 1;
                            }
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

char *func_002075D0(unsigned char type, int id, float *src, unsigned char mode, unsigned char fl) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *r;
    int i;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    switch (mode) {
    case 0:
        func_00105300(m, src);
        break;
    case 1:
        m[12] = src[12];
        m[13] = src[13];
        m[14] = src[14];
        break;
    case 2:
        func_00105300(m, src);
        m[12] = 0.0f;
        m[13] = 0.0f;
        m[14] = 0.0f;
        break;
    case 3:
        func_00105300(m, src);
        for (i = 0; i < 3; i++) {
            v[0] = m[i * 4 + 0];
            v[1] = m[i * 4 + 1];
            v[2] = m[i * 4 + 2];
            v[3] = 1.0f;
            func_00131650(v, v);
            m[i * 4 + 0] = v[0];
            m[i * 4 + 1] = v[1];
            m[i * 4 + 2] = v[2];
        }
        break;
    }
    switch (type) {
    case 0:
        r = func_001B4250(m, 0, id, 0);
        break;
    case 1:
        r = func_001EDE80(m, 0, id, 0);
        break;
    case 2:
        r = func_001B11B0(m, 0, id, 0);
        break;
    case 3:
        r = func_00205A00(m, 0, id, 0);
        break;
    }
    if (r) *(unsigned int *)(r + 0xC) |= fl;
    return r;
}

void func_003FD0A0(char *p) {
    char *o;
    if (*(char **)(p + 0x174)) func_001AD140(*(char **)(p + 0x174));
    switch (*(unsigned char *)(p + 0x150)) {
    case 0: case 1: case 2: case 3: case 4:
        *(char **)(p + 0x174) = func_00207470(3, 0x1CF, 0);
        break;
    case 5: case 6:
        *(char **)(p + 0x174) = func_00207470(3, 0x21E, 0);
        break;
    }
    o = *(char **)(p + 0x174);
    if (o) {
        *(char **)(o + 0x90) = p + 0x1A0;
        *(unsigned char *)(o + 0x9A) = 3;
        *(unsigned char *)(*(char **)(p + 0x174) + 0x3A) = 1;
    }
}

void func_003F7BE0(char *p) {
    char *o;
    if (*(char **)(p + 0x3A0)) return;
    switch (*(signed char *)(p + 0x46)) {
    case 0x23: case 0x24: case 0x25:
        *(char **)(p + 0x3A0) = func_00207480(3, 0x2D2, 0, 0x10);
        break;
    case 0x26:
        *(char **)(p + 0x3A0) = func_00207480(3, 0x2D3, 0, 0x10);
        break;
    case 0x27: case 0x28:
        *(char **)(p + 0x3A0) = func_00207480(3, 0x2D4, 0, 0x10);
        break;
    }
    o = *(char **)(p + 0x3A0);
    if (o) {
        *(char **)(o + 0x90) = p + 0x410;
        *(unsigned char *)(o + 0x9A) = 1;
        *(unsigned char *)(*(char **)(p + 0x3A0) + 0x3A) = 1;
    }
    o = func_00207480(3, 0xDC, 0, 0x10);
    if (o) {
        *(char **)(o + 0x90) = p + 0x410;
        *(unsigned char *)(o + 0x9A) = 1;
        *(unsigned char *)(o + 0x3A) = 1;
        *(unsigned char *)(o + 0x9C) = 0x40;
        *(unsigned char *)(o + 0x9D) = 0x20;
        *(unsigned char *)(o + 0x9E) = 0x80;
        *(unsigned char *)(o + 0x9B) = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, p + 0x50, 0, 0, 0);
}

void func_004235F0(char *p) {
    char *q;
    *(unsigned int *)(p + 0x45C) |= 0x20000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, 0xD);
        *(int *)(p + 0x4BC) = 0;
        *(float *)(p + 0x458) = 2.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (*(char **)(p + 0x1494)) *(unsigned char *)(*(char **)(p + 0x1494) + 0xA1) = 0;
        *(unsigned int *)(p + 0x45C) |= 0x80000000;
        *(unsigned int *)(p + 0x45C) |= 0x8000000;
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) *(unsigned char *)(p + 6) = 2;
        break;
    case 2:
        q = p + 0x400;
        func_00207480(3, 0x1D8, q, 0x10);
        if (*(char **)(p + 0x1494)) *(unsigned char *)(*(char **)(p + 0x1494) + 0xA1) = 1;
        func_0048B3F0(p);
        *(float *)(p + 0x458) = 100.0f;
        *(float *)(p + 0x4BC) = 30.0f;
        *(int *)(p + 0x4C4) = 0;
        func_00207480(3, 0x1D8, q, 0x10);
        *(unsigned char *)(p + 6) = 3;
    case 3:
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) {
            func_0048B3F0(p);
            *(unsigned char *)(p + 6) = 4;
        }
        break;
    case 4:
        *(int *)(p + 0x4BC) = 0;
        *(float *)(p + 0x458) = 350.0f;
        *(unsigned char *)(p + 6) = 5;
    case 5:
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1) func_0048AF80(p, 0);
        break;
    }
}

void func_00316A00(char *p) {
    unsigned char v;
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) v = 1;
    else v = 0;
    *(unsigned char *)(p + 0x2B6) = v;
    *(int *)(p + 0x2B0) = *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A);
    *(short *)(p + 0x2B4) = func_0034B940(p + 0x80, p + 0x70);
    switch (*(unsigned char *)(p + 0x2B7)) {
    case 0:
        func_00316D80(p);
        *(unsigned char *)(p + 0x2B7) = 1;
        break;
    case 1:
        if (D_01CAFF38[0] != 0x191) {
            func_00228300(&D_005BE190);
            func_00228300(&D_005BE194);
            if (D_005BE190 == 0 && D_005BE194 == 0) {
                *(unsigned char *)(p + 0x2B7) = 2;
                return;
            }
        }
        *(float *)(p + 0x228) = 0.95f;
        *(float *)(p + 0x22C) = 0.95f;
        *(float *)(p + 0x230) = 0.95f;
        *(float *)(p + 0x234) = 0.95f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1B0), "r"(p + 0x70) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1C0), "r"(p + 0x80) : "memory");
        switch (D_005BE11C) {
        case 0:
            break;
        case 1:
            func_004E8500(p);
            break;
        case 2:
            func_004E8980(p);
            break;
        case 8:
            func_00317B50(p);
            break;
        case 11:
            func_005080A0(p);
            break;
        case 6:
            func_005090D0(p);
            break;
        case 7:
            func_00507A90(p);
            break;
        case 5:
            func_004F56C0(p);
            break;
        case 4:
            func_004FE000(p);
            break;
        case 3:
            *(float *)(p + 0x230) = 0.95f;
            func_004E8120(p);
            break;
        case 12:
            func_00506900(p);
            break;
        case 10:
            func_00509600(p);
            break;
        case 9:
            func_005086C0(p);
            break;
        case 13:
            func_00317A30(p);
            break;
        }
        break;
    case 2:
        func_00317850(p);
        D_005BE11C = -0x80;
        break;
    }
    D_005BE124 = 0;
}

int func_00430820(char *p, char *b, int a, int x) {
    float f;
    *(char **)(p + 0x2AEC) = b;
    f = 0.0f;
    *(int *)(p + 0x2AE8) = a;
    switch (*(unsigned char *)(p + 0x3C80)) {
    case 0:
        if ((unsigned char)func_00430C20(p, b, a, x, 0, 0) == 0) return 0;
        func_00332AE0(p + 0x3D90, 0x1A4, *(float *)(*(char **)(p + 0x283C) + 0xB0), *(float *)(*(char **)(p + 0x283C) + 0xAC));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x148));
        f = *(float *)(b + 4);
        break;
    case 1:
        if ((unsigned char)func_00430C20(p, b, a, x, 0, 0) == 0) return 0;
        func_00332AE0(p + 0x3D90, 0x1A5, *(float *)(*(char **)(p + 0x283C) + 0xB8), *(float *)(*(char **)(p + 0x283C) + 0xB4));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x14C));
        f = *(float *)(b + 4) * *(float *)(*(char **)(p + 0x283C) + 0x188);
        break;
    case 2:
        break;
    case 3:
        func_00332AE0(p + 0x3D90, 0x2BC, *(float *)(*(char **)(p + 0x283C) + 0xA0), *(float *)(*(char **)(p + 0x283C) + 0x9C));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x150));
        f = *(float *)(b + 4) * *(float *)(*(char **)(p + 0x283C) + 0x180);
        *(float *)(p + 0x2AF0) = *(float *)(*(char **)(p + 0x283C) + 0x1F4);
        break;
    case 4:
        if ((unsigned char)func_00430C20(p, b, a, x, 4, 0) == 0) return 0;
        func_00332AE0(p + 0x3D90, 0x1A6, *(float *)(*(char **)(p + 0x283C) + 0xA8), *(float *)(*(char **)(p + 0x283C) + 0xA4));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x154));
        f = *(float *)(b + 4) * *(float *)(*(char **)(p + 0x283C) + 0x184);
        break;
    case 5:
        func_0021C7A0(p, 0x14);
        *(float *)(p + 0x2AD4) = *(float *)(p + 0x2AD4) + *(float *)(b + 4) / *(float *)(*(char **)(p + 0x283C) + 0x2CC);
        if (*(float *)(p + 0x2AD4) > *(float *)(p + 0x2AA8)) *(float *)(p + 0x2AD4) = *(float *)(p + 0x2AA8);
        return 1;
    case 6:
        break;
    }
    func_0021C7A0(p, 0x14);
    func_0021CB50(p, 0x40000);
    func_002E1AB0(p, b);
    if (func_00131B50(360.0f * *(short *)(p + 0x90) / 65536.0f - 360.0f * *(short *)(p + 0x2AE4) / 65536.0f) > 20.0f) {
        *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
    }
    *(float *)(p + 0x3C88) = *(float *)(p + 0x3C88) + f;
    func_00430AD0(p);
    return 1;
}

void func_003FB9D0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    char *e;
    func_001AD100(p);
    func_00206730(p + 0x174);
    func_00286040(p + 0x178);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
        *(unsigned char *)(p + 7) = 0;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x1A0) : "memory");
        v[0] = 0.0f;
        v[1] = 1.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_00133890(p + 0x1A0, p + 0x60, v);
        *(float *)(p + 0x1D0) = *(float *)(p + 0x50);
        *(float *)(p + 0x1D4) = *(float *)(p + 0x54);
        *(float *)(p + 0x1D8) = *(float *)(p + 0x58);
        *(float *)(p + 0x1DC) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x190), "r"(p + 0x180) : "memory");
        *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
        switch (*(unsigned char *)(p + 0x150)) {
        case 0: *(int *)(p + 0x440) = 0x28; break;
        case 1: *(int *)(p + 0x440) = 0x29; break;
        case 2: *(int *)(p + 0x440) = 0x2A; break;
        case 3: *(int *)(p + 0x440) = 0x2A; break;
        case 4: *(int *)(p + 0x440) = 0x2A; break;
        case 5: *(int *)(p + 0x440) = 0x2B; break;
        case 6: *(int *)(p + 0x440) = 0x2C; break;
        }
        e = D_005BC2E0 + (*(int *)(p + 0x440) << 6);
        *(signed char *)(p + 0x400) = *(signed char *)(e + 0x0);
        *(signed char *)(p + 0x401) = *(signed char *)(e + 0x1);
        *(signed char *)(p + 0x402) = *(signed char *)(e + 0x2);
        *(float *)(p + 0x404) = *(float *)(e + 0x4);
        *(float *)(p + 0x408) = *(float *)(e + 0x8);
        *(float *)(p + 0x40C) = *(float *)(e + 0xC);
        *(float *)(p + 0x410) = *(float *)(e + 0x10);
        *(float *)(p + 0x414) = *(float *)(e + 0x14);
        *(signed char *)(p + 0x418) = *(signed char *)(e + 0x18);
        *(float *)(p + 0x41C) = *(float *)(e + 0x1C);
        *(signed char *)(p + 0x420) = *(signed char *)(e + 0x20);
        *(float *)(p + 0x424) = *(float *)(e + 0x24);
        *(float *)(p + 0x428) = *(float *)(e + 0x28);
        *(float *)(p + 0x42C) = *(float *)(e + 0x2C);
        *(unsigned char *)(p + 0x430) = *(unsigned char *)(e + 0x30);
        *(int *)(p + 0x434) = *(int *)(e + 0x34);
        *(float *)(p + 0x438) = *(float *)(e + 0x38);
        *(signed char *)(p + 0x43C) = *(signed char *)(e + 0x3C);
        *(signed char *)(p + 0x43D) = *(signed char *)(e + 0x3D);
        *(signed char *)(p + 0x43E) = *(signed char *)(e + 0x3E);
        switch (*(unsigned char *)(p + 0x151)) {
        case 0:
            break;
        case 1:
            *(float *)(p + 0x404) = *(float *)(p + 0x404) * 1.1f;
            break;
        case 2:
            *(float *)(p + 0x404) = *(float *)(p + 0x404) * 1.3f;
            break;
        }
        func_0028C200(p + 0x1E0, (char *)&D_005BCFC8, D_0056A010, 1, p + 0x400, p, 0);
        func_0028C8E0(p + 0x1E0, 0);
        func_0028C910(p + 0x1E0);
        *(int *)(p + 0x2B8) = 0x30F3F;
        func_0028C3A0(p + 0x1E0, 0, -1, p + 0x1A0);
        func_0028C3A0(p + 0x1E0, 1, -1, p + 0x1A0);
        func_0028C5C0(p + 0x1E0, 0, *(float *)(p + 0x10));
        func_003FD0A0(p);
        *(char **)(p + 0x178) = func_002FF750(0x13, p + 0x1A0, 0);
        *(float *)(p + 0x168) = 300.0f;
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x150)) {
        case 0:
        case 1:
        case 5:
            func_003FBDA0(p);
            break;
        case 2:
        case 3:
        case 4:
        case 6:
            func_003FBFA0(p);
            break;
        }
        if (*(char **)(p + 0x178) != 0) func_003023F0(*(char **)(p + 0x178));
        break;
    case 2:
        func_001AD140(p);
        break;
    }
}

static inline void col38A(char *o, unsigned char a, unsigned short h) { unsigned char d = (h >> 8) & 0xFF; unsigned char c = h & 0xFF; if (o != 0) { o[0xC4] = a; o[0xC5] = 0; o[0xC6] = c; o[0xC7] = d; } }

void func_0038AE40(char *p) {
    int m;
    char *o;
    func_0038B130(p);
    *(unsigned char *)(p + 0x3B0) = 0;
    m = 0;
    if (*(unsigned char *)(p + 0x114) != 0) {
        m |= 0xF000;
        *(unsigned char *)(p + 0x3B0) |= 4;
    }
    if (*(unsigned char *)(p + 0x115) != 0) {
        *(unsigned char *)(p + 0x3B0) |= 4;
        m |= 0x10000;
    }
    if (*(unsigned char *)(p + 0x116) != 0) {
        *(unsigned char *)(p + 0x3B0) |= 1;
        if (*(unsigned char *)(p + 0x117) == 1) {
            if (*(unsigned char *)(p + 0x118) == 1) {
                m |= 0x3C0;
            } else {
                m |= 0xC0;
            }
        } else if (*(unsigned char *)(p + 0x118) == 1) {
            m |= 0x300;
        } else {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0x3B0) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    func_002F7660(p + 0x3C0, p + 0xDC);
    if (*(unsigned char *)(p + 0x116) != 0) {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 4, D_00562DB0 + *(short *)(p + 0x11A) * 64, p, 0);
    } else {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 4, 0, p, 0);
    }
    func_0028C8E0(p + 0x190, 0);
    func_0028C910(p + 0x190);
    *(unsigned char *)(p + 0x193) = 0xD;
    if (*(unsigned char *)(p + 0xDE) != 0) *(unsigned char *)(p + 0x190) = 1;
    *(int *)(p + 0x268) = m;
    func_0028C3A0(p + 0x190, 0, -1, p + 0x140);
    o = *(char **)(p + 0x20C);
    *(int *)(p + 0x410) = *(int *)(p + 0x108);
    col38A(o, *(unsigned char *)(p + 0x410), *(unsigned short *)(p + 0x110));
    *(unsigned char *)(p + 0x45) = 6;
    *(int *)(p + 0xC) |= 0x40;
}

static inline unsigned int mt_3DA(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

void func_003DAEC0(char *p) {
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short a;
    int i;
    *(float *)(p + 0xEC4) = 40.0f;
    *(unsigned char *)(p + 0xEFD) = 3;
    *(unsigned char *)(p + 0xF06) = 1;
    *(unsigned char *)(p + 5) = 0;
    i = *(unsigned char *)(p + 0xF02);
    a = func_0034B940(((char **)(*(char **)D_01CAFF0C + 0xC))[i] + 0x50, p + 0x50);
    a = (int)((float)a + 6.283185f * ((float)(int)(mt_3DA() % 10 - 5) / 360.0f));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)a / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    v[2] = 15.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_00104B80(p + 0x60, m, v);
    *(short *)(p + 0x90) = a;
    func_003DD4D0(p);
    *(unsigned char *)(p + 0x1E1) = 0;
}

void func_0043BCD0(char *p, unsigned char k) {
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    char *o;
    float sc;
    float *dst;
    float *src;
    if (*(int *)(p + 0x47DC) > 0) {
        v[1] = 0.0f;
        v[0] = -1.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_0043A150(p, v, *(char **)(*(char **)(p + 0x568) + 0x104));
        if (k == 0) {
            o = *(char **)D_01CAFF0C;
            w[0] = *(float *)(*(char **)(o + 0xC) + 0x50) - *(float *)(p + 0x50);
            w[1] = *(float *)(*(char **)(o + 0xC) + 0x54) - *(float *)(p + 0x54);
            w[2] = *(float *)(*(char **)(o + 0xC) + 0x58) - *(float *)(p + 0x58);
            w[3] = 1.0f;
            if (!(func_00132D80(v, w) <= 0.866025f)) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(w) : "memory");
            }
        }
        func_00131650(v, v);
        sc = D_005BD9EC;
        src = v;
        dst = v;
        asm {
            lqc2 vf4, 0x0(src)
            mfc1 t0, sc
            nop
            qmtc2.ni t0, vf5
            vmulx.xyzw vf6, vf4, vf5x
            sqc2 vf6, 0x0(dst)
        }
        if (func_004722C0(func_004361D0(p), v, *(unsigned char *)(p + 0x485E)) != 0) {
            if (D_01CAFF3C[0] != 4 && *(unsigned char *)(p + 0x485E) != 1) {
                *(int *)(p + 0x47DC) = *(int *)(p + 0x47DC) - 1;
            }
            if (!(*(float *)(p + 0x4834) < 4.0f)) {
                *(float *)(p + 0x4834) = 0.0f;
                func_00330BD0(D_01DFABA0, 0x3E, func_004361D0(p), 0x22, 0);
            }
        }
    } else if (!(*(float *)(p + 0x4834) < 4.0f)) {
        *(float *)(p + 0x4834) = 0.0f;
        func_00330BD0(D_01DFABA0, 0x3C, func_004361D0(p), 0x22, 0);
    }
}

static inline char *base40(char *p) { char *q = p; if (q != 0) { q += 0x40; } return q; }

void func_003D3400(char *p) {
    if ((unsigned char)func_0041D600(p) == 0) {
        return;
    }
    func_00206730(p + 0xB50);
    if (*(unsigned char *)(*(char **)(p + 0xD0) + 0x976) == 0) {
        func_001A5C30(func_00279290(p + 0x240));
    } else {
        func_001A5D00(func_00279290(p + 0x240));
    }
    func_001AD100(p);
    switch (*(unsigned int *)(p + 0xB58) & 0x7F) {
    case 0:
        func_003D3790(p);
        break;
    case 1:
        func_003D3AD0(p);
        break;
    }
    *(int *)(p + 0x80) = 0;
    func_0041D6E0(base40(p), p + 0x60, 1, *(float *)(p + 0x10));
    *(short *)(p + 0xB64) += 3641.0f * *(float *)(p + 0x10);
    *(float *)(p + 0x80) = 6.283185f * ((float)*(short *)(p + 0xB64) / 65536.0f);
    if ((unsigned char)func_0041E120(base40(p), 80.0f) == 1) {
        if ((*(unsigned int *)(p + 0xB58) & 0x7F) == 0) {
            *(float *)(p + 0x68) = 20.0f;
        } else {
            *(float *)(p + 0x68) = 10.0f;
        }
        if (*(unsigned int *)(p + 0xB58) & 0x80) {
            *(float *)(p + 0x64) = 15.0f;
        } else {
            *(int *)(p + 0x64) = 0;
        }
    } else {
        func_0041D820(p + 0x64, -0.4f * *(float *)(p + 0x10), -30.0f);
    }
    func_0041D840(base40(p), p + 0x1B0, 1.0f);
    func_0028C5C0(p + 0x8D0, 0, 1.0f);
    func_00195E20(&D_005BE098, p);
}

typedef struct { unsigned char f; int x; char **pp; } HB;
void func_004BD560(char *);
void func_003852D0(char *);

char *func_00450800(void) {
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
    **q = func_001B0FD0(a, 0x5C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x5C0, t);
        if (r != 0) {
            func_00450930(r);
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
    *(unsigned char *)(o + 0x45) = 6;
    return ret;
}

char *func_004BD3C0(char *p, char *s, short h, unsigned char c, unsigned char d, unsigned char e) {
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
    **q = func_001B0FD0(a, 0x3F0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x3F0, t);
        if (r != 0) {
            func_004BD560(r);
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
        *(char **)(ret + 0x37C) = s;
        *(short *)(ret + 0x90) = h;
        *(unsigned char *)(ret + 0x376) = c;
        *(unsigned char *)(ret + 0x375) = e;
        *(char **)(ret + 0x3EC) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
        *(unsigned char *)(ret + 0x378) = d;
    }
    return ret;
}

typedef struct { float f[3]; } SF3; typedef struct { short h[3]; } SH3;
void func_001EE110(char *);
void func_00207410(char *, char *, char *, char *);
void func_00207460(char *, char *, char *);
extern char D_01DF7E20[];
char *func_0013D2A0(char *, char *, int);
void func_001EE570(char *, char *);
void func_001EE1D0(char *);
extern char D_005A75D0[];
extern char D_005A75F4[];
extern char D_005A7674[];
extern char D_005A7708[];
extern char D_005A77A0[];
extern char D_005AAA98[];
extern char D_005A7770[];
extern char D_005A7760[];
void func_0024F750(char *);
void func_002029E0(char *);
void func_002790E0(char *);
void func_002791E0(char *);
void func_002030F0(char *);
void func_00203090(char *);
void func_00203040(char *);
void func_00202FE0(char *);
void func_0024D930(char *);
void func_0024D9A0(char *);
void func_00100450(char *, void *, void *, int, int);
void func_001FBAB0(char *);
void func_0022C820(char *);
void func_002E1BC0(char *);
void func_002E7840(char *);
void func_002E8A10(char *);
void func_00414E20(char *);
void func_0046EBE0(char *);
void func_0013D6A0(char *);
void func_00332650(char *);
void func_0028C110(char *);
int func_0022CBA0(char *);
void func_0022CBB0(char *, char *);
int func_0012B1A0(char *, char *);
int func_0022CD60(char *);
extern char D_005BC740[8];
extern char D_005BC748[8];

char *func_003850B0(char *sc) {
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
    **q = func_001B0FD0(a, 0x1E0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1E0, t);
        if (r != 0) {
            func_003852D0(r);
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
    *(unsigned char *)(o + 0x54) = *(unsigned char *)sc;
    *(signed char *)(o + 0x55) = *(signed char *)(sc + 1);
    *(unsigned char *)(o + 0x56) = *(unsigned char *)(sc + 2);
    *(unsigned char *)(o + 0x57) = *(unsigned char *)(sc + 3);
    *(signed char *)(o + 0x58) = *(signed char *)(sc + 4);
    *(float *)(o + 0x5C) = *(float *)(sc + 8);
    *(SF3 *)(o + 0x60) = *(SF3 *)(sc + 0xC);
    *(float *)(o + 0x6C) = *(float *)(sc + 0x18);
    *(float *)(o + 0x70) = *(float *)(sc + 0x1C);
    *(SH3 *)(o + 0x74) = *(SH3 *)(sc + 0x20);
    *(SF3 *)(o + 0x7C) = *(SF3 *)(sc + 0x28);
    *(float *)(o + 0x88) = *(float *)(sc + 0x34);
    *(float *)(o + 0x8C) = *(float *)(sc + 0x38);
    *(SH3 *)(o + 0x90) = *(SH3 *)(sc + 0x3C);
    *(unsigned char *)(o + 0x96) = *(unsigned char *)(sc + 0x42);
    *(unsigned char *)(o + 0x97) = *(unsigned char *)(sc + 0x43);
    *(float *)(o + 0x98) = *(float *)(sc + 0x44);
    *(float *)(o + 0x9C) = *(float *)(sc + 0x48);
    *(unsigned char *)(o + 0xA0) = *(unsigned char *)(sc + 0x4C);
    *(int *)(o + 0xA4) = *(int *)(sc + 0x50);
    *(int *)(o + 0xA8) = *(int *)(sc + 0x54);
    return ret;
}

char *func_001EDF40(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
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
        **q = func_001B0FD0(a, 0x7C0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0x7C0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0x7C0, t);
        if (r != 0) {
            func_001EE110(r);
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
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        func_001EE570(ret, a2);
        func_001EE1D0(ret);
    }
    return ret;
}

char *func_00202A50(char *p) {
    char *q;
    char *r;
    int i;
    func_0024F750(p);
    func_002029E0(p + 0xD0);
    *(char **)p = D_005A75D0;
    *(char **)(p + 0x40) = D_005A75F4;
    *(char **)(p + 0xA0) = D_005A7674;
    *(char **)(p + 0xD0) = D_005A7708;
    func_00100450(p + 0x180, (void *)func_002790E0, (void *)func_002791E0, 0x600, 3);
    func_00100450(p + 0x1504, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0xD1);
    func_001FBAB0(p + 0x2214);
    func_00100450(p + 0x23B0, (void *)func_002030F0, (void *)func_00203090, 0x40, 2);
    q = p + 0x2500;
    *(char **)(p + 0x2510) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_00100450(p + 0x25A0, (void *)func_00203040, (void *)func_00202FE0, 0x60, 3);
    q = p + 0x26C0;
    *(char **)(p + 0x27A0) = D_005A7790;
    *(int *)(p + 0x27A8) = 0;
    *(int *)(p + 0x27A4) = 0;
    *(char **)(p + 0x27A0) = D_005A7780;
    func_00277D30(q);
    func_002E7840(p + 0x2A20);
    func_002E8A10(p + 0x2A64);
    func_00414E20(p + 0x2B00);
    r = p + 0x2B58;
    *(char **)(p + 0x2B5C) = D_005A7770;
    *(char **)(p + 0x336C) = D_005A7770;
    *(int *)(p + 0x3B7C) = 0;
    *(int *)(p + 0x3B84) = 0;
    *(int *)(p + 0x3B80) = 0;
    p[0x3B8C] = 0;
    *(int *)(p + 0x3B88) = 0;
    p[0x3B8D] = 0;
    p[0x3B8E] = 0;
    for (i = 0; i < 10; i++) r[i + 0x1037] = -1;
    q = p + 0x3BB0;
    *(char **)(p + 0x3BC0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_0046EBE0(p + 0x3CE0);
    q = p + 0x3D08;
    *(char **)(p + 0x3D08) = D_005A7760;
    func_0013D6A0(q + 4);
    q[0x24] = 0;
    *(int *)(q + 0x20) = 0;
    *(int *)(q + 0x1C) = 0;
    func_0013D6A0(p + 0x3D34);
    func_00332650(p + 0x3D90);
    func_00100450(p + 0x4120, (void *)func_0024D930, (void *)func_0024D9A0, 0xD0, 6);
    func_00100450(p + 0x4600, (void *)func_0024D930, (void *)func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x47A0);
    p[0x44] = -1;
    p[0x45] = 0;
    *(int *)(p + 0x29D0) = 0;
    *(int *)(p + 0x2890) = 0;
    return p;
}

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S311;

int func_00312120(char *, int *, int *, int *, S311 *);
int func_002F6690(S311 *, char *, char *);
float func_001324E0(float *);
extern float D_005BDF44;

static inline int *ent311(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_00311E70(char *p, int *q, char *r) {
    char name[32];
    S311 s;
    unsigned int k;
    int v;
    k = -1;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC740) == 0) {
            if (k == -1) {
                v = func_00312120(p, ent311(q, s.a0 * 10), 0, 0, &s);
            } else {
                v = func_00312120(p, ent311(q, s.a0 * 10), ent311(q, k * 10), ent311(q, k * 10 + 1), &s);
            }
            return v;
        }
        if (func_002F6690(&s, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC748) == 0) {
                k = func_0022CD60(r);
            }
        }
    }
    return 0;
}

void func_003B9F50(char *p) {
    float t[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float l;
    char *g = *(char **)D_01CAFF0C;
    t[0] = *(float *)(*(char **)(g + 0xC) + 0x50);
    t[1] = 150.0f + *(float *)(*(char **)(g + 0xC) + 0x54);
    t[2] = *(float *)(*(char **)(g + 0xC) + 0x58);
    t[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(t), "r"(p + 0x50) : "memory");
    l = func_001324E0(d);
    func_00131650(d, d);
    d[3] = 1.0f;
    l += 300.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(l) : "t0", "memory");
    *(float *)(p + 0x230) = *(float *)(p + 0x50) + d[0];
    *(float *)(p + 0x234) = *(float *)(p + 0x54) + d[1];
    *(float *)(p + 0x238) = *(float *)(p + 0x58) + d[2];
    *(float *)(p + 0x23C) = 1.0f;
    *(unsigned char *)(p + 0x1B6) = 1;
}

void func_004D30B0(char *p) {
    float d[4] __attribute__((aligned(16)));
    float l;
    char *g;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x50), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    l = func_001324E0(d);
    l /= 100.0f;
    l = 1.0f > l ? 1.0f : l;
    l = D_005BDF44 / (l * l);
    func_00131650(d, d);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(l * *(float *)(p + 0x10)) : "t0", "memory");
    g = *(char **)D_01CAFF0C;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(*(char **)(g + 0xC) + 0x50), "r"(d), "r"(*(char **)(g + 0xC) + 0x50) : "memory");
    *(float *)(*(char **)(g + 0xC) + 0x5C) = 1.0f;
}
