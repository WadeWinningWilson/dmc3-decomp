/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

/* The same helper for other text ids. */
void func_00417BA0(void) {
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

void func_002790E0(char *);

void func_0013D6A0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_002791E0();

extern char D_005A6F50[];

extern char D_005B31F0[];

char *func_00415040(char *p) {
    int i;
    char *q;
    *(char **)(p + 0x0) = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    p[0x7] = 0;
    p[0x6] = 0;
    p[0x5] = 0;
    p[0x4] = 0;
    p[0x18] = 0;
    *(int *)(p + 0x8) = 0;
    p[0x34] = -1;
    p[0x35] = 0;
    p[0x36] = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)(p + 0x0) = D_005B31F0;
    func_00100450(p + 0x3C, func_001AAD30, func_0013D240, 0x10, 0x19);
    func_00100450(p + 0x200, func_002790E0, func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2C00);
    p[0x3270] = 0;
    p[0x6] = 0;
    p[0x5] = 0;
    p[0x4] = 0;
    *(int *)(p + 0x1D0) = 0;
    *(int *)(p + 0x1D4) = 0;
    p[0x32F4] = 2;
    p[0x32F5] = 0;
    for (i = 0; i < 9; i++) p[i + 0x32F7] = -1;
    *(int *)(p + 0x3300) = 0;
    *(int *)(p + 0x3304) = 0;
    *(int *)(p + 0x3308) = 0;
    p[0x330C] = 0;
    *(unsigned char *)(p + 0x330D) = 0xFF;
    *(unsigned char *)(p + 0x330E) = 0x80;
    p[0x330F] = 0;
    p[0x3310] = 0;
    p[0x3311] = 0;
    p[0x32F6] = 0;
    return p;
}

extern char D_01DFABA0[];

void func_003303F0(char *, int, int, int, int);

int func_00416B00(char *p) {
    int func_00406EA0(char *, int);
    char *o;
    int k;
    int r;
    int v;
    k = (*(int *)(p + 0x3300) + p)[*(signed char *)(p + 0x32F5) + 0x32F7];
    r = func_00406EA0(*(char **)(p + 0x32F0), k);
    o = *(char **)(p + 0x32F0);
    if ((signed char)r == 0) v = *(int *)(o + 4);
    else v = ((unsigned char *)(o + 8))[(signed char)r];
    if (v == 0) return -1;
    switch ((signed char)k) {
    case 4: case 5:
        *(int *)(p + 0x3314) = 0x4E53;
        k = 1;
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        break;
    case 6: case 7:
        *(int *)(p + 0x3314) = 0x4E55;
        k = 0;
        func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
        break;
    case 0: case 1:
        if (*(float *)(o + 0x84) == *(float *)(o + 0x88)) {
            *(int *)(p + 0x3314) = 0x4E54;
            k = 0;
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
        } else {
            *(int *)(p + 0x3314) = 0x4E53;
            k = 1;
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        }
        break;
    case 2:
        if (*(float *)(o + 0x8C) == *(float *)(o + 0x90)) {
            *(int *)(p + 0x3314) = 0x4E54;
            k = 0;
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
        } else {
            *(int *)(p + 0x3314) = 0x4E53;
            k = 1;
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        }
        break;
    case 3:
        *(int *)(p + 0x3314) = 0x4E53;
        k = 1;
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        break;
    default:
        return -1;
    }
    return k;
}

extern char D_006663C0[];

int func_001AE3B0(char *, int);

int func_001AE360(char *, int);

int func_001AE310(char *, int);

