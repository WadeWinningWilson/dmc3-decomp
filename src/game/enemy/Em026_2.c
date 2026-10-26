extern float D_00563E30[];

int func_003A0800(char *p) {
    return D_00563E30[*(unsigned char *)(p + 0x2EE8)] >= *(float *)(p + 0x2E2C);
}

static inline int clampS(int a, short lim) {
    if (a < lim) {
        return (short)a;
    }
    if (lim < -a) {
        return (short)-a;
    }
    return lim;
}

void func_003A0CD0(char *p, int a) {
    int d;
    if (a == 0) {
        return;
    }
    d = clampS(a, *(short *)(p + 0x2DEC));
    if (*(float *)(p + 0x10) != 1.0f) {
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * (6.283185f * ((float)d / 65536.0f) * *(float *)(p + 0x10)) / 6.283185f);
    }
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
}

extern char D_01CAFF0C[];

int func_00131D10(float, float);

extern float D_005BCCC8;

extern short D_005BCCCC;

typedef struct { float a; short b; } T39D;

void func_0039DB80(char *p) {
    float d[4] __attribute__((aligned(16)));
    T39D t;
    T39D *q;
    float fa;
    short sb;
    short a;
    int i;
    int j;
    unsigned short u;
    unsigned short w;
    char *e;
    char *g;
    q = &t;
    fa = D_005BCCC8;
    sb = D_005BCCCC;
    q->a = fa;
    q->b = sb;
    if (*(unsigned char *)(p + 0x2F3D) >= 3) return;
    if (*(unsigned char *)(p + 0x2EE1) > 1) {
        *(unsigned char *)(p + 0x2EE2) = ((unsigned char *)&t)[*(unsigned short *)(p + 0x2EDE) & 0xF];
    } else {
        *(unsigned char *)(p + 0x2EE2) = 1;
        return;
    }
    *(short *)(p + 0x2EF6) = 0;
    *(short *)(p + 0x2EF4) = 0;
    *(short *)(p + 0x2EF2) = 0;
    *(short *)(p + 0x2EF0) = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(*(char **)((*(char **)D_01CAFF0C) + 0xC) + 0x50), "r"(p + 0x50) : "memory");
    a = func_00131D10(d[0], d[2]);
    for (i = 0; i < *(unsigned char *)(p + 0x2EE1); i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x2EC8) != 0 && *(unsigned char *)(p + 0x2EE0) != i) {
            g = (*(char **)D_01CAFF0C);
            e = *(char **)((char *)(i * 4) + (int)p + 0x2EC8);
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(e + 0x50), "r"(*(char **)(g + 0xC) + 0x50) : "memory");
            *(short *)((char *)(i * 2) + (int)p + 0x2EF0) = a - (short)func_00131D10(d[0], d[2]);
        }
    }
    switch (*(unsigned char *)(p + 0x2EE1)) {
    case 2:
        if (*(unsigned char *)(p + 0x2EE0) != 0) j = 0;
        else j = 1;
        u = *(unsigned short *)((char *)(j * 2) + (int)p + 0x2EF0);
        if (u < 0x8000) {
            w = 0x7FFF - u;
            if (w < 0x1400) *(unsigned char *)(p + 0x2EE3) = 0;
            else if (w < 0x4800) *(unsigned char *)(p + 0x2EE3) = 1;
            else *(unsigned char *)(p + 0x2EE3) = 2;
        } else {
            w = u - 0x7FFF;
            if (w < 0x1400) *(unsigned char *)(p + 0x2EE3) = 0;
            else if (w < 0x4800) *(unsigned char *)(p + 0x2EE3) = 3;
            else *(unsigned char *)(p + 0x2EE3) = 4;
        }
        break;
    case 3:
    case 4:
        break;
    }
}

int func_003A0230(char *p) {
    void func_003A02B0(char *, int);
    short k = *(short *)(p + 0x2DDA);
    if (k < 0 || k >= 66) {
        *(short *)(p + 0x2DDA) = -1;
        return 0;
    }
    if (k == *(short *)(p + 0xAC0)) {
        *(short *)(p + 0x2DDA) = -1;
        return 1;
    }
    func_003A02B0(p, k);
    *(float *)(p + 0x2E24) = *(float *)(p + 0x2E28);
    *(short *)(p + 0x2DDA) = -1;
    return 1;
}

void func_001AD140(char *);

void func_002F2D30(char *, char *);

void func_0039D440(char *, int);

void func_0039D580(char *, int);

void func_00392A60(char *p) {
    char *g;
    if (*(char **)(p + 0x2DD0) != 0) {
        func_001AD140(*(char **)(p + 0x2DD0));
    }
    func_0039D440(p, 0);
    func_0039D440(p, 1);
    func_0039D580(p, 0);
    func_0039D580(p, 1);
    *(unsigned char *)(p + 0x2F3D) = 4;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
}

