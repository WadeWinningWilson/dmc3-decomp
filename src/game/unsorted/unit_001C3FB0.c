#include "game/mt_rand.h"
int func_001C52A0(char *, char *);

int func_001C52F0(char *p) {
    int i;
    int r;
    char *e;
    for (i = 0, e = p; i < 16; i++, e += 640) {
        if (*(unsigned char *)e != 0) {
            r = func_001C52A0(p, e);
        }
    }
    return r;
}

unsigned char func_001C6730(char *, char *);

int func_001C6790(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 16; i++, e += 640) {
        if (func_001C6730(p, e) == 0) {
            return 0;
        }
    }
    return 1;
}

unsigned char func_001C6730(char *p0, char *p1) {
    char *v;
    if (*(unsigned char *)p1 == 0) {
        return 1;
    }
    v = *(char **)(p1 + 16);
    if (v == 0) {
        return 0;
    }
    if (*(int *)(v + 32) == 0 || *(int *)(v + 36) == 0) {
        return 0;
    }
    return 1;
}

unsigned int *func_001AE4B0(int);

void func_001AE4F0(int);

void func_001282D0(int, unsigned int *, int);

void func_001EA910(int z, int dst, unsigned char *x) {
    unsigned int *t = func_001AE4B0(0x40);
    int i;
    int j;
    for (i = 0; i <= 0x80; i++) {
        t[i] = x[0] << 24;
    }
    for (j = 0x81; j <= 0xFF; j++) {
        t[j] = x[j - 0x80] << 24;
    }
    func_001282D0(dst, t, 0x400);
    func_001AE4F0(0x40);
}

void func_001C6600(char *, int);

void func_001C6520(char *p, int a, int b, unsigned long long c) {
    if (*(int *)(p + 0x15894) != a || *(int *)(p + 0x15890) != b || *(unsigned long long *)(p + 0x15888) != c) {
        char *q;
        func_001C6600(p, 0);
        q = *(char **)(p + 0x158A4);
        *(char **)(p + 0x158A4) = q + 0x10;
        *(char **)(p + 0x15898) = q;
        *(int *)(p + 0x15894) = a;
        *(int *)(p + 0x15890) = b;
        *(unsigned long long *)(p + 0x15888) = c;
    }
}

void func_002078F0(char *, int);

static inline void put1DD(char *p, long a) {
    char *q = *(char **)(p + 0x158A8);
    unsigned short k = *(unsigned short *)(q + 0x2E);
    long *d;
    *(unsigned short *)(q + 0x2E) = k + 1;
    d = (long *)(*(char **)(*(char **)(p + 0x158A8) + 0x28) + *(unsigned short *)(q + k * 2 + 0x30) * 16);
    d[0] = a;
    d[1] = 3;
}

void func_001DDB10(char *p, char *e) {
    unsigned int n;
    unsigned int sx;
    int y;
    int x;
    unsigned int sy;
    unsigned int t;
    if ((n = *(unsigned int *)(e + 0x14)) != 0) {
        t = *(unsigned int *)(e + 0x8C) + 1;
        *(unsigned int *)(e + 0x8C) = t;
        if (!(t < n)) {
            *(unsigned int *)(e + 0x8C) = 0;
            *(unsigned int *)(e + 0x90) = mt_rand();
        }
    }
    func_002078F0(D_01DF7E50, *(int *)(e + 0x90));
    sx = (unsigned int)(*(int *)(e + 0x28) * 64) / 100;
    sy = (unsigned int)(*(int *)(e + 0x2C) * 32) / 100;
    for (y = 0; y < *(int *)(p + 0x15928); y += sx) {
        for (x = 0; x < *(int *)(p + 0x1592C); x += sy) {
            *(short *)(e + 0x94) = mt_rand() & 0x3F;
            *(short *)(e + 0x96) = mt_rand() & 0x1F;
            put1DD(p, (long)(*(short *)(e + 0x94) * 16 + 8) | ((long)(*(short *)(e + 0x96) * 16 + 8) << 16));
            put1DD(p, (long)((*(short *)(e + 0x94) + 0x40) * 16 + 9) | ((long)((*(short *)(e + 0x96) + 0x20) * 16 + 9) << 16));
        }
    }
}

