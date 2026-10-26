extern char D_01CAFF0C[];

void func_0022CBB0(char *, char *);

int func_0022CBA0(char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

float func_0022CD90(char *);

extern short D_01CAFF38[];

extern short D_0054A0C0[];

extern char D_00578B80[];

extern char D_005BDAC8[8];

extern char D_005BDAD0[8];

extern char D_005BDAD8[8];

extern char D_005BDAE0[4];

extern char D_005BDAE4[4];

extern char D_005BDAE8[4];

extern char D_005BDAEC[4];

extern char D_005BDAF0[4];

extern char D_005BDAF4[4];

extern char D_005BDAF8[8];

extern char D_005BDB00[8];

extern char D_005BDB08[8];

extern char D_005BDB10[8];

extern char D_005BDB18[8];

extern char D_005BDB20[4];

extern char D_005BDB24[4];

extern char D_005BDB28[8];

extern char D_005BDB30[8];

typedef struct { short h0, h1, h2, h3, h4, h5; char pad[4]; float v[4]; float w[4]; } S454;

static inline int has454(void) {
    short x = D_01CAFF38[0];
    char *t = *(char **)(*(char **)D_01CAFF0C + 0x18);
    unsigned short k = (short)(D_0054A0C0[x / 100] + x % 100) | 0x200;
    unsigned char r;
    int i;
    for (i = 0; i < 0x30; i++, t += 2) {
        if (*(unsigned short *)(t + 0x620) == k) {
            r = 1;
            goto done;
        }
    }
    r = 0;
done:
    return r;
}

int func_004549A0(char *, int *, int *, S454 *);

static inline int *ent454(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_00454440(char *p, int *q, char *r) {
    char name[32];
    S454 s;
    int ret;
    s.h1 = s.h0 = s.h4 = s.h5 = -1;
    s.h3 = s.h2 = 0;
    s.v[0] = 0.0f;
    s.v[1] = 0.0f;
    s.v[2] = 0.0f;
    s.v[3] = 1.0f;
    s.w[0] = 0.0f;
    s.w[1] = 0.0f;
    s.w[2] = 0.0f;
    s.w[3] = 1.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDAC8) == 0) {
            ret = 0;
            if ((unsigned char)has454() == 0)
                ret = func_004549A0(p, ent454(q, s.h1 * 10), ent454(q, s.h1 * 10 + 1), &s);
            return ret;
        }
        if (func_0012B1A0(name, D_005BDAD0) == 0) {
            s.h1 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDAD8) == 0) {
            func_0022CBB0(r, name);
            if (func_0012B1A0(name, D_005BDAE0) == 0) s.h2 = 7;
            else if (func_0012B1A0(name, D_005BDAE4) == 0) s.h2 = 6;
            else if (func_0012B1A0(name, D_005BDAE8) == 0) s.h2 = 5;
            else if (func_0012B1A0(name, D_005BDAEC) == 0) s.h2 = 4;
            else if (func_0012B1A0(name, D_005BDAF0) == 0) s.h2 = 3;
            else if (func_0012B1A0(name, D_005BDAF4) == 0) s.h2 = 2;
        } else if (func_0012B1A0(name, D_005BDAF8) == 0) {
            func_0022CBB0(r, name);
            if (func_0012B1A0(name, D_005BDB00) == 0) s.h3 = 0;
            else if (func_0012B1A0(name, D_00578B80) == 0) s.h3 = 1;
            else if (func_0012B1A0(name, D_005BDB08) == 0) s.h3 = 2;
            else if (func_0012B1A0(name, D_005BDB10) == 0) s.h3 = 3;
            else if (func_0012B1A0(name, D_005BDB18) == 0) s.h3 = 4;
        } else if (func_0012B1A0(name, D_005BDB20) == 0) {
            s.v[0] = func_0022CD90(r);
            s.v[1] = func_0022CD90(r);
            s.v[2] = func_0022CD90(r);
            s.v[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BDB24) == 0) {
            s.w[0] = func_0022CD90(r);
            s.w[1] = func_0022CD90(r);
            s.w[2] = func_0022CD90(r);
            s.w[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BDB28) == 0) {
            s.h0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDB30) == 0) {
            s.h4 = func_0022CD60(r);
            s.h5 = func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B5210[];

extern char D_005B5234[];

extern char D_005B52B4[];

extern char D_005B5348[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

void func_0027A570();

int func_0028C110();

int func_00454EA0(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005B5210;
    *(char **)(v0 + 64) = D_005B5234;
    *(char **)(v0 + 160) = D_005B52B4;
    *(char **)(v0 + 208) = D_005B5348;
    func_00100450((v0 + 224), (char *)func_001AAD30, (char *)func_0013D240, 16, 14);
    func_0027A570((v0 + 512));
    func_0028C110((v0 + 1728));
    *(char *)(v0 + 2448) = 0;
    *(char *)(v0 + 2449) = 0;
    *(short *)(v0 + 2450) = 0;
    *(int *)(v0 + 2456) = 0;
    v1 = 0;
    *(int *)(v0 + 2460) = 0;
    v2 = v0;
    *(int *)(v0 + 2464) = 0;
    *(int *)(v0 + 2480) = 0;
    *(int *)(v0 + 2484) = 0;
    *(int *)(v0 + 2488) = 0;
    *(int *)(v0 + 2492) = 0x3f800000;
    *(int *)(v0 + 2496) = 0x47c35000;
    *(char *)(v0 + 2500) = 0;
    *(char *)(v0 + 2501) = 0;
    *(short *)(v0 + 2502) = 0;
    v3 = -1;
    do {
        *(short *)(v2 + 2504) = v3;
        *(short *)(v2 + 2506) = v3;
        v1 = (v1 + 5);
        *(short *)(v2 + 2508) = v3;
        *(short *)(v2 + 2510) = v3;
        *(short *)(v2 + 2512) = v3;
        v2 = (v2 + 10);
    } while ((v1 < 10));
    *(short *)(v0 + 504) = v3;
    *(char *)(v0 + 1600) = 1;
    *(char *)(v0 + 1601) = 0;
    *(char *)(v0 + 1602) = 0;
    *(short *)(v0 + 1610) = v3;
    *(int *)(v0 + 1680) = 0;
    *(int *)(v0 + 1684) = 0;
    *(int *)(v0 + 1688) = 0;
    *(int *)(v0 + 1692) = 0;
    *(int *)(v0 + 1696) = 0;
    *(int *)(v0 + 1700) = 0;
    *(int *)(v0 + 1704) = 0;
    *(int *)(v0 + 1708) = 0;
    *(int *)(v0 + 1712) = 0;
    return (int)v0;
}
