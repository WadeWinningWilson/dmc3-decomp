int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

extern char D_005BC740[8];

extern char D_005BC748[8];

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S311;

int func_00312120(char *, int *, int *, int *, S311 *);

int func_002F6690(S311 *, char *, char *);

static inline int *ent311(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_00311E70(char *p, int *q, char *r) {
    char name[32];
    S311 s;
    unsigned int k;
    int v;
    k = -1;
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
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC740) == 0) {
            if (k == -1) {
                v = func_00312120(p, ent311(q, s.a0 * 10), 0, 0, &s);
            } else {
                v = func_00312120(p, ent311(q, s.a0 * 10), ent311(q, k * 10), ent311(q, k * 10 + 1), &s);
            }
            return v;
        }
        if (func_002F6690(&s, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC748) == 0) {
                k = func_0022CD60(r);
            }
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005ABF30[];

extern char D_005ABF54[];

extern char D_005ABFD4[];

extern char D_005AC068[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

void func_002790E0();

void func_0027A570();

int func_0028C110();

void func_0031DED0();

int func_00312620(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 208) = D_005AADD0;
    *(int *)((char *)p0 + 216) = -1;
    *(char **)((char *)p0 + 0) = D_005ABF30;
    *(char **)((char *)p0 + 64) = D_005ABF54;
    *(char **)((char *)p0 + 160) = D_005ABFD4;
    *(char **)((char *)p0 + 208) = D_005AC068;
    func_00100450((p0 + 224), (char *)func_001AAD30, (char *)func_0013D240, 16, 18);
    func_0027A570((p0 + 592));
    func_002790E0((p0 + 1728));
    func_0031DED0((p0 + 3264));
    func_0028C110((p0 + 3456));
    *(char *)((char *)p0 + 3360) = 0;
    *(char *)((char *)p0 + 3362) = 0;
    *(char *)((char *)p0 + 3361) = 0;
    *(char *)((char *)p0 + 3364) = 0;
    *(char *)((char *)p0 + 3363) = 0;
    *(int *)((char *)p0 + 3392) = 0;
    *(int *)((char *)p0 + 3396) = 0;
    *(int *)((char *)p0 + 3400) = 0;
    *(int *)((char *)p0 + 3408) = 0;
    *(int *)((char *)p0 + 3404) = 0;
    *(int *)((char *)p0 + 3412) = 0;
    *(int *)((char *)p0 + 3416) = 0;
    *(int *)((char *)p0 + 3420) = 0;
    *(int *)((char *)p0 + 3424) = 0;
    *(int *)((char *)p0 + 3428) = 0;
    *(char *)((char *)p0 + 3432) = 0;
    *(char *)((char *)p0 + 3433) = 1;
    *(char *)((char *)p0 + 3434) = 0;
    *(char *)((char *)p0 + 3435) = 0;
    *(char *)((char *)p0 + 3436) = 0;
    *(char *)((char *)p0 + 3437) = 0;
    *(char *)((char *)p0 + 3438) = 0;
    *(char *)((char *)p0 + 3439) = 0;
    *(char *)((char *)p0 + 3440) = 0;
    *(char *)((char *)p0 + 3441) = 0;
    return p0;
}
