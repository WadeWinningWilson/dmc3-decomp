int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BD040[8];

extern char D_005BD048[8];

extern char D_005BD050[8];

extern char D_005BD058[8];

extern char D_005BD060[8];

extern char D_005BD068[4];

extern char D_005BD06C[4];

typedef struct { short a0, a2, a4, a6, b8; char pad[2]; float bc, c0, c4; } S40E;

int func_0040E2B0(char *, int, S40E *);

int func_0040E090(char *p, int q, char *r) {
    char name[32];
    S40E s;
    s.a6 = -1;
    s.a4 = -1;
    s.a2 = -1;
    s.a0 = -1;
    s.b8 = 0;
    s.c4 = 0.0f;
    s.c0 = 0.0f;
    s.bc = 0.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BD040) == 0) {
            return func_0040E2B0(p, q, &s);
        } else if (func_0012B1A0(name, D_005BD048) == 0) {
            s.a0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD050) == 0) {
            s.a2 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD058) == 0) {
            s.a4 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD060) == 0) {
            s.a6 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD068) == 0) {
            s.b8 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BD06C) == 0) {
            s.bc = func_0022CD90(r);
            s.c0 = func_0022CD90(r);
            s.c4 = func_0022CD90(r);
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B2FA0[];

extern char D_005B2FC4[];

extern char D_005B3044[];

extern char D_005B30D8[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

int func_0040E5E0(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    char *tmp0;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005B2FA0;
    *(char **)(v0 + 64) = D_005B2FC4;
    *(char **)(v0 + 160) = D_005B3044;
    *(char **)(v0 + 208) = D_005B30D8;
    func_00100450((v0 + 780), (char *)func_001AAD30, (char *)func_0013D240, 16, 24);
    *(short *)(v0 + 222) = -1;
    v1 = 0;
    *(short *)(v0 + 220) = -1;
    *(char *)(v0 + 224) = 1;
    v2 = v0;
    *(char *)(v0 + 225) = 0;
    *(short *)(v0 + 226) = 0;
    *(short *)(v0 + 228) = 0;
    *(short *)(v0 + 232) = 0;
    *(short *)(v0 + 230) = 0;
    *(int *)(v0 + 236) = 0;
    do {
        *(int *)(v2 + 264) = 0;
        *(int *)(v2 + 268) = 0;
        v1 = (v1 + 8);
        *(int *)(v2 + 272) = 0;
        *(int *)(v2 + 276) = 0;
        *(int *)(v2 + 280) = 0;
        *(int *)(v2 + 284) = 0;
        *(int *)(v2 + 288) = 0;
        *(int *)(v2 + 292) = 0;
        v2 = (v2 + 32);
    } while ((v1 < 24));
    v3 = 0;
    v4 = -1;
    do {
        *(char *)((v0 + v3) + 360) = v4;
        tmp0 = (v0 + v3);
        v3 = (v3 + 8);
        *(char *)(tmp0 + 361) = v4;
        *(char *)(tmp0 + 362) = v4;
        *(char *)(tmp0 + 363) = v4;
        *(char *)(tmp0 + 364) = v4;
        *(char *)(tmp0 + 365) = v4;
        *(char *)(tmp0 + 366) = v4;
        *(char *)(tmp0 + 367) = v4;
    } while ((v3 < 400));
    return (int)v0;
}
