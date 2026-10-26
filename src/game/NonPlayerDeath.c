void func_0028C110(char *);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

void func_0022B5A0(char *);

extern char D_005A77A0[];

extern char D_005A78F8[];

void func_0024FE00(char *);

void func_002E8A10(char *);

void func_00313E20(char *);

void func_0024D930(char *);

extern char D_005AAA98[];

extern char D_005AFA60[];

void func_0024D9A0();

void func_002E1BC0(char *);

void func_003AD780(char *);

void func_0031DED0();

void func_0031DF20();

void func_002E7BF0(char *);

extern char D_005A8B10[];

extern char D_005A8B34[];

extern char D_005A8BB4[];

extern char D_005A8C48[];

extern char D_005A8D14[];

void func_0027CE00(char *);

char *func_0027CE70(char *p) {
    void func_002790E0(char *);
    void func_00100450(char *, void *, void *, int, int);
    int i;
    char *q;
    func_0024FE00(p);
    func_0027CE00(p + 0x130);
    *(char **)(p + 0x0) = D_005A8B10;
    *(char **)(p + 0x40) = D_005A8B34;
    *(char **)(p + 0xA0) = D_005A8BB4;
    *(char **)(p + 0xD0) = D_005A8C48;
    *(char **)(p + 0x130) = D_005A8D14;
    func_00100450(p + 0x138, func_001AAD30, func_0013D240, 0x10, 0x27);
    func_002790E0(p + 0x4C0);
    func_002790E0(p + 0xAC0);
    func_002790E0(p + 0x10C0);
    func_002790E0(p + 0x16C0);
    q = p + 0x1CC0;
    *(char **)(p + 0x1CD0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x1D80;
    *(char **)(p + 0x1D90) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    p[0x1E40] = 0;
    p[0x1EC0] = 0;
    func_0028C110(p + 0x1F40);
    func_00100450(p + 0x2160, func_0024D930, func_0024D9A0, 0xD0, 2);
    p[0x2370] = 0;
    p[0x2371] = 0;
    *(short *)(p + 0x2372) = 0;
    *(int *)(p + 0x2378) = 0;
    *(int *)(p + 0x237C) = 0;
    *(int *)(p + 0x2380) = 0;
    *(int *)(p + 0x2390) = 0;
    *(int *)(p + 0x2394) = 0;
    *(int *)(p + 0x2398) = 0;
    *(float *)(p + 0x239C) = 1.0f;
    *(float *)(p + 0x23A0) = 100000.0f;
    p[0x23A4] = 0;
    p[0x23A5] = 0;
    *(short *)(p + 0x23A6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x23A8) = -1;
    func_00100450(p + 0x2438, func_0031DED0, func_0031DF20, 0x20, 0xA);
    q = p + 0x2580;
    *(char **)(p + 0x2590) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_002E7BF0(p + 0x26A8);
    func_002E8A10(p + 0x26F4);
    func_00313E20(p + 0x270C);
    q = p + 0x2730;
    *(char **)(p + 0x2740) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x27F0;
    *(char **)(p + 0x2800) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x28B0;
    *(char **)(p + 0x28C0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x2950;
    *(char **)(p + 0x2960) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x29F0;
    *(char **)(p + 0x2A00) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    p[0x3F4] = 0;
    p[0x23C0] = 0;
    *(int *)(p + 0x23C4) = 0;
    *(int *)(p + 0x23C8) = 0;
    p[0x23CC] = 0;
    *(int *)(p + 0x23D0) = 0;
    *(int *)(p + 0x23D4) = 0;
    p[0x23D8] = 0;
    *(int *)(p + 0x23DC) = 0;
    *(int *)(p + 0x23E0) = 0;
    p[0x23E4] = 0;
    *(int *)(p + 0x23E8) = 0;
    *(int *)(p + 0x23EC) = 0;
    p[0x23F0] = 0;
    *(int *)(p + 0x23F4) = 0;
    *(int *)(p + 0x23F8) = 0;
    p[0x23FC] = 0;
    *(int *)(p + 0x2400) = 0;
    *(int *)(p + 0x2404) = 0;
    p[0x2408] = 0;
    *(int *)(p + 0x240C) = 0;
    *(int *)(p + 0x2410) = 0;
    p[0x2414] = 0;
    *(int *)(p + 0x241C) = 0x80;
    p[0x2415] = 0;
    *(int *)(p + 0x2420) = 0x80;
    p[0x2416] = 0;
    *(int *)(p + 0x2424) = 0x80;
    p[0x2417] = 0;
    *(int *)(p + 0x2428) = 0x80;
    p[0x2418] = 0;
    *(int *)(p + 0x242C) = 0x80;
    p[0x2419] = 0;
    *(int *)(p + 0x2430) = 0x80;
    p[0x241A] = 0;
    *(int *)(p + 0x2434) = 0x80;
    p[0x2724] = 0;
    p[0x2725] = 0;
    p[0x2726] = 0;
    p[0x2727] = 0;
    p[0x2728] = 0;
    p[0x2729] = 0;
    p[0x272A] = 0;
    p[0x2620] = 0;
    p[0x2621] = 0;
    p[0x2622] = 0;
    p[0x262C] = 0;
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0x2630) = 0;
    *(int *)(p + 0x2634) = 0;
    *(int *)(p + 0x2690) = 0;
    *(int *)(p + 0x2694) = 0;
    *(int *)(p + 0x2698) = 0;
    *(int *)(p + 0x269C) = 0;
    *(int *)(p + 0x26A0) = 0;
    *(int *)(p + 0x26A4) = 0;
    *(int *)(p + 0x2B30) = 0;
    *(int *)(p + 0x2B34) = 0;
    *(int *)(p + 0x2B38) = 0;
    *(int *)(p + 0x2B3C) = 0;
    p[0x2B40] = 1;
    *(int *)(p + 0x2B44) = 0;
    *(int *)(p + 0x2B48) = 0;
    return p;
}

char *func_002792A0(char *);

float func_0027D780(char *p) {
    return *(float *)(func_002792A0(p + 0x4C0) + 0x12C);
}

char *func_00279290(char *);

void func_001A1F90(char *);

void func_00283700(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    if (*(unsigned char *)(p + 0x2620) != 0) {
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    if (*(unsigned char *)(p + 0x2621) != 0) {
        func_001A1F90(func_00279290(p + 0x10C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_001A1E10(char *);

void func_00283780(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    if (*(unsigned char *)(p + 0x2620) != 0) {
        func_001A1E10(func_00279290(p + 0xAC0));
    }
    if (*(unsigned char *)(p + 0x2621) != 0) {
        func_001A1E10(func_00279290(p + 0x10C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

void func_0024DA80(char *, int, int);

void func_0027D540(char *p, int i) {
    unsigned char *e = (unsigned char *)(*(char **)(p + 0x2300) + i * 2);
    unsigned char a = e[0];
    unsigned char b = e[1];
    func_0024DA80(p + 0x2160, a, b);
    func_0024DA80(p + 0x2230, a, b);
    *(unsigned char *)(p + 0x2B41) = a;
    *(unsigned char *)(p + 0x2B42) = b;
}

void func_0027D5B0(char *p, int i) {
    unsigned char *e = (unsigned char *)(*(char **)(p + 0x2304) + i * 2);
    unsigned char a = e[0];
    unsigned char b = e[1];
    func_0024DA80(p + 0x2160, a, b);
    func_0024DA80(p + 0x2230, a, b);
    *(unsigned char *)(p + 0x2B41) = a;
    *(unsigned char *)(p + 0x2B42) = b;
}

void func_00206730();

void func_00228350();

void func_00286040();

void func_00286090();

void func_002860E0();

void func_002839C0(int p0) {
    func_00228350((p0 + 200));
    func_002860E0((p0 + 9776));
    func_00286090((p0 + 9780));
    func_00206730((p0 + 9872));
    func_00206730((p0 + 9876));
    func_00206730((p0 + 9880));
    func_00206730((p0 + 9884));
    func_00206730((p0 + 9888));
    func_00206730((p0 + 9892));
    func_00206730((p0 + 11060));
    func_00206730((p0 + 11064));
    func_00206730((p0 + 11068));
    func_00286040((p0 + 11076));
    func_00286040((p0 + 11080));
}

extern char D_005A6F50[];

extern char D_005A8AE0[];

void func_0013D6A0();

char * func_002845E0(p) char *p; {
    char * func_002790E0();
    void func_00100450();
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
    *(char * *)(p) = D_005A8AE0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 23, 135);
    func_002790E0(p + 576);
    func_002790E0(p + 2112);
    return p;
}

extern char D_005A8AB0[];

char * func_00285060(p) char *p; {
    char * func_002790E0();
    void func_00100450();
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
    *(char * *)(p) = D_005A8AB0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 29, 135);
    func_002790E0(p + 704);
    func_002790E0(p + 2240);
    return p;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_0024FEA0();

void func_002791E0();

void func_0027CE20();

void func_0028C1A0();

void func_002E7C40();

void func_002E8A50();

void func_00313E60();

char *func_0027D270(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005A8B10;
        *(char * *)(p + 64) = D_005A8B34;
        *(char * *)(p + 160) = D_005A8BB4;
        *(char * *)(p + 208) = D_005A8C48;
        *(char * *)(p + 304) = D_005A8D14;
        if (p + 10736 != 0) {
            *(char * *)(p + 10752) = D_005AFA60;
            if (p + 10736 != 0) {
                *(char * *)(p + 10752) = D_005A77A0;
            }
        }
        if (p + 10576 != 0) {
            *(char * *)(p + 10592) = D_005AFA60;
            if (p + 10576 != 0) {
                *(char * *)(p + 10592) = D_005A77A0;
            }
        }
        if (p + 10416 != 0) {
            *(char * *)(p + 10432) = D_005AFA60;
            if (p + 10416 != 0) {
                *(char * *)(p + 10432) = D_005A77A0;
            }
        }
        if (p + 10224 != 0) {
            *(char * *)(p + 10240) = D_005AAA98;
            if (p + 10224 != 0) {
                *(char * *)(p + 10240) = D_005A77A0;
            }
        }
        if (p + 10032 != 0) {
            *(char * *)(p + 10048) = D_005AAA98;
            if (p + 10032 != 0) {
                *(char * *)(p + 10048) = D_005A77A0;
            }
        }
        func_00313E60(p + 9996, -1);
        func_002E8A50(p + 9972, -1);
        func_002E7C40(p + 9896, -1);
        if (p + 9600 != 0) {
            *(char * *)(p + 9616) = D_005AAA98;
            if (p + 9600 != 0) {
                *(char * *)(p + 9616) = D_005A77A0;
            }
        }
        func_001003E0(p + 9272, (void *)func_0031DF20, 32, 10);
        func_001003E0(p + 8544, (void *)func_0024D9A0, 208, 2);
        func_0028C1A0(p + 8000, -1);
        if (p + 7552 != 0) {
            *(char * *)(p + 7568) = D_005A78F8;
            if (p + 7552 != 0) {
                *(char * *)(p + 7568) = D_005A77A0;
            }
        }
        if (p + 7360 != 0) {
            *(char * *)(p + 7376) = D_005A78F8;
            if (p + 7360 != 0) {
                *(char * *)(p + 7376) = D_005A77A0;
            }
        }
        func_002791E0(p + 5824, -1);
        func_002791E0(p + 4288, -1);
        func_002791E0(p + 2752, -1);
        func_002791E0(p + 1216, -1);
        func_001003E0(p + 312, (void *)func_0013D240, 16, 39);
        func_0027CE20(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00281CB0(p0, p1) char *p0; int p1; {
    switch (p1) {
    case 0:
        *(char *)(p0 + 10400) = 1;
        *(short *)(p0 + 10404) = 16384;
        /* fall through */
    case 1:
        *(char *)(p0 + 10208) = 1;
        *(short *)(p0 + 10212) = 16384;
        break;
    }
}

extern char D_01CAFF0C[];

int func_001AD140();

int func_002F2D30();

int func_00284260(p0) int p0; {
    char *v0;
    int v1;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v0 = (char *)p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    v2 = (int)v0;
    if (v1 != 0) {
        v10 = func_002F2D30(v1, v2);
    }
    v8 = *(int *)(v0 + 200);
    if (v8 != 0) {
        v10 = func_001AD140(v8);
        *(int *)(v0 + 200) = 0;
    }
    v15 = *(int *)(v0 + 9776);
    if (v15 != 0) {
        v10 = func_001AD140(v15);
        *(int *)(v0 + 9776) = 0;
    }
    v16 = *(int *)(v0 + 9780);
    if (v16 != 0) {
        v10 = func_001AD140(v16);
        *(int *)(v0 + 9780) = 0;
    }
    v17 = *(int *)(v0 + 9872);
    if (v17 != 0) {
        v10 = func_001AD140(v17);
        *(int *)(v0 + 9872) = 0;
    }
    v3 = *(int *)(v0 + 9876);
    if (v3 != 0) {
        v10 = func_001AD140(v3);
        *(int *)(v0 + 9876) = 0;
    }
    v4 = *(int *)(v0 + 9880);
    if (v4 != 0) {
        v10 = func_001AD140(v4);
        *(int *)(v0 + 9880) = 0;
    }
    v5 = *(int *)(v0 + 9884);
    if (v5 != 0) {
        v10 = func_001AD140(v5);
        *(int *)(v0 + 9884) = 0;
    }
    v6 = *(int *)(v0 + 9888);
    if (v6 != 0) {
        v10 = func_001AD140(v6);
        *(int *)(v0 + 9888) = 0;
    }
    v7 = *(int *)(v0 + 9892);
    if (v7 != 0) {
        v10 = func_001AD140(v7);
        *(int *)(v0 + 9892) = 0;
    }
    v9 = *(int *)(v0 + 11060);
    if (v9 != 0) {
        v10 = func_001AD140(v9);
        *(int *)(v0 + 11060) = 0;
    }
    v11 = *(int *)(v0 + 11064);
    if (v11 != 0) {
        v10 = func_001AD140(v11);
        *(int *)(v0 + 11064) = 0;
    }
    v12 = *(int *)(v0 + 11068);
    if (v12 != 0) {
        v10 = func_001AD140(v12);
        *(int *)(v0 + 11068) = 0;
    }
    v13 = *(int *)(v0 + 11076);
    if (v13 != 0) {
        v10 = func_001AD140(v13);
        *(int *)(v0 + 11076) = 0;
    }
    v14 = *(int *)(v0 + 11080);
    if (v14 != 0) {
        v10 = func_001AD140(v14);
        *(int *)(v0 + 11080) = 0;
    }
    return v10;
}

int func_002845C0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 23)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1028);
    }
    return (int)v0;
}

extern void func_0024E800();

void func_0027D7A0(char *p) { func_0024E800(p + 8752); }

extern void func_002839B0();

void func_00286130(char *p) { func_002839B0(p + -64); }

extern void func_002839A0();

void func_00286140(char *p) { func_002839A0(p + -64); }

extern void func_00283820();

void func_00286150(char *p) { func_00283820(p + -64); }

extern void func_00283800();

void func_00286160(char *p) { func_00283800(p + -64); }

extern void func_0027D8F0();

void func_002861A0(char *p) { func_0027D8F0(p + -208); }

extern void func_0027D850();

void func_002861B0(char *p) { func_0027D850(p + -208); }

extern void func_0027D7B0();

void func_002861C0(char *p) { func_0027D7B0(p + -208); }

extern void func_0027D720();

void func_002861F0(char *p) { func_0027D720(p + -208); }

extern void func_0027D620();

void func_00286200(char *p) { func_0027D620(p + -208); }

int func_0027D4F0(void) { return 0; }

unsigned char func_0027D500(char *p) { return *(unsigned char *)(p + 11072); }

void func_0027D520(void) {}

void func_0027D530(void) {}

void func_00285050(void) {}

void func_00286030(void) {}

void func_0027D510(char *p0) {
    *(int *)(p0 + 9776) = 0;
    *(int *)(p0 + 9780) = 0;
}
