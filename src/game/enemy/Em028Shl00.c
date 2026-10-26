#include "game/mt_rand.h"
void func_003B9F50(char *);

void func_003B92A0(char *);

void func_003BA4E0(char *);

void func_0034BA60(int, char *, int, int, int);

int func_003B9390(char *);

void func_003BA070(char *, int, int);

int func_003AD2F0(char *);

void func_003B9D20(char *);

typedef struct { float v[4]; } F4u;

void func_003B8EF0(char *p) {
    void func_003AAB30(int, int, char *, unsigned char);
    char *func_00207480(int, int, char *, int);
    int i;
    int f;
    char *q;
    char *e;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(unsigned char *)(p + 0x1B4) != 0) {
            func_003AAB30(*(int *)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
        } else {
            *(F4u *)(p + 0x230) = *(F4u *)(p + 0x200);
        }
        *(float *)(p + 0x1D4) = *(float *)(p + 0x1D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1D4) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003B9F50(p);
            func_003B92A0(p);
            func_00207480(3, 1, p + 0x250, 0x10);
            func_003BA4E0(p);
            func_0034BA60(0x1D, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        } else {
            func_003B9390(p);
        }
        break;
    case 1:
        for (i = 0, q = p; i <= 2; i++, q += 4) {
            e = *(char **)(q + 0x31C);
            f = 0;
            if (e != 0) {
                f = *(int *)(e + 8);
            }
            if (f & 0x20000) {
                func_003BA070(p, 1, 1);
                return;
            }
        }
        if ((unsigned char)func_003AD2F0(*(char **)(p + 0x1DC)) == 1) {
            func_003BA070(p, 1, 1);
            return;
        }
        switch (func_003B9390(p)) {
        case 0:
            break;
        case 1:
            func_003BA070(p, 1, 1);
            return;
        case -1:
            func_003BA070(p, 1, 1);
            return;
        }
        break;
    }
    func_003B9D20(p);
}

extern char D_005646F0[];

extern char D_005646F8[];

float func_00132470(char *, char *);

void func_003B8DE0(char *p) {
    void func_003AAB30(int, int, char *, unsigned char);
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AAB30(*(int *)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
    } else {
        *(F4u *)(p + 0x230) = *(F4u *)(p + 0x200);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1: {
        float d = func_00132470(p + 0x230, p + 0x50);
        if (!(d <= *(float *)(D_005646F0 + *(unsigned char *)(p + 0x1B5) * 40))) {
            if (!(d <= *(float *)(D_005646F8 + *(unsigned char *)(p + 0x1B5) * 40))) {
                func_003BA070(p, 0, 0);
                return;
            }
            func_003B9390(p);
        }
        break;
    }
    }
    func_003B9D20(p);
}

extern char D_01CAFF0C[];

void func_00131650(float *, float *);

float func_001324E0(float *);

void func_003B9F50(char *p) {
    float t[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float l;
    char *g = *(char **)D_01CAFF0C;
    t[0] = *(float *)(*(char **)(g + 0xC) + 0x50);
    t[1] = 150.0f + *(float *)(*(char **)(g + 0xC) + 0x54);
    t[2] = *(float *)(*(char **)(g + 0xC) + 0x58);
    t[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(t), "r"(p + 0x50) : "memory");
    l = func_001324E0(d);
    func_00131650(d, d);
    d[3] = 1.0f;
    l += 300.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(l) : "t0", "memory");
    *(float *)(p + 0x230) = *(float *)(p + 0x50) + d[0];
    *(float *)(p + 0x234) = *(float *)(p + 0x54) + d[1];
    *(float *)(p + 0x238) = *(float *)(p + 0x58) + d[2];
    *(float *)(p + 0x23C) = 1.0f;
    *(unsigned char *)(p + 0x1B6) = 1;
}

void func_001AD140(char *);

int func_003BA680(char *p, unsigned char reset) {
    char *func_00207480(int, int, int, int);
    char *o;
    if (reset == 1) {
        p[0x1B7] = 0;
        if (*(char **)(p + 0x214) != 0) {
            (*(char **)(p + 0x214))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x214));
            *(char **)(p + 0x214) = 0;
        }
        if (*(char **)(p + 0x218) != 0) {
            (*(char **)(p + 0x218))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x218));
            *(char **)(p + 0x218) = 0;
        }
        if (*(char **)(p + 0x21C) != 0) {
            (*(char **)(p + 0x21C))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x21C));
            *(char **)(p + 0x21C) = 0;
        }
    }
    if (*(char **)(p + 0x210) != 0) {
        return 1;
    }
    switch (mt_rand() % 3) {
    case 0:
        *(char **)(p + 0x210) = func_00207480(0, 0xCB, 0, 16);
        break;
    case 1:
        *(char **)(p + 0x210) = func_00207480(0, 0xFB, 0, 16);
        break;
    case 2:
        *(char **)(p + 0x210) = func_00207480(0, 0xEB, 0, 16);
        break;
    }
    o = *(char **)(p + 0x210);
    if (o == 0) {
        return 0;
    }
    *(char **)(o + 0x90) = p + 0x250;
    o[0x9A] = 0;
    return 1;
}

