void func_001C52A0(int x, char *o) {
    unsigned short fl = *(unsigned short *)(o + 4);
    if (fl & 4) {
        return;
    }
    if (*(unsigned char *)o == 0 || *(unsigned char *)(o + 3) == 0) {
        return;
    }
    *(unsigned short *)(o + 4) = fl | 4;
    *(short *)(o + 0xC) = 3;
}

extern char *D_005BE0D8;

void func_001C6520(char *, int, int, int);

void func_001C6130(char *p) {
    func_001C6520(p, 0, 1, 0xE);
    (*(long long **)(p + 0x158A4))[0] = 0;
    (*(long long **)(p + 0x158A4))[1] = 0x3F;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
    (*(long long **)(p + 0x158A4))[0] = (long long)((*(short *)(D_005BE0D8 + 0x34) + *(short *)(D_005BE0D8 + 0x2A)) << 4) |
                                         ((long long)((*(short *)(D_005BE0D8 + 0x36) + *(short *)(D_005BE0D8 + 0x2C)) << 4) << 32);
    (*(long long **)(p + 0x158A4))[1] = 0x18;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
}

void func_001C5F70(char *, int);

void func_001C5F10(char *);

void func_001C5B00(char *p, char *t) {
    int k = *(signed char *)(D_005BE0D8 + 0xE);
    if (t != 0) {
        int *s = (int *)((char *)(k * 4) + (int)t + 0x20);
        if (*s != 0) {
            func_001C5F70(p, -1);
            **(unsigned long long **)(p + 0x158A4) = ((unsigned long long)(*(unsigned int *)s & 0x0FFFFFFF) << 32) | 0x50000000;
            *(int *)(*(char **)(p + 0x158A4) + 8) = 0;
            *(int *)(*(char **)(p + 0x158A4) + 0xC) = 0;
            *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
            func_001C5F10(p);
            func_001C6520(p, 0, 1, 0xE);
        }
    }
}

typedef int u128 __attribute__((mode(TI)));

void func_001E8150(char *p, unsigned int a, u128 *src, int flag) {
    char *q;
    int n;
    int i;
    int t;
    func_001C6520(p, 0, 1, 0xE);
    (*(long long **)(p + 0x158A4))[0] = ((long long)a << 32) | ((long long)0x10000 << 32);
    (*(long long **)(p + 0x158A4))[1] = 0x50;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
    (*(long long **)(p + 0x158A4))[0] = 0;
    (*(long long **)(p + 0x158A4))[1] = 0x51;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
    (*(long long **)(p + 0x158A4))[0] = 0x10 | ((long long)0x10 << 32);
    (*(long long **)(p + 0x158A4))[1] = 0x52;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
    (*(long long **)(p + 0x158A4))[0] = 0;
    (*(long long **)(p + 0x158A4))[1] = 0x53;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
    func_001C6520(p, 2, 1, 1);
    if (flag != 0) {
        q = *(char **)(p + 0x158A8);
        n = (*(int *)(p + 0x158A4) - *(int *)(q + 0x28)) / 16;
        ((short *)(*(char **)(p + 0x158A8) + 0x30))[(*(unsigned short *)(q + 0x2E))++] = n;
    }
    for (i = 0; i < 64; i++) {
        t = (i ^ (i >> 1)) & 2;
        **(u128 **)(p + 0x158A4) = src[i ^ (t | (t << 1))];
        *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
    }
    func_001C6520(p, 0, 1, 0xE);
    (*(long long **)(p + 0x158A4))[0] = 0;
    (*(long long **)(p + 0x158A4))[1] = 0x3F;
    *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
}

int func_00134DE0();

int func_001EB0D0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    switch (p3) {
    case 0:
        v0 = func_00134DE0(p1, p2, 18);
        break;
    case 1:
        v0 = func_00134DE0(p1, p2, 5);
        break;
    case 2:
        v0 = func_00134DE0(p1, p2, 10);
        break;
    case 3:
        v0 = func_00134DE0(p1, p2, 12);
        break;
    case 4:
        v0 = func_00134DE0(p1, p2, 23);
        break;
    case 5:
        v0 = func_00134DE0(p1, p2, 27);
        break;
    }
    return v0;
}
