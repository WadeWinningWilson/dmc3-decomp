void func_001AAD30(void);

void func_00100450(char *, void *, void *, int, int);

void func_002790E0(char *);

extern char D_005A6F50[];

extern char D_005A7A40[];

extern unsigned char D_005BE100;

extern unsigned char D_005BE104;

extern float D_005BE108;

void func_0013D6A0(char *);

void func_0027A570(char *);

void func_0031DCB0(char *);

void func_00212BF0(char *);

void func_00204AD0(void);

char *func_00231370(char *p) {
    void func_0013D240(void);
    void func_00204A70(void);
    char *q;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005A7A40;
    func_002790E0(p + 0x40);
    func_0027A570(p + 0x640);
    func_0031DCB0(p + 0xA80);
    func_00100450(p + 0x100C, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0x100);
    func_00212BF0(p + 0x2010);
    func_00100450(p + 0x2C30, (void *)func_00204AD0, (void *)func_00204A70, 0xC0, 0x10);
    q = p + 0x3830;
    *(float *)(p + 0x3838) = 0.3f;
    *(float *)(p + 0x383C) = 0.98f;
    *(float *)(p + 0x3840) = 0.95f;
    *(float *)(p + 0x3844) = 50.0f;
    *(float *)(p + 0x3850) = 0.0f;
    *(float *)(p + 0x3854) = -0.1f;
    *(float *)(p + 0x3858) = 0.0f;
    *(float *)(p + 0x385C) = 0.0f;
    *(int *)(p + 0x3834) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)(q + 0) = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(int *)(q + 0x50) = 0;
    *(int *)(q + 0x54) = 0;
    *(int *)(q + 0x58) = 0;
    *(int *)(q + 0x5C) = 0;
    *(int *)(q + 0x60) = 0;
    *(float *)(q + 0x68) = 1.0f;
    func_00100450(p + 0x38B0, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0x10);
    *(int *)(p + 0x38A0) = 1;
    *(float *)(p + 0x38A4) = 100.0f;
    *(int *)(p + 0x3F90) = 0;
    *(unsigned char *)(p + 0x3F98) = 0;
    *(int *)(p + 0x3F94) = 0x3C;
    *(int *)(p + 0x3FA0) = 0;
    *(int *)(p + 0x3FAC) = 0;
    *(int *)(p + 0x3FB0) = 0;
    *(unsigned char *)(p + 0x3FB4) = 0;
    *(int *)(p + 0xF10) = 0;
    *(int *)(p + 0xF14) = 0;
    *(int *)(p + 0xF18) = 0;
    *(int *)(p + 0x3F9C) = 2;
    D_005BE100 = 0x60;
    D_005BE104 = 2;
    D_005BE108 = 2.1f;
    return p;
}

typedef struct { float x, y, z, w; } V4f;

extern char D_00543B00[];

extern char D_00543BF0[];

void func_00233820(char *p) {
    int i = 0;
    char *s = D_00543BF0;
    char *d = p;
    char *t = D_00543B00;
    do {
        i++;
        *(char *)(p + 15600) = *(unsigned char *)(s + 0);
        *(char *)(p + 15601) = *(unsigned char *)(s + 1);
        *(short *)(p + 15602) = *(unsigned short *)(s + 2);
        s += 4;
        *(char *)(d + 15632) = 4;
        p += 4;
        *(V4f *)(d + 15648) = *(V4f *)(t + 0);
        *(V4f *)(d + 15664) = *(V4f *)(t + 16);
        *(float *)(d + 15680) = *(float *)(t + 32);
        t += 48;
        d += 80;
    } while (i < 5);
}

void func_00104B80(float *, char *, float *);

typedef struct { float x; float y; } P235;

extern P235 D_00543EB0[];

void func_00235810(char *p) {
    char *func_0027A710(char *);
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int i;
    int n;
    char *e;
    n = *(unsigned short *)(func_0027A710(p + 0x640) + 0xA8);
    for (i = 0; i < n; i++) {
        e = *(char **)(func_0027A710(p + 0x640) + 0xBC) + i * 0x380;
        *(float *)(e + 0x20) = 0.0f;
        *(float *)(e + 0x24) = D_00543EB0[i].y;
        *(float *)(e + 0x28) = 0.0f;
        *(float *)(e + 0x2C) = D_00543EB0[i].x;
        v[0] = 0.0f;
        v[1] = D_00543EB0[i].y;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_00104B80(w, *(char **)(*(char **)(p + *(unsigned char *)(e + 0xE) * 4 + 0xB10) + 0x104), v);
    }
}

