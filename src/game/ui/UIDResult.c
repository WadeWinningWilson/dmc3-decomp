/* True-plus-one when all five 0x34-byte entries are in state 4 (written out: MW kept it unrolled). */
int func_00356A70(unsigned char *p, int k) {
    unsigned char all = 1;
    if (p[0x79C0] != 4) all = 0;
    if (p[0x79F4] != 4) all = 0;
    if (p[0x7A28] != 4) all = 0;
    if (p[0x7A5C] != 4) all = 0;
    if (p[0x7A90] != 4) all = 0;
    if ((unsigned char)k == 4 && all == 1) {
        return (unsigned char)k + 1;
    }
    return (unsigned char)k;
}

char *func_00279290(char *);

void func_001A2000(char *, int);

void func_001A1E70(char *, int);

void func_00356570(char *p, unsigned char k, char *l) {
    int i;
    int n = *(int *)(l + 0x10);
    for (i = 0; i < n; i++) {
        if (*(int *)(l + i * 4 + 0x14) == -1) {
            func_001A2000(func_00279290(p + k * 0x600 + 0xC0), i);
        } else {
            func_001A1E70(func_00279290(p + k * 0x600 + 0xC0), i);
        }
    }
}

extern float D_0059E5C0[];

void func_001A3BD0(char *, int, float, float);

void func_003564A0(char *p, unsigned char k, char *l) {
    int i;
    for (i = 0; i < *(int *)(l + 0x10); i++) {
        int v = *(int *)(l + i * 4 + 0x14);
        if (v != -1) {
            float *e = &D_0059E5C0[v * 2];
            func_001A3BD0(func_00279290(p + k * 0x600 + 0xC0), i, e[0], e[1]);
        }
    }
}

typedef struct { int w[13]; } s13t;

void func_00356FC0(char *p, s13t s) {
    int i;
    float x;
    float y;
    for (i = 0; i < 6; i++) {
        int k = s.w[6 + i];
        if (k != -1) {
            x = D_0059E5C0[k * 2];
            y = D_0059E5C0[k * 2 + 1];
        } else {
            x = y = 0.0f;
        }
        func_001A3BD0(func_00279290(p + 0x6C0), i, x, y);
    }
}

typedef struct { char pad[16]; int e[4][33]; char rest[120]; } C357;

void func_00357560(p0, p1) char *p0; int p1; {
    extern unsigned char D_01CAFF3C[];
    extern int D_01CAFF30[];
    extern C357 D_0054A0E0[];
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)D_0054A0E0[D_01CAFF30[0]].e[D_01CAFF3C[0]];
    switch (p1) {
    case 1:
        v5 = *(int *)(p0 + 12);
        if ((v5 < *(int *)(v0 + 0))) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((v5 < *(int *)(v0 + 4))) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((v5 < *(int *)(v0 + 8))) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((v5 < *(int *)(v0 + 12))) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 2:
        v1 = *(int *)(p0 + 12);
        if ((*(int *)(v0 + 16) < v1)) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((*(int *)(v0 + 20) < v1)) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((*(int *)(v0 + 24) < v1)) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((*(int *)(v0 + 28) < v1)) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 3:
        v2 = *(int *)(p0 + 12);
        if ((*(int *)(v0 + 32) < v2)) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((*(int *)(v0 + 36) < v2)) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((*(int *)(v0 + 40) < v2)) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((*(int *)(v0 + 44) < v2)) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 4:
        v3 = *(int *)(p0 + 12);
        if ((v3 < *(int *)(v0 + 48))) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((v3 < *(int *)(v0 + 52))) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((v3 < *(int *)(v0 + 56))) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((v3 < *(int *)(v0 + 60))) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    case 5:
        v4 = *(int *)(p0 + 12);
        if ((v4 < *(int *)(v0 + 64))) {
            *(char *)(p0 + 48) = 4;
        } else {
            if ((v4 < *(int *)(v0 + 68))) {
                *(char *)(p0 + 48) = 3;
            } else {
                if ((v4 < *(int *)(v0 + 72))) {
                    *(char *)(p0 + 48) = 2;
                } else {
                    if ((v4 < *(int *)(v0 + 76))) {
                        *(char *)(p0 + 48) = 1;
                    } else {
                        *(char *)(p0 + 48) = 0;
                    }
                }
            }
        }
        break;
    }
}

