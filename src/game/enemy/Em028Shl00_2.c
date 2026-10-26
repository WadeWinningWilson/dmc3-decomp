void func_00104B80(char *, float *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131700(float *, float *, float *);

void func_003BA170(char *p, float *s, int f) {
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    if (s != 0) {
        if ((unsigned char)f == 1) {
            UNIT(m);
            if (*(unsigned char *)(p + 0x1B4)) {
                r[0] = 0.0f;
                r[1] = 6.283185f * (*(short *)(*(char **)(p + 0x1DC) + 0x90) / 65536.0f);
                r[3] = 1.0f;
                r[2] = 0.0f;
            } else {
                r[0] = 0.0f;
                r[1] = 0.0f;
                r[3] = 1.0f;
                r[2] = 0.0f;
            }
            func_00131700(m, m, r);
            func_00104B80(p + 0x50, m, s);
        } else {
            *(float *)(p + 0x50) = s[0];
            *(float *)(p + 0x54) = s[1];
            *(float *)(p + 0x58) = s[2];
        }
    } else {
        *(float *)(p + 0x50) = 0.0f;
        *(float *)(p + 0x54) = 0.0f;
        *(float *)(p + 0x58) = 0.0f;
    }
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x200) = *(float *)(p + 0x50);
    *(float *)(p + 0x204) = *(float *)(p + 0x54);
    *(float *)(p + 0x208) = *(float *)(p + 0x58);
    *(float *)(p + 0x20C) = 1.0f;
}

extern char D_00568CB0[];

extern char D_00568CD0[];

void func_00131D70(char *, char *);

void func_004FE910(char *, char *);

void func_003B92A0(char *p) {
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        *(unsigned char *)(p + 0x1B9) = *(unsigned char *)(*(char **)(p + 0x1DC) + 0x4E17);
    }
    switch (*(unsigned char *)(p + 0x1B6)) {
    case 0:
        break;
    case 1:
        *(unsigned char *)(p + 0x1A8) = 1;
        *(float *)(p + 0x150) = *(float *)(p + 0x240);
        *(float *)(p + 0x154) = *(float *)(p + 0x244);
        *(float *)(p + 0x158) = *(float *)(p + 0x248);
        *(float *)(p + 0x15C) = 1.0f;
        func_00131D70(p + 0x80, p + 0x150);
        switch (*(unsigned char *)(p + 0x1B5)) {
        case 0:
            break;
        case 1:
            func_004FE910(p, D_00568CB0);
            break;
        case 2:
            break;
        case 3:
            func_004FE910(p, D_00568CD0);
            break;
        }
        break;
    case 2:
        break;
    }
}

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

void func_00133890(char *, char *, V4 *);

extern V4 D_005647F0;

extern V4 D_00564800;

void func_003B9D20(char *p) {
    V4 a;
    V4 b;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x250) : "memory");
    switch ((unsigned char)*(unsigned char *)(p + 0x1B5)) {
    case 0:
    case 2:
    case 5:
        func_00105230(p + 0x250, p + 0x250, (float *)(p + 0x50));
        func_001318E0(p + 0x250, p + 0x250, (float *)(p + 0x1E0));
        break;
    case 1:
    case 3:
        if (*(unsigned char *)(p + 0x1B6) == 1) {
            a = D_005647F0;
            func_00133890(p + 0x250, p + 0x150, &a);
            *(float *)(p + 0x280) = *(float *)(p + 0x50);
            *(float *)(p + 0x284) = *(float *)(p + 0x54);
            *(float *)(p + 0x288) = *(float *)(p + 0x58);
            *(float *)(p + 0x28C) = 1.0f;
        } else {
            b = D_00564800;
            func_00133890(p + 0x250, p + 0x1F0, &b);
            func_00105230(p + 0x250, p + 0x250, (float *)(p + 0x50));
            func_001318E0(p + 0x250, p + 0x250, (float *)(p + 0x1E0));
        }
        break;
    }
}

extern char D_00568D20[];

