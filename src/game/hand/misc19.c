/* Hand-matched functions whose callee prototypes conflict with misc3-18 (part 6). */

extern char D_01CAFF0C[];
extern unsigned char D_00569788[];
void func_00131700(float *, float *, float *);
void func_00104B80(float *, float *, float *);
void func_00105230(char *, char *, float *);
char *func_00207480(int, int, int, int);
void func_003A5C70(char *);
void func_003A5D20(char *, int);
unsigned char func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
char *func_004083D0(char *, float *);
void func_0034BA60(int, char *, signed char, int, int);
unsigned char func_0024E800(char *);
int func_003ACB40(char *);
void func_003AA8F0(char *);
void func_002EF940(char *, char *);
short func_0034B940(char *, char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define G (*(char **)D_01CAFF0C)
#define AIM(m, v, w, o) \
    UNIT(m); \
    v[0] = 0.0f; \
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f); \
    v[2] = 0.0f; \
    v[3] = 1.0f; \
    func_00131700(m, m, v); \
    w[0] = 0.0f; \
    w[1] = 150.0f; \
    w[2] = 100.0f; \
    w[3] = 1.0f; \
    func_00104B80(o, m, w); \
    o[0] += *(float *)(p + 0x50); \
    o[1] += *(float *)(p + 0x54); \
    o[2] += *(float *)(p + 0x58); \
    o[3] = 1.0f;
#define MARK() \
    UNIT(p + 0x4BA0); \
    func_00131700((float *)(p + 0x4BA0), (float *)(p + 0x4BA0), v); \
    func_00105230(p + 0x4BA0, p + 0x4BA0, o);

void func_003A7B80(char *p) {
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float v2[4] __attribute__((aligned(16)));
    float w2[4] __attribute__((aligned(16)));
    float o2[4] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    char *e;
    int i;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        AIM(m, v, w, o)
        MARK()
        e = func_00207480(3, 0x199, 0, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x4BA0;
            e[0x9A] = 0;
        }
        func_003A5C70(p);
    case 1:
        AIM(m, v, w, o)
        MARK()
        func_003A5D20(p, 0);
        if (func_0024E780(p + 0x4BF0, 0, 0) == 1) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            AIM(m2, v2, w2, o2)
            for (i = 0; i < (D_00569788 + *(unsigned char *)(p + 0x4E18))[*(unsigned char *)(p + 0x4E17) * 3]; i++) {
                e = func_004083D0(p, o2);
                if (e != 0) *(float *)(e + 0x434) = 8.0f * (float)i;
                func_0034BA60(0x1C, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            }
        }
        if (func_0024E800(p + 0x4BF0) == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            (*(unsigned char *)(p + 6))++;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) = *(float *)(p + 0x4E08) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        func_003A5D20(p, 1);
        break;
    }
    func_002EF940(G, p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
}

extern char D_01CAFF0C[];
extern float D_00569830[];
extern float D_00569890[];
extern float D_005698C0[];
void func_003AB5D0(char *);
unsigned char func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
float func_001324B0(char *, char *);
unsigned char func_0021D260(char *, int, int);
unsigned char func_0021D320(char *, int, unsigned char, int, int);
void func_003AA990(char *, int);
short func_0034B940(char *, char *);
void func_00131650(char *, char *);
float func_0034C160(float, float, float);
unsigned char func_0024E800(char *);
int func_003ACB40(char *);
void func_003AA8F0(char *);
void func_002EF940(char *, char *);

#define G (*(char **)D_01CAFF0C)
#define IDX (*(unsigned char *)(p + 0x4E18) + *(unsigned char *)(p + 0x4E17) * 3)

