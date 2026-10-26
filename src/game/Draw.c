extern char D_00645EB0[];

char *func_00286610(char *, int, int);

void func_00198450(char *, int, int, unsigned short);

char *func_001B0FD0(char *, int, int);

void func_00130990(char *, int);

void func_0019BDB0(char *, char *, int);

int func_001A5B30(char *, int);

int func_0027A900(char *p, int a, int id, int b) {
    int func_001A4F90(char *);
    void func_0019BDC0(char *, char *, char *, int);
    char *src;
    unsigned short fl;
    int n;
    char *buf;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        src = func_00286610(D_00645EB0, id, b);
        if (src != 0) {
            *(int *)(p + 0xC) = id;
        } else {
            p[8] = 1;
        }
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    func_00198450(p + 0x30, a, id, fl);
    n = func_001A4F90(p + 0x30);
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_0019BDC0(p + 0x30, buf, src, 0);
        break;
    case 1:
        func_0019BDB0(p + 0x30, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x30, n) != 0) {
        return 0;
    }
    p[0xA] = 1;
    return 1;
}

void func_00199730(char *, char *, char *, int);

void func_00199720(char *, char *, int);

int func_002794A0(char *p, int a, int id, int b) {
    int func_001A4F90(char *);
    char *src;
    unsigned short fl;
    int n;
    char *buf;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        src = func_00286610(D_00645EB0, id, b);
        if (src != 0) {
            *(int *)(p + 0xC) = id;
        } else {
            p[8] = 1;
        }
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    switch (*(unsigned char *)(p + 9)) {
    case 0:
        break;
    case 1:
        fl |= 2;
        break;
    }
    func_00198450(p + 0x40, a, id, fl);
    n = func_001A4F90(p + 0x40);
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_00199730(p + 0x40, buf, src, 0);
        break;
    case 1:
        func_00199720(p + 0x40, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x40, n) != 0) {
        return 0;
    }
    p[0xA] = 1;
    return 1;
}

extern int D_01CAF560[];

extern char D_01CAF520[];

void func_001AA080(char *, int, int);

void func_001A2710(char *, int);

int func_002E7690(char *, int);

void func_001A5DB0(char *, int);

void func_001A5DE0(char *);

static inline void set13c(char *p, unsigned int i, int v) {
    if (i < *(unsigned short *)(p + 0xE8))
        *(int *)(*(char **)(p + 0xFC) + i * 0x340 + 0x13C) = v;
}

void func_00279FA0(char *p, int a) {
    extern int D_01CAFF14[];
    int v;
    int i;
    if (*(unsigned char *)(p + 10) == 0) return;
    if (*(unsigned char *)(p + 0x5C0) == 0) func_001AA080(p + 0x40, D_01CAFF14[0], *(int *)(p + 0x5C4));
    if (*(unsigned char *)(p + 0x5C8) == 0) {
        func_001A2710(p + 0x40, D_01CAF560[0]);
        *(int *)(p + 0x5CC) = func_002E7690(D_01CAF520, a);
        v = *(int *)(p + 0x5CC);
        *(int *)(p + 0x1EC) = v;
        for (i = 0; (int)i < *(unsigned short *)(p + 0xE8); i++) {
            set13c(p, i, v << 4);
        }
    }
    if (*(unsigned char *)(p + 0xB) != 0) {
        func_001A5DE0(p + 0x40);
    } else if (*(unsigned char *)(p + 0x5C1) == 0) {
        func_001A5DB0(p + 0x40, a);
    } else {
        func_001A5DE0(p + 0x40);
    }
}

int func_002792E0(char *p, int a, int b) {
    char *func_002864A0(char *, int);
    int func_001A4F90(char *);
    char *h;
    unsigned short fl;
    int n;
    char *buf;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        h = func_002864A0(D_00645EB0, b);
        if (h != 0) {
            *(int *)(p + 0xC) = b;
            break;
        }
        *(unsigned char *)(p + 8) = 1;
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    switch (*(unsigned char *)(p + 9)) {
    case 0:
        break;
    case 1:
        fl |= 2;
        break;
    }
    func_00198450(p + 0x40, a, b, fl);
    n = func_001A4F90(p + 0x40);
    if (n <= 0) return 0;
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) return 0;
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_00199730(p + 0x40, buf, h, 0);
        break;
    case 1:
        func_00199720(p + 0x40, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x40, n) != 0) return 0;
    *(unsigned char *)(p + 0xA) = 1;
    return 1;
}

