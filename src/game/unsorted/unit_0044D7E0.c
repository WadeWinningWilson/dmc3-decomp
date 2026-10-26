int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BDA84[4];

extern char D_005BDA88[8];

extern char D_005BDA90[4];

extern char D_005BDA94[8];

typedef struct { short h0; char pad2[0xE]; float f10[4]; int i20[4]; } S44D;

int func_0044DA60(char *, int *, int *, S44D *);

static inline int *ent44D(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_0044D7E0(char *p, int *q, char *r) {
    char name[32];
    S44D s;
    s.h0 = -1;
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
        if (func_0012B1A0(name, D_005BDA84) == 0) {
            return func_0044DA60(p, ent44D(q, s.h0 * 10), ent44D(q, s.h0 * 10 + 1), &s);
        }
        if (func_0012B1A0(name, D_005BDA88) == 0) {
            s.h0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDA90) == 0) {
            s.f10[0] = func_0022CD90(r);
            s.f10[1] = func_0022CD90(r);
            s.f10[2] = func_0022CD90(r);
            s.f10[3] = 1.0f;
        } else if (func_0012B1A0(name, D_005BDA94) == 0) {
            s.i20[0] = func_0022CD60(r);
            s.i20[1] = func_0022CD60(r);
            s.i20[2] = func_0022CD60(r);
            s.i20[3] = func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B4CF0[];

extern char D_005B4D14[];

extern char D_005B4D94[];

extern char D_005B4E28[];

extern char D_005B4EF4[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

int func_0024FE00();

void func_002790E0();

void func_0027BBF0();

int func_0028C110();

void func_00304E70();

int func_0044E150(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_0024FE00();
    *(char **)(v0 + 304) = D_005AADD0;
    *(int *)(v0 + 312) = -1;
    *(char **)(v0 + 0) = D_005B4CF0;
    *(char **)(v0 + 64) = D_005B4D14;
    *(char **)(v0 + 160) = D_005B4D94;
    *(char **)(v0 + 208) = D_005B4E28;
    *(char **)(v0 + 304) = D_005B4EF4;
    func_00100450((v0 + 320), (char *)func_001AAD30, (char *)func_0013D240, 16, 9);
    func_002790E0((v0 + 512));
    func_00100450((v0 + 2112), (char *)func_00304E70, (char *)func_0027BBF0, 128, 3);
    *(char *)(v0 + 2496) = 0;
    *(char *)(v0 + 2497) = 0;
    *(short *)(v0 + 2498) = 0;
    *(int *)(v0 + 2504) = 0;
    v2 = 0;
    *(int *)(v0 + 2508) = 0;
    v3 = v0;
    *(int *)(v0 + 2512) = 0;
    *(int *)(v0 + 2528) = 0;
    *(int *)(v0 + 2532) = 0;
    *(int *)(v0 + 2536) = 0;
    *(int *)(v0 + 2540) = 0x3f800000;
    *(int *)(v0 + 2544) = 0x47c35000;
    *(char *)(v0 + 2548) = 0;
    *(char *)(v0 + 2549) = 0;
    *(short *)(v0 + 2550) = 0;
    v1 = -1;
    do {
        *(short *)(v3 + 2552) = v1;
        *(short *)(v3 + 2554) = v1;
        v2 = (v2 + 5);
        *(short *)(v3 + 2556) = v1;
        *(short *)(v3 + 2558) = v1;
        *(short *)(v3 + 2560) = v1;
        v3 = (v3 + 10);
    } while ((v2 < 10));
    func_0028C110((v0 + 2576), v2);
    *(char *)(v0 + 2048) = 0;
    *(char *)(v0 + 2049) = 0;
    *(char *)(v0 + 2050) = 0;
    *(char *)(v0 + 2051) = 0;
    *(char *)(v0 + 2052) = 0;
    *(char *)(v0 + 2053) = 1;
    *(char *)(v0 + 2054) = 0;
    *(char *)(v0 + 2055) = 0;
    *(char *)(v0 + 2056) = 0;
    *(char *)(v0 + 2057) = 0;
    *(char *)(v0 + 2058) = 0;
    *(char *)(v0 + 2059) = 0;
    *(char *)(v0 + 2060) = 0;
    *(char *)(v0 + 2061) = 0;
    *(char *)(v0 + 2062) = 0;
    *(char *)(v0 + 2063) = 0;
    *(char *)(v0 + 2064) = 0;
    *(int *)(v0 + 2080) = -1;
    *(int *)(v0 + 2076) = -1;
    *(int *)(v0 + 2072) = -1;
    *(int *)(v0 + 2068) = -1;
    *(int *)(v0 + 2088) = 0;
    *(int *)(v0 + 2084) = 0;
    *(char *)(v0 + 2065) = 2;
    *(int *)(v0 + 2092) = 0;
    *(int *)(v0 + 2096) = 0;
    *(int *)(v0 + 2100) = 0;
    *(int *)(v0 + 2104) = 0;
    *(int *)(v0 + 2108) = 0;
    *(int *)(v0 + 3296) = 0;
    *(int *)(v0 + 3300) = 0;
    return (int)v0;
}
