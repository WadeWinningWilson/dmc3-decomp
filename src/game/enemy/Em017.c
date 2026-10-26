#include "game/mt_rand.h"
char *func_00207480(int, int, char *, int);

extern char D_01DFABA0[];

void func_003F7BE0(char *p) {
    void func_003305E0(char *, int, int, char *, int, int, int);
    char *o;
    if (*(char **)(p + 0x3A0)) return;
    switch (*(signed char *)(p + 0x46)) {
    case 0x23: case 0x24: case 0x25:
        *(char **)(p + 0x3A0) = func_00207480(3, 0x2D2, 0, 0x10);
        break;
    case 0x26:
        *(char **)(p + 0x3A0) = func_00207480(3, 0x2D3, 0, 0x10);
        break;
    case 0x27: case 0x28:
        *(char **)(p + 0x3A0) = func_00207480(3, 0x2D4, 0, 0x10);
        break;
    }
    o = *(char **)(p + 0x3A0);
    if (o) {
        *(char **)(o + 0x90) = p + 0x410;
        *(unsigned char *)(o + 0x9A) = 1;
        *(unsigned char *)(*(char **)(p + 0x3A0) + 0x3A) = 1;
    }
    o = func_00207480(3, 0xDC, 0, 0x10);
    if (o) {
        *(char **)(o + 0x90) = p + 0x410;
        *(unsigned char *)(o + 0x9A) = 1;
        *(unsigned char *)(o + 0x3A) = 1;
        *(unsigned char *)(o + 0x9C) = 0x40;
        *(unsigned char *)(o + 0x9D) = 0x20;
        *(unsigned char *)(o + 0x9E) = 0x80;
        *(unsigned char *)(o + 0x9B) = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, p + 0x50, 0, 0, 0);
}

short func_0034B940(char *, char *);

int func_003FA5B0(char *p, char *other) {
    return (unsigned char)((unsigned short)(func_0034B940(other, p + 0x50) + 0x1000) >> 13);
}

extern float D_0056D718[];

extern float D_0056D71C[];

extern float D_0056CF48[];

extern float D_0056CF4C[];

extern float D_0056D328[];

extern float D_0056D32C[];

extern float D_0056CB68[];

extern float D_0056CB6C[];

extern float D_0056C7C8[];

extern float D_0056C7CC[];

extern float D_0056C428[];

extern float D_0056C42C[];

void func_003FA7E0(char *p) {
    if (*(float *)(p + 0x46C) <= 0.0f) {
        switch (*(signed char *)(p + 0x46)) {
        case 0x23:
            *(float *)(p + 0x46C) = D_0056D718[*(unsigned char *)(p + 0x3AB) * 9] + D_0056D71C[*(unsigned char *)(p + 0x3AB) * 9] * (2.3283064e-10f * mt_rand());
            break;
        case 0x24:
            *(float *)(p + 0x46C) = D_0056CF48[*(unsigned char *)(p + 0x3AB) * 5] + D_0056CF4C[*(unsigned char *)(p + 0x3AB) * 5] * (2.3283064e-10f * mt_rand());
            break;
        case 0x25:
            *(float *)(p + 0x46C) = D_0056D328[*(unsigned char *)(p + 0x3AB) * 5] + D_0056D32C[*(unsigned char *)(p + 0x3AB) * 5] * (2.3283064e-10f * mt_rand());
            break;
        case 0x26:
            *(float *)(p + 0x46C) = D_0056CB68[*(unsigned char *)(p + 0x3AB) * 9] + D_0056CB6C[*(unsigned char *)(p + 0x3AB) * 9] * (2.3283064e-10f * mt_rand());
            break;
        case 0x27:
            *(float *)(p + 0x46C) = D_0056C7C8[*(unsigned char *)(p + 0x3AB) * 5] + D_0056C7CC[*(unsigned char *)(p + 0x3AB) * 5] * (2.3283064e-10f * mt_rand());
            break;
        case 0x28:
            *(float *)(p + 0x46C) = D_0056C428[*(unsigned char *)(p + 0x3AB) * 5] + D_0056C42C[*(unsigned char *)(p + 0x3AB) * 5] * (2.3283064e-10f * mt_rand());
            break;
        }
    }
}