extern char *D_005BE0D8;

void func_001C5EB0(char *p, char *o) {
    *(char **)(p + 0x158A8) = o;
    *(int *)(*(char **)(p + 0x158A8) + 0x28) = ((int *)(*(char **)(p + 0x158A8) + 0x20))[*(signed char *)(D_005BE0D8 + 14)];
    *(short *)(*(char **)(p + 0x158A8) + 0x2E) = 0;
}

int func_001C5F10(char *p) {
    int v = *(int *)(p + 0x158A4);
    *(int *)(p + 0x158A4) = v + 16;
    *(int *)(p + 0x1589C) = v;
    if (*(int *)(p + 0x158A0) == 0) {
        *(int *)(p + 0x158A0) = *(int *)(p + 0x1589C);
    }
    return *(int *)(p + 0x1589C);
}

void func_001EB0D0(char *, int, char *, int);

char *func_001C5F70(char *p, int k) {
    char *cur;
    int n;
    if (*(int *)(p + 0x158A0) == 0) return 0;
    if (*(int *)(p + 0x15898) == 0) return 0;
    func_001C6600(p, 1);
    cur = *(char **)(p + 0x158A4);
    n = (cur - *(char **)(p + 0x1589C)) / 16 - 1;
    if (n == 0) return 0;
    if (k >= 0) {
        *(char **)(p + 0x158A4) = *(char **)(p + 0x158A4) + 0x10;
        *(unsigned long long *)*(char **)(p + 0x1589C) = (unsigned long long)(unsigned int)n | 0x10000000;
        *(int *)(*(char **)(p + 0x1589C) + 8) = 0;
        *(int *)(*(char **)(p + 0x1589C) + 0xC) = n | 0x50000000;
        *(unsigned long long *)cur = 0x70000000;
        *(int *)(cur + 8) = 0;
        *(int *)(cur + 0xC) = 0;
        func_001EB0D0(p, *(int *)(p + 0x158A0), cur, k);
        *(int *)(p + 0x158A0) = 0;
    } else {
        *(unsigned long long *)*(char **)(p + 0x1589C) = (unsigned long long)(unsigned int)n | 0x10000000;
        *(int *)(*(char **)(p + 0x1589C) + 8) = 0;
        *(int *)(*(char **)(p + 0x1589C) + 0xC) = n | 0x50000000;
    }
    *(int *)(p + 0x1589C) = 0;
    *(int *)(p + 0x15898) = 0;
    return cur;
}

extern int D_006543E0[];

void func_00128488(char *, int, int);

void func_001C3FB0(char *p) {
    func_00128488(p, 0, 0x2800);
    func_00128488(p + 0x2800, 0, 0x2300);
    func_00128488(p + 0x4B00, 0, 0xD20);
    func_00128488(p + 0x15888, 0, 0x40);
    *(unsigned char *)(p + 0x15930) = 0;
    *(char **)(p + 0x15880) = p + 0x5880;
    *(int *)(p + 0x15928) = *(short *)(D_005BE0D8 + 0x20);
    *(int *)(p + 0x1592C) = *(short *)(D_005BE0D8 + 0x22);
    *(int *)(p + 0x1591C) = 0;
    *(int *)(p + 0x15914) = 0;
    *(int *)(p + 0x15920) = *(short *)(D_005BE0D8 + 0x20);
    *(int *)(p + 0x15918) = *(short *)(D_005BE0D8 + 0x24) - 1;
    *(int *)(p + 0x158AC) = 0;
    *(int *)(p + 0x158B0) = 0;
    *(int *)(p + 0x158B4) = 0;
    *(int *)(p + 0x158B8) = 0;
    *(int *)(p + 0x158BC) = 0;
    *(int *)(p + 0x158C0) = 0;
    *(int *)(p + 0x15908) = 8;
    *(int *)(p + 0x15924) = D_006543E0[0];
}

unsigned int func_001EA660(char *p, char *h) {
    unsigned int *d = (unsigned int *)(h + 0x14);
    unsigned int s = 0;
    unsigned int i;
    for (i = 0; i < *(unsigned short *)(h + 6); i++) {
        unsigned int x = d[i];
        s += (x >> (i & 0x1F)) | (x << (32 - (i & 0x1F)));
    }
    return s;
}