float func_001F9C40(char *, int);

extern char D_01DF5D20[];

void func_001A4240(char *, int, int, float, float);

void func_00233920(char *p) {
    char *func_00279290(char *);
    char *func_00210240(int);
    float t = func_001F9C40(D_01DF5D20, 0x86);
    char *e = func_00210240(*(int *)(p + 0x200C));
    float s = *(float *)(e + 0xC) + *(float *)(e + 0x10);
    if (4680.0f < s && s < 5060.0f) {
        func_001A4240(func_00279290(p + 0x40), 0, 0, 0.00025f * t, 0.0f);
    } else {
        func_001A4240(func_00279290(p + 0x40), 0, 0, 0.0005f * t, 0.0f);
    }
}

void func_001A39C0(char *, int, int, int, int);

void func_002338E0(char *p) {
    char *func_00279290(char *);
    func_001A39C0(func_00279290(p + 0x40), 0, 0, 0, 0);
}

void func_00234630(char *p) {
    char *o;
    if (*(int *)(p + 0x3860) < 5) {
        o = 0;
    } else {
        o = *(char **)(p + 0x3830) + 0x200;
    }
    *(char *)(o + 0x78) = 0;
    if (*(int *)(p + 0x3860) < 4) {
        o = 0;
    } else {
        o = *(char **)(p + 0x3830) + 0x180;
    }
    *(char *)(o + 0x78) = 1;
}

extern int D_005BBEB0[1];

extern float D_005BBEB4[1];

void func_00131DF0(float *, char *, float *);

#define QCOPY233(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { float f[4]; } __attribute__((aligned(16))) Q233;

extern Q233 D_00543CB0[];

extern Q233 D_00543CC0[];

void func_00233B00(char *p) {
    char *func_00210240(char *);
    char *func_00231E00(char *, short);
    float m[16] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float r1[4] __attribute__((aligned(16)));
    float r2[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float off;
    char *e;
    char *g;
    int i;
    g = func_00210240(*(char **)(p + 0x200C));
    off = 0.0f;
    if (!(*(float *)(g + 0xC) + *(float *)(g + 0x10) <= 6000.0f)) off = -100.0f;
    e = func_00231E00(p, *(short *)(*(char **)(p + 0x200C) + 0x98));
    if (e == 0) return;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    c[0] = 128.0f;
    c[1] = 128.0f;
    c[2] = 128.0f;
    c[3] = 80.0f;
    for (i = 0; i < 1; i++) {
        QCOPY233(a, &D_00543CB0[i]);
        QCOPY233(b, &D_00543CC0[i]);
        a[2] += off;
        b[2] += off;
        func_00131DF0(r1, *(char **)(*(char **)((char *)(D_005BBEB0[i] * 4) + (int)e + 0xB10) + 0x104), a);
        func_00131DF0(r2, *(char **)(*(char **)((char *)(D_005BBEB0[i] * 4) + (int)e + 0xB10) + 0x104), b);
        *(float *)((char *)(i * 48) + (int)p + 0x39B0) = r1[0];
        *(float *)((char *)(i * 48) + (int)p + 0x39B4) = r1[1];
        *(float *)((char *)(i * 48) + (int)p + 0x39B8) = r1[2];
        *(float *)((char *)(i * 48) + (int)p + 0x39C0) = r2[0];
        *(float *)((char *)(i * 48) + (int)p + 0x39C4) = r2[1];
        *(float *)((char *)(i * 48) + (int)p + 0x39C8) = r2[2];
        *(float *)((char *)(i * 48) + (int)p + 0x39D0) = D_005BBEB4[i];
    }
}

extern int D_01CAF2B4[];

void func_001A1E70(char *, int);

void func_00235320(char *p) {
    char *func_00210240(char *);
    char *func_00279290(char *);
    void func_001A2000(char *, int);
    char *g = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(g + 0xC) + *(float *)(g + 0x10) < 100.0f) {
        switch (D_01CAF2B4[0]) {
        case 0:
            func_001A1E70(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 3);
            func_001A2000(func_00279290(p + 0x40), 5);
            break;
        case 1:
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A1E70(func_00279290(p + 0x40), 3);
            func_001A2000(func_00279290(p + 0x40), 5);
            break;
        case 2:
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 3);
            func_001A1E70(func_00279290(p + 0x40), 5);
            break;
        }
    }
}

