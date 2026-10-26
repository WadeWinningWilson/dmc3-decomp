/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

void func_0044BFA0(void) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3107, 16);
    x = 256 - (w >> 17);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3107, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-9. */
extern char D_01DFABA0[];

extern char D_006663C0[];

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

extern char D_01DFA340[];

extern char D_01CAF2B0[];

extern char D_01C61820[];

void func_001ECFF0(char *, short, int, int);

void func_001B6BD0(char *, int, int);

int func_001ED110(char *);

void func_0044A200(char *, int);

void func_0044BA30(char *, int, int, int);

void func_0044BCB0(char *, int);

typedef struct { short a; short b; } S2_44A;

typedef struct { S2_44A e[5]; } R_44A;

typedef struct { unsigned int e[5]; } Q_44A;

extern R_44A D_005780B0[];

extern Q_44A D_00578120[];

void func_0044A930(char *p) {
    void func_0030FD40(char *, int, short, int, int, int, int, int);
    void func_001B69F0(char *, short, int, int, short, short, int, int);
    signed char i1 = *(signed char *)(p + 0x311C);
    signed char i2 = *(signed char *)(p + 0x311B);
    int k = *(signed char *)((char *)i1 + (int)p + 0x3124);
    S2_44A e = D_005780B0[i2].e[k];
    unsigned int r;
    short x;
    unsigned int hi;
    unsigned int w;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if ((i1 != *(signed char *)(p + 0x311F) || *(unsigned char *)(p + 0x3089) == 0) && *(unsigned char *)(p + 0x308A) == 0) {
            *(unsigned char *)(p + 0x308A) = 1;
        }
        if (*(signed char *)(p + 0x311C) == *(signed char *)(p + 0x311F) && *(unsigned char *)(p + 0x3089) == 1 && *(unsigned char *)(p + 0x308A) == 0) {
            w = ((unsigned int *)(*(char **)(p + 0x3110) + 0x60))[e.a / 32];
            if (w & (1 << (e.a % 32))) {
                *(int *)(p + 0x3130) = 0x4E22;
                func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
                *(unsigned char *)(p + 5) = 10;
            } else if (*(unsigned int *)(*(char **)(p + 0x3110) + 4) < D_00578120[*(signed char *)(p + 0x311B)].e[k]) {
                *(int *)(p + 0x3130) = 0x4E21;
                func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
                *(unsigned char *)(p + 5) = 10;
            } else {
                *(int *)(p + 0x3130) = 0x4E20;
                func_003303F0(D_01DFABA0, 0, 4, 0, 0);
                (*(unsigned char *)(p + 5))++;
            }
        }
        break;
    case 1:
        r = func_003101B0(D_01DFA340, *(int *)(p + 0x3130), 0);
        func_001ECFF0(D_01CAF2B0, 0x1C0 - (r >> 16), 0x90, *(int *)(p + 0x3130));
        (*(unsigned char *)(p + 5))++;
        break;
    case 2:
        r = func_003101B0(D_01DFA340, *(int *)(p + 0x3130), 0);
        x = 0x1C0 - (r >> 16);
        func_0030FD40(D_01DFA340, *(int *)(p + 0x3130), x, 0x90, 0x585858, 0, 0xFFFFF2, 1);
        func_001B69F0(D_01C61820, x, 0x90, 0xFFFFF1, (r + 10) >> 16, (r + 10) & 0xFFFF, 0x80404040, *(int *)(p + 0x44));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        switch (func_001ED110(D_01CAF2B0)) {
        case 0:
            break;
        case 1:
            func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
            (*(unsigned char *)(p + 5))++;
            break;
        case 2:
        case -1:
        default:
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 5) = 6;
            break;
        }
        break;
    case 3:
        if (*(unsigned char *)(p + 0x3089) == 1 && *(unsigned char *)(p + 0x308A) == 0) {
            *(int *)(*(char **)(p + 0x3110) + 4) -= D_00578120[i2].e[k];
            ((unsigned int *)(*(char **)(p + 0x3110) + 0x60))[e.a / 32] |= 1 << (e.a % 32);
            func_0044A200(p, *(signed char *)(p + 0x311B));
            if (*(unsigned char *)(p + 0x3123) != 0) {
                *(int *)(p + 0x3130) = 0x4E23;
                (*(unsigned char *)(p + 5))++;
            } else {
                func_0044BA30(p, *(signed char *)(p + 0x311C), *(signed char *)(p + 0x311B), 1);
                *(unsigned char *)(p + 5) = 6;
            }
        }
        break;
    case 4:
    case 10:
        r = func_003101B0(D_01DFA340, *(int *)(p + 0x3130), 0);
        hi = r >> 16;
        x = 0x1C0 - hi;
        func_0030FD40(D_01DFA340, *(int *)(p + 0x3130), x, 0x90, 0x585858, 0, 0xFFFFF2, 1);
        func_001B69F0(D_01C61820, x, 0x90, 0xFFFFF1, hi, r & 0xFFFF, 0x80404040, *(int *)(p + 0x44));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0x50) {
            if (*(unsigned char *)(p + 5) == 4) {
                *(int *)(p + 0x3130) = -1;
                func_0044BA30(p, *(signed char *)(p + 0x311C), *(signed char *)(p + 0x311B), 1);
                *(unsigned char *)(p + 0x308A) = 1;
                *(signed char *)(p + 0x311F) = -1;
                *(int *)(p + 0x312C) = 0x18;
                func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
                (*(unsigned char *)(p + 5))++;
            } else {
                func_003303F0(D_01DFABA0, 0, 3, 0, 0);
                *(unsigned char *)(p + 5) = 6;
            }
        }
        break;
    case 5:
        func_0044BCB0(p, i2);
        if (--*(int *)(p + 0x312C) == 0) (*(unsigned char *)(p + 5))++;
        break;
    case 6:
        if (*(unsigned char *)(p + 0x3089) == 1 && *(unsigned char *)(p + 0x308A) == 0) {
            func_0044BA30(p, i1, i2, 0);
            *(unsigned char *)(p + 4) = 1;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    default:
        *(unsigned char *)(p + 5) = 6;
        break;
    }
}

