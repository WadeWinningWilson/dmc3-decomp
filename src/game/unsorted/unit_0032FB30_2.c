int func_00352CA0(void);

long func_0011EF60(int, unsigned long);

int func_00331040(int a, unsigned int b) {
    return func_0011EF60(func_00352CA0(), b);
}

void func_003528C0(unsigned long long);

void func_00331000(int unused, unsigned int b) {
    func_003528C0(b);
}

extern char D_01CAFF0C[];

extern int D_0055BF10[];

void func_00330BD0(char *p, unsigned int k, int x, int y, int z) {
    void func_003305E0(char *, int, int, int, int, int, int);
    int n;
    if (k < 20) {
        n = k;
    } else {
        n = k + D_0055BF10[y] - 20;
    }
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0x34) != 0 && !(k < 20) && k < 50) {
        n += 30;
    }
    func_003305E0(p, 7, n, x, y, z, 0);
}

extern char D_005BE14C;

void func_002F96B0();

void func_00331010();

void func_0032FC90(void) {
    func_00331010();
    func_002F96B0(&D_005BE14C);
}

int func_0032FCD0(p0, p1) int p0; int p1; {
    int v0;
    if ((unsigned int)p1 >= (unsigned int)16) {
        return 0;
    } else {
        v0 = *(int *)((char *)((p1 << 2) + p0) + 148);
        return v0;
    }
}

int func_0032FD00(p0, p1) int p0; int p1; {
    int v0;
    if ((unsigned int)p1 >= (unsigned int)16) {
        return 0;
    } else {
        v0 = *(int *)((char *)((p1 << 2) + p0) + 212);
        return v0;
    }
}

void func_002F9840();

void func_0032FD90() {
    func_002F9840(&D_005BE14C);
}

int func_003303A0();

void func_00330B50(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int func_003305E0();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = p1;
    v1 = p2;
    v2 = p3;
    v5 = func_003303A0(p0, v2);
    v3 = v5;
    v4 = p0;
    if (v3 != -1) {
        v5 = func_003305E0(v4, v3, v0, v1, v2, 0, 0);
    }
}
