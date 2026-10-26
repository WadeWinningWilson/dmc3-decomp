char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AC7C0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_002791E0();

char * func_00331540(p) char *p; {
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
    *(char * *)(p) = D_005AC7C0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 49, 135);
    func_00100450(p + 896, (void *)func_002790E0, (void *)func_002791E0, 1536, 7);
    *(int *)(p + 11920) = 0;
    *(int *)(p + 11944) = 0;
    *(int *)(p + 11948) = 0;
    return p;
}

void func_00331BF0(char *p, int v) { *(int *)(p + 11920) = v; }

void func_00332350(void) {}
