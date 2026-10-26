extern char D_01CB0510[];

extern int D_0058C3C0[];

void func_0050A5E0(char *, int, unsigned char *, unsigned char *, unsigned char *);

void func_0050A560(char *, int);

static inline int tst50A(signed char k) {
    unsigned int *w = (unsigned int *)(D_01CB0510 + k / 32 * 4 + 0x1C);
    unsigned int m = 1 << (k & 31);
    return (*w & m) != 0;
}

void func_00509FA0(char *p) {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    int i;
    func_0050A5E0(p, 0, &a, &b, &c);
    if (a == 1) *(int *)(p + 0x18) |= 1;
    func_0050A5E0(p, 1, &a, &b, &c);
    if (a == 1) *(int *)(p + 0x18) |= 2;
    if (b == 1) *(int *)(p + 0x18) |= 0x10;
    if (c == 1) *(int *)(p + 0x18) |= 0x80;
    func_0050A5E0(p, 2, &a, &b, &c);
    if (a == 1) *(int *)(p + 0x18) |= 4;
    if (b == 1) *(int *)(p + 0x18) |= 0x20;
    if (c == 1) *(int *)(p + 0x18) |= 0x100;
    func_0050A5E0(p, 3, &a, &b, &c);
    if (a == 1) *(int *)(p + 0x18) |= 8;
    if (b == 1) *(int *)(p + 0x18) |= 0x40;
    if (c == 1) *(int *)(p + 0x18) |= 0x200;
    for (i = 0; i < 11; i++) {
        int m = 1 << i;
        if (*(int *)(p + 0x18) & m) {
            if (tst50A(i)) *(int *)(p + 0x18) &= ~m;
            else func_0050A560(p, D_0058C3C0[i]);
        }
    }
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005BB530[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_0050A720(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005BB530;
    *(char *)(p + 64) = 0;
    func_00100450(p + 192, (void *)func_002790E0, (void *)func_002791E0, 1536, 2, 135);
    *(char *)(p + 3340) = 0;
    *(char *)(p + 3341) = 0;
    *(char *)(p + 3342) = 0;
    *(char *)(p + 3343) = 0;
    *(char *)(p + 3344) = 0;
    *(int *)(p + 3268) = -1;
    *(int *)(p + 3300) = 0;
    *(int *)(p + 3272) = -1;
    *(int *)(p + 3304) = 0;
    *(int *)(p + 3276) = -1;
    *(int *)(p + 3308) = 0;
    *(int *)(p + 3280) = -1;
    *(int *)(p + 3312) = 0;
    *(int *)(p + 3284) = -1;
    *(int *)(p + 3316) = 0;
    *(int *)(p + 3288) = -1;
    *(int *)(p + 3320) = 0;
    *(int *)(p + 3292) = -1;
    *(int *)(p + 3324) = 0;
    *(int *)(p + 3296) = -1;
    *(int *)(p + 3328) = 0;
    *(int *)(p + 56) = 0;
    return p;
}

void func_0050A580(p0, p1) char *p0; int p1; {
    unsigned char v1;
    int v0;
    char *v2;
    v1 = 0;
    v0 = 0;
    v2 = p0;
    do {
        if (*(int *)(v2 + 72) == p1) {
            v1 = 1;
        }
        v0 = (v0 + 1);
        v2 = (v2 + 4);
    } while ((v0 < 8));
    if ((v1 & 255) == 0) {
        *(int *)((char *)((*(signed char *)(p0 + 106) << 2) + (int)p0) + 72) = p1;
        *(char *)(p0 + 106) = (*(signed char *)(p0 + 106) + 1);
    }
}
