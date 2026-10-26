#include "game/mt_rand.h"
int func_0050E790(char *);

void func_0050E5B0(char *);

void func_0050DE10(char *p) {
    void func_001AD140(char *);
    if ((unsigned char)func_0050E790(p) == 0) {
        func_001AD140(p);
        return;
    }
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x464) + 0x90);
    *(float *)(p + 0x80) = -90.0f;
    *(float *)(p + 0x88) = (float)(mt_rand() % 360) - 180.0f;
    *(float *)(p + 0x46C) = 40.0f;
    *(int *)(p + 0x470) = 0;
    func_0050E5B0(p);
    ((unsigned char *)p)[4]++;
}

float func_0034C160(float, float, float);

void func_0050E000(char *p) {
    float v2;
    float v = func_0034C160(*(float *)(p + 0x470), 30.0f, 0.5f * *(float *)(p + 0x10));
    *(float *)(p + 0x470) = v;
    v2 = v * v;
    *(float *)(p + 0x54) += v2 * *(float *)(p + 0x10);
    *(float *)(p + 0x46C) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x46C) < 0.0f) {
        p[5] = 1;
        *(float *)(p + 0x46C) = 15.0f + mt_rand() % 15;
        *(int *)(p + 0x470) = 0;
    }
}

extern char D_01CAFF0C[];

extern char D_01DFABA0[];

void func_00330B50(char *, int, char *, int);

int func_0050E800(char *);

void func_0050E160(char *p) {
    void func_001AD140(char *);
    char *m;
    if ((*(float *)(p + 0x46C) -= *(float *)(p + 0x10)) < 0.0f) {
        p[5] = 2;
        func_00330B50(D_01DFABA0, 0, p + 0x50, 7);
        *(float *)(p + 0x80) = 90.0f;
        if (!(unsigned char)func_0050E800(p)) {
            func_001AD140(p);
            return;
        }
        m = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
        *(float *)(p + 0x50) = (*(float *)m + (float)(unsigned int)(mt_rand() % 700U)) - 350.0f;
        m = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
        *(float *)(p + 0x58) = (*(float *)(m + 8) + (float)(unsigned int)(mt_rand() % 700U)) - 350.0f;
        *(float *)(p + 0x54) = 2000.0f + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
        *(float *)(p + 0x480) = *(float *)(p + 0x50);
        *(float *)(p + 0x484) = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
        *(float *)(p + 0x488) = *(float *)(p + 0x58);
        *(float *)(p + 0x48C) = 1.0f;
        *(float *)(p + 0x46C) = 300.0f;
        *(int *)(p + 0x470) = 0;
    }
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

extern char *D_005BC2E0;

void func_0028C790(char *, int);

void func_0050E680(char *p) {
    func_0028C790(p + 0x190, 0);
    func_0028C790(p + 0x190, 1);
    func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_005BC2E0 + 0x9C0, p, 0);
    func_0028C8E0(p + 0x190, 0);
    func_0028C910(p + 0x190);
    *(int *)(p + 0x268) = 0x30504;
    *(unsigned char *)(p + 0x3B0) = 4;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 1;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 0;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(int *)(p + 0x3D0) = 0;
    *(int *)(p + 0x3D4) = 0;
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 175.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(int *)(p + 0x420) = 0;
    *(int *)(p + 0x424) = 0;
    *(int *)(p + 0x428) = 0;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 20.0f;
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
}

void func_002075D0(int, int, char *, int, int);

void func_0050E880(char *p) {
    func_002075D0(3, 0x203, p + 0x150, 1, 8);
    func_00330B50(D_01DFABA0, 9, p + 0x50, 7);
}

int func_00206730();

int func_0050E570(p0) int p0; {
    int func_001AD140();
    int v0;
    int v1;
    v1 = func_00206730((p0 + 1120));
    v0 = *(int *)((char *)p0 + 1120);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_0050E8D0();

void func_0050E9E0(char *p) { func_0050E8D0(p + -64); }

extern void func_0050E8F0();

void func_0050E9F0(char *p) { func_0050E8F0(p + -64); }

extern void func_0050E940();

void func_0050EA00(char *p) { func_0050E940(p + -64); }

void func_0050EA10(char *p) { func_0050E940(p + -160); }

void func_0050E920(void) {}

void func_0050E930(void) {}
