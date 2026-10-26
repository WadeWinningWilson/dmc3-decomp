/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

void func_0047F8C0(void) {
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

extern char D_005A6F50[];

void func_0013D6A0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_002790E0();

void func_002791E0();

extern char D_005B6990[];

extern signed char D_0056AF22[];

extern signed char D_0056AF23[];

char *func_0047D800(char *p) {
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
    *(char **)p = D_005B6990;
    func_00100450(p + 0x80, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2A80);
    *(unsigned char *)(p + 0x3080) = 0;
    *(int *)(p + 0x3C) = 0;
    *(int *)(p + 0x40) = 0;
    *(signed char *)(p + 0x3104) = 2;
    *(signed char *)(p + 0x310D) = D_0056AF22[0];
    *(signed char *)(p + 0x310E) = D_0056AF23[0] + 1 - *(signed char *)(p + 0x310D);
    *(unsigned char *)(p + 0x3105) = 0;
    *(signed char *)(p + 0x3118) = -1;
    *(signed char *)(p + 0x3117) = -1;
    *(unsigned char *)(p + 0x3116) = 0;
    *(unsigned char *)(p + 0x3119) = 0;
    *(unsigned char *)(p + 0x311A) = 0;
    *(unsigned char *)(p + 0x311B) = 0;
    *(unsigned char *)(p + 0x311C) = 0;
    *(unsigned char *)(p + 0x3114) = 0;
    return p;
}

extern char D_01DFABA0[];

extern char D_006663C0[];

extern char D_01C61820[];

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

void func_001B69F0(char *, int, int, int, int, int, int, int);

void func_001B6BD0(char *, int, int);

extern char D_01CAF2B0[];

extern int D_00581DB0[];

extern int D_00581DB4[];

extern int D_00581E00[][3];

unsigned int func_0047F870(char *, int);

void func_001ECFF0(char *, int, int, int);

int func_001ED110(char *);

void func_0047E350(char *p) {
    unsigned int r;
    int v;
    unsigned char i;
    int c;
    if (*(signed char *)(p + 0x3117) != *(signed char *)(p + 0x3118) || *(unsigned char *)(p + 0x3119) == 0) {
        if (*(unsigned char *)(p + 0x311A) == 0) {
            *(unsigned char *)(p + 0x311A) = 1;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        i = *(unsigned char *)(p + 0x3105);
        c = ((signed char *)(p + 0x3108))[i];
        if (c == 2) {
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            *(int *)(p + 0x3110) = 0x4E22;
            *(unsigned char *)(p + 5) = 10;
            break;
        }
        v = D_00581E00[i][c];
        if (v < 0) {
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            *(int *)(p + 0x3110) = 0x4E22;
            *(unsigned char *)(p + 5) = 10;
        } else if (*(unsigned int *)(*(char **)(p + 0x3100) + 4) < (unsigned int)v) {
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            *(int *)(p + 0x3110) = 0x4E21;
            *(unsigned char *)(p + 5) = 10;
        } else {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            *(int *)(p + 0x3110) = 0x4E20;
            *(unsigned char *)(p + 5) = 0x14;
        }
        break;
    case 1:
        func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 10:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 11:
        r = func_0047F870(p, *(int *)(p + 0x3110));
        func_001B69F0(D_01C61820, (short)D_00581DB0[*(unsigned char *)(p + 0x3105) * 2], (short)D_00581DB4[*(unsigned char *)(p + 0x3105) * 2],
                      0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, *(int *)(p + 0x40));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 12:
        if (*(int *)(p + 0x3110) == 0x4E24) {
            func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
            *(unsigned char *)(p + 0x3114) = 1;
            *(unsigned char *)(p + 0x3115) = 0x1E;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        } else {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 13:
        c = (signed char)(*(signed char *)(p + 0x3115) - 1);
        *(signed char *)(p + 0x3115) = c;
        if (c == 0) {
            *(unsigned char *)(p + 0x3114) = 0;
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 0x14:
        func_001ECFF0(D_01CAF2B0, D_00581DB0[*(unsigned char *)(p + 0x3105) * 2], D_00581DB4[*(unsigned char *)(p + 0x3105) * 2], *(int *)(p + 0x3110));
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 0x15:
        r = func_0047F870(p, *(int *)(p + 0x3110)) + 10;
        func_001B69F0(D_01C61820, (short)D_00581DB0[*(unsigned char *)(p + 0x3105) * 2], (short)D_00581DB4[*(unsigned char *)(p + 0x3105) * 2],
                      0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, *(int *)(p + 0x40));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        switch (func_001ED110(D_01CAF2B0)) {
        case 0:
            break;
        case 1:
            func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
            v = D_00581E00[*(unsigned char *)(p + 0x3105)][((signed char *)(p + 0x3108))[*(unsigned char *)(p + 0x3105)]];
            if (0 < v) {
                *(int *)(*(char **)(p + 0x3100) + 4) = *(int *)(*(char **)(p + 0x3100) + 4) - v;
            }
            ((signed char *)(p + 0x3108))[*(unsigned char *)(p + 0x3105)] = ((signed char *)(p + 0x3108))[*(unsigned char *)(p + 0x3105)] + 1;
            if (((signed char *)(p + 0x3108))[*(unsigned char *)(p + 0x3105)] > 2) {
                ((signed char *)(p + 0x3108))[*(unsigned char *)(p + 0x3105)] = 2;
            }
            if (((signed char *)(p + 0x3108))[*(unsigned char *)(p + 0x3105)] == 2) {
                *(int *)(p + 0x3110) = 0x4E23;
            } else {
                *(int *)(p + 0x3110) = 0x4E24;
            }
            *(unsigned char *)(p + 5) = 11;
            break;
        case 2:
        case -1:
        default:
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
            break;
        }
        break;
    }
}

signed char func_00406D80(char *, signed char);

void func_0047DE50(char *p) {
    signed char func_00406CF0(char *, signed char);
    int i;
    int v;
    *(unsigned short *)(p + 0x3106) = 0;
    for (i = 0; i < *(signed char *)(p + 0x310E); i++) {
        {
            char *t;
            signed char r = func_00406D80(*(char **)(p + 0x3100), i + *(signed char *)(p + 0x310D));
            t = *(char **)(p + 0x3100);
            if (r == 0) {
                v = *(int *)(t + 4);
            } else {
                v = *(unsigned char *)(r + t + 8);
            }
        }
        if (v != 0) {
            *(unsigned short *)(p + 0x3106) |= (unsigned short)(1 << i);
        }
        *(signed char *)(p + i + 0x3108) = *(signed char *)(*(char **)(p + 0x3100) + func_00406CF0(*(char **)(p + 0x3100), i + *(signed char *)(p + 0x310D)) + 0xA5);
    }
    *(unsigned char *)(p + 0x3105) = 0;
    while (!(*(unsigned short *)(p + 0x3106) & (1 << *(unsigned char *)(p + 0x3105)))) {
        *(unsigned char *)(p + 0x3105) = (*(unsigned char *)(p + 0x3105) + 1) & 0xF;
    }
}

extern char D_01DFA340[];

extern int D_00581DE0[];

void func_0047F820(char *p) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    func_0030FD40(D_01DFA340, D_00581DE0[*(unsigned char *)(p + 0x3105)], 0xE8, 0xA4, 0x585858, 0, 0xFFFFF0, 1);
}

unsigned int func_0047F870(char *p, int a) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    int i = *(unsigned char *)(p + 0x3105);
    return func_0030FD40(D_01DFA340, a, D_00581DB0[i * 2], D_00581DB4[i * 2], 0x585858, 0x10, 0xFFFFF2, 1);
}

extern char *D_005BE0D8;

float func_0011DA38(float);

static inline unsigned char wave47E(unsigned int ph) {
    return (int)(128.0f + 64.0f * func_0011DA38(6.283185f * ((float)ph / 360.0f)));
}

static inline int rgba47E(int r, int g, int b, int a) {
    return (a << 24) + ((b << 16) + (r + (g << 8)));
}

int func_0047EB80(char *p, int k) {
    int r;
    int g;
    int b;
    int v;
    r = wave47E((unsigned int)(*(int *)(D_005BE0D8 + 0x54) * 0x30) % 360);
    g = wave47E((unsigned int)(*(int *)(D_005BE0D8 + 0x54) * 0x30 + 0x3C) % 360);
    b = wave47E((unsigned int)(*(int *)(D_005BE0D8 + 0x54) * 0x30 + 0x78) % 360);
    if (*(unsigned char *)(p + 0x3105) == k) {
        if (*(unsigned char *)(p + 0x3114) == 1) v = rgba47E(r, g, b, 0x80);
        else if (*(signed char *)((char *)k + (int)p + 0x3108) == 2) v = 0x808080E0;
        else v = 0x80E0E0E0;
    } else if (*(signed char *)((char *)k + (int)p + 0x3108) == 2) v = 0x80202050;
    else v = 0x80404040;
    return v;
}

unsigned short func_001AE310(char *, int);

unsigned short func_001AE3B0(char *p, int k);

static inline int nt47E(int x) { return !x; }

void func_0047E050(char *p) {
    unsigned short k;
    unsigned short old;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        if (!(func_001AE310(D_006663C0, 0) & 0x5000)) {
            if (*(signed char *)(p + 0x3117) != *(signed char *)(p + 0x3118) || *(unsigned char *)(p + 0x3119) == 0) {
                if (*(unsigned char *)(p + 0x311A) == 0) *(unsigned char *)(p + 0x311A) = 1;
            }
        } else {
            *(unsigned char *)(p + 0x311A) = 0;
        }
        k = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
        old = *(unsigned char *)(p + 0x3105);
        if (func_001AE360(D_006663C0, 0) & 0x40) {
            (*(unsigned char *)(p + 5))++;
        } else if (func_001AE360(D_006663C0, 0) & 0x10) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 0x3104) = 2;
            *(unsigned char *)(p + 4) = 4;
            *(unsigned char *)(p + 5) = 0;
        } else if (k & 0x4000) {
            do {
                *(unsigned char *)(p + 0x3105) = (*(unsigned char *)(p + 0x3105) + 1) & 0xF;
            } while (nt47E(*(unsigned short *)(p + 0x3106) & (1 << *(unsigned char *)(p + 0x3105))));
        } else if (k & 0x1000) {
            do {
                *(unsigned char *)(p + 0x3105) = (*(unsigned char *)(p + 0x3105) - 1) & 0xF;
            } while (nt47E(*(unsigned short *)(p + 0x3106) & (1 << *(unsigned char *)(p + 0x3105))));
        } else if (func_001AE360(D_006663C0, 0) & 1) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 0x3104) = 3;
            *(unsigned char *)(p + 4) = 4;
            *(unsigned char *)(p + 5) = 0;
        } else if (func_001AE360(D_006663C0, 0) & 2) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 0x3104) = 4;
            *(unsigned char *)(p + 5) = 0;
        }
        if (old != *(unsigned char *)(p + 0x3105)) {
            *(signed char *)(p + 0x3117) = *(signed char *)(p + 0x310D) + *(unsigned char *)(p + 0x3105);
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        }
        break;
    case 2:
        *(unsigned char *)(p + 4) = 3;
        *(unsigned char *)(p + 5) = 0;
        break;
    }
}

