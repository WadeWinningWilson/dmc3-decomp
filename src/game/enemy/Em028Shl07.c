#include "game/mt_rand.h"
int func_004580B0(char *p) {
    char *func_00207480(int, int, int, int);
    char *o;
    switch (mt_rand() % 3) {
    case 0:
        *(char **)(p + 0x504) = func_00207480(0, 0xCB, 0, 16);
        break;
    case 1:
        *(char **)(p + 0x504) = func_00207480(0, 0xFB, 0, 16);
        break;
    case 2:
        *(char **)(p + 0x504) = func_00207480(0, 0xEB, 0, 16);
        break;
    }
    o = *(char **)(p + 0x504);
    if (o == 0) {
        return 0;
    }
    *(char **)(o + 0x90) = p + 0x440;
    o[0x9A] = 0;
    return 1;
}

void func_00206730(char *);

void func_001AD140(char *);

void func_001AD100(char *);

unsigned char func_002077F0(char *);

void func_003BA960(char **);

unsigned char func_003AD2F0(char *);

void func_00457840(char *);

void func_004579C0(char *);

void func_004576B0(char *p) {
    int i;
    func_001AD100(p);
    func_003BA960((char **)(p + 0x500));
    for (i = 0; i < 3; i++) {
        func_00206730(p + i * 4 + 0x504);
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0x504) != 0) {
            if (func_002077F0(*(char **)(p + i * 4 + 0x504)) == 1) {
                *(int *)(p + i * 4 + 0x504) = 0;
                if (i != 2) {
                    func_001AD140(p);
                    return;
                }
            }
        } else if (i != 2) {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0x3D0) != 0) {
        if (*(char **)(p + 0x500) == 0) {
            *(unsigned char *)(p + 0x3D0) = 0;
            func_001AD140(p);
            return;
        }
        if (func_003AD2F0(*(char **)(p + 0x500)) == 1) {
            *(unsigned char *)(p + 0x3D0) = 0;
            func_001AD140(p);
            return;
        }
        *(unsigned char *)(p + 0x3D3) = *(unsigned char *)(*(char **)(p + 0x500) + 0x4E17);
    } else {
        *(unsigned char *)(p + 0x3D3) = 0;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00457840(p);
        break;
    case 1:
        func_004579C0(p);
        break;
    }
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00456F20(char *);

void func_00457F00(char *, char *);

char *func_00456D70(char *p, char *s, unsigned char x, unsigned char y, unsigned char z, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x510, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x510, t);
        if (r != 0) {
            func_00456F20(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o != 0) {
        *(char **)(o + 0x500) = p;
        if (*(char **)(o + 0x500) != 0) {
            *(unsigned char *)(o + 0x3D0) = 1;
        }
        func_00457F00(ret, s);
        *(unsigned char *)(ret + 0x3D1) = y;
        *(unsigned char *)(ret + 0x3D2) = z;
        *(unsigned char *)(ret + 0x3D4) = x;
        *(float *)(ret + 0x3E0) = f;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern float D_00578C14[];

int func_00458210(char *p) {
    char *func_00207480(int, int, float *, int);
    void func_00131700(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    UNIT(m);
    switch ((unsigned char)*(unsigned char *)(p + 0x3D4)) {
    case 0:
        break;
    case 1:
        r[0] = 0.0f;
        r[1] = (float)*(short *)(p + 0x3D6) / 65536.0f * 6.283185f;
        r[2] = D_00578C14[*(unsigned char *)(p + 0x3D1) * 2] / 360.0f * 6.283185f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        break;
    }
    *(char **)(p + 0x508) = func_00207480(3, 0x1AE, m, 0x10);
    {
        char *o = *(char **)(p + 0x508);
        if (o == 0) return 0;
        *(char **)(o + 0x90) = p + 0x440;
        *(unsigned char *)(o + 0x9A) = 1;
    }
    switch (*(unsigned char *)(p + 0x3D4)) {
    case 0:
        *(char **)(p + 0x50C) = func_00207480(3, 0x321, 0, 0x10);
        {
            char *o = *(char **)(p + 0x50C);
            if (o == 0) return 0;
            *(char **)(o + 0x90) = p + 0x4C0;
            *(unsigned char *)(o + 0x9A) = 1;
        }
        break;
    case 1:
        break;
    }
    return 1;
}

void func_00131650(char *, char *);

float func_00132470(char *, char *);

float func_0034C160(float, float, float);

extern float D_005BDB38[2];

extern float D_00578C30[];

extern float D_00578C50[];

int func_00457B30(char *p, unsigned char k) {
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float u;
    if (func_00132470(p + k * 16 + 0x420, p + 0x50) < D_005BDB38[k]) {
        *(float *)(p + 0x3D8) = 0.0f;
        return 1;
    }
    if (!(*(float *)(p + 0x3DC) <= 0.0f) && (*(float *)(p + 0x3DC) -= *(float *)(p + 0x10)) < 0.0f) return -1;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x400), "r"(p + 0x50), "r"(p + k * 16 + 0x420) : "memory");
    func_00131650(p + 0x400, p + 0x400);
    *(float *)(p + 0x40C) = 1.0f;
    s = func_0034C160(*(float *)(p + 0x3D8), D_00578C30[k + *(unsigned char *)(p + 0x3D3) * 2], *(float *)(p + 0x10) * D_00578C50[k + *(unsigned char *)(p + 0x3D3) * 2]);
    *(float *)(p + 0x3D8) = s;
    u = s > 1.0f ? s * s : s;
    if (!(u <= D_00578C30[k + *(unsigned char *)(p + 0x3D3) * 2])) u = D_00578C30[k + *(unsigned char *)(p + 0x3D3) * 2];
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x400), "f"(u) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    *(float *)(p + 0x5C) = 1.0f;
    return 0;
}

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

