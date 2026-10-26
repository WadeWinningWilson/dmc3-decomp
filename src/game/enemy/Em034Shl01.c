#include "game/mt_rand.h"
extern float D_00577D10[];

extern float D_00577D14[];

extern float D_00577D18[];

extern float D_00577DD0[];

extern float D_00577DD4[];

extern float D_00577DD8[];

extern float D_005BDC90;

extern float D_005BDC94;

void func_00477690(char *p, int k) {
    if (*(unsigned char *)(p + 0x48D) == 1) {
        *(float *)(p + 0x470) = D_00577D10[k * 3] + D_005BDC90 * (2.3283064e-10f * mt_rand() - 0.5f);
        *(float *)(p + 0x474) = D_00577D14[k * 3] + D_005BDC94 * (2.3283064e-10f * mt_rand());
        *(float *)(p + 0x478) = D_00577D18[k * 3] + D_005BDC90 * (2.3283064e-10f * mt_rand() - 0.5f);
        *(float *)(p + 0x47C) = 1.0f;
    } else {
        *(float *)(p + 0x470) = D_00577DD0[k * 3] + D_005BDC90 * (2.3283064e-10f * mt_rand() - 0.5f);
        *(float *)(p + 0x474) = D_00577DD4[k * 3] + D_005BDC94 * (2.3283064e-10f * mt_rand()) + 100.0f;
        *(float *)(p + 0x478) = D_00577DD8[k * 3] + D_005BDC90 * (2.3283064e-10f * mt_rand() - 0.5f);
        *(float *)(p + 0x47C) = 1.0f;
    }
}

extern char D_01DFABA0[];

void func_00206730(char *);

void func_00286040(char *);

void func_00330BD0(char *, int, char *, int, int);

void func_00477550(char *p) {
    func_00206730(p + 0x460);
    func_00286040(p + 0x464);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x46C) = 1.0f;
        func_00330BD0(D_01DFABA0, 0x22, p + 0x50, 0x22, 0);
    case 1:
        *(float *)(p + 0x46C) = *(float *)(p + 0x46C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x46C) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
    }
}

int func_00477630(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(int *)(p0 + 1120);
    if (v1 != 0) {
        v3 = func_001AD140(v1);
    }
    v2 = *(int *)(v0 + 1124);
    if (v2 != 0) {
        v3 = func_001AD140(v2);
    }
    return v3;
}

void func_00128488();

int func_001B0FD0();

int func_00477CE0(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int tmp3;
    *(char *)(p0 + 36) = 0;
    v0 = p0;
    *(int *)(p0 + 24) = (p1 + 1);
    tmp3 = func_001B0FD0((v0 + 4), (*(int *)(p0 + 24) * 46), -1);
    *(int *)(v0 + 20) = tmp3;
    if (*(int *)(v0 + 20) == 0) {
        v1 = 0;
    } else {
        *(char *)(v0 + 36) = 1;
        func_00128488(*(int *)(v0 + 20), 0, (*(int *)(v0 + 24) * 46));
        v1 = 1;
    }
    return v1;
}

int func_00477DE0();

int func_00477D80(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 36) != 0) {
        v0 = func_00477DE0();
    }
    return v0;
}

int func_0013D5D0();

int func_00477DB0(p0) int p0; {
    int tmp0;
    tmp0 = func_0013D5D0((p0 + 4));
    *(char *)((char *)p0 + 36) = 0;
    return tmp0;
}

int func_00477E60(p0, p1) char *p0; int p1; {
    int v0;
    v0 = (*(int *)(p0 + 32) + p1);
    if (v0 < 0) {
        v0 = (v0 + *(int *)(p0 + 24));
    }
    return (*(int *)(p0 + 20) + (v0 * 46));
}

void func_00477600(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_00476EC0();

void func_00477CB0(char *p) { func_00476EC0(p + -64); }

extern void func_00477C20();

void func_00477CC0(char *p) { func_00477C20(p + -64); }

void func_00477CD0(char *p) { func_00477C20(p + -160); }

void func_00477610(void) {}

void func_00477620(void) {}

void func_00477680(void) {}
