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
