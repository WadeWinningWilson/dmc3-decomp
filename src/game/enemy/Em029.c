#include "game/mt_rand.h"
typedef struct Rng24 {
    float base[4];
    float range[4];
    char pad[4];
} Rng24;

extern Rng24 D_00582230[];

extern Rng24 D_00582530[];

void func_00376CF0(unsigned char *p) {
    Rng24 *t;
    if (p[0x972] == 0) {
        t = &D_00582230[p[5]];
    } else {
        t = &D_00582530[p[5]];
    }
    *(float *)(p + 0x8F8) = t->base[p[0x8EB]] + t->range[p[0x8EB]] * (2.3283064e-10f * mt_rand());
}

void func_001AD100(char *);

void func_00373620(char *);

void func_00375000(char *);

void func_003758E0(char *);

void func_00373580(char *p) {
    func_001AD100(p);
    *(float *)(p + 0x8F0) = *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x840), "r"(p + 0x50) : "memory");
    *(int *)(p + 0x110) = 0;

    switch ((unsigned char)*(unsigned char *)(p + 4)) {
    case 0:
        func_00373620(p);
        break;
    case 1:
        func_00375000(p);
        break;
    case 2:
        func_003758E0(p);
        break;
    case 3:
        break;
    }
}

extern char D_01CAFF0C[];

void func_002EF940(int, char *);

void func_00376E40(char *p) {
    char *q;
    func_002EF940(*(int *)D_01CAFF0C, p + 0x39F0);
    q = *(char **)(p + 0x910);
    if (q != 0) {
        func_002EF940(*(int *)D_01CAFF0C, q + 0x39F0);
    }
}

void func_004AD470(char *);

void func_004AD520(char *);

void func_004AD5B0(char *);

void func_004AD970(char *);

void func_004ADC50(char *);

void func_004ADEA0(char *);

void func_004AE120(char *);

void func_004AE1D0(char *);

void func_004AE310(char *);

void func_004AE3F0(char *);

void func_004AE4B0(char *);

void func_004AD6D0(char *p);

void func_004AD800(char *p);

void func_00376850(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004AD470(p);
        break;
    case 1:
        func_004AD520(p);
        break;
    case 3:
        func_004AD5B0(p);
        break;
    case 4:
        func_004AD6D0(p);
        break;
    case 7:
        func_004AD800(p);
        break;
    case 8:
        func_004AD970(p);
        break;
    case 9:
        func_004ADC50(p);
        break;
    case 11:
        func_004ADEA0(p);
        break;
    case 13:
        func_004AE120(p);
        break;
    case 14:
        func_004AE1D0(p);
        break;
    case 15:
        func_004AE310(p);
        break;
    case 18:
        func_004AE3F0(p);
        break;
    case 20:
        func_004AE4B0(p);
        break;
    }
}

extern float D_00562A90[];

extern float D_00562A80[];

static inline unsigned char flag8000(char *p) {
    return (*(unsigned int *)(p + 0x8FC) & 0x8000) != 0;
}

int func_00376F40(char *p) {
    if (flag8000(p) == 1) {
        if (*(float *)(p + 0x50) < D_00562A90[0] && *(float *)(p + 0x58) < D_00562A90[2]) {
            return 1;
        }
    } else {
        if (!(*(float *)(p + 0x50) <= D_00562A80[0]) && !(*(float *)(p + 0x58) <= D_00562A80[2])) {
            return 1;
        }
    }
    return 0;
}

void func_002F2D30(char *, char *);

void func_0041D670(char *);

void func_00375EF0(char *p) {
    void func_001AD140(char *);
    unsigned char i;
    *(int *)(p + 0x110) = 0;
    if (*(char **)(p + 0x3C50) != 0) {
        func_001AD140(*(char **)(p + 0x3C50));
        *(char **)(p + 0x3C50) = 0;
    }
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
    for (i = 0; i < 8; i++) {
        func_0041D670(p + i * 4 + 0x914);
    }
    func_0041D670(p + 0x934);
    func_0041D670(p + 0x938);
    func_0041D670(p + 0x93C);
    func_0041D670(p + 0x940);
    func_0041D670(p + 0x944);
    func_0041D670(p + 0x8E0);
}

void func_004AEA60(char *p);

void func_004AE550(char *);

void func_004AE600(char *);

void func_004AE6E0(char *);

void func_004AECE0(char *);

void func_004AEE10(char *);

void func_004AEF40(char *);

void func_004AEFF0(char *);

void func_004AF580(char *);

void func_004AF8A0(char *);

void func_004AFA50(char *);

void func_004B0200(char *);

void func_004B0340(char *);

void func_004B0400(char *);

void func_004B0740(char *);