void func_00100580(char *);

void func_0028C1A0(char *, int);

extern char D_005AFE30[];

extern char D_005AFE54[];

extern char D_005AFED4[];

extern char D_005AFF68[];

void func_004FE840(char *, int);

char *func_003BA8C0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AFE30;
        *(char **)(p + 64) = D_005AFE54;
        *(char **)(p + 160) = D_005AFED4;
        *(char **)(p + 208) = D_005AFF68;
        func_0028C1A0(p + 672, -1);
        func_004FE840(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_003BA400(char *);

void func_003B9E90(char *p, float *pos, int k, float f) {
    char *func_00207480(int, int, float *, int);
    char *q;
    *(char *)(p + 437) = 1;
    *(char *)(p + 438) = 0;
    func_003B92A0(p);
    func_003BA400(p);
    *(char *)(p + 440) = k;
    *(char **)(p + 536) = func_00207480(3, 51, 0, 16);
    q = *(char **)(p + 536);
    if (q != 0) {
        *(char **)(q + 144) = p + 592;
        *(char *)(q + 154) = 0;
        *(char *)(*(char **)(p + 536) + 58) = 1;
    }
    *(float *)(p + 576) = pos[0];
    *(float *)(p + 580) = pos[1];
    *(float *)(p + 584) = pos[2];
    *(float *)(p + 468) = f;
    *(char *)(p + 5) = 0;
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

void func_003B88D0(char *);

void func_003BA170(char *, char *, char *);

void func_002F2E30(char *, char *);

char *func_003B8720(char *p, char *s, char *u) {
    char *qq;
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
    **q = func_001B0FD0(a, 0x5C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x5C0, t);
        if (r != 0) {
            func_003B88D0(r);
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
        *(char **)(o + 0x1DC) = p;
        if (*(char **)(o + 0x1DC) != 0) {
            *(unsigned char *)(o + 0x1B4) = 1;
        }
        func_003BA170(ret, s, u);
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 3;
        *(unsigned char *)(ret + 0x46) = 0x2A;
        *(unsigned char *)(ret + 0x47) = 0x18;
        qq = ret;
        if ((t = *(char **)(*(char **)D_01CAFF0C + 0x20)) != 0) {
            func_002F2E30(t, qq);
        }
    }
    return ret;
}

unsigned char func_003AC650(int);

int func_003B99E0(char *, int, int, int);

int func_003B9B90(char *, int, int, int);

int func_003B96D0(char *p, int a, int b, int c) {
    int r;
    if (a != 0 && b != 0) {
        if (*(unsigned char *)(p + 436) != 0) {
            if (func_003AC650(*(int *)(p + 476)) == 0) {
                r = func_003B99E0(p, a, b, c);
            } else {
                r = func_003B9B90(p, a, b, c);
            }
        } else {
            r = func_003B99E0(p, a, b, c);
        }
    }
    return r;
}

void func_003B9E50(char *);

typedef struct { float f[4]; } F4_3B9;

void func_003B9120(char *p) {
    void func_003AAB30(int, int, char *, unsigned char);
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AAB30(*(int *)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
    } else {
        *(F4_3B9 *)(p + 0x230) = *(F4_3B9 *)(p + 0x200);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        switch (func_003B9390(p)) {
        case 0:
            break;
        case 1:
            func_003B9E50(p);
            return;
        case -1:
            *(unsigned char *)(p + 0x1B6) = 0;
            break;
        }
        break;
    }
    func_003B9D20(p);
}

void func_002F2D30(char *, char *);

extern float D_005647D4[];

void func_003AB0E0(char *, char *);

void func_002D90A0(char *, float);

void func_003B9BD0(char *p) {
    char *func_00207480(int, int, char *, int);
    char *g;
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AB0E0(*(char **)(p + 0x1DC), p);
    }
    func_00207480(0, 0xEA, p + 0x250, 16);
    if (*(unsigned char *)(p + 0x1B3) == 0) {
        func_002D90A0(*(char **)(*(char **)D_01CAFF0C + 0xC), D_005647D4[0]);
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_001AD140(p);
}

void func_00105230(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_003B9620(char *p, int a, int b, float *t) {
    char *func_00207480(int, int, char *, int);
    float m[16];
    if (a && b) {
        *(unsigned char *)(p + 0x1BA) = 1;
        *(float *)(p + 0x1D0) = 30.0f;
        if (*(unsigned char *)(p + 0x1B7) != 0) {
            *(unsigned char *)(p + 0x1B1) = 1;
        }
        UNIT(m);
        func_00105230((char *)m, (char *)m, t);
        func_00207480(3, 0x110, (char *)m, 0x20);
    }
}

extern char D_00568D20[];

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_003BA2B0(char *p) {
    void func_0028C790(char *, int);
    char *q;
    func_0028C790(p + 0x2A0, 0);
    func_0028C790(p + 0x2A0, 1);
    func_0028C790(p + 0x2A0, 2);
    func_0028C200(p + 0x2A0, p + 0x4C0, p + 0x4D0, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x2A0, 0);
    func_0028C910(p + 0x2A0);
    *(unsigned char *)(p + 0x4C0) = 1;
    *(unsigned char *)(p + 0x4C1) = 0;
    *(short *)(p + 0x4C2) = 0;
    *(unsigned char *)(p + 0x4D0) = 2;
    *(float *)(p + 0x4E0) = 0.0f;
    *(float *)(p + 0x4E4) = 0.0f;
    *(float *)(p + 0x4E8) = 0.0f;
    *(float *)(p + 0x4EC) = 1.0f;
    *(float *)(p + 0x4F0) = 50.0f;
    func_0028C3A0(p + 0x2A0, 0, -1, p + 0x250);
    q = *(char **)(p + 0x31C);
    if (q != 0) {
        q[2] = 1;
    }
    *(unsigned char *)(p + 0x4C4) = 6;
    *(unsigned char *)(p + 0x4C5) = 0;
    *(short *)(p + 0x4C6) = 1;
    *(unsigned char *)(p + 0x520) = 2;
    *(float *)(p + 0x530) = 0.0f;
    *(float *)(p + 0x534) = 0.0f;
    *(float *)(p + 0x538) = 0.0f;
    *(float *)(p + 0x53C) = 1.0f;
    *(float *)(p + 0x540) = 40.0f;
    func_0028C3A0(p + 0x2A0, 1, -1, p + 0x250);
    q = *(char **)(p + 0x320);
    if (q != 0) {
        q[2] = 1;
        *(int *)(q + 0xC) = *(int *)(q + 0xC) | 2;
    }
    *(unsigned char *)(p + 0x1BB) = 0;
}

void func_00206730(char *);

void func_0028C740(char *);

void func_003B9C80(char *p) {
    int i;
    for (i = 0; i < 4; i++) {
        func_00206730(p + i * 4 + 0x210);
        if (*(char **)(p + i * 4 + 0x210) != 0) {
            *(unsigned char *)(*(char **)(p + i * 4 + 0x210) + 0x3A) = 1;
            func_001AD140(*(char **)(p + i * 4 + 0x210));
            *(char **)(p + i * 4 + 0x210) = 0;
        }
    }
    func_0028C740(p + 0x2A0);
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
}

typedef struct { float x, y, z, w; } V4_3B9;

void func_003B9200(char *p) {
    void func_003AAB30(char *, int, char *, unsigned char);
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AAB30(*(char **)(p + 0x1DC), *(unsigned char *)(p + 0x1BC), p + 0x230, *(unsigned char *)(p + 0x1B2));
    } else {
        *(V4_3B9 *)(p + 0x230) = *(V4_3B9 *)(p + 0x200);
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x230);
    *(float *)(p + 0x54) = *(float *)(p + 0x234);
    *(float *)(p + 0x58) = *(float *)(p + 0x238);
    *(float *)(p + 0x5C) = 1.0f;
    func_003B9E50(p);
    func_003B9D20(p);
}

void func_003BA960(char **h) {
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

char *func_003BAA20(char *p) {
    void func_003BAB40(char *);
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
    **q = func_001B0FD0(a, 0x2540, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x2540, t);
        if (r != 0) {
            func_003BAB40(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
    if (ret != 0) {
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

void func_003B90F0(p0) char *p0; {
    int v0;
    v0 = *(unsigned char *)(p0 + 5);
    switch (v0) {
    default:
        return;
    case 0:
        *(char *)(p0 + 5) = (v0 + 1);
        /* fall through */
    case 1:
        return;
    }
}

int func_003BA640(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_0028C790();
    int tmp0;
    func_0028C790((p0 + 672), 0);
    tmp0 = func_0028C790((p0 + 672), 1);
    *(char *)((char *)p0 + 443) = 1;
    return tmp0;
}

extern float D_005BE1B8;

void func_003BA870(p0) char *p0; {
    int v0;
    v0 = 1;
    if (D_005BE1B8 > 0.0f) {
        *(char *)(p0 + 434) = v0;
    } else {
        *(char *)(p0 + 434) = 0;
    }
}

extern void func_003B8A50();

void func_003BA9B0(char *p) { func_003B8A50(p + -64); }

extern void func_003B9790();

void func_003BA9C0(char *p) { func_003B9790(p + -64); }

void func_003B9C70(void) {}

void func_003BA8A0(void) {}

void func_003BA8B0(void) {}

int func_003BA860(char *p0) {
    *(char *)(p0 + 439) = 1;
    return 1;
}
