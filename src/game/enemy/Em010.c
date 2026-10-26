#include "game/mt_rand.h"
typedef struct { signed char a; signed char b; signed char c; signed char d; signed char e; signed char f; signed char g; char pad; float fl; signed char c0; signed char c1; signed char c2; signed char c3; signed char c4; char pad2[3]; } T3E6;

extern T3E6 D_00569A20[];

extern float D_00570108[];

extern float D_0057010C[];

extern float D_00570204[];

extern float D_00570208[];

extern float D_005700B4[];

extern float D_005700B8[];

extern float D_005701B0[];

extern float D_005701B4[];

extern float D_00570064[];

extern float D_0057015C[];

extern float D_00570160[];

void func_0024DB10(char *, int, int, int, int, int, int);

void func_0024DA80(char *, int, int);

#define T3 D_00569A20[*(int *)(p + 0x1F94)]

#define SETF(A, B, CMP) a = A[0]; *(float *)(p + 0x30A0) = a; b = B[0]; *(float *)(p + 0x30A4) = b; if (*(unsigned char *)(p + 0x3BF9) != CMP) { *(float *)(p + 0x3120) = a; *(float *)(p + 0x3124) = b; }

void func_003E6750(char *p, int k, int bl, int x) {
    extern float D_00570060[];
    float a;
    float b;
    *(int *)(p + 0x1F94) = k;
    if (bl != 0) {
        func_0024DB10(p + 0x1FD0, T3.a, T3.b, -1, -1, -1, x);
        func_0024DB10(p + 0x20A0, T3.a, T3.b, -1, -1, -1, x);
    } else {
        func_0024DA80(p + 0x1FD0, T3.a, T3.b);
        func_0024DA80(p + 0x20A0, T3.a, T3.b);
    }
    if (T3.g != 0) *(float *)(p + 0x3934) = 1.0f;
    else *(float *)(p + 0x3934) = 0.0f;
    *(unsigned char *)(p + 0x3A50) = T3.f != 0;
    *(signed char *)(p + 0x1FC4) = T3.c;
    *(signed char *)(p + 0x1FC5) = T3.d;
    *(signed char *)(p + 0x1FC6) = T3.e;
    *(float *)(p + 0x3A04) = T3.fl;
    *(float *)(p + 0x2170) = 1.0f;
    *(signed char *)(p + 0x3434) = T3.c0;
    *(signed char *)(p + 0x3436) = T3.c1;
    *(signed char *)(p + 0x3435) = T3.c2;
    *(signed char *)(p + 0x3437) = T3.c3;
    *(signed char *)(p + 0x3438) = T3.c4;
    if (*(unsigned char *)(p + 0x3435) == 3 || *(unsigned char *)(p + 0x3434) == 1) {
        switch (k) {
        case 0x1C:
        case 0x1B:
        case 0x15:
        case 0x14:
        case 0x13:
        case 0x20:
            switch (*(signed char *)(p + 0x1FC9)) {
            case 0:
                SETF(D_00570108, D_0057010C, 2)
                break;
            case 1:
                SETF(D_00570204, D_00570208, 2)
                break;
            }
            *(unsigned char *)(p + 0x3BF9) = 2;
            break;
        default:
            switch (*(signed char *)(p + 0x1FC9)) {
            case 0:
                SETF(D_005700B4, D_005700B8, 1)
                break;
            case 1:
                SETF(D_005701B0, D_005701B4, 1)
                break;
            }
            *(unsigned char *)(p + 0x3BF9) = 1;
            break;
        }
    } else {
        switch (*(signed char *)(p + 0x1FC9)) {
        case 0:
            SETF(D_00570060, D_00570064, 0)
            break;
        case 1:
            SETF(D_0057015C, D_00570160, 0)
            break;
        }
        *(unsigned char *)(p + 0x3BF9) = 0;
    }
}

/* Fades a blend factor to 1 and builds the colour/position vectors from it. */
void func_00133450(char *, float *, float *);

void func_003F0460(char *);

void func_003EFCE0(char *p) {
    int func_0024E800(char *);
    void func_003F2F60(char *);
    float v[4];
    float w[4];
    *(float *)(p + 0x3A8C) += 0.05f * *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) > 1.0f) {
        *(float *)(p + 0x3A8C) = 1.0f;
    }
    v[0] = *(float *)(p + 0x3AC0) * (1.0f - *(float *)(p + 0x3A8C));
    v[1] = *(float *)(p + 0x3A8C) + *(float *)(p + 0x3AC4) * (1.0f - *(float *)(p + 0x3A8C));
    v[2] = *(float *)(p + 0x3AC8) * (1.0f - *(float *)(p + 0x3A8C));
    v[3] = 0.0f;
    w[0] = *(float *)(p + 0x700);
    w[1] = *(float *)(p + 0x704);
    w[2] = *(float *)(p + 0x708);
    w[3] = 0.0f;
    func_00133450(p + 0x6E0, v, w);
    func_003F2F60(p);
    if (func_0024E800(p + 0x1FD0)) {
        func_003F0460(p);
    }
}

void func_001AAD30(char *);

void func_0024FE00(char *);

void func_00320540(char *);

void func_0031E400(char *);

void func_00100450(char *, void *, void *, int, int);

void func_002790E0(char *);

void func_0031DCB0(char *);

void func_002030F0(char *);

void func_0013D6A0(char *);

