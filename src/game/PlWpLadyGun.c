extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005A9310[];

extern char D_005A9334[];

extern char D_005A93B4[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_002903A0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9310;
        *(char **)(p + 64) = D_005A9334;
        *(char **)(p + 160) = D_005A93B4;
        func_0031DD00((p + 1920), -1);
        func_002791E0((p + 384), -1);
        func_001003E0((p + 268), (void *)func_0013D240, 16, 2);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00100450();

void func_001AAD30();

void func_0024F750();

void func_002790E0();

void func_0031DCB0();

int func_0028FE70(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 0) = D_005A8DD0;
    *(char **)((char *)p0 + 64) = D_005A8DF4;
    *(char **)((char *)p0 + 160) = D_005A8E74;
    *(char *)((char *)p0 + 68) = -1;
    *(char *)((char *)p0 + 69) = 1;
    *(int *)((char *)p0 + 232) = 0;
    *(int *)((char *)p0 + 236) = 0;
    *(int *)((char *)p0 + 240) = 0;
    *(int *)((char *)p0 + 244) = 0;
    *(char *)((char *)p0 + 221) = 0;
    *(char *)((char *)p0 + 209) = 0;
    *(char **)((char *)p0 + 0) = D_005A9310;
    *(char **)((char *)p0 + 64) = D_005A9334;
    *(char **)((char *)p0 + 160) = D_005A93B4;
    func_00100450((p0 + 268), (char *)func_001AAD30, (char *)func_0013D240, 16, 2, D_005A9310);
    func_002790E0((p0 + 384));
    func_0031DCB0((p0 + 1920));
    return p0;
}

void func_0047FA60();

void func_0028FF40(p0, p1, p2, p3, p4) int p0; int p1; int p2; int p3; int p4; {
    func_0047FA60(p1, p2, p3, p4, *(int *)((char *)p0 + 2064), *(int *)((char *)p0 + 2068));
}

int func_00290390(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 256);
}

char *func_00290380(char *p) { return p + 304; }
