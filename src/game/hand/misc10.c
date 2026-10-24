#include "game/mt_rand.h"
/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-9. */
extern char D_01DFABA0[];
extern float D_005BDED4;
extern float D_005BDEC4;
extern float D_005BDEC8;
extern float D_005BDECC;
void func_004F5230(char *, int);
char *func_00207480(int, int, float *, int);
void func_00330BD0(char *, int, char *, int, int);
void func_00131650(float *, char *);
int func_0022CBA0(char *);
void func_0022CBB0(char *, char *);
int func_0012B1A0(char *, char *);
float func_0022CD90(char *);
extern char D_005BDBF8[8];
extern char D_005BDC00[8];
extern char D_005BDC08[4];
extern char D_005BDC0C[4];
extern char D_005BDC10[4];
extern char D_005BDC14[4];
extern char D_005BDC18[4];
extern char D_005BDC1C[4];
extern char D_005BDC20[8];
extern char D_005BDC28[8];

void func_004F4400(char *p) {
    float v[4] __attribute__((aligned(16)));
    float s;
    float f;
    float *src;
    float *dst;
    char *e;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_004F5230(p, 0);
        e = func_00207480(3, 0x34A, 0, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x170;
            e[0x9A] = 3;
            e[0x3A] = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 1.0f;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = 60.0f + D_005BDED4 * (float)*(int *)(p + 0xBC0);
        }
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x110) = D_005BDEC4;
            *(float *)(p + 0xBE0) = 300.0f;
            func_00330BD0(D_01DFABA0, 0x71, p + 0x50, 0x23, 0);
            if (*(char **)(p + 0x22C) != 0) {
                *(int *)(*(char **)(p + 0x22C) + 0xC) = 0x30443;
            }
        }
        func_004F5230(p, 0);
        break;
    case 3:
        f = *(float *)(p + 0x110) + D_005BDEC8 * *(float *)(p + 0x10);
        *(float *)(p + 0x110) = f < D_005BDECC ? f : D_005BDECC;
        func_00131650(v, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	mfc1 $t0, %1
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "f"(*(float *)(p + 0x110) * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(int *)(p + 0xBC8) & 0x30000) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S46Fs;

typedef struct { int x0; int x4; short x8; char pad[2]; float xC; unsigned char x10; char pad11[3]; float x14; } S46Ft;

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; S46Fs sub; S46Ft sub2; } S46F;

int func_00470090(char *, int *, S46F *);
int func_002F6690(S46F *, char *, char *);
int func_002F69A0(S46Fs *, char *, char *);
int func_002F6D40(S46Ft *, char *, char *);
extern char D_005BE1A8[8];
void func_00207470(int, int, float *);
float func_001324E0(float *);
void func_003305E0(char *, int, int, char *, int, int, int);
void func_0036DF70(char *, int);
extern char D_01CAFF0C[];
void func_00105300(float *, char *);
void func_001AD140(char *);
void func_00105578(float *, float *, float);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
char *func_0028C3A0(char *, int, int, char *);

int func_0046FDD0(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S46F s;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    s.sub.b0 = -1;
    s.sub.b1 = -1;
    s.sub.b2 = 0;
    s.sub.e8 = 0;
    s.sub.e4 = 0;
    s.sub.e0 = 0;
    s.sub2.x0 = 0;
    s.sub2.x4 = 0xF000;
    s.sub2.x8 = 0x180C;
    s.sub2.xC = 1.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDBF8) == 0) {
            return func_00470090(p, q, &s);
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&s.sub, name, r) == 0 && func_002F6D40(&s.sub2, name, r) == 0) {
            if (func_0012B1A0(name, D_005BDC00) == 0) {
                s.sub2.xC = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BDC08) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BDC0C) == 0) {
                    s.sub2.x10 = 0;
                } else if (func_0012B1A0(w, D_005BDC10) == 0) {
                    s.sub2.x10 = 1;
                } else if (func_0012B1A0(w, D_005BDC14) == 0) {
                    s.sub2.x10 = 2;
                } else if (func_0012B1A0(w, D_005BDC18) == 0) {
                    s.sub2.x10 = 3;
                } else if (func_0012B1A0(w, D_005BDC1C) == 0) {
                    s.sub2.x10 = 4;
                } else if (func_0012B1A0(w, D_005BDC20) == 0) {
                    s.sub2.x10 = 5;
                }
            } else if (func_0012B1A0(name, D_005BDC28) == 0) {
                s.sub2.x14 = func_0022CD90(r);
            }
        }
    }
    return 0;
}