void func_0024D930(char *);

void func_0028C110(char *);

void func_00291100(char *);

void func_002E7BF0(char *);

void func_002E8A10(char *);

void func_00313E20(char *);

void func_0022C820(char *);

void func_002E1BC0(char *);

void func_003C9D90(char *);

void func_003AD780(char *);

typedef struct { char pad[0x7F4]; int a[44]; int b[44]; } S3E1;

char *func_003E1A60(char *p) {
    void func_0013D240(char *, int);
    void func_00203090(char *, int);
    void func_002047C0(char *, int);
    extern char D_005B1930[], D_005B1954[], D_005B19D4[], D_005B1A68[], D_005B1B34[], D_005B1BEC[];
    extern char D_005A77A0[], D_005AAA98[], D_005B0890[], D_005AFA60[];
    int i;
    S3E1 *q = (S3E1 *)p;
    int j;
    char *s;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B1930;
    *(char **)(p + 0x40) = D_005B1954;
    *(char **)(p + 0xA0) = D_005B19D4;
    *(char **)(p + 0xD0) = D_005B1A68;
    *(char **)(p + 0x130) = D_005B1B34;
    *(char **)(p + 0x1D0) = D_005B1BEC;
    func_00100450(p + 0x1D8, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0x50);
    func_002790E0(p + 0x980);
    func_002790E0(p + 0xF80);
    func_0031DCB0(p + 0x1580);
    func_0031DCB0(p + 0x1610);
    func_002790E0(p + 0x16C0);
    func_00100450(p + 0x1CC0, (void *)func_002030F0, (void *)func_00203090, 0x40, 6);
    s = p + 0x1E40;
    *(float *)(p + 0x1E48) = 0.3f;
    *(float *)(p + 0x1E4C) = 0.98f;
    *(float *)(p + 0x1E50) = 0.95f;
    *(float *)(p + 0x1E54) = 50.0f;
    *(float *)(p + 0x1E60) = 0.0f;
    *(float *)(p + 0x1E64) = -0.1f;
    *(float *)(p + 0x1E68) = 0.0f;
    *(float *)(p + 0x1E6C) = 0.0f;
    *(int *)(p + 0x1E44) = 0;
    func_0013D6A0(s + 0x34);
    *(int *)(s + 0) = 0;
    *(int *)(s + 0x30) = 0;
    *(float *)(s + 0x64) = -999999.0f;
    *(float *)(s + 0x50) = 0.0f;
    *(float *)(s + 0x54) = 0.0f;
    *(float *)(s + 0x58) = 0.0f;
    *(float *)(s + 0x5C) = 0.0f;
    *(float *)(s + 0x60) = 0.0f;
    *(float *)(s + 0x68) = 1.0f;
    func_0024D930(p + 0x1FD0);
    func_0024D930(p + 0x20A0);
    func_0028C110(p + 0x2180);
    *(char *)(p + 0x23A0) = 0;
    *(char *)(p + 0x23A1) = 0;
    *(short *)(p + 0x23A2) = 0;
    *(int *)(p + 0x23A8) = 0;
    *(int *)(p + 0x23AC) = 0;
    *(int *)(p + 0x23B0) = 0;
    *(float *)(p + 0x23C0) = 0.0f;
    *(float *)(p + 0x23C4) = 0.0f;
    *(float *)(p + 0x23C8) = 0.0f;
    *(float *)(p + 0x23CC) = 1.0f;
    *(float *)(p + 0x23D0) = 100000.0f;
    *(char *)(p + 0x23D4) = 0;
    *(char *)(p + 0x23D5) = 0;
    *(short *)(p + 0x23D6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + 0x23D8 + i * 2) = -1;
    func_00100450(p + 0x23F0, (void *)func_00291100, (void *)func_002047C0, 0x50, 0x28);
    func_002E7BF0(p + 0x33A8);
    func_002E8A10(p + 0x33F4);
    func_00313E20(p + 0x340C);
    s = p + 0x36F0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x3780;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x3810;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x38A0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x3940;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005B0890;
    func_003C9D90(s);
    s = p + 0x39A0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005B0890;
    func_003C9D90(s);
    s = p + 0x3AF0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AFA60;
    func_003AD780(s);
    q = (S3E1 *)p;
    for (j = 0; j < 44; j++) {
        q->b[j] = 0;
        q->a[j] = 0;
    }
    return p;
}

extern char D_01CAFF0C[];

