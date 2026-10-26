extern unsigned long D_01DFAD00[];

extern int D_005BCA38;

void func_003528C0(unsigned long seed) {
    int i;
    for (i = 0; i < 624; i++) {
        D_01DFAD00[i] = seed & 0xFFFF0000;
        seed = 69069 * seed + 1;
        D_01DFAD00[i] |= (seed & 0xFFFF0000) >> 16;
        seed = 69069 * seed + 1;
    }
    D_005BCA38 = 624;
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AD3C0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_002791E0();

char * func_00353420(p) char *p; {
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
    *(char * *)(p) = D_005AD3C0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 6, 135);
    func_00100450(p + 192, (void *)func_002790E0, (void *)func_002791E0, 1536, 20);
    *(char *)(p + 30944) = 0;
    *(char *)(p + 31072) = 0;
    *(char *)(p + 31075) = 0;
    *(char *)(p + 31076) = 0;
    *(char *)(p + 31077) = 0;
    *(char *)(p + 31073) = 0;
    *(int *)(p + 31112) = 1065353216;
    *(int *)(p + 31116) = 0;
    return p;
}
