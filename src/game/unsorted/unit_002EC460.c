extern char D_01CAFF0C[];

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

float func_0022CD90(char *);

short func_0020F9B0(char *);

int func_002F7400(char *);

int func_002F7460(char *);

extern char D_005BC350[8];

extern char D_005BC358[8];

extern char D_005BC360[8];

extern char D_005BC368[4];

extern char D_005BC36C[4];

extern char D_005BC370[8];

extern char D_005BC378[8];

extern char D_005BC380[8];

extern char D_005BC388[8];

extern char D_005BC390[8];

extern char D_005BC398[8];

extern char D_005BC3A0[4];

extern char D_005BC3A4[4];

extern char D_005BC3A8[4];

extern char D_005BC3AC[4];

extern char D_005BC3B0[4];

extern char D_005BC3B4[4];

extern char D_005BC3B8[8];

extern char D_005BC3C0[8];

extern char D_005BC3C8[8];

extern char D_005BC3D0[8];

extern char D_005BC3D8[8];

extern char D_005572E8[];

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S2ECh;

typedef struct { unsigned char a; char pad[3]; int b; int c; } S2ECe;

typedef struct { unsigned char b0; char pad[3]; int i4; unsigned char c8; unsigned char c9; short hA; short hC; char padE[2]; float vv[2][3]; unsigned char m28; char pad29[3]; int one2C; int cnt; S2ECe ent[8]; } S2ECo;

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S2ECs;

typedef struct { int x0; int x4; short x8; char pad[2]; unsigned int flags; unsigned char mode; char pad2[3]; float v[3]; int z; } S2ECt;

typedef struct { S2ECo o; S2ECs u; S2ECt t; } S2ECx;

char *func_002ECAE0(char *, int *, S2ECh *, S2ECo *, short);

int func_002F6690(S2ECh *, char *, char *);

int func_002F69A0(S2ECs *, char *, char *);

int func_002F6D40(S2ECt *, char *, char *);

char *func_002EC460(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S2ECh s;
    S2ECx x;
    char *e;
    unsigned char k;
    short id;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.f10[1] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
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
    x.o.b0 = 0;
    x.o.i4 = -1;
    x.o.hA = -1;
    x.o.hC = -1;
    x.o.vv[0][0] = x.o.vv[0][1] = x.o.vv[0][2] = x.o.vv[1][0] = x.o.vv[1][1] = x.o.vv[1][2] = 0.0f;
    x.o.m28 = 0;
    x.o.one2C = 1;
    x.o.cnt = 0;
    x.u.b0 = -1;
    x.u.b1 = -1;
    x.u.b2 = 0;
    x.u.e8 = 0;
    x.u.e4 = 0;
    x.u.e0 = 0;
    x.t.x0 = 0;
    x.t.x4 = 0xF000;
    x.t.x8 = 0x180C;
    x.t.flags = 0;
    x.t.mode = 0;
    x.t.z = 0;
    k = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC350) == 0) {
            e = 0;
            id = func_0020F9B0(*(char **)(*(char **)D_01CAFF0C + 0x18));
            if (id != -1)
                e = func_002ECAE0(p, q, &s, &x.o, id);
            return e;
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&x.u, name, r) == 0 && func_002F6D40(&x.t, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC358) == 0) {
                x.o.i4 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC360) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC368) == 0)
                    x.o.b0 = 1;
                else
                    x.o.b0 = 0;
            } else if (func_0012B1A0(name, D_005BC36C) == 0) {
                func_0022CBB0(r, w);
                x.o.c8 = func_002F7400(w);
                x.o.hA = func_0022CD60(r);
                k = 0;
            } else if (func_0012B1A0(name, D_005BC370) == 0) {
                func_0022CBB0(r, w);
                x.o.c9 = func_002F7400(w);
                x.o.hC = func_0022CD60(r);
                k = 1;
            } else if (func_0012B1A0(name, D_005BC378) == 0) {
                x.o.vv[k][0] = func_0022CD90(r);
                x.o.vv[k][1] = func_0022CD90(r);
                x.o.vv[k][2] = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BC380) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC388) == 0) x.o.m28 = 2;
                else if (func_0012B1A0(w, D_005BC368) == 0) x.o.m28 = 1;
            } else if (func_0012B1A0(name, D_005BC390) == 0) {
                x.o.one2C = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC398) == 0) {
                func_0022CBB0(r, w);
                x.o.ent[x.o.cnt].a = func_002F7460(w);
                x.o.ent[x.o.cnt].b = func_0022CD60(r);
                x.o.ent[x.o.cnt].c = func_0022CD60(r);
                x.o.cnt++;
            } else if (func_0012B1A0(name, D_005BC3A0) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC3A4) == 0) x.t.flags |= 1;
                else if (func_0012B1A0(w, D_005BC3A8) == 0) x.t.flags |= 2;
                else if (func_0012B1A0(w, D_005BC3AC) == 0) x.t.flags |= 4;
                else if (func_0012B1A0(w, D_005BC3B0) == 0) x.t.flags |= 8;
                else if (func_0012B1A0(w, D_005BC3B4) == 0) x.t.flags |= 0x30000;
            } else if (func_0012B1A0(name, D_005BC3B8) == 0) {
                x.t.v[0] = func_0022CD90(r);
                x.t.v[1] = func_0022CD90(r);
                x.t.v[2] = func_0022CD90(r);
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC3C0) == 0) x.t.mode = 1;
                else if (func_0012B1A0(w, D_005BC3C8) == 0) x.t.mode = 2;
                else if (func_0012B1A0(w, D_005BC3D0) == 0) x.t.mode = 3;
                else if (func_0012B1A0(w, D_005572E8) == 0) x.t.mode = 4;
            } else if (func_0012B1A0(name, D_005BC3D8) == 0) {
                x.t.z = func_0022CD60(r);
            }
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005AB380[];

