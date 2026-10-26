int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

float func_0022CD90(char *);

extern char D_005BCBD8[4];

extern char D_005BCBDC[4];

extern char D_005BCBE0[8];

extern char D_005BCBE8[8];

extern char D_005BCBF0[8];

extern char D_005BCBF8[8];

extern char D_005BCC00[8];

extern char D_005BCC08[8];

extern char D_005BCC10[8];

extern char D_005BCC18[8];

extern char D_005BCC20[8];

extern char D_005630F0[];

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S38As;

typedef struct { int x0; int x4; short x8; char pad[2]; } S38At;

typedef struct { unsigned char f0; unsigned char f1; unsigned char f2; unsigned char f3; unsigned char f4; char pad; short h; float g; float v[3]; unsigned char on; char pad2[3]; int a; int b; } S38Ao;

typedef struct { S38As u; S38At t; S38Ao o; } S38Ax;

int func_0038AA80(S38Ax *);

int func_002F69A0(S38As *, char *, char *);

int func_002F6D40(S38At *, char *, char *);

int func_0038A620(char *p, int *q, char *r) {
    char name[32];
    S38Ax x;
    x.u.b0 = -1;
    x.u.b1 = -1;
    x.u.b2 = 0;
    x.u.e8 = 0;
    x.u.e4 = 0;
    x.u.e0 = 0;
    x.t.x0 = 0;
    x.t.x4 = 0xF000;
    x.t.x8 = 0x180C;
    x.o.f0 = 0;
    x.o.f1 = 0;
    x.o.f2 = 0;
    x.o.f3 = 1;
    x.o.f4 = 1;
    x.o.h = -1;
    x.o.g = 0.0f;
    x.o.v[2] = 0.0f;
    x.o.v[1] = 0.0f;
    x.o.v[0] = 0.0f;
    x.o.on = 0;
    x.o.a = -1;
    x.o.b = -1;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCBD8) == 0) {
            return func_0038AA80(&x);
        }
        if (func_002F69A0(&x.u, name, r) == 0 && func_002F6D40(&x.t, name, r) == 0) {
            if (func_0012B1A0(name, D_005BCBDC) == 0) {
                func_0022CBB0(r, name);
                if (func_0012B1A0(name, D_005BCBE0) == 0) x.o.f0 = 1;
                else if (func_0012B1A0(name, D_005BCBE8) == 0) x.o.f0 = 0;
            } else if (func_0012B1A0(name, D_005BCBF0) == 0) {
                func_0022CBB0(r, name);
                if (func_0012B1A0(name, D_005BCBE0) == 0) x.o.f1 = 1;
                else if (func_0012B1A0(name, D_005BCBE8) == 0) x.o.f1 = 0;
            } else if (func_0012B1A0(name, D_005BCBF8) == 0) {
                func_0022CBB0(r, name);
                if (func_0012B1A0(name, D_005BCBE0) == 0) x.o.f2 = 1;
                else if (func_0012B1A0(name, D_005BCBE8) == 0) x.o.f2 = 0;
            } else if (func_0012B1A0(name, D_005BCC00) == 0) {
                func_0022CBB0(r, name);
                if (func_0012B1A0(name, D_005BCBE0) == 0) x.o.f3 = 1;
                else if (func_0012B1A0(name, D_005BCBE8) == 0) x.o.f3 = 0;
            } else if (func_0012B1A0(name, D_005BCC08) == 0) {
                func_0022CBB0(r, name);
                if (func_0012B1A0(name, D_005BCBE0) == 0) x.o.f4 = 1;
                else if (func_0012B1A0(name, D_005BCBE8) == 0) x.o.f4 = 0;
            } else if (func_0012B1A0(name, D_005BCC10) == 0) {
                x.o.h = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005630F0) == 0) {
                x.o.g = (float)func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BCC18) == 0) {
                x.o.v[0] = func_0022CD90(r);
                x.o.v[1] = func_0022CD90(r);
                x.o.v[2] = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BCC20) == 0) {
                x.o.on = 1;
                x.o.a = func_0022CD60(r);
                x.o.b = func_0022CD60(r);
            }
        }
    }
    return 0;
}
