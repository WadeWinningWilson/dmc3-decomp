void func_002E9F70(int, int, int, int, float);

void func_002E9F60(int a, int b, int c, int d) {
    func_002E9F70(a, b, c, d, 0.0f);
}

extern char D_005A6F50[];

extern char D_005AB1E0[];

extern char D_005AB210[];

void func_0013D6A0();

void func_002E99E0();

char * func_002EA110(p) char *p; {
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
    *(char * *)(p) = D_005AB1E0;
    *(int *)(p + 76) = -1;
    *(char * *)(p) = D_005AB210;
    func_002E99E0(p, 1065353216, 135, -1);
    return p;
}

extern char D_01CAFF0C[];

int func_0020F3E0();

char *func_002EA230();

int func_002EA290(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int tmp2;
    v0 = p0;
    v1 = p2;
    v2 = p3;
    tmp2 = func_0020F3E0(*(int *)(*(char **)D_01CAFF0C + 24), v0, (p1 & 255));
    v3 = tmp2;
    if (v3 == -1) {
        v4 = 0;
    } else {
        v4 = func_002EA230((v0 & 255), v1, v2);
        if (v4 != 0) {
            *(int *)(v4 + 76) = v3;
        }
    }
    return (int)v4;
}
