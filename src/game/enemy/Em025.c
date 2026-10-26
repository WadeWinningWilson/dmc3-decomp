 void func_00299CC0(unsigned char *);

void func_00299C00(unsigned char *p) {
    int func_0024E800(unsigned char *);
    void func_00299DE0(unsigned char *, int);
    void func_002965E0(unsigned char *, int);
    int idx = -1;
    int i;
    if (func_0024E800(p + 0x8980)) {
        func_00299DE0(p, 0);
        for (i = 0; i < 3; i++) {
            if (p[0xA8F8 + i] == 0) {
                idx = i;
                break;
            }
        }
        if (p[0x8920 + idx] == 0) {
            func_00299CC0(p);
        } else {
            p[0xA993] = 0;
            func_002965E0(p, 0);
        }
    }
}

void func_00299D20(unsigned char *p) {
    int func_0024E800(unsigned char *);
    void func_00299DE0(unsigned char *, int);
    void func_002965E0(unsigned char *, int);
    int idx = -1;
    int i;
    if (func_0024E800(p + 0x8980)) {
        func_00299DE0(p, 0);
        for (i = 0; i < 3; i++) {
            if (p[0xA8F8 + i] == 0) {
                idx = i;
                break;
            }
        }
        if (p[0x8920 + idx] == 0) {
            func_00299CC0(p);
        } else {
            p[0xA993] = 0;
            func_002965E0(p, 0);
        }
    }
}

void func_00105230(float *, float *, float *);

void func_001318E0(float *, float *, float *);

char *func_00207470(int, int, float *);

typedef struct { float v[7][4]; } A29F __attribute__((aligned(16)));

typedef struct { int v[7]; } I29F __attribute__((aligned(16)));

extern A29F D_00549EF0;

extern A29F D_00549F60;

extern I29F D_00549FD0;

void func_0029FD40(char *p) {
    void func_002A0090(char *);
    A29F r = D_00549EF0;
    A29F t = D_00549F60;
    I29F k = D_00549FD0;
    char *s[7] = { p + 0x1AD8, p + 0x1AD8, p + 0x1AD8, p + 0x1AD8, p + 0x1BD0, p + 0x1BE4, p + 0x1BF8 };
    float m[16] __attribute__((aligned(16)));
    int i;
    char *o;
    func_002A0090(p);
    for (i = 0; i < 7; i++) {
    }
    for (i = 0; i <= 1; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_001318E0(m, m, r.v[i]);
        func_00105230(m, m, t.v[i]);
        ((char **)(p + 0xA9A8))[i] = func_00207470(2, 0x15, m);
        if ((o = ((char **)(p + 0xA9A8))[i]) != 0) {
            *(int *)(o + 0x90) = *(int *)(((char **)s[i])[k.v[i]] + 0x104);
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
    for (i = 4; i <= 6; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_001318E0(m, m, r.v[i]);
        func_00105230(m, m, t.v[i]);
        ((char **)(p + 0xA9A8))[i] = func_00207470(2, 0x17, m);
        if ((o = ((char **)(p + 0xA9A8))[i]) != 0) {
            *(int *)(o + 0x90) = *(int *)(((char **)s[i])[k.v[i]] + 0x104);
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
}

char *func_00207480(int, int, char *, int);

char *func_002792A0(char *);

void func_0029C760(char *);

int func_002A4030(char *);

#define ID29C(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0029C4B0(char *p) {
    int func_0024E800(char *);
    void func_00299DE0(char *, int);
    void func_0029DCE0(char *, int);
    void func_0034BA60(int, float *, int, int, int);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int k;
    char *o;
    if (func_0024E800(p + 0x8980) == 0) return;
    switch (*(int *)(p + 0xA92C)) {
    case 0x1E:
        func_00299DE0(p, 0);
        break;
    case 0x1F:
        func_00299DE0(p, 1);
        break;
    }
    *(signed char *)(p + 0xA993) = 0;
    *(signed char *)(p + 5) = 0x1D;
    func_0029DCE0(p, 0x2A);
    func_0029C760(p);
    *(float *)(func_002792A0(p + 0x1D00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2900) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2F00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x3500) + 0x148) = 1.0f;
    k = func_002A4030(p);
    switch (k) {
    case 0:
        if (*(unsigned char *)(p + 0x8920) == 1) {
            ID29C(m);
            o = func_00207480(3, 0xB1, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BE0) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x8921) == 1) {
            ID29C(m);
            o = func_00207480(3, 0xB2, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BF4) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x8922) == 1) {
            ID29C(m);
            o = func_00207480(3, 0xB3, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1C08) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    }
    if (*(unsigned char *)((char *)k + (int)p + 0x8920) == 1) {
        v[0] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x30);
        v[1] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x34);
        v[2] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x38);
        v[3] = 1.0f;
        func_0034BA60(0x2A, v, *(signed char *)(p + 0x46), 0, 1);
    }
}

