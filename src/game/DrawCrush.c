char *func_001B0FD0(char *, int, int);

int func_0019F6C0(int, int, int);

void func_0019F8B0(int, char *, int, int);

int func_001A1CB0(int, int, int);

int func_0031E1B0(char *p, int a, int b, int c) {
    int n = func_0019F6C0(a, b, c);
    char *buf;
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 4, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_0019F8B0(a, buf, b, c);
    if (func_001A1CB0(a, b, n) != 0) {
        return 0;
    }
    *(int *)(p + 20) = a;
    *(int *)(p + 24) = b;
    *(char *)(p + 28) = 1;
    return 1;
}

void func_001A0050(int, int, int, int, int);

void func_0031E290(char *p, int a, int b, int c) {
    if (*(unsigned char *)(p + 0x1C) != 0) {
        func_001A0050(*(int *)(p + 0x14), *(int *)(p + 0x18), a, b, c);
    }
}

int func_0031DF90(char *p, int a, int b, int c, int d, int e) {
    int n = func_0019F6C0(a, b, d);
    char *buf;
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 4, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_0019F8B0(a, buf, b, d);
    if (func_001A1CB0(a, b, n) != 0) {
        return 0;
    }
    func_001A0050(a, b, c, e, 0);
    *(int *)(p + 20) = a;
    *(int *)(p + 24) = b;
    *(char *)(p + 28) = 1;
    return 1;
}

void func_0031E2D0(char *p, int a, int b, int c) {
    void func_001A0110(int, int, int, int, int);
    if (*(unsigned char *)(p + 0x1C) != 0) {
        func_001A0110(*(int *)(p + 0x14), *(int *)(p + 0x18), a, b, c);
    }
}

int func_0031E0A0(char *p, int a, int b, int c, int d, int e) {
    void func_001A0110(int, int, int, int, int);
    int n = func_0019F6C0(a, b, d);
    char *buf;
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 4, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_0019F8B0(a, buf, b, d);
    if (func_001A1CB0(a, b, n) != 0) {
        return 0;
    }
    func_001A0110(a, b, c, e, 0);
    *(int *)(p + 20) = a;
    *(int *)(p + 24) = b;
    *(char *)(p + 28) = 1;
    return 1;
}

extern char D_005AC330[];

void func_0013D6A0();

void func_0031DE60();

char * func_0031DED0(p) char *p; {
    func_0031DE60(p);
    *(char * *)(p) = D_005AC330;
    func_0013D6A0(p + 4);
    *(char *)(p + 28) = 0;
    *(int *)(p + 20) = 0;
    return p;
}

int func_001A0330();

int func_0031E310(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 28) != 0) {
        v1 = func_001A0330(*(int *)(v0 + 20), *(int *)(v0 + 24));
    } else {
        v1 = 0;
    }
    return v1;
}

int func_0013D5D0();

void func_0019FF20();

int func_0031E350(p0) char *p0; {
    char *v0;
    int tmp2;
    v0 = p0;
    if (*(unsigned char *)(p0 + 28) != 0) {
        func_0019FF20(*(int *)(v0 + 20), *(int *)(v0 + 24));
    }
    tmp2 = func_0013D5D0((v0 + 4));
    return tmp2;
}
