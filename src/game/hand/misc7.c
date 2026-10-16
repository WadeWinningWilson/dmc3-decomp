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
