extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005A8F20[];

extern char D_005A8F44[];

extern char D_005A8FC4[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_0028D830(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A8F20;
        *(char **)(p + 64) = D_005A8F44;
        *(char **)(p + 160) = D_005A8FC4;
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

extern char D_00666750[];

extern char D_00547340[];

void func_001AD100(void);

void func_0028B610(char *);

int func_001AED80(char *, int, unsigned short, int);

void func_00208050(int, int);

int func_002242C0(int);

int func_002FF740(int, char *);

void func_0028D3D0(char *);

void func_0028D560(char *);

int func_0028B690(char *, unsigned char);

void func_0028BF50(char *);

void func_0028D2A0(unsigned char *p) {
    func_001AD100();
    switch (p[4]) {
    case 0:
        func_0028B610((char *)p);
        func_00208050(func_001AED80(D_00666750, 2, *(signed char *)(p + 0x46) * 15, 2), 1);
        if ((unsigned char)func_002242C0(*(int *)(p + 0xE0)) == 0) {
            *(int *)(p + 0x8D4) = func_002FF740(0, (char *)p + 0x130);
        } else {
            *(int *)(p + 0x8D4) = 0;
        }
        *(char **)(p + 0xE4) = D_00547340;
        p[0xDC] = 0;
        p[4]++;
        p[5] = 0;
    case 1:
        switch (p[5]) {
        case 0:
            func_0028D3D0((char *)p);
            break;
        case 1:
            func_0028D560((char *)p);
            break;
        }
        if ((unsigned char)func_0028B690((char *)p, p[0xD8])) {
            func_0028BF50((char *)p);
        }
        break;
    }
}

int func_0033B9F0();

int func_0028D5E0(char *p0) {
    char *t0;
    int t1;
    *(char *)(p0 + 5) = 1;
    *(char *)(p0 + 6) = 0;
    t0 = *(char **)(p0 + 224);
    t1 = func_0033B9F0(*(char **)(p0 + 224), (p0 + 304));
    return ((unsigned int)0 < (unsigned int)t1);
}

void func_00100450();

void func_001AAD30();

void func_0024F750();

void func_002790E0();

void func_0031DCB0();

int func_0028D1C0(p0) int p0; {
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
    *(char **)((char *)p0 + 0) = D_005A8F20;
    *(char **)((char *)p0 + 64) = D_005A8F44;
    *(char **)((char *)p0 + 160) = D_005A8FC4;
    func_00100450((p0 + 268), (char *)func_001AAD30, (char *)func_0013D240, 16, 2, D_005A8F20);
    func_002790E0((p0 + 384));
    func_0031DCB0((p0 + 1920));
    *(char *)((char *)p0 + 2064) = 0;
    return p0;
}

int func_0028D820(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 256);
}

extern void func_00286040();

void func_0028D290(char *p) { func_00286040(p + 2260); }

char *func_0028D810(char *p) { return p + 304; }
