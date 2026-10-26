#include "game/mt_rand.h"
void func_00104C00(char *, float *, char *);

/* Camera shake: a random x/y offset within the current amplitude, which eases toward its
 * target over the remaining frames. */
void func_001ACA00(char *p) {
    float m[16] __attribute__((aligned(16)));
    if (*(int *)(p + 0x230) == 0) {
        return;
    }
    if (*(short *)(p + 0x23A) != 0) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        if (*(unsigned int *)(p + 0x234) & 2) {
            m[12] = (int)(mt_rand() % *(short *)(p + 0x23A)) - (*(short *)(p + 0x23A) >> 1);
        }
        if (*(unsigned int *)(p + 0x234) & 1) {
            m[13] = (int)(mt_rand() % *(short *)(p + 0x23A)) - (*(short *)(p + 0x23A) >> 1);
        }
        func_00104C00(p + 0x100, m, p + 0x100);
    }
    *(short *)(p + 0x23A) += (*(short *)(p + 0x238) - *(short *)(p + 0x23A)) / *(int *)(p + 0x230);
    if (*(short *)(p + 0x23A) < 0) {
        *(short *)(p + 0x23A) = 0;
    }
    if (*(int *)(p + 0x230) > 0) {
        (*(int *)(p + 0x230))--;
    }
}

extern char *D_005BE0D8;

float func_0011DB20(float);

void func_001AC630(char *p, float fov) {
    float t;
    float s;
    float x;
    float y;
    *(float *)(p + 0x1C0) = fov;
    if (*(unsigned char *)(p + 0x240) == 1) {
        *(float *)(p + 0x1C4) = (float)*(short *)(D_005BE0D8 + 0x22) / 2.0f / *(float *)(D_005BE0D8 + 0x64) / func_0011DB20(0.5f * fov);
    } else {
        *(float *)(p + 0x1C4) = (float)*(short *)(D_005BE0D8 + 0x24) / 2.0f / *(float *)(D_005BE0D8 + 0x64) / func_0011DB20(0.5f * fov);
    }
    t = *(float *)(p + 0x1C4);
    *(float *)(p + 0x40) = t * *(float *)(D_005BE0D8 + 0x60);
    *(float *)(p + 0x54) = t * *(float *)(D_005BE0D8 + 0x64);
    *(float *)(p + 0x80) = t / (4095.0f * *(float *)(D_005BE0D8 + 0x60) / 2.0f);
    *(float *)(p + 0x94) = t / (4095.0f * *(float *)(D_005BE0D8 + 0x64) / 2.0f);
    *(float *)(p + 0x0) = *(float *)(D_005BE0D8 + 0x60) * t / (float)(*(short *)(D_005BE0D8 + 0x20) / 2);
    if (*(unsigned char *)(p + 0x240) == 1) {
        *(float *)(p + 0x14) = *(float *)(D_005BE0D8 + 0x64) * t / (float)(*(short *)(D_005BE0D8 + 0x22) / 2);
    } else {
        *(float *)(p + 0x14) = *(float *)(D_005BE0D8 + 0x64) * t / (float)(*(short *)(D_005BE0D8 + 0x24) / 2);
    }
    s = *(float *)(p + 0x1C8);
    y = s * (4095.0f * *(float *)(D_005BE0D8 + 0x64) / 2.0f) / t;
    x = s * (4095.0f * *(float *)(D_005BE0D8 + 0x60) / 2.0f) / t;
    *(float *)(p + 0xC0) = x * (t * *(float *)(D_005BE0D8 + 0x60)) / s;
    *(float *)(p + 0xD4) = y * (t * *(float *)(D_005BE0D8 + 0x64)) / s;
    *(float *)(p + 0xE8) = (-*(float *)(p + 0x1D8) + *(float *)(p + 0x1DC)) / 2.0f;
    *(float *)(p + 0xF8) = (*(float *)(p + 0x1D8) + *(float *)(p + 0x1DC)) / 2.0f;
}

void func_001ABE90(char *, float, float, float);

void func_001ABE60(char *p, char k) {
    *(char *)(p + 0x240) = k;
    *(float *)(p + 0x1D8) = *(float *)(D_005BE0D8 + 0x6C);
    *(float *)(p + 0x1DC) = 0.0f;
    func_001ABE90(p, 0.9599310159683228f, *(float *)(D_005BE0D8 + 0x70), *(float *)(D_005BE0D8 + 0x74));
}

void func_001ABFC0(char *);

void func_001ABE90(char *p, float a, float b, float c) {
    float t;
    *(float *)(p + 0x1C0) = a;
    if (*(unsigned char *)(p + 0x240) == 1) {
        t = (*(short *)(D_005BE0D8 + 0x22) / 2.0f) / *(float *)(D_005BE0D8 + 0x64);
        *(float *)(p + 0x1C4) = t / func_0011DB20(0.5f * a);
    } else {
        t = (*(short *)(D_005BE0D8 + 0x24) / 2.0f) / *(float *)(D_005BE0D8 + 0x64);
        *(float *)(p + 0x1C4) = t / func_0011DB20(0.5f * a);
    }
    *(float *)(p + 0x1C8) = b;
    *(float *)(p + 0x1CC) = c;
    func_001ABFC0(p);
}

void func_00105300(char *, char *);

void func_00104E78(char *, char *);

void func_001AC9C0(char *);

void func_001AC900(char *p, char *m) {
    *(int *)(p + 0x23C) = 0;
    func_00105300(p + 0x100, m);
    func_00104E78(p + 0x1E0, p + 0x100);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x220), "r"(p + 0x200) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x220), "r"(p + 0x220), "f"(-1.0f) : "t0", "memory");
    func_001AC9C0(p);
}

int func_001AB4A0(char *p) {
    if (*(unsigned char *)p != 0) goto other;
    return 1;
other:
    return *(unsigned char *)(p + 0xA4) == 3;
}

int func_001AB480(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 0);
    if (tmp0 == 0) {
        return 0;
    } else {
        v0 = *(unsigned char *)(p0 + 2);
        return v0;
    }
}

void func_001ACC30(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int v0;
    *(int *)(p0 + 564) = (p1 & 255);
    v0 = (p4 & 255);
    *(int *)(p0 + 560) = p3;
    switch (v0) {
    case 0:
        *(short *)(p0 + 570) = (p2 & 255);
        *(short *)(p0 + 568) = (p2 & 255);
        break;
    case 1:
        *(short *)(p0 + 570) = (p2 & 255);
        *(short *)(p0 + 568) = 0;
        break;
    case 2:
        *(short *)(p0 + 570) = 0;
        *(short *)(p0 + 568) = (p2 & 255);
        break;
    }
}

extern void func_001AB4D0();

void func_001AACD0(char *p) { func_001AB4D0(p + 32); }

void func_001ACCD0(char *p0) {
    *(int *)(p0 + 560) = 0;
    *(int *)(p0 + 96) = 0x45000000;
    *(int *)(p0 + 100) = 0x45000000;
}