void func_003E6E20(char *p0) {
    char *v1;
    float tmp3;
    float tmp4;
    float tmp7;
    float tmp8;
    float tmp11;
    float tmp12;
    float tmp15;
    float tmp16;
    v1 = *(char **)(*(char **)D_01CAFF0C + 12);
    if (*(float *)(p0 + 14644) > *(float *)(p0 + 14640)) {
        *(float *)(p0 + 14640) += 0.05f * *(float *)(p0 + 16);
        if (*(float *)(p0 + 14640) >= *(float *)(p0 + 14644)) {
            *(float *)(p0 + 14640) = *(float *)(p0 + 14644);
        }
    }
    if (*(float *)(p0 + 14644) < *(float *)(p0 + 14640)) {
        *(float *)(p0 + 14640) -= 0.05f * *(float *)(p0 + 16);
        if (*(float *)(p0 + 14640) <= *(float *)(p0 + 14644)) {
            *(float *)(p0 + 14640) = *(float *)(p0 + 14644);
        }
    }
    tmp3 = (150.0f + *(float *)(v1 + 84));
    tmp4 = *(float *)(v1 + 88);
    *(float *)(p0 + 14112) = *(float *)(v1 + 80);
    *(float *)(p0 + 14116) = tmp3;
    *(float *)(p0 + 14120) = tmp4;
    *(int *)(p0 + 14124) = 0x3f800000;
    *(char *)(p0 + 14084) = 2;
    *(float *)(p0 + 14192) = (0.5f * *(float *)(p0 + 14640));
    tmp7 = (150.0f + *(float *)(v1 + 84));
    tmp8 = *(float *)(v1 + 88);
    *(float *)(p0 + 14400) = *(float *)(v1 + 80);
    *(float *)(p0 + 14404) = tmp7;
    *(float *)(p0 + 14408) = tmp8;
    *(int *)(p0 + 14412) = 0x3f800000;
    *(char *)(p0 + 14372) = 2;
    *(float *)(p0 + 14480) = *(float *)(p0 + 14640);
    tmp11 = (150.0f + *(float *)(v1 + 84));
    tmp12 = *(float *)(v1 + 88);
    *(float *)(p0 + 14256) = *(float *)(v1 + 80);
    *(float *)(p0 + 14260) = tmp11;
    *(float *)(p0 + 14264) = tmp12;
    *(int *)(p0 + 14268) = 0x3f800000;
    *(char *)(p0 + 14228) = 2;
    *(float *)(p0 + 14336) = (0.5f * *(float *)(p0 + 14640));
    tmp15 = (150.0f + *(float *)(v1 + 84));
    tmp16 = *(float *)(v1 + 88);
    *(float *)(p0 + 14544) = *(float *)(v1 + 80);
    *(float *)(p0 + 14548) = tmp15;
    *(float *)(p0 + 14552) = tmp16;
    *(int *)(p0 + 14556) = 0x3f800000;
    *(char *)(p0 + 14516) = 2;
    *(float *)(p0 + 14624) = *(float *)(p0 + 14640);
}

extern float D_005BD108[];

void func_003F32B0(char *);

void func_003EDC10(char *);

void func_003EDEF0(char *p) {
    void func_003F2F60(char *);
    void func_003E9930(char *);
    func_003F2F60(p);
    func_003F32B0(p);
    *(float *)(p + 0x3A8C) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        if (100.0f * (2.3283064e-10f * mt_rand()) > D_005BD108[0]) {
            func_003EDC10(p);
        } else {
            func_003E9930(p);
        }
        return;
    }
}

int func_002018A0(char *, float *, float *, char *, char *, int);

unsigned char func_003F3000(char *p, char *a, char *out) {
    float s[4] __attribute__((aligned(16)));
    float e[4] __attribute__((aligned(16)));
    unsigned char r;
    s[0] = *(float *)(p + 0x710) + 100.0f * *(float *)(p + 0x6F0);
    s[1] = *(float *)(p + 0x714) + 100.0f * *(float *)(p + 0x6F4);
    s[2] = *(float *)(p + 0x718) + 100.0f * *(float *)(p + 0x6F8);
    s[3] = 1.0f;
    e[0] = *(float *)(p + 0x710) - 100.0f * *(float *)(p + 0x6F0);
    e[1] = *(float *)(p + 0x714) - 100.0f * *(float *)(p + 0x6F4);
    e[2] = *(float *)(p + 0x718) - 100.0f * *(float *)(p + 0x6F8);
    e[3] = 1.0f;
    r = func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, s, e, a, out, 0x10);
    if (r != 0) {
        if (!(*(float *)(out + 0x2C) <= 0.707f)) {
            r = 0;
        } else {
            r = 1;
        }
    }
    return r;
}

void func_003EF860(char *p) {
    int func_0024E800(char *);
    void func_003EF580(char *);
    *(float *)(p + 1812) += *(float *)(p + 14868) * *(float *)(p + 16);
    *(float *)(p + 14868) += -0.896f * *(float *)(p + 16);
    if (func_0024E800(p + 8144) != 0 || *(float *)(p + 15012) > 0.0f) {
        func_003EF580(p);
    }
}