void func_003BA4E0(char *p) {
    void func_0028C8E0(char *, int);
    void func_0028C910(char *);
    char *func_0028C3A0(char *, int, int, char *);
    void func_0028C790(char *, int);
    void func_0028C200(char *, char *, char *, int, char *, char *, int);
    char *q;
    func_0028C790(p + 0x2A0, 0);
    func_0028C790(p + 0x2A0, 1);
    func_0028C790(p + 0x2A0, 2);
    func_0028C200(p + 0x2A0, p + 0x4C0, p + 0x4D0, 2, D_00568D20, p, 0);
    if (*(unsigned char *)(p + 0x1B7) == 0) {
        func_0028C8E0(p + 0x2A0, 0);
    } else {
        func_0028C8E0(p + 0x2A0, 7);
    }
    func_0028C910(p + 0x2A0);
    *(unsigned char *)(p + 0x4C0) = 1;
    *(unsigned char *)(p + 0x4C1) = 0;
    *(short *)(p + 0x4C2) = 0;
    *(unsigned char *)(p + 0x4D0) = 2;
    *(float *)(p + 0x4E0) = 0.0f;
    *(float *)(p + 0x4E4) = 0.0f;
    *(float *)(p + 0x4E8) = 0.0f;
    *(float *)(p + 0x4EC) = 1.0f;
    *(float *)(p + 0x4F0) = 50.0f;
    func_0028C3A0(p + 0x2A0, 0, -1, p + 0x250);
    q = *(char **)(p + 0x31C);
    if (q != 0) {
        q[2] = 1;
    }
    *(unsigned char *)(p + 0x4C4) = 6;
    *(unsigned char *)(p + 0x4C5) = 0;
    *(short *)(p + 0x4C6) = 1;
    *(unsigned char *)(p + 0x520) = 2;
    *(float *)(p + 0x530) = 0.0f;
    *(float *)(p + 0x534) = 0.0f;
    *(float *)(p + 0x538) = 0.0f;
    *(float *)(p + 0x53C) = 1.0f;
    *(float *)(p + 0x540) = 40.0f;
    func_0028C3A0(p + 0x2A0, 1, -1, p + 0x250);
    q = *(char **)(p + 0x320);
    if (q != 0) {
        q[2] = 1;
    }
    *(unsigned char *)(p + 0x1BB) = 0;
}

float func_00132470(char *, char *);

float func_0034C160(float, float, float);

void func_00131650(char *, char *);

extern float D_005646F4[][10];

extern float D_005646FC[][10];

extern float D_00564700[][10];

extern float D_0056470C[][10];

void func_004FE960(char *, char *, int, float);

int func_004FEC00(char *, char *);

int func_003B9390(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float v;
    float *dst;
    float *src;
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        *(unsigned char *)(p + 0x1B9) = *(unsigned char *)(*(char **)(p + 0x1DC) + 0x4E17);
    }
    switch (*(unsigned char *)(p + 0x1B6)) {
    case 0:
        if (func_00132470(p + 0x230, p + 0x50) < D_005646F4[*(unsigned char *)(p + 0x1B5)][0]) {
            *(float *)(p + 0x1C0) = 0.0f;
            return 1;
        }
        if (!(D_005646FC[*(unsigned char *)(p + 0x1B5)][0] <= 0.0f)) {
            *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x1A4) < 0.0f) {
                return -1;
            }
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x1F0), "r"(p + 0x230), "r"(p + 0x50) : "memory");
        func_00131650(p + 0x1F0, p + 0x1F0);
        *(float *)(p + 0x1FC) = 1.0f;
        v = func_0034C160(*(float *)(p + 0x1C0), D_0056470C[*(unsigned char *)(p + 0x1B5)][*(unsigned char *)(p + 0x1B9)], *(float *)(p + 0x10) * D_00564700[*(unsigned char *)(p + 0x1B5)][*(unsigned char *)(p + 0x1B9)]);
        *(float *)(p + 0x1C0) = v;
        v = (v > 1.0f) ? v * v : v;
        if (!(v <= D_0056470C[*(unsigned char *)(p + 0x1B5)][*(unsigned char *)(p + 0x1B9)])) {
            v = D_0056470C[*(unsigned char *)(p + 0x1B5)][*(unsigned char *)(p + 0x1B9)];
        }
        src = (float *)(p + 0x1F0);
        dst = tmp;
        asm {
            lqc2 vf4, 0x0(src)
            mfc1 t0, v
            nop
            qmtc2.ni t0, vf5
            vmulx.xyzw vf6, vf4, vf5x
            sqc2 vf6, 0x0(dst)
        }
        *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0];
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + tmp[1];
        *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2];
        *(float *)(p + 0x5C) = 1.0f;
        break;
    case 1:
        *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1A4) < 0.0f) {
            return -1;
        }
        func_004FE960(p, p + 0x230, 3, *(float *)(p + 0x10));
        return func_004FEC00(p, p + 0x230);
    case 2:
        break;
    }
    return 0;
}

