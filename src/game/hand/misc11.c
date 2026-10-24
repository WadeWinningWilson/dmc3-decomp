#include "game/mt_rand.h"
/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-10. */
void func_00131760(float *, float *, float *);
void func_00105230(float *, float *, float *);
char *func_0027A710(char *);
void func_00105300(char *, float *);
void func_00105760(char *, char *, float);
unsigned char func_004FDD50(char *, char *, float, float);
void func_00104B80(float *, char *, float *);
void func_002A0090(char *);
void func_001318E0(float *, float *, float *);
char *func_00207470(int, int, float *);

#define M47D(p, k) ((float *)((p) + (k) * 0xA0 + 0xF0))

void func_0047D2A0(char *p, unsigned char k) {
    float t[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    int i;
    t[0] = (&((float *)(p + 0xF0))[k * 40])[16];
    t[1] = (&((float *)(p + 0xF0))[k * 40])[17];
    t[2] = (&((float *)(p + 0xF0))[k * 40])[18];
    t[3] = 1.0f;
    for (i = 0; i < 3; i++) {
        a[i] = (&((float *)(p + 0xF0))[k * 40])[20 + i];
        if (!(a[i] <= 180.0f)) a[i] -= 360.0f;
        if (a[i] < -180.0f) a[i] += 360.0f;
    }
    r[0] = 6.283185f * (a[0] / 360.0f);
    r[1] = 6.283185f * (a[1] / 360.0f);
    r[2] = 6.283185f * (a[2] / 360.0f);
    r[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(M47D(p, k)) : "memory");
    func_00131760(M47D(p, k), M47D(p, k), r);
    func_00105230(M47D(p, k), M47D(p, k), t);
    func_00105300(*(char **)(func_0027A710(p + 0xA40) + 0x108) + (k + 1) * 64, M47D(p, k));
}

void func_004FD680(char *p) {
    float v[4] __attribute__((aligned(16))) = { 0 };
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0xB70) : "memory");
    func_00105760(p + 0xB70, p + 0xB70, *(float *)(p + 0x2B0));
    if (*(unsigned char *)(p + 0x2EE) != 0 && *(float *)(p + 0x2C4) != 0.0f) {
        if (*(unsigned char *)(p + 0x2EC) != 0) v[0] = -1.0f * *(float *)(p + 0x2C4);
        else v[0] = *(float *)(p + 0x2C4);
        if (func_004FDD50(p, p + 0x2E4, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x2E4) = 2.0f * *(float *)(p + 0x10);
            *(unsigned char *)(p + 0x2EC) ^= 1;
            if (*(unsigned char *)(p + 0x2EE) == 2 && func_004FDD50(p, p + 0x2DC, 1.0f, 0.0f) == 1) {
                *(float *)(p + 0x2DC) = *(float *)(p + 0x2D4);
                func_004FDD50(p, p + 0x2C4, *(float *)(p + 0x2CC), 0.0f);
            }
        }
    }
    if (*(unsigned char *)(p + 0x2EF) != 0 && *(float *)(p + 0x2C8) != 0.0f) {
        if (*(unsigned char *)(p + 0x2ED) != 0) v[1] = -1.0f * *(float *)(p + 0x2C8);
        else v[1] = *(float *)(p + 0x2C8);
        if (func_004FDD50(p, p + 0x2E8, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x2E8) = *(float *)(p + 0x10);
            *(unsigned char *)(p + 0x2ED) ^= 1;
            if (*(unsigned char *)(p + 0x2EF) == 2 && func_004FDD50(p, p + 0x2E0, 1.0f, 0.0f) == 1) {
                *(float *)(p + 0x2E0) = *(float *)(p + 0x2D8);
                func_004FDD50(p, p + 0x2C8, *(float *)(p + 0x2D0), 0.0f);
            }
        }
    }
    if (*(unsigned char *)(p + 0x2EE) != 0 || *(unsigned char *)(p + 0x2EF) != 0) {
        func_00104B80(v, p + 0xB70, v);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
        func_00105230((float *)(p + 0xB70), (float *)(p + 0xB70), v);
    } else {
        func_00105230((float *)(p + 0xB70), (float *)(p + 0xB70), (float *)(p + 0x50));
    }
}

