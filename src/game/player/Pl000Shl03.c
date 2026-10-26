#include "game/mt_rand.h"
float func_00132470(float *, char *);

extern char D_01DFABA0[];

void func_001AD140(char *);

float func_0034C160(float, float, float);

void func_00330B50(char *, int, char *, int);

void func_00131650(char *, char *);

void func_0028C5C0(char *, int, float);

void func_0033C8A0(char *p) {
    void func_0033CC60(char *);
    float v[4] __attribute__((aligned(16)));
    float tmp[4] __attribute__((aligned(16)));
    float t;
    float s;
    float *dst;
    float *src;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(p + 0xBC0) + 0x50) : "memory");
    v[1] = v[1] + 120.0f;
    v[3] = 1.0f;
    if (func_00132470(v, p + 0x50) < 100.0f) {
        func_001AD140(p);
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xB70), "r"(v), "r"(p + 0x50) : "memory");
    func_00131650(p + 0xB70, p + 0xB70);
    *(float *)(p + 0xB7C) = 1.0f;
    t = func_0034C160(*(float *)(p + 0xB44), 30.0f, *(float *)(p + 0x10));
    s = t * t;
    *(float *)(p + 0xB44) = t;
    if (!(s <= 30.0f)) {
        s = 30.0f;
    }
    src = (float *)(p + 0xB70);
    dst = tmp;
    asm {
        lqc2 vf4, 0x0(src)
        mfc1 t0, s
        nop
        qmtc2.ni t0, vf5
        vmulx.xyzw vf6, vf4, vf5x
        sqc2 vf6, 0x0(dst)
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
    *(float *)(p + 0x84) = *(float *)(p + 0x84) - 70.0f * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x84) <= 180.0f)) {
        *(float *)(p + 0x84) = *(float *)(p + 0x84) - 360.0f;
        func_00330B50(D_01DFABA0, 0x11, p + 0x50, 0);
    }
    if (*(float *)(p + 0x84) < -180.0f) {
        *(float *)(p + 0x84) = *(float *)(p + 0x84) + 360.0f;
        func_00330B50(D_01DFABA0, 0x11, p + 0x50, 0);
    }
    func_0033CC60(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_0033D5B0(char *);

void func_0033D010(char *p) {
    void func_0033D310(char *);
    p[0xB41] = 0;
    func_0033D310(p);
    p[0xB42] = 1;
    *(float *)(p + 0xB4C) = 40.0f;
    if (mt_rand() & 1) {
        p[0xB43] = 2;
    } else {
        p[0xB43] = 3;
    }
    *(float *)(p + 0xB60) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0xB64) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0xB68) = 60.0f;
    *(float *)(p + 0xB6C) = 1.0f;
    func_0033D5B0(p);
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C3A0(char *, int, int, char *);

extern char *D_005BC2E0;

void func_0028C790(char *, int);

extern float D_0055C7F0[];

extern float D_0055C7F4[];

extern float D_0055C7F8[];

extern float D_0055C7FC[];

void func_0033D6F0(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C790(p + 0x150, 1);
    func_0028C790(p + 0x150, 2);
    func_0028C790(p + 0x150, 3);
    func_0028C790(p + 0x150, 4);
    func_0028C790(p + 0x150, 5);
    func_0028C200(p + 0x150, p + 0x370, p + 0x390, 1, D_005BC2E0 + 0x5C0, p, 0);
    func_0028C8E0(p + 0x150, 0);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x390) = 2;
    *(float *)(p + 0x3A0) = D_0055C7F0[0];
    *(float *)(p + 0x3A4) = D_0055C7F4[0];
    *(float *)(p + 0x3A8) = D_0055C7F8[0];
    *(float *)(p + 0x3B0) = D_0055C7FC[0];
    func_0028C3A0(p + 0x150, 0, -1, p + 0xB80);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        *(int *)(q + 0xC) = *(int *)(q + 0xC) & ~0x4000;
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

char *func_00207480(int, int, char *, int);

