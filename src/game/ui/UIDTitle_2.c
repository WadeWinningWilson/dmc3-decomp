#include "game/mt_rand.h"
extern char D_005A6F50[];

void func_0013D6A0(char *);

extern char D_005AB530[];

extern char D_005AC730[];

char *func_003271B0(char *p) {
    int i;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005AB530;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x40) : "memory");
    *(int *)(p + 0x80) = 0;
    for (i = 0; i < 3; i++) {
        ((int *)(p + 0x84))[i] = 0;
    }
    *(int *)(p + 0x90) = 0;
    *(unsigned char *)(p + 0x94) = 0;
    *(char **)p = D_005AC730;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0xA1) = 0;
    *(int *)(p + 0xA4) = 0;
    return p;
}

extern char D_0055B440[];

extern char D_006663C0[];

extern char D_01DFABA0[];

int func_001AE310();

int func_00326DF0();

void func_003303F0();

void func_00326C40(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 6404) == 0) {
        v1 = *(unsigned short *)((D_0055B440 + (*(signed char *)(v0 + 6405) << 1)) + 0);
        if (v1 != 256) {
            v3 = func_001AE310(D_006663C0, 0);
            if (v1 == (v1 & (v3 & 65535))) {
                *(char *)(v0 + 6405) = (*(signed char *)(v0 + 6405) + 1);
            }
        } else {
            *(char *)(v0 + 6404) = 1;
            tmp1 = mt_rand();
            v4 = (tmp1 & 3);
            switch (v4) {
            case 0:
            case 3:
                func_003303F0(D_01DFABA0, 7, 0, 64, 0);
                break;
            case 1:
                func_003303F0(D_01DFABA0, 7, 2, 64, 0);
                break;
            case 2:
                func_003303F0(D_01DFABA0, 7, 4, 64, 0);
                break;
            }
            v3 = func_00326DF0(v0);
        }
    }
}
