extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005B09F0[];

extern char D_005B0A14[];

extern char D_005B0A94[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_003CB7E0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B09F0;
        *(char **)(p + 64) = D_005B0A14;
        *(char **)(p + 160) = D_005B0A94;
        func_0031DD00((p + 2176), -1);
        func_002791E0((p + 640), -1);
        func_001003E0((p + 428), (void *)func_0013D240, 16, 10);
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

int func_003CB200(p0) int p0; {
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
    *(char **)((char *)p0 + 0) = D_005B09F0;
    *(char **)((char *)p0 + 64) = D_005B0A14;
    *(char **)((char *)p0 + 160) = D_005B0A94;
    *(char *)((char *)p0 + 256) = 0;
    func_00100450((p0 + 428), (char *)func_001AAD30, (char *)func_0013D240, 16, 10, D_005B09F0);
    func_002790E0((p0 + 640));
    func_0031DCB0((p0 + 2176));
    return p0;
}

int func_003CB650(void) { return 1; }

void func_003CB660(void) {}

char *func_003CB7D0(char *p) { return p + 2320; }