void func_00105230(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_0033D2A0(char *p) {
    float m[16];
    float v[4];
    v[0] = *(float *)(p + 0x50);
    v[1] = *(float *)(p + 0x54);
    v[2] = *(float *)(p + 0x58);
    v[3] = 1.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    func_00207480(3, 0x8B, (char *)m, 8);
}

void func_0028C910(char *);

extern float D_0055C7A0[];

void func_0033D430(char *p) {
    int i;
    char *e;
    func_0028C790(p + 0x150, 0);
    func_0028C790(p + 0x150, 1);
    func_0028C790(p + 0x150, 2);
    func_0028C790(p + 0x150, 3);
    func_0028C790(p + 0x150, 4);
    func_0028C790(p + 0x150, 5);
    func_0028C200(p + 0x150, p + 0x370, p + 0x390, 1, D_005BC2E0 + 0x580, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    for (i = 0; i < 5; i++) {
        *(unsigned char *)(p + i * 4 + 0x370) = 5;
        *(unsigned char *)(p + i * 4 + 0x371) = 0;
        *(short *)(p + i * 4 + 0x372) = i;
        *(unsigned char *)(p + i * 0x50 + 0x390) = 2;
        *(float *)(p + i * 0x50 + 0x3A0) = D_0055C7A0[i * 4];
        *(float *)(p + i * 0x50 + 0x3A4) = D_0055C7A0[i * 4 + 1];
        *(float *)(p + i * 0x50 + 0x3A8) = D_0055C7A0[i * 4 + 2];
        *(float *)(p + i * 0x50 + 0x3AC) = 1.0f;
        *(float *)(p + i * 0x50 + 0x3B0) = D_0055C7A0[i * 4 + 3];
        func_0028C3A0(p + 0x150, i, -1, p + 0xB80);
        e = *(char **)(p + i * 4 + 0x1CC);
        if (e != 0) {
            *(unsigned char *)(e + 2) = 1;
            *(int *)(e + 0xC) = *(int *)(e + 0xC) & ~0x4000;
        }
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_0033D350(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *o;
    UNIT(m);
    *(char **)(p + 0xBCC) = func_00207480(3, 0xB8, (char *)m, 8);
    o = *(char **)(p + 0xBCC);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0xB80;
        *(unsigned char *)(o + 0x9A) = 0;
        {
            char *o2 = *(char **)(p + 0xBCC);
            *(unsigned char *)(o2 + 0x3A) = 1;
        }
    }
}

void func_0033D3C0(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *o;
    UNIT(m);
    *(char **)(p + 0xBCC) = func_00207480(3, 0xC3, (char *)m, 8);
    o = *(char **)(p + 0xBCC);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0xB80;
        *(unsigned char *)(o + 0x9A) = 0;
        {
            char *o2 = *(char **)(p + 0xBCC);
            *(unsigned char *)(o2 + 0x3A) = 1;
        }
    }
}

int func_002DA0B0();

int func_0033CFC0();

void func_0033C810(p0) char *p0; {
    int func_0033CC60();
    char *v0;
    int v1;
    float v2;
    int tmp1;
    int tmp2;
    int tmp5;
    int tmp6;
    v0 = p0;
    tmp1 = func_002DA0B0(*(int *)(p0 + 3008), 0);
    v1 = (int)v0;
    if ((tmp1 & 255) == 2) {
        tmp2 = func_0033CFC0(v1);
        return;
    } else {
        *(float *)(v0 + 2888) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 2888) < 0.0f) {
            tmp5 = func_0033CFC0(v0);
            return;
        } else {
            tmp6 = func_0033CC60(v0);
            return;
        }
    }
}

int func_0028C740();

void func_002DA130();

int func_0033CC00(p0) char *p0; {
    int func_0033D310();
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = func_002DA0B0(*(int *)(p0 + 3008), 0);
    if ((tmp1 & 255) != 0) {
        func_002DA130(*(int *)(v0 + 3008), 0, 3);
    }
    func_0033D310(v0);
    tmp3 = func_0028C740((v0 + 336));
    return tmp3;
}

extern void func_0033BC40();

void func_0033DC60(char *p) { func_0033BC40(p + -64); }

extern void func_0033CAB0();

void func_0033DC70(char *p) { func_0033CAB0(p + -64); }

extern void func_0033CAD0();

void func_0033DC80(char *p) { func_0033CAD0(p + -64); }

extern void func_0033CAF0();

void func_0033DC90(char *p) { func_0033CAF0(p + -64); }

extern void func_0033DBC0();

void func_0033DCA0(char *p) { func_0033DBC0(p + -64); }

void func_0033DCB0(char *p) { func_0033DBC0(p + -160); }
