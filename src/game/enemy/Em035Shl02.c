/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-9. */
extern char D_01DFABA0[];

extern float D_005BDED4;

extern float D_005BDEC4;

extern float D_005BDEC8;

extern float D_005BDECC;

void func_004F5230(char *, int);

char *func_00207480(int, int, float *, int);

void func_00330BD0(char *, int, char *, int, int);

void func_00131650(float *, char *);

void func_004F4400(char *p) {
    float v[4] __attribute__((aligned(16)));
    float s;
    float f;
    float *src;
    float *dst;
    char *e;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_004F5230(p, 0);
        e = func_00207480(3, 0x34A, 0, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x170;
            e[0x9A] = 3;
            e[0x3A] = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 1.0f;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = 60.0f + D_005BDED4 * (float)*(int *)(p + 0xBC0);
        }
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x110) = D_005BDEC4;
            *(float *)(p + 0xBE0) = 300.0f;
            func_00330BD0(D_01DFABA0, 0x71, p + 0x50, 0x23, 0);
            if (*(char **)(p + 0x22C) != 0) {
                *(int *)(*(char **)(p + 0x22C) + 0xC) = 0x30443;
            }
        }
        func_004F5230(p, 0);
        break;
    case 3:
        f = *(float *)(p + 0x110) + D_005BDEC8 * *(float *)(p + 0x10);
        *(float *)(p + 0x110) = f < D_005BDECC ? f : D_005BDECC;
        func_00131650(v, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	mfc1 $t0, %1
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "f"(*(float *)(p + 0x110) * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(int *)(p + 0xBC8) & 0x30000) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

extern float D_005BDED8;

extern float D_005BDEDC;

extern float D_005BDEC0;

void func_004F5410(char *, int, int, float);

void func_004F4690(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    char *o;
    float f;
    short t;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_004F5410(p, 0, 0, 0.0f);
        o = func_00207480(3, 0x34A, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x170;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(o + 0x3A) = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 1.0f;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = D_005BDED8;
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, 0.0f);
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = D_005BDEDC;
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, 0.0f);
        break;
    case 3:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x110) = D_005BDEC4;
            *(float *)(p + 0xBE0) = 300.0f;
            func_00330BD0(D_01DFABA0, 0x71, p + 0x50, 0x23, 0);
            if (*(char **)(p + 0x22C) != 0) *(int *)(*(char **)(p + 0x22C) + 0xC) = 0x30443;
        }
        break;
    case 4:
        f = *(float *)(p + 0x110) + D_005BDEC8 * *(float *)(p + 0x10);
        *(float *)(p + 0x110) = f < D_005BDECC ? f : D_005BDECC;
        func_00131650(tmp, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(tmp), "f"(*(float *)(p + 0x110) * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(int *)(p + 0xBC8) & 0x30000) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

extern float D_005BDEE0;

extern float D_005BDEE4;

extern float D_005BDEE8;

extern float D_005BDEEC;

extern float D_005BDEF0;

void func_004F4A40(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    char *o;
    float f;
    short t;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_004F5410(p, 0, 0, D_005BDEE0);
        o = func_00207480(3, 0x34A, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x170;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(o + 0x3A) = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(short *)(p + 0xBE8) = 0.5f + 65536.0f * D_005BDEF0 / 360.0f;
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 1.0f;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = 60.0f;
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, D_005BDEE0);
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = D_005BDEE8 + D_005BDEE4 * (float)*(int *)(p + 0xBC0);
        }
        t = (0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f);
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5410(p, *(short *)(p + 0xBE8), 0, D_005BDEE0);
        break;
    case 3:
        if (!(*(float *)(p + 0xBE0) <= D_005BDEEC)) func_004F5410(p, *(short *)(p + 0xBE8), 0, D_005BDEE0);
        else func_004F5410(p, *(short *)(p + 0xBE8), 1, D_005BDEE0);
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x110) = D_005BDEC4;
            *(float *)(p + 0xBE0) = 300.0f;
            func_00330BD0(D_01DFABA0, 0x71, p + 0x50, 0x23, 0);
            if (*(char **)(p + 0x22C) != 0) *(int *)(*(char **)(p + 0x22C) + 0xC) = 0x30443;
        }
        break;
    case 4:
        f = *(float *)(p + 0x110) + D_005BDEC8 * *(float *)(p + 0x10);
        *(float *)(p + 0x110) = f < D_005BDECC ? f : D_005BDECC;
        func_00131650(tmp, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(tmp), "f"(*(float *)(p + 0x110) * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(int *)(p + 0xBC8) & 0x30000) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

extern char D_005BE098[4];

void func_00195E20(char *, char *);

extern char D_01DFABA0[];

float func_0011DBE0(float, float);

void func_004F50B0(char *);

void func_004F4E70(char *p) {
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0xBE0) = 10.0f;
    case 1:
        t = *(float *)(p + 0x10);
        t = *(float *)(p + 0xBE0) - t;
        *(float *)(p + 0xBE0) = t;
        if (t < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
            *(unsigned char *)(p + 5) = 0;
            func_00207480(3, 0x34B, (float *)(p + 0x170), 0x10);
            func_00330BD0(D_01DFABA0, 0x72, p + 0x50, 0x23, 0);
        }
        break;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_004F50B0(p);
    func_00195E20(D_005BE098, p);
}