typedef struct { float a[4]; float b[4]; float c[5]; } T3F;

extern T3F D_0056D8F0[];

extern T3F D_0056D0B0[];

extern T3F D_0056D4A0[];

extern T3F D_0056CCD0[];

extern T3F D_0056C8F0[];

extern T3F D_0056C550[];

void func_003F9940(char *p) {
    T3F *q;
    switch (*(signed char *)(p + 0x46)) {
    case 0x23:
        q = &D_0056D8F0[*(unsigned char *)(p + 5)];
        *(float *)(p + 0x3B8) = q->a[*(unsigned char *)(p + 0x3AB)] + q->b[*(unsigned char *)(p + 0x3AB)] * (2.3283064e-10f * mt_rand());
        break;
    case 0x24:
        q = &D_0056D0B0[*(unsigned char *)(p + 5)];
        *(float *)(p + 0x3B8) = q->a[*(unsigned char *)(p + 0x3AB)] + q->b[*(unsigned char *)(p + 0x3AB)] * (2.3283064e-10f * mt_rand());
        break;
    case 0x25:
        q = &D_0056D4A0[*(unsigned char *)(p + 5)];
        *(float *)(p + 0x3B8) = q->a[*(unsigned char *)(p + 0x3AB)] + q->b[*(unsigned char *)(p + 0x3AB)] * (2.3283064e-10f * mt_rand());
        break;
    case 0x26:
        q = &D_0056CCD0[*(unsigned char *)(p + 5)];
        *(float *)(p + 0x3B8) = q->a[*(unsigned char *)(p + 0x3AB)] + q->b[*(unsigned char *)(p + 0x3AB)] * (2.3283064e-10f * mt_rand());
        break;
    case 0x27:
        q = &D_0056C8F0[*(unsigned char *)(p + 5)];
        *(float *)(p + 0x3B8) = q->a[*(unsigned char *)(p + 0x3AB)] + q->b[*(unsigned char *)(p + 0x3AB)] * (2.3283064e-10f * mt_rand());
        break;
    case 0x28:
        q = &D_0056C550[*(unsigned char *)(p + 5)];
        *(float *)(p + 0x3B8) = q->a[*(unsigned char *)(p + 0x3AB)] + q->b[*(unsigned char *)(p + 0x3AB)] * (2.3283064e-10f * mt_rand());
        break;
    }
}

void func_003F7D30(char *p) {
    void func_003305E0(char *, int, int, int, int, int, int);
    void func_0041D670(char *);
    char *e;
    if (*(int *)(p + 0x3A0) != 0) {
        func_0041D670(p + 0x3A0);
        e = func_00207480(3, 0xE9, 0, 16);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x410;
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
    }
}

void func_001AD100(char *);

void func_003F5430(char *);

void func_003F69E0(char *);

void func_003F7000(char *);

void func_003F5310(char *p) {
    func_001AD100(p);
    *(float *)(p + 0x3B0) = *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x300), "r"(p + 0x50) : "memory");
    *(int *)(p + 0x110) = 0;
    switch ((unsigned char)*(unsigned char *)(p + 4)) {
    case 0:
        func_003F5430(p);
        break;
    case 1:
        func_003F69E0(p);
        break;
    case 2:
        func_003F7000(p);
        break;
    case 3:
        break;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x10000000;
}

void func_00206730(char *);

void func_00286040(char *);

void func_003FB560(char *);

void func_003F53C0(char *p) {
    unsigned char i;
    for (i = 0; i < 4; i++) {
        func_00206730(p + i * 4 + 0x450);
    }
    func_00286040(p + 0x460);
    func_003FB560(p + 0x464);
    func_00206730(p + 0x3A0);
}

void func_003FA3F0(char *, int);

void func_0041D6E0(char *, char *, int, float);

void func_0034BA60(int, char *, int, int, int);

void func_003FA440(char *, int);

void func_0041D7F0(char *, float);

int func_0041E120(char *, float);

void func_003FA550(char *, float);

void func_0041D800(char *, float, float);

static inline unsigned char func_003F9700_f(char *p) {
    return (*(int *)(p + 0x3BC) & 0x100) != 0;
}