int func_0047DE20(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 6;
    if (*(unsigned char *)(p0 + 4) != tmp0) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 12548);
        return v0;
    }
}

void func_0047DF90(p0, p1, p2) char *p0; int p1; int p2; {
    int func_00406CF0();
    char *v0;
    int v1;
    char *v2;
    int v3;
    char *v4;
    char *v5;
    v0 = p0;
    v1 = 0;
    if ((0 < *(signed char *)(p0 + 12558))) {
        do {
            v3 = func_00406CF0(*(int *)(v0 + 12544), (signed char)(v1 + *(signed char *)(v0 + 12557)), p2);
            v4 = ((v0 + v1) + 12552);
            p2 = (signed char)v3;
            *(char *)((char *)(*(int *)(v0 + 12544) + p2) + 165) = *(signed char *)((v0 + v1) + 12552);
            v2 = *(char **)(v0 + 12544);
            if (*(signed char *)(v2 + 78) == p2) {
                *(char *)(v2 + 83) = *(signed char *)(v4 + 0);
            }
            v5 = *(char **)(v0 + 12544);
            if (*(signed char *)(v5 + 79) == p2) {
                *(char *)(v5 + 84) = *(signed char *)(v4 + 0);
            }
            v1 = (v1 + 1);
        } while ((v1 < *(signed char *)(v0 + 12558)));
    }
}

void func_0047DCE0(void) {}
