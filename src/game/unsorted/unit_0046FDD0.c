int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

extern char D_005BDBF8[8];

extern char D_005BDC00[8];

extern char D_005BDC08[4];

extern char D_005BDC0C[4];

extern char D_005BDC10[4];

extern char D_005BDC14[4];

extern char D_005BDC18[4];

extern char D_005BDC1C[4];

extern char D_005BDC20[8];

extern char D_005BDC28[8];

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S46Fs;

typedef struct { int x0; int x4; short x8; char pad[2]; float xC; unsigned char x10; char pad11[3]; float x14; } S46Ft;

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; S46Fs sub; S46Ft sub2; } S46F;

int func_00470090(char *, int *, S46F *);

int func_002F6690(S46F *, char *, char *);

int func_002F69A0(S46Fs *, char *, char *);

int func_002F6D40(S46Ft *, char *, char *);

int func_0046FDD0(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S46F s;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    s.sub.b0 = -1;
    s.sub.b1 = -1;
    s.sub.b2 = 0;
    s.sub.e8 = 0;
    s.sub.e4 = 0;
    s.sub.e0 = 0;
    s.sub2.x0 = 0;
    s.sub2.x4 = 0xF000;
    s.sub2.x8 = 0x180C;
    s.sub2.xC = 1.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDBF8) == 0) {
            return func_00470090(p, q, &s);
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&s.sub, name, r) == 0 && func_002F6D40(&s.sub2, name, r) == 0) {
            if (func_0012B1A0(name, D_005BDC00) == 0) {
                s.sub2.xC = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BDC08) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BDC0C) == 0) {
                    s.sub2.x10 = 0;
                } else if (func_0012B1A0(w, D_005BDC10) == 0) {
                    s.sub2.x10 = 1;
                } else if (func_0012B1A0(w, D_005BDC14) == 0) {
                    s.sub2.x10 = 2;
                } else if (func_0012B1A0(w, D_005BDC18) == 0) {
                    s.sub2.x10 = 3;
                } else if (func_0012B1A0(w, D_005BDC1C) == 0) {
                    s.sub2.x10 = 4;
                } else if (func_0012B1A0(w, D_005BDC20) == 0) {
                    s.sub2.x10 = 5;
                }
            } else if (func_0012B1A0(name, D_005BDC28) == 0) {
                s.sub2.x14 = func_0022CD90(r);
            }
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B5DE0[];

extern char D_005B5E04[];

extern char D_005B5E84[];

extern char D_005B5F18[];

void func_0024F750();

void func_0027A570();

int func_0028C110();

int func_00470670(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005B5DE0;
    *(char **)(v0 + 64) = D_005B5E04;
    *(char **)(v0 + 160) = D_005B5E84;
    *(char **)(v0 + 208) = D_005B5F18;
    func_0027A570((v0 + 224));
    func_0028C110((v0 + 1456));
    *(char *)(v0 + 2112) = 0;
    *(char *)(v0 + 2113) = 0;
    *(short *)(v0 + 2114) = 0;
    *(int *)(v0 + 2120) = 0;
    v1 = 0;
    *(int *)(v0 + 2124) = 0;
    v2 = v0;
    *(int *)(v0 + 2128) = 0;
    *(int *)(v0 + 2144) = 0;
    *(int *)(v0 + 2148) = 0;
    *(int *)(v0 + 2152) = 0;
    *(int *)(v0 + 2156) = 0x3f800000;
    *(int *)(v0 + 2160) = 0x47c35000;
    *(char *)(v0 + 2164) = 0;
    *(char *)(v0 + 2165) = 0;
    *(short *)(v0 + 2166) = 0;
    v3 = -1;
    do {
        *(short *)(v2 + 2168) = v3;
        *(short *)(v2 + 2170) = v3;
        v1 = (v1 + 5);
        *(short *)(v2 + 2172) = v3;
        *(short *)(v2 + 2174) = v3;
        *(short *)(v2 + 2176) = v3;
        v2 = (v2 + 10);
    } while ((v1 < 10));
    *(short *)(v0 + 1378) = v3;
    return (int)v0;
}
