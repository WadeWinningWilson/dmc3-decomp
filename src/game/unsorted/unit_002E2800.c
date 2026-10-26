/* Looks up entry a (stride 0x80) and hands it to func_002E2870. */
int func_001B0FD0(char *, int, int);

void func_002E2870(char *, int, int, int);

int func_002E2800(char *p, int a, int b) {
    int r = func_001B0FD0(p + 0x34, a << 7, 1);
    if (r) {
        func_002E2870(p, r, a, b);
        return 1;
    }
    return 0;
}

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

float func_0022CD90(char *);

int func_002F7400(char *);

extern char D_005BC298[8];

extern char D_005BC2A0[8];

extern char D_005BC2A8[4];

extern char D_005BC2AC[4];

extern char D_005BC2B0[8];

extern char D_005BC2B8[8];

extern char D_005BC2C0[8];

extern char D_005BC2C8[8];

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S2E3h;

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S2E3s;

typedef struct { int x0; int x4; short x8; char pad[2]; unsigned char on; int a; int b; int pad2[2]; } S2E3t;

typedef struct { unsigned char b0; unsigned char b1; unsigned char b2; char pad; short h4; char pad2[2]; float v[3]; } S2E3o;

typedef struct { S2E3o o; S2E3s u; S2E3t t; } S2E3x;

char *func_002E4A50(char *, int *, S2E3h *, S2E3o *);

int func_002F6690(S2E3h *, char *, char *);

int func_002F69A0(S2E3s *, char *, char *);

int func_002F6D40(S2E3t *, char *, char *);

char *func_002E3DE0(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S2E3h s;
    S2E3x x;
    char *e;
    int k2;
    int k3;
    int k0;
    int k1;
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
    x.o.b0 = 0;
    x.o.b1 = 1;
    x.o.h4 = -1;
    x.o.v[2] = 0.0f;
    x.o.v[1] = 0.0f;
    x.o.v[0] = 0.0f;
    x.u.b0 = -1;
    x.u.b1 = -1;
    x.u.b2 = 0;
    x.u.e8 = 0;
    x.u.e4 = 0;
    x.u.e0 = 0;
    x.t.x0 = 0;
    x.t.x4 = 0xF000;
    x.t.x8 = 0x180C;
    x.t.on = 0;
    x.t.a = -1;
    x.t.b = -1;
    k3 = 0;
    k2 = 0;
    k1 = 0;
    k0 = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC298) == 0) {
            if (s.a0 != -1)
                e = func_002E4A50(p, q, &s, &x.o);
            else
                e = func_002E4A50(0, 0, &s, &x.o);
            *(int *)(e + 0x228) = k0;
            *(int *)(e + 0x22C) = k1;
            *(int *)(e + 0x220) = k2;
            *(int *)(e + 0x224) = k3;
            return e;
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&x.u, name, r) == 0 && func_002F6D40(&x.t, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC2A0) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC2A8) == 0)
                    x.o.b0 = 1;
                else
                    x.o.b0 = 0;
            } else if (func_0012B1A0(name, D_005BC2AC) == 0) {
                func_0022CBB0(r, w);
                x.o.b2 = func_002F7400(w);
                x.o.h4 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC2B0) == 0) {
                x.o.v[0] = func_0022CD90(r);
                x.o.v[1] = func_0022CD90(r);
                x.o.v[2] = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BC2B8) == 0) {
                func_0022CBB0(r, w);
                x.o.b1 = 0;
            } else if (func_0012B1A0(name, D_005BC2C0) == 0) {
                k0 = func_0022CD60(r);
                k1 = func_0022CD60(r);
                k2 = func_0022CD60(r);
                k3 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC2C8) == 0) {
                x.t.on = 1;
                x.t.a = func_0022CD60(r);
                x.t.b = func_0022CD60(r);
            }
        }
    }
    return 0;
}

char *func_002E4180(char *, int *, S2E3h *, S2E3o *);

