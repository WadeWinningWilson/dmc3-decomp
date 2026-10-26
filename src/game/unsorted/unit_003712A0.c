extern char D_01C61820[];

extern char D_01DF5D20[];

extern unsigned short D_005BCA90[4];

void func_001B6480(char *, int);

void func_001B64F0(char *, float);

void func_001B64C0(char *, int);

void func_001B64D0(char *, short *);

void func_001B6500(char *, char *);

void func_001B6510(char *, int);

void func_001B6520(char *, int);

void func_001B6550(char *, int);

void func_001B76A0(char *, int);

float func_001F9C40(char *, int);

typedef struct { int x0; int y0; int c0; int o0; int x1; int y1; int c1; int o1; } R371;

typedef struct { int a; int b; int c; int d; } Q371;

void func_001B6490(char *, Q371 *);

void func_00371FB0(char *p) {
    void func_001B64E0(char *, unsigned short *);
    void func_001B6470(char *, R371 *);
//P<
    R371 r;
    unsigned short uv[4];
    Q371 q;
    short t[2];
//P>
    if (*(unsigned char *)(p + 0x6C) == 1) {
        uv[0] = D_005BCA90[*(unsigned char *)(p + 0x6D)];
        uv[1] = 0x40;
        uv[2] = uv[0] + 0xF;
        uv[3] = 0x7F;
        t[0] = 0x10;
        t[1] = 0x30;
        r.x0 = *(short *)(p + 0x76);
        r.y0 = *(short *)(p + 0x78);
        r.c0 = 0xFFFFFF;
        r.x1 = r.x0 + 0x10;
        r.y1 = r.y0 + 0x30;
        r.c1 = 0xFFFFFF;
        q.a = 8;
        q.b = 0x18;
        func_001B6470(D_01C61820, &r);
        func_001B6480(D_01C61820, 0);
        func_001B6490(D_01C61820, &q);
        func_001B64F0(D_01C61820, 6.283185f * ((float)*(short *)(p + 0x74) / 360.0f));
        func_001B64C0(D_01C61820, 0x40808080);
        func_001B64E0(D_01C61820, uv);
        func_001B64D0(D_01C61820, t);
        func_001B6500(D_01C61820, p + 8);
        func_001B6510(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xF);
        func_001B6550(D_01C61820, 2);
        func_001B76A0(D_01C61820, 0);
        if (!((*(float *)(p + 0x70) += func_001F9C40(D_01DF5D20, 0x87)) <= 2.0f)) {
            *(float *)(p + 0x70) = 0.0f;
            (*(unsigned char *)(p + 0x6D))++;
            if (*(unsigned char *)(p + 0x6D) == 3) {
                *(unsigned char *)(p + 0x6D) = 0;
                *(unsigned char *)(p + 0x6C) = 0;
            }
        }
    }
}

extern unsigned short D_00562930[];

void func_001B7430(char *, int);

void func_00372360(char *p) {
    void func_001B6470(char *, int *);
    void func_001B64E0(char *, short *);
    short uv[4];
    int r[8];
    float a;
    unsigned char al;
    int i;
    int k;
    int v;
    a = *(float *)(p + 0x104) / 20.0f;
    if (a <= 0.0f) a = 0.0f;
    al = (unsigned int)(127.0f * a);
    for (i = 0; i < 16; i++) {
        uv[0] = D_00562930[i * 4] << 4;
        uv[1] = D_00562930[i * 4 + 1] << 4;
        uv[2] = D_00562930[i * 4 + 2] << 4;
        uv[3] = D_00562930[i * 4 + 3] << 4;
        r[0] = *(short *)(p + i * 4 + 0xC2);
        r[1] = *(short *)(p + i * 4 + 0xC4);
        r[2] = 0xFFFFFE;
        r[4] = *(short *)(p + i * 4 + 0xC2) + 0x19;
        r[5] = *(short *)(p + i * 4 + 0xC4) + 0x10;
        r[6] = 0xFFFFFE;
        func_001B6470(D_01C61820, r);
        func_001B6480(D_01C61820, 0);
        k = *(unsigned char *)(p + 0x62);
        v = 0x40 - (k >> 1);
        func_001B64C0(D_01C61820, (al << 24) + ((v << 16) + ((k + 0x40) + (v << 8))));
        func_001B64E0(D_01C61820, uv);
        func_001B6500(D_01C61820, p + 8);
        func_001B6510(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xE);
        func_001B6550(D_01C61820, 2);
        func_001B7430(D_01C61820, 0);
    }
}

extern unsigned short D_00562920[];

