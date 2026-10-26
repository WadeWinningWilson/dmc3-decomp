extern char D_01DF5E40[];

int func_001FED70(char *, int);

char *func_001B1270(int, int, int, int, int, float, int);

char *func_001B11C0(int a, int b, int id, int c, int d, float f, int e) {
    char *o = func_001B1270(a, b, func_001FED70(D_01DF5E40, id), c, d, f, e);
    if (o != 0) {
        *(char *)(o + 0x3C) = 2;
        *(short *)(o + 0x3E) = id;
    }
    return o;
}

extern char D_005A6F80[];

extern char D_005A6FB0[];

void func_001B1570();

void func_001B1590();

int func_001B1450(p0) int p0; {
    func_001B1590();
    *(char **)((char *)p0 + 0) = D_005A6FB0;
    *(char *)((char *)p0 + 56) = 0;
    *(char *)((char *)p0 + 57) = 0;
    *(char *)((char *)p0 + 58) = 0;
    *(char *)((char *)p0 + 152) = 0;
    *(int *)((char *)p0 + 68) = 0;
    *(int *)((char *)p0 + 64) = 0;
    *(char *)((char *)p0 + 59) = 0;
    func_001B1570((p0 + 80));
    *(int *)((char *)p0 + 144) = 0;
    *(char *)((char *)p0 + 154) = 0;
    *(int *)((char *)p0 + 148) = 0;
    *(char *)((char *)p0 + 153) = 0;
    *(char *)((char *)p0 + 155) = 0;
    *(char *)((char *)p0 + 159) = 0;
    *(char *)((char *)p0 + 158) = 0;
    *(char *)((char *)p0 + 157) = 0;
    *(char *)((char *)p0 + 156) = 0;
    *(char *)((char *)p0 + 60) = 0;
    *(short *)((char *)p0 + 62) = -1;
    *(char **)((char *)p0 + 0) = D_005A6F80;
    return p0;
}

void func_001B1430(char *p, char v) { *(char *)(p + 24) = v; }

void func_0013D640();

void func_001B1440(int p0, int p1, int p2) {
    func_0013D640((p1 + 36), p2);
}