void func_00235480(char *p) {
    char *func_00210240(char *);
    char *func_00279290(char *);
    void func_001A2000(char *, int);
    char *g = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(g + 0xC) + *(float *)(g + 0x10) < 100.0f) {
        switch (D_01CAF2B4[0]) {
        case 0:
            func_001A1E70(func_00279290(p + 0x40), 0);
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 2);
            break;
        case 1:
            func_001A2000(func_00279290(p + 0x40), 0);
            func_001A1E70(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 2);
            break;
        case 2:
            func_001A2000(func_00279290(p + 0x40), 0);
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A1E70(func_00279290(p + 0x40), 2);
            break;
        }
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *slot5(char *p) {
    char *o;
    if (*(int *)(p + 0x3860) < 6) {
        o = 0;
    } else {
        o = *(char **)(p + 0x3830) + 0x280;
    }
    return o;
}

void func_002340B0(char *p) {
    char *func_00210240(char *);
    char *func_00231CC0(char *, int, int);
    char *e;
    char *o;
    char *v = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(v + 0xC) + *(float *)(v + 0x10) < 600.0f) {
        e = func_00231CC0(p, 0x11, 6);
        if (e != 0) {
            float x, y, z;
            z = *(float *)(*(char **)(e + 0x104) + 0x38);
            y = *(float *)(*(char **)(e + 0x104) + 0x34);
            x = *(float *)(*(char **)(e + 0x104) + 0x30);
            o = slot5(p);
            *(float *)(o + 0x20) = x;
            *(float *)(o + 0x24) = y;
            *(float *)(o + 0x28) = z;
            *(float *)(o + 0x2C) = 1.0f;
            QCOPY(o, o + 0x20);
            QCOPY(o + 0x10, o + 0x20);
        }
    } else {
        *(unsigned char *)(slot5(p) + 0x78) = 0;
    }
}

void func_00234200(char *p) {
    char *func_00210240(char *);
    char *func_00231CC0(char *, int, int);
    char *e;
    char *o;
    char *v = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(v + 0xC) + *(float *)(v + 0x10) < 600.0f) {
        e = func_00231CC0(p, 0x11, 0xA);
        if (e != 0) {
            float x, y, z;
            z = *(float *)(*(char **)(e + 0x104) + 0x38);
            y = *(float *)(*(char **)(e + 0x104) + 0x34);
            x = *(float *)(*(char **)(e + 0x104) + 0x30);
            o = slot5(p);
            *(float *)(o + 0x20) = x;
            *(float *)(o + 0x24) = y;
            *(float *)(o + 0x28) = z;
            *(float *)(o + 0x2C) = 1.0f;
            QCOPY(o, o + 0x20);
            QCOPY(o + 0x10, o + 0x20);
        }
    } else {
        *(unsigned char *)(slot5(p) + 0x78) = 0;
    }
}

void func_002342F0(char *p) {
    char *func_00210240(char *);
    char *func_00231CC0(char *, int, int);
    char *e;
    char *o;
    char *v = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(v + 0xC) + *(float *)(v + 0x10) < 600.0f) {
        e = func_00231CC0(p, 0x11, 9);
        if (e != 0) {
            float x, y, z;
            z = *(float *)(*(char **)(e + 0x104) + 0x38);
            y = *(float *)(*(char **)(e + 0x104) + 0x34);
            x = *(float *)(*(char **)(e + 0x104) + 0x30);
            o = slot5(p);
            *(float *)(o + 0x20) = x;
            *(float *)(o + 0x24) = y;
            *(float *)(o + 0x28) = z;
            *(float *)(o + 0x2C) = 1.0f;
            QCOPY(o, o + 0x20);
            QCOPY(o + 0x10, o + 0x20);
        }
    } else {
        *(unsigned char *)(slot5(p) + 0x78) = 0;
    }
}

