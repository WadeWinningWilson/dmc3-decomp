void *func_00128488(void *, int, unsigned int);

void *func_001282D0(void *, void *, unsigned int);

extern int D_005BE17C;

extern int D_005BE174;

extern int D_005BE180;

extern char D_01DF95C0[];

extern char D_01DF9604[];

extern char D_005588A0[];

void func_0010F9C0(char *);

int func_002FA530(int type, char *src, int len) {
    if (D_005BE17C == 32) {
        func_0010F9C0(D_005588A0);
        return -1;
    }
    {
        int i = D_005BE174;
        *(int *)(D_01DF95C0 + i * 0x48) = type;
        *(int *)(D_01DF9604 + i * 0x48) = len;
        func_00128488(D_01DF95C0 + i * 0x48 + 4, 0, 0x40);
    }
    func_001282D0(D_01DF95C0 + D_005BE174 * 0x48 + 4, src, len);
    D_005BE174 = (D_005BE174 + 1) & 0x1F;
    D_005BE17C++;
    if (type == 3) {
        D_005BE180++;
    }
    return D_005BE17C;
}

int func_002F99F0(int, void *, int);

int func_002FA7A0(int a) {
    int b[3] = { 0 };
    b[2] = a;
    func_002F99F0(0x309, b, 12);
    return 0;
}

int func_002F9E90(void) {
    int func_002F9D20(void);
    int r = func_002F9D20();
    return r < 0 ? r : 0;
}

int func_0010DCE0(int *);

void func_00124ED8(char *, int, char *);

void func_001101F8(int);

int func_00110990(char *, int, int);

void func_00129690(char *);

void func_0010ED40(int);

extern int D_005BE164;

extern char D_005BC624[8];

extern char D_005587C0[];

extern char D_005587E0[];

extern char D_005587F0[];

extern char D_01DF8F30[];

extern char D_01DF8F60[];

extern char D_01DF8F90[];

int func_002F9880(void) {
    int s[6];
    s[2] = 1;
    s[1] = 1;
    D_005BE164 = func_0010DCE0(s);
    if (D_005BE164 == -1) {
        func_0010F9C0(D_005587C0);
        func_00124ED8(D_005587E0, 0x4E, D_005BC624);
    }
    func_001101F8(0);
    do {
        if (func_00110990(D_01DF8F30, 0x1234567, 0) < 0) {
            func_00129690(D_005587F0);
            func_00124ED8(D_005587E0, 0x5E, D_005BC624);
        }
        func_0010ED40(1000);
    } while (*(int *)(D_01DF8F30 + 0x24) == 0);
    do {
        if (func_00110990(D_01DF8F60, 0x9876543, 0) < 0) {
            func_00129690(D_005587F0);
            func_00124ED8(D_005587E0, 0x6F, D_005BC624);
        }
        func_0010ED40(1000);
    } while (*(int *)(D_01DF8F60 + 0x24) == 0);
    do {
        if (func_00110990(D_01DF8F90, 0x77755500, 0) < 0) {
            func_00129690(D_005587F0);
            func_00124ED8(D_005587E0, 0x81, D_005BC624);
        }
        func_0010ED40(1000);
    } while (*(int *)(D_01DF8F90 + 0x24) == 0);
    return 0;
}

int func_002FA250(char *p, char **a, int note, int off) {
    short v;
    *(signed char *)p = *(signed char *)(a[0] + 2);
    *(signed char *)p = *(unsigned char *)p * *(signed char *)(a[1] + 8) / 127;
    *(signed char *)p = *(unsigned char *)p * *(signed char *)(a[2] + 6) / 127;
    v = *(signed char *)(a[0] + 3) - 0x40;
    if (v < -0x40) v = -0x40;
    else if (v > 0x3F) v = 0x3F;
    v += (short)(*(signed char *)(a[1] + 9) - 0x40);
    if (v < -0x40) v = -0x40;
    else if (v > 0x3F) v = 0x3F;
    v += (short)(*(signed char *)(a[2] + 7) - 0x40);
    if (v < -0x40) v = -0x40;
    else if (v > 0x3F) v = 0x3F;
    *(signed char *)(p + 1) = v + 0x40;
    *(short *)(p + 2) = *(signed char *)(a[0] + 5) + *(signed char *)(a[0] + 4) * 100;
    *(short *)(p + 2) += (short)(*(signed char *)(a[1] + 0xB) + *(signed char *)(a[1] + 0xA) * 100);
    *(short *)(p + 2) += (short)(*(signed char *)(a[2] + 9) + *(signed char *)(a[2] + 8) * 100);
    *(short *)(p + 2) += (short)(((unsigned char)note - *(unsigned char *)(a[2] + 5)) * 100);
    *(unsigned short *)(p + 4) = *(unsigned short *)(a[1] + 4);
    *(unsigned short *)(p + 6) = *(unsigned short *)(a[1] + 6);
    *(unsigned short *)(p + 8) = *(unsigned short *)(a[2] + 0);
    *(unsigned short *)(p + 0xA) = *(unsigned short *)(a[2] + 2);
    *(int *)(p + 0x10) = off + *(int *)(a[3] + 0);
    *(int *)(p + 0xC) = *(int *)(a[3] + 0xC);
    return 0;
}

