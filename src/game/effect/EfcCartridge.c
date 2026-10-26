void func_001AD100(char *);

extern signed char D_005BE144;

unsigned char func_002F5220(char *);

void func_002F55E0(char *);

void func_002F4FA0(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    int i;
    float f;
    char *q;
    func_001AD100(p);
    for (i = 0; i < 2; i++) func_00206730(p + i * 4 + 0x84);
    for (i = 0; i < 2; i++) {
        if (((char **)(p + 0x84))[i] == 0 && i == 0) {
            func_001AD140(p);
            return;
        }
    }
    if (D_005BE144) {
        func_001AD140(p);
        return;
    }
    f = *(float *)(p + 0x128) * *(float *)(p + 0x10);
    if (!(f < 1.0f)) f = 0.999f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	mfc1 $t0, %1
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x110), "f"(f) : "t0", "memory");
    *(float *)(p + 0x114) += *(float *)(p + 0x12C) * *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xF0), "r"(p + 0x110) : "memory");
    if (!((*(float *)(p + 0x134) += *(float *)(p + 0x10)) < 1.0f)) {
        *(float *)(p + 0x134) = 0.0f;
        if (*(unsigned char *)(p + 0xA1) == 0 && func_002F5220(p) == 1) (*(int *)(p + 0x120))--;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x100), "r"(p + 0xF0) : "memory");
    }
    *(float *)(p + 0x124) -= *(float *)(p + 0x10);
    if (*(int *)(p + 0x120) <= 0 || *(float *)(p + 0x124) < 0.0f) {
        func_001AD140(p);
        return;
    }
    q = *(char **)(p + 0x84) + 0x6E8;
    f = (*(float *)(q + 0x2C) += *(float *)(p + 0x130) * *(float *)(p + 0x10));
    if (!(f <= 180.0f)) *(float *)(q + 0x2C) = f - 360.0f;
    if (*(float *)(q + 0x2C) < -180.0f) *(float *)(q + 0x2C) += 360.0f;
    func_002F55E0(p);
}

int func_002F5580(p0) int p0; {
    int func_001AD140();
    int func_00206730();
    int v1;
    int v3;
    char *v0;
    int v2;
    v3 = 0;
    v0 = (char *)p0;
    do {
        v1 = func_00206730((v0 + 132));
        v2 = *(int *)(v0 + 132);
        if (v2 != 0) {
            v1 = func_001AD140(v2);
            *(int *)(v0 + 132) = 0;
        }
        v3 = (v3 + 1);
        v0 = (v0 + 4);
    } while ((v3 < 2));
    return v1;
}

void func_002F56A0(void) {}

void func_002F56B0(void) {}
