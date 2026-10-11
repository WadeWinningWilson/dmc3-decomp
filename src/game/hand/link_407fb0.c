/* Kept apart from misc.c: this caller passes a pointer as func_00207480's third argument, and
 * MW orders argument evaluation by parameter type, so it needs that prototype. */

#include "game/mt_rand.h"

char *func_00207480(int, int, char *, int);
void func_001AD140(char *);

void func_00407FB0(char *p) {
    *(char **)(p + 0x414) = func_00207480(3, 0xBF, p + 0x3D0, 16);
    if (*(char **)(p + 0x414) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x41C) = 40.0f;
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x3D0) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
}

extern char D_01DFABA0[];
void func_00330B50(char *, int, char *, int);

void func_004BD9B0(char *p) {
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
