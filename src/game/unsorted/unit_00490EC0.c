char * func_002790E0();

char * func_0031DCB0();

char * func_00400FF0();

extern char D_005ADFA0[];

extern char D_005ADFC4[];

extern char D_005AE044[];

extern char D_005AE0D8[];

extern char D_005AE1A4[];

extern char D_005AE25C[];

extern char D_005B7640[];

extern char D_005B7664[];

extern char D_005B76E4[];

extern char D_005B7778[];

extern char D_005B7844[];

extern char D_005B78FC[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_001FBAB0();

void func_00203040();

void func_00204A70();

void func_00204AD0();

void func_00204CD0();

void func_0024D930();

void func_0024D9A0();

void func_0024FE00();

void func_002791E0();

void func_0028C110();

void func_00291100();

void func_002C4540();

void func_002E8370();

void func_002E8A10();

void func_00304E70();

void func_00313E20();

void func_0031E4A0();

void func_00320540();

void func_00401030();

void func_004914E0();

char * func_004912D0(p) char *p; {
    func_0024FE00(p);
    func_00320540(p + 304);
    func_0031E4A0(p + 464);
    *(char * *)(p) = D_005ADFA0;
    *(char * *)(p + 64) = D_005ADFC4;
    *(char * *)(p + 160) = D_005AE044;
    *(char * *)(p + 208) = D_005AE0D8;
    *(char * *)(p + 304) = D_005AE1A4;
    *(char * *)(p + 464) = D_005AE25C;
    func_00100450(p + 532, (void *)func_001AAD30, (void *)func_0013D240, 16, 98);
    func_00304E70(p + 2144);
    func_002E8A10(p + 2428);
    func_002790E0(p + 3072);
    func_00100450(p + 4608, (void *)func_002790E0, (void *)func_002791E0, 1536, 3);
    func_002790E0(p + 9216);
    func_0031DCB0(p + 10752);
    func_00400FF0(p + 10896);
    func_00100450(p + 10924, (void *)func_00400FF0, (void *)func_00401030, 28, 3);
    func_00400FF0(p + 11008);
    func_0024D930(p + 11040);
    func_00100450(p + 11248, (void *)func_0024D930, (void *)func_0024D9A0, 208, 3);
    func_0024D930(p + 11872);
    func_00204CD0(p + 12080);
    func_00100450(p + 12240, (void *)func_00204AD0, (void *)func_00204A70, 192, 3);
    func_00204AD0(p + 12816);
    func_002C4540(p + 13008);
    func_0028C110(p + 13152);
    func_0028C110(p + 13696);
    func_001FBAB0(p + 14416);
    func_00291100(p + 14832);
    func_002E8370(p + 14928);
    func_00313E20(p + 14996);
    func_00203040(p + 15024);
    func_004914E0(p + 15120);
    *(char * *)(p) = D_005B7640;
    *(char * *)(p + 64) = D_005B7664;
    *(char * *)(p + 160) = D_005B76E4;
    *(char * *)(p + 208) = D_005B7778;
    *(char * *)(p + 304) = D_005B7844;
    *(char * *)(p + 464) = D_005B78FC;
    return p;
}