void func_004DCF90(char *p, char *a, int u, float *v) {
    float d[4] __attribute__((aligned(16)));
    float k[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float l;
    switch (*(unsigned char *)(p + 5)) {
    case 1:
    case 2:
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    m[12] = v[0];
    m[13] = v[1];
    m[14] = v[2];
    func_00207470(3, 6, m);
    if (*(signed char *)(a + 2) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(v), "r"(p + 0xCE0) : "memory");
        l = func_001324E0(d);
        k[0] = *(float *)(p + 0x10) * (*(float *)(a + 4) * (d[0] / l) / *(float *)(p + 0xDA0));
        k[1] = *(float *)(p + 0x10) * (*(float *)(a + 4) * (d[1] / l) / *(float *)(p + 0xDA0) / 2.0f);
        k[2] = *(float *)(p + 0x10) * (*(float *)(a + 4) * (d[2] / l) / *(float *)(p + 0xDA0));
        k[3] = 0.0f;
        func_003305E0(D_01DFABA0, 8, 0x3D, p + 0xCE0, 0x21, 0, 0);
        func_0036DF70(D_005BE1A8, 8);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(float *)(p + 0xDC4) = 60.0f;
        *(float *)(p + 0xD80) = *(float *)(p + 0xD80) + k[0] * *(float *)(p + 0x10);
        *(float *)(p + 0xD84) = *(float *)(p + 0xD84) + k[1] * *(float *)(p + 0x10);
        *(float *)(p + 0xD88) = *(float *)(p + 0xD88) + k[2] * *(float *)(p + 0x10);
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[12] = v[0];
        m[13] = v[1];
        m[14] = v[2];
        func_00207470(3, 6, m);
        func_003305E0(D_01DFABA0, 8, 0x95, p + 0xCE0, 0x21, 0, 0);
    }
}

void func_004E7C40(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *g;
    char *o;
    char *e;
    char *q;
    float l;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if ((*(float *)(p + 0x1E4) -= 10.0f * *(float *)(p + 0x10)) < 500.0f) {
        func_00105300((float *)(p + 0x1F0), p + 0x1B0);
        *(float *)(p + 0x224) = 200.0f;
        if (*(char **)(p + 0x25C) != 0) {
            func_001AD140(*(char **)(p + 0x25C));
        }
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105578(m, m, -1.5707963f);
        *(char **)(p + 0x25C) = func_00207480(3, 0x1BC, m, 0x10);
        if (*(char **)(p + 0x25C) == 0) {
            func_001AD140(p);
            return;
        }
        e = *(char **)(p + 0x25C);
        e[0x3A] = 1;
        g = *(char **)(p + 0x25C);
        *(char **)(g + 0x90) = p + 0x1B0;
        g[0x9A] = 0;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x230), "r"(o + 0x50), "r"(p + 0x1E0) : "memory");
        *(float *)(p + 0x234) = 0.0f;
        l = func_001324E0((float *)(p + 0x230));
        *(float *)(p + 0x230) = *(float *)(p + 0x250) * (*(float *)(p + 0x230) / l);
        *(float *)(p + 0x234) = *(float *)(p + 0x250) * (*(float *)(p + 0x234) / l);
        *(float *)(p + 0x238) = *(float *)(p + 0x250) * (*(float *)(p + 0x238) / l);
        *(int *)(p + 0x338) = 0xCC0;
        func_0028C8E0(p + 0x260, 1);
        *(unsigned char *)(p + 0x263) = 1;
        *(int *)(p + 0x338) = 0x40;
        func_0028C910(p + 0x260);
        if ((q = func_0028C3A0(p + 0x260, 0, -1, p + 0x1B0)) != 0) q[2] = 1;
        *(unsigned char *)(p + 0x263) = 1;
        *(int *)(p + 0x338) = 1;
        if ((q = func_0028C3A0(p + 0x260, 1, -1, p + 0x1B0)) != 0) q[2] = 1;
        *(unsigned char *)(p + 0x263) = 1;
        *(int *)(p + 0x338) = 0x20000;
        if ((q = func_0028C3A0(p + 0x260, 1, -1, p + 0x1F0)) != 0) q[2] = 1;
        *(int *)(p + 0x58C) = 0;
        (*(unsigned char *)(p + 5))++;
    }
}

#define E2FF(p) ((*(Q2FF **)((p) + 0x40))[*(short *)((p) + 0x3A)])

typedef struct { float x, y, z, w; } V4F;

typedef struct { V4F a; V4F b; } P2FF;

typedef struct { char pad[0x30]; float p0[4]; float p1[4]; char pad2[0x60]; } Q2FF;

void func_00104B80(V4F *, float *, float *);
void func_00131760(float *, float *, float *);
void func_00105230(float *, float *, float *);
char *func_00279290(char *);
void func_00104C00(float *, char *, float *);