void func_001AD140(char *);

void func_001AD100(char *);

void func_00206730(char *);

void func_003BA960(char *);

int func_002077F0(char *);

void func_0028C5C0(char *, int, float);

float func_0011DBE0(float, float);

void func_003B9200(char *p);

extern signed char D_005BE1B4;

void func_003B9BD0(char *);

void func_003BA870(char *);

void func_003B9BA0(char *);

void func_003B96A0(char *);

void func_003B8DE0(char *);

void func_003B8EF0(char *);

void func_003B90F0(char *);

void func_003B9120(char *);

void func_003B8AF0(char *p) {
    void func_0028C910(char *);
    char *func_0028C3A0(char *, int, int, char *);
    void func_0028C790(char *, int);
    int i;
    char *q;
    char *r;
    int j;
    func_001AD100(p);
    func_003BA960(p + 0x1DC);
    for (i = 0, q = p; i < 4; i++, q += 4) {
        func_00206730(q + 0x210);
    }
    for (j = 0, r = p; j < 4; j++, r += 4) {
        if (*(char **)(r + 0x210) != 0) {
            if ((unsigned char)func_002077F0(*(char **)(r + 0x210)) == 1) {
                *(char **)(r + 0x210) = 0;
                if (j == 0) {
                    func_001AD140(p);
                    return;
                }
            }
        } else if (j == 0) {
            func_001AD140(p);
            return;
        }
    }
    if (D_005BE1B4 != 0) {
        func_003B9BD0(p);
        return;
    }
    if (*(unsigned char *)(p + 0x1B3) != 0) {
        func_003B9BD0(p);
        return;
    }
    func_003BA870(p);
    func_003B9BA0(p);
    func_003B96A0(p);
    if (*(unsigned char *)(p + 0x1B4) != 0 && *(char **)(p + 0x1DC) == 0) {
        *(unsigned char *)(p + 0x1B4) = 0;
        func_003B9BD0(p);
        return;
    }
    switch (*(unsigned char *)(p + 0x1B5)) {
    case 0:
        func_003B8DE0(p);
        break;
    case 1:
        func_003B8EF0(p);
        break;
    case 2:
        func_003B90F0(p);
        break;
    case 3:
        func_003B9120(p);
        break;
    case 5:
        func_003B9200(p);
        break;
    }
    *(short *)(p + 0x1BE) = (int)(0.5f + 65536.0f * func_0011DBE0(*(float *)(p + 0x150), *(float *)(p + 0x158)) / 6.283185f);
    if (*(unsigned char *)(p + 0x1BB) == 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x1BA) != 1) {
        func_0028C5C0(p + 0x2A0, 0, *(float *)(p + 0x10));
        return;
    }
    *(float *)(p + 0x1D0) = *(float *)(p + 0x1D0) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x1D0) < 0.0f) {
        *(unsigned char *)(p + 0x1BA) = 0;
        if (*(unsigned char *)(p + 0x1B5) == 1) {
            func_0028C790(p + 0x2A0, 0);
            func_0028C790(p + 0x2A0, 1);
            func_0028C790(p + 0x2A0, 2);
            func_0028C910(p + 0x2A0);
            func_0028C3A0(p + 0x2A0, 0, -1, p + 0x250);
            func_0028C3A0(p + 0x2A0, 1, -1, p + 0x250);
        }
    }
}

