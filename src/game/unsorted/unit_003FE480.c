void func_0013D240(char *, int);

void func_0013D6A0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30(char *);

void func_00252FA0(char *);

void func_0028C110(char *);

extern char D_005B23D0[];

extern char D_005B23F4[];

extern char D_005B2474[];

void func_0027A570();

char *func_003FE7C0(char *p) {
    int i;
    char *q;
    func_00252FA0(p);
    *(char **)p = D_005B23D0;
    *(char **)(p + 0x40) = D_005B23F4;
    *(char **)(p + 0xA0) = D_005B2474;
    func_00100450(p + 0x154, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 9);
    func_0027A570(p + 0x280);
    func_0027A570(p + 0x6C0);
    func_0027A570(p + 0xB00);
    func_0028C110(p + 0xF40);
    p[0x1210] = 0;
    p[0x1211] = 0;
    *(short *)(p + 0x1212) = 0;
    *(int *)(p + 0x1218) = 0;
    *(int *)(p + 0x121C) = 0;
    *(int *)(p + 0x1220) = 0;
    *(float *)(p + 0x1230) = 0.0f;
    *(float *)(p + 0x1234) = 0.0f;
    *(float *)(p + 0x1238) = 0.0f;
    *(float *)(p + 0x123C) = 1.0f;
    *(float *)(p + 0x1240) = 100000.0f;
    p[0x1244] = 0;
    p[0x1245] = 0;
    *(short *)(p + 0x1246) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1248) = -1;
    q = p + 0x1260;
    *(float *)(p + 0x1268) = 0.3f;
    *(float *)(p + 0x126C) = 0.98f;
    *(float *)(p + 0x1270) = 0.95f;
    *(float *)(p + 0x1274) = 50.0f;
    *(float *)(p + 0x1280) = 0.0f;
    *(float *)(p + 0x1284) = -0.1f;
    *(float *)(p + 0x1288) = 0.0f;
    *(float *)(p + 0x128C) = 0.0f;
    *(int *)(p + 0x1264) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)q = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(float *)(q + 0x50) = 0.0f;
    *(float *)(q + 0x54) = 0.0f;
    *(float *)(q + 0x58) = 0.0f;
    *(float *)(q + 0x5C) = 0.0f;
    *(float *)(q + 0x60) = 0.0f;
    *(float *)(q + 0x68) = 1.0f;
    return p;
}
