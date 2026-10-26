 /* small data ($gp) */
extern int D_00586AD0[][8];

int func_004B5D10(char *p, int i) {
    extern signed char D_005BDD50[4];
    int k = D_005BDD50[i];
    int n = *(unsigned char *)(k + *(int *)(p + 13168) + 67);
    if (n >= 8) {
        n = 7;
    }
    return D_00586AD0[k][n];
}

/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

void func_004B6040(void) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3107, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3107, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

extern char D_005A6F50[];

void func_0013D6A0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_002790E0();

void func_002791E0();

extern char D_005B8340[];

char *func_004B35B0(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005B8340;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 16, 0x19);
    func_00100450(p + 0x200, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2C00);
    *(unsigned char *)(p + 0x3270) = 0;
    *(unsigned char *)(p + 0x32F0) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(int *)(p + 0x1D0) = 0;
    *(int *)(p + 0x1D4) = 0;
    *(unsigned char *)(p + 0x3374) = 2;
    *(unsigned char *)(p + 0x3375) = 0;
    *(unsigned char *)(p + 0x3378) = 0;
    *(signed char *)(p + 0x3379) = -1;
    *(unsigned char *)(p + 0x337A) = 0x80;
    *(unsigned char *)(p + 0x337B) = 0;
    *(unsigned char *)(p + 0x3376) = 0;
    *(unsigned char *)(p + 0x3377) = 0;
    return p;
}

extern signed char D_005BDD58[4];

int func_004B5E70(char *p, int i) {
    int func_00406EA0(int p0, signed char k);
    extern signed char D_005BDD50[4];
    signed char k = D_005BDD50[i];
    signed char r = func_00406EA0(*(int *)(p + 0x3370), k);
    int lim = D_005BDD58[k];
    char *o = *(char **)(p + 0x3370);
    unsigned int v;
    if (r == 0) {
        v = *(unsigned int *)(o + 4);
    } else {
        v = *(unsigned char *)((char *)r + (int)o + 8);
    }
    if (lim <= v) return 1;
    return 0;
}

extern char D_01DFABA0[];

extern char D_01DFA340[];

extern char D_006663C0[];

extern char D_01C61820[];

void func_0030EA90(char *, int);

int func_004B5CA0(char *, int);

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

void func_001B69F0(char *, int, int, int, int, int, int, int);

void func_001B6BD0(char *, int, int);

void func_004B45A0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(signed char *)(p + 0x3378) == 0 || *(signed char *)(p + 0x3378) == 3) {
            if (*(unsigned char *)(p + 0x3377) == 0) {
                *(unsigned char *)(p + 0x3377) = 1;
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
        }
        break;
    case 1:
        func_0030EA90(D_01DFA340, func_004B5CA0(p, *(signed char *)(p + 0x3375)));
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 2:
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            D_01DFA340[0] = 0;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        } else {
            func_001B69F0(D_01C61820, 0x40, 0x84, 0xFFFFF1, 0x180, 0x34, 0x80404040, *(int *)(p + 0x1D4));
            func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        }
        break;
    case 3:
        if (*(signed char *)(p + 0x3378) == 0 && *(unsigned char *)(p + 0x3377) == 0) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

unsigned int func_004B60D0(char *p, int id) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    return func_0030FD40(D_01DFA340, id, 0x100, 0x84, 0x585858, 0, 0xFFFFF2, 1);
}

unsigned int func_0030FDF0(char *, int, int, int, int, int, int, int);

extern char D_01DFA310[];

extern int D_00586A50[];

int func_004B5C70(char *, int);

int func_0030E980(char *, int);

int func_004B5D60(char *, int);

void func_004B5F10(char *p) {
    int h;
    int i;
    int c;
    int *t;
    t = D_00586A50;
    for (i = 0; i < 7; i++) {
        h = func_0030E980(D_01DFA310, func_004B5C70(p, i));
        if (h == 0) return;
        switch (func_004B5D60(p, i)) {
        case 0:
        case 2:
        case 3:
        case 4:
            c = *(signed char *)(p + 0x3375) == i ? 0x80A0A0A0 : 0x80303030;
            break;
        case 1:
        default:
            c = *(signed char *)(p + 0x3375) == i ? 0x804040A0 : 0x80101030;
            break;
        }
        func_0030FDF0(D_01DFA340, h, t[0], t[1], c, 0, 0xFFFFF0, 1);
        t += 2;
    }
}

unsigned short func_001AE310(char *, int);

unsigned short func_001AE3B0(char *p, int k);

void func_004B42E0(char *p) {
    unsigned short k;
    if (!(func_001AE310(D_006663C0, 0) & 0xF000)) {
        if (*(signed char *)(p + 0x3375) != *(signed char *)(p + 0x3379) || *(unsigned char *)(p + 0x3376) == 0) {
            if (*(unsigned char *)(p + 0x3377) == 0) *(unsigned char *)(p + 0x3377) = 1;
        }
    } else {
        *(unsigned char *)(p + 0x3377) = 0;
    }
    k = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
    if (func_001AE360(D_006663C0, 0) & 0x40) {
        *(unsigned char *)(p + 4) = 4;
        *(unsigned char *)(p + 5) = 0;
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        *(unsigned char *)(p + 0x3374) = 2;
        *(unsigned char *)(p + 4) = 5;
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
    } else if (func_001AE360(D_006663C0, 0) & 0x80) {
        *(unsigned char *)(p + 4) = 3;
        *(unsigned char *)(p + 5) = 0;
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
    } else if (k & 0x4000) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        (*(signed char *)(p + 0x3375))++;
        if (!(*(signed char *)(p + 0x3375) < 7)) *(signed char *)(p + 0x3375) = 0;
    } else if (k & 0x1000) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        (*(signed char *)(p + 0x3375))--;
        if (*(signed char *)(p + 0x3375) <= -1) *(signed char *)(p + 0x3375) = 6;
    } else if (func_001AE360(D_006663C0, 0) & 1) {
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        *(unsigned char *)(p + 0x3374) = 3;
        *(unsigned char *)(p + 4) = 5;
    } else if (func_001AE360(D_006663C0, 0) & 2) {
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        *(unsigned char *)(p + 0x3374) = 4;
        *(unsigned char *)(p + 4) = 5;
    }
}

int func_004B42B0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 7;
    if (*(unsigned char *)(p0 + 4) != tmp0) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 13172);
        return v0;
    }
}

int func_004B5CD0(p0, p1) char *p0; int p1; {
    extern char D_005BDD50;
    int func_00406EA0();
    int tmp2;
    tmp2 = func_00406EA0(*(int *)(p0 + 13168), *(signed char *)((&D_005BDD50 + p1) + 0));
    return ((signed char)tmp2 + 500);
}

void func_004B4150(void) {}