void func_003BA400(p) char *p; {
    void func_0028C200();
    void func_0028C3A0();
    void func_0028C790();
    void func_0028C8E0();
    void func_0028C910();
    func_0028C790(p + 672, 0);
    func_0028C790(p + 672, 1);
    func_0028C790(p + 672, 2);
    func_0028C200(p + 672, p + 1216, p + 1232, 2, D_00568D20, p, 0);
    func_0028C8E0(p + 672, 0);
    func_0028C910(p + 672);
    *(char *)(p + 1216) = 6;
    *(char *)(p + 1217) = 0;
    *(short *)(p + 1218) = 0;
    *(char *)(p + 1232) = 2;
    *(int *)(p + 1248) = 0;
    *(int *)(p + 1252) = 0;
    *(int *)(p + 1256) = 0;
    *(int *)(p + 1260) = 1065353216;
    *(int *)(p + 1264) = 1109393408;
    func_0028C3A0(p + 672, 0, -1, p + 592);
    if (*(char **)(p + 796) != 0) {
        *(char *)(*(char **)(p + 796) + 2) = 1;
    }
    *(char *)(p + 443) = 0;
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005B0040[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_003BAB40(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005B0040;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 6, 135);
    *(char *)(p + 9280) = 0;
    *(char *)(p + 9473) = 0;
    *(char *)(p + 9472) = 0;
    *(char *)(p + 9474) = -1;
    *(char *)(p + 9475) = 0;
    *(char *)(p + 9476) = 0;
    return p;
}

extern char D_005AFE30[];

extern char D_005AFE54[];

extern char D_005AFED4[];

extern char D_005AFF68[];

int func_0028C110();

int func_004FE7E0();

int func_003B88D0(p0) int p0; {
    func_004FE7E0();
    *(char **)((char *)p0 + 0) = D_005AFE30;
    *(char **)((char *)p0 + 64) = D_005AFE54;
    *(char **)((char *)p0 + 160) = D_005AFED4;
    *(char **)((char *)p0 + 208) = D_005AFF68;
    func_0028C110((p0 + 672));
    *(char *)((char *)p0 + 432) = 0;
    *(char *)((char *)p0 + 433) = 0;
    *(char *)((char *)p0 + 434) = 0;
    *(char *)((char *)p0 + 435) = 0;
    *(char *)((char *)p0 + 437) = 3;
    *(char *)((char *)p0 + 438) = 0;
    *(char *)((char *)p0 + 436) = 0;
    *(int *)((char *)p0 + 476) = 0;
    *(int *)((char *)p0 + 512) = 0;
    *(int *)((char *)p0 + 516) = 0;
    *(int *)((char *)p0 + 520) = 0;
    *(int *)((char *)p0 + 524) = 0x3f800000;
    *(int *)((char *)p0 + 528) = 0;
    *(int *)((char *)p0 + 532) = 0;
    *(int *)((char *)p0 + 536) = 0;
    *(int *)((char *)p0 + 540) = 0;
    *(short *)((char *)p0 + 446) = 0;
    *(int *)((char *)p0 + 460) = 0;
    *(int *)((char *)p0 + 544) = 0;
    *(int *)((char *)p0 + 560) = 0;
    *(int *)((char *)p0 + 564) = 0;
    *(int *)((char *)p0 + 568) = 0;
    *(int *)((char *)p0 + 572) = 0x3f800000;
    *(int *)((char *)p0 + 480) = 0x3f800000;
    *(int *)((char *)p0 + 484) = 0x3f800000;
    *(int *)((char *)p0 + 488) = 0x3f800000;
    *(int *)((char *)p0 + 492) = 0x3f800000;
    *(int *)((char *)p0 + 576) = 0;
    *(int *)((char *)p0 + 580) = 0;
    *(int *)((char *)p0 + 584) = 0;
    *(int *)((char *)p0 + 588) = 0x3f800000;
    *(char *)((char *)p0 + 439) = 0;
    *(int *)((char *)p0 + 448) = 0;
    *(int *)((char *)p0 + 452) = 0;
    *(char *)((char *)p0 + 442) = 0;
    *(int *)((char *)p0 + 464) = 0;
    *(char *)((char *)p0 + 443) = 0;
    *(short *)((char *)p0 + 444) = 0;
    *(int *)((char *)p0 + 468) = 0;
    *(char *)((char *)p0 + 441) = 0;
    *(int *)((char *)p0 + 472) = 0;
    return p0;
}

extern void func_003B9620();

void func_003BA9D0(char *p) { func_003B9620(p + -64); }

extern void func_003B96D0();

void func_003BA9E0(char *p) { func_003B96D0(p + -64); }

extern void func_003BA8C0();

void func_003BA9F0(char *p) { func_003BA8C0(p + -64); }

void func_003BAA00(char *p) { func_003BA8C0(p + -160); }

void func_003BAA10(char *p) { func_003BA8C0(p + -208); }

void func_003B9B90(void) {}
