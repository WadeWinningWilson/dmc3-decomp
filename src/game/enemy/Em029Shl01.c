#include "game/mt_rand.h"
void func_001AD100(char *);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

extern char D_005BE098;

int func_0041D600(char *);

char *func_00279290(char *);

void func_001A5C30(char *);

void func_001A5D00(char *);

void func_003D3790(char *);

void func_003D3AD0(char *);

void func_0041D6E0(char *, char *, int, float);

int func_0041E120(char *, float);

void func_0041D820(char *, float, float);

void func_0041D840(char *, char *, float);

void func_00195E20(char *, char *);

static inline char *base40(char *p) { char *q = p; if (q != 0) { q += 0x40; } return q; }

void func_003D3400(char *p) {
    if ((unsigned char)func_0041D600(p) == 0) {
        return;
    }
    func_00206730(p + 0xB50);
    if (*(unsigned char *)(*(char **)(p + 0xD0) + 0x976) == 0) {
        func_001A5C30(func_00279290(p + 0x240));
    } else {
        func_001A5D00(func_00279290(p + 0x240));
    }
    func_001AD100(p);
    switch (*(unsigned int *)(p + 0xB58) & 0x7F) {
    case 0:
        func_003D3790(p);
        break;
    case 1:
        func_003D3AD0(p);
        break;
    }
    *(int *)(p + 0x80) = 0;
    func_0041D6E0(base40(p), p + 0x60, 1, *(float *)(p + 0x10));
    *(short *)(p + 0xB64) += 3641.0f * *(float *)(p + 0x10);
    *(float *)(p + 0x80) = 6.283185f * ((float)*(short *)(p + 0xB64) / 65536.0f);
    if ((unsigned char)func_0041E120(base40(p), 80.0f) == 1) {
        if ((*(unsigned int *)(p + 0xB58) & 0x7F) == 0) {
            *(float *)(p + 0x68) = 20.0f;
        } else {
            *(float *)(p + 0x68) = 10.0f;
        }
        if (*(unsigned int *)(p + 0xB58) & 0x80) {
            *(float *)(p + 0x64) = 15.0f;
        } else {
            *(int *)(p + 0x64) = 0;
        }
    } else {
        func_0041D820(p + 0x64, -0.4f * *(float *)(p + 0x10), -30.0f);
    }
    func_0041D840(base40(p), p + 0x1B0, 1.0f);
    func_0028C5C0(p + 0x8D0, 0, 1.0f);
    func_00195E20(&D_005BE098, p);
}

extern float D_00568910[];

void func_0041E190(float *, float *, float);

/* Spawns beside the parent: offset by the parent's facing, with a random heading and timer. */
void func_003D3880(char *p) {
    float v[4] __attribute__((aligned(16)));
    v[0] = D_00568910[*(int *)(p + 0xB5C)];
    v[1] = -30.0f;
    v[2] = -220.0f;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190(v, v, *(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f * 6.2831850051879883f);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 10.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(unsigned short *)(p + 0x90) = (*(short *)(*(char **)(p + 0xD0) + 0x90) + 0x7000 + mt_rand()) & 0x1FFF;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = *(short *)(p + 0x90) / 65536.0f * 6.2831850051879883f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(unsigned short *)(p + 0xB66) = (mt_rand() & 0xFF) + 0x200;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VADDR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_003D3620(char *p) {
    float v[4] __attribute__((aligned(16)));
    v[0] = D_00568910[*(int *)(p + 0xB5C)];
    v[1] = -30.0f;
    v[2] = -220.0f;
    v[3] = 1.0f;
    QCOPY(p + 0x50, *(char **)(*(char **)(p + 0x194) + 0x104) + 0x30);
    func_0041E190(v, v, (float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f * 6.283185f);
    VADDR54(p + 0x50, p + 0x50, v);
    if (!(*(float *)(*(char **)(p + 0xD0) + 0x68) <= 15.0f)) {
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 5.0f;
        *(float *)(p + 0x6C) = 1.0f;
    } else {
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 10.0f;
        *(float *)(p + 0x6C) = 1.0f;
    }
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0xD0) + 0x90) + 0x8000;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = (float)*(short *)(p + 0x90) / 65536.0f * 6.283185f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
}

void func_0028C740();

void func_0041D670();

void func_003D3D10(int p0) {
    func_0028C740((p0 + 2256));
    func_0041D670((p0 + 2896));
}

extern void func_003D3090();

void func_003D3DE0(char *p) { func_003D3090(p + -64); }

extern void func_003D3D40();

void func_003D3DF0(char *p) { func_003D3D40(p + -64); }

void func_003D3E00(char *p) { func_003D3D40(p + -160); }