void func_003EBDA0(char *p) {
    void func_003F2F60(char *);
    void func_003E9930(char *);
    func_003F2F60(p);
    if ((*(float *)(p + 0x3A8C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_003E9930(p);
    }
}

char *func_00279290(char *);

void func_001A23D0(char *);

void func_00320710(char *, char *, int);

void func_003E63B0(char *p, char *e, int c) {
    void func_00206730(char *);
    void func_001AD140(char *);
    if (*(unsigned char *)(p + 0x14D) != 3) {
        *(unsigned char *)(p + 0x3BFA) = 0;
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        func_00206730(p + 0x3BE8);
        func_00206730(p + 0x3BEC);
        func_00206730(p + 0x3BF0);
        if (*(char **)(p + 0x3BE8) != 0) {
            func_001AD140(*(char **)(p + 0x3BE8));
        }
        if (*(char **)(p + 0x3BEC) != 0) {
            func_001AD140(*(char **)(p + 0x3BEC));
        }
        if (*(char **)(p + 0x3BF0) != 0) {
            func_001AD140(*(char **)(p + 0x3BF0));
        }
        if (*(signed char *)(e + 2) == 0 && *(signed char *)e == 7) {
            *(unsigned char *)(p + 0x3BFA) = 1;
            *(unsigned char *)(p + 0x36E0) = 1;
        }
        func_00320710(p + 0x130, e, c);
        *(unsigned char *)(p + 0x3A31) = 1;
    }
}

extern char D_01DFABA0[];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_003E6560(char *p) {
    char *func_00207480(int, int, float *, int);
    void func_003305E0(char *, int, int, char *, int, int, int);
    void func_00206730(char *);
    float m[16] __attribute__((aligned(16)));
    UNIT(m);
    func_00206730(p + 0x3BDC);
    if (*(char **)(p + 0x3BDC) == 0) {
        *(char **)(p + 0x3BDC) = func_00207480(3, 0x2CC, m, 0x10);
        if (*(char **)(p + 0x3BDC) != 0) {
            (*(char **)(p + 0x3BDC))[0x3A] = 1;
            {
                char *o = *(char **)(p + 0x3BDC);
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x81C) + 0x104);
                o[0x9A] = 1;
            }
        }
    }
    func_00206730(p + 0x3BE0);
    if (*(char **)(p + 0x3BE0) == 0) {
        *(char **)(p + 0x3BE0) = func_00207480(3, 0xDC, m, 0x10);
        if (*(char **)(p + 0x3BE0) != 0) {
            (*(char **)(p + 0x3BE0))[0x3A] = 1;
            {
                char *o = *(char **)(p + 0x3BE0);
                *(char **)(o + 0x90) = p + 0x6E0;
                o[0x9A] = 1;
            }
            {
                char *o = *(char **)(p + 0x3BE0);
                o[0x9C] = 0x40;
                o[0x9D] = 0x20;
                *(unsigned char *)(o + 0x9E) = 0x80;
                o[0x9B] = 2;
            }
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, p + 0x50, 0, 0, 0);
}

void func_003E6260(char *p) {
    if (*(unsigned char *)(p + 4) != 0) {
        *(char *)(p + 0x3B92) = 1;
        if (*(unsigned char *)(p + 0x14D) != 3) {
            *(volatile unsigned char *)(p + 0x3A4D);
        }
    }
}

typedef struct { float x, y, z, w; } V4h;

int func_003E6500(char *p, int k, V4h *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4h *)(p + 0x50);
        out->y += 150.0f;
        *r = 150.0f;
        return 1;
    }
    return 0;
}

int func_0024E780(char *, int, int);

void func_0024E7B0(char *, int, int);

void func_001A2600(char *, int);

void func_003F0F10(char *p) {
    int func_0024E800(char *);
    void func_003E9930(char *);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 0:
        func_001A2600(func_00279290(p + 0x980), 1);
        func_001A2600(func_00279290(p + 0xF80), 1);
        break;
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        break;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

void func_003F1130(char *p) {
    void func_003E9930(char *);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 0:
        func_001A2600(func_00279290(p + 0x980), 1);
        func_001A2600(func_00279290(p + 0xF80), 1);
        break;
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        break;
    }
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        func_003E9930(p);
    }
}

void func_003F1360(char *p) {
    void func_003E9930(char *);
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 0:
        func_001A2600(func_00279290(p + 0x980), 1);
        func_001A2600(func_00279290(p + 0xF80), 1);
        break;
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        break;
    }
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        func_003E9930(p);
    }
}

void func_0034BA60(int, char *, int, int, int);

void func_003206E0(char *);

void func_003E6150(char *p) {
    if (*(unsigned char *)(p + 0x14D) != 3) {
        func_003206E0(p + 0x130);
        if (*(unsigned char *)(p + 0x3A4E) == 0) {
            switch (*(unsigned char *)(p + 0x342C)) {
            case 0x4C:
                func_0034BA60(0x23, p + 0x710, 0x1C, 0, 1);
                break;
            case 0x17:
            case 0x53:
                func_0034BA60(0x24, p + 0x710, 0x1C, 0, 1);
                break;
            case 0x56:
                func_0034BA60(0x24, p + 0x710, 0x1C, 0, 1);
                break;
            case 0x4F:
                func_0034BA60(0x23, p + 0x710, 0x1C, 0, 1);
                break;
            }
            *(unsigned char *)(p + 0x3B93) = 1;
        }
    }
}

static inline void fx_follow(char *o, char *t) {
    *(char **)(o + 0x90) = t;
    *(unsigned char *)(o + 0x9A) = 1;
}

static inline void fx_color(char *o, int r, int g, int b) {
    *(unsigned char *)(o + 0x9C) = r;
    *(unsigned char *)(o + 0x9D) = g;
    *(unsigned char *)(o + 0x9E) = b;
    *(unsigned char *)(o + 0x9B) = 2;
}

