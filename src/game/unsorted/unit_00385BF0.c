void func_0028C110(char *);

void func_002790E0(char *);

void func_0013D6A0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

extern char D_005A7790[];

extern char D_005A7780[];

void func_00277D30(char *);

extern char D_005AADD0[];

extern char D_005AEB90[];

extern char D_005AEBB4[];

extern char D_005AEC34[];

extern char D_005AECC8[];

void func_0024F750(char *);

char *func_00386A90(char *p) {
    int i;
    char *q;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)(p + 0x0) = D_005AEB90;
    *(char **)(p + 0x40) = D_005AEBB4;
    *(char **)(p + 0xA0) = D_005AEC34;
    *(char **)(p + 0xD0) = D_005AECC8;
    func_00100450(p + 0x1E0, func_001AAD30, func_0013D240, 0x10, 0x40);
    func_002790E0(p + 0x600);
    q = p + 0xC00;
    *(float *)(p + 0xC08) = 0.3f;
    *(float *)(p + 0xC0C) = 0.98f;
    *(float *)(p + 0xC10) = 0.95f;
    *(float *)(p + 0xC14) = 50.0f;
    *(int *)(p + 0xC20) = 0;
    *(float *)(p + 0xC24) = -0.1f;
    *(int *)(p + 0xC28) = 0;
    *(int *)(p + 0xC2C) = 0;
    *(int *)(p + 0xC04) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)(q + 0x0) = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(int *)(q + 0x50) = 0;
    *(int *)(q + 0x54) = 0;
    *(int *)(q + 0x58) = 0;
    *(int *)(q + 0x5C) = 0;
    *(int *)(q + 0x60) = 0;
    *(float *)(q + 0x68) = 1.0f;
    func_0028C110(p + 0xDD0);
    p[0x1130] = 0;
    p[0x1131] = 0;
    *(short *)(p + 0x1132) = 0;
    *(int *)(p + 0x1138) = 0;
    *(int *)(p + 0x113C) = 0;
    *(int *)(p + 0x1140) = 0;
    *(int *)(p + 0x1150) = 0;
    *(int *)(p + 0x1154) = 0;
    *(int *)(p + 0x1158) = 0;
    *(float *)(p + 0x115C) = 1.0f;
    *(float *)(p + 0x1160) = 100000.0f;
    p[0x1164] = 0;
    p[0x1165] = 0;
    *(short *)(p + 0x1166) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1168) = -1;
    q = p + 0x1200;
    *(char **)(p + 0x12E0) = D_005A7790;
    *(int *)(p + 0x12E8) = 0;
    *(int *)(p + 0x12E4) = 0;
    *(char **)(p + 0x12E0) = D_005A7780;
    func_00277D30(q);
    *(short *)(p + 0x1340) = -1;
    *(short *)(p + 0x1342) = -1;
    p[0xDCB] = 1;
    return p;
}
