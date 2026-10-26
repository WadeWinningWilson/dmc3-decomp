#include "game/mt_rand.h"
extern char D_01DFABA0[];

void func_00330B50(char *, int, char *, int);

void func_004BD9B0(char *p) {
    char *func_00207480(int, int, char *, int);
    func_00207480(3, 0x1B9, p + 0x380, 8);
    if (mt_rand() & 1) {
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 3);
    } else {
        func_00330B50(D_01DFABA0, 0xC, p + 0x50, 3);
    }
    if (mt_rand() & 1) {
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 3);
    } else {
        func_00330B50(D_01DFABA0, 0xC, p + 0x50, 3);
    }
}

void func_004BE0D0(char *, int, float *);

void func_004BE330(char *);

void func_004BD640(char *p) {
    char *func_00207480(int, int, int, int);
    float v[4] __attribute__((aligned(16)));
    char *o;
    p[0x377] = 0;
    *(float *)(p + 0x3E8) = 7.0f;
    o = (char *)func_00207480(3, 0x270, 0, 8);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x380;
        o[0x9A] = 0;
        o[0x3A] = 1;
        *(char **)(p + 0x370) = o;
    }
    func_004BE0D0(p, *(signed char *)(p + 0x376), v);
    *(float *)(p + 0x50) = v[0];
    *(float *)(p + 0x54) = v[1];
    *(float *)(p + 0x58) = v[2];
    *(float *)(p + 0x5C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3C0), "r"(p + 0x50) : "memory");
    *(float *)(p + 0x3CC) = 1.0f;
    if (mt_rand() & 1) {
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 3);
    } else {
        func_00330B50(D_01DFABA0, 0xC, p + 0x50, 3);
    }
    func_004BE330(p);
}

extern char D_01CAFF0C[];

void func_00104B80(char *, float *, float *);

void func_00131700(float *, float *, float *);

extern float D_00587380[];

extern float D_00587384[];

extern float D_00587388[];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline char *func_004BE0D0_g(char *g, unsigned char i) {
    return *(char **)((char *)(i * 4) + (int)g + 0xC);
}

void func_004BE0D0(char *p, int k, float *out) {
    float r[4] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *e;
    UNIT(m);
    e = func_004BE0D0_g(*(char **)D_01CAFF0C, *(unsigned char *)(p + 0x378));
    r[0] = 0.0f;
    r[1] = (float)*(short *)(e + 0x90) / 65536.0f * 6.283185f;
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    t[0] = D_00587380[(signed char)k * 4];
    t[1] = D_00587384[(signed char)k * 4];
    t[2] = D_00587388[(signed char)k * 4];
    t[3] = 1.0f;
    func_00104B80((char *)out, m, t);
    out[0] = out[0] + *(float *)(e + 0x50);
    out[1] = out[1] + *(float *)(e + 0x54);
    out[2] = out[2] + *(float *)(e + 0x58);
    out[3] = 1.0f;
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

extern char *D_005BC2E0;

extern char D_005872E0[];

extern char D_005BDD88[4];

void func_004BE230(char *p) {
    func_0028C200(p + 0x150, D_005BDD88, D_005872E0, 1, D_005BC2E0 + 0x780, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    *(int *)(p + 0x228) = 0x30F3F;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x380);
}

void func_00100580(char *);

void func_0028C1A0(char *, int);

void func_00253000(char *, int);

char *func_004BE440(char *p, short flag) {
    extern char D_005B8E40[];
    extern char D_005B8E64[];
    extern char D_005B8EE4[];
    if (p != 0) {
        *(char **)p = D_005B8E40;
        *(char **)(p + 64) = D_005B8E64;
        *(char **)(p + 160) = D_005B8EE4;
        func_0028C1A0(p + 336, -1);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_001AD140();

int func_00206730();

int func_004BE2E0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *tmp0;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 880));
    v1 = *(int *)(v0 + 880);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        tmp0 = *(char **)(v0 + 880);
        *(int *)(*(char **)(v0 + 880) + 144) = 0;
        *(char *)(tmp0 + 154) = 0;
        *(int *)(v0 + 880) = 0;
    }
    return v2;
}

extern void func_004BE400();

void func_004BE4E0(char *p) { func_004BE400(p + -64); }

extern void func_004BE420();

void func_004BE4F0(char *p) { func_004BE420(p + -64); }

void func_004BE2C0(void) {}

void func_004BE2D0(void) {}
