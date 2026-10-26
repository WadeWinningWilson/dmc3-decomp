extern "C" {
int func_001AD140(char *p);
}

extern "C" char *func_00207480(int, int, char *, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, int);

class Sub40 {
public:
    int x;
};

extern "C" void func_0041D840(Sub40 *, char *, float);

extern "C" char D_00581F30[];

extern "C" short func_0034B940(char *, char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_004F5F80(char *p) {
    char *t;
    char *o;
    char *b;
    p[0x44] = -1;
    p[0x45] = 4;
    p[0x46] = p[0x150];
    *(int *)(p + 0xB50) = 0;
    *(int *)(p + 0xB60) = 0;
    *(char **)(p + 0xB50) = func_00207480(2, 0x192, 0, 0x10);
    o = *(char **)(p + 0xB50);
    t = p + 0x1F0;
    if (o) {
        *(char **)(o + 0x90) = t;
        o[0x9A] = 0;
    } else {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = -1.0f;
    *(float *)(p + 0x7C) = 1.0f;
    QCOPY(p + 0x50, *(char **)(*(char **)(p + 0x194) + 0x104) + 0x30);
    *(short *)(p + 0x90) = func_0034B940(p + 0x50, *(char **)(p + 0xD0) + 0x50);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    b = p;
    if (b) b += 0x40;
    func_0041D840((Sub40 *)b, p + 0x1B0, 1.0f);
    p[0xAF0] = 1;
    p[0xAF1] = 0;
    *(short *)(p + 0xAF2) = 0;
    p[0xB00] = 2;
    *(int *)(p + 0xB10) = 0;
    *(float *)(p + 0xB14) = 180.0f;
    *(int *)(p + 0xB18) = 0;
    *(float *)(p + 0xB1C) = 1.0f;
    *(float *)(p + 0xB20) = 180.0f;
    func_0028C200(p + 0x8D0, p + 0xAF0, p + 0xB00, 3, D_00581F30, p, 0);
    *(int *)(p + 0x9A8) = 0x40;
    func_0028C8E0(p + 0x8D0, 6);
    func_0028C910(p + 0x8D0);
    func_0028C3A0(p + 0x8D0, 0, -1, (int)(p + 0x1F0));
    *(int *)(p + 0xB54) = 0;
}
