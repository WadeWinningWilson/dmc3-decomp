void func_0028C5C0(char *, int, float);

void func_00195E20(char *, char *);

void func_00131650(char *, char *);

extern float D_005BDEAC;

void func_00206730(char *);

char *func_004D2740(char *);

void func_004E6FF0(char *);

float func_001324E0(float *);

void func_004E6D10(char *p) {
    extern char D_005BE098[8];
    extern char D_01DFABA0[];
    void func_00286040(char *);
    void func_00330BD0(char *, int, char *, int, int);
    short o;
    char *t;
    func_00206730(p + 0x470);
    func_00286040(p + 0x474);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        t = *(char **)(*(char **)(func_004D2740(*(char **)(p + 0x478)) + 0xC) + 0x104) + 0x30;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x50), "r"(t) : "memory");
        *(float *)(p + 0xFC) = 1.0f;
        if (func_001324E0((float *)(p + 0xF0)) < 100.0f) {
            *(unsigned char *)(p + 4) = 4;
            break;
        }
        func_00131650(p + 0xF0, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xF0), "f"(D_005BDEAC * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(p + 0xF0) : "memory");
        break;
    }
    o = *(short *)(p + 0xB10);
    *(short *)(p + 0xB10) += 5461.0f * *(float *)(p + 0x10);
    if (*(short *)(p + 0xB10) * o < 0) func_00330BD0(D_01DFABA0, 0x73, p + 0x50, 0x23, 0);
    func_004E6FF0(p);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

/* Hand-matched functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose callee prototypes conflict with misc3-13. */
extern char D_01CAFF0C[];

float func_0011DBE0(float, float);

void func_00207470(int, int, float *);

int func_002536B0(char *, int);

void func_00332AE0(char *, int *, float, float);

extern int D_005880A0[];

extern float D_005880C4[];

extern float D_005880C8[];

extern float D_005BDF88;

extern float D_005BDF8C;

void func_004E6840(char *p) {
    void func_00253110(float, char *, int, int);
    void func_00286040(char *);
    void func_003023F0(int);
    void func_00330BD0(int *, int, char *, int, int);
    int func_004E70B0(char *);
    extern char D_005BE098[4];
    extern int D_01DFABA0[];
    float v;
    short s;
    func_00206730(p + 0x470);
    func_00286040(p + 0x474);
    if (!(*(float *)(p + 0xB1C) <= 0.0f)) {
        v = *(float *)(p + 0xB1C) - D_005BDF88;
        *(float *)(p + 0xB1C) = v > 0.0f ? v : 0.0f;
    }
    func_00253110(*(float *)(p + 0x10), p, func_004E70B0(p), 3);
    if (*(int *)(p + 0x474) != 0) func_003023F0(*(int *)(p + 0x474));
    switch (func_002536B0(p, func_004E70B0(p))) {
    case 1:
        *(signed char *)(p + 0x148) = 0;
        break;
    case -1:
        *(signed char *)(p + 4) = 3;
        *(signed char *)(p + 5) = 0;
        break;
    }
    if (*(char **)(p + 0x21C) != 0) {
        if (*(int *)(*(char **)(p + 0x21C) + 8) & 0x40) {
            *(signed char *)(p + 4) = 2;
            *(signed char *)(p + 5) = 0;
            *(signed char *)(p + 0x148) = 1;
        } else if (*(int *)(*(char **)(p + 0x21C) + 8) & 0x30000) {
            *(signed char *)(p + 4) = 3;
            *(signed char *)(p + 5) = 0;
            func_00330BD0(D_01DFABA0, 8, p + 0x50, 0x23, 0);
        }
    }
    if (*(char **)(p + 0x220) != 0) {
        if (*(int *)(*(char **)(p + 0x220) + 8) & 1) {
            *(signed char *)(p + 4) = 3;
            *(signed char *)(p + 5) = 0;
            func_00207470(3, 0x1C, (float *)(p + 0x150));
            func_00330BD0(D_01DFABA0, 8, p + 0x50, 0x23, 0);
            func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005880A0, D_005880C8[0], D_005880C4[0]);
        } else if (*(int *)(*(char **)(p + 0x220) + 8) & 2) {
            *(float *)(p + 0xB1C) += D_005BDF8C;
            func_00207470(3, 4, (float *)(p + 0x150));
            func_00330BD0(D_01DFABA0, 6, p + 0x50, 0x23, 0);
        }
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    s = *(short *)(p + 0xB10);
    *(short *)(p + 0xB10) = (int)((float)s + 5461.0f * *(float *)(p + 0x10));
    if (*(short *)(p + 0xB10) * s < 0) func_00330BD0(D_01DFABA0, 0x73, p + 0x50, 0x23, 0);
    func_004E6FF0(p);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

void func_0028C790(char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

extern float D_005BDEB4;

extern float D_005BDEB0;

extern char D_0058AE30[];

void func_002530C0(char *, char *);

void func_004E6B40(char *p) {
    extern char D_005BE098[4];
    void func_00253110(char *, char *, int, float);
    extern char D_01DFABA0[];
    void func_00330BD0(char *, int, char *, int, int);
    void func_00286040(char **);
    void func_003023F0(char *);
    char *func_004E70B0(char *);
    short old;
    func_00206730(p + 0x470);
    func_00286040((char **)(p + 0x474));
    if (*(char **)(p + 0x474)) func_003023F0(*(char **)(p + 0x474));
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0xB14) = D_005BDEB4;
        *(float *)(p + 0xB18) = D_005BDEB0;
        func_002530C0(p, D_0058AE30);
    case 1:
        *(float *)(p + 0xB18) = *(float *)(p + 0xB18) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB18) < 0.0f) {
            *(float *)(p + 0xB18) = D_005BDEB0;
            func_0028C790(p + 0x1A0, 0);
            func_0028C8E0(p + 0x1A0, 10);
            func_0028C910(p + 0x1A0);
            func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
        }
        *(float *)(p + 0xB14) = *(float *)(p + 0xB14) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB14) < 0.0f) {
            p[4] = 3;
            p[5] = 0;
        }
        break;
    }
    func_00253110(p, func_004E70B0(p), 3, *(float *)(p + 0x10));
    old = *(short *)(p + 0xB10);
    *(short *)(p + 0xB10) = (float)old + 5461.0f * *(float *)(p + 0x10);
    if (*(short *)(p + 0xB10) * old < 0) func_00330BD0(D_01DFABA0, 0x73, p + 0x50, 0x23, 0);
    func_004E6FF0(p);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

int func_004E6F50(p0) char *p0; {
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

void func_004E6FA0(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 880)), "r"(((stk + 0) + 0)) : "memory");
    *(float *)((stk + 0) + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((p0 + 80)), "r"(((stk + 0) + 0)) : "memory");
}

void func_004E6EB0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_004E64F0();

void func_004E71A0(char *p) { func_004E64F0(p + -64); }

extern void func_004E7100();

void func_004E71B0(char *p) { func_004E7100(p + -64); }

void func_004E71C0(char *p) { func_004E7100(p + -160); }
