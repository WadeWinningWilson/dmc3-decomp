extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005A9070[];

extern char D_005A9094[];

extern char D_005A9114[];

void func_001003E0();

void func_00100580();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_0028E300(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9070;
        *(char **)(p + 64) = D_005A9094;
        *(char **)(p + 160) = D_005A9114;
        func_001003E0((p + 3328), (void *)func_0031DD00, 144, 2);
        func_001003E0((p + 256), (void *)func_002791E0, 1536, 2);
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

void func_0024F750();

void func_002790E0();

void func_0031DCB0();

int func_0028DD40(p0) int p0; {
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
    *(char **)((char *)p0 + 0) = D_005A9070;
    *(char **)((char *)p0 + 64) = D_005A9094;
    *(char **)((char *)p0 + 160) = D_005A9114;
    func_00100450((p0 + 256), (char *)func_002790E0, (char *)func_002791E0, 1536, 2, D_005A9070);
    func_00100450((p0 + 3328), (char *)func_0031DCB0, (char *)func_0031DD00, 144, 2);
    return p0;
}

int func_0028E090(p0, p1) char *p0; int p1; {
    int v0;
    v0 = 0x40000000;
    if (p1 == 0) {
        *(int *)(p0 + 3876) = v0;
    } else {
        *(int *)(p0 + 3872) = 0x40000000;
    }
    return 1;
}

int func_00104C00();

int func_002D9F00();

int func_0028E0B0(p0) char *p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    char *v5;
    int tmp2;
    int tmp7;
    v0 = p0;
    if (*(unsigned char *)(p0 + 214) == 0) {
        tmp2 = func_002D9F00(*(int *)(v0 + 224), *(unsigned char *)(v0 + 212));
        v4 = func_00104C00((v0 + 3744), tmp2, (v0 + 3616));
    } else {
        v2 = *(char **)(v0 + 224);
        if (*(unsigned char *)(v2 + 10400) == 0) {
            v3 = *(unsigned char *)(v2 + 10416);
            switch (v3) {
            case 1:
            case 4:
            case 5:
                break;
            default:
                v4 = func_00104C00((v0 + 3744), *(int *)(*(char **)((v2 + (*(unsigned char *)(v0 + 212) << 2)) + 27792) + 260), (v0 + 3616));
                break;
            }
        }
    }
    if (*(unsigned char *)(v0 + 215) == 0) {
        tmp7 = func_002D9F00(*(int *)(v0 + 224), *(unsigned char *)(v0 + 213));
        v4 = func_00104C00((v0 + 3808), tmp7, (v0 + 3680));
    } else {
        v5 = *(char **)(v0 + 224);
        if (*(unsigned char *)(v5 + 10400) == 0) {
            v1 = *(unsigned char *)(v5 + 10416);
            switch (v1) {
            case 1:
            case 4:
            case 5:
                break;
            default:
                v4 = func_00104C00((v0 + 3808), *(int *)(*(char **)((v5 + (*(unsigned char *)(v0 + 213) << 2)) + 27792) + 260), (v0 + 3680));
                break;
            }
        }
    }
    return v4;
}