typedef struct { float v[7][4]; } A29F __attribute__((aligned(16)));

typedef struct { int v[7]; } I29F __attribute__((aligned(16)));

extern A29F D_00549EF0;
extern A29F D_00549F60;
extern I29F D_00549FD0;
void func_00131650(float *, float *);
float func_00132470(float *, char *);
float func_0034C160(float, float, float);
float func_0011DBE0(float, float);
void func_0028C5C0(char *, int, float);
extern int D_005BE09C;
extern char D_01DFABA0[];
void func_00206730(char *);
void func_00330BD0(char *, int, char *, int, int);
extern char D_01CAFF0C[];
extern float D_00577A80[];
extern float D_00577AA8[];
extern float D_00577AA4[];
void func_00332AE0(char *, float *, float, float);

void func_0029FD40(char *p) {
    A29F r = D_00549EF0;
    A29F t = D_00549F60;
    I29F k = D_00549FD0;
    char *s[7] = { p + 0x1AD8, p + 0x1AD8, p + 0x1AD8, p + 0x1AD8, p + 0x1BD0, p + 0x1BE4, p + 0x1BF8 };
    float m[16] __attribute__((aligned(16)));
    int i;
    char *o;
    func_002A0090(p);
    for (i = 0; i < 7; i++) {
    }
    for (i = 0; i <= 1; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_001318E0(m, m, r.v[i]);
        func_00105230(m, m, t.v[i]);
        ((char **)(p + 0xA9A8))[i] = func_00207470(2, 0x15, m);
        if ((o = ((char **)(p + 0xA9A8))[i]) != 0) {
            *(int *)(o + 0x90) = *(int *)(((char **)s[i])[k.v[i]] + 0x104);
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
    for (i = 4; i <= 6; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_001318E0(m, m, r.v[i]);
        func_00105230(m, m, t.v[i]);
        ((char **)(p + 0xA9A8))[i] = func_00207470(2, 0x17, m);
        if ((o = ((char **)(p + 0xA9A8))[i]) != 0) {
            *(int *)(o + 0x90) = *(int *)(((char **)s[i])[k.v[i]] + 0x104);
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
}

int func_003DC100(char *p, float *t) {
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float u;
    if (func_00132470(t, p + 0x50) < 50.0f) {
        *(float *)(p + 0xEDC) = 0.0f;
        return 1;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xEB0), "r"(p + 0x50), "r"(t) : "memory");
    func_00131650((float *)(p + 0xEB0), (float *)(p + 0xEB0));
    *(float *)(p + 0xEBC) = 1.0f;
    s = func_0034C160(*(float *)(p + 0xEDC), 5.0f, 0.1f * *(float *)(p + 0x10));
    *(float *)(p + 0xEDC) = s;
    u = s > 1.0f ? s * s : s;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xEB0), "f"(u) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0];
    *(float *)(p + 0x58) += tmp[2];
    *(float *)(p + 0x5C) = 1.0f;
    return 0;
}

typedef struct { float v[4]; } V48C __attribute__((aligned(16)));

extern V48C D_00586DC0;
void func_00133890(char *, char *, V48C *);
extern float D_00568110[][6];
void func_0028C8E0(char *, int);
void func_0028C910(char *);
char *func_0028C3A0(char *, int, int, char *);
float func_001324E0(float *);
short func_00131D10(float, float);
char *func_00207480(int, int, char *, int);
void func_0034BA60(int, char *, int, int, int);
void func_003305E0(char *, int, int, float *, int, int, int);
void func_0040FAD0(char *, int);
void func_0040FAF0(char *, int);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
int func_0024E800(char *);
void func_00277DE0(char *, int *, char *, int);
void func_00277E70(char *);
void func_00277ED0(char *);
void func_00278060(char *, int);
void func_002D2270(char *, int);
char *func_002D6540(char *);
void func_002D6C50(char *);
short func_002D6DB0(void);
void func_0031E570(char *);
int func_0034B800(char *, char *, short, short, float);
void func_0034B8C0(char *, char *, int);
extern short D_00565624[];
extern short D_00565626[];
extern float D_00565628[];
extern int D_00565700[];
extern signed char D_005BCD60[];
extern short D_005BCD90[4];
extern float D_005BCD98;
extern float D_005BE1C4;
extern int D_01CAFF14[];
void func_001ACCD0(int);
void func_00376B40(char *, int);
void func_00376B80(char *, int);
void func_00376E40(char *);
int func_0041D6B0(float, char *);
float func_0041DB20(float *);
void func_0041DBA0(char *, char *);
extern float D_00562A80[];
extern float D_00562A90[];
extern float D_00562AA0[];
extern int D_005BE1AC;
void func_001AD140(char *);
extern float D_00567C10[][3];
extern float D_00567C70[][3];

void func_004B6500(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    V48C up;
    char *o;
    int f;
    func_00206730(p + 0x460);
    if ((*(float *)(p + 0x468) -= *(float *)(p + 0x10)) < 0.0f) {
        *(unsigned char *)(p + 4) = 3;
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(tmp) : "memory");
    if ((unsigned char)*(unsigned char *)(p + 0x46C) == 0) {
        o = *(char **)(*(char **)&D_005BE09C + 0x23C);
        if (o != 0 && func_00132470((float *)(o + 0x70), p + 0x50) < 500.0f) {
            func_00330BD0(D_01DFABA0, 0x3B, p + 0x50, 0x22, 0);
            *(unsigned char *)(p + 0x46C) = 1;
        }
    }
    if (*(char **)(p + 0x20C) != 0 && (f = *(int *)(*(char **)(p + 0x20C) + 8)) != 0) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        if (f & 0x11040) func_00207470(3, 0x1B3, (float *)(p + 0x150));
        else func_00207470(3, 0x115, (float *)(p + 0x150));
        if (f & 0x30000) func_00330BD0(D_01DFABA0, 0x3D, p + 0x50, 0x22, 0);
        return;
    }
    if (*(char **)(p + 0x210) != 0 && ((f = *(int *)(*(char **)(p + 0x210) + 8)) & 3)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        func_00207470(3, 0x115, (float *)(p + 0x150));
        if (f & 2) func_00330BD0(D_01DFABA0, 0x2F, p + 0x50, 0x22, 0);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_00577A80, D_00577AA8[0], D_00577AA4[0]);
        return;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    up = D_00586DC0;
    func_00133890(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}

void func_005055F0(char *p) {
    float d[4] __attribute__((aligned(16)));
    char *o;
    char *q;
    float l;
    float k;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(float *)(p + 0x218) = *(float *)(p + 0x218) - *(float *)(p + 0x10);
    if (*(unsigned char *)(p + 0x500) == 0 && *(float *)(p + 0x218) < 0.0f) {
        *(int *)(p + 0x308) = 0xCC0;
        func_0028C8E0(p + 0x230, 3);
        *(int *)(p + 0x308) = 0x20040;
        *(unsigned char *)(p + 0x233) = 0;
        func_0028C910(p + 0x230);
        if ((q = func_0028C3A0(p + 0x230, 0, -1, p + 0x1B0)) != 0) q[2] = 1;
        *(unsigned char *)(p + 0x500) = 1;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(o + 0x50), "r"(p + 0x1E0) : "memory");
    l = func_001324E0(d);
    if (!(l <= 0.0f)) {
        d[0] = d[0] / l;
        d[1] = d[1] / l;
        d[2] = d[2] / l;
    }
    k = D_00568110[*(int *)(p + 0x4F8)][*(int *)(p + 0x4FC)];
    *(float *)(p + 0x1E0) = *(float *)(p + 0x1E0) + *(float *)(p + 0x10) * (*(float *)(p + 0x1D0) * k);
    *(float *)(p + 0x1E4) = *(float *)(p + 0x1E4) - k * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) = *(float *)(p + 0x1E8) + *(float *)(p + 0x10) * (*(float *)(p + 0x1D8) * k);
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x1D0), *(float *)(p + 0x1D8));
    if (*(float *)(p + 0x1E4) < 0.0f) *(float *)(p + 0x1E4) = 0.0f;
    if ((*(float *)(p + 0x194) -= *(float *)(p + 0x10)) < 0.0f) {
        func_00207480(3, 0x33C, p + 0x1B0, 0x10);
        *(float *)(p + 0x470) = 100.0f;
        *(float *)(p + 0x218) = 90.0f;
        (*(unsigned char *)(p + 4))++;
    } else if (*(int *)(p + 0x19C) == 0 && (*(float *)(p + 0x21C) -= *(float *)(p + 0x10)) < 0.0f) {
        *(float *)(p + 0x21C) = *(float *)(p + 0x220);
        func_0034BA60(0x29, p + 0x1E0, 0x29, 0, 1);
    }
}

