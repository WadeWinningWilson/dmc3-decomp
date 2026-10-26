extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005AE9E0[];

extern char D_005AEA04[];

extern char D_005AEA84[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_00401030();

char *func_003849C0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AE9E0;
        *(char **)(p + 64) = D_005AEA04;
        *(char **)(p + 160) = D_005AEA84;
        func_00401030((p + 2048), -1);
        func_002791E0((p + 512), -1);
        func_001003E0((p + 304), (void *)func_0013D240, 16, 11);
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

void func_00400FF0();

int func_00384260(p0) int p0; {
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
    *(char **)((char *)p0 + 0) = D_005AE9E0;
    *(char **)((char *)p0 + 64) = D_005AEA04;
    *(char **)((char *)p0 + 160) = D_005AEA84;
    func_00100450((p0 + 304), (char *)func_001AAD30, (char *)func_0013D240, 16, 11, D_005AE9E0);
    func_002790E0((p0 + 512));
    func_00400FF0((p0 + 2048));
    return p0;
}

int func_00286040();

int func_00384330(p0) int p0; {
    int v1;
    int v2;
    int v0;
    v2 = 0;
    v0 = p0;
    do {
        v1 = func_00286040((v0 + 2208));
        v2 = (v2 + 1);
        v0 = (v0 + 4);
    } while ((v2 < 4));
    return v1;
}

extern char D_0059F1A0[];

int func_00105300();

int func_002D9F00();

int func_00384810(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int tmp2;
    int tmp7;
    v1 = 0;
    v0 = (char *)p0;
    v2 = D_0059F1A0;
    do {
        tmp2 = func_002D9F00(*(int *)(v0 + 224), *(int *)(v2 + 4));
        func_00105300(*(int *)(*(char **)((v0 + (*(int *)(v2 + 0) << 2)) + 256) + 260), tmp2);
        v1 = (v1 + 1);
        v2 = (v2 + 8);
    } while (((unsigned int)v1 < (unsigned int)10));
    tmp7 = func_00105300((v0 + 2080), (*(int *)(v0 + 224) + 272));
    return tmp7;
}