void func_00371DE0(char *p) {
    void func_001B6470(char *, int *);
    void func_001B64E0(char *, short *);
    unsigned short uv[4];
    int r[8];
    int i;
    for (i = 0; i < *(unsigned char *)(p + 0x84); i++) {
        uv[0] = D_00562920[*(unsigned char *)(p + i + 0x8C) * 2] << 4;
        uv[1] = D_00562920[*(unsigned char *)(p + i + 0x8C) * 2 + 1] << 4;
        uv[2] = uv[0] + 0x200;
        uv[3] = uv[1] + 0x200;
        r[0] = *(short *)(p + i * 4 + 0x96);
        r[1] = *(short *)(p + i * 4 + 0x98);
        r[2] = 0xFFFFFF;
        r[4] = r[0] + 0x19;
        r[5] = r[1] + 0x19;
        r[6] = 0xFFFFFF;
        func_001B6470(D_01C61820, r);
        func_001B6480(D_01C61820, 0);
        func_001B64C0(D_01C61820, 0x40808080);
        func_001B64E0(D_01C61820, (short *)uv);
        func_001B6500(D_01C61820, p + 8);
        func_001B6510(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xF);
        func_001B6550(D_01C61820, 2);
        func_001B7430(D_01C61820, 0);
    }
}

extern char *D_005BE0D8;

static inline unsigned char pulse371(void) {
    int t = *(int *)(D_005BE0D8 + 0x54);
    unsigned char c;
    if (t & 0x40) c = 0x80 - (t & 0x3F);
    else c = (t & 0x3F) + 0x40;
    return c;
}

static inline int rgba371(int r, int g, int b, int a) {
    return (a << 24) + ((b << 16) + (r + (g << 8)));
}

void func_00371C50(char *p) {
    void func_001B6470(char *, int *);
    void func_001B64E0(char *, short *);
    short uv[4];
    int r[8];
    unsigned char c;
    int k;
    int v;
    uv[0] = 0;
    uv[1] = 0;
    uv[2] = 0xFF0;
    uv[3] = 0x3F0;
    c = pulse371();
    r[0] = *(short *)(p + 0x4C) + *(short *)(p + 0x68);
    r[1] = *(short *)(p + 0x4E) + *(short *)(p + 0x6A);
    r[2] = 0xFFFFFE;
    r[4] = *(short *)(p + 0x4C) + 0xC8 + *(short *)(p + 0x68);
    r[5] = *(short *)(p + 0x4E) + 0x20 + *(short *)(p + 0x6A);
    r[6] = 0xFFFFFE;
    func_001B6470(D_01C61820, r);
    func_001B6480(D_01C61820, 0);
    k = *(unsigned char *)(p + 0x62);
    v = c - (k >> 1);
    func_001B64C0(D_01C61820, rgba371(c + k, v, v, 0x80));
    func_001B64E0(D_01C61820, uv);
    func_001B6500(D_01C61820, p + 8);
    func_001B6510(D_01C61820, 4);
    func_001B6520(D_01C61820, 0xE);
    func_001B6550(D_01C61820, 2);
    func_001B7430(D_01C61820, 0);
}

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

void func_0022B5A0(char *);

extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005B0890[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_0031DCB0(char *);

void func_00204AD0();

void func_00204A70();

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00313E20(char *);

extern char D_005A7790[];

extern char D_005A7780[];

void func_0024D930(char *);

void func_00277D30(char *);

void func_0031E4A0(char *);

void func_00400FF0(char *);

extern char D_005AAA98[];

extern char D_005AFA60[];

void func_0024D9A0();

void func_002791E0();

void func_002E1BC0(char *);

void func_002E8370(char *);

void func_003AD780(char *);

extern char D_005ADFA0[];

extern char D_005ADFC4[];

extern char D_005AE044[];

extern char D_005AE0D8[];

extern char D_005AE1A4[];

extern char D_005AE25C[];

void func_001FBAB0(char *);

void func_00401030();

char *func_003732A0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005ADFA0;
    *(char **)(p + 0x40) = D_005ADFC4;
    *(char **)(p + 0xA0) = D_005AE044;
    *(char **)(p + 0xD0) = D_005AE0D8;
    *(char **)(p + 0x130) = D_005AE1A4;
    *(char **)(p + 0x1D0) = D_005AE25C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x62);
    p[0x860] = 0;
    func_002E8A10(p + 0x97C);
    func_002790E0(p + 0xC00);
    func_00100450(p + 0x1200, func_002790E0, func_002791E0, 0x600, 3);
    func_002790E0(p + 0x2400);
    func_0031DCB0(p + 0x2A00);
    func_00400FF0(p + 0x2A90);
    func_00100450(p + 0x2AAC, func_00400FF0, func_00401030, 0x1C, 3);
    func_00400FF0(p + 0x2B00);
    func_0024D930(p + 0x2B20);
    func_00100450(p + 0x2BF0, func_0024D930, func_0024D9A0, 0xD0, 3);
    func_0024D930(p + 0x2E60);
    q = p + 0x2F30;
    *(char **)(p + 0x2F40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x2FD0, func_00204AD0, func_00204A70, 0xC0, 3);
    q = p + 0x3210;
    *(char **)(p + 0x3220) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x32D0;
    *(char **)(p + 0x32E0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_0028C110(p + 0x3360);
    func_0028C110(p + 0x3580);
    func_001FBAB0(p + 0x3850);
    p[0x39F0] = 0;
    p[0x39F1] = 0;
    *(short *)(p + 0x39F2) = 0;
    *(int *)(p + 0x39F8) = 0;
    *(int *)(p + 0x39FC) = 0;
    *(int *)(p + 0x3A00) = 0;
    *(int *)(p + 0x3A10) = 0;
    *(int *)(p + 0x3A14) = 0;
    *(int *)(p + 0x3A18) = 0;
    *(float *)(p + 0x3A1C) = 1.0f;
    *(float *)(p + 0x3A20) = 100000.0f;
    p[0x3A24] = 0;
    p[0x3A25] = 0;
    *(short *)(p + 0x3A26) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x3A28) = -1;
    func_002E8370(p + 0x3A50);
    func_00313E20(p + 0x3A94);
    q = p + 0x3AB0;
    *(char **)(p + 0x3AC0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x3B10;
    *(char **)(p + 0x3BF0) = D_005A7790;
    *(int *)(p + 0x3BF8) = 0;
    *(int *)(p + 0x3BF4) = 0;
    *(char **)(p + 0x3BF0) = D_005A7780;
    func_00277D30(q);
    return p;
}