static inline void setf40F(short k) {
    char *g = *(char **)((*(char **)D_01CAFF0C) + 0x18);
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

int func_0040FB80(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    int f;
    for (i = 0; i < *(short *)(p + 0xE2); i++) {
        if (*(unsigned char *)*(char **)((char *)(i * 4) + (int)p + 0x108) != 1) continue;
        if (*(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 1) != 1) continue;
        switch (*(unsigned short *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 2)) {
        case 0:
        case 1:
        default:
            continue;
        case 2:
        case 3:
            break;
        }
        f = 0;
        if (*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x51C) != 0) f = *(int *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x51C) + 8);
        if (!(f & 1)) continue;
        *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 1) = 0;
        (*(short *)(p + 0xE4))--;
        func_0040FAD0(p, i);
        func_0040FAF0(p, i);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x450) : "memory");
        if (*(unsigned short *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 2) == 2) func_003305E0(D_01DFABA0, 8, 0x32, v, 0x24, 0, 0);
        else func_003305E0(D_01DFABA0, 8, 0x35, v, 0x24, 0, 0);
        if (*(int *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x498) != 0 || *(unsigned short *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 2) == 3) {
            if (*(short *)(p + 0xDE) != -1) setf40F(*(short *)(p + 0xDE));
            return 1;
        }
        return 0;
    }
    return 0;
}