void func_00233DF0(char *p) {
    char *func_00210240(char *);
    char *func_00279290(char *);
    void func_001A2000(char *, int);
    char *func_00231CC0(char *, int, int);
    char *e;
    char *o;
    char *v = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(v + 0xC) + *(float *)(v + 0x10) < 600.0f) {
        e = func_00231CC0(p, 0x11, 8);
        if (e != 0) {
            float x, y, z;
            z = *(float *)(*(char **)(e + 0x104) + 0x38);
            y = *(float *)(*(char **)(e + 0x104) + 0x34);
            x = *(float *)(*(char **)(e + 0x104) + 0x30);
            o = slot5(p);
            *(float *)(o + 0x20) = x;
            *(float *)(o + 0x24) = y;
            *(float *)(o + 0x28) = z;
            *(float *)(o + 0x2C) = 1.0f;
            QCOPY(o, o + 0x20);
            QCOPY(o + 0x10, o + 0x20);
        }
        func_001A2000(func_00279290(p + 0x40), 5);
    } else {
        *(unsigned char *)(slot5(p) + 0x78) = 0;
    }
}

void func_00233A50(char *p) {
    char *func_00210240(char *);
    char *func_00279290(char *);
    float s = func_001F9C40(D_01DF5D20, 0x86);
    func_00210240(*(char **)(p + 0x200C));
    func_001A4240(func_00279290(p + 0x40), 0, 0, 0.0005f * s, 0.0f);
}

void func_00231EB0();

void func_00231C40(char *p0) {
    unsigned char t0;
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    t0 = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
    *(int *)(p0 + 12) = 135;
    t1 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 812) = 0;
    t2 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 1004) = 0;
    t3 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 1196) = 0;
    t4 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 1388) = 0;
    func_00231EB0();
    t5 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 812) = 1;
    t6 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 1004) = 1;
    t7 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 1196) = 1;
    t8 = *(char **)(p0 + 8204);
    *(char *)(*(char **)(p0 + 8204) + 1388) = 1;
}

void func_001A2180();

int func_001A3370();

void func_00233D10(int p0) {
    int func_00279290();
    int t0;
    int t1;
    int t2;
    t0 = func_00279290((p0 + 64));
    t1 = func_001A3370(t0, 0);
    t2 = func_00279290((p0 + 64));
    func_001A2180(t2, 53, 1);
}

void func_00233D60(int p0) {
    int func_00279290();
    int t0;
    t0 = func_00279290((p0 + 64));
    func_001A2180(t0, 53, 1);
}

void func_00233A10(char *p) {
    char *func_00279290(char *);
    func_001A39C0(func_00279290(p + 0x40), 0, 0, 0, 0);
}

