float func_001B46C0(char *p) {
    return (float)*(int *)(*(char **)(p + 0x440) + 0x68);
}

float func_001B4C80(char *p) {
    return (float)*(int *)(*(char **)(*(char **)(p + 0x4A0) + 0x440) + 0x68);
}

void func_001AD140(char *);

extern signed char D_005BE0BC;

void func_001AD100(char *);

int func_00207060(char *);

void func_001B4640(char *p) {
    func_001AD100(p);
    *(float *)(p + 0xBC) = *(float *)(p + 0xBC) + *(float *)(p + 0x10);
    if (D_005BE0BC != 0) {
        func_001AD140(p);
    } else if (func_00207060(p) != 0) {
        func_001AD140(p);
    } else {
        *(volatile unsigned char *)(p + 0x39);
    }
}

typedef int u128 __attribute__((mode(TI)));

void func_001314E0(char *, int, char *, int, int);

void func_00131530(char *, int, char *, int, int);

void func_001B4A50(char *p, unsigned char a, unsigned char b) {
    unsigned int i;
    char *pk;
    char *t;
    *(unsigned char *)(p + 0xA0) = a;
    *(unsigned char *)(p + 0xA1) = b;
    *(unsigned char *)(p + 0xA2) = 0;
    for (i = 0; i < 2; i++) {
        pk = p + i * 0x180 + 0x140;
        t = p + i * 0x20 + 0x460;
        func_001314E0(pk, 0x17, t, 0, 0);
        *(int *)(pk + 0x10) = 0;
        *(int *)(pk + 0x14) = 0x13000000;
        *(int *)(pk + 0x18) = 0x01000404;
        *(int *)(pk + 0x1C) = 0x6C160000;
        *(unsigned long long *)(pk + 0xA0) = 0x3000000000008001ULL;
        *(int *)(pk + 0xA8) = 0xEEE;
        *(int *)(pk + 0xAC) = 0;
        *(unsigned long long *)(pk + 0xB8) = 8;
        *(unsigned long long *)(pk + 0xC8) = 6;
        *(unsigned long long *)(pk + 0xD8) = 0x42;
        func_00131530(t, 0x27, *(char **)(p + 0x4A0) + i * 0x270 + 0x4B0, 0, 0);
        *(u128 *)(t + 0x10) = 0;
    }
}

void func_001B4FD0(int, int, char *, int, int, int);

void func_001B9E40(int, int, char *, int, int, int);

void func_001BD550(int, int, char *, int, int, int);

void func_001BBB50(int, int, char *, int, int, int);

void func_001F5F60(int, int, char *, int, int, int);

void func_001F74E0(int, int, char *, int, int, int);

void func_001B4320(int a, int b, char *q, int d, int e, int f) {
    switch (*(unsigned char *)(q + 1)) {
    case 0: func_001B4FD0(a, b, q, d, e, f); break;
    case 1: func_001B9E40(a, b, q, d, e, f); break;
    case 2: func_001BD550(a, b, q, d, e, f); break;
    case 3: func_001BBB50(a, b, q, d, e, f); break;
    case 4: func_001F5F60(a, b, q, d, e, f); break;
    case 5: func_001F74E0(a, b, q, d, e, f); break;
    }
}

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

static inline unsigned int mt_1B4(void) {
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

void func_001B46D0(char *p, float *a, float *b, float *c, float *d) {
    int j;
    if (a[0] <= b[0] && a[0] >= -b[0] && a[1] <= b[1] && a[1] >= -b[1] && a[2] <= b[2] && a[2] >= -b[2]) {
        j = (signed char)(mt_1B4() % 6);
        while (b[(signed char)j % 3] >= c[(signed char)j % 3] / 2.0f) {
            j = (signed char)(j + 1);
            if (j > 5) j = 0;
        }
        switch ((signed char)j) {
        case 0: a[0] = (0.5f + d[0]) * (c[0] / 2.0f) + (0.5f - d[0]) * b[0]; break;
        case 1: a[1] = (0.5f + d[1]) * (c[1] / 2.0f) + (0.5f - d[1]) * b[1]; break;
        case 2: a[2] = (0.5f + d[2]) * (c[2] / 2.0f) + (0.5f - d[2]) * b[2]; break;
        case 3: a[0] = -(0.5f + d[0]) * (c[0] / 2.0f) - (0.5f - d[0]) * b[0]; break;
        case 4: a[1] = -(0.5f + d[1]) * (c[1] / 2.0f) - (0.5f - d[1]) * b[1]; break;
        case 5: a[2] = -(0.5f + d[2]) * (c[2] / 2.0f) - (0.5f - d[2]) * b[2]; break;
        }
    }
}

signed char func_001B4630(char *p) { return *(signed char *)(p + 2736); }

signed char func_001B4C70(char *p0) {
    return *(signed char *)(*(char **)(p0 + 1184) + 2736);
}