void func_003A9350(char *p) {
    char *pl = *(char **)(G + 0xC);
    unsigned char done = 0;
    float dy;
    float t;
    float tmp[4] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        *(unsigned char *)(p + 0x5162) = 0;
        func_003AB5D0(p);
        *(unsigned char *)(p + 0x5164) = 0;
    case 1:
        if (func_0024E780(p + 0x4BF0, 0, 0) == 8) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            *(unsigned char *)(p + 0x5164) = 1;
        }
        if (func_0024E780(p + 0x4BF0, 0, 0) == 9) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            (*(unsigned char *)(p + 6))++;
            *(unsigned char *)(p + 0x5164) = 0;
        } else if (*(unsigned char *)(p + 0x5162) == 0 && *(unsigned char *)(p + 0x5164) == 1) {
            if (func_001324B0(*(char **)(G + 0xC) + 0x50, p + 0x50) < D_00569830[IDX]) {
                *(float *)(p + 0x4D94) = 0.0f;
                t = *(float *)(*(char **)(G + 0xC) + 0x54) - *(float *)(p + 0x54);
                dy = t < 0.0f ? -t : t;
                if (dy < 50.0f) {
                    *(unsigned char *)(p + 0x5162) = func_0021D260(pl, 2, *(int *)(p + 0x2158));
                    if (*(unsigned char *)(p + 0x5162) != 0) {
                        if (func_0021D320(pl, 2, *(unsigned char *)(p + 0x5162), 0, 0x14) == 0) {
                            (*(unsigned char *)(p + 6))++;
                            *(unsigned char *)(p + 0x5164) = 0;
                        } else {
                            func_003AA990(p, 0x24);
                            *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
                        }
                    } else {
                        (*(unsigned char *)(p + 6))++;
                        *(unsigned char *)(p + 0x5164) = 0;
                    }
                }
                done = 1;
            }
        } else {
            done = 1;
        }
        if (done == 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x4DA0), "r"(p + 0x50), "r"(*(char **)(G + 0xC) + 0x50) : "memory");
            *(float *)(p + 0x4DA4) = 0.0f;
            func_00131650(p + 0x4DA0, p + 0x4DA0);
            *(float *)(p + 0x4DAC) = 1.0f;
            *(float *)(p + 0x4D94) = func_0034C160(*(float *)(p + 0x4D94), D_005698C0[IDX], *(float *)(p + 0x10) * D_00569890[IDX]);
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x4DA0), "f"(*(float *)(p + 0x4D94)) : "t0", "memory");
            *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
            *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
        }
        *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
        break;
    case 2:
        if (func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(G, p + 0x5080);
}

extern int D_005BD0C8;
extern float D_0058BD80[];
extern float D_0058BDA0[];
extern float D_0058BDB0[];
extern unsigned char D_01CAFF3C[];
extern char D_01CAFF0C[];
void func_00206730(char *);
unsigned char func_004F8E00(char *, char *, float, float);
void func_0028C200(char *, char *, char *, int, int, char *, int);
void func_0028C910(char *);
void func_0028C8E0(char *, int);
void func_0028C3A0(char *, int, int, char *);
void func_004F92D0(char *, int);
void func_004F9040(char *);
unsigned char func_004F9110(char *);
unsigned char func_004F90B0(char *);
void func_004F9180(char *);
void func_001AD140(char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define G (*(char **)D_01CAFF0C)

void func_004F82F0(char *p) {
    int i;
    int k;
    func_00206730(p + 0x138);
    func_00206730(p + 0x13C);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x600) = D_0058BD80[D_01CAFF3C[0]];
            VCOPY(p + 0x50, *(char **)(G + 0xC) + 0x50);
            *(float *)(p + 0x54) = 2.0f;
            UNIT(p + 0x5B0);
            VCOPY(p + 0x5E0, p + 0x50);
            func_004F9040(p);
            func_004F92D0(p, 0x21);
        }
        break;
    case 1:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x600) = 45.0f;
            *(float *)(p + 0x604) = 15.0f;
            *(unsigned char *)(p + 0x619) = 2;
            if (*(char **)(p + 0x138) != 0) func_001AD140(*(char **)(p + 0x138));
            if (func_004F9110(p) == 1) {
                func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BD0C8, p, 0);
                func_0028C910(p + 0x140);
                *(float *)(p + 0x224) = 1.0f;
                *(int *)(p + 0x218) = 0x40;
                func_0028C8E0(p + 0x140, 9);
                for (i = 0; i < 4; i++) {
                    *(unsigned char *)((char *)(i * 4) + (int)p + 0x360) = 1;
                    *(unsigned char *)((char *)(i * 4) + (int)p + 0x361) = 0;
                    *(short *)((char *)(i * 4) + (int)p + 0x362) = i;
                    *(unsigned char *)((char *)(i * 0x50) + (int)p + 0x370) = 2;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x380) = 0.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x384) = 0.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x388) = 0.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x38C) = 1.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x390) = D_0058BDA0[i];
                    func_0028C3A0(p + 0x140, i, -1, p + i * 0x40 + 0x4B0);
                    UNIT(p + i * 0x40 + 0x4B0);
                    VCOPY(p + i * 0x40 + 0x4E0, p + 0x50);
                    *(float *)((char *)(i * 0x40) + (int)p + 0x4E4) = *(float *)((char *)(i * 0x40) + (int)p + 0x4E4) + -180.0f;
                }
            }
        } else if (*(unsigned char *)(p + 0x619) <= 0 && *(float *)(p + 0x600) <= 8.0f) {
            if (func_004F90B0(p) == 1) {
                *(unsigned char *)(p + 0x619) = 1;
                func_004F92D0(p, 0x22);
            }
        }
        break;
    case 2:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(unsigned char *)(p + 0x619) = 0;
            func_004F9180(p);
        }
        break;
    case 3:
        if (*(char **)(p + 0x138) == 0 && *(char **)(p + 0x13C) == 0) {
            func_004F9180(p);
            func_001AD140(p);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x619) == 2 && func_004F8E00(p, p + 0x604, 1.0f, 0.0f) == 0) {
        for (k = 0; k < 4; k++) {
            *(float *)((char *)(k * 0x40) + (int)p + 0x4E4) = *(float *)((char *)(k * 0x40) + (int)p + 0x4E4) + D_0058BDB0[k];
        }
    }
}

