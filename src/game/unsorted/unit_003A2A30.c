void func_0028C110(char *);

void func_00100450(char *, void *, void *, int, int);

char *func_002790E0(char *);

extern char D_005AF6F0[];

extern char D_005AF714[];

extern char D_005AF794[];

extern char D_005AF828[];

extern char D_005AF8F4[];

extern char D_005AF9AC[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_0031E4A0(char *);

void func_001AAD30(void);

void func_0013D240(char *, int);

void func_00400FF0(void);

void func_00401030(void);

void func_00204CD0(void);

void func_00204C70(void);

void func_00204AD0(void);

void func_00204A70(void);

void func_0024D930(void);

void func_0024D9A0(void);

void func_002E7BF0(char *);

void func_002E8A10(char *);

void func_00313E20(char *);

void func_001B1570(char *);

char *func_003A3130(char *p) {
    int i;
    int j;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)p = D_005AF6F0;
    *(char **)(p + 0x40) = D_005AF714;
    *(char **)(p + 0xA0) = D_005AF794;
    *(char **)(p + 0xD0) = D_005AF828;
    *(char **)(p + 0x130) = D_005AF8F4;
    *(char **)(p + 0x1D0) = D_005AF9AC;
    func_00100450(p + 0x214, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0x4B);
    func_002790E0(p + 0x880);
    func_002790E0(p + 0xE80);
    func_002790E0(p + 0x1480);
    func_002790E0(p + 0x1A80);
    func_00100450(p + 0x2080, (void *)func_00400FF0, (void *)func_00401030, 0x1C, 2);
    *(unsigned char *)(p + 0x20C0) = 0;
    func_00100450(p + 0x2160, (void *)func_00204CD0, (void *)func_00204C70, 0xA0, 3);
    func_00100450(p + 0x2340, (void *)func_00204CD0, (void *)func_00204C70, 0xA0, 8);
    func_00100450(p + 0x2840, (void *)func_00204CD0, (void *)func_00204C70, 0xA0, 5);
    func_00100450(p + 0x2B60, (void *)func_00204AD0, (void *)func_00204A70, 0xC0, 0x14);
    func_00100450(p + 0x3A60, (void *)func_00204AD0, (void *)func_00204A70, 0xC0, 0x14);
    func_00100450(p + 0x4BF0, (void *)func_0024D930, (void *)func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x4E60);
    *(unsigned char *)(p + 0x5080) = 0;
    *(unsigned char *)(p + 0x5081) = 0;
    *(short *)(p + 0x5082) = 0;
    *(int *)(p + 0x5088) = 0;
    *(int *)(p + 0x508C) = 0;
    *(int *)(p + 0x5090) = 0;
    *(float *)(p + 0x50A0) = 0.0f;
    *(float *)(p + 0x50A4) = 0.0f;
    *(float *)(p + 0x50A8) = 0.0f;
    *(float *)(p + 0x50AC) = 1.0f;
    *(float *)(p + 0x50B0) = 100000.0f;
    *(unsigned char *)(p + 0x50B4) = 0;
    *(unsigned char *)(p + 0x50B5) = 0;
    *(short *)(p + 0x50B6) = 0;
    for (i = 0; i < 10; i++) {
        *(short *)(p + i * 2 + 0x50B8) = -1;
    }
    func_002E7BF0(p + 0x50E0);
    func_002E8A10(p + 0x512C);
    func_00313E20(p + 0x5144);
    *(int *)(p + 0x4BE0) = 0;
    *(signed char *)(p + 0x4BE4) = 0;
    *(signed char *)(p + 0x4BE5) = *(signed char *)(p + 0x4BE6) = *(signed char *)(p + 0x4BE4);
    *(float *)(p + 0x4BE8) = 1.0f;
    *(float *)(p + 0x4D90) = 0.0f;
    *(float *)(p + 0x4D94) = 0.0f;
    *(float *)(p + 0x4DA0) = 0.0f;
    *(float *)(p + 0x4DA4) = 0.0f;
    *(float *)(p + 0x4DA8) = 0.0f;
    *(float *)(p + 0x4DAC) = 1.0f;
    *(int *)(p + 0x4E08) = 0;
    *(int *)(p + 0x4E10) = 0;
    *(int *)(p + 0x4E0C) = 0;
    for (j = 0; j < 16; j++) {
        *(int *)(p + j * 4 + 0x4DB0) = 0;
        (p + j)[0x4DF0] = 0;
    }
    *(unsigned short *)(p + 0x4E00) = 0;
    *(unsigned short *)(p + 0x4E02) = *(unsigned short *)(p + 0x4E00);
    *(unsigned short *)(p + 0x4E04) = 0;
    *(unsigned short *)(p + 0x4E06) = *(unsigned short *)(p + 0x4E04);
    for (i = 0; i < 9; i++) {
        *(int *)(p + i * 4 + 0x4AD0) = 0;
    }
    *(int *)(p + 0x4AF4) = 0;
    *(int *)(p + 0x4AF8) = 0;
    *(int *)(p + 0x4AFC) = 0;
    *(int *)(p + 0x4B00) = 0;
    *(int *)(p + 0x4B04) = 0;
    *(int *)(p + 0x4B08) = 0;
    *(int *)(p + 0x4B0C) = 0;
    *(int *)(p + 0x4B10) = 0;
    *(int *)(p + 0x4B14) = 0;
    func_001B1570(p + 0x4B20);
    func_001B1570(p + 0x4B60);
    func_001B1570(p + 0x4BA0);
    *(unsigned char *)(p + 0x4E14) = 0;
    *(unsigned char *)(p + 0x4E15) = 0;
    *(unsigned char *)(p + 0x4E17) = 0;
    *(unsigned char *)(p + 0x4E18) = 0;
    *(unsigned char *)(p + 0x4E19) = 0;
    *(unsigned char *)(p + 0x4E1A) = 0;
    *(unsigned char *)(p + 0x4E1B) = 0;
    *(unsigned char *)(p + 0x4E1C) = 0;
    *(unsigned char *)(p + 0x4E1F) = 0;
    *(unsigned char *)(p + 0x4E1E) = 0;
    *(int *)(p + 0x4E20) = 0;
    *(unsigned char *)(p + 0x4E1D) = 0;
    *(unsigned char *)(p + 0x5160) = 0;
    *(unsigned char *)(p + 0x5161) = 0;
    *(unsigned char *)(p + 0x5162) = 0;
    *(unsigned char *)(p + 0x5163) = 0;
    *(unsigned char *)(p + 0x5164) = 0;
    *(unsigned char *)(p + 0x5165) = 0;
    *(unsigned char *)(p + 0x5166) = 0;
    *(int *)(p + 0x516C) = 0;
    *(int *)(p + 0x5170) = 0;
    *(int *)(p + 0x5174) = 0;
    *(int *)(p + 0x5178) = 0;
    *(int *)(p + 0x517C) = 0;
    *(int *)(p + 0x5180) = 0;
    *(int *)(p + 0x5184) = 0;
    *(unsigned char *)(p + 0x5188) = 0;
    *(unsigned char *)(p + 0x5189) = 0;
    *(unsigned char *)(p + 0x518A) = 0;
    *(unsigned char *)(p + 0x518B) = 0;
    *(unsigned char *)(p + 0x518C) = 0;
    *(unsigned char *)(p + 0x518D) = 0;
    *(unsigned char *)(p + 0x518E) = 0;
    *(unsigned char *)(p + 0x518F) = 0;
    *(int *)(p + 0x515C) = 0;
    *(int *)(p + 0x5190) = 0;
    return p;
}
