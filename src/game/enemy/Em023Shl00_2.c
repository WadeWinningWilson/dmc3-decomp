#include "game/mt_rand.h"
void func_0034BA60(int, char *, signed char, int, int);

extern char D_005BE098[4];

void func_00382A50(char *);

void func_00206730(char *);

void func_001AD140(char *);

void func_001AD100(char *);

void func_00458BF0(char *);

void func_00458CB0(char *);

void func_00459020(char *);

void func_004594B0(char *);

void func_0028C5C0(char *, int, float);

void func_00195E20(char *, char *);

void func_004589C0(char *p) {
    char *o;
    func_00382A50(p + 0x214);
    func_00206730(p + 0x218);
    o = *(char **)(p + 0x214);
    if (o == 0) {
        func_001AD140(p);
        return;
    }
    if (((unsigned char **)(o + 0x69F8))[*(int *)(p + 0x19C)][0x135C] == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(o + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00458BF0(p);
        break;
    case 1:
        func_00458CB0(p);
        break;
    case 2:
        func_00459020(p);
        break;
    case 3:
        func_004594B0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    *(float *)(p + 0x20C) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x20C) < 0.0f) {
        *(float *)(p + 0x20C) = *(float *)(p + 0x210);
        if (mt_rand() & 1) {
            func_0034BA60(0x26, p + 0x50, 0x29, 0, 1);
        } else {
            func_0034BA60(0x27, p + 0x50, 0x29, 0, 1);
        }
    }
    func_0028C5C0(p + 0x230, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

extern char D_005B54D0[];

extern char D_005B54F4[];

extern char D_005B5574[];

int func_00252FA0();

int func_0028C110();

int func_00458470(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B54D0;
    *(char **)((char *)p0 + 64) = D_005B54F4;
    *(char **)((char *)p0 + 160) = D_005B5574;
    func_0028C110((p0 + 560));
    *(int *)((char *)p0 + 532) = 0;
    *(int *)((char *)p0 + 404) = 0;
    return p0;
}

extern void func_004587D0();

void func_004598A0(char *p) { func_004587D0(p + -64); }

extern void func_00459860();

void func_004598B0(char *p) { func_00459860(p + -64); }