int func_00286780(char *, int);

void func_0013D5D0(char *);

void func_0027A0D0(char *p) {
    func_00286780(D_00645EB0, *(int *)(p + 0xC));
    *(int *)(p + 0xC) = 0;
    func_0013D5D0(p + 0x14);
    *(char *)(p + 0xA) = 0;
}

typedef struct { int w[4]; } __attribute__((aligned(16))) Q16;

extern char D_00546720[];

void func_001A9F90(char *, Q16 *);

void func_00279660(char *p) {
    void func_001A5CE0(char *);
    Q16 q = *(Q16 *)D_00546720;
    func_001A9F90(p + 0x40, &q);
    *(char *)(p + 0x5C0) = 1;
    *(char *)(p + 0x5C8) = 1;
    func_001A5CE0(p + 0x40);
}

extern char D_00546740[];

void func_00279700(char *p, int a) {
    void func_001A5D40(char *, int);
    Q16 q = *(Q16 *)D_00546740;
    func_001A9F90(p + 0x40, &q);
    *(char *)(p + 0x5C0) = 1;
    *(char *)(p + 0x5C8) = 1;
    func_001A5D40(p + 0x40, a);
}

void func_0013D240(char *, int);

void func_00100580(char *);

extern char D_005A8650[];

extern char D_005A8740[];

void func_001FBC10(char *, int);

void func_00278D50(char *, int);

void func_00279090(char *, int);

