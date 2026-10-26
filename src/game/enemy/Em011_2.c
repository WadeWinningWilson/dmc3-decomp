extern float D_0059DC20[];

extern float D_0059DC40[];

void func_0033A660(char *);

void func_0033A620(char *, int, int);

void func_003360D0(char *p, unsigned char k) {
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 0x1394) = k;
    *(unsigned char *)(p + 0x134F) = 1;
    *(float *)(p + 0x1294) = D_0059DC20[*(signed char *)(p + 0x134C)];
    *(unsigned char *)(p + 0x1395) = 1;
    func_0033A660(p);
    switch (*(unsigned char *)(p + 0x1394)) {
    case 0:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 1:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 2:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 4:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 8:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 3:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 5:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 1);
        break;
    case 7:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 2);
        break;
    case 9:
        *(short *)(p + 0x12A4) = 0;
        func_0033A620(p, 0, 0);
        break;
    case 10:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 11:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 12:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 13:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 0);
        break;
    case 14:
        *(short *)(p + 0x12A4) = 0;
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        func_0033A620(p, 0, 5);
        break;
    case 15:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 1);
        break;
    case 16:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        if (*(unsigned char *)(p + 0x139A) == 14) func_0033A620(p, 2, 4);
        else func_0033A620(p, 3, 0);
        break;
    case 17:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 2);
        break;
    case 18:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 2);
        break;
    case 19:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 2);
        break;
    case 20:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 2);
        break;
    case 21:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 4);
        break;
    case 22:
        *(float *)(p + 0x1184) = *(float *)(*(char **)(p + 0x11A4) + 0x34);
        *(float *)(p + 0x1294) = D_0059DC40[*(signed char *)(p + 0x134C)];
        func_0033A620(p, 3, 5);
        break;
    case 23:
        *(unsigned char *)(p + 0x1397) = 3;
        func_0033A620(p, 1, 1);
        break;
    case 24:
        func_0033A620(p, 1, 2);
        break;
    case 25:
        *(unsigned char *)(p + 0x1397) = 3;
        func_0033A620(p, 1, 3);
        break;
    case 27:
        *(short *)(p + 0x12A4) = 0;
        *(unsigned char *)(p + 0x134F) = 0;
        func_0033A620(p, 1, 4);
        break;
    case 26:
        *(short *)(p + 0x12A4) = 0;
        *(unsigned char *)(p + 0x134F) = 0;
        func_0033A620(p, 1, 5);
        break;
    case 28:
        *(unsigned char *)(p + 0x1397) = 3;
        func_0033A620(p, 1, 1);
        break;
    case 29:
        *(short *)(p + 0x12A4) = 0;
        func_0033A620(p, 0, 2);
        break;
    case 30:
        func_0033A620(p, 2, 0);
        break;
    case 31:
        func_0033A620(p, 2, 1);
        break;
    case 6:
    case 32:
        break;
    }
}

extern char D_005ACB10[];

extern char D_005ACB34[];

extern char D_005ACBB4[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

int func_0033BB50(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005ACB10;
    *(char **)((char *)p0 + 64) = D_005ACB34;
    *(char **)((char *)p0 + 160) = D_005ACBB4;
    func_0028C110((p0 + 336));
    func_002790E0((p0 + 1344));
    *(char *)((char *)p0 + 2880) = 0;
    *(char *)((char *)p0 + 2881) = 0;
    *(char *)((char *)p0 + 2882) = 0;
    *(int *)((char *)p0 + 3008) = 0;
    *(int *)((char *)p0 + 3012) = 0;
    *(int *)((char *)p0 + 3020) = 0;
    *(char *)((char *)p0 + 2883) = 0;
    *(int *)((char *)p0 + 2888) = 0;
    *(int *)((char *)p0 + 2896) = 0;
    return p0;
}

extern void func_001AD140();

void func_0033A730(void) { func_001AD140(); }

extern void func_003338A0();

void func_0033B7D0(char *p) { func_003338A0(p + -64); }

extern void func_0033AAE0();

void func_0033B810(char *p) { func_0033AAE0(p + -64); }

extern void func_0033B0B0();

void func_0033B840(char *p) { func_0033B0B0(p + -64); }

extern void func_0033A740();

void func_0033B850(char *p) { func_0033A740(p + -64); }

extern void func_00333410();

void func_0033B870(char *p) { func_00333410(p + -64); }

void func_0033B880(char *p) { func_00333410(p + -160); }

void func_0033B890(char *p) { func_00333410(p + -208); }

extern void func_0033B200();

void func_0033B8B0(char *p) { func_0033B200(p + -304); }

extern void func_0033B140();

void func_0033B8C0(char *p) { func_0033B140(p + -304); }

void func_0033B8F0(char *p) { func_0033AAE0(p + -304); }

void func_0033B920(char *p) { func_0033B0B0(p + -304); }

void func_0033B930(char *p) { func_0033A740(p + -304); }

void func_0033B950(char *p) { func_00333410(p + -304); }

void func_0033B9E0(char *p) { func_00333410(p + -464); }

unsigned char func_0033A6D0(char *p) { return *(unsigned char *)(p + 5012); }

signed char func_0033A6E0(char *p) { return *(signed char *)(p + 5013); }

signed char func_0033A6F0(char *p) { return *(signed char *)(p + 5014); }

signed char func_0033A700(char *p) { return *(signed char *)(p + 5015); }

signed char func_0033A710(char *p) { return *(signed char *)(p + 5016); }

signed char func_0033A720(char *p) { return *(signed char *)(p + 5017); }

void func_00334B80(char *p0, int p1) {
    *(char *)(p0 + 5018) = p1;
    *(char *)(p0 + 5022) = 0;
    *(char *)(p0 + 5021) = 0;
    *(char *)(p0 + 5020) = 0;
    *(char *)(p0 + 5019) = 0;
}

float func_0033B130(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 4752) = *(float *)(p1 + 44);
    return t0;
}

float func_0033B2B0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 4420);
    *(float *)(p1 + 0) = *(float *)(p0 + 4420);
    return t0;
}

float func_0033B2E0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 4476);
    *(float *)(p1 + 0) = *(float *)(p0 + 4476);
    return t0;
}