extern char D_005AB3A4[];

extern char D_005AB424[];

extern char D_005AB4B8[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

int func_0028C110();

void func_00400FF0();

int func_002ED9E0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005AB380;
    *(char **)(v0 + 64) = D_005AB3A4;
    *(char **)(v0 + 160) = D_005AB424;
    *(char **)(v0 + 208) = D_005AB4B8;
    func_00100450((v0 + 224), (char *)func_001AAD30, (char *)func_0013D240, 16, 32);
    func_00100450((v0 + 876), (char *)func_001AAD30, (char *)func_0013D240, 16, 2);
    func_00400FF0((v0 + 908));
    func_0028C110((v0 + 1184));
    *(char *)(v0 + 1840) = 0;
    *(char *)(v0 + 1841) = 0;
    *(short *)(v0 + 1842) = 0;
    *(int *)(v0 + 1848) = 0;
    v1 = 0;
    *(int *)(v0 + 1852) = 0;
    v3 = v0;
    *(int *)(v0 + 1856) = 0;
    *(int *)(v0 + 1872) = 0;
    *(int *)(v0 + 1876) = 0;
    *(int *)(v0 + 1880) = 0;
    *(int *)(v0 + 1884) = 0x3f800000;
    *(int *)(v0 + 1888) = 0x47c35000;
    *(char *)(v0 + 1892) = 0;
    *(char *)(v0 + 1893) = 0;
    *(short *)(v0 + 1894) = 0;
    v2 = -1;
    do {
        *(short *)(v3 + 1896) = v2;
        *(short *)(v3 + 1898) = v2;
        v1 = (v1 + 5);
        *(short *)(v3 + 1900) = v2;
        *(short *)(v3 + 1902) = v2;
        *(short *)(v3 + 1904) = v2;
        v3 = (v3 + 10);
    } while ((v1 < 10));
    *(int *)(v0 + 940) = 0;
    *(int *)(v0 + 936) = 0;
    *(char *)(v0 + 1828) = 0;
    *(char *)(v0 + 1175) = 1;
    *(short *)(v0 + 1102) = v2;
    return (int)v0;
}