char *func_002791E0(char *p, short flags) {
    if (p) {
        *(char **)p = D_005A8650;
        *(char **)(p + 4) = D_005A8740;
        func_001FBC10(p + 0x400, -1);
        func_0013D240(p + 0x14, -1);
        func_00278D50(p + 4, 0);
        func_00279090(p, 0);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_005A8460[];

extern char D_005A8550[];

char *func_0027A660(char *p, short flags) {
    if (p) {
        *(char **)p = D_005A8460;
        *(char **)(p + 4) = D_005A8550;
        func_001FBC10(p + 0x270, -1);
        func_0013D240(p + 0x14, -1);
        func_00278D50(p + 4, 0);
        func_00279090(p, 0);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0027A760(char *p, int b, int c) {
    int func_001A4F90(char *p);
    int func_002864A0(char *, int);
    void func_0019BDC0(char *, char *, int, int);
    int s;
    int n;
    char *buf;
    unsigned short fl;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        s = func_002864A0(D_00645EB0, c);
        if (s != 0) {
            *(int *)(p + 0xC) = c;
        } else {
            *(unsigned char *)(p + 8) = 1;
        }
        break;
    case 1:
        break;
    }
    fl = 0;
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        break;
    case 1:
        fl |= 1;
        break;
    }
    func_00198450(p + 0x30, b, c, fl);
    n = func_001A4F90(p + 0x30);
    if (n <= 0) return 0;
    buf = func_001B0FD0(p + 0x14, n, -2);
    if (buf == 0) return 0;
    func_00130990(buf, n >> 2);
    switch (*(unsigned char *)(p + 8)) {
    case 0:
        func_0019BDC0(p + 0x30, buf, s, 0);
        break;
    case 1:
        func_0019BDB0(p + 0x30, buf, 0);
        break;
    }
    if (func_001A5B30(p + 0x30, n) != 0) return 0;
    *(unsigned char *)(p + 0xA) = 1;
    return 1;
}

void func_001AA690(char *, int, int, int);

float func_002E7660(char *);

float func_002E7630(char *);

void func_001A2750(char *, float, float);

void func_001A6260(char *);

void func_001A6230(char *, int);

void func_0027B300(char *p, int a) {
    extern int D_01CAFF14[];
    int r = 1;
    float f;
    if (*(unsigned char *)(p + 0xA) == 0) return;
    if (*(unsigned char *)(p + 0x430) == 0) {
        if (*(unsigned char *)(p + 0x433) == 1) {
            r = 0;
        }
        func_001AA690(p + 0x30, D_01CAFF14[0], r, *(unsigned char *)(p + 0x432));
    }
    func_001A2710(p + 0x30, D_01CAF560[0]);
    f = func_002E7660(D_01CAF520);
    func_001A2750(p + 0x30, func_002E7630(D_01CAF520), f);
    if (*(unsigned char *)(p + 0xB) != 0) {
        func_001A6260(p + 0x30);
    } else if (*(unsigned char *)(p + 0x431) == 0) {
        func_001A6230(p + 0x30, a);
    } else {
        func_001A6260(p + 0x30);
    }
}

void func_001FBC70();

void func_001FD3D0();

void func_00279940(char *p0, int p1) {
    *(int *)(p0 + 16) = p1;
    func_001FBC70((p0 + 1024), (p0 + 64));
    func_001FD3D0((p0 + 1024));
    *(char *)(p0 + 11) = 1;
}

void func_001FBF70();

void func_0027ACA0(char *p0, int p1) {
    *(int *)(p0 + 16) = p1;
    func_001FBF70((p0 + 624), (p0 + 48));
    func_001FD3D0((p0 + 624));
    *(char *)(p0 + 11) = 1;
}

void func_0027B400(char *p) {
    func_00286780(D_00645EB0, *(int *)(p + 0xC));
    *(int *)(p + 0xC) = 0;
    func_0013D5D0(p + 0x14);
    *(char *)(p + 0xA) = 0;
}

void func_002796B0(char *p) {
    extern char D_00546730[];
    void func_001A5D20(char *);
    Q16 q = *(Q16 *)D_00546730;
    func_001A9F90(p + 0x40, &q);
    *(char *)(p + 0x5C0) = 1;
    *(char *)(p + 0x5C8) = 1;
    func_001A5D20(p + 0x40);
}

void func_0013D6A0();

void func_001A5B70();

void func_001FBAB0();

void func_00278D10();

void func_00279070();

char * func_002790E0(p) char *p; {
    func_00279070(p);
    func_00278D10(p + 4);
    *(char * *)(p) = D_005A8650;
    *(char * *)(p + 4) = D_005A8740;
    func_0013D6A0(p + 20);
    *(int *)(p + 96) = 0;
    *(int *)(p + 100) = 0;
    *(int *)(p + 112) = 0;
    *(short *)(p + 104) = 0;
    *(int *)(p + 108) = 0;
    *(int *)(p + 128) = 0;
    *(int *)(p + 136) = 0;
    *(int *)(p + 140) = 0;
    *(short *)(p + 144) = 0;
    *(int *)(p + 132) = 0;
    *(char *)(p + 177) = 0;
    *(char *)(p + 176) = 0;
    *(short *)(p + 238) = 0;
    *(int *)(p + 256) = 0;
    *(int *)(p + 260) = 0;
    *(int *)(p + 340) = 0;
    *(int *)(p + 336) = 0;
    *(int *)(p + 468) = 0;
    *(int *)(p + 464) = 0;
    *(int *)(p + 472) = 255;
    *(int *)(p + 476) = 0;
    *(int *)(p + 492) = 255;
    *(short *)(p + 454) = 0;
    *(short *)(p + 452) = 0;
    *(char *)(p + 458) = 0;
    func_001A5B70(p + 64);
    func_001FBAB0(p + 1024);
    *(char *)(p + 8) = 0;
    *(char *)(p + 9) = 0;
    *(int *)(p + 12) = 0;
    *(char *)(p + 10) = 0;
    *(char *)(p + 11) = 0;
    *(char *)(p + 1472) = 0;
    *(int *)(p + 1476) = 2;
    *(char *)(p + 1480) = 0;
    *(int *)(p + 1484) = 255;
    *(char *)(p + 1473) = 0;
    return p;
}

char * func_0027A570(p) char *p; {
    func_00279070(p);
    func_00278D10(p + 4);
    *(char * *)(p) = D_005A8460;
    *(char * *)(p + 4) = D_005A8550;
    func_0013D6A0(p + 20);
    *(int *)(p + 80) = 0;
    *(int *)(p + 84) = 0;
    *(int *)(p + 96) = 0;
    *(short *)(p + 88) = 0;
    *(int *)(p + 92) = 0;
    *(int *)(p + 112) = 0;
    *(int *)(p + 120) = 0;
    *(int *)(p + 124) = 0;
    *(short *)(p + 128) = 0;
    *(int *)(p + 116) = 0;
    *(char *)(p + 161) = 0;
    *(char *)(p + 160) = 0;
    *(short *)(p + 222) = 0;
    *(int *)(p + 240) = 0;
    *(int *)(p + 244) = 0;
    *(int *)(p + 324) = 0;
    *(int *)(p + 320) = 0;
    *(int *)(p + 452) = 0;
    *(int *)(p + 448) = 0;
    *(int *)(p + 456) = 255;
    *(int *)(p + 460) = 0;
    *(int *)(p + 476) = 255;
    *(short *)(p + 438) = 0;
    *(short *)(p + 436) = 0;
    *(char *)(p + 442) = 0;
    func_001A5B70(p + 48);
    func_001FBAB0(p + 624);
    *(char *)(p + 8) = 0;
    *(char *)(p + 9) = 0;
    *(int *)(p + 12) = 0;
    *(char *)(p + 10) = 0;
    *(char *)(p + 11) = 0;
    *(char *)(p + 1072) = 0;
    *(char *)(p + 1075) = 0;
    *(char *)(p + 1074) = 1;
    *(char *)(p + 1073) = 0;
    return p;
}

int func_001FE270();

int func_00279F70(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 11) != 0) {
        v0 = func_001FE270((p0 + 1024));
    }
    return v0;
}

