extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005A9800[];

extern char D_005A9824[];

extern char D_005A98A4[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_002A66F0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9800;
        *(char **)(p + 64) = D_005A9824;
        *(char **)(p + 160) = D_005A98A4;
        func_0031DD00((p + 1856), -1);
        func_002791E0((p + 320), -1);
        func_001003E0((p + 272), (void *)func_0013D240, 16, 3);
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

int func_002A60E0(p0) int p0; {
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
    *(char **)((char *)p0 + 0) = D_005A9800;
    *(char **)((char *)p0 + 64) = D_005A9824;
    *(char **)((char *)p0 + 160) = D_005A98A4;
    func_00100450((p0 + 272), (char *)func_001AAD30, (char *)func_0013D240, 16, 3, D_005A9800);
    func_002790E0((p0 + 320));
    func_0031DCB0((p0 + 1856));
    return p0;
}

int func_002F30C0();

int func_002A64D0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    int tmp0;
    if (3 != p1) {
        tmp0 = 2;
        if (p1 != tmp0) {
            switch (p1) {
            case 0:
                v0 = func_002F30C0(6, *(int *)(*(char **)(p0 + 260) + 260), p2, *(int *)(p0 + 224));
                break;
            case 1:
                v0 = func_002F30C0(9, *(int *)(*(char **)(p0 + 260) + 260), p2, *(int *)(p0 + 224));
                break;
            }
        } else {
            v0 = func_002F30C0(7, *(int *)(*(char **)(p0 + 260) + 260), p2, *(int *)(p0 + 224));
        }
    } else {
        v0 = func_002F30C0(8, *(int *)(*(char **)(p0 + 260) + 260), p2, *(int *)(p0 + 224));
    }
    return v0;
}

int func_002A64C0(void) { return 1; }