void func_00233F60(char *p) {
    char *func_00210240(char *);
    char *func_00231CC0(char *, int, int);
    char *e;
    char *o;
    char *v = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(v + 0xC) + *(float *)(v + 0x10) < 600.0f) {
        e = func_00231CC0(p, 0x11, 7);
        if (e != 0) {
            float x, y, z;
            z = *(float *)(*(char **)(e + 0x104) + 0x38);
            y = *(float *)(*(char **)(e + 0x104) + 0x34);
            x = *(float *)(*(char **)(e + 0x104) + 0x30);
            o = slot5(p);
            *(float *)(o + 0x20) = x;
            *(float *)(o + 0x24) = y;
            *(float *)(o + 0x28) = z;
            *(float *)(o + 0x2C) = 1.0f;
            QCOPY(o, o + 0x20);
            QCOPY(o + 0x10, o + 0x20);
        }
    } else {
        *(unsigned char *)(slot5(p) + 0x78) = 0;
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_00212CB0();

void func_002791E0();

void func_0027A660();

void func_0031DD00();

char *func_00235920(char *p, short flag) {
    void func_0013D240();
    void func_00204A70();
    if (p != 0) {
        *(char * *)(p) = D_005A7A40;
        func_001003E0(p + 14512, (void *)func_0013D240, 16, 16);
        if (p + 14384 != 0) {
            func_0013D240(p + 14436, -1);
        }
        func_001003E0(p + 11312, (void *)func_00204A70, 192, 16);
        func_00212CB0(p + 8208, -1);
        func_001003E0(p + 4108, (void *)func_0013D240, 16, 256);
        func_0031DD00(p + 2688, -1);
        func_0027A660(p + 1600, -1);
        func_002791E0(p + 64, -1);
        if (p != 0) {
            *(char * *)(p) = D_005A6F50;
            func_0013D240(p + 36, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00100580();

int func_00231560(p0, p1) int p0; int p1; {
    void func_0013D240();
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_0013D240((v0 + 52), -1);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

int func_002E2BD0();

int func_00231C10(p0) char *p0; {
    int v0;
    if (*(int *)(*(char **)(p0 + 8204) + 56) != 0) {
        v0 = func_002E2BD0((p0 + 14384));
    }
    return v0;
}

void func_0022C4E0();

void func_00233AC0(p0) char *p0; {
    *(int *)(p0 + 14768) = 0;
    *(int *)(p0 + 14772) = 0;
    *(int *)(p0 + 14776) = 0;
    *(int *)(p0 + 14784) = 0;
    *(int *)(p0 + 14788) = 0;
    *(int *)(p0 + 14792) = 0;
    *(int *)(p0 + 14800) = 0x41700000;
    *(char **)(p0 + 15536) = (p0 + 14768);
    func_0022C4E0((p0 + 11312), (p0 + 15536), 1);
}

int func_00233D90(p0) int p0; {
    int func_00231CC0();
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    v1 = func_00231CC0(p0, 17, 8);
    if (v1 != 0) {
        v2 = 1;
        if ((*(int *)(v0 + 14432) < 6)) {
            v3 = 0;
        } else {
            v3 = (char *)(*(int *)(v0 + 14384) + 640);
        }
        *(char *)(v3 + 120) = v2;
    }
    return v1;
}

int func_00233F00(p0) int p0; {
    int func_00231CC0();
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    v1 = func_00231CC0(p0, 17, 7);
    if (v1 != 0) {
        v2 = 1;
        if ((*(int *)(v0 + 14432) < 6)) {
            v3 = 0;
        } else {
            v3 = (char *)(*(int *)(v0 + 14384) + 640);
        }
        *(char *)(v3 + 120) = v2;
    }
    return v1;
}

int func_00234050(p0) int p0; {
    int func_00231CC0();
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    v1 = func_00231CC0(p0, 17, 6);
    if (v1 != 0) {
        v2 = 1;
        if ((*(int *)(v0 + 14432) < 6)) {
            v3 = 0;
        } else {
            v3 = (char *)(*(int *)(v0 + 14384) + 640);
        }
        *(char *)(v3 + 120) = v2;
    }
    return v1;
}

int func_002341A0(p0) int p0; {
    int func_00231CC0();
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    v1 = func_00231CC0(p0, 17, 10);
    if (v1 != 0) {
        v2 = 1;
        if ((*(int *)(v0 + 14432) < 6)) {
            v3 = 0;
        } else {
            v3 = (char *)(*(int *)(v0 + 14384) + 640);
        }
        *(char *)(v3 + 120) = v2;
    }
    return v1;
}

extern char D_005BE10C;

extern char D_005BE10D;

extern short D_005BE10E;

extern char D_01DF8A90[];

extern char D_01DF8AA0[];

extern char D_01DF8AA4[];

extern char D_01DF8AA8[];

extern char D_01DF8AAC[];

extern char D_01DF8AB0[];

extern char D_01DF8AB4[];

extern char D_01DF8AB8[];

extern char D_01DF8ABC[];

extern char D_01DF8AC0[];

int func_002E3A20();

int func_00235250(p0) int p0; {
    int func_00231E00();
    int tmp0;
    int tmp1;
    *(int *)D_01DF8AA0 = 0;
    D_005BE10C = 8;
    *(int *)D_01DF8AA4 = 0;
    D_005BE10D = 3;
    *(int *)D_01DF8AA8 = 0x43960000;
    *(int *)D_01DF8AAC = 0x3f800000;
    D_005BE10E = 0;
    *(int *)D_01DF8AB4 = 0xc2480000;
    *(int *)D_01DF8AB8 = 0xc3160000;
    *(int *)D_01DF8ABC = 0x3f800000;
    *(int *)D_01DF8AC0 = 0x43480000;
    *(int *)D_01DF8AB0 = 0;
    tmp0 = func_00231E00(p0, 5);
    tmp1 = func_002E3A20((p0 + 14384), (tmp0 + 2832), &D_005BE10C, D_01DF8A90, 1);
    return tmp1;
}

extern void func_002355E0();

void func_002355D0(void) { func_002355E0(); }

void func_00233800(void) {}

void func_00233810(void) {}

void func_002338D0(void) {}

void func_00233CF0(void) {}

void func_00233D00(void) {}

void func_00234CA0(void) {}

void func_00235310(void) {}

void func_00235470(void) {}

int func_002343E0(int p0, int p1, int p2, int p3) {
    int func_001A2000();
    int func_00279290();
    char *v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00279290((v0 + 64));
    v1 = func_001A2000(tmp0, 5);
    v2 = 7;
    if ((*(int *)(v0 + 14432) < 7)) {
        v3 = 0;
    } else {
        v3 = (char *)(*(int *)(v0 + 14384) + 768);
    }
    *(int *)(v3 + 124) = v2;
    return v1;
}

int func_00234440(int p0, int p1, int p2, int p3) {
    int func_001A2000();
    int func_00279290();
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int v6;
    char *v7;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00279290((v0 + 64));
    v1 = func_001A2000(tmp0, 3);
    v2 = 5;
    if ((*(int *)(v0 + 14432) < 5)) {
        v3 = 0;
    } else {
        v3 = (char *)(*(int *)(v0 + 14384) + 512);
    }
    *(int *)(v3 + 124) = v2;
    v4 = 6;
    if ((*(int *)(v0 + 14432) < 6)) {
        v5 = 0;
    } else {
        v5 = (char *)(*(int *)(v0 + 14384) + 640);
    }
    *(int *)(v5 + 124) = v4;
    v6 = 7;
    if ((*(int *)(v0 + 14432) < 7)) {
        v7 = 0;
    } else {
        v7 = (char *)(*(int *)(v0 + 14384) + 768);
    }
    *(int *)(v7 + 124) = v6;
    return v1;
}

int func_002344E0(int p0, int p1, int p2, int p3) {
    int func_001A2000();
    int func_00279290();
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int v6;
    char *v7;
    int v8;
    char *v9;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00279290((v0 + 64));
    v1 = func_001A2000(tmp0, 3);
    v2 = 4;
    if ((*(int *)(v0 + 14432) < 4)) {
        v3 = 0;
    } else {
        v3 = (char *)(*(int *)(v0 + 14384) + 384);
    }
    *(int *)(v3 + 124) = v2;
    v6 = 5;
    if ((*(int *)(v0 + 14432) < 5)) {
        v7 = 0;
    } else {
        v7 = (char *)(*(int *)(v0 + 14384) + 512);
    }
    *(int *)(v7 + 124) = v6;
    v8 = 6;
    if ((*(int *)(v0 + 14432) < 6)) {
        v9 = 0;
    } else {
        v9 = (char *)(*(int *)(v0 + 14384) + 640);
    }
    *(int *)(v9 + 124) = v8;
    v4 = 7;
    if ((*(int *)(v0 + 14432) < 7)) {
        v5 = 0;
    } else {
        v5 = (char *)(*(int *)(v0 + 14384) + 768);
    }
    *(int *)(v5 + 124) = v4;
    return v1;
}

int func_002345B0(int p0, int p1, int p2, int p3) {
    int func_001A2000();
    int func_00279290();
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00279290((v0 + 64));
    v1 = func_001A2000(tmp0, 4);
    v2 = 6;
    if ((*(int *)(v0 + 14432) < 6)) {
        v3 = 0;
    } else {
        v3 = (char *)(*(int *)(v0 + 14384) + 640);
    }
    *(int *)(v3 + 124) = v2;
    v4 = 7;
    if ((*(int *)(v0 + 14432) < 7)) {
        v5 = 0;
    } else {
        v5 = (char *)(*(int *)(v0 + 14384) + 768);
    }
    *(int *)(v5 + 124) = v4;
    return v1;
}

int func_00235770(int p0, int p1, int p2, int p3) {
    char *func_0027A710();
    int v1;
    int v5;
    char *v4;
    char *v0;
    int v2;
    char *v3;
    v0 = (char *)p0;
    v3 = func_0027A710((v0 + 1600));
    v1 = *(unsigned short *)(v3 + 168);
    v2 = 0;
    if ((0 < v1)) {
        v5 = 0;
        do {
            v3 = func_0027A710((v0 + 1600));
            v4 = *(char **)(v3 + 188);
            v2 = (v2 + 1);
            v4 = (v4 + v5);
            *(int *)(v4 + 32) = 0;
            v5 = (v5 + 896);
            *(int *)(v4 + 36) = 0x44fa0000;
            *(int *)(v4 + 40) = 0;
            *(int *)(v4 + 44) = 0x447a0000;
        } while ((v2 < v1));
    }
    *(int *)(v0 + 16312) = 0;
    *(int *)(v0 + 16316) = 0;
    *(int *)(v0 + 16320) = 0;
    return (int)v3;
}
