int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BD968[8];

extern char D_005BD970[8];

extern char D_005BD978[4];

extern char D_005BD97C[4];

typedef struct { short h0, h1, h2; short pad; int pad2[2]; float v[4]; int k[8]; } S43C;

int func_0043C9C0(char *, int *, int *, int *, int *, int *, int *, S43C *);

static inline int *ent43C(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_0043C580(char *p, int *q, char *r) {
    char name[32];
    S43C s;
    s.h0 = s.h1 = s.h2 = -1;
    s.v[0] = 0.0f;
    s.v[1] = 0.0f;
    s.v[2] = 0.0f;
    s.v[3] = 1.0f;
    s.k[0] = s.k[1] = s.k[2] = s.k[3] = s.k[4] = s.k[5] = s.k[6] = s.k[7] = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BD968) == 0) {
            return func_0043C9C0(p, ent43C(q, s.h0 * 10), ent43C(q, s.h0 * 10 + 1), ent43C(q, s.h1 * 10), ent43C(q, s.h1 * 10 + 1),
                                 ent43C(q, s.h2 * 10), ent43C(q, s.h2 * 10 + 1), &s);
        }
        if (func_0012B1A0(name, D_005BD970) == 0) {
            s.h0 = func_0022CD60(r);
            s.h1 = func_0022CD60(r);
            s.h2 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD978) == 0) {
            s.v[0] = func_0022CD90(r);
            s.v[1] = func_0022CD90(r);
            s.v[2] = func_0022CD90(r);
            s.v[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BD97C) == 0) {
            s.k[0] = func_0022CD60(r);
            s.k[1] = func_0022CD60(r);
            s.k[2] = func_0022CD60(r);
            s.k[3] = func_0022CD60(r);
            s.k[4] = func_0022CD60(r);
            s.k[5] = func_0022CD60(r);
            s.k[6] = func_0022CD60(r);
            s.k[7] = func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B4390[];

extern char D_005B43B4[];

extern char D_005B4434[];

extern char D_005B44C8[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

void func_002790E0();

void func_002791E0();

void func_0027A570();

int func_0028C110();

int func_0043D170(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005B4390;
    *(char **)(v0 + 64) = D_005B43B4;
    *(char **)(v0 + 160) = D_005B4434;
    *(char **)(v0 + 208) = D_005B44C8;
    func_00100450((v0 + 224), (char *)func_001AAD30, (char *)func_0013D240, 16, 30);
    func_00100450((v0 + 832), (char *)func_002790E0, (char *)func_002791E0, 1536, 2);
    func_0027A570((v0 + 3904));
    func_0028C110((v0 + 5232));
    *(char *)(v0 + 826) = 1;
    v1 = 0;
    *(short *)(v0 + 824) = -1;
    v2 = v0;
    *(char *)(v0 + 5156) = 1;
    *(char *)(v0 + 5157) = 0;
    *(int *)(v0 + 5160) = 0;
    do {
        *(int *)(v2 + 5164) = 0;
        *(int *)(v2 + 5168) = 0;
        v1 = (v1 + 5);
        *(int *)(v2 + 5172) = 0;
        *(int *)(v2 + 5176) = 0;
        *(int *)(v2 + 5180) = 0;
        v2 = (v2 + 20);
    } while ((v1 < 15));
    *(int *)(v0 + 5224) = 0;
    return (int)v0;
}
