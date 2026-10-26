char * func_0024F750();

char * func_00400FF0();

extern char D_005AAAB0[];

extern char D_005AAAD4[];

extern char D_005AAB54[];

extern char D_005AABE8[];

extern char D_005AAC40[];

extern char D_005AAC64[];

extern char D_005AACE4[];

extern char D_005AAD78[];

extern char D_005AADD0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_0028C110();

char * func_002E4FA0(p) char *p; {
    func_0024F750(p);
    *(char * *)(p + 208) = D_005AADD0;
    *(int *)(p + 216) = -1;
    *(char * *)(p) = D_005AAAB0;
    *(char * *)(p + 64) = D_005AAAD4;
    *(char * *)(p + 160) = D_005AAB54;
    *(char * *)(p + 208) = D_005AABE8;
    func_00100450(p + 224, (void *)func_001AAD30, (void *)func_0013D240, 16, 16);
    func_0013D6A0(p + 560);
    func_00400FF0(p + 580);
    *(int *)(p + 576) = 0;
    *(int *)(p + 616) = 0;
    *(int *)(p + 548) = 0;
    *(int *)(p + 544) = 0;
    *(char *)(p + 610) = 1;
    *(char * *)(p) = D_005AAC40;
    *(char * *)(p + 64) = D_005AAC64;
    *(char * *)(p + 160) = D_005AACE4;
    *(char * *)(p + 208) = D_005AAD78;
    func_0028C110(p + 800, D_005AAC64);
    return p;
}