void func_004B0820(char *);

void func_004B0A70(char *);

void func_004B0CC0(char *);

void func_004B0E20(char *);

void func_004B1080(char *);

void func_003769C0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0: func_004AE550(p); break;
    case 2: func_004AE600(p); break;
    case 3: func_004AE6E0(p); break;
    case 4: func_004AEA60(p); break;
    case 5: func_004AECE0(p); break;
    case 6: func_004AEE10(p); break;
    case 7: func_004AEF40(p); break;
    case 8: func_004AEFF0(p); break;
    case 9: func_004AF580(p); break;
    case 10: func_004AF8A0(p); break;
    case 11: func_004AFA50(p); break;
    case 12: func_004B0200(p); break;
    case 13: func_004B0340(p); break;
    case 14: func_004B0400(p); break;
    case 15: func_004B0740(p); break;
    case 16: func_004B0820(p); break;
    case 17: func_004B0A70(p); break;
    case 18: func_004B0CC0(p); break;
    case 19: func_004B0E20(p); break;
    case 20: func_004B1080(p); break;
    case 1: break;
    }
}

void func_003775C0(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_00377610(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005AAA98[];

extern char D_005ADFA0[];

extern char D_005ADFC4[];

extern char D_005AE044[];

extern char D_005AE0D8[];

extern char D_005AE1A4[];

extern char D_005AE25C[];

extern char D_005AFA60[];

extern char D_005B0890[];

void func_001003E0();

void func_0013D240();

void func_001FBC10();

void func_00204A70();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E83B0();

void func_002E8A50();

void func_00313E60();

void func_0031DD00();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_00377320(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005ADFA0;
        *(char * *)(p + 64) = D_005ADFC4;
        *(char * *)(p + 160) = D_005AE044;
        *(char * *)(p + 208) = D_005AE0D8;
        *(char * *)(p + 304) = D_005AE1A4;
        *(char * *)(p + 464) = D_005AE25C;
        if (p + 15120 != 0) {
            if (p + 15344 != 0) {
                *(char * *)(p + 15344) = D_005A7780;
                if (p + 15344 != 0) {
                    *(char * *)(p + 15344) = D_005A7790;
                }
            }
        }
        if (p + 15024 != 0) {
            *(char * *)(p + 15040) = D_005B0890;
            if (p + 15024 != 0) {
                *(char * *)(p + 15040) = D_005A77A0;
            }
        }
        func_00313E60(p + 14996, -1);
        func_002E83B0(p + 14928, -1);
        func_001FBC10(p + 14416, -1);
        func_0028C1A0(p + 13696, -1);
        func_0028C1A0(p + 13152, -1);
        if (p + 13008 != 0) {
            *(char * *)(p + 13024) = D_005AAA98;
            if (p + 13008 != 0) {
                *(char * *)(p + 13024) = D_005A77A0;
            }
        }
        if (p + 12816 != 0) {
            *(char * *)(p + 12832) = D_005A78F8;
            if (p + 12816 != 0) {
                *(char * *)(p + 12832) = D_005A77A0;
            }
        }
        func_001003E0(p + 12240, (void *)func_00204A70, 192, 3);
        if (p + 12080 != 0) {
            *(char * *)(p + 12096) = D_005AFA60;
            if (p + 12080 != 0) {
                *(char * *)(p + 12096) = D_005A77A0;
            }
        }
        func_0024D9A0(p + 11872, -1);
        func_001003E0(p + 11248, (void *)func_0024D9A0, 208, 3);
        func_0024D9A0(p + 11040, -1);
        func_00401030(p + 11008, -1);
        func_001003E0(p + 10924, (void *)func_00401030, 28, 3);
        func_00401030(p + 10896, -1);
        func_0031DD00(p + 10752, -1);
        func_002791E0(p + 9216, -1);
        func_001003E0(p + 4608, (void *)func_002791E0, 1536, 3);
        func_002791E0(p + 3072, -1);
        func_002E8A50(p + 2428, -1);
        func_001003E0(p + 532, (void *)func_0013D240, 16, 98);
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00375EB0(p0) char *p0; {
    *(short *)(p0 + 144) = *(short *)(p0 + 2414);
    *(float *)(p0 + 132) = (6.283185005187988f * ((float)*(short *)(p0 + 144) / 65536.0f));
}

extern char D_01DFABA0[];

void func_003305E0();

void func_003760E0(p0) int p0; {
    func_003305E0(D_01DFABA0, 0, 91, (p0 + 80), 0, 0, 0);
}

void func_00376110(p0) int p0; {
    func_003305E0(D_01DFABA0, 0, 93, (p0 + 80), 0, 0, 0);
}

int func_00376B40(p0, p1) char *p0; int p1; {
    if (*(float *)(p0 + 2456) > 0.0f) {
        if (*(unsigned char *)(p0 + 5) != p1) {
            *(char *)(p0 + 5) = p1;
            *(char *)(p0 + 6) = 0;
            *(char *)(p0 + 7) = 0;
        }
    }
}

int func_00207480();

int func_0024E780();

void func_00376E90(p0) int p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    v0 = (char *)p0;
    v2 = func_0024E780((v0 + 11040), 1, 0);
    v1 = (v2 & 255);
    if ((v1 & 1) != 0) {
        if (*(int *)(v0 + 2364) == 0) {
            v2 = func_00207480(2, 413, 0, 16);
            *(int *)(v0 + 2364) = v2;
            v3 = *(char **)(v0 + 2364);
            if (v3 != 0) {
                *(int *)(v3 + 144) = *(int *)(*(char **)(v0 + 2652) + 260);
                *(char *)(v3 + 154) = 0;
            }
        }
    }
    if ((v1 & 2) != 0) {
        v4 = *(int *)(v0 + 2364);
        if (v4 != 0) {
            v2 = func_001AD140(v4);
            *(int *)(v0 + 2364) = 0;
        }
    }
}

extern char D_00562AB0[];

extern char D_01CAFF14[];

void func_00277DE0();

void func_00277E70();

void func_00277ED0();

int func_00278060();

int func_00376FE0(p0) int p0; {
    int tmp11;
    func_00277DE0((p0 + 15120), D_00562AB0, (p0 + 15360), 1);
    *(float *)((char *)p0 + 15164) = *(float *)((char *)p0 + 15424);
    *(float *)((char *)p0 + 15196) = *(float *)((char *)p0 + 15424);
    *(float *)((char *)p0 + 15168) = *(float *)((char *)p0 + 15428);
    *(float *)((char *)p0 + 15200) = *(float *)((char *)p0 + 15428);
    *(short *)((char *)p0 + 15172) = *(unsigned short *)((char *)p0 + 15432);
    *(short *)((char *)p0 + 15174) = *(unsigned short *)((char *)p0 + 15434);
    *(short *)((char *)p0 + 15176) = *(unsigned short *)((char *)p0 + 15436);
    *(short *)((char *)p0 + 15204) = *(unsigned short *)((char *)p0 + 15432);
    *(short *)((char *)p0 + 15206) = *(unsigned short *)((char *)p0 + 15434);
    *(short *)((char *)p0 + 15208) = *(unsigned short *)((char *)p0 + 15436);
    func_00277E70((p0 + 15120));
    func_00277ED0((p0 + 15120));
    tmp11 = func_00278060((p0 + 15120), *(int *)D_01CAFF14);
    return tmp11;
}

int func_00377260(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 2372);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 2372) = 0;
    }
    *(int *)(v0 + 96) = 0;
    *(int *)(v0 + 100) = 0;
    *(int *)(v0 + 104) = 0;
    *(int *)(v0 + 108) = 0x3f800000;
    *(int *)(v0 + 112) = 0;
    *(int *)(v0 + 116) = 0;
    *(int *)(v0 + 120) = 0;
    *(int *)(v0 + 124) = 0x3f800000;
    *(char *)(v0 + 2425) = 0;
    *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) & -513);
    *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) & -257);
    *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) & -129);
    return v2;
}