void func_002791E0(char *, int);

extern char D_005A6F50[];

void func_0013D6A0(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

extern char D_005B4A00[];

extern signed char D_0056AF20[];

extern signed char D_0056AF21[];

char *func_00449370(char *p) {
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
    *(char **)p = D_005B4A00;
    func_00100450(p + 0x80, (void *)func_002790E0, (void *)func_002791E0, 0x600, 4);
    func_002790E0(p + 0x1880);
    func_002790E0(p + 0x1E80);
    func_002790E0(p + 0x2480);
    func_002790E0(p + 0x2A80);
    *(unsigned char *)(p + 0x3090) = 0;
    *(unsigned char *)(p + 0x3114) = 2;
    *(signed char *)(p + 0x3115) = 0;
    *(signed char *)(p + 0x3116) = D_0056AF20[*(signed char *)(p + 0x3115) * 4];
    *(signed char *)(p + 0x3118) = D_0056AF21[*(signed char *)(p + 0x3115) * 4] + 1 - *(signed char *)(p + 0x3116);
    *(unsigned char *)(p + 0x3119) = 0;
    *(unsigned char *)(p + 0x311B) = 0;
    *(unsigned char *)(p + 0x311C) = 0;
    *(unsigned char *)(p + 0x311D) = 0;
    *(signed char *)(p + 0x311E) = -1;
    *(signed char *)(p + 0x311F) = -1;
    *(unsigned char *)(p + 0x3120) = 0;
    *(int *)(p + 0x3C) = 0;
    *(int *)(p + 0x40) = 0;
    *(int *)(p + 0x44) = 0;
    *(unsigned char *)(p + 0x3121) = 0;
    *(unsigned char *)(p + 0x3122) = 0;
    *(unsigned char *)(p + 0x3123) = 0;
    *(unsigned char *)(p + 0x3080) = 0;
    *(unsigned char *)(p + 0x3081) = 0;
    *(unsigned char *)(p + 0x3082) = 0;
    *(int *)(p + 0x3084) = 0;
    *(unsigned char *)(p + 0x3088) = 0;
    *(unsigned char *)(p + 0x3089) = 0;
    *(unsigned char *)(p + 0x308A) = 0;
    *(int *)(p + 0x308C) = 0;
    *(signed char *)(p + 0x3124) = -1;
    *(signed char *)(p + 0x3125) = -1;
    *(signed char *)(p + 0x3126) = -1;
    *(signed char *)(p + 0x3127) = -1;
    return p;
}

extern char D_01DFABA0[];

extern int D_00577FB0[][5];

void func_0044AF90(char *p) {
    void func_001B69F0(char *, int, int, int, int, int, int, int);
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    int v;
    unsigned int r;
    if (*(signed char *)(p + 0x311C) != *(signed char *)(p + 0x311F) || *(unsigned char *)(p + 0x3089) == 0) {
        if (*(unsigned char *)(p + 0x308A) == 0) {
            *(unsigned char *)(p + 0x308A) = 1;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        v = D_00577FB0[*(signed char *)(p + 0x311B)][((signed char *)(p + 0x3124))[*(signed char *)(p + 0x311C)]];
        if (v < 0) {
            v = 0x4E5C;
        }
        r = func_0030FD40(D_01DFA340, v, 0x20, 0x80, 0x585858, 0, 0xFFFFF2, 1);
        func_001B69F0(D_01C61820, 0x20, 0x80, 0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, *(int *)(p + 0x44));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
    default:
        if (*(signed char *)(p + 0x311C) == *(signed char *)(p + 0x311F) && *(unsigned char *)(p + 0x3089) == 1 &&
            *(unsigned char *)(p + 0x308A) == 0) {
            *(unsigned char *)(p + 4) = 1;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

char *func_00279290(char *);

void func_001A2D70(char *, int, int);

unsigned short func_001AE310(char *, int);

unsigned short func_001AE3B0(char *p, int k);

static inline int bit44A(char *p) { return (*(unsigned char *)(p + 0x3119) & (1 << *(signed char *)(p + 0x311B))) != 0; }

int func_0044A3D0(char *p) {
    int r = 0;
    unsigned char old;
    unsigned short k;
    if (!(func_001AE310(D_006663C0, 0) & 0xC)) {
        if (*(signed char *)(p + 0x311D) != 0) {
            (*(signed char *)(p + 0x311D))--;
        } else if (*(unsigned char *)(p + 0x3120) & 1) {
            return 2;
        }
    }
    if (!(func_001AE310(D_006663C0, 0) & 0x5000) && !(*(unsigned char *)(p + 0x3120) & 1)) {
        if ((*(signed char *)(p + 0x311C) != *(signed char *)(p + 0x311F) || *(unsigned char *)(p + 0x3089) == 0) && *(unsigned char *)(p + 0x308A) == 0) {
            *(unsigned char *)(p + 0x308A) = 1;
        }
    } else {
        *(unsigned char *)(p + 0x308A) = 0;
    }
    old = *(unsigned char *)(p + 0x311B);
    k = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
    if (func_001AE360(D_006663C0, 0) & 0x40) {
        if (*(unsigned char *)(p + 0x3120) != 0) {
            *(signed char *)(p + 0x311D) = 0;
            return 0;
        }
        r = 4;
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        if (*(unsigned char *)(p + 0x3120) != 0) return 0;
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        r = 6;
        *(unsigned char *)(p + 0x3114) = 2;
    } else if (func_001AE360(D_006663C0, 0) & 0x80) {
        if (*(unsigned char *)(p + 0x3120) != 0) return 0;
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        r = 5;
    } else if (k & 8) {
        do {
            *(signed char *)(p + 0x311B) = (*(signed char *)(p + 0x311B) + 1) & 7;
        } while ((bit44A(p) ^ 1));
        if (old != *(signed char *)(p + 0x311B)) {
            func_001A2D70(func_00279290(p + 0x1280), 1, 0x80E0E0E0);
            func_001A2D70(func_00279290(p + 0x1280), 4, 0x80808080);
            func_003303F0(D_01DFABA0, 0, 0xC, 0, 0);
            r = 1;
        }
    } else if (k & 4) {
        do {
            *(signed char *)(p + 0x311B) = (*(signed char *)(p + 0x311B) - 1) & 7;
        } while ((bit44A(p) ^ 1));
        if (old != *(signed char *)(p + 0x311B)) {
            func_001A2D70(func_00279290(p + 0x1280), 1, 0x80808080);
            func_001A2D70(func_00279290(p + 0x1280), 4, 0x80E0E0E0);
            func_003303F0(D_01DFABA0, 0, 0xC, 0, 0);
            r = 1;
        }
    } else if (k & 0x4000) {
        if (*(unsigned char *)(p + 0x3120) & 1) return 0;
        do {
            *(signed char *)(p + 0x311C) = (*(signed char *)(p + 0x311C) + 1) & 3;
        } while (*(signed char *)(p + *(signed char *)(p + 0x311C) + 0x3124) < 0);
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        r = 3;
    } else if (k & 0x1000) {
        if (*(unsigned char *)(p + 0x3120) & 1) return 0;
        do {
            *(signed char *)(p + 0x311C) = (*(signed char *)(p + 0x311C) - 1) & 3;
        } while (*(signed char *)(p + *(signed char *)(p + 0x311C) + 0x3124) < 0);
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        r = 3;
    } else if (func_001AE360(D_006663C0, 0) & 1) {
        *(unsigned char *)(p + 0x3114) = 3;
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        r = 6;
    } else if (func_001AE360(D_006663C0, 0) & 2) {
        *(unsigned char *)(p + 0x3114) = 4;
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        r = 6;
    }
    if (*(signed char *)(p + 0x311D) < 0x14 && r != 1) {
        func_001A2D70(func_00279290(p + 0x1280), 1, 0x80808080);
        func_001A2D70(func_00279290(p + 0x1280), 4, 0x80808080);
    }
    return r;
}

int func_0044A1D0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 8;
    if (*(unsigned char *)(p0 + 4) != tmp0) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 12564);
        return v0;
    }
}

void func_0044A000(void) {}