void func_002D3DE0(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = D_005BE1C4;
    case 1:
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x38DC) = D_005BCD98;
        }
        break;
    case 2:
        *(short *)(p + 0x37D8) = func_002D6DB0();
        *(short *)(p + 0x37D8) += 0x5B0;
        func_0034B8C0(p + 0x38FC, p + 0x37D8, *(float *)(p + 0x10) * D_005BCD90[*(unsigned char *)(p + 0x38D0)]);
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_00565624[0] + *(short *)(p + 0x38FC), D_00565626[0], D_00565628[0]) == 1) func_002D2270(p, 0xD);
            o = func_002D6540(p);
            if (o != 0 && (unsigned char)func_0034B800(o + 0x50, p + 0x50, D_00565624[0] + *(short *)(p + 0x38FC), D_00565626[0], D_00565628[0]) == 1) func_002D2270(p, 0xD);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(char **)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x6C8) + 0x104);
            *(signed char *)(o + 0x9A) = 3;
        }
    }
    func_002D6C50(p);
}

#define CP4AD(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SB4AD(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(b), "r"(a) : "memory")

void func_004AD970(char *p) {
    float d[4] __attribute__((aligned(16)));
    float l;
    *(int *)(p + 0x8FC) |= 0x04000000;
    *(int *)(p + 0x8FC) |= 0x02000000;
    *(int *)(p + 0x8FC) |= 0x800000;
    *(int *)(p + 0x8FC) |= 0x20000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        D_005BE1AC = 4;
        func_00207480(1, 0x26D, (char *)((int)p + 0x8A0), 0x10);
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_00376E40(p);
        *(float *)(p + 0x95C) -= 2.0f;
        if (*(float *)(p + 0x95C) < 0.0f) *(float *)(p + 0x95C) = 0.0f;
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_0034BA60(0x48, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            func_001ACCD0(D_005BE09C);
            *(float *)(p + 0x95C) = 0.0f;
            *(unsigned int *)(p + 0x8FC) |= 0x80000000;
            CP4AD(p + 0x50, D_00562AA0);
            *(float *)(p + 0x8F8) = 120.0f;
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        *(int *)(p + 0x8FC) |= 0x40000000;
        *(unsigned int *)(p + 0x8FC) |= 0x80000000;
        if ((unsigned char)func_0041D6B0(*(float *)(p + 0x10), p + 0x8F8) == 1) {
            l = func_0041DB20(D_00562A80);
            if (l < func_0041DB20(D_00562A90)) {
                D_005BE1AC = 1;
                *(int *)(p + 0x8FC) &= ~0x8000;
                CP4AD(p + 0x50, D_00562A90);
                SB4AD(d, D_00562A90, D_00562A80);
            } else {
                D_005BE1AC = 2;
                *(int *)(p + 0x8FC) |= 0x8000;
                CP4AD(p + 0x50, D_00562A80);
                SB4AD(d, D_00562A80, D_00562A90);
            }
            *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
            *(short *)(p + 0x96E) = *(short *)(p + 0x90);
            *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
            func_00376B40(p, 9);
        }
        break;
    }
}