void func_00133890(char *, char *, V4 *);

extern V4 D_00578C70;

void func_00457DB0(char *p) {
    void func_00131700(char *, char *, float *);
    V4 t;
    float r[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    UNIT(p + 0x440);
    t = D_00578C70;
    func_00133890(p + 0x440, p + 0x400, &t);
    func_00105230(p + 0x440, p + 0x440, (float *)(p + 0x50));
    func_001318E0(p + 0x440, p + 0x440, (float *)(p + 0x3F0));
    r[0] = 0.0f;
    r[1] = 6.283185f * (*(short *)(p + 0x3D6) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    UNIT(p + 0x480);
    func_00131700(p + 0x480, p + 0x480, r);
    func_00105230(p + 0x480, p + 0x480, (float *)(p + 0x50));
    w[0] = *(float *)(p + 0x50);
    w[1] = 100.0f;
    w[2] = *(float *)(p + 0x58);
    w[3] = 1.0f;
    UNIT(p + 0x4C0);
    func_00105230(p + 0x4C0, p + 0x4C0, w);
}

extern char D_00568D20[];

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C790(char *, int);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_00457F80(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x150, 7);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    switch (*(unsigned char *)(p + 0x3D4)) {
    case 0:
        *(unsigned char *)(p + 0x380) = 6;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = -600.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 600.0f;
        *(float *)(p + 0x3A4) = 30.0f;
        break;
    case 1:
        *(unsigned char *)(p + 0x380) = 4;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = 0.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 800.0f;
        *(float *)(p + 0x3A4) = 0.0f;
        *(float *)(p + 0x3A8) = 0.0f;
        *(float *)(p + 0x3AC) = 1.0f;
        *(float *)(p + 0x3B0) = 30.0f;
        break;
    }
    func_0028C3A0(p + 0x150, 0, -1, p + 0x480);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        q[2] = 1;
    }
}

void func_0028C740(char *);

void func_00457D30(char *p) {
    int i;
    for (i = 0; i < 3; i++) {
        func_00206730(p + i * 4 + 0x504);
        if (*(char **)(p + i * 4 + 0x504) != 0) {
            *(unsigned char *)(*(char **)(p + i * 4 + 0x504) + 0x3A) = 1;
            func_001AD140(*(char **)(p + i * 4 + 0x504));
            *(char **)(p + i * 4 + 0x504) = 0;
        }
    }
    func_0028C740(p + 0x150);
}

extern void func_00457050();

void func_00458440(char *p) { func_00457050(p + -64); }

extern void func_004583B0();

void func_00458450(char *p) { func_004583B0(p + -64); }

void func_00458460(char *p) { func_004583B0(p + -160); }

void func_00458380(void) {}

void func_00458390(void) {}

void func_004583A0(void) {}