typedef int u128 __attribute__((mode(TI)));

void func_001E8640(char *p, u128 *src) {
    char *o = *(char **)(p + 0x158A8);
    unsigned short k;
    u128 *d;
    int i;
    int t;
    k = *(unsigned short *)(o + 0x2E);
    *(unsigned short *)(o + 0x2E) = k + 1;
    d = (u128 *)(*(int *)(o + 0x28) + *(unsigned short *)((char *)(k * 2) + (int)o + 0x30) * 16);
    for (i = 0; i < 64; i++) {
        t = (i ^ (i >> 1)) & 2;
        *d++ = src[i ^ (t | (t << 1))];
    }
}

typedef struct { float f[6]; } F1C5;

int func_001C5350(char *p, char *e) {
    int i;
    char *t;
    if (e == 0) {
        for (i = 0; i < 16; i++) {
            char *c = p + i * 0x230 + 0x2800;
            if (*(int *)(c + 0x20) == 0 && *(int *)(c + 0x24) == 0) {
                e = c;
                break;
            }
        }
        if (e == 0) return 0;
    }
    *(char **)(p + 0x158A8) = e;
    *(int *)(*(char **)(p + 0x158A8) + 0x28) = *(int *)(p + 0x15880);
    *(short *)(*(char **)(p + 0x158A8) + 0x2E) = 0;
    *(long long *)(p + 0x158C8) = *(long long *)(p + 0x15888);
    *(int *)(p + 0x158D0) = *(int *)(p + 0x15890);
    *(int *)(p + 0x158D4) = *(int *)(p + 0x15894);
    *(int *)(p + 0x158D8) = *(int *)(p + 0x15898);
    *(int *)(p + 0x158DC) = *(int *)(p + 0x1589C);
    *(int *)(p + 0x158E0) = *(int *)(p + 0x158A0);
    *(int *)(p + 0x158E4) = *(int *)(p + 0x158A4);
    *(int *)(p + 0x158E8) = *(int *)(p + 0x158A8);
    *(F1C5 *)(p + 0x158EC) = *(F1C5 *)(p + 0x158AC);
    *(int *)(p + 0x15904) = *(int *)(p + 0x158C4);
    *(int *)(p + 0x158A4) = *(int *)(p + 0x15880);
    t = *(char **)(p + 0x158A4);
    *(char **)(p + 0x158A4) = t + 0x10;
    *(char **)(p + 0x1589C) = t;
    *(int *)(p + 0x15898) = 0;
    *(long long *)(p + 0x15888) = 0;
    *(int *)(p + 0x15890) = 0;
    *(int *)(p + 0x15894) = 0;
    return 1;
}

void func_001C5B00(char *p, char *t);

extern char D_01C7F280[];

void func_001E7290(char *);

void func_001C5580(char *, int, char *);

static inline void push1C5(char *p, char *e) {
    char *t;
    *(char **)(p + 0x158A8) = e;
    *(int *)(*(char **)(p + 0x158A8) + 0x28) = *(int *)(p + 0x15880);
    *(short *)(*(char **)(p + 0x158A8) + 0x2E) = 0;
    *(long long *)(p + 0x158C8) = *(long long *)(p + 0x15888);
    *(int *)(p + 0x158D0) = *(int *)(p + 0x15890);
    *(int *)(p + 0x158D4) = *(int *)(p + 0x15894);
    *(int *)(p + 0x158D8) = *(int *)(p + 0x15898);
    *(int *)(p + 0x158DC) = *(int *)(p + 0x1589C);
    *(int *)(p + 0x158E0) = *(int *)(p + 0x158A0);
    *(int *)(p + 0x158E4) = *(int *)(p + 0x158A4);
    *(int *)(p + 0x158E8) = *(int *)(p + 0x158A8);
    *(F1C5 *)(p + 0x158EC) = *(F1C5 *)(p + 0x158AC);
    *(int *)(p + 0x15904) = *(int *)(p + 0x158C4);
    *(int *)(p + 0x158A4) = *(int *)(p + 0x15880);
    t = *(char **)(p + 0x158A4);
    *(char **)(p + 0x158A4) = t + 0x10;
    *(char **)(p + 0x1589C) = t;
    *(int *)(p + 0x15898) = 0;
    *(long long *)(p + 0x15888) = 0;
    *(int *)(p + 0x15890) = 0;
    *(int *)(p + 0x15894) = 0;
}