char *func_004D2740(char *p);

extern char D_01CAFF0C[];

short func_00131D10(float, float);

void func_004F5110(char *, int);

void func_004F40D0(char *p) {
    float d[4] __attribute__((aligned(16)));
    char *o;
    char *a;
    char *b;
    short t;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        o = func_00207480(3, 0x34A, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x170;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(o + 0x3A) = 1;
        }
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
        *(float *)(p + 0xBE0) = 10.0f;
        *(short *)(p + 0xBE8) = 0;
        break;
    case 1:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 0xBED) = 1;
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = 300.0f;
        }
        t = 0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f;
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5110(p, *(short *)(p + 0xBE8));
        break;
    case 2:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            o = func_00207480(3, 0x34A, 0, 0x10);
            if (o != 0) {
                *(char **)(o + 0x90) = p + 0x170;
                *(unsigned char *)(o + 0x9A) = 3;
                *(unsigned char *)(o + 0x3A) = 1;
            }
            func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
            *(float *)(p + 0xBE0) = 10.0f;
        }
        t = 0.5f + 65536.0f * (D_005BDEC0 * *(float *)(p + 0x10)) / 360.0f;
        *(short *)(p + 0xBE8) += (short)(unsigned short)t;
        func_004F5110(p, *(short *)(p + 0xBE8));
        break;
    case 3:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0xBE0) = 10.0f;
            *(unsigned char *)(p + 0xBED) = 0;
        }
        break;
    case 4:
        if ((*(float *)(p + 0xBE0) -= *(float *)(p + 0x10)) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 0xBC4) + 1;
            *(unsigned char *)(p + 6) = 0;
            a = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
            b = *(char **)(*(char **)(func_004D2740(*(char **)(p + 0x484)) + 0xC) + 0x104) + 0x30;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory");
            *(short *)(p + 0xBEA) = func_00131D10(d[0], d[2]);
        }
        break;
    }
}

int func_004F5070(p0) char *p0; {
    int func_001AD140();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 1152);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

void func_004F4F80(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_004F3AC0();

void func_004F5680(char *p) { func_004F3AC0(p + -64); }

extern void func_004F55A0();

void func_004F5690(char *p) { func_004F55A0(p + -64); }

extern void func_004F55B0();

void func_004F56A0(char *p) { func_004F55B0(p + -64); }

void func_004F56B0(char *p) { func_004F55B0(p + -160); }

void func_004F50A0(void) {}