void func_002FFE20(char *p) {
    float v[4] __attribute__((aligned(16)));
    V4F a __attribute__((aligned(16)));
    V4F b __attribute__((aligned(16)));
    int i;
    v[0] = E2FF(p).p0[0];
    v[1] = E2FF(p).p0[1];
    v[2] = E2FF(p).p0[2];
    v[3] = 1.0f;
    func_00104B80(&a, *(float **)(p + 0x3C), v);
    v[0] = E2FF(p).p1[0];
    v[1] = E2FF(p).p1[1];
    v[2] = E2FF(p).p1[2];
    v[3] = 1.0f;
    func_00104B80(&b, *(float **)(p + 0x3C), v);
    for (i = 0; i < *(int *)(*(char **)(p + 0x44) + 0x42E4) + 2; i++) {
        ((P2FF *)*(char **)(p + 0x44))[i].a = a;
        ((P2FF *)*(char **)(p + 0x44))[i].b = b;
    }
}

#define M39D(p, k) ((float *)((p) + (k) * 64 + 0x2E40))

typedef struct { unsigned char id; char pad[15]; float pos[4]; float rot[4]; } T39D __attribute__((aligned(16)));

extern T39D D_00563EE0;
extern T39D D_00563F10;
extern T39D D_00563F40;
extern T39D D_00563F70;
unsigned char func_002CFA00(char *, float);
extern float D_005BC210;
unsigned char func_0024E800(char *);
void func_002CEEA0(char *, int);
void func_002CECC0(char *, int, int);
float *func_004361D0(char *);
float *func_00437250(char *);
void func_0028C5C0(char *, int, float);
float func_0034C160(float, float, float);
float func_00132470(float *, char *);
void func_004960F0(char *);
unsigned char func_002DA0B0(char *, int);
void func_004962A0(char *);
void func_004962F0(char *);
void func_004965D0(char *);
void func_00496640(char *);
void func_00330B50(char *, int, char *, int);
extern float D_005BC214;
extern float D_005BC218;
void func_0024DB10(char *, int, int, int, int, int, int);
void func_002CEB20(char *);
extern float D_005BDED8;
extern float D_005BDEDC;
extern float D_005BDEC0;
void func_004F5410(char *, int, int, float);
extern float D_005BDEE0;
extern float D_005BDEE4;
extern float D_005BDEE8;
extern float D_005BDEEC;
extern float D_005BDEF0;

void func_0039D0F0(char *p, unsigned char k) {
    T39D a = D_00563EE0;
    T39D b = D_00563F10;
    T39D c = D_00563F40;
    T39D d = D_00563F70;
    T39D *t[4] = { &a, &b, &c, &d };
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    T39D *e;
    unsigned char id;
    char *bn;
    e = t[((unsigned char *)(p + 0x2EC0))[k]];
    v[0] = e->pos[0];
    v[1] = e->pos[1];
    v[2] = e->pos[2];
    v[3] = 1.0f;
    r[0] = e->rot[0];
    r[1] = e->rot[1];
    r[2] = e->rot[2];
    r[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(M39D(p, k)) : "memory");
    func_00131760(M39D(p, k), M39D(p, k), r);
    func_00105230(M39D(p, k), M39D(p, k), v);
    id = e->id;
    if (!(id & 0x80)) {
        bn = *(char **)(func_00279290(p + 0x4C0) + 0x108) + id * 64;
    } else {
        id &= 0x7F;
        bn = *(char **)(func_00279290((k ^ 1) ? p + 0x1380 : p + 0xD80) + 0x108) + id * 64;
    }
    func_00104C00(M39D(p, k), bn, M39D(p, k));
}

void func_002CCDF0(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = D_005BC210;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        if (func_002CFA00(p, 0.0f) == 1) {
            q = (float *)(p + 0x1890);
            func_00207480(3, 0x14F, q, 0x10);
            if (func_0024E800(p + 0x2450) == 1) func_002CEEA0(p, 0);
            else func_002CEEA0(p, 2);
        } else if (func_0024E800(p + 0x2450) == 1) {
            func_002CECC0(p, 3, 1);
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        break;
    }
}

void func_002CCF70(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = D_005BC210;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        if (func_002CFA00(p, 0.0f) == 1) {
            q = (float *)(p + 0x1890);
            func_00207480(3, 0x14F, q, 0x10);
            if (func_0024E800(p + 0x2450) == 1) func_002CEEA0(p, 0);
            else func_002CEEA0(p, 2);
        } else if (func_0024E800(p + 0x2450) == 1) {
            func_002CECC0(p, 3, 1);
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        break;
    }
}

void func_0043BEC0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float *a;
    float *b;
    float *c;
    float r;
    a = func_004361D0(p);
    b = func_00437250(p);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(a), "r"(b) : "memory");
    r = 2.3283064e-10f * (float)mt_rand();
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(v), "f"(0.1f + 0.20000002f * r) : "t0", "memory");
    c = func_004361D0(p);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%1)" : : "r"(c), "r"(v), "r"(v) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105230(m, m, v);
    func_00207470(3, 0x1D9, m);
}