void func_003F9700(char *p) {
    char *b;
    short s;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        if (func_003F9700_f(p) == 1) {
            *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x400;
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 6.0f;
            *(float *)(p + 0x68) = -20.0f;
            *(float *)(p + 0x6C) = 1.0f;
        } else {
            *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x200;
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 20.0f;
            *(float *)(p + 0x68) = -30.0f;
            *(float *)(p + 0x6C) = 1.0f;
        }
        *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) & ~0x100;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D800(p + 0x68, 4.0f * *(float *)(p + 0x10), 0.0f);
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        s = *(short *)(p + 0x90);
        *(short *)(p + 0x90) = *(short *)(p + 0x486);
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        *(short *)(p + 0x90) = s;
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        if ((unsigned char)func_0041E120(b, 0.0f) == 1) {
            func_003FA550(p, 10.0f);
            func_003FA3F0(p, 0);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
        }
        break;
    }
}

void func_00427C20(char *);

void func_004241D0(char *);

void func_00424C00(char *);

void func_00425970(char *);

void func_00426940(char *);

void func_004239B0(char *);

void func_003F98A0(char *p) {
    switch (*(signed char *)(p + 0x46)) {
    case 0x23: func_00427C20(p); break;
    case 0x24: func_004241D0(p); break;
    case 0x25: func_00424C00(p); break;
    case 0x26: func_00425970(p); break;
    case 0x27: func_00426940(p); break;
    case 0x28: func_004239B0(p); break;
    }
}

extern char D_0056D710[];

extern char D_0056CF40[];

extern char D_0056D320[];

extern char D_0056CB60[];

extern char D_0056C7C0[];

extern char D_0056C420[];

unsigned char func_003FB080(char *p) {
    float f;
    unsigned char i;
    switch (*(signed char *)(p + 0x46)) {
    case 35:
        f = *(float *)(p + 0x144);
        for (i = 0; i < 4; i++) {
            if ((float)(unsigned int)*(unsigned short *)(D_0056D710 + i * 0x24 + 4) > f) {
                *(unsigned char *)(p + 0x3AB) = i;
                break;
            }
        }
        break;
    case 36:
        f = *(float *)(p + 0x144);
        for (i = 0; i < 4; i++) {
            if ((float)(unsigned int)*(unsigned short *)(D_0056CF40 + i * 0x14 + 4) > f) {
                *(unsigned char *)(p + 0x3AB) = i;
                break;
            }
        }
        break;
    case 37:
        f = *(float *)(p + 0x144);
        for (i = 0; i < 4; i++) {
            if ((float)(unsigned int)*(unsigned short *)(D_0056D320 + i * 0x14 + 4) > f) {
                *(unsigned char *)(p + 0x3AB) = i;
                break;
            }
        }
        break;
    case 38:
        f = *(float *)(p + 0x144);
        for (i = 0; i < 4; i++) {
            if ((float)(unsigned int)*(unsigned short *)(D_0056CB60 + i * 0x24 + 4) > f) {
                *(unsigned char *)(p + 0x3AB) = i;
                break;
            }
        }
        break;
    case 39:
        f = *(float *)(p + 0x144);
        for (i = 0; i < 4; i++) {
            if ((float)(unsigned int)*(unsigned short *)(D_0056C7C0 + i * 0x14 + 4) > f) {
                *(unsigned char *)(p + 0x3AB) = i;
                break;
            }
        }
        break;
    case 40:
        f = *(float *)(p + 0x144);
        for (i = 0; i < 4; i++) {
            if ((float)(unsigned int)*(unsigned short *)(D_0056C420 + i * 0x14 + 4) > f) {
                *(unsigned char *)(p + 0x3AB) = i;
                break;
            }
        }
        break;
    }
    return *(unsigned char *)(p + 0x3AB);
}

extern char D_0056D910[];

extern char D_0056D0D0[];

extern char D_0056D4C0[];

extern char D_0056CCF0[];

extern char D_0056C910[];

extern char D_0056C570[];

