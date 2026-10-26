int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BCAE0[8];

extern char D_005BCAE8[8];

extern char D_005BCAF0[8];

extern char D_005BCAF8[8];

extern char D_005BCB00[8];

extern char D_005BCB08[8];

extern char D_005BCB10[8];

extern char D_005BCB18[4];

extern char D_005BCB1C[4];

extern char D_005BCB20[8];

extern char D_005BCB28[8];

extern char D_005BCB30[8];

extern char D_005BCB38[8];

extern char D_005BCB40[8];

extern char D_005BCB48[8];

extern char D_005BCB50[8];

extern char D_005BCB58[8];

extern char D_005BCB60[8];

extern char D_005BCB68[8];

extern char D_005BCB70[8];

extern char D_005BCB78[8];

extern char D_005BCB80[8];

extern char D_005BCB88[8];

extern char D_005BCB90[8];

extern char D_005BCB98[8];

extern char D_005BCBA0[8];

extern char D_005BCBA8[8];

typedef struct { unsigned char m0, m1, m2, m3, m4; char pad[3]; float f8; float v[3]; float g; float h; short s3[3]; char pad2[2]; float w3[3]; float d4; float d8; short t3[3]; unsigned char e2, e3; float e4; float e8; unsigned char on; char pad3[3]; int a; int b; } S384;

int func_003850B0(S384 *);

int func_00384AC0(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S384 s;
    s.m0 = 0;
    s.m1 = 0;
    s.m2 = 0;
    s.m4 = 0;
    s.m3 = 0;
    s.v[0] = s.v[1] = s.v[2] = 0.0f;
    s.g = 0.0f;
    s.h = 0.0f;
    s.s3[0] = s.s3[1] = s.s3[2] = 0;
    s.w3[0] = s.w3[1] = s.w3[2] = 0.0f;
    s.d4 = 0.0f;
    s.d8 = 0.0f;
    s.t3[0] = s.t3[1] = s.t3[2] = 0;
    s.e2 = s.e3 = 0;
    s.e4 = 0.0f;
    s.e8 = 0.0f;
    s.on = 0;
    s.a = -1;
    s.b = -1;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCAE0) == 0) {
            return func_003850B0(&s);
        }
        if (func_0012B1A0(name, D_005BCAE8) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCAF0) == 0) s.m0 = 0;
            else if (func_0012B1A0(w, D_005BCAF8) == 0) s.m0 = 1;
            else if (func_0012B1A0(w, D_005BCB00) == 0) s.m0 = 2;
            else if (func_0012B1A0(w, D_005BCB08) == 0) s.m0 = 3;
        } else if (func_0012B1A0(name, D_005BCB10) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCB18) == 0) s.m1 = 2;
            else if (func_0012B1A0(w, D_005BCB1C) == 0) s.m1 = 3;
            else if (func_0012B1A0(w, D_005BCB20) == 0) s.m1 = 1;
        } else if (func_0012B1A0(name, D_005BCB28) == 0) {
            s.m2 = func_0022CD60(r) != 0;
        } else if (func_0012B1A0(name, D_005BCB30) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCB38) == 0) s.m4 = 1;
            else if (func_0012B1A0(w, D_005BCB40) == 0) s.m4 = 0;
        } else if (func_0012B1A0(name, D_005BCB48) == 0) {
            s.f8 = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB50) == 0) {
            s.m3 = func_0022CD60(r) != 0;
        } else if (func_0012B1A0(name, D_005BCB58) == 0) {
            s.v[0] = func_0022CD90(r);
            s.v[1] = func_0022CD90(r);
            s.v[2] = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB60) == 0) {
            s.g = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB68) == 0) {
            s.h = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB70) == 0) {
            s.s3[0] = func_0022CD60(r);
            s.s3[1] = func_0022CD60(r);
            s.s3[2] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCB78) == 0) {
            s.w3[0] = func_0022CD90(r);
            s.w3[1] = func_0022CD90(r);
            s.w3[2] = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB80) == 0) {
            s.d4 = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB88) == 0) {
            s.d8 = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCB90) == 0) {
            s.t3[0] = func_0022CD60(r);
            s.t3[1] = func_0022CD60(r);
            s.t3[2] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCB98) == 0) {
            s.e2 = 1;
            s.e8 = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCBA0) == 0) {
            s.e3 = 1;
            s.e4 = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCBA8) == 0) {
            s.on = 1;
            s.a = func_0022CD60(r);
            s.b = func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005A6F50[];

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005AADD0[];

extern char D_005AEB30[];

extern char D_005AEB54[];

void func_0013D6A0();

void func_00277D30();

char * func_003852D0(p) char *p; {
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
    *(char * *)(p + 56) = D_005AADD0;
    *(int *)(p + 64) = -1;
    *(char * *)(p) = D_005AEB30;
    *(char * *)(p + 56) = D_005AEB54;
    *(char * *)(p + 464) = D_005A7790;
    *(int *)(p + 472) = 0;
    *(int *)(p + 468) = 0;
    *(char * *)(p + 464) = D_005A7780;
    func_00277D30(p + 240, D_005AEB54, D_005AEB30, D_005AADD0, 1065353216, 135, -1);
    *(char *)(p + 68) = 1;
    *(char *)(p + 69) = 1;
    *(char *)(p + 70) = 0;
    *(char *)(p + 72) = 0;
    *(char *)(p + 71) = 0;
    *(int *)(p + 80) = 0;
    *(int *)(p + 76) = 0;
    return p;
}
