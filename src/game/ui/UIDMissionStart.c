char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AD360[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

char * func_0034D570(p) char *p; {
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
    *(char * *)(p) = D_005AD360;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 3, 135);
    func_002790E0(p + 128);
    func_002790E0(p + 1728);
    func_002790E0(p + 3264);
    *(char *)(p + 4800) = 0;
    *(char *)(p + 4928) = 0;
    return p;
}

int func_0034E090(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 3;
    if (*(unsigned char *)(p0 + 4) != tmp0) {
        return 0;
    } else {
        v0 = *(int *)(p0 + 4936);
        return v0;
    }
}

void func_0034E0C0(void) {}

int func_0034E420(char *p0) {
    return ((*(unsigned char *)(p0 + 4) < 2) ^ 1);
}