int func_003772F0(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 2648);
}

extern void func_00377300();

void func_00377660(char *p) { func_00377300(p + -64); }

extern void func_00377310();

void func_00377670(char *p) { func_00377310(p + -64); }

extern void func_00376150();

void func_00377680(char *p) { func_00376150(p + -64); }

extern void func_00376140();

void func_00377690(char *p) { func_00376140(p + -64); }

extern void func_00376160();

void func_003776A0(char *p) { func_00376160(p + -64); }

extern void func_00376180();

void func_003776B0(char *p) { func_00376180(p + -64); }

extern void func_00376190();

void func_003776C0(char *p) { func_00376190(p + -64); }

extern void func_00376170();

void func_003776D0(char *p) { func_00376170(p + -64); }

extern void func_003761B0();

void func_003776E0(char *p) { func_003761B0(p + -64); }

extern void func_003765C0();

void func_00377720(char *p) { func_003765C0(p + -304); }

extern void func_003761A0();

void func_00377750(char *p) { func_003761A0(p + -304); }

void func_00377760(char *p) { func_00376160(p + -304); }

void func_00377770(char *p) { func_00376180(p + -304); }

void func_00377780(char *p) { func_00376190(p + -304); }

void func_00377790(char *p) { func_00376170(p + -304); }

void func_00376840(void) {}