#define ID299(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_00299F70(char *p) {
    int func_0024E800(char *);
    void func_00299DE0(char *, int);
    void func_0029DCE0(char *, int);
    void func_0034BA60(int, float *, int, int, int);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int k;
    char *o;
    if (func_0024E800(p + 0x8980) == 0) return;
    switch (*(int *)(p + 0xA92C)) {
    case 0x1E:
        func_00299DE0(p, 0);
        break;
    case 0x1F:
        func_00299DE0(p, 1);
        break;
    }
    *(signed char *)(p + 0xA993) = 0;
    *(signed char *)(p + 0xAA91) = 1;
    *(signed char *)(p + 5) = 0x16;
    func_0029DCE0(p, 0x28);
    *(float *)(func_002792A0(p + 0x1D00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2900) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2F00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x3500) + 0x148) = 1.0f;
    k = func_002A4030(p);
    switch (k) {
    case 0:
        if (*(unsigned char *)(p + 0x8920) == 1) {
            ID299(m);
            o = func_00207480(3, 0xB1, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BE0) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x8921) == 1) {
            ID299(m);
            o = func_00207480(3, 0xB2, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BF4) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x8922) == 1) {
            ID299(m);
            o = func_00207480(3, 0xB3, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1C08) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    }
    if (*(unsigned char *)((char *)k + (int)p + 0x8920) == 1) {
        v[0] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x30);
        v[1] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x34);
        v[2] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x38);
        v[3] = 1.0f;
        func_0034BA60(0x2A, v, *(signed char *)(p + 0x46), 0, 1);
    }
}

void func_0029B5B0(char *);

#define ID29B(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0029B350(char *p) {
    int func_0024E800(char *);
    void func_00299DE0(char *, int);
    void func_0029DCE0(char *, int);
    void func_0034BA60(int, float *, int, int, int);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int k;
    char *o;
    if (func_0024E800(p + 0x8980) == 0) return;
    switch (*(int *)(p + 0xA92C)) {
    case 0x1E:
        func_00299DE0(p, 0);
        break;
    case 0x1F:
        func_00299DE0(p, 1);
        break;
    }
    *(signed char *)(p + 0xA993) = 0;
    *(signed char *)(p + 5) = 0x19;
    func_0029DCE0(p, 0x23);
    func_0029B5B0(p);
    k = func_002A4030(p);
    switch (k) {
    case 0:
        if (*(unsigned char *)(p + 0x8920) == 1) {
            ID29B(m);
            o = func_00207480(3, 0xB1, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BE0) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x8921) == 1) {
            ID29B(m);
            o = func_00207480(3, 0xB2, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BF4) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x8922) == 1) {
            ID29B(m);
            o = func_00207480(3, 0xB3, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1C08) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    }
    if (*(unsigned char *)((char *)k + (int)p + 0x8920) == 1) {
        v[0] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x30);
        v[1] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x34);
        v[2] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x38);
        v[3] = 1.0f;
        func_0034BA60(0x2A, v, *(signed char *)(p + 0x46), 0, 1);
    }
}

 void func_0029F260(char *, int, int);

void func_0029CC30(char *p) {
    int func_0024E780(char *, int, int);
    void func_0024E7B0(char *, int, int);
    void func_0029DCE0(char *, int);
    int i;
    if ((unsigned char)func_0024E780(p + 0x8980, 0, 1) == 1) {
        func_0024E7B0(p + 0x8980, 0, 1);
        p[0x997C] = 0;
        p[0x99EC] = 0;
        p[0x9A5C] = 0;
        p[0x9ACC] = 0;
        p[0x9B3C] = 0;
        for (i = 1; i <= 4; i++) {
            func_0029F260(p, i, 0);
            p[0x9C74 + i] = 0;
        }
        func_0029DCE0(p, 0x21);
        p[5] = 0x25;
    }
}

void func_0029D1E0(char *p) {
    int func_0024E800(char *);
    unsigned char func_0024E780(char *, int, int);
    void func_0024E7B0(char *, int, int);
    void func_002965E0(char *, int);
    float m[16] __attribute__((aligned(16)));
    int i;
    char *o;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    if (*(int *)(p + 0xA92C) == 0x34) {
        switch (func_0024E780(p + 0x8980, 0, 0)) {
        case 1:
            func_0024E7B0(p + 0x8980, 0, 0);
            for (i = 0; i < 3; i++) {
                if (*(unsigned char *)((char *)i + (int)p + 0xA8F8) == 0 && *(unsigned char *)((char *)i + (int)p + 0x8920) != 0) {
                    o = func_00207480(3, 0xB5, (char *)m, 0x10);
                    if (o != 0) {
                        *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(i * 0x14) + (int)p + 0x1BE0) + 0x104);
                        *(signed char *)(o + 0x9A) = 0;
                    }
                }
            }
            break;
        case 2:
            func_0024E7B0(p + 0x8980, 0, 0);
            for (i = 0; i < 3; i++) {
                if (*(unsigned char *)((char *)i + (int)p + 0xA8F8) == 1 && *(unsigned char *)((char *)i + (int)p + 0x8920) != 0) {
                    o = func_00207480(3, 0xB5, (char *)m, 0x10);
                    if (o != 0) {
                        *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(i * 0x14) + (int)p + 0x1BE0) + 0x104);
                        *(signed char *)(o + 0x9A) = 0;
                    }
                }
            }
            break;
        case 3:
            func_0024E7B0(p + 0x8980, 0, 0);
            for (i = 0; i < 3; i++) {
                if (*(unsigned char *)((char *)i + (int)p + 0xA8F8) == 2 && *(unsigned char *)((char *)i + (int)p + 0x8920) != 0) {
                    o = func_00207480(3, 0xB5, (char *)m, 0x10);
                    if (o != 0) {
                        *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(i * 0x14) + (int)p + 0x1BE0) + 0x104);
                        *(signed char *)(o + 0x9A) = 0;
                    }
                }
            }
            break;
        }
    }
    if (func_0024E800(p + 0x8980) != 0) func_002965E0(p, 0xFFFF);
}

