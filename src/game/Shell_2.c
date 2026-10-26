void func_00131650(char *, char *);

void func_00253310(char *);

void func_00253110(char *p, int x, unsigned short fl, float dt) {
    float tmp[4] __attribute__((aligned(16)));
    *(float *)(p + 0x12C) -= dt;
    *(float *)(p + 0x134) -= dt;
    if (*(unsigned char *)(p + 0x148) == 1 && *(float *)(p + 0x134) <= 0.0f) {
        *(float *)(p + 0x134) = *(float *)(p + 0x130);
        func_00253310(p);
    } else {
        func_00131650(p + 0xF0, p + 0xF0);
    }
    if (fl & 2) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	mfc1 $t0, %1
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "f"(*(float *)(p + 0x110)) : "t0", "memory");
    }
    if (fl & 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(dt) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
    }
}

void func_002534D0(char *, int);

void func_00253220(char *p, int x, unsigned short fl, float dt) {
    float tmp[4] __attribute__((aligned(16)));
    *(float *)(p + 0x12C) -= dt;
    *(float *)(p + 0x134) -= dt;
    if (*(unsigned char *)(p + 0x148) == 1 && *(float *)(p + 0x134) <= 0.0f) {
        *(float *)(p + 0x134) = *(float *)(p + 0x130);
        func_002534D0(p, x);
    }
    if (fl & 2) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x100) : "memory");
    }
    if (fl & 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(dt) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
    }
}

float func_00253740();

int func_002536B0(p0) char *p0; {
    char *v0;
    int v1;
    float tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 328) == 0) {
        v1 = 1;
    } else {
        if (*(float *)(v0 + 300) <= 0.0f) {
            *(char *)(v0 + 328) = 0;
            v1 = -1;
        } else {
            tmp0 = func_00253740();
            if (tmp0 <= *(float *)(v0 + 316)) {
                *(char *)(v0 + 328) = 0;
                v1 = 1;
            } else {
                v1 = 0;
            }
        }
    }
    return v1;
}