void func_003E6680(char *p) {
    char *func_00207480(int, int, char *, int);
    void func_003305E0(char *, int, int, int, int, int, int);
    void func_00206730(char *);
    float m[16];
    func_00206730(p + 0x3BE4);
    if (*(char **)(p + 0x3BE4) == 0) {
        *(char **)(p + 0x3BE4) = func_00207480(3, 0xE9, (char *)m, 0x10);
        if (*(char **)(p + 0x3BE4) != 0) {
            *(unsigned char *)(*(char **)(p + 0x3BE4) + 0x3A) = 1;
            fx_follow(*(char **)(p + 0x3BE4), p + 0x6E0);
            fx_color(*(char **)(p + 0x3BE4), 0x40, 0x20, 0x80);
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_003ED8E0(char *p) {
    void func_003F2E90(char *);
    int func_0024E800(char *);
    void func_003E9930(char *);
    char *e;
    func_003F2E90(p);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 4)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 7);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(char **)(*(char **)(p + 0x8C8) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    case 2:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 7);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(char **)(*(char **)(p + 0x818) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    }
    if (*(int *)(p + 0x35E4) == 0 && func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

void func_002F2D30(char *, char *);

void func_003E5240(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    void func_00286040(char *);
    void func_00228350(char *);
    char *g;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_00206730(p + 0x3BD4);
    if (*(char **)(p + 0x3BD4) != 0) {
        func_001AD140(*(char **)(p + 0x3BD4));
    }
    func_00206730(p + 0x3BD8);
    if (*(char **)(p + 0x3BD8) != 0) {
        func_001AD140(*(char **)(p + 0x3BD8));
    }
    func_00206730(p + 0x3BDC);
    if (*(char **)(p + 0x3BDC) != 0) {
        func_001AD140(*(char **)(p + 0x3BDC));
    }
    func_00206730(p + 0x3BE0);
    if (*(char **)(p + 0x3BE0) != 0) {
        func_001AD140(*(char **)(p + 0x3BE0));
    }
    func_00206730(p + 0x3BE4);
    if (*(char **)(p + 0x3BE4) != 0) {
        func_001AD140(*(char **)(p + 0x3BE4));
    }
    func_00286040(p + 0x3BFC);
    func_00286040(p + 0x3C00);
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) {
        func_001AD140(*(char **)(p + 0x3BE8));
    }
    if (*(char **)(p + 0x3BEC) != 0) {
        func_001AD140(*(char **)(p + 0x3BEC));
    }
    if (*(char **)(p + 0x3BF0) != 0) {
        func_001AD140(*(char **)(p + 0x3BF0));
    }
    switch (*(int *)(p + 0x7D8)) {
    case 1:
        break;
    default:
        func_00228350(p + 0xC8);
        if (*(char **)(p + 0xC8) != 0) {
            func_001AD140(*(char **)(p + 0xC8));
        }
        break;
    }
}

void func_002F2FB0(char *);

char *func_002F3080(char *);

char *func_003F36A0(char *p) {
    char *e;
    func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
    for (;;) {
        e = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
        if (e == 0) break;
        if (*(signed char *)(e + 0x46) != 0x1C) continue;
        if (e == p) continue;
        if (*(unsigned char *)(e + 0x18) != 2) continue;
        if (*(unsigned char *)(e + 0x3A32) != 1) continue;
        if (*(char **)(e + 0x3A44) == 0) {
            *(char **)(e + 0x3A44) = p;
            *(unsigned char *)(p + 0x3A33) = 0;
        } else if (*(char **)(e + 0x3A48) == 0) {
            *(char **)(e + 0x3A48) = p;
            *(unsigned char *)(p + 0x3A33) = 1;
        }
        *(char **)(p + 0x3A40) = e;
        return e;
    }
    *(unsigned char *)(p + 0x3A32) = 1;
    *(unsigned char *)(p + 0x3A33) = 2;
    *(int *)(p + 0x3A44) = 0;
    *(int *)(p + 0x3A48) = 0;
    *(int *)(p + 0x3A40) = 0;
    *(unsigned char *)(p + 0x3A4C) = 0;
    return 0;
}

void func_0024DD30();

void func_003E6C60(char *p0) {
    float t0;
    float t1;
    t0 = (*(float *)(p0 + 16) * *(float *)(p0 + 8560));
    t1 = *(float *)(p0 + 16);
    *(float *)(p0 + 8564) = (*(float *)(p0 + 16) * *(float *)(p0 + 8560));
    func_0024DD30((p0 + 8144));
    func_0024DD30((p0 + 8352));
}

void func_003F3AE0();

void func_003F3900(int p0) {
    void func_00206730();
    func_00206730((p0 + 15316));
    func_00206730((p0 + 15320));
    func_00206730((p0 + 15324));
    func_00206730((p0 + 15328));
    func_00206730((p0 + 15332));
    func_00206730((p0 + 15336));
    func_00206730((p0 + 15340));
    func_00206730((p0 + 15344));
    func_003F3AE0((p0 + 14904));
}

void func_003F3A20(int p0) {
    void func_00206730();
    void func_00228350();
    void func_00286040();
    func_00206730((p0 + 15316));
    func_00228350((p0 + 200));
    func_00206730((p0 + 15320));
    func_00206730((p0 + 15328));
    func_00206730((p0 + 15332));
    func_00286040((p0 + 15356));
    func_00286040((p0 + 15360));
    func_00206730((p0 + 15336));
    func_00206730((p0 + 15340));
    func_00206730((p0 + 15344));
}

void func_003F3A90(char **h) {
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

void func_003EC5B0(char *p) {
    void func_003F2F60(char *);
    void func_003E9930(char *);
    func_003F2F60(p);
    if ((*(float *)(p + 0x3A8C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_003E9930(p);
    }
}

void func_003ECB80(char *p) {
    void func_003F2F60(char *);
    void func_003E9930(char *);
    func_003F2F60(p);
    if ((*(float *)(p + 0x3A8C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_003E9930(p);
    }
}

void func_003ED0C0(char *p) {
    void func_003F2F60(char *);
    void func_003E9930(char *);
    func_003F2F60(p);
    if ((*(float *)(p + 0x3A8C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_003E9930(p);
    }
}

void func_003EE350(char *p) {
    void func_003F2F60(char *);
    void func_003E9930(char *);
    func_003F2F60(p);
    if ((*(float *)(p + 0x3A8C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_003E9930(p);
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E7C40();

void func_002E8A50();

void func_00313E60();

void func_0031DD00();

void func_0031E440();

void func_00320590();

char *func_003E1E40(char *p, short flag) {
    extern char D_005A77A0[];
    extern char D_005AAA98[];
    extern char D_005AFA60[];
    extern char D_005B0890[];
    extern char D_005B1930[];
    extern char D_005B1954[];
    extern char D_005B19D4[];
    extern char D_005B1A68[];
    extern char D_005B1B34[];
    extern char D_005B1BEC[];
    void func_0013D240();
    void func_00203090();
    void func_002047C0();
    if (p != 0) {
        *(char * *)(p) = D_005B1930;
        *(char * *)(p + 64) = D_005B1954;
        *(char * *)(p + 160) = D_005B19D4;
        *(char * *)(p + 208) = D_005B1A68;
        *(char * *)(p + 304) = D_005B1B34;
        *(char * *)(p + 464) = D_005B1BEC;
        if (p + 15088 != 0) {
            *(char * *)(p + 15104) = D_005AFA60;
            if (p + 15088 != 0) {
                *(char * *)(p + 15104) = D_005A77A0;
            }
        }
        if (p + 14752 != 0) {
            *(char * *)(p + 14768) = D_005B0890;
            if (p + 14752 != 0) {
                *(char * *)(p + 14768) = D_005A77A0;
            }
        }
        if (p + 14656 != 0) {
            *(char * *)(p + 14672) = D_005B0890;
            if (p + 14656 != 0) {
                *(char * *)(p + 14672) = D_005A77A0;
            }
        }
        if (p + 14496 != 0) {
            *(char * *)(p + 14512) = D_005AAA98;
            if (p + 14496 != 0) {
                *(char * *)(p + 14512) = D_005A77A0;
            }
        }
        if (p + 14352 != 0) {
            *(char * *)(p + 14368) = D_005AAA98;
            if (p + 14352 != 0) {
                *(char * *)(p + 14368) = D_005A77A0;
            }
        }
        if (p + 14208 != 0) {
            *(char * *)(p + 14224) = D_005AAA98;
            if (p + 14208 != 0) {
                *(char * *)(p + 14224) = D_005A77A0;
            }
        }
        if (p + 14064 != 0) {
            *(char * *)(p + 14080) = D_005AAA98;
            if (p + 14064 != 0) {
                *(char * *)(p + 14080) = D_005A77A0;
            }
        }
        func_00313E60(p + 13324, -1);
        func_002E8A50(p + 13300, -1);
        func_002E7C40(p + 13224, -1);
        func_001003E0(p + 9200, (void *)func_002047C0, 80, 40);
        func_0028C1A0(p + 8576, -1);
        func_0024D9A0(p + 8352, -1);
        func_0024D9A0(p + 8144, -1);
        if (p + 7744 != 0) {
            func_0013D240(p + 7796, -1);
        }
        func_001003E0(p + 7360, (void *)func_00203090, 64, 6);
        func_002791E0(p + 5824, -1);
        func_0031DD00(p + 5648, -1);
        func_0031DD00(p + 5504, -1);
        func_002791E0(p + 3968, -1);
        func_002791E0(p + 2432, -1);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 80);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_003212D0();

int func_003E60F0(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 333);
    if (v0 != 3) {
        v1 = func_003212D0((p0 + 304), p1, p2, v0);
    }
    return v1;
}

int func_003213B0();

int func_003E6120(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 333);
    if (v0 != 3) {
        v1 = func_003213B0((p0 + 304), p1, p2, v0);
    }
    return v1;
}

int func_003EF1C0();

int func_003E64C0(p0) char *p0; {
    int v0;
    int v1;
    if (*(unsigned char *)(p0 + 333) != 3) {
        v0 = *(unsigned char *)(p0 + 13356);
        if (v0 == 1) {
            v1 = func_003EF1C0(p0, v0);
        }
    }
    return v1;
}

void func_003E7980(p0, p1) char *p0; int p1; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 14897);
    v0 = 1;
    if (tmp0 == 0) {
        *(char *)(p0 + 14925) = v0;
        *(int *)(p0 + 13360) = p1;
        *(char *)(p0 + 15355) = 0;
    }
}

void func_003E79A0(p0, p1) char *p0; int p1; {
    char *v0;
    v0 = *(char **)(p0 + 13388);
    if (((int)v0 < 3)) {
        v0 = (char *)((int)v0 << 2);
        v0 = (v0 + (int)p0);
        *(int *)(v0 + 13372) = p1;
        *(int *)(p0 + 13388) = (*(int *)(p0 + 13388) + 1);
    }
}

int func_003E8330();

void func_003E7F90(p0, p1) char *p0; int p1; {
    extern char D_00570060[];
    int v0;
    float v1;
    int tmp0;
    *(char *)(p0 + 13356) = p1;
    *(char *)(p0 + 14976) = 1;
    *(char *)(p0 + 14977) = 0;
    v1 = *(float *)D_00570060;
    *(float *)(p0 + 12448) = v1;
    *(int *)(p0 + 8560) = 0x3f800000;
    v0 = *(unsigned char *)(p0 + 13356);
    switch (v0) {
    case 19:
    case 20:
    case 21:
    case 23:
        break;
    default:
        tmp0 = func_003E8330(p0, v0);
        break;
    }
}

int func_003E8330(p0) char *p0; {
    int func_001AD140();
    int func_00206730();
    int v0;
    int v1;
    *(int *)(p0 + 13796) = 0;
    v0 = func_00206730((p0 + 15320));
    v1 = *(int *)(p0 + 15320);
    if (v1 != 0) {
        v0 = func_001AD140(v1);
    }
    return v0;
}

int func_003EA390();

int func_003EAEB0(p0) int p0; {
    int func_0024E800();
    void func_003F2E90();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2E90();
    func_003F2F60(p0);
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003EA390(v1);
    }
    return v0;
}

int func_003EBA90(p0) char *p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    int v0;
    int v1;
    *(char *)(p0 + 14976) = 1;
    *(float *)(p0 + 1812) = (*(float *)(p0 + 1812) + (*(float *)(p0 + 14868) * *(float *)(p0 + 16)));
    *(float *)(p0 + 14868) = (*(float *)(p0 + 14868) + (-1.2000000476837158f * *(float *)(p0 + 16)));
    func_003F2E90();
    v0 = func_0024E800((p0 + 8144));
    v1 = (int)p0;
    if (v0 != 0) {
        v0 = func_003E9930(v1);
    }
    return v0;
}

int func_003ED8A0(p0) int p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    int v0;
    int v1;
    func_003F2E90();
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003E9930(v1);
    }
    return v0;
}

int func_003F3830();

int func_003EE9B0(p0) int p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2F60();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    tmp0 = func_003F3830();
    if (tmp0 != 0) {
        tmp1 = *(unsigned char *)(v0 + 15248);
        v1 = 2;
        if (tmp1 == 0) {
            *(char *)(v0 + 13365) = v1;
            *(char *)(v0 + 13367) = v1;
            *(char *)(v0 + 13368) = v1;
        } else {
            *(char *)(v0 + 13365) = 6;
            *(char *)(v0 + 13367) = 4;
            *(char *)(v0 + 13368) = 2;
        }
    } else {
        *(char *)(v0 + 13365) = 0;
        *(char *)(v0 + 13367) = 0;
        *(char *)(v0 + 13368) = 0;
    }
    func_003F2F60(v0);
    v3 = func_0024E800((v0 + 8144));
    v2 = (int)v0;
    if (v3 != 0) {
        v3 = func_003E9930(v2);
    }
    return v3;
}

int func_003F0A40();

int func_003EF220(p0) int p0; {
    int func_0024E800();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2F60();
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003F0A40(v1);
    }
    return v0;
}

void func_003EF4C0(p0) int p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2F60();
    int v0;
    float v1;
    int tmp14;
    int tmp15;
    func_003F2F60();
    *(float *)((char *)p0 + 1808) = (*(float *)((char *)p0 + 1808) + (*(float *)((char *)p0 + 16) * (*(float *)((char *)p0 + 1792) * *(float *)((char *)p0 + 14872))));
    *(float *)((char *)p0 + 1812) = (*(float *)((char *)p0 + 1812) + (*(float *)((char *)p0 + 16) * (*(float *)((char *)p0 + 1796) * *(float *)((char *)p0 + 14872))));
    *(float *)((char *)p0 + 1816) = (*(float *)((char *)p0 + 1816) + (*(float *)((char *)p0 + 16) * (*(float *)((char *)p0 + 1800) * *(float *)((char *)p0 + 14872))));
    *(float *)((char *)p0 + 14872) = (*(float *)((char *)p0 + 14872) * (0.699999988079071f * *(float *)((char *)p0 + 16)));
    tmp14 = func_0024E800((p0 + 8144));
    v0 = p0;
    if (tmp14 != 0) {
        tmp15 = func_003E9930(v0);
    }
}

int func_003EF640(p0) int p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    int v0;
    int v1;
    func_003F2E90();
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003E9930(v1);
    }
    return v0;
}

int func_003F0110(p0) int p0; {
    int func_0024E800();
    int func_003EF580();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2F60();
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003EF580(v1);
    }
    return v0;
}

