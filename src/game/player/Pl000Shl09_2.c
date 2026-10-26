#include "game/mt_rand.h"
void func_00131700(float *, float *, float *);

void func_00133890(char *, float *, float *);

void func_00105230(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_004960F0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float g[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 0x372)) {
    case 0:
        v[0] = *(float *)(p + 0x50);
        v[1] = *(float *)(p + 0x54);
        v[2] = *(float *)(p + 0x58);
        v[3] = 1.0f;
        g[0] = 0.0f;
        g[1] = 6.283185f * ((float)*(short *)(p + 0x374) / 65536.0f);
        g[2] = 0.0f;
        g[3] = 1.0f;
        u[0] = 0.0f;
        u[1] = 1.0f;
        u[3] = 1.0f;
        u[2] = 0.0f;
        UNIT(p + 0x3B0);
        func_00133890(p + 0x3B0, (float *)(p + 0x3A0), u);
        func_00105230(p + 0x3B0, p + 0x3B0, v);
        break;
    case 1:
        break;
    case 2:
    case 3:
        v[0] = *(float *)(p + 0x50);
        v[1] = *(float *)(p + 0x54);
        v[2] = *(float *)(p + 0x58);
        v[3] = 1.0f;
        g[0] = 0.0f;
        g[1] = 6.283185f * ((float)*(short *)(p + 0x374) / 65536.0f);
        g[2] = 0.0f;
        g[3] = 1.0f;
        UNIT(p + 0x3B0);
        func_00131700((float *)(p + 0x3B0), (float *)(p + 0x3B0), g);
        func_00105230(p + 0x3B0, p + 0x3B0, v);
        break;
    }
}

void func_004962F0(char *p) {
    void func_00496640(char *);
    p[0x371] = 0;
    func_00496640(p);
    p[0x372] = 1;
    *(float *)(p + 0x380) = 30.0f;
    if (mt_rand() & 1) {
        p[0x373] = 2;
    } else {
        p[0x373] = 3;
    }
    *(float *)(p + 0x390) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0x394) = (float)(mt_rand() % 30) - 15.0f;
    *(float *)(p + 0x398) = 60.0f;
    *(float *)(p + 0x39C) = 1.0f;
}

void func_001AD140(char *);

extern char D_005BE098[4];

void func_001AD100(char *);

void func_00206730(char *);

int func_002077F0(char *);

void func_00228300(char *);

int func_002DA0B0(int, int);

void func_00495810(char *);

void func_00495A70(char *);

void func_00495C70(char *);

void func_00495D20(char *);

void func_00195E20(char *, char *);

void func_004956C0(char *p) {
    func_001AD100(p);
    func_00206730(p + 0x3FC);
    func_00206730(p + 0x400);
    func_00228300(p + 0x3F4);
    if (*(char **)(p + 0x3FC) != 0 && (unsigned char)func_002077F0(*(char **)(p + 0x3FC)) == 1) {
        *(int *)(p + 0x3FC) = 0;
        func_001AD140(p);
        return;
    }
    if ((unsigned char)func_002DA0B0(*(int *)(p + 0x3F0), 9) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x384) = *(float *)(p + 0x384) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x384) < 0.0f) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 0x372)) {
    case 0:
        func_00495810(p);
        break;
    case 1:
        func_00495A70(p);
        break;
    case 2:
        func_00495C70(p);
        break;
    case 3:
        func_00495D20(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

void func_0028C740();

void func_00496690();

void func_004962A0(char *p0) {
    void func_00496640();
    *(char *)(p0 + 880) = 0;
    *(char *)(p0 + 882) = 3;
    *(int *)(p0 + 888) = 0x41200000;
    func_00496640();
    func_00496640(p0);
    func_00496690(p0);
    func_0028C740((p0 + 336));
}

void func_00496740();

void func_00496570(char *p0) {
    void func_00496640();
    short t0;
    *(char *)(p0 + 882) = 3;
    *(int *)(p0 + 888) = 0x41200000;
    t0 = ((*(short *)(p0 + 144) + 32767) + 2);
    *(short *)(p0 + 144) = ((*(short *)(p0 + 144) + 32767) + 2);
    func_00496740();
    func_00496640(p0);
    func_00496690(p0);
}

char *func_00207480(int, int, char *, int);

void func_004965D0(char *p) {
    float m[16];
    float v[4];
    v[0] = *(float *)(p + 0x50);
    v[1] = *(float *)(p + 0x54);
    v[2] = *(float *)(p + 0x58);
    v[3] = 1.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    func_00207480(3, 0x5, (char *)m, 8);
}

extern void func_00495EF0();

void func_00496890(char *p) { func_00495EF0(p + -64); }