void func_0027AAA0(p0) char *p0; {
    void func_001A5CE0();
    *(char *)(p0 + 1072) = 1;
    func_001A5CE0((p0 + 48));
}

void func_0027AAB0(p0) char *p0; {
    void func_001A5D20();
    *(char *)(p0 + 1072) = 1;
    func_001A5D20((p0 + 48));
}

void func_0027AAC0(p0) char *p0; {
    void func_001A5D40();
    *(char *)(p0 + 1072) = 1;
    func_001A5D40((p0 + 48));
}

void func_001AA740();

void func_0027AB10(p0) char *p0; {
    extern char D_01CAFF14[];
    *(char *)(p0 + 1075) = 1;
    func_001AA740((p0 + 48), *(int *)D_01CAFF14, *(unsigned char *)(p0 + 1074));
}

int func_0027B2D0(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 11) != 0) {
        v0 = func_001FE270((p0 + 624));
    }
    return v0;
}

extern void func_001A9CF0();

void func_00279790(char *p) { func_001A9CF0(p + 64); }

extern void func_001A9CA0();

void func_002797A0(char *p) { func_001A9CA0(p + 64); }

extern void func_001A3B20();

void func_002797C0(char *p) { func_001A3B20(p + 64); }

extern void func_001A39C0();

void func_002797D0(char *p) { func_001A39C0(p + 64); }

extern void func_001A4350();

void func_002797E0(char *p) { func_001A4350(p + 64); }

extern void func_001A4170();

void func_002797F0(char *p) { func_001A4170(p + 64); }

extern void func_001A3370();

void func_00279800(char *p) { func_001A3370(p + 64); }

extern void func_001A35F0();

void func_00279840(char *p) { func_001A35F0(p + 64); }

extern void func_001A2D00();

void func_00279850(char *p) { func_001A2D00(p + 64); }

extern void func_001A2D70();

void func_00279860(char *p) { func_001A2D70(p + 64); }

extern void func_001A2EB0();

void func_00279870(char *p) { func_001A2EB0(p + 64); }

extern void func_001A2F20();

void func_00279880(char *p) { func_001A2F20(p + 64); }

extern void func_001A2180();

void func_00279890(char *p) { func_001A2180(p + 64); }

extern void func_001A2210();

void func_002798A0(char *p) { func_001A2210(p + 64); }

extern void func_001A23D0();

void func_002798B0(char *p) { func_001A23D0(p + 64); }

extern void func_001A2440();

void func_002798C0(char *p) { func_001A2440(p + 64); }

extern void func_001A4DB0();

void func_002798D0(char *p) { func_001A4DB0(p + 64); }

extern void func_001A4E30();

void func_002798E0(char *p) { func_001A4E30(p + 64); }

extern void func_001A4EB0();

void func_002798F0(char *p) { func_001A4EB0(p + 64); }

extern void func_001A4F20();

void func_00279900(char *p) { func_001A4F20(p + 64); }

extern void func_001A1E70();

void func_00279910(char *p) { func_001A1E70(p + 64); }

extern void func_001A2000();

void func_00279920(char *p) { func_001A2000(p + 64); }

extern void func_001A3210();

void func_00279930(char *p) { func_001A3210(p + 64); }

extern void func_001AA600();

void func_0027AAF0(char *p) { func_001AA600(p + 48); }

extern void func_001AA580();

void func_0027AB00(char *p) { func_001AA580(p + 48); }

extern void func_001A3E60();

void func_0027AB30(char *p) { func_001A3E60(p + 48); }

extern void func_001A3D10();