void func_0024DA80(char *, int, int);

int func_0024E800(char *);

void func_0039D890(char *);

static inline unsigned char pair_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

void func_003969F0(char *p) {
    void func_003A02B0(char *, int);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x2D;
        func_0024DA80(p + 0x29D0, 0, 0x2D);
        func_0024DA80(p + 0x2AA0, 0, 0x2D);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
}

int func_003A0F60(char *);

int func_003A0F20(char *p) {
    unsigned char b = *(unsigned char *)(p + 0x2DE8) == 1;
    if (b != 1) goto call;
    return 0;
call:
    return func_003A0F60(p);
}

int func_003A01F0(char *);

int func_0039FF60(char *);

int func_0039EEC0(char *);

void func_003A0620(char *);

int func_0039E220(char *);

static inline unsigned char ec_nz(char *p) {
    return *(unsigned char *)(p + 0x2EE4) != 0;
}

static inline unsigned char ec_ready(char *p) {
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        return 0;
    }
    if (!ec_nz(p)) {
        return 0;
    }
    if (*(float *)(p + 0x2EEC) <= 0.0f) {
        return 1;
    }
    return 0;
}

unsigned char func_0039DF10(char *p) {
    if (ec_ready(p) == 1) {
        if (*(unsigned char *)(p + 0x2F3C) == 0) {
            func_0039D440(p, 0);
        } else if (*(unsigned char *)(p + 0x2F3C) == 1) {
            func_0039D440(p, 1);
        }
    }
    if ((unsigned char)func_003A01F0(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0039FF60(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0039EEC0(p) == 1) {
        *(unsigned char *)(p + 0x2DE6) = 0;
        func_003A0620(p);
        *(unsigned char *)(p + 0x2EC3) = 0;
        *(unsigned char *)(p + 0x2EC4) = 0;
        *(unsigned char *)(p + 0x2DE5) = 1;
        return 1;
    }
    return (unsigned char)func_0039E220(p) == 1;
}

int func_0039DDF0(char *, float);

void func_003A06D0(char *);

static inline unsigned char pair_done3(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

void func_00396670(char *p) {
    void func_003A02B0(char *, int);
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x27;
        func_0024DA80(p + 0x29D0, 0, 0x27);
        func_0024DA80(p + 0x2AA0, 0, 0x27);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done3(p) == 1) {
            *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
            *(short *)(p + 0x2DDC) = 0x28;
            func_0024DA80(p + 0x29D0, 0, 0x28);
            func_0024DA80(p + 0x2AA0, 0, 0x28);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if ((unsigned char)func_0039DDF0(p, 110.0f) != 1 && pair_done3(p) == 1) {
            func_003A02B0(p, 2);
        }
        break;
    }
    func_003A06D0(p);
}

void func_00396830(char *p) {
    void func_003A02B0(char *, int);
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x27;
        func_0024DA80(p + 0x29D0, 0, 0x27);
        func_0024DA80(p + 0x2AA0, 0, 0x27);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done3(p) == 1) {
            *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
            *(short *)(p + 0x2DDC) = 0x29;
            func_0024DA80(p + 0x29D0, 0, 0x29);
            func_0024DA80(p + 0x2AA0, 0, 0x29);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if ((unsigned char)func_0039DDF0(p, 110.0f) != 1 && pair_done3(p) == 1) {
            func_003A02B0(p, 2);
        }
        break;
    }
    func_003A06D0(p);
}

int func_003A0220(char *);

int func_0039FE70(char *);

int func_0039EED0(char *);

int func_0039E670(char *);

unsigned char func_0039E050(char *p) {
    if (*(unsigned short *)(p + 0x2EDE) & 0x1000) {
        *(short *)(p + 0x2DDA) = 2;
        return 1;
    }
    if (ec_ready(p) == 1) {
        if (*(unsigned char *)(p + 0x2F3C) == 0) {
            func_0039D440(p, 0);
        } else if (*(unsigned char *)(p + 0x2F3C) == 1) {
            func_0039D440(p, 1);
        }
    }
    if (*(short *)(p + 0xAC0) == 0x3F) {
        return 0;
    }
    if ((unsigned char)func_003A0220(p) == 1) {
        *(short *)(p + 0x2DDA) = 0x3F;
        return 1;
    }
    if ((unsigned char)func_0039FE70(p) == 1) {
        *(unsigned char *)(p + 0x2DE6) = 0;
        func_003A0620(p);
        *(unsigned char *)(p + 0x2EC3) = 0;
        *(unsigned char *)(p + 0x2EC4) = 0;
        return 1;
    }
    if ((unsigned char)func_003A01F0(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0039FF60(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0039EED0(p) == 1) {
        *(unsigned char *)(p + 0x2DE6) = 0;
        func_003A0620(p);
        *(unsigned char *)(p + 0x2EC3) = 0;
        *(unsigned char *)(p + 0x2EC4) = 0;
        *(unsigned char *)(p + 0x2DE5) = 1;
        return 1;
    }
    return (unsigned char)func_0039E670(p) == 1;
}

void func_00396AE0(char *p) {
    void func_003A02B0(char *, int);
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x2A;
        func_0024DA80(p + 0x29D0, 0, 0x2A);
        func_0024DA80(p + 0x2AA0, 0, 0x2A);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done3(p) == 1) {
            *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
            *(short *)(p + 0x2DDC) = 0x2B;
            func_0024DA80(p + 0x29D0, 0, 0x2B);
            func_0024DA80(p + 0x2AA0, 0, 0x2B);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x2DE8) = 0;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 3:
        if ((unsigned char)func_0039DDF0(p, 95.0f) != 1 && pair_done3(p) == 1) {
            func_003A02B0(p, 2);
        }
        break;
    }
    func_003A06D0(p);
}

void func_00396CC0(char *p) {
    void func_003A02B0(char *, int);
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x2A;
        func_0024DA80(p + 0x29D0, 0, 0x2A);
        func_0024DA80(p + 0x2AA0, 0, 0x2A);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done3(p) == 1) {
            *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
            *(short *)(p + 0x2DDC) = 0x2C;
            func_0024DA80(p + 0x29D0, 0, 0x2C);
            func_0024DA80(p + 0x2AA0, 0, 0x2C);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x2DE8) = 0;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 3:
        if ((unsigned char)func_0039DDF0(p, 95.0f) != 1 && pair_done3(p) == 1) {
            func_003A02B0(p, 2);
        }
        break;
    }
    func_003A06D0(p);
}