#define QCPY458(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *pl458(char *p) {
    return ((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)];
}

void func_00458CB0(char *p) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float t;
    float u;
    int v;
    char *q;
    char *e;
    char *o;
    q = *(char **)(p + 0x214);
    v = *(int *)(p + 0x224);
    e = ((char **)(q + 0x69F8))[*(int *)(p + 0x19C)];
    if (v != ((int *)(q + 0x65C8))[*(short *)(e + 0xB92)]) {
        func_001AD140(p);
        return;
    }
    switch (*(int *)(p + 0x1A0)) {
    case 0:
        QCPY458(a, *(char **)(*(char **)(e + 0x9D8) + 0x104) + 0x30);
        QCPY458(b, *(char **)(*(char **)(pl458(p) + 0x9E0) + 0x104) + 0x30);
        break;
    case 1:
        QCPY458(a, *(char **)(*(char **)(pl458(p) + 0x9E4) + 0x104) + 0x30);
        QCPY458(b, *(char **)(*(char **)(pl458(p) + 0x9EC) + 0x104) + 0x30);
        break;
    }
    *(float *)(p + 0x208) += *(float *)(p + 0x10);
    t = *(float *)(p + 0x208) / D_00567C10[*(int *)(p + 0x220)][*(int *)(p + 0x21C)];
    if (!(t <= 1.0f)) t = 1.0f;
    u = 1.0f - t;
    *(float *)(p + 0x1E0) = a[0] * u + b[0] * t;
    *(float *)(p + 0x1E4) = a[1] * u + b[1] * t;
    *(float *)(p + 0x1E8) = a[2] * u + b[2] * t;
    if (!(*(float *)(p + 0x208) < D_00567C10[*(int *)(p + 0x220)][*(int *)(p + 0x21C)] + (float)*(int *)(p + 0x19C) * D_00567C70[*(int *)(p + 0x220)][*(int *)(p + 0x21C)])) {
        func_0034BA60(0x35, p + 0x1E0, 0x29, 0, 1);
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x1F0) = 0.0f;
        *(float *)(p + 0x1F4) = 0.0f;
        *(float *)(p + 0x1F8) = 0.0f;
        *(float *)(p + 0x1FC) = 0.0f;
        if (*(int *)(pl458(p) + 0x144C) == 0) {
            func_00207480(3, 0x33C, p + 0x1B0, 0x10);
            *(float *)(p + 0x208) = 90.0f;
            (*(unsigned char *)(p + 4))++;
            return;
        }
        *(int *)(p + 0x308) = 0xCC0;
        func_0028C8E0(p + 0x230, 0);
        *(int *)(p + 0x308) = 0x20041;
        *(signed char *)(p + 0x233) = 0;
        func_0028C910(p + 0x230);
        o = func_0028C3A0(p + 0x230, 0, -1, p + 0x1B0);
        if (o != 0) *(signed char *)(o + 2) = 1;
        o = func_0028C3A0(p + 0x230, 1, -1, p + 0x1B0);
        if (o != 0) *(signed char *)(o + 2) = 1;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        o = func_00207480(1, 0x5C5, (char *)m, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x1B0;
            *(signed char *)(o + 0x9A) = 1;
        }
        *(float *)(p + 0x208) = 0.0f;
    }
}