int func_003F02E0(p0) int p0; {
    int func_0024E800();
    int func_003EF580();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2F60();
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003EF580(v1);
    }
    return v0;
}

int func_003F0410(p0) int p0; {
    int func_0024E800();
    int func_003EF580();
    void func_003F2E90();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2E90();
    func_003F2F60(p0);
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003EF580(v1);
    }
    return v0;
}

int func_003EF5E0();

int func_003F04B0(p0) int p0; {
    int func_0024E800();
    void func_003F2E90();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2E90();
    func_003F2F60(p0);
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003EF5E0(v1);
    }
    return v0;
}

void func_003F2D20(float);

int func_003F0C80(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    void func_003F2F60();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    if (*(signed char *)(p0 + 8132) != 0) {
        func_003F2D20((*(float *)(v0 + 14852) * *(float *)(v0 + 16)));
    }
    v1 = (int)v0;
    if (*(signed char *)(v0 + 8133) != 0) {
        func_003F2E90(v1);
    }
    v2 = (int)v0;
    if (*(signed char *)(v0 + 8134) != 0) {
        func_003F2F60(v2);
    }
    v3 = func_0024E800((v0 + 8144));
    v4 = (int)v0;
    if (v3 != 0) {
        v3 = func_003E9930(v4);
    }
    return v3;
}