void func_00396EA0(char *p) {
    void func_003A02B0(char *, int);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x2D;
        func_0024DA80(p + 0x29D0, 0, 0x2D);
        func_0024DA80(p + 0x2AA0, 0, 0x2D);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
}

int func_003A1320();

int func_003950E0(p0) int p0; {
    int func_003A02B0();
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1320(p0, 0);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_00395120(p0) int p0; {
    int func_003A02B0();
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1320(p0, 1);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_00395160(p0) int p0; {
    int func_003A02B0();
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1320(p0, 2);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_003951A0(p0) int p0; {
    int func_003A02B0();
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1320(p0, 3);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

char *func_00279290();

int func_0039D080(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    v0 = (p1 & 255);
    if (v0 == 0) {
        p0 = (p0 + 3456);
        v1 = func_00279290(p0);
        v1 = *(char **)(v1 + 160);
        v1 = (char *)((int)v1 & 1);
        v1 = (char *)((int)v1 != 0);
    } else {
        if (v0 == 1) {
            p0 = (p0 + 4992);
            v1 = func_00279290(p0);
            v1 = *(char **)(v1 + 160);
            v1 = (char *)((int)v1 & 1);
            v1 = (char *)((int)v1 != 0);
        } else {
            v1 = 0;
        }
    }
    return (int)v1;
}

int func_003A2080(char *p0, char *p1, float f0, float f1) {
    *(float *)(p1 + 0) -= (f0 * *(float *)(p0 + 16));
    if (*(float *)(p1 + 0) <= f1) {
        *(float *)(p1 + 0) = f1;
        return 1;
    } else {
        return 0;
    }
}

extern void func_00393DF0();

void func_003A28B0(char *p) { func_00393DF0(p + -64); }

extern void func_00393A70();

void func_003A2900(char *p) { func_00393A70(p + -64); }

extern void func_003A2610();

void func_003A2940(char *p) { func_003A2610(p + -64); }

void func_003A2950(char *p) { func_003A2610(p + -160); }

void func_003A2960(char *p) { func_003A2610(p + -208); }

void func_003A29A0(char *p) { func_00393DF0(p + -304); }

void func_003A29F0(char *p) { func_00393A70(p + -304); }

void func_003A2A10(char *p) { func_003A2610(p + -304); }

void func_003A2A20(char *p) { func_003A2610(p + -464); }

void func_00393DE0(void) {}

void func_00393F10(void) {}

float func_00393F00(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 11724) = *(float *)(p1 + 44);
    return t0;
}

float func_003A25F0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 2972);
    *(float *)(p1 + 0) = *(float *)(p0 + 2972);
    return t0;
}

float func_003A2600(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 3016);
    *(float *)(p1 + 0) = *(float *)(p0 + 3016);
    return t0;
}

void func_00207480();

void func_0039D800(int p0) {
    func_00207480(0, 44, (p0 + 1104), 16);
}