void func_0027AB40(char *p) { func_001A3D10(p + 48); }

extern void func_001A4770();

void func_0027AB50(char *p) { func_001A4770(p + 48); }

extern void func_001A45B0();

void func_0027AB60(char *p) { func_001A45B0(p + 48); }

extern void func_001A2DC0();

void func_0027ABB0(char *p) { func_001A2DC0(p + 48); }

extern void func_001A2E30();

void func_0027ABC0(char *p) { func_001A2E30(p + 48); }

extern void func_001A2F70();

void func_0027ABD0(char *p) { func_001A2F70(p + 48); }

extern void func_001A2FE0();

void func_0027ABE0(char *p) { func_001A2FE0(p + 48); }

extern void func_001A2260();

void func_0027ABF0(char *p) { func_001A2260(p + 48); }

extern void func_001A22F0();

void func_0027AC00(char *p) { func_001A22F0(p + 48); }

extern void func_001A2490();

void func_0027AC10(char *p) { func_001A2490(p + 48); }

extern void func_001A2500();

void func_0027AC20(char *p) { func_001A2500(p + 48); }

void func_0027AC30(char *p) { func_001A4DB0(p + 48); }

void func_0027AC40(char *p) { func_001A4E30(p + 48); }

void func_0027AC50(char *p) { func_001A4EB0(p + 48); }

void func_0027AC60(char *p) { func_001A4F20(p + 48); }

extern void func_001A1F30();

void func_0027AC70(char *p) { func_001A1F30(p + 48); }

extern void func_001A20C0();

void func_0027AC80(char *p) { func_001A20C0(p + 48); }

extern void func_001A32C0();

void func_0027AC90(char *p) { func_001A32C0(p + 48); }

extern void func_0027A550();

void func_0027B910(char *p) { func_0027A550(p + -4); }

extern void func_0027A530();

void func_0027B920(char *p) { func_0027A530(p + -4); }

extern void func_0027A4F0();

void func_0027B930(char *p) { func_0027A4F0(p + -4); }

extern void func_0027A510();

void func_0027B940(char *p) { func_0027A510(p + -4); }

extern void func_0027A4B0();

void func_0027B950(char *p) { func_0027A4B0(p + -4); }

extern void func_0027A4D0();

void func_0027B960(char *p) { func_0027A4D0(p + -4); }

extern void func_0027A470();

void func_0027B970(char *p) { func_0027A470(p + -4); }

extern void func_0027A490();

void func_0027B980(char *p) { func_0027A490(p + -4); }

extern void func_0027A430();

void func_0027B990(char *p) { func_0027A430(p + -4); }

extern void func_0027A450();

void func_0027B9A0(char *p) { func_0027A450(p + -4); }

extern void func_0027A3F0();

void func_0027B9B0(char *p) { func_0027A3F0(p + -4); }

extern void func_0027A410();

void func_0027B9C0(char *p) { func_0027A410(p + -4); }

extern void func_0027A3B0();

void func_0027B9D0(char *p) { func_0027A3B0(p + -4); }

extern void func_0027A3D0();

void func_0027B9E0(char *p) { func_0027A3D0(p + -4); }

extern void func_0027A370();

void func_0027B9F0(char *p) { func_0027A370(p + -4); }

extern void func_0027A390();

void func_0027BA00(char *p) { func_0027A390(p + -4); }

extern void func_0027A330();

void func_0027BA10(char *p) { func_0027A330(p + -4); }

extern void func_0027A350();

void func_0027BA20(char *p) { func_0027A350(p + -4); }

extern void func_00279C40();

void func_0027BA30(char *p) { func_00279C40(p + -4); }

extern void func_00279DD0();

void func_0027BA40(char *p) { func_00279DD0(p + -4); }

extern void func_0027A120();

void func_0027BA50(char *p) { func_0027A120(p + -4); }

extern void func_0027A220();

void func_0027BA60(char *p) { func_0027A220(p + -4); }

extern void func_0027B880();

void func_0027BA80(char *p) { func_0027B880(p + -4); }

extern void func_0027B860();

void func_0027BA90(char *p) { func_0027B860(p + -4); }

extern void func_0027B820();

void func_0027BAA0(char *p) { func_0027B820(p + -4); }

extern void func_0027B840();

void func_0027BAB0(char *p) { func_0027B840(p + -4); }

extern void func_0027B7E0();

void func_0027BAC0(char *p) { func_0027B7E0(p + -4); }

