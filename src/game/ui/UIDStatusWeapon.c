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

extern char *D_005BE0D8;

extern char D_01DFA340[];

extern int D_01DFA344[];

extern int D_01DFA348[];

unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);

float func_002DBD40(int, int);

void func_004B3420(char *p, int left) {
    int x, y;
    unsigned char k;
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3108, 0xAF, y, 0x585858, 0, 0xFFFFF2, 1);
    k = (*(unsigned char **)(p + 0x3DE0))[0x5E];
    if (k != 4 && k != 5) {
        D_01DFA344[0] = *(float *)(*(char **)(p + 0x3DE0) + 0x80);
        D_01DFA348[0] = func_002DBD40(*(signed char *)(*(char **)(p + 0x3DE0) + 0x5E), *(signed char *)(*(char **)(p + 0x3DE0) + 0x5F));
        if (left) {
            x = 0xB0;
            y = 0xB2;
        } else {
            x = 0x190;
            y = 0xB2;
        }
        x += func_0030FD40(D_01DFA340, 0x30FC, x, y, 0x585858, 16, 0xFFFFF2, 1) >> 16;
        x += func_0030FD40(D_01DFA340, 0x30FE, x, y, 0x585858, 16, 0xFFFFF2, 1) >> 16;
        func_0030FD40(D_01DFA340, 0x30FD, x, y, 0x585858, 16, 0xFFFFF2, 1);
    }
}

unsigned char func_004B2F80(char *, char *);

int func_004B2F10(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 2; i++, e += 6) {
        if (func_004B2F80(p, e + 0x3DF4) == 0) {
            return 0;
        }
    }
    return 1;
}

void func_0013D240(char *, int);

void func_002791E0(char *, int);

extern char D_005A6F50[];

void func_0013D6A0(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30(char *);

extern signed char D_0056AF20[];

extern signed char D_0056AF21[];

extern char D_005B8310[];

extern signed char D_0056AF22[];

extern signed char D_0056AF23[];

char *func_004B1140(char *p) {
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
    *(char **)p = D_005B8310;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 5);
    func_00100450(p + 0xC0, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2AC0);
    func_00100450(p + 0x30C0, (void *)func_002790E0, (void *)func_002791E0, 0x600, 2);
    *(unsigned char *)(p + 0x3CE0) = 0;
    *(unsigned char *)(p + 0x3D60) = 0;
    *(int *)(p + 0x90) = 0;
    *(int *)(p + 0x94) = 0;
    *(unsigned char *)(p + 0x3DF4) = 0;
    *(unsigned char *)(p + 0x3DF5) = 0;
    *(unsigned char *)(p + 0x3DF6) = 0;
    *(unsigned char *)(p + 0x3DF7) = 0;
    *(unsigned char *)(p + 0x3DF8) = 0;
    *(unsigned char *)(p + 0x3DF9) = 0;
    *(int *)(p + 0x98) = 0;
    *(unsigned char *)(p + 0x3DFA) = 0;
    *(unsigned char *)(p + 0x3DFB) = 1;
    *(unsigned char *)(p + 0x3DFC) = 0;
    *(unsigned char *)(p + 0x3DFD) = 0;
    *(unsigned char *)(p + 0x3DFE) = 0;
    *(unsigned char *)(p + 0x3DFF) = 0;
    *(unsigned char *)(p + 0x3DE4) = 2;
    *(signed char *)(p + 0x3DEE) = D_0056AF20[0];
    *(signed char *)(p + 0x3DEF) = D_0056AF21[0] + 1 - *(signed char *)(p + 0x3DEE);
    *(signed char *)(p + 0x3DEC) = D_0056AF22[0];
    *(signed char *)(p + 0x3DED) = D_0056AF23[0] + 1 - *(signed char *)(p + 0x3DEC);
    *(unsigned char *)(p + 0x3DE5) = 0;
    *(unsigned char *)(p + 0x3DE6) = 0;
    *(unsigned char *)(p + 0x3DF0) = 0;
    *(unsigned char *)(p + 0x3DF1) = 0;
    *(unsigned char *)(p + 0x3DF2) = 0;
    *(unsigned char *)(p + 0x3DF3) = 0;
    return p;
}

int func_004B2EA0(char *p) {
    int i;
    if (*(signed char *)(p + 0x3DF0) != 0 || *(unsigned char *)(p + 0x3DF2) != 1) {
        return 0;
    }
    for (i = 0; i < 2; i++, p += 6) {
        if (*(signed char *)(p + 0x3DF4) != 0 || *(unsigned char *)(p + 0x3DF8) != 0) {
            return 0;
        }
    }
    return 1;
}

int func_00406CF0(int p0, signed char k);

int func_004B2DA0(char *p, int k) {
    signed char r;
    signed char m;
    if (*(signed char *)(p + 0x3DF1) == 0) {
        k += 5;
    }
    r = func_00406CF0(*(int *)(p + 0x3DE0), (signed char)k);
    if (r == -1) {
        return 0;
    }
    m = *(signed char *)(p + 0x3DF1);
    if (m == 0 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4E)) {
        return 1;
    }
    if (m == 0 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4F)) {
        return 1;
    }
    if (m == 1 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4C)) {
        return 1;
    }
    if (m == 1 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4D)) {
        return 1;
    }
    return 0;
}

int func_004B1F00(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 5;
    if (*(unsigned char *)(p0 + 4) != tmp0) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 15844);
        return v0;
    }
}

void func_004B1C90(void) {}

int func_004B1EF0(char *p0) {
    return ((*(unsigned char *)(p0 + 4) < 2) ^ 1);
}
