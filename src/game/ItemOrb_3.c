#include "game/mt_rand.h"
int func_002E9F60(float *, void *, int);

void func_002EC3A0(int, float);

typedef struct { unsigned char c; float x, y, z; int w; } A2EC;

int func_002EC070(unsigned char t, float *pos, float rx, float ry) {
    A2EC a;
    float m[16] __attribute__((aligned(16)));
    int r;
    a.c = t;
    if (rx) {
        a.x = pos[0] + (float)(mt_rand() % (unsigned int)(int)rx);
        a.z = pos[2] + (float)(mt_rand() % (unsigned int)(int)rx);
    } else {
        a.x = pos[0];
        a.z = pos[2];
    }
    if (ry) {
        a.y = pos[1] + (float)(mt_rand() % (unsigned int)(int)ry);
    } else {
        a.y = pos[1];
    }
    a.w = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r = func_002E9F60(m, &a, 1);
    if (r == 0) return 0;
    func_002EC3A0(r, 1200.0f);
    return 1;
}