int func_0034C1C0(int a, int lim, int d);

extern float D_005629F0[16][2];

void func_00372800(char *p) {
    void func_003725B0(char *);
    int i;
    if ((*(float *)(p + 0x104) -= func_001F9C40(D_01DF5D20, 0x87)) < 0.0f) {
        func_003725B0(p);
        return;
    }
    *(short *)(p + 0xC0) = func_0034C1C0(*(short *)(p + 0xC0), 5, 1);
    for (i = 0; i < 16; i++) {
        *(short *)(p + i * 4 + 0xC2) = *(short *)(p + i * 4 + 0xC2) + (int)((float)*(short *)(p + 0xC0) * D_005629F0[i][0]);
        *(short *)(p + i * 4 + 0xC4) = *(short *)(p + i * 4 + 0xC4) + (int)((float)*(short *)(p + 0xC0) * D_005629F0[i][1]);
    }
}

extern char D_01DFABA0[];

void func_003303F0(char *, int, int, int, int);

extern short D_005629B0[];

void func_00372630(char *p) {
    int i;
    short *t;
    char *q;
    *(unsigned char *)(p + 0xBE) = 1;
    *(float *)(p + 0x104) = 20.0f;
    func_003303F0(D_01DFABA0, 0, 0x1B, 0x40, 0);
    for (i = 0, t = D_005629B0, q = p; i < 16; i++, t += 2, q += 4) {
        *(short *)(q + 0xC2) = *(short *)(p + 0x4C) + t[0];
        *(short *)(q + 0xC4) = *(short *)(p + 0x4E) + t[1];
        *(short *)(p + 0xC0) = 1;
    }
    if (*(unsigned char *)(p + 0x7A) == 0) {
        *(unsigned char *)(p + 0x7A) = 1;
        *(unsigned char *)(p + 0x7B) = 0;
        *(int *)(p + 0x7C) = 0;
        *(short *)(p + 0x80) = *(short *)(p + 0x4C) + 0x44;
        *(short *)(p + 0x82) = *(short *)(p + 0x4E) - 0x10;
    }
}

extern unsigned short D_005BCA98[2];

void func_003721C0(char *p) {
    void func_001B6470(char *, int *);
    void func_001B64E0(char *, unsigned short *);
    unsigned short s[4];
    int r[8];
    if (*(unsigned char *)(p + 0x7A) != 1) return;
    s[0] = D_005BCA98[*(unsigned char *)(p + 0x7B)] << 4;
    s[1] = 0x400;
    s[2] = s[0] + 0x400;
    s[3] = s[1] + 0x400;
    r[0] = *(short *)(p + 0x80);
    r[1] = *(short *)(p + 0x82);
    r[2] = 0xFFFFFF;
    r[4] = r[0] + 0x40;
    r[5] = r[1] + 0x40;
    r[6] = 0xFFFFFF;
    func_001B6470(D_01C61820, r);
    func_001B6480(D_01C61820, 0);
    func_001B64C0(D_01C61820, 0x40808080);
    func_001B64E0(D_01C61820, s);
    func_001B6500(D_01C61820, p + 8);
    func_001B6510(D_01C61820, 4);
    func_001B6520(D_01C61820, 0xF);
    func_001B6550(D_01C61820, 2);
    func_001B7430(D_01C61820, 0);
    *(float *)(p + 0x7C) = *(float *)(p + 0x7C) + func_001F9C40(D_01DF5D20, 0x87);
    if (!(*(float *)(p + 0x7C) <= 2.0f)) {
        *(float *)(p + 0x7C) = 0.0f;
        *(unsigned char *)(p + 0x7B) = *(unsigned char *)(p + 0x7B) + 1;
        if (*(unsigned char *)(p + 0x7B) == 2) {
            *(unsigned char *)(p + 0x7B) = 0;
            *(unsigned char *)(p + 0x7A) = 0;
        }
    }
}

void func_003712A0(char *p0) {
    void func_003725B0();
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 72) = 0;
    func_003725B0();
}

void func_003712B0(char *p0, int p1) {
    void func_003725B0();
    *(char *)(p0 + 0) = p1;
    *(int *)(p0 + 72) = 0;
    func_003725B0();
}