void func_001C5BE0(char *p, int a, unsigned char b) {
    int k;
    int sb;
    int sa;
    char *row;
    char **slot;
    char *t;
    k = *(signed char *)(D_005BE0D8 + 0xE);
    sb = b * 0x230;
    sa = a * 0x230;
    row = (char *)sb + (int)((char *)sa + (int)p);
    slot = (char **)((char *)(k * 4) + (int)row + 0x4B20);
    if (*slot == 0) {
        push1C5(p, row + 0x4B00);
        if (b == 0) func_001E7290(p);
        t = D_01C7F280 + (a << 15);
        *slot = (char *)(k << 14) + (int)((char *)(b << 15) + (int)t);
        func_001C5580(p, 1, t);
    }
    func_001C5B00(p, p + sa + sb + 0x4B00);
}

int func_001C5270();

int func_001C51D0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    v0 = (char *)p1;
    if (v0 != 0) {
        v1 = func_001C5270();
        if ((v1 & 255) != 1) {
            *(short *)(v0 + 4) = (*(unsigned short *)(v0 + 4) | 1);
        }
    }
    return v1;
}

int func_001C5220(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    v0 = (char *)p1;
    if (v0 != 0) {
        v1 = func_001C5270();
        if ((v1 & 255) != 0) {
            *(short *)(v0 + 4) = (*(unsigned short *)(v0 + 4) & 14);
        }
    }
    return v1;
}

int func_001C5270(p0, p1) int p0; char *p1; {
    int v1;
    int v0;
    v0 = 0;
    if (p1 == 0) {
        return v0;
    } else {
        v1 = (*(unsigned short *)(p1 + 4) & 1);
        v1 = (v1 != 0);
        return v1;
    }
}

void func_001C5F00(p0) int p0; {
    *(int *)((char *)p0 + 88232) = 0;
}

extern int D_005BE09C;

int func_00104B80();

void func_00104E78();

int func_001EA8B0(p0, p1, p2) int p0; int p1; int p2; {
    char stk[0x40] __attribute__((aligned(16)));
    int tmp2;
    func_00104E78(((stk + -48) + 48), (D_005BE09C + 256));
    tmp2 = func_00104B80(p1, ((stk + -48) + 48), p2);
    *(int *)((char *)p1 + 12) = 0x3f800000;
    return tmp2;
}

void func_001B1110();

int func_001EB070(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int tmp0;
    if (p1 == 0) {
        return 0;
    } else {
        v0 = (char *)(((p2 << 2) + p1) + 32);
        tmp0 = *(int *)((char *)((p2 << 2) + p1) + 32);
        if (tmp0 == 0) {
            return 0;
        } else {
            func_001B1110((p1 + (p2 << 4)));
            *(int *)(v0 + 0) = 0;
            return 1;
        }
    }
}

void func_001E7270(void) {}

void func_001E7280(void) {}

void func_001C4910(int p0, char *p1, int p2) {
    *(char *)(p1 + 0) = p2;
    *(char *)(p1 + 1) = 0;
    *(char *)(p1 + 2) = 0;
    *(int *)(p1 + 8) = 0;
    *(char *)(p1 + 3) = 1;
    *(short *)(p1 + 4) = 0;
    *(int *)(p1 + 16) = 0;
    *(short *)(p1 + 12) = 0;
}

void func_001C4940(int p0, char *p1) {
    *(char *)(p1 + 0) = 0;
    *(char *)(p1 + 1) = 0;
    *(char *)(p1 + 2) = 0;
    *(int *)(p1 + 8) = 0;
    *(char *)(p1 + 3) = 0;
    *(short *)(p1 + 4) = 0;
    *(int *)(p1 + 16) = 0;
    *(short *)(p1 + 12) = 0;
}
