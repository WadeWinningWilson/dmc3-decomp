void func_00198450(char *, int, int, unsigned short);

int func_001A4F90(char *);

char *func_001B0FD0(char *, int, int);

void func_00130990(char *, int);

int func_001A5B30(char *, int);

void func_00199730(char *, char *, char *, int);

void func_00197910(char *, char *);

typedef struct { int a[64]; int x; int y; } Buf66;

int func_0036F5E0(char *p, int a, int id) {
    Buf66 b;
    char t[64];
    int i;
    int n;
    char *buf;
    for (i = 0; i < 64; i++) b.a[i] = 0;
    b.y = 0;
    b.x = 0;
    func_00197910((char *)&b, t);
    func_00198450(p + 0x40, a, id, 0);
    n = func_001A4F90(p + 0x40);
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_00130990(buf, n >> 2);
    func_00199730(p + 0x40, buf, (char *)&b, 0);
    if (func_001A5B30(p + 0x40, n) != 0) {
        return 0;
    }
    p[0xA] = 1;
    return 1;
}

int func_001AEA60(char *, int, unsigned short);

extern char D_00666750[];

int func_0036E050(int);

int func_00370000(char *p) {
    if (*(int *)(p + 24) == 0 && (*(int *)(p + 24) = func_0036E050(func_001AEA60(D_00666750, 6, 2))) == 0) {
        return 0;
    }
    return 1;
}

void func_001282D0(char *, char *, int);

int func_002A67F0(int, int);

typedef struct { char b[5]; } SvS5;

typedef struct { char b[15]; } SvS15;

typedef struct { char b[6]; } SvS6;

typedef struct { float f[4]; } SvF4;

typedef struct { float f[2]; } SvF2;

void func_0036F7D0(char *d, char *s) {
    unsigned char k;
    char *r;
    *(int *)(d + 0x1C) = *(int *)(s + 0x14);
    func_001282D0(d + 0x20, s + 0x18, 0x3B);
    func_001282D0(d + 0x5B, s + 0x53, 8);
    func_001282D0(d + 0x64, s + 0x5C, 8);
    func_001282D0(d + 0x6C, s + 0x64, 4);
    *(unsigned char *)(d + 0x70) = *(unsigned char *)(s + 0x68);
    *(SvS5 *)(d + 0x9C) = *(SvS5 *)(s + 0x6C);
    *(SvS15 *)(d + 0xA1) = *(SvS15 *)(s + 0x71);
    *(signed char *)(d + 0xB0) = *(signed char *)(s + 0x80);
    *(signed char *)(d + 0xB1) = *(signed char *)(s + 0x81);
    *(unsigned char *)(d + 0xB2) = *(unsigned char *)(s + 0x82);
    *(unsigned char *)(d + 0xB3) = *(unsigned char *)(s + 0x83);
    *(float *)(d + 0xB4) = *(float *)(s + 0x84);
    *(float *)(d + 0xB8) = *(float *)(s + 0x88);
    *(signed char *)(d + 0xBC) = *(signed char *)(s + 0x8C);
    *(SvS6 *)(d + 0xBD) = *(SvS6 *)(s + 0x8D);
    *(SvF4 *)(d + 0xC4) = *(SvF4 *)(s + 0x94);
    *(SvF2 *)(d + 0xD4) = *(SvF2 *)(s + 0xA4);
    *(SvF4 *)(d + 0xDC) = *(SvF4 *)(s + 0xAC);
    *(SvF4 *)(d + 0xEC) = *(SvF4 *)(s + 0xBC);
    func_001282D0(*(char **)(d + 4) + 0x618, s + 0xCC, 8);
    func_001282D0(*(char **)(d + 4) + 0x680, s + 0xD4, 8);
    func_001282D0(*(char **)(d + 4) + 0x688, s + 0xDC, 8);
    func_001282D0(*(char **)(d + 4) + 0x690, s + 0xE4, 0xC);
    func_001282D0(*(char **)(d + 4) + 0x620, s + 0xF0, 0x60);
    k = func_002A67F0(*(signed char *)(s + 0xC), *(unsigned char *)(s + 0xD));
    r = s + k * 0x68;
    func_001282D0(*(char **)(d + 0x14), r + 0x150, 0x68);
    func_001282D0(*(char **)(d + 0x14) + 0x68, r + 0x358, 0x68);
    func_001282D0(d + 0x71, s + k * 21 + 0x560, 0x15);
}