void func_00415EE0(char *p) {
    unsigned short k;
    int n;
    int i;
    signed char c;
    if (!((unsigned short)func_001AE310(D_006663C0, 0) & 0xF000)) {
        if ((*(unsigned char *)(p + 0x330D) != *(signed char *)(p + 0x32F5) + *(int *)(p + 0x3300) || *(unsigned char *)(p + 0x3310) == 0) && *(unsigned char *)(p + 0x3311) == 0) {
            *(unsigned char *)(p + 0x3311) = 1;
        }
    } else {
        *(unsigned char *)(p + 0x3311) = 0;
    }
    k = (unsigned short)func_001AE3B0(D_006663C0, 0) | (unsigned short)func_001AE360(D_006663C0, 0);
    if ((unsigned short)func_001AE360(D_006663C0, 0) & 0x40) {
        *(unsigned char *)(p + 4) = 3;
        *(unsigned char *)(p + 5) = 0;
    } else if ((unsigned short)func_001AE360(D_006663C0, 0) & 0x10) {
        *(unsigned char *)(p + 0x32F4) = 2;
        *(unsigned char *)(p + 4) = 5;
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
    } else if ((unsigned short)func_001AE360(D_006663C0, 0) & 0x80) {
        *(unsigned char *)(p + 4) = 4;
        *(unsigned char *)(p + 5) = 0;
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
    } else if ((unsigned short)func_001AE360(D_006663C0, 0) & 0x8000) {
        if (*(int *)(p + 0x3300) != 0 || *(signed char *)(p + 0x32F5) != 0) {
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        }
        *(signed char *)(p + 0x32F5) -= 6;
        *(int *)(p + 0x3304) = *(int *)(p + 0x3300);
        if (*(signed char *)(p + 0x32F5) < 0) {
            *(int *)(p + 0x3300) += *(signed char *)(p + 0x32F5);
            if (*(int *)(p + 0x3300) < 0) *(int *)(p + 0x3300) = 0;
            *(signed char *)(p + 0x32F5) = 0;
        }
    } else if ((unsigned short)func_001AE360(D_006663C0, 0) & 0x2000) {
        n = *(signed char *)(p + 0x32F5) == 6 ? 7 : 6 - *(signed char *)(p + 0x32F5);
        for (i = 0; i < n; i++) {
            (*(signed char *)(p + 0x32F5))++;
            c = *(signed char *)(p + 0x32F5);
            if (c < 7) {
                if (*(signed char *)(p + *(int *)(p + 0x3300) + c + 0x32F7) != -1) {
                    if (i == 0) func_003303F0(D_01DFABA0, 0, 2, 0, 0);
                } else {
                    *(signed char *)(p + 0x32F5) = c - 1;
                }
            } else {
                *(signed char *)(p + 0x32F5) = 6;
                if (*(int *)(p + 0x3300) < *(int *)(p + 0x3308)) {
                    *(int *)(p + 0x3304) = *(int *)(p + 0x3300);
                    (*(int *)(p + 0x3300))++;
                    if (i == 0) func_003303F0(D_01DFABA0, 0, 2, 0, 0);
                }
                *(unsigned char *)(p + 0x32F6) = 8;
            }
        }
    } else if (k & 0x4000) {
        (*(signed char *)(p + 0x32F5))++;
        c = *(signed char *)(p + 0x32F5);
        if (c < 7) {
            if (*(signed char *)((char *)c + (*(int *)(p + 0x3300) + (int)p) + 0x32F7) != -1) {
                func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            } else {
                *(signed char *)(p + 0x32F5) = c - 1;
            }
        } else {
            *(signed char *)(p + 0x32F5) = 6;
            if (*(int *)(p + 0x3300) < *(int *)(p + 0x3308)) {
                *(int *)(p + 0x3304) = *(int *)(p + 0x3300);
                (*(int *)(p + 0x3300))++;
                func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            }
            if (func_001AE360(D_006663C0, 0) != 0) {
                *(unsigned char *)(p + 0x32F6) = 8;
            } else if (func_001AE3B0(D_006663C0, 0) != 0) {
                *(unsigned char *)(p + 0x32F6) = 4;
            }
        }
    } else if (k & 0x1000) {
        (*(signed char *)(p + 0x32F5))--;
        if (*(signed char *)(p + 0x32F5) <= -1) {
            *(signed char *)(p + 0x32F5) = 0;
            *(int *)(p + 0x3304) = *(int *)(p + 0x3300);
            if (0 < *(int *)(p + 0x3300)) {
                (*(int *)(p + 0x3300))--;
                func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            }
        } else {
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        }
    } else if (*(int *)(*(char **)(p + 0x32F0) + 0x104) != 1) {
        if ((unsigned short)func_001AE360(D_006663C0, 0) & 1) {
            *(unsigned char *)(p + 0x32F4) = 3;
            *(unsigned char *)(p + 4) = 5;
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        } else if ((unsigned short)func_001AE360(D_006663C0, 0) & 2) {
            *(unsigned char *)(p + 0x32F4) = 4;
            *(unsigned char *)(p + 4) = 5;
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        }
    }
}

extern char D_01DFA340[];

unsigned int func_00417C30(char *p, int id) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    return func_0030FD40(D_01DFA340, id, 0x20, 0x8C, 0x585858, 0, 0xFFFFF2, 1);
}

int func_00415EB0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 6;
    if (*(unsigned char *)(p0 + 4) != tmp0) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 13044);
        return v0;
    }
}

extern char D_0056B780[];

int func_00417B10();

void func_00417A60(p0) int p0; {
    int func_0030FD40();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char *v6;
    int tmp2;
    v0 = (char *)p0;
    v5 = 0;
    v6 = D_0056B780;
    do {
        v4 = func_00417B10(v0, (*(int *)(v0 + 13056) + v5));
        v1 = v4;
        if (v1 >= 0) {
            tmp2 = *(signed char *)(v0 + 13045);
            v2 = 0x80300000;
            if (tmp2 == v5) {
                v3 = 0x80808080;
            } else {
                v3 = (v2 | 12336);
            }
            v4 = func_0030FD40(D_01DFA340, v1, *(int *)(v6 + 0), *(int *)(v6 + 4), v3, 0, 0xfffff0, 1);
        }
        v5 = (v5 + 1);
        v6 = (v6 + 8);
    } while ((v5 < 7));
}

extern char D_0056B7C0[];

int func_00417B10(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    v0 = *(signed char *)((char *)(p1 + p0) + 13047);
    if (v0 == -1) {
        return -1;
    } else {
        v1 = *(int *)((D_0056B7C0 + (v0 << 2)) + 0);
        return v1;
    }
}

extern char D_0056B840[];

int func_00417B50(p0, p1) int p0; int p1; {
    return *(int *)((D_0056B840 + (*(signed char *)((char *)(p1 + p0) + 13047) << 2)) + 0);
}

int func_00417B70(p0, p1) char *p0; int p1; {
    int func_00406EA0();
    int tmp2;
    tmp2 = func_00406EA0(*(int *)(p0 + 13040), *(signed char *)((char *)(p1 + (int)p0) + 13047));
    return ((signed char)tmp2 + 500);
}

void func_00415C70(void) {}
