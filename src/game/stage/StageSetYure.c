void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

void func_002791E0(char *, int);

extern char D_005A6F50[];

extern char D_005AE980[];

extern char D_005AE9A4[];

extern char D_005AADD0[];

char *func_00383D00(char *p, short n) {
    void func_0013D240(char *, int);
    void func_00204A70(char *, int);
    if (p != 0) {
        *(char **)p = D_005AE980;
        *(char **)(p + 0x38) = D_005AE9A4;
        func_002791E0(p + 0x780, -1);
        func_001003E0(p + 0x2C0, (void *)func_00204A70, 0xC0, 6);
        func_001003E0(p + 0x48, (void *)func_0013D240, 0x10, 0x1F);
        if (p + 0x38 != 0) {
            *(char **)(p + 0x38) = D_005AADD0;
        }
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 0x24, -1);
        }
        if (n > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char * func_002790E0();

void func_00100450();

void func_0013D6A0();

void func_001AAD30();

void func_00204AD0();

char * func_00383AB0(p) char *p; {
    void func_0013D240();
    void func_00204A70();
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
    *(char * *)(p + 56) = D_005AADD0;
    *(int *)(p + 64) = -1;
    *(char * *)(p) = D_005AE980;
    *(char * *)(p + 56) = D_005AE9A4;
    func_00100450(p + 72, (void *)func_001AAD30, (void *)func_0013D240, 16, 31, D_005AADD0, 1065353216, 135);
    func_00100450(p + 704, (void *)func_00204AD0, (void *)func_00204A70, 192, 6);
    func_002790E0(p + 1920);
    return p;
}

extern void func_00383CE0();

void func_00383DE0(char *p) { func_00383CE0(p + -56); }

extern void func_00383CD0();

void func_00383DF0(char *p) { func_00383CD0(p + -56); }

void func_00383CF0(void) {}