void func_00253BC0(char *, char *);

void func_0036FA60(char *d, char *s) {
    unsigned char k;
    char *r;
    *(int *)(s + 0x14) = *(int *)(d + 0x1C);
    func_001282D0(s + 0x18, d + 0x20, 0x3B);
    func_001282D0(s + 0x53, d + 0x5B, 8);
    func_001282D0(s + 0x5C, d + 0x64, 8);
    func_001282D0(s + 0x64, d + 0x6C, 4);
    *(unsigned char *)(s + 0x68) = *(unsigned char *)(d + 0x70);
    func_00253BC0(d + 0x9C, d + 0xFC);
    *(SvS5 *)(s + 0x6C) = *(SvS5 *)(d + 0x9C);
    *(SvS15 *)(s + 0x71) = *(SvS15 *)(d + 0xA1);
    *(signed char *)(s + 0x80) = *(signed char *)(d + 0xB0);
    *(signed char *)(s + 0x81) = *(signed char *)(d + 0xB1);
    *(unsigned char *)(s + 0x82) = *(unsigned char *)(d + 0xB2);
    *(unsigned char *)(s + 0x83) = *(unsigned char *)(d + 0xB3);
    *(float *)(s + 0x84) = *(float *)(d + 0xB4);
    *(float *)(s + 0x88) = *(float *)(d + 0xB8);
    *(signed char *)(s + 0x8C) = *(signed char *)(d + 0xBC);
    *(SvS6 *)(s + 0x8D) = *(SvS6 *)(d + 0xBD);
    *(SvF4 *)(s + 0x94) = *(SvF4 *)(d + 0xC4);
    *(SvF2 *)(s + 0xA4) = *(SvF2 *)(d + 0xD4);
    *(SvF4 *)(s + 0xAC) = *(SvF4 *)(d + 0xDC);
    *(SvF4 *)(s + 0xBC) = *(SvF4 *)(d + 0xEC);
    func_001282D0(s + 0xCC, *(char **)(d + 4) + 0x618, 8);
    func_001282D0(s + 0xD4, *(char **)(d + 4) + 0x680, 8);
    func_001282D0(s + 0xDC, *(char **)(d + 4) + 0x688, 8);
    func_001282D0(s + 0xE4, *(char **)(d + 4) + 0x690, 0xC);
    func_001282D0(s + 0xF0, *(char **)(d + 4) + 0x620, 0x60);
    k = func_002A67F0(*(signed char *)(s + 0xC), *(unsigned char *)(s + 0xD));
    r = s + k * 0x68;
    func_001282D0(r + 0x150, *(char **)(d + 0x14), 0x68);
    func_001282D0(r + 0x358, *(char **)(d + 0x14) + 0x68, 0x68);
    func_001282D0(s + k * 21 + 0x560, d + 0x71, 0x15);
}

void func_0036FD20();

void func_0036FD60();

void func_0036FCF0(int p0) {
    func_0036FD20();
    func_0036FD60(p0);
}

extern char D_005A6F50[];

extern char D_005ADC40[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_0036E550();

char * func_0036E3F0(p) char *p; {
    void func_0036E4E0();
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
    *(char * *)(p) = D_005ADC40;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 81, 135);
    func_00100450(p + 1408, (void *)func_0036E550, (void *)func_0036E4E0, 1536, 3);
    *(int *)(p + 7068) = 0;
    *(int *)(p + 7056) = 0;
    *(char *)(p + 7072) = 0;
    *(char *)(p + 6340) = 0;
    *(char *)(p + 6341) = 1;
    *(char *)(p + 6343) = 0;
    *(char *)(p + 6342) = 0;
    *(char *)(p + 6484) = 0;
    *(char *)(p + 6485) = 0;
    return p;
}

void func_0036F7C0(char *p) {
    extern void func_0036E4E0(); func_0036E4E0(p + -4); }

void func_0036F490(void) {}