short func_003F9F90(char *p) {
    switch (*(signed char *)(p + 0x46)) {
    case 35:
        return (unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 0x10) * (float)(unsigned int)*(unsigned char *)(*(unsigned char *)(p + 0x3AB) + (D_0056D910 + *(unsigned char *)(p + 5) * 52))) / 360.0f);
    case 36:
        return (unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 0x10) * (float)(unsigned int)*(unsigned char *)(*(unsigned char *)(p + 0x3AB) + (D_0056D0D0 + *(unsigned char *)(p + 5) * 52))) / 360.0f);
    case 37:
        return (unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 0x10) * (float)(unsigned int)*(unsigned char *)(*(unsigned char *)(p + 0x3AB) + (D_0056D4C0 + *(unsigned char *)(p + 5) * 52))) / 360.0f);
    case 38:
        return (unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 0x10) * (float)(unsigned int)*(unsigned char *)(*(unsigned char *)(p + 0x3AB) + (D_0056CCF0 + *(unsigned char *)(p + 5) * 52))) / 360.0f);
    case 39:
        return (unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 0x10) * (float)(unsigned int)*(unsigned char *)(*(unsigned char *)(p + 0x3AB) + (D_0056C910 + *(unsigned char *)(p + 5) * 52))) / 360.0f);
    case 40:
        return (unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 0x10) * (float)(unsigned int)*(unsigned char *)(*(unsigned char *)(p + 0x3AB) + (D_0056C570 + *(unsigned char *)(p + 5) * 52))) / 360.0f);
    }
    return 0;
}

typedef struct { float x, y, z, w; } V4g;

int func_003F7DF0(char *p, int k, V4g *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4g *)(p + 0x50);
        *r = 150.0f;
        out->y += 150.0f;
        return 1;
    }
    return 0;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A77A0[];

extern char D_005B0890[];

extern char D_005B1CB0[];

extern char D_005B1CD4[];

extern char D_005B1D54[];

extern char D_005B1DE8[];

extern char D_005B1EB4[];

extern char D_005B1F6C[];

void func_001003E0();

