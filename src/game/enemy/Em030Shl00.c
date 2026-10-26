void func_0028C200(char *, char *, char *, int, char *, char *, char *);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

char *func_00207480(int, int, float *, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern char D_00564950[];

extern char D_00564FC0[];

void func_00131D70(char *, char *);

void func_002530C0(char *, char *);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern V4 D_0056A0C0;

void func_00133890(char *, char *, V4 *);

void func_003FD410(char *p) {
    V4 m;
    char *t;
    char *o;
    char *e;
    p[4] = 2;
    p[0x44] = -1;
    p[0x45] = 4;
    QCOPY(p + 0x50, *(char **)(*(char **)(p + 0x190) + 0x104) + 0x30);
    t = *(char **)(*(char **)(p + 0xD0) + 0x674);
    *(float *)(p + 0xF0) = *(float *)(p + 0x50) - *(float *)(*(char **)(t + 0x104) + 0x30);
    *(float *)(p + 0xF4) = *(float *)(p + 0x54) - *(float *)(*(char **)(t + 0x104) + 0x34);
    *(float *)(p + 0xF8) = *(float *)(p + 0x58) - *(float *)(*(char **)(t + 0x104) + 0x38);
    *(float *)(p + 0xFC) = 1.0f;
    func_00131D70(p + 0x80, p + 0xF0);
    m = D_0056A0C0;
    func_00133890(p + 0x150, p + 0xF0, &m);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x470) = func_00207480(3, 0xBE, 0, 0x10);
    if ((o = *(char **)(p + 0x470)) != 0) {
        *(char **)(o + 0x90) = p + 0x150;
        o[0x9A] = 3;
        e = *(char **)(p + 0x470);
        e[0x3A] = 1;
    }
    p[0x3C0] = 4;
    p[0x3C1] = 0;
    *(short *)(p + 0x3C2) = 0;
    p[0x3C4] = 1;
    p[0x3C5] = 0;
    *(short *)(p + 0x3C6) = 1;
    p[0x3D0] = 2;
    *(int *)(p + 0x3E0) = 0;
    *(int *)(p + 0x3E4) = 0;
    *(float *)(p + 0x3E8) = 20.0f;
    *(float *)(p + 0x3EC) = 1.0f;
    *(float *)(p + 0x3F0) = 5.0f;
    p[0x420] = 2;
    *(int *)(p + 0x430) = 0;
    *(int *)(p + 0x434) = 0;
    *(float *)(p + 0x438) = 30.0f;
    *(float *)(p + 0x43C) = 1.0f;
    *(float *)(p + 0x440) = 15.0f;
    func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 3, D_00564950, p, 0);
    *(int *)(p + 0x278) = 0x30441;
    func_0028C8E0(p + 0x1A0, 8);
    func_0028C910(p + 0x1A0);
    func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x1A0, 1, -1, p + 0x150);
    func_002530C0(p, D_00564FC0);
    *(short *)(p + 0x480) = 0;
    p[0x482] = 0;
}

extern char D_01DFABA0[];

void func_00206730(char *);

void func_00207470(int, int, char *);

void func_00286040(char *);

void func_00330BD0(char *, int, char *, int, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00105578(float, float *, float *);

void func_00104C00(char *, char *, float *);

void func_003FD970(char *p) {
    float m[16] __attribute__((aligned(16)));
    func_00206730(p + 0x470);
    func_00286040(p + 0x474);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x47C) = 1.0f;
        func_00207470(3, 0x142, p + 0x150);
        func_00330BD0(D_01DFABA0, 0x19, p + 0x50, 0x1E, 0);
    case 1:
        *(float *)(p + 0x47C) = *(float *)(p + 0x47C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x47C) < 0.0f) {
            *(unsigned char *)(p + 4) = 4;
        }
        break;
    }
    *(short *)(p + 0x480) += 10923.0f * *(float *)(p + 0x10);
    *(float *)(p + 0x88) = (float)*(short *)(p + 0x480) / 65536.0f * 6.283185f;
    UNIT(m);
    func_00105578(*(float *)(p + 0x88), m, m);
    func_00104C00(p + 0x150, p + 0x150, m);
}

void func_003FD3E0(p0) char *p0; {
    float v0;
    v0 = 0.0f;
    *(float *)(p0 + 1148) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 1148) < v0) {
        *(char *)(p0 + 4) = 1;
    }
}

int func_003FDB00(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(int *)(p0 + 1136);
    if (v1 != 0) {
        v3 = func_001AD140(v1);
    }
    v2 = *(int *)(v0 + 1140);
    if (v2 != 0) {
        v3 = func_001AD140(v2);
    }
    return v3;
}

void func_003FDAD0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_003FDB60();

void func_003FDC00(char *p) { func_003FDB60(p + -64); }

void func_003FDC10(char *p) { func_003FDB60(p + -160); }

void func_003FDAE0(void) {}

void func_003FDAF0(void) {}

void func_003FDB50(void) {}
