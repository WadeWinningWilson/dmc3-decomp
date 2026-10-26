int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BD980[8];

extern char D_005BD988[8];

extern char D_005BD990[8];

extern char D_005BD998[4];

extern char D_005BD99C[4];

typedef struct { short h0; short h2; char pad4[0xC]; float f10[4]; int i20[4]; } S43D;

int func_0043DFE0(char *, int *, int *, S43D *);

static inline int *ent43D(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_0043DD20(char *p, int *q, char *r) {
    char name[32];
    S43D s;
    s.h0 = -1;
    s.h2 = 0;
    s.f10[0] = 0.0f;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.i20[3] = -1;
    s.i20[2] = -1;
    s.i20[1] = -1;
    s.i20[0] = -1;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BD980) == 0) {
            return func_0043DFE0(p, ent43D(q, s.h0 * 10), ent43D(q, s.h0 * 10 + 1), &s);
        }
        if (func_0012B1A0(name, D_005BD988) == 0) {
            s.h0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD990) == 0) {
            s.h2 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD998) == 0) {
            s.f10[0] = func_0022CD90(r);
            s.f10[1] = func_0022CD90(r);
            s.f10[2] = func_0022CD90(r);
            s.f10[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BD99C) == 0) {
            s.i20[0] = func_0022CD60(r);
            s.i20[1] = func_0022CD60(r);
            s.i20[2] = func_0022CD60(r);
            s.i20[3] = func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B4510[];

extern char D_005B4534[];

extern char D_005B45B4[];

extern char D_005B4648[];

extern char D_005B4714[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

int func_0024FE00();

void func_002790E0();

void func_0027BBF0();

int func_0028C110();

void func_00304E70();

int func_0043E5F0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_0024FE00();
    *(char **)(v0 + 304) = D_005AADD0;
    *(int *)(v0 + 312) = -1;
    *(char **)(v0 + 0) = D_005B4510;
    *(char **)(v0 + 64) = D_005B4534;
    *(char **)(v0 + 160) = D_005B45B4;
    *(char **)(v0 + 208) = D_005B4648;
    *(char **)(v0 + 304) = D_005B4714;
    func_00100450((v0 + 320), (char *)func_001AAD30, (char *)func_0013D240, 16, 6);
    func_002790E0((v0 + 448));
    func_00100450((v0 + 2064), (char *)func_00304E70, (char *)func_0027BBF0, 128, 3);
    *(char *)(v0 + 2448) = 0;
    *(char *)(v0 + 2449) = 0;
    *(short *)(v0 + 2450) = 0;
    *(int *)(v0 + 2456) = 0;
    v2 = 0;
    *(int *)(v0 + 2460) = 0;
    v3 = v0;
    *(int *)(v0 + 2464) = 0;
    *(int *)(v0 + 2480) = 0;
    *(int *)(v0 + 2484) = 0;
    *(int *)(v0 + 2488) = 0;
    *(int *)(v0 + 2492) = 0x3f800000;
    *(int *)(v0 + 2496) = 0x47c35000;
    *(char *)(v0 + 2500) = 0;
    *(char *)(v0 + 2501) = 0;
    *(short *)(v0 + 2502) = 0;
    v1 = -1;
    do {
        *(short *)(v3 + 2504) = v1;
        *(short *)(v3 + 2506) = v1;
        v2 = (v2 + 5);
        *(short *)(v3 + 2508) = v1;
        *(short *)(v3 + 2510) = v1;
        *(short *)(v3 + 2512) = v1;
        v3 = (v3 + 10);
    } while ((v2 < 10));
    func_0028C110((v0 + 2528), v2);
    *(char *)(v0 + 1984) = 0;
    *(char *)(v0 + 1985) = 0;
    *(char *)(v0 + 1986) = 0;
    *(char *)(v0 + 1987) = 1;
    *(char *)(v0 + 1988) = 0;
    *(char *)(v0 + 1989) = 0;
    *(char *)(v0 + 1990) = 0;
    *(char *)(v0 + 1991) = 0;
    *(char *)(v0 + 1992) = 0;
    *(char *)(v0 + 1993) = 0;
    *(char *)(v0 + 1994) = 0;
    *(int *)(v0 + 2008) = -1;
    *(int *)(v0 + 2004) = -1;
    *(int *)(v0 + 2000) = -1;
    *(int *)(v0 + 1996) = -1;
    *(int *)(v0 + 2028) = 0;
    *(int *)(v0 + 2024) = 0;
    *(char *)(v0 + 1995) = 4;
    *(int *)(v0 + 2032) = 0;
    *(int *)(v0 + 2036) = 0;
    *(int *)(v0 + 2040) = 0;
    *(int *)(v0 + 2044) = 0;
    *(int *)(v0 + 2048) = 0;
    *(int *)(v0 + 2052) = 0;
    *(int *)(v0 + 2020) = 0;
    *(int *)(v0 + 2016) = 0;
    *(int *)(v0 + 2012) = 0;
    return (int)v0;
}