int func_003568E0(char *p) {
    extern int D_01CAFF30[];
    extern unsigned char D_0054A0E0[];
    extern unsigned char D_01CAFF3C[];
    signed char r[5];
    float sum;
    int i;
    char *t;
    int r2;
    sum = 0.0f;
    r[0] = *(signed char *)(p + 0x79C0);
    r[1] = *(signed char *)(p + 0x79F4);
    r[2] = *(signed char *)(p + 0x7A28);
    r[3] = *(signed char *)(p + 0x7A5C);
    r[4] = *(signed char *)(p + 0x7A90);
    for (i = 0; i < 5; i++) {
        switch ((unsigned char)r[i]) {
        case 4:
            sum += 5.0f;
            break;
        case 3:
            sum += 4.0f;
            break;
        case 2:
            sum += 3.0f;
            break;
        case 1:
            sum += 2.0f;
            break;
        case 0:
            sum += 1.0f;
            break;
        }
    }
    sum /= 5.0f;
    t = (char *)D_0054A0E0 + D_01CAFF30[0] * 0x298 + D_01CAFF3C[0] * 0x84 + 0x10;
    if (!(sum <= *(float *)(t + 0x50))) {
        r2 = 4;
    } else if (!(sum <= *(float *)(t + 0x54))) {
        r2 = 3;
    } else if (!(sum <= *(float *)(t + 0x58))) {
        r2 = 2;
    } else if (!(sum <= *(float *)(t + 0x5C))) {
        r2 = 1;
    } else {
        r2 = 0;
    }
    return r2;
}

int func_00356B20(char *p) {
    extern int D_01CAFF30[];
    extern unsigned char D_0054A0E0[];
    extern unsigned char D_01CAFF3C[];
    char *e = D_01CAFF3C[0] * 132 + ((char *)D_0054A0E0 + D_01CAFF30[0] * 0x298) + 0x10;
    switch (*(unsigned char *)(p + 0x7AFC)) {
    case 0:
        return *(int *)(e + 0x70);
    case 1:
        return *(int *)(e + 0x6C);
    case 2:
        return *(int *)(e + 0x68);
    case 3:
        return *(int *)(e + 0x64);
    case 4:
        return *(int *)(e + 0x60);
    }
    return 0;
}

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_00355A00(char *p);

void func_00353980(char *);

void func_00353E60(char *);

void func_00353ED0(char *);

void func_00354E40(char *);

void func_00355620(char *);

void func_00355C60(char *);

void func_00355F70(char *);

void func_003563A0(char *);

void func_00356410(char *);

void func_00353880(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0: func_00353980(p); break;
    case 1: func_00353E60(p); break;
    case 2: func_00353ED0(p); break;
    case 3: func_00354E40(p); break;
    case 4: func_00355620(p); break;
    case 5: func_00355A00(p); break;
    case 6: func_00355C60(p); break;
    case 7: func_00355F70(p); break;
    case 8: func_003563A0(p); break;
    case 9: func_00356410(p); break;
    case 10: break;
    }
    if (*(unsigned char *)(p + 0x7965) == 0) func_00195E20(D_005BE098, p);
}

extern signed char D_01CAF516[];

unsigned int func_00356C10(int u, unsigned int t) {
    unsigned int h;
    unsigned int s = t / D_01CAF516[0];
    unsigned int m = s / 60;
    unsigned int mm, ss;
    h = m / 60 % 60;
    mm = m % 60;
    ss = s % 60;
    if (h > 99) h = 99;
    return ss + (h * 10000 + mm * 100);
}

int func_001AD140();

int func_00356470(p0) int p0; {
    int tmp0;
    tmp0 = func_001AD140();
    *(char *)((char *)p0 + 4) = 2;
    return tmp0;
}

int func_00356630(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 10;
    if (*(unsigned char *)(p0 + 5) != tmp0) {
        return 0;
    } else {
        v0 = (*(int *)(p0 + 31084) + 1);
        return v0;
    }
}

int func_00356BD0() {
    extern char D_0054A0E0[];
    extern char D_01CAFF30[];
    extern char D_01CAFF3C[];
    return *(int *)((char (*)[132])((char *)(int)(D_0054A0E0 + (*(int *)D_01CAFF30 * 664)) + 132))[*(unsigned char *)D_01CAFF3C];
}

void func_00356CC0(p0, p1) char *p0; char *p1; {
    char stk[0x40] __attribute__((aligned(16)));
    char *v1;
    int v0;
    v0 = 13;
    v1 = ((stk + 0) + 0);
    do {
        v0 = (v0 + -1);
        *(int *)(v1 + 0) = *(int *)(p1 + 0);
        v1 = (v1 + 4);
        p1 = (p1 + 4);
    } while (v0 > 0);
    *(int *)(p0 + 31544) = 0;
    *(int *)(p0 + 31548) = 0;
    *(int *)(p0 + 31552) = *(int *)((stk + 0) + 16);
    *(char *)(p0 + 31540) = 0;
}

void func_00356460(void) {}

void func_00356660(void) {}

void func_003570B0();

void func_003570A0(int p0, int p1, int p2) {
    func_003570B0(p0, p1, p2, -1);
}
