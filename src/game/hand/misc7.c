/* Hand-matched functions (seventh file: its callee declarations differ from the others). */

#include "game/mt_rand.h"

extern char D_01CAFF0C[];
short func_0034B940(char *);

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

void func_0038F300(char *, int);
void func_0038F2C0(char *, int);
int func_0041D6B0(char *, float);
void func_0041D6E0(char *, char *, int, float);
void func_0041DBA0(char *, char *);
char *func_00207480(int, int, float *, int);
void func_0041D820(char *, float, float);
int func_0041E120(float, char *);
void func_00105230(float *, float *, char *);

void func_004203C0(char *p) {
    char *b;
    float m[16] __attribute__((aligned(16)));
    float y;
    *(int *)(p + 0x42C) |= 0x2000;
    *(int *)(p + 0x42C) |= 0x8000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(float *)(p + 0x428) = 40.0f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x80) = 0.0f;
        *(float *)(p + 0x88) = 0.0f;
        p[6] = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + 0x428, *(float *)(p + 0x10)) == 1) {
            func_0041D820(p + 0x64, *(float *)(p + 0x10) * -9.0f, -30.0f);
            b = p;
            if (b) {
                b += 0x40;
            }
            func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        } else {
            y = *(float *)(p + 0x54);
            func_0041DBA0(p, p + 0x600);
            *(float *)(p + 0x64) = *(float *)(p + 0x54) - y;
        }
        b = p;
        if (b) {
            b += 0x40;
        }
        if ((unsigned char)func_0041E120(0.0f, b) == 1) {
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105230(m, m, p + 0x50);
            func_00207480(0, 0x2C, m, 16);
            if (100.0f * (2.3283064e-10f * mt_rand()) < 50.0f) {
                func_0038F2C0(p, 0x10);
            } else {
                func_0038F2C0(p, 0x17);
            }
        }
        break;
    }
}

int func_001AD140(int, int, int);
int func_0039D440(char *p, int k) {
    int r;
    int m = k & 255;
    int *slot;
    if (m == 0) {
        *(unsigned char *)(p + 12004) &= 2;
    } else if (m == 1) {
        *(unsigned char *)(p + 12004) &= 1;
    }
    slot = (int *)(k ? p + 12028 : p + 12024);
    if (*slot != 0) {
        r = func_001AD140(*slot, k, m);
        *slot = 0;
    }
    return r;
}