int func_003F16B0(p0) int p0; {
    int func_0024E800();
    int func_003E9930();
    int v0;
    int v1;
    v1 = func_0024E800((p0 + 8144));
    v0 = p0;
    if (v1 != 0) {
        v1 = func_003E9930(v0);
    }
    return v1;
}

int func_003F1F10(p0) int p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    void func_003F2F60();
    int v0;
    int v1;
    func_003F2F60();
    func_003F2E90(p0);
    v0 = func_0024E800((p0 + 8144));
    v1 = p0;
    if (v0 != 0) {
        v0 = func_003E9930(v1);
    }
    return v0;
}

void func_003F2690(p0) char *p0; {
    int func_003E9930();
    float v0;
    int tmp2;
    v0 = 0.0f;
    *(float *)(p0 + 14988) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 14988) < v0) {
        tmp2 = func_003E9930();
    }
}

int func_003F2770(p0) char *p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    void func_003F2F60();
    int v0;
    int v1;
    *(char *)(p0 + 14976) = 1;
    *(float *)(p0 + 1812) = (*(float *)(p0 + 1812) + (*(float *)(p0 + 14868) * *(float *)(p0 + 16)));
    *(float *)(p0 + 14868) = (*(float *)(p0 + 14868) + (-1.2000000476837158f * *(float *)(p0 + 16)));
    func_003F2F60();
    func_003F2E90(p0);
    v1 = func_0024E800((p0 + 8144));
    v0 = (int)p0;
    if (v1 != 0) {
        v1 = func_003E9930(v0);
    }
    return v1;
}