void func_0013D240();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E78A0();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_003FB410(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B1CB0;
        *(char * *)(p + 64) = D_005B1CD4;
        *(char * *)(p + 160) = D_005B1D54;
        *(char * *)(p + 208) = D_005B1DE8;
        *(char * *)(p + 304) = D_005B1EB4;
        *(char * *)(p + 464) = D_005B1F6C;
        if (p + 3888 != 0) {
            *(char * *)(p + 3904) = D_005B0890;
            if (p + 3888 != 0) {
                *(char * *)(p + 3904) = D_005A77A0;
            }
        }
        func_00313E60(p + 3852, -1);
        func_002E8A50(p + 3828, -1);
        func_002E78A0(p + 3760, -1);
        func_0028C1A0(p + 3120, -1);
        func_0024D9A0(p + 2912, -1);
        func_00401030(p + 2880, -1);
        func_002791E0(p + 1344, -1);
        func_001003E0(p + 532, (void *)func_0013D240, 16, 14);
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_01CAFF0C[];

int func_002F2D30();

int func_003F79F0(p0) char *p0; {
    int func_0041D670();
    int v0;
    int v4;
    int v2;
    int v1;
    int v3;
    int v5;
    v0 = (int)p0;
    v2 = 0;
    *(int *)(p0 + 272) = 0;
    v1 = v0;
    do {
        func_0041D670((v1 + 1104));
        v1 = (v1 + 4);
        v2 = ((v2 + 1) & 255);
    } while ((v2 < 4));
    v5 = func_0041D670((v0 + 928));
    v3 = *(int *)(*(char **)D_01CAFF0C + 32);
    v4 = v0;
    if (v3 != 0) {
        v5 = func_002F2D30(v3, v4);
    }
    return v5;
}

void func_003FA5F0(p0, p1, p2) int p0; int p1; char *p2; {
    int v0;
    int v1;
    v0 = (p1 & 255);
    switch (v0) {
    case 0:
        *(int *)(p2 + 0) = 0;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0x41200000;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 1:
        *(int *)(p2 + 0) = 0x40e23d71;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0x40e23d71;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 2:
        *(int *)(p2 + 0) = 0x41200000;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 3:
        *(int *)(p2 + 0) = 0x40e23d71;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0xc0e23d71;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 4:
        *(int *)(p2 + 0) = 0;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0xc1200000;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 5:
        *(int *)(p2 + 0) = 0xc0e23d71;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0xc0e23d71;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 6:
        *(int *)(p2 + 0) = 0xc1200000;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    case 7:
        *(int *)(p2 + 0) = 0xc0e23d71;
        *(int *)(p2 + 4) = 0;
        *(int *)(p2 + 8) = 0x40e23d71;
        *(int *)(p2 + 12) = 0x3f800000;
        break;
    }
}

void func_003FA730(p0, p1, p2, p3, p4) int p0; char *p1; char *p2; char *p3; char *p4; {
    *(float *)(p3 + 0) = *(float *)(p2 + 0);
    *(float *)(p3 + 4) = *(float *)(p1 + 4);
    *(float *)(p3 + 8) = *(float *)(p1 + 8);
    *(float *)(p4 + 0) = *(float *)(p1 + 0);
    *(float *)(p4 + 4) = *(float *)(p1 + 4);
    *(float *)(p4 + 8) = *(float *)(p2 + 8);
}

extern char D_0056C430[];

extern char D_0056C7D0[];

extern char D_0056CB70[];

extern char D_0056CF50[];

extern char D_0056D330[];

extern char D_0056D720[];

float func_003FAE10(p0) char *p0; {
    int v0;
    int v1;
    float v2;
    v0 = (*(signed char *)(p0 + 70) + -35);
    switch (v0) {
    case 0:
        v2 = *(float *)((D_0056D720 + (*(unsigned char *)(p0 + 939) * 36)) + 0);
        break;
    case 1:
        v2 = *(float *)((D_0056CF50 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    case 2:
        v2 = *(float *)((D_0056D330 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    case 3:
        v2 = *(float *)((D_0056CB70 + (*(unsigned char *)(p0 + 939) * 36)) + 0);
        break;
    case 4:
        v2 = *(float *)((D_0056C7D0 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    case 5:
        v2 = *(float *)((D_0056C430 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    default:
        v2 = 0.0f;
        break;
    }
    return v2;
}

void func_003FAF40(p0) char *p0; {
    int v0;
    int v1;
    v0 = (*(signed char *)(p0 + 70) + -35);
    switch (v0) {
    case 0:
        *(float *)(p0 + 1140) = *(float *)((D_0056D710 + (*(unsigned char *)(p0 + 939) * 36)) + 0);
        break;
    case 1:
        *(float *)(p0 + 1140) = *(float *)((D_0056CF40 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    case 2:
        *(float *)(p0 + 1140) = *(float *)((D_0056D320 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    case 3:
        *(float *)(p0 + 1140) = *(float *)((D_0056CB60 + (*(unsigned char *)(p0 + 939) * 36)) + 0);
        break;
    case 4:
        *(float *)(p0 + 1140) = *(float *)((D_0056C7C0 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    case 5:
        *(float *)(p0 + 1140) = *(float *)((D_0056C420 + (*(unsigned char *)(p0 + 939) * 20)) + 0);
        break;
    }
    *(float *)(p0 + 1140) = (*(float *)(p0 + 1140) * 1.5f);
}

int func_003FB3E0(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 1284);
}

extern void func_003FB3F0();

void func_003FB5B0(char *p) { func_003FB3F0(p + -64); }

extern void func_003FB400();

void func_003FB5C0(char *p) { func_003FB400(p + -64); }

extern void func_003F7DE0();

void func_003FB5E0(char *p) { func_003F7DE0(p + -64); }

extern void func_003F7E60();

void func_003FB5F0(char *p) { func_003F7E60(p + -64); }

extern void func_003F7E70();

void func_003FB600(char *p) { func_003F7E70(p + -64); }

extern void func_003F7EF0();

void func_003FB610(char *p) { func_003F7EF0(p + -64); }

extern void func_003F7E50();

void func_003FB620(char *p) { func_003F7E50(p + -64); }

extern void func_003F8050();

void func_003FB630(char *p) { func_003F8050(p + -64); }

extern void func_003F8540();

void func_003FB670(char *p) { func_003F8540(p + -304); }

extern void func_003F7EE0();

void func_003FB6A0(char *p) { func_003F7EE0(p + -304); }

void func_003FB6B0(char *p) { func_003F7E60(p + -304); }

void func_003FB6C0(char *p) { func_003F7E70(p + -304); }

void func_003FB6D0(char *p) { func_003F7E50(p + -304); }
