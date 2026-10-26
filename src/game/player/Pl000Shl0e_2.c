void func_001AD140(char *);

float func_00132470(char *, char *);

void func_001AD100(char *);

void func_00206730(char *);

int func_002077F0(char *);

void func_0028C5C0(char *, int, float);

void func_00228300(char *);

int func_002242C0(char *);

extern unsigned char D_01DFC180[][10];

void func_004BD9B0(char *);

void func_004BDB60(char *);

void func_004BDD50(char *);

void func_004BE330(char *);

void func_004BD7C0(char *p) {
    int f;
    char *e;
    func_001AD100(p);
    func_00228300(p + 0x3EC);
    func_00206730(p + 0x370);
    if (*(char **)(p + 0x3EC) != 0 && (unsigned char)func_002242C0(*(char **)(p + 0x3EC)) == 1 &&
        *(unsigned char *)(*(char **)(p + 0x3EC) + 0x3C79) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(char **)(p + 0x370) != 0 && (unsigned char)func_002077F0(*(char **)(p + 0x370)) == 1) {
        *(int *)(p + 0x370) = 0;
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x374) == 0 && D_01DFC180[*(unsigned char *)(p + 0x378)][*(signed char *)(p + 0x376)] != 0) {
        *(unsigned char *)(p + 0x374) = 1;
    }
    if (600.0f < func_00132470(p + 0x3C0, p + 0x50)) {
        func_004BD9B0(p);
        func_001AD140(p);
        return;
    }
    f = 0;
    e = *(char **)(p + 0x1D0);
    if (e != 0) {
        f = *(int *)(e + 8);
    }
    if (f & 0x100) {
        func_004BD9B0(p);
        func_001AD140(p);
        return;
    }
    f = 0;
    e = *(char **)(p + 0x1CC);
    if (e != 0) {
        f = *(int *)(e + 8);
    }
    if (f & 0x30000) {
        func_004BD9B0(p);
        func_001AD140(p);
        return;
    }
    switch (*(signed char *)(p + 0x377)) {
    case 0:
        func_004BDB60(p);
        break;
    case 1:
        func_004BDD50(p);
        break;
    }
    func_004BE330(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

float func_0034C160(float, float, float);

void func_004BDD50(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float t;
    if ((*(float *)(p + 0x3E4) -= *(float *)(p + 0x10)) < 0.0f) {
        func_004BD9B0(p);
        func_001AD140(p);
        return;
    }
    t = func_0034C160(*(float *)(p + 0x3E0), 9.0f, 0.18f * *(float *)(p + 0x10));
    *(float *)(p + 0x3E0) = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x3D0), "f"(t * t) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
}

extern void func_004BD640();

void func_004BE4D0(char *p) { func_004BD640(p + -64); }

extern void func_004BE440();

void func_004BE500(char *p) { func_004BE440(p + -64); }

void func_004BE510(char *p) { func_004BE440(p + -160); }