void func_00495810(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    int f;
    char *e;
    if (func_002DA0B0(*(char **)(p + 0x3F0), 9) == 2) {
        func_004962A0(p);
        return;
    }
    if ((*(float *)(p + 0x37C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_004962A0(p);
        return;
    }
    if (*(unsigned char *)(p + 0x370) == 1) {
        func_004962A0(p);
        return;
    }
    if (*(unsigned char *)(p + 0x371) == 1) {
        func_004962F0(p);
        return;
    }
    f = 0;
    e = *(char **)(p + 0x1CC);
    if (e != 0) f = *(int *)(e + 8);
    if (f & 0x10000) {
        func_004962A0(p);
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 9);
        return;
    }
    if (f & 0x20000) {
        *(unsigned char *)(p + 0x372) = 2;
        func_004965D0(p);
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 9);
        func_00496640(p);
        return;
    }
    s = func_0034C160(*(float *)(p + 0x378), 40.0f, 5.0f * *(float *)(p + 0x10));
    q = s * s;
    *(float *)(p + 0x378) = s;
    if (!(q <= 40.0f)) q = 40.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x3A0), "f"(q) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    if (!(func_00132470(*(float **)(p + 0x3F0) + 0x14, p + 0x50) <= 1500.0f)) {
        func_004962A0(p);
        return;
    }
    func_004960F0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_002CD130(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = D_005BC214;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = D_005BC218;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        if (func_0024E800(p + 0x2450) == 1) {
            (*(unsigned char *)(p + 0x5AD))++;
        } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
            break;
        }
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        if (func_002CFA00(p, 0.0f) == 1) {
            q = (float *)(p + 0x1890);
            func_00207480(3, 0x14F, q, 0x10);
            *(unsigned char *)(p + 0x1E1) = 0;
            func_0024DB10(p + 0x2450, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x2520, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x25F0, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x26C0, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x2790, 1, 0xE, 0x6D, 0, 0, 0);
            (*(unsigned char *)(p + 0x5AD))++;
        }
        break;
    case 3:
        if (func_0024E800(p + 0x2450) == 1) func_002CEB20(p);
        break;
    }
}

void func_004F4690(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    char *o;
    float f;
    short t;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_004F5410(p, 0, 0, 0.0f);
        o = func_00207480(3, 0x34A, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x170;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(o + 0x3A) = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 1.0f;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = D_005BDED8;
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, 0.0f);
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = D_005BDEDC;
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, 0.0f);
        break;
    case 3:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x110) = D_005BDEC4;
            *(float *)(p + 0xBE0) = 300.0f;
            func_00330BD0(D_01DFABA0, 0x71, p + 0x50, 0x23, 0);
            if (*(char **)(p + 0x22C) != 0) *(int *)(*(char **)(p + 0x22C) + 0xC) = 0x30443;
        }
        break;
    case 4:
        f = *(float *)(p + 0x110) + D_005BDEC8 * *(float *)(p + 0x10);
        *(float *)(p + 0x110) = f < D_005BDECC ? f : D_005BDECC;
        func_00131650(tmp, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(tmp), "f"(*(float *)(p + 0x110) * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(int *)(p + 0xBC8) & 0x30000) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

void func_004F4A40(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    char *o;
    float f;
    short t;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_004F5410(p, 0, 0, D_005BDEE0);
        o = func_00207480(3, 0x34A, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x170;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(o + 0x3A) = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(short *)(p + 0xBE8) = 0.5f + 65536.0f * D_005BDEF0 / 360.0f;
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 1.0f;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = 60.0f;
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, D_005BDEE0);
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = D_005BDEE8 + D_005BDEE4 * (float)*(int *)(p + 0xBC0);
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, D_005BDEE0);
        break;
    case 3:
        if (!(*(float *)(p + 0xBE0) <= D_005BDEEC)) func_004F5410(p, *(short *)(p + 0xBE8), 0, D_005BDEE0);
        else func_004F5410(p, *(short *)(p + 0xBE8), 1, D_005BDEE0);
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x110) = D_005BDEC4;
            *(float *)(p + 0xBE0) = 300.0f;
            func_00330BD0(D_01DFABA0, 0x71, p + 0x50, 0x23, 0);
            if (*(char **)(p + 0x22C) != 0) *(int *)(*(char **)(p + 0x22C) + 0xC) = 0x30443;
        }
        break;
    case 4:
        f = *(float *)(p + 0x110) + D_005BDEC8 * *(float *)(p + 0x10);
        *(float *)(p + 0x110) = f < D_005BDECC ? f : D_005BDECC;
        func_00131650(tmp, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(tmp), "f"(*(float *)(p + 0x110) * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(int *)(p + 0xBC8) & 0x30000) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}
