/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

void func_00490DD0(void) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3106, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3106, x, y, 0x585858, 16, 0xFFFFF2, 1);
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

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0013D640(char *, char *);

void func_0048E9D0(char *);

extern signed char D_01CAFF3C[];

extern unsigned char D_01CAFF3D[];

extern signed char D_005BDD30[8];

char func_002A67F0(int, int);

char *func_0048EB80(int p0, signed char p1, char p2, char p3) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x4340, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0048E9D0(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
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
        *(int *)(ret + 0x38) = p0;
        *(char *)(ret + 0x4302) = p2;
        *(char *)(ret + 0x4303) = p3;
        if (p1 == 0) {
            *(char *)(ret + 0x430F) = func_002A67F0(D_01CAFF3C[0], D_01CAFF3D[0]);
        } else {
            *(signed char *)(ret + 0x430F) = D_005BDD30[p1];
        }
    }
    return ret;
}

void func_0048E970(char *p) {
    switch (*(int *)(p + 8)) {
    case 0:
        *(char *)(p + 0x2D) = 1;
        *(int *)(p + 8) += 1;
    case 1:
        if (*(unsigned char *)(p + 0x2D) == 0) {
            *(char *)(p + 0x2A) = 2;
            *(int *)(p + 4) += 1;
            *(int *)(p + 8) = 0;
        }
        break;
    }
}

extern char D_01DFABA0[];

extern char D_006663C0[];

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

unsigned short func_001AE3B0(char *p, int k);

unsigned char func_0048F870(char *, int);

unsigned char func_004907E0(char *);

static inline int bitA490(char *p) { return (*(unsigned short *)(p + 0x4314) & (1 << *(signed char *)(p + 0x4310))) != 0; }

static inline int bitB490(char *p) { return (*(unsigned short *)(p + 0x4312) & (1 << *(signed char *)(p + 0x430F))) != 0; }

void func_00490220(char *p) {
    unsigned short k;
    unsigned short o1;
    unsigned short o2;
    int c;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        k = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
        o1 = *(signed char *)(p + 0x430F);
        o2 = *(signed char *)(p + 0x4310);
        if (func_001AE360(D_006663C0, 0) & 0x40) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 0x4301) == 0 ? 5 : 6;
            *(unsigned char *)(p + 5) = 0;
        } else if (func_001AE360(D_006663C0, 0) & 0x10) {
            if (*(unsigned char *)(p + 0x4302) == 1) {
                func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            } else {
                func_003303F0(D_01DFABA0, 0, 3, 0, 0);
                *(unsigned char *)(p + 4) = 7;
                *(unsigned char *)(p + 5) = 0;
            }
        } else if (func_001AE360(D_006663C0, 0) & 4) {
            do {
                *(signed char *)(p + 0x4310) = (*(signed char *)(p + 0x4310) - 1) & 7;
            } while (bitA490(p) ^ 1);
        } else if (func_001AE360(D_006663C0, 0) & 8) {
            do {
                *(signed char *)(p + 0x4310) = (*(signed char *)(p + 0x4310) + 1) & 7;
            } while (bitA490(p) ^ 1);
        } else if (k & 0x4000) {
            do {
                do {
                    *(signed char *)(p + 0x430F) = (*(signed char *)(p + 0x430F) + 1) & 0xF;
                } while (bitB490(p) ^ 1);
            } while (*(signed char *)(p + 0x430F) == 9);
        } else if (k & 0x1000) {
            do {
                do {
                    *(signed char *)(p + 0x430F) = (*(signed char *)(p + 0x430F) - 1) & 0xF;
                } while (bitB490(p) ^ 1);
            } while (*(signed char *)(p + 0x430F) == 9);
        } else if (k & 0x2000) {
            if (*(unsigned char *)(p + 0x4301) != 5) {
                (*(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4304))++;
                c = *(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4304);
                if (*(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4309) < c) {
                    c = *(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4309);
                    *(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4304) = c;
                } else {
                    *(unsigned char *)(p + 0x4318) = (func_001AE360(D_006663C0, 0) & 0x2000) ? 8 : 4;
                    func_003303F0(D_01DFABA0, 0, 2, 0, 0);
                }
            }
        } else if (k & 0x8000) {
            if (*(unsigned char *)(p + 0x4301) != 5) {
                (*(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4304))--;
                if (*(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4304) < 1) {
                    c = 1;
                    *(signed char *)((char *)func_0048F870(p, *(signed char *)(p + 0x430F)) + (int)p + 0x4304) = c;
                } else {
                    *(unsigned char *)(p + 0x4317) = (func_001AE360(D_006663C0, 0) & 0x8000) ? 8 : 4;
                    func_003303F0(D_01DFABA0, 0, 2, 0, 0);
                }
            }
        }
        if (o1 != *(signed char *)(p + 0x430F)) {
            *(unsigned char *)(p + 0x4301) = func_0048F870(p, *(signed char *)(p + 0x430F));
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        }
        if (o2 != *(signed char *)(p + 0x4310)) {
            *(signed char *)(p + 0x431C) = *(signed char *)(p + 0x4310);
            func_003303F0(D_01DFABA0, 0, 0xC, 0, 0);
            if (func_001AE360(D_006663C0, 0) & 4) {
                *(unsigned char *)(p + 0x4319) = 8;
            } else if (func_001AE360(D_006663C0, 0) & 8) {
                *(unsigned char *)(p + 0x431A) = 8;
            }
        }
        if (*(unsigned char *)(p + 0x431B) == 1) {
            *(unsigned char *)(p + 0x431B) = func_004907E0(p);
        }
        break;
    }
}

int func_0048F820(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 4) < 9)) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 17152);
        return v0;
    }
}

extern char D_01DFA340[];

int func_00490E60(p0, p1) char *p0; int p1; {
    int func_0030FD40();
    int v0;
    int v1;
    v0 = *(signed char *)(p0 + 17174);
    if (v0 != 0) {
        *(char *)(p0 + 17174) = (v0 + -1);
        v1 = func_0030FD40(D_01DFA340, p1, 264, 172, 0x585858, 16, 0xfffff2, 1);
    }
    return v1;
}

void func_0048F660(void) {}

int func_0048F810(char *p0) {
    return ((*(unsigned char *)(p0 + 4) < 1) ^ 1);
}

extern char D_00586750[];

signed char func_0048F850(char *p0) {
    return *(signed char *)((D_00586750 + (*(signed char *)(p0 + 17167) << 1)) + 0);
}

void func_004907A0(char *p0) {
    *(int *)(p0 + 17184) = 0;
    *(int *)(p0 + 17188) = 0;
    *(char *)(p0 + 17192) = -1;
    *(char *)(p0 + 17193) = 0;
    *(char *)(p0 + 17194) = 0;
    *(char *)(p0 + 17195) = 0;
    *(int *)(p0 + 17196) = 0;
    *(int *)(p0 + 17200) = 1;
    *(char *)(p0 + 17204) = -1;
    *(char *)(p0 + 17205) = 0;
    *(char *)(p0 + 17206) = 0;
    *(char *)(p0 + 17207) = 0;
}
