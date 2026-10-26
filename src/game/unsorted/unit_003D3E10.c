int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

extern char D_005BCE78[8];

extern char D_005BCE80[8];

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S3D3s;

typedef struct { int x0; int x4; short x8; char pad[2]; int xC; signed char x10; } S3D3t;

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; S3D3s sub; S3D3t sub2; } S3D3;

int func_003D4080(char *, int *, int *, S3D3 *);

int func_002F6690(S3D3 *, char *, char *);

int func_002F69A0(S3D3s *, char *, char *);

int func_002F6D40(S3D3t *, char *, char *);

static inline int *ent3D3(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_003D3E10(char *p, int *q, char *r) {
    char name[32];
    S3D3 s;
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
    s.sub.b0 = -1;
    s.sub.b1 = -1;
    s.sub.b2 = 0;
    s.sub.e8 = 0;
    s.sub.e4 = 0;
    s.sub.e0 = 0;
    s.sub2.x0 = 0;
    s.sub2.x4 = 0xF000;
    s.sub2.x8 = 0x180C;
    s.sub2.x4 = 0x3F000;
    s.sub2.x8 = 0x1826;
    s.sub2.xC = 0;
    s.sub2.x10 = -1;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCE78) == 0) {
            return func_003D4080(p, ent3D3(q, s.a0 * 10), ent3D3(q, s.a0 * 10 + 1), &s);
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&s.sub, name, r) == 0 && func_002F6D40(&s.sub2, name, r) == 0) {
            if (func_0012B1A0(name, D_005BCE80) == 0) {
                s.sub2.x10 = func_0022CD60(r);
            }
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005B1350[];

extern char D_005B1374[];

extern char D_005B13F4[];

extern char D_005B1488[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

void func_0027A570();

int func_0028C110();

int func_003D4560(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 208) = D_005AADD0;
    *(int *)((char *)p0 + 216) = -1;
    *(char **)((char *)p0 + 0) = D_005B1350;
    *(char **)((char *)p0 + 64) = D_005B1374;
    *(char **)((char *)p0 + 160) = D_005B13F4;
    *(char **)((char *)p0 + 208) = D_005B1488;
    func_00100450((p0 + 224), (char *)func_001AAD30, (char *)func_0013D240, 16, 20);
    func_0027A570((p0 + 640));
    func_0028C110((p0 + 1824));
    *(short *)((char *)p0 + 548) = -1;
    *(int *)((char *)p0 + 1728) = 0;
    return p0;
}