extern int D_005BDC30;
extern char D_01CAFF0C[];
void func_00206730(char *);
unsigned char func_004D8510(char *, char *, float, float);
void func_0028C200(char *, char *, char *, int, int, char *, int);
void func_0028C910(char *);
void func_0028C8E0(char *, int);
void func_0028C3A0(char *, int, int, char *);
void func_0028C790(char *, int);
short func_00131D10(float, float);
short func_004D8420(char *, short, int);
void func_00105760(float *, float *, float);
void func_00104B80(float *, float *, float *);
void func_004D6C20(char *, int, int, short, float *, int);
void func_001AD140(char *);
void func_004D8560(char *, int);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define G (*(char **)D_01CAFF0C)

void func_004D75A0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    int i;
    int x;
    short d;
    float a;
    func_00206730(p + 0x138);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (func_004D8510(p, p + 0x500, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x500) = 32.0f;
            *(float *)(p + 0x504) = 3.0f;
            func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BDC30, p, 0);
            func_0028C910(p + 0x140);
            *(float *)(p + 0x224) = 1.0f;
            *(int *)(p + 0x218) = 0x30040;
            func_0028C8E0(p + 0x140, 0xB);
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    *(unsigned char *)(p + 0x360) = 5;
                } else {
                    *(unsigned char *)((char *)(i * 4) + (int)p + 0x360) = 1;
                }
                *(unsigned char *)((char *)(i * 4) + (int)p + 0x361) = 0;
                *(short *)((char *)(i * 4) + (int)p + 0x362) = i;
                *(unsigned char *)((char *)(i * 0x50) + (int)p + 0x370) = 2;
                *(float *)((char *)(i * 0x50) + (int)p + 0x380) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x384) = 150.0f + 112.5f * (float)i;
                *(float *)((char *)(i * 0x50) + (int)p + 0x388) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x38C) = 1.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x390) = 75.0f;
                func_0028C3A0(p + 0x140, i, -1, p + 0x4B0);
            }
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 1:
        x = *(int *)(p + 0x508);
        if (*(char **)(p + 0x1BC) == 0) break;
        if (*(int *)(*(char **)(p + 0x1BC) + 8) & 0x30000) {
            for (i = 0; i < 2; i++) func_0028C790(p + 0x140, i);
            *(float *)(p + 0x504) = 0.0f;
            break;
        }
        if (*(int *)(p + 0x510) < 0xC && !(*(float *)(p + 0x504) <= 0.0f) && func_004D8510(p, p + 0x504, 1.0f, 0.0f) == 1) {
            VCOPY(t, *(char **)(G + 0xC) + 0x50);
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(t), "r"(t), "r"(p + 0x50) : "memory");
            d = func_004D8420(p, (short)(func_00131D10(t[0], t[2]) - *(short *)(p + 0x90)), 0x800);
            a = 6.283185f * ((float)d / 65536.0f);
            UNIT(m);
            func_00105760(m, m, a);
            t[0] = 0.0f;
            t[1] = 0.0f;
            t[2] = 200.0f;
            t[3] = 0.0f;
            func_00104B80(t, m, t);
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(t), "r"(p + 0x50) : "memory");
            func_004D6C20(*(char **)(p + 0x130), x, 3, d, t, *(int *)(p + 0x510) + 1);
            *(unsigned char *)(p + 0x520) = 1;
        }
        if (!(*(float *)(p + 0x500) <= 0.0f) && func_004D8510(p, p + 0x500, 1.0f, 0.0f) == 1) {
            for (i = 0; i < 2; i++) func_0028C790(p + 0x140, i);
        }
        break;
    }
    if (*(char **)(p + 0x138) == 0) {
        if (*(char **)(p + 0x1BC) != 0) {
            for (i = 0; i < 2; i++) func_0028C790(p + 0x140, i);
        }
        func_001AD140(p);
    } else if (*(unsigned char *)(p + 0x520) == 0) {
        func_004D8560(p, 0x27);
    }
}
