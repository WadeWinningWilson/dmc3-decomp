void func_0031DAF0(char *p, unsigned char k, int v) {
    ((char *)(p + 0x1E8C))[k] = 1;
    ((char *)(p + 0x1EAC))[k] = v;
}

int func_0031D410(char *x, signed char k) {
    int r = 0;
    switch (k) {
    case -1: r = 0; break;
    case 0: r = 0; break;
    case 1: r = 1; break;
    case 2: r = 2; break;
    case 3: r = 3; break;
    case 4: r = 4; break;
    case 5: r = 0; break;
    case 6: r = 1; break;
    case 7: r = 2; break;
    case 8: r = 3; break;
    case 9: case 10: case 11: case 12: case 13: r = 4; break;
    case 14: r = 0; break;
    }
    return r;
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AC2C0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_002791E0();

char * func_0031C7C0(p) char *p; {
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
    *(char * *)(p) = D_005AC2C0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 3, 135);
    func_00100450(p + 128, (void *)func_002790E0, (void *)func_002791E0, 1536, 5);
    return p;
}

int func_0031D3D0();

int func_0031D4B0();

void func_0031D380(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    switch (v0) {
    default:
        return;
    case 0:
        tmp0 = func_0031D3D0(p0, v0);
        return;
    case 1:
        v1 = func_0031D4B0(p0, v0);
        return;
    }
}

void func_0031DB10(void) {}