char *func_002E3A40(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S2E3h s;
    S2E3x x;
    char *e;
    int k2;
    int k3;
    int k0;
    int k1;
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
    x.o.b0 = 0;
    x.o.b1 = 1;
    x.o.h4 = -1;
    x.o.v[2] = 0.0f;
    x.o.v[1] = 0.0f;
    x.o.v[0] = 0.0f;
    x.u.b0 = -1;
    x.u.b1 = -1;
    x.u.b2 = 0;
    x.u.e8 = 0;
    x.u.e4 = 0;
    x.u.e0 = 0;
    x.t.x0 = 0;
    x.t.x4 = 0xF000;
    x.t.x8 = 0x180C;
    x.t.on = 0;
    x.t.a = -1;
    x.t.b = -1;
    k3 = 0;
    k2 = 0;
    k1 = 0;
    k0 = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC298) == 0) {
            if (s.a0 != -1)
                e = func_002E4180(p, q, &s, &x.o);
            else
                return 0;
            *(int *)(e + 0x228) = k0;
            *(int *)(e + 0x22C) = k1;
            *(int *)(e + 0x220) = k2;
            *(int *)(e + 0x224) = k3;
            return e;
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&x.u, name, r) == 0 && func_002F6D40(&x.t, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC2A0) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC2A8) == 0)
                    x.o.b0 = 1;
                else
                    x.o.b0 = 0;
            } else if (func_0012B1A0(name, D_005BC2AC) == 0) {
                func_0022CBB0(r, w);
                x.o.b2 = func_002F7400(w);
                x.o.h4 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC2B0) == 0) {
                x.o.v[0] = func_0022CD90(r);
                x.o.v[1] = func_0022CD90(r);
                x.o.v[2] = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BC2B8) == 0) {
                func_0022CBB0(r, w);
                x.o.b1 = 0;
            } else if (func_0012B1A0(name, D_005BC2C0) == 0) {
                k0 = func_0022CD60(r);
                k1 = func_0022CD60(r);
                k2 = func_0022CD60(r);
                k3 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC2C8) == 0) {
                x.t.on = 1;
                x.t.a = func_0022CD60(r);
                x.t.b = func_0022CD60(r);
            }
        }
    }
    return 0;
}

void func_0013D5D0();

int func_002E2BD0(int p0) {
    func_0013D5D0((p0 + 52));
    return 1;
}

char * func_0024F750();

char * func_00400FF0();

extern char D_005AAAB0[];

extern char D_005AAAD4[];

extern char D_005AAB54[];

extern char D_005AABE8[];

extern char D_005AADD0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

char * func_002E4580(p) char *p; {
    func_0024F750(p);
    *(char * *)(p + 208) = D_005AADD0;
    *(int *)(p + 216) = -1;
    *(char * *)(p) = D_005AAAB0;
    *(char * *)(p + 64) = D_005AAAD4;
    *(char * *)(p + 160) = D_005AAB54;
    *(char * *)(p + 208) = D_005AABE8;
    func_00100450(p + 224, (void *)func_001AAD30, (void *)func_0013D240, 16, 16);
    func_0013D6A0(p + 560);
    func_00400FF0(p + 580);
    *(int *)(p + 576) = 0;
    *(int *)(p + 616) = 0;
    *(int *)(p + 548) = 0;
    *(int *)(p + 544) = 0;
    *(char *)(p + 610) = 1;
    return p;
}

void func_00131DF0();

int func_002E35F0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    int v2;
    int tmp2;
    v0 = (char *)p0;
    v1 = p1;
    v2 = 0;
    while ((v2 < *(int *)(v0 + 48))) {
        tmp2 = (*(int *)(v0 + 0) + (v2 << 7));
        func_00131DF0((*(int *)(v0 + 0) + (v2 << 7)), v1, ((*(int *)(v0 + 0) + (v2 << 7)) + 32));
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(tmp2), "r"((tmp2 + 16)) : "memory");
        v2 = (v2 + 1);
    }
    *(int *)(v0 + 4) = (*(int *)(v0 + 4) ^ 1);
    *(char *)(v0 + 76) = 0;
    return 1;
}

int func_002E3A20(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    *(int *)(p0 + 92) = p4;
    *(int *)(p0 + 80) = p1;
    *(int *)(p0 + 84) = p2;
    *(int *)(p0 + 88) = p3;
}