int func_003F3970(p0) char *p0; {
    int func_0024E800();
    int func_003E9930();
    void func_003F2E90();
    void func_003F2F60();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    if (*(signed char *)(p0 + 8132) != 0) {
        func_003F2D20((*(float *)(v0 + 14852) * *(float *)(v0 + 16)));
    }
    v1 = (int)v0;
    if (*(signed char *)(v0 + 8133) != 0) {
        func_003F2E90(v1);
    }
    v2 = (int)v0;
    if (*(signed char *)(v0 + 8134) != 0) {
        func_003F2F60(v2);
    }
    v3 = func_0024E800((v0 + 8144));
    v4 = (int)v0;
    if (v3 != 0) {
        v3 = func_003E9930(v4);
    }
    return v3;
}

int func_003F3A10(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 2036);
}

extern void func_003E2670();

void func_003F3B30(char *p) { func_003E2670(p + -64); }

extern void func_003F3A00();

void func_003F3B40(char *p) { func_003F3A00(p + -64); }

extern void func_003F39F0();

void func_003F3B50(char *p) { func_003F39F0(p + -64); }

extern void func_003E56D0();

void func_003F3B80(char *p) { func_003E56D0(p + -64); }

extern void func_003E5F50();

void func_003F3BB0(char *p) { func_003E5F50(p + -64); }

extern void func_003E5550();

void func_003F3BC0(char *p) { func_003E5550(p + -64); }

extern void func_003E5CA0();

void func_003F3BD0(char *p) { func_003E5CA0(p + -64); }

extern void func_003E59F0();

void func_003F3BE0(char *p) { func_003E59F0(p + -64); }

extern void func_003E6290();

void func_003F3C00(char *p) { func_003E6290(p + -64); }

extern void func_003E53C0();

void func_003F3C30(char *p) { func_003E53C0(p + -64); }

extern void func_003E6740();

void func_003F3CA0(char *p) { func_003E6740(p + -304); }

void func_003F3CB0(char *p) { func_003E56D0(p + -304); }

void func_003F3CE0(char *p) { func_003E5F50(p + -304); }

void func_003F3CF0(char *p) { func_003E5550(p + -304); }

void func_003F3D00(char *p) { func_003E5CA0(p + -304); }

void func_003F3D10(char *p) { func_003E59F0(p + -304); }

void func_003F3D30(char *p) { func_003E6290(p + -304); }

extern void func_003E71A0();

void func_003F3D60(char *p) { func_003E71A0(p + -304); }

extern void func_003E8060();

void func_003F3D80(char *p) { func_003E8060(p + -464); }

extern void func_003E8050();

void func_003F3D90(char *p) { func_003E8050(p + -464); }

extern void func_003E8040();

void func_003F3DA0(char *p) { func_003E8040(p + -464); }

extern void func_003E8030();

void func_003F3DB0(char *p) { func_003E8030(p + -464); }

extern void func_003E8020();

void func_003F3DC0(char *p) { func_003E8020(p + -464); }

extern void func_003E8010();

void func_003F3DD0(char *p) { func_003E8010(p + -464); }

extern void func_003E7A00();

void func_003F3DF0(char *p) { func_003E7A00(p + -464); }

void func_003EA380(void) {}

void func_003EC020(void) {}

void func_003F2F90(char *p) { *(char *)(p + 8135) = 0; }

void func_003E79D0(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)(p0 + 13352) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 0;
    *(char *)(p0 + 13367) = 0;
    *(char *)(p0 + 13368) = 0;
}
