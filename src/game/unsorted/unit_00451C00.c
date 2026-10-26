int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BDA9C[4];

extern char D_005BDAA0[8];

extern char D_005BDAA8[4];

extern char D_005BDAAC[4];

extern char D_005BDAB0[8];

extern char D_005BDAB8[8];

extern char D_005BDAC0[8];

typedef struct { short h0, h1, h2, h3; char pad[8]; float v[4]; float w[4]; int k[4]; short m[4]; short n[4]; } S451;

int func_004520E0(char *, int *, int *, int *, int *, S451 *);

static inline int *ent451(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_00451C00(char *p, int *q, char *r) {
    char name[32];
    S451 s;
    s.h0 = s.h1 = s.h2 = s.h3 = -1;
    s.v[0] = 0.0f;
    s.v[1] = 0.0f;
    s.v[2] = 0.0f;
    s.v[3] = 1.0f;
    s.w[0] = 0.0f;
    s.w[1] = 0.0f;
    s.w[2] = 0.0f;
    s.w[3] = 1.0f;
    s.k[0] = s.k[1] = s.k[2] = s.k[3] = 0;
    s.m[0] = s.m[1] = s.m[2] = s.m[3] = -1;
    s.n[0] = s.n[1] = s.n[2] = s.n[3] = -1;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDA9C) == 0) {
            return func_004520E0(p, ent451(q, s.h0 * 10), ent451(q, s.h1 * 10), ent451(q, s.h2 * 10), ent451(q, s.h3 * 10), &s);
        }
        if (func_0012B1A0(name, D_005BDAA0) == 0) {
            s.h0 = func_0022CD60(r);
            s.h1 = func_0022CD60(r);
            s.h2 = func_0022CD60(r);
            s.h3 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDAA8) == 0) {
            s.v[0] = func_0022CD90(r);
            s.v[1] = func_0022CD90(r);
            s.v[2] = func_0022CD90(r);
            s.v[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BDAAC) == 0) {
            s.w[0] = func_0022CD90(r);
            s.w[1] = func_0022CD90(r);
            s.w[2] = func_0022CD90(r);
            s.w[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BDAB0) == 0) {
            s.k[0] = func_0022CD60(r);
            s.k[1] = func_0022CD60(r);
            s.k[2] = func_0022CD60(r);
            s.k[3] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDAB8) == 0) {
            s.m[0] = func_0022CD60(r);
            s.m[1] = func_0022CD60(r);
            s.m[2] = func_0022CD60(r);
            s.m[3] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDAC0) == 0) {
            s.n[0] = func_0022CD60(r);
            s.n[1] = func_0022CD60(r);
            s.n[2] = func_0022CD60(r);
            s.n[3] = func_0022CD60(r);
        }
    }
    return 0;
}
