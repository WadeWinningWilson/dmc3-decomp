extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005AB8F0[];

extern char D_005AB914[];

extern char D_005AB994[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024F750();

void func_002790E0();

void func_0031DCB0();

int func_00302A50(p0) int p0; {
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
    *(char **)((char *)p0 + 0) = D_005AB8F0;
    *(char **)((char *)p0 + 64) = D_005AB914;
    *(char **)((char *)p0 + 160) = D_005AB994;
    func_00100450((p0 + 284), (char *)func_001AAD30, (char *)func_0013D240, 16, 6, D_005AB8F0);
    func_002790E0((p0 + 384));
    func_0031DCB0((p0 + 1920));
    *(int *)((char *)p0 + 2196) = 0;
    *(int *)((char *)p0 + 2200) = 0;
    return p0;
}