extern float D_0055FD10[];

extern float D_0055FD14[];

extern float D_0055FD18[];

extern float D_0055FD1C[];

void func_002A47D0(int a, float *out) {
    *out = D_0055FD1C[0] + (D_0055FD18[0] + (D_0055FD10[0] + D_0055FD14[0]));
}

void func_00299A60(char *p) {
    int func_0024E800(char *);
    void func_002965E0(char *, int);
    if (func_0024E800(p + 0x8980)) {
        func_002965E0(p, 0xFFFF);
    }
}

void func_0029D0A0(char *p) {
    int func_0024E800(char *);
    void func_002965E0(char *, int);
    if (func_0024E800(p + 0x8980) != 0) {
        *(char *)(p + 43403) = 0;
        *(char *)(p + 43664) = 1;
        func_002965E0(p, 0xFFFF);
    }
    *(float *)(p + 43404) = 1000.0f;
    *(float *)(p + 43648) = 1000.0f;
}

int func_0024DB10(char *, int, int, int, int, int, int);

void func_0029DD80(char *p, int a, int b) {
    *(int *)(p + 0xA92C) = a;
    func_0024DB10(p + 0x8980, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
    func_0024DB10(p + 0x8A50, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
    func_0024DB10(p + 0x8B20, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
    func_0024DB10(p + 0x8BF0, 0, *(int *)(p + 0xA92C), -1, -1, -1, b);
}

void func_00104C00(char *, float *, char *);

short func_00131D10(float, float);

void func_00105300(float *, char *);

void func_00105760(float *, float *, float);

void func_00133890(float *, float *, float *);

static inline void set4_297(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void func_00297370(char *p) {
    extern int D_005BE09C;
    unsigned char func_0024E780(char *, int, int);
    void func_0024E7B0(char *, int, int);
    float func_002A4070(char *);
    void func_001ACC30(int, int, int, int, int);
    float m90[16] __attribute__((aligned(16)));
    float m50[16] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    char *q;
    float d;
    q = p + 0x9BB0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m50) : "memory");
    func_00105760(m50, m50, *(float *)(p + 0x9C40) * *(float *)(p + 0x10));
    func_00104C00((char *)m90, (float *)q, (char *)m50);
    if (m90[8] < -0.422f) {
        set4_297(v40, -0.422f, 0.0f, -0.9066f, 0.0f);
        set4_297(v30, 0.0f, 1.0f, 0.0f, 0.0f);
        func_00133890(m90, v40, v30);
    }
    if (!(m90[8] <= 0.422f)) {
        set4_297(v40, 0.422f, 0.0f, -0.9066f, 0.0f);
        set4_297(v30, 0.0f, 1.0f, 0.0f, 0.0f);
        func_00133890(m90, v40, v30);
    }
    *(short *)(p + 0x90) = func_00131D10(m90[8], m90[10]);
    func_00105300((float *)(p + 0x9BB0), (char *)m90);
    d = func_002A4070(p);
    *(float *)(p + 0xAA2C) = *(float *)(p + 0xAA2C) - d * *(float *)(p + 0x10);
    if (*(float *)(p + 0xAA2C) <= 0.0f) *(float *)(p + 0xAA2C) = 0.0f;
    if (func_0024E780(p + 0x8980, 0, 0) == 1) {
        func_0024E7B0(p + 0x8980, 0, 0);
        *(unsigned char *)(p + 5) = 3;
        func_001ACC30(D_005BE09C, 3, 0x14, 0xA, 0);
    }
}

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

extern char D_005A77A0[];

extern char D_005B0890[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_0031E400(char *);

void func_003C9D90(char *);

void func_0024D930(char *);

void func_00203040();

void func_00202FE0();

extern char D_005AAA98[];

void func_0024D9A0();

void func_002791E0();

void func_002E1BC0(char *);

void func_0031DED0();

void func_0031DF20();

void func_001FBAB0(char *);

void func_0028C1A0();

extern char D_005A94C0[];

extern char D_005A94E4[];

extern char D_005A9564[];

extern char D_005A95F8[];

extern char D_005A96C4[];

extern char D_005A977C[];

void func_001F9E40(char *);

void func_001FBC10();

void func_002047C0();

void func_00231560();

void func_00291050();

void func_00291100();

void func_002E82A0(char *);

void func_002E82E0();

char *func_002909A0(char *p) {
    int i;
    int j;
    int k;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005A94C0;
    *(char **)(p + 0x40) = D_005A94E4;
    *(char **)(p + 0xA0) = D_005A9564;
    *(char **)(p + 0xD0) = D_005A95F8;
    *(char **)(p + 0x130) = D_005A96C4;
    *(char **)(p + 0x1D0) = D_005A977C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x190);
    func_002790E0(p + 0x1D00);
    func_002790E0(p + 0x2300);
    func_00100450(p + 0x2900, func_002790E0, func_002791E0, 0x600, 3);
    func_00100450(p + 0x3B00, func_002790E0, func_002791E0, 0x600, 3);
    func_00100450(p + 0x4D00, func_002790E0, func_002791E0, 0x600, 5);
    func_002790E0(p + 0x6B00);
    func_00100450(p + 0x7100, func_002790E0, func_002791E0, 0x600, 3);
    func_00100450(p + 0x8300, func_0031DED0, func_0031DF20, 0x20, 3);
    func_00100450(p + 0x8458, func_001FBAB0, func_001FBC10, 0x194, 3);
    func_0024D930(p + 0x8980);
    func_00100450(p + 0x8A50, func_0024D930, func_0024D9A0, 0xD0, 3);
    func_00100450(p + 0x8CC0, func_0024D930, func_0024D9A0, 0xD0, 3);
    p[0x8F30] = 0;
    p[0x8F31] = 0;
    *(short *)(p + 0x8F32) = 0;
    *(int *)(p + 0x8F38) = 0;
    *(int *)(p + 0x8F3C) = 0;
    *(int *)(p + 0x8F40) = 0;
    *(int *)(p + 0x8F50) = 0;
    *(int *)(p + 0x8F54) = 0;
    *(int *)(p + 0x8F58) = 0;
    *(float *)(p + 0x8F5C) = 1.0f;
    *(float *)(p + 0x8F60) = 100000.0f;
    p[0x8F64] = 0;
    p[0x8F65] = 0;
    *(short *)(p + 0x8F66) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x8F68) = -1;
    p[0x8F80] = 0;
    p[0x8F81] = 0;
    *(short *)(p + 0x8F82) = 0;
    *(int *)(p + 0x8F88) = 0;
    *(int *)(p + 0x8F8C) = 0;
    *(int *)(p + 0x8F90) = 0;
    *(int *)(p + 0x8FA0) = 0;
    *(int *)(p + 0x8FA4) = 0;
    *(int *)(p + 0x8FA8) = 0;
    *(float *)(p + 0x8FAC) = 1.0f;
    *(float *)(p + 0x8FB0) = 100000.0f;
    p[0x8FB4] = 0;
    p[0x8FB5] = 0;
    *(short *)(p + 0x8FB6) = 0;
    for (j = 0; j < 10; j++) *(short *)(p + j * 2 + 0x8FB8) = -1;
    p[0x8FD0] = 0;
    p[0x8FD1] = 0;
    *(short *)(p + 0x8FD2) = 0;
    *(int *)(p + 0x8FD8) = 0;
    *(int *)(p + 0x8FDC) = 0;
    *(int *)(p + 0x8FE0) = 0;
    *(int *)(p + 0x8FF0) = 0;
    *(int *)(p + 0x8FF4) = 0;
    *(int *)(p + 0x8FF8) = 0;
    *(float *)(p + 0x8FFC) = 1.0f;
    *(float *)(p + 0x9000) = 100000.0f;
    p[0x9004] = 0;
    p[0x9005] = 0;
    *(short *)(p + 0x9006) = 0;
    for (k = 0; k < 10; k++) *(short *)(p + k * 2 + 0x9008) = -1;
    func_00100450(p + 0x9020, func_00291100, func_002047C0, 0x50, 3);
    func_0028C110(p + 0x9200);
    func_0028C110(p + 0x9420);
    func_00100450(p + 0x9930, func_00291050, func_00231560, 0x70, 5);
    p[0x9B70] = 0;
    func_001F9E40(p + 0x9C44);
    func_001F9E40(p + 0x9C58);
    func_0028C110(p + 0x9CA0);
    func_00100450(p + 0x9EC0, func_0028C110, func_0028C1A0, 0x220, 3);
    func_002E82A0(p + 0xA564);
    func_00100450(p + 0xA5A8, func_002E82A0, func_002E82E0, 0x44, 3);
    q = p + 0xA680;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_00100450(p + 0xA710, func_00203040, func_00202FE0, 0x60, 3);
    q = p + 0xA830;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0xA890;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    return p;
}

extern char D_01CAFF0C[];

float func_0011DA38(float);

float func_001324E0(float *);

extern float D_005603C0[];

extern float D_005603C4[];

extern float D_005603C8[];

extern float D_005BCA40[];

void func_00104E78(char *, char *);

void func_00131DF0(float *, char *, float *);

static inline char *mt29F(char *p) { return p + 0x9BB0; }

int func_0029F690(char *p) {
    float v[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    char m[64] __attribute__((aligned(16)));
    float len;
    float c;
    int r;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    v[3] = 1.0f;
    func_00104E78(m, mt29F(p));
    func_00131DF0(o, m, v);
    len = func_001324E0(o);
    c = o[0] / len;
    if (len < D_005603C0[0]) {
        if (c < func_0011DA38(2.0f * (3.141593f * (-D_005BCA40[0] / 2.0f / 360.0f)))) r = 0;
        else if (c > func_0011DA38(2.0f * (3.141593f * (D_005BCA40[0] / 2.0f / 360.0f)))) r = 1;
        else r = 2;
    } else if (len < D_005603C4[0]) {
        if (c < func_0011DA38(2.0f * (3.141593f * (-D_005BCA40[0] / 2.0f / 360.0f)))) r = 3;
        else if (c > func_0011DA38(2.0f * (3.141593f * (D_005BCA40[0] / 2.0f / 360.0f)))) r = 4;
        else r = 5;
    } else if (o[2] < D_005603C8[0]) {
        r = 6;
    } else {
        r = 7;
    }
    switch (*(unsigned char *)(p + 0xA8F0)) {
    case 2:
    case 5:
        *(int *)(p + 0xA8F4) = 1;
        break;
    case 1:
    case 4:
        *(int *)(p + 0xA8F4) = 2;
        break;
    case 0:
    case 3:
        *(int *)(p + 0xA8F4) = 3;
        break;
    case 6:
        *(int *)(p + 0xA8F4) = 4;
        break;
    case 7:
        *(int *)(p + 0xA8F4) = 5;
        break;
    }
    return r;
}

void func_002A0100(char *p) {
    int i;
    for (i = 0; i < 3; i++, p += 4) {
        if (*(int *)(p + 0x8430) != 0) {
            *(int *)(p + 0x8430) = 3;
        }
    }
}

void func_00298200(char *p) {
    int func_0024E800(char *);
    void func_0024E7B0(char *, int, int);
    void func_002965E0(char *, int);
    if (func_0024E800(p + 0x8980) != 0) {
        func_0024E7B0(p + 0x8980, 0, 0);
        func_002965E0(p, 0xFFFF);
    }
}

void func_002972C0(char *p) {
    int func_0024E780(char *, int, int);
    void func_0024E7B0(char *, int, int);
    float func_002A4070(char *);
    float r = func_002A4070(p);
    *(float *)(p + 0xAA2C) = *(float *)(p + 0xAA2C) - r * *(float *)(p + 0x10);
    if (*(float *)(p + 0xAA2C) <= 0.0f) {
        *(float *)(p + 0xAA2C) = 0.0f;
    }
    if ((unsigned char)func_0024E780(p + 0x8980, 0, 0) == 1) {
        func_0024E7B0(p + 0x8980, 0, 0);
        *(unsigned char *)(p + 5) = 2;
    }
}

void func_0029CF80(char *p) {
    extern char *D_005BE09C;
    void func_0029DCE0(char *, int);
    void func_001ACC30(char *, int, int, int, int);
    func_0029DCE0(p, 12);
    *(unsigned char *)(p + 5) = 15;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    *(unsigned char *)(p + 0xAA91) = 1;
    *(float *)(p + 0x8924) = 1.0f;
    func_001ACC30(D_005BE09C, 3, 20, 30, 0);
    *(float *)(p + 0xA98C) = 1000.0f;
    *(float *)(p + 0xAA80) = 1000.0f;
    *(unsigned char *)(p + 0xA98B) = 0;
}

void func_002A0100(char *p);

extern float D_005606E0[][3];

int func_002A4A40(char *);

void func_002977B0(char *p) {
    void func_0024E7B0(char *, int, int);
    void func_0029DCE0(char *, int);
    int k;
    func_0024E7B0(p + 0x8980, 0, 0);
    func_0029DCE0(p, 0x38);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    k = func_002A4A40(p);
    *(float *)(p + 0x8924) = ((float *)D_005606E0[k])[*(int *)(p + 0x8928)];
    *(unsigned char *)(p + 5) = 8;
    *(int *)(p + 0x892C) = *(int *)(p + 0x8928);
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002999D0(char *p) {
    void func_0029DCE0(char *, int);
    float m[16];
    char *o;
    func_0029DCE0(p, 0x30);
    *(unsigned char *)(p + 5) = 0xD;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    UNIT(m);
    o = func_00207480(3, 0xAD, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x9BB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_00299AA0(char *p) {
    void func_0029DCE0(char *, int);
    float m[16];
    char *o;
    func_0029DCE0(p, 0x35);
    *(unsigned char *)(p + 5) = 0xE;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    UNIT(m);
    o = func_00207480(3, 0xAE, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x9BB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_00299B70(char *p) {
    void func_0029DCE0(char *, int);
    float m[16];
    char *o;
    func_0029DCE0(p, 0x31);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x11;
    UNIT(m);
    o = func_00207480(3, 0xAF, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x9BB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_0029D120(char *p) {
    void func_0029DCE0(char *, int);
    float m[16];
    char *o;
    UNIT(m);
    if (*(unsigned int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) {
        func_0029DCE0(p, 0x34);
    } else {
        func_0029DCE0(p, 0x37);
        o = func_00207480(3, 0xAF, (char *)m, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x9BB0;
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
    *(unsigned char *)(p + 5) = 0x13;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    *(unsigned char *)(p + 0xA991) = 0;
}

float func_002A41B0(char *);

void func_0029F960(char *);

void func_002970A0(char *p) {
    void func_002965E0(char *, int);
    float func_002A4070(char *);
    float f;
    if (((unsigned char *)(p + 0x8920))[func_002A4030(p)] == 0) {
        *(unsigned char *)(p + 0xA988) = 1;
        func_002965E0(p, 0xFFFF);
        return;
    }
    if (*(unsigned char *)(p + 0xAA92) != 0) {
        *(float *)(p + 0xAA2C) = 0.0f;
    }
    switch (*(int *)(p + 0xAA34)) {
    case 0:
        f = func_002A4070(p);
        *(float *)(p + 0xAA2C) = *(float *)(p + 0xAA2C) - f * *(float *)(p + 0x10);
        if (*(float *)(p + 0xAA2C) <= 0.0f) {
            *(int *)(p + 0xAA34) = *(int *)(p + 0xAA34) + 1;
            *(float *)(p + 0xAA2C) = 0.0f;
            *(float *)(p + 0xAA30) = func_002A41B0(p);
        }
        break;
    case 1:
        *(float *)(p + 0xAA30) = *(float *)(p + 0xAA30) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xAA30) <= 0.0f) {
            *(int *)(p + 0xAA34) = 0;
            func_0029F960(p);
        }
        break;
    default:
        *(int *)(p + 0xAA34) = 0;
        break;
    }
}

void func_002EF940(int, char *);

void func_0029FCA0(char *p) {
    int i;
    func_002EF940(*(int *)D_01CAFF0C, p + 0x8F80);
    func_002EF940(*(int *)D_01CAFF0C, p + 0x8FD0);
    for (i = 0; i < 3; i++) {
        if (*(unsigned char *)(p + i + 0x8920) != 0) {
            func_002EF940(*(int *)D_01CAFF0C, p + i * 0x50 + 0x9020);
        }
    }
}

void func_00206730(char *);

void func_0029FFF0(char *p) {
    int i;
    for (i = 0; i < 7; i++) {
        func_00206730(p + i * 4 + 0xA9A8);
    }
    func_00206730(p + 0xA9C4);
    func_00206730(p + 0xA9C8);
    func_00206730(p + 0xA9CC);
    func_00206730(p + 0xA9D0);
    func_00206730(p + 0xA9D4);
    func_00206730(p + 0xA9D8);
}

void func_001AD140(char *);

void func_002F2D30(char *, char *);

void func_00138330(void);

void func_002A02F0(char *p) {
    void func_002A0090(char *p);
    int i;
    if (*(unsigned char *)(p + 0xAA88) == 0) {
        func_002A0090(p);
        func_001AD140(*(char **)(p + 0xA984));
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        for (i = 0; i < 4; i++) {
            if (*(char **)(p + i * 4 + 0xAB7C) != 0) {
                func_001AD140(*(char **)(p + i * 4 + 0xAB7C));
                *(char **)(p + i * 4 + 0xAB7C) = 0;
            }
        }
        func_00138330();
    }
}

void func_00228350(char *);

void func_002A4AF0(char *p) {
    int i;
    func_00228350(p + 0xAB7C);
    func_00228350(p + 0xAB80);
    func_00228350(p + 0xAB84);
    func_00228350(p + 0xAB88);
    for (i = 0; i < 7; i++) {
        func_00206730(p + i * 4 + 0xA9A8);
    }
    func_00206730(p + 0xA9C4);
    func_00206730(p + 0xA9C8);
    func_00206730(p + 0xA9CC);
    func_00206730(p + 0xA9D0);
    func_00206730(p + 0xA9D4);
    func_00206730(p + 0xA9D8);
}

void func_00298060(char *p) {
    int func_0024E780(char *, int, int);
    void func_0024E7B0(char *, int, int);
    void func_0034BA60(int, char *, int, int, int);
    float v[4] __attribute__((aligned(16)));
    float *x;
    float *y;
    float *z;
    x = (float *)(p + 0x9BE0);
    *x = *x + *(float *)(p + 0x9C30) * *(float *)(p + 0x10);
    y = (float *)(p + 0x9BE4);
    z = (float *)(p + 0x9BE8);
    *y = *y + *(float *)(p + 0x9C34) * *(float *)(p + 0x10);
    *z = *z + *(float *)(p + 0x9C38) * *(float *)(p + 0x10);
    *(float *)(p + 0x9644) = *(float *)(p + 0x9644) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x9644) < 0.0f) {
        *(float *)(p + 0x9644) = 84.0f;
        v[0] = *x;
        v[1] = *y;
        v[2] = *z;
        v[3] = 1.0f;
        func_0034BA60(0x29, (char *)v, *(signed char *)(p + 0x46), 0, 1);
    }
    if ((unsigned char)func_0024E780(p + 0x8980, 0, 0) != 0) {
        func_0024E7B0(p + 0x8980, 0, 0);
        *(float *)(p + 0x8924) = 1.0f;
        *(unsigned char *)(p + 5) = 10;
        *(unsigned char *)(p + 0x997C) = 0;
        *(unsigned char *)(p + 0x99EC) = 0;
        *(unsigned char *)(p + 0x9A5C) = 0;
        *(unsigned char *)(p + 0x9ACC) = 0;
        *(unsigned char *)(p + 0x9B3C) = 0;
    }
}

static inline char *ent292(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (*(int *)(q + i * 4 + 8) == 0) { r = 0; } else { r = q + *(int *)(q + i * 4 + 8); } return r; }

static inline char *gch292(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent292(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

void func_0024D9F0(char *, char *, int, int, char *, char *, char *, char *, char *);

void func_00292090(char *p) {
    int i;
    unsigned char *b;
    func_0024D9F0(p + 0x8980, gch292(*(char **)(p + 0x8970), 0x19), 0, 1, p + 0x9C80, p + 0x1D04, p + 0x1AD8, p + 0x9C7C, p + 0x9CA0);
    for (i = 0; i < 3; i++) {
        b = (unsigned char *)(p + i + 0xA8F8);
        func_0024D9F0(p + i * 0xD0 + 0x8A50, gch292(*(char **)(p + 0x8970), *b + 0x1A), 0, 1, p + (*b + 1) * 4 + 0x9C80, p + i * 0x600 + 0x2904, p + i * 0x14 + 0x1BD0, p + 0x9C7C, p + i * 0x220 + 0x9EC0);
        func_0024D9F0(p + i * 0xD0 + 0x8CC0, gch292(*(char **)(p + 0x8970), *b + 0x1A), 0, 1, p + (*b + 1) * 4 + 0x9C80, p + i * 0x194 + 0x8458, p + i * 0x14 + 0x1C48, p + 0x9C7C, 0);
    }
}

void func_00299B30(char *p) {
    int func_0024E800(char *);
    void func_002965E0(char *, int);
    if (func_0024E800(p + 0x8980)) {
        func_002965E0(p, 0xFFFF);
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_001F9E70();

void func_0024FEA0();

void func_0031E440();

void func_00320590();

char *func_00291180(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005A94C0;
        *(char * *)(p + 64) = D_005A94E4;
        *(char * *)(p + 160) = D_005A9564;
        *(char * *)(p + 208) = D_005A95F8;
        *(char * *)(p + 304) = D_005A96C4;
        *(char * *)(p + 464) = D_005A977C;
        if (p + 43152 != 0) {
            *(char * *)(p + 43168) = D_005B0890;
            if (p + 43152 != 0) {
                *(char * *)(p + 43168) = D_005A77A0;
            }
        }
        if (p + 43056 != 0) {
            *(char * *)(p + 43072) = D_005B0890;
            if (p + 43056 != 0) {
                *(char * *)(p + 43072) = D_005A77A0;
            }
        }
        func_001003E0(p + 42768, (void *)func_00202FE0, 96, 3);
        if (p + 42624 != 0) {
            *(char * *)(p + 42640) = D_005AAA98;
            if (p + 42624 != 0) {
                *(char * *)(p + 42640) = D_005A77A0;
            }
        }
        func_001003E0(p + 42408, (void *)func_002E82E0, 68, 3);
        func_002E82E0(p + 42340, -1);
        func_001003E0(p + 40640, (void *)func_0028C1A0, 544, 3);
        func_0028C1A0(p + 40096, -1);
        func_001F9E70(p + 40024, -1);
        func_001F9E70(p + 40004, -1);
        func_001003E0(p + 39216, (void *)func_00231560, 112, 5);
        func_0028C1A0(p + 37920, -1);
        func_0028C1A0(p + 37376, -1);
        func_001003E0(p + 36896, (void *)func_002047C0, 80, 3);
        func_001003E0(p + 36032, (void *)func_0024D9A0, 208, 3);
        func_001003E0(p + 35408, (void *)func_0024D9A0, 208, 3);
        func_0024D9A0(p + 35200, -1);
        func_001003E0(p + 33880, (void *)func_001FBC10, 404, 3);
        func_001003E0(p + 33536, (void *)func_0031DF20, 32, 3);
        func_001003E0(p + 28928, (void *)func_002791E0, 1536, 3);
        func_002791E0(p + 27392, -1);
        func_001003E0(p + 19712, (void *)func_002791E0, 1536, 5);
        func_001003E0(p + 15104, (void *)func_002791E0, 1536, 3);
        func_001003E0(p + 10496, (void *)func_002791E0, 1536, 3);
        func_002791E0(p + 8960, -1);
        func_002791E0(p + 7424, -1);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 400);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00297220(p0) int p0; {
    int func_0029DCE0();
    int tmp0;
    tmp0 = func_0029DCE0(p0, 2);
    *(int *)((char *)p0 + 40000) = 0xbcdf66f5;
    *(char *)((char *)p0 + 5) = 1;
    return tmp0;
}

int func_00297270(p0) int p0; {
    int func_0029DCE0();
    int tmp0;
    tmp0 = func_0029DCE0(p0, 3);
    *(int *)((char *)p0 + 40000) = 0x3cdf66f5;
    *(char *)((char *)p0 + 5) = 1;
    return tmp0;
}

void func_00297550(p0) int p0; {
    int func_0024E800();
    int func_002965E0();
    float func_002A4070();
    char *v0;
    float v1;
    float v2;
    float tmp0;
    int tmp4;
    int tmp5;
    v0 = (char *)p0;
    tmp0 = func_002A4070();
    v1 = 0.0f;
    *(float *)(v0 + 43564) -= (tmp0 * *(float *)(v0 + 16));
    if (*(float *)(v0 + 43564) <= v1) {
        *(float *)(v0 + 43564) = v1;
    }
    tmp4 = func_0024E800((v0 + 0x8980));
    if (tmp4 != 0) {
        tmp5 = func_002965E0(v0, 0xffff);
    }
}

int func_002975E0(p0) int p0; {
    int func_0029DCE0();
    int tmp0;
    tmp0 = func_0029DCE0(p0, 32);
    *(char *)((char *)p0 + 43411) = 0;
    *(char *)((char *)p0 + 43410) = 0;
    *(char *)((char *)p0 + 39292) = 1;
    *(int *)((char *)p0 + 39288) = 0x41200000;
    *(char *)((char *)p0 + 39404) = 1;
    *(int *)((char *)p0 + 39400) = 0x41200000;
    *(char *)((char *)p0 + 39516) = 1;
    *(int *)((char *)p0 + 39512) = 0x41200000;
    *(char *)((char *)p0 + 39628) = 1;
    *(int *)((char *)p0 + 39624) = 0x41200000;
    *(char *)((char *)p0 + 39740) = 1;
    *(int *)((char *)p0 + 39736) = 0x41200000;
    *(char *)((char *)p0 + 5) = 4;
    return tmp0;
}

void func_002976B0(p0) int p0; {
    int func_0024E780();
    void func_0024E7B0();
    int func_0024E800();
    int func_002965E0();
    float func_002A4070();
    char *v0;
    float v1;
    float v2;
    int tmp0;
    float tmp1;
    int tmp5;
    int tmp6;
    v0 = (char *)p0;
    tmp0 = func_0024E780((v0 + 0x8980), 0, 0);
    if ((tmp0 & 255) == 1) {
        func_0024E7B0((v0 + 35200), 0, 0);
        *(char *)(v0 + 39292) = 0;
        *(char *)(v0 + 39404) = 0;
        *(char *)(v0 + 39516) = 0;
        *(char *)(v0 + 39628) = 0;
        *(char *)(v0 + 39740) = 0;
    }
    tmp1 = func_002A4070(v0);
    v1 = 0.0f;
    *(float *)(v0 + 43564) -= (tmp1 * *(float *)(v0 + 16));
    if (*(float *)(v0 + 43564) <= v1) {
        *(float *)(v0 + 43564) = v1;
    }
    tmp5 = func_0024E800((v0 + 0x8980));
    if (tmp5 != 0) {
        tmp6 = func_002965E0(v0, 0xffff);
    }
}

int func_0029CB50(p0) int p0; {
    int func_0029DCE0();
    int tmp0;
    tmp0 = func_0029DCE0(p0, 32);
    *(char *)((char *)p0 + 5) = 36;
    *(char *)((char *)p0 + 43410) = 0;
    *(char *)((char *)p0 + 43411) = 1;
    *(char *)((char *)p0 + 43401) = 0;
    *(char *)((char *)p0 + 39292) = 1;
    *(int *)((char *)p0 + 39288) = 0x41200000;
    *(char *)((char *)p0 + 39404) = 1;
    *(int *)((char *)p0 + 39400) = 0x41200000;
    *(char *)((char *)p0 + 39516) = 1;
    *(int *)((char *)p0 + 39512) = 0x41200000;
    *(char *)((char *)p0 + 39628) = 1;
    *(int *)((char *)p0 + 39624) = 0x41200000;
    *(char *)((char *)p0 + 39740) = 1;
    *(int *)((char *)p0 + 39736) = 0x41200000;
    return tmp0;
}

int func_0029D030(p0) int p0; {
    int func_0024E800();
    int func_0029DCE0();
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 0x8980));
    if (v1 != 0) {
        *(char *)(v0 + 5) = 16;
        v1 = func_0029DCE0(v0, 15);
    }
    *(int *)(v0 + 43404) = 0x447a0000;
    *(int *)(v0 + 43648) = 0x447a0000;
    return v1;
}

int func_0029E3D0();

int func_0029E380(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = 0;
    do {
        v1 = func_0029E3D0(v0);
        v2 = (v2 + 1);
    } while ((v2 < 500));
    return v1;
}

void func_00320710();

void func_002A3F90(p0) int p0; {
    *(char *)((char *)p0 + 43402) = 1;
    *(int *)((char *)p0 + 42272) = 0xbf800000;
    *(int *)((char *)p0 + 42276) = 0;
    *(int *)((char *)p0 + 42280) = 0;
    *(int *)((char *)p0 + 42284) = 0;
    *(int *)((char *)p0 + 42288) = 0xbf800000;
    func_00320710((p0 + 304));
}

void func_002A3FF0(p0, p1) int p0; char *p1; {
    *(float *)((char *)p0 + 43896) = *(float *)(p1 + 44);
}

int func_002A4010(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 40)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 6872);
    }
    return (int)v0;
}

void func_002A47B0(p0, p1) int p0; char *p1; {
    *(float *)(p1 + 0) = *(float *)((char *)p0 + 42288);
}

void func_002A4900(p0, p1) int p0; int p1; {
    *(int *)((char *)p0 + 43884) = p1;
}

int func_002A49E0(p0) int p0; {
    return *(int *)((char *)p0 + 43880);
}

int func_002A49F0(p0) int p0; {
    return *(signed char *)((char *)p0 + 43888);
}

int func_002A4A00(p0) int p0; {
    return *(signed char *)((char *)p0 + 43889);
}

int func_002A4A10(p0) int p0; {
    return *(signed char *)((char *)p0 + 43890);
}

int func_002A4A20(p0) int p0; {
    return *(signed char *)((char *)p0 + 43891);
}

int func_002A4A30(p0) int p0; {
    return *(signed char *)((char *)p0 + 43892);
}

extern void func_002923F0();

void func_002A4BC0(char *p) { func_002923F0(p + -64); }

extern void func_002A39C0();

void func_002A4C00(char *p) { func_002A39C0(p + -64); }

extern void func_002A03B0();

void func_002A4C10(char *p) { func_002A03B0(p + -64); }

extern void func_002A48F0();

void func_002A4C80(char *p) { func_002A48F0(p + -304); }

extern void func_002A4990();

void func_002A4D00(char *p) { func_002A4990(p + -464); }

extern void func_002A4970();

void func_002A4D10(char *p) { func_002A4970(p + -464); }

void func_0029CF70(void) {}

void func_002A4910(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)((p0 + 0x10000) + -21660) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)((p0 + 0x10000) + -21648) = 0;
    *(char *)((p0 + 0x10000) + -21647) = 0;
    *(char *)((p0 + 0x10000) + -21646) = 0;
    *(char *)((p0 + 0x10000) + -21645) = 0;
    *(char *)((p0 + 0x10000) + -21644) = 0;
}
