int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BDC50[8];

extern char D_005BDC58[8];

extern char D_005BDC60[8];

extern char D_005BDC68[8];

extern char D_005BDC70[8];

extern char D_005BDC78[8];

extern char D_005BDC80[8];

extern char D_005BDC88[8];

extern char D_0057BB10[];

typedef struct { unsigned char a; unsigned char b; short c; } S474e;

typedef struct { float v[4]; float g; signed char cnt; char pad; S474e e[16]; signed char n; unsigned char bytes[0x20]; unsigned char k[3]; float w[4]; float z[6]; } S474;

int func_004747E0(char *, int *, S474 *);

int func_00474450(char *p, int *q, char *r) {
    char name[32];
    S474 s;
    S474e *e;
    int i;
    s.cnt = 0;
    s.n = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDC50) == 0) {
            return func_004747E0(p, q, &s);
        }
        if (func_0012B1A0(name, D_005BDC58) == 0) {
            s.v[0] = func_0022CD90(r);
            s.v[1] = func_0022CD90(r);
            s.v[2] = func_0022CD90(r);
            s.v[3] = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BDC60) == 0) {
            e = &s.e[s.cnt];
            e->a = func_0022CD60(r);
            e->b = 0;
            e->c = 0x5A;
            s.cnt++;
        } else if (func_0012B1A0(name, D_005BDC68) == 0) {
            e = &s.e[s.cnt];
            e->a = func_0022CD60(r);
            e->b = func_0022CD60(r);
            e->c = func_0022CD60(r);
            s.cnt++;
        } else if (func_0012B1A0(name, D_005BDC70) == 0) {
            s.g = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BDC78) == 0) {
            s.n = func_0022CD60(r);
            for (i = 0; i < s.n; i++)
                s.bytes[i] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_0057BB10) == 0) {
            s.k[0] = func_0022CD60(r);
            s.k[1] = func_0022CD60(r);
            s.k[2] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDC80) == 0) {
            s.w[0] = func_0022CD90(r);
            s.w[1] = func_0022CD90(r);
            s.w[2] = func_0022CD90(r);
            s.w[3] = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BDC88) == 0) {
            s.z[0] = func_0022CD90(r);
            s.z[1] = func_0022CD90(r);
            s.z[2] = func_0022CD90(r);
            s.z[3] = func_0022CD90(r);
            s.z[4] = func_0022CD90(r);
            s.z[5] = func_0022CD90(r);
        }
    }
    return 0;
}

void func_0027A570();

int func_00474C30(int p0) {
    func_0027A570((p0 + 16));
    return p0;
}

void func_00100580();

void func_0027A660();

int func_00474BD0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_0027A660((v0 + 16), -1);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}