extern void func_0027B800();

void func_0027BAD0(char *p) { func_0027B800(p + -4); }

extern void func_0027B7A0();

void func_0027BAE0(char *p) { func_0027B7A0(p + -4); }

extern void func_0027B7C0();

void func_0027BAF0(char *p) { func_0027B7C0(p + -4); }

extern void func_0027B760();

void func_0027BB00(char *p) { func_0027B760(p + -4); }

extern void func_0027B780();

void func_0027BB10(char *p) { func_0027B780(p + -4); }

extern void func_0027B720();

void func_0027BB20(char *p) { func_0027B720(p + -4); }

extern void func_0027B740();

void func_0027BB30(char *p) { func_0027B740(p + -4); }

extern void func_0027B6E0();

void func_0027BB40(char *p) { func_0027B6E0(p + -4); }

extern void func_0027B700();

void func_0027BB50(char *p) { func_0027B700(p + -4); }

extern void func_0027B6A0();

void func_0027BB60(char *p) { func_0027B6A0(p + -4); }

extern void func_0027B6C0();

void func_0027BB70(char *p) { func_0027B6C0(p + -4); }

extern void func_0027B660();

void func_0027BB80(char *p) { func_0027B660(p + -4); }

extern void func_0027B680();

void func_0027BB90(char *p) { func_0027B680(p + -4); }

extern void func_0027AFA0();

void func_0027BBA0(char *p) { func_0027AFA0(p + -4); }

extern void func_0027B130();

void func_0027BBB0(char *p) { func_0027B130(p + -4); }

extern void func_0027B450();

void func_0027BBC0(char *p) { func_0027B450(p + -4); }

extern void func_0027B550();

void func_0027BBD0(char *p) { func_0027B550(p + -4); }

char *func_00279280(char *p) { return p + 64; }

char *func_00279290(char *p) { return p + 64; }

char *func_002792A0(char *p) { return p + 1024; }

void func_002792B0(void) {}

void func_002792C0(char *p, char v) { *(char *)(p + 8) = v; }

void func_002792D0(char *p, char v) { *(char *)(p + 9) = v; }

void func_00279760(char *p, char v) { *(char *)(p + 1472) = v; }

void func_00279770(char *p, char v) { *(char *)(p + 1480) = v; }

void func_00279780(char *p, int v) { *(int *)(p + 1476) = v; }

void func_002797B0(void) {}

char *func_00279F60(char *p) { return p + 1456; }

void func_0027A110(char *p, char v) { *(char *)(p + 1473) = v; }

char *func_0027A700(char *p) { return p + 48; }

char *func_0027A710(char *p) { return p + 48; }

char *func_0027A720(char *p) { return p + 624; }

void func_0027A730(void) {}

void func_0027A740(char *p, char v) { *(char *)(p + 8) = v; }

void func_0027A750(char *p, char v) { *(char *)(p + 9) = v; }

void func_0027AAD0(char *p, char v) { *(char *)(p + 1072) = v; }

void func_0027AAE0(char *p, char v) { *(char *)(p + 1074) = v; }

void func_0027AB70(void) {}

void func_0027AB80(void) {}

void func_0027AB90(void) {}

void func_0027ABA0(void) {}

char *func_0027B2C0(char *p) { return p + 1056; }

void func_0027B440(char *p, char v) { *(char *)(p + 1073) = v; }

signed char func_0027B8B0(char *p) { return *(signed char *)(p + 9); }

unsigned char func_0027B8C0(char *p) { return *(unsigned char *)(p + 10); }

unsigned char func_0027B8D0(char *p) { return *(unsigned char *)(p + 11); }

signed char func_0027B8E0(char *p) { return *(signed char *)(p + 8); }

signed char func_0027B8F0(char *p) { return *(signed char *)(p + 9); }

unsigned char func_0027B900(char *p) { return *(unsigned char *)(p + 11); }

void func_00279810(char *p0, float f0, float f1) {
    *(float *)(p0 + 464) = f0;
    *(float *)(p0 + 468) = f1;
}

float func_00279820(char *p0, float f0, float f1) {
    float t0;
    float t1;
    t0 = (*(float *)(p0 + 464) + f0);
    *(float *)(p0 + 464) = (*(float *)(p0 + 464) + f0);
    t1 = (*(float *)(p0 + 468) + f1);
    *(float *)(p0 + 468) = (*(float *)(p0 + 468) + f1);
    return t1;
}
