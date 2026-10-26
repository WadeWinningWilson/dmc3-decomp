extern char D_005B84B0[];

extern char D_005B84D4[];

extern char D_005B8554[];

extern char D_005B85E8[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

int func_0024FE00();

void func_002790E0();

int func_0028C110();

int func_002E8370();

int func_004B6D50(p0) int p0; {
    func_0024FE00();
    *(char **)((char *)p0 + 0) = D_005B84B0;
    *(char **)((char *)p0 + 64) = D_005B84D4;
    *(char **)((char *)p0 + 160) = D_005B8554;
    *(char **)((char *)p0 + 208) = D_005B85E8;
    func_00100450((p0 + 308), (char *)func_001AAD30, (char *)func_0013D240, 16, 3);
    func_002790E0((p0 + 448));
    func_0028C110((p0 + 2000));
    func_002E8370((p0 + 2544));
    return p0;
}