extern char D_005BC628;

int func_0012B6E8();

int func_002F9F40(int p0) {
    int t0;
    t0 = func_0012B6E8(p0, &D_005BC628, 4);
    return ((t0 ^ 0) == 0);
}

extern char D_005BC630;

int func_002F9F70(int p0) {
    int t0;
    t0 = func_0012B6E8(p0, &D_005BC630, 4);
    return ((t0 ^ 0) == 0);
}

extern char D_005BC638;

int func_002F9FA0(int p0) {
    int t0;
    t0 = func_0012B6E8(p0, &D_005BC638, 4);
    return ((t0 ^ 0) == 0);
}

extern char D_005BC640;

int func_002F9FD0(int p0) {
    int t0;
    t0 = func_0012B6E8(p0, &D_005BC640, 4);
    return ((t0 ^ 0) == 0);
}

extern char D_00558868[];

extern int D_005BE168;

extern int D_005BE16C;

extern int D_005BE170;

extern char D_01DF94C0[];

int func_002F9C60(p0) int p0; {
    void func_002F9D20();
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int tmp0;
    v0 = p0;
    tmp0 = func_0012B6E8(p0, D_00558868, 8);
    if (tmp0 != 0) {
        v1 = -1;
    } else {
        v2 = 20512;
        D_005BE168 = v0;
        D_005BE16C = 0;
        D_005BE170 = v2;
        v3 = 0;
        v4 = D_01DF94C0;
        do {
            *(int *)(v4 + 0) = v2;
            *(int *)(v4 + 64) = 0;
            v3 = (v3 + 8);
            *(int *)(v4 + 4) = v2;
            *(int *)(v4 + 68) = 0;
            *(int *)(v4 + 8) = v2;
            *(int *)(v4 + 72) = 0;
            *(int *)(v4 + 12) = v2;
            *(int *)(v4 + 76) = 0;
            *(int *)(v4 + 16) = v2;
            *(int *)(v4 + 80) = 0;
            *(int *)(v4 + 20) = v2;
            *(int *)(v4 + 84) = 0;
            *(int *)(v4 + 24) = v2;
            *(int *)(v4 + 88) = 0;
            *(int *)(v4 + 28) = v2;
            *(int *)(v4 + 92) = 0;
            v4 = (v4 + 32);
        } while (((unsigned int)v3 < (unsigned int)16));
        func_002F9D20(0, v3);
        v1 = 0;
    }
    return v1;
}

int func_002F9DE0(p0) int p0; {
    int v0;
    if ((unsigned int)p0 >= (unsigned int)16) {
        return 0;
    } else {
        v0 = *(int *)((D_01DF94C0 + (p0 << 2)) + 0);
        return v0;
    }
}

extern char D_01DF9550[];

int func_002F9C60();

int func_002F9E10(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    int v1;
    char *v2;
    v0 = func_002F9C60();
    if (v0 < 0) {
        return v0;
    } else {
        v1 = 0;
        v2 = D_01DF9550;
        do {
            *(int *)(v2 + 0) = 0;
            *(int *)(v2 + 4) = 0;
            v1 = (v1 + 8);
            *(int *)(v2 + 8) = 0;
            *(int *)(v2 + 12) = 0;
            *(int *)(v2 + 16) = 0;
            *(int *)(v2 + 20) = 0;
            *(int *)(v2 + 24) = 0;
            *(int *)(v2 + 28) = 0;
            v2 = (v2 + 32);
        } while ((v1 < 16));
        return 0;
    }
}

int func_002F9ED0(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = ((unsigned int)p0 < (unsigned int)16);
    if (tmp0 == 0) {
        return -1;
    } else {
        *(int *)((D_01DF9550 + (p0 << 2)) + 0) = p1;
        return 0;
    }
}

int func_002F9F10(p0) int p0; {
    int v0;
    if ((unsigned int)p0 >= (unsigned int)16) {
        return 0;
    } else {
        v0 = *(int *)((D_01DF9550 + (p0 << 2)) + 0);
        return v0;
    }
}

int func_002FA4D0(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_0012B6E8(p0, &D_005BC628, 4);
    if (tmp0 != 0) {
        v1 = -1;
    } else {
        v1 = *(int *)(v0 + 16);
    }
    return v1;
}

extern int D_005BE178;

int func_002FA510(void) {
    D_005BE174 = 0;
    D_005BE178 = 0;
    D_005BE17C = 0;
    D_005BE180 = 0;
    return 0;
}

int func_002FA790(void) {
    return D_005BE180;
}
