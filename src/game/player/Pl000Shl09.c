/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-9. */
extern char D_01DFABA0[];

void func_0028C5C0(char *, int, float);

float func_0034C160(float, float, float);

float func_00132470(float *, char *);

void func_004962F0(char *);

void func_00495810(char *p) {
    void func_004960F0(char *);
    unsigned char func_002DA0B0(char *, int);
    void func_004962A0(char *);
    void func_004965D0(char *);
    void func_00496640(char *);
    void func_00330B50(char *, int, char *, int);
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    int f;
    char *e;
    if (func_002DA0B0(*(char **)(p + 0x3F0), 9) == 2) {
        func_004962A0(p);
        return;
    }
    if ((*(float *)(p + 0x37C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_004962A0(p);
        return;
    }
    if (*(unsigned char *)(p + 0x370) == 1) {
        func_004962A0(p);
        return;
    }
    if (*(unsigned char *)(p + 0x371) == 1) {
        func_004962F0(p);
        return;
    }
    f = 0;
    e = *(char **)(p + 0x1CC);
    if (e != 0) f = *(int *)(e + 8);
    if (f & 0x10000) {
        func_004962A0(p);
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 9);
        return;
    }
    if (f & 0x20000) {
        *(unsigned char *)(p + 0x372) = 2;
        func_004965D0(p);
        func_00330B50(D_01DFABA0, 0xB, p + 0x50, 9);
        func_00496640(p);
        return;
    }
    s = func_0034C160(*(float *)(p + 0x378), 40.0f, 5.0f * *(float *)(p + 0x10));
    q = s * s;
    *(float *)(p + 0x378) = s;
    if (!(q <= 40.0f)) q = 40.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x3A0), "f"(q) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    if (!(func_00132470(*(float **)(p + 0x3F0) + 0x14, p + 0x50) <= 1500.0f)) {
        func_004962A0(p);
        return;
    }
    func_004960F0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_001AD140(char *);

void func_00131650(char *, char *);

void func_00495D20(char *p) {
    void func_004960F0(char *p);
    float t[4] __attribute__((aligned(16)));
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(*(char **)(p + 0x3F0) + 0x50) : "memory");
    t[1] += 120.0f;
    t[3] = 1.0f;
    if (func_00132470(t, p + 0x50) < 100.0f) {
        func_001AD140(p);
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x3A0), "r"(t), "r"(p + 0x50) : "memory");
    func_00131650(p + 0x3A0, p + 0x3A0);
    *(float *)(p + 0x3AC) = 1.0f;
    s = func_0034C160(*(float *)(p + 0x378), 80.0f, 10.0f * *(float *)(p + 0x10));
    q = s * s;
    *(float *)(p + 0x378) = s;
    if (!(q <= 80.0f)) q = 80.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x3A0), "f"(q) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    func_004960F0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_0028C740(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

extern char *D_005BC2E0;

extern char D_00586858[];

extern char D_00586870[];

void func_00496740(char *p) {
    func_0028C740(p + 0x150);
    func_0028C200(p + 0x150, D_00586858, D_00586870, 1, D_005BC2E0 + 0xF40, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 2, 5, p + 0x3B0);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_004966A0(char *p) {
    func_0028C740(p + 0x150);
    func_0028C200(p + 0x150, D_00586858, D_00586870, 1, D_005BC2E0 + 0xF00, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x3B0);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x3B0);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_00206730(char *);

void func_002DA130(char *, int, int);

void func_00496050(char *p) {
    int func_002DA0B0(int, int);
    int i;
    if ((unsigned char)func_002DA0B0(*(int *)(p + 0x3F0), 9) != 0) {
        func_002DA130(*(char **)(p + 0x3F0), 9, 3);
    }
    for (i = 0; i < 2; i++) {
        func_00206730(p + i * 4 + 0x3FC);
        if (*(char **)(p + i * 4 + 0x3FC) != 0) {
            *(unsigned char *)(*(char **)(p + i * 4 + 0x3FC) + 0x3A) = 1;
            func_001AD140(*(char **)(p + i * 4 + 0x3FC));
            *(char **)(p + i * 4 + 0x3FC) = 0;
        }
    }
    func_0028C740(p + 0x150);
}

void func_00495C70(p0) char *p0; {
    int func_002DA0B0();
    int func_004960F0();
    int func_004962A0();
    char *v0;
    int v1;
    float v2;
    float v3;
    int tmp1;
    int tmp2;
    int tmp5;
    int tmp8;
    int tmp9;
    v0 = p0;
    tmp1 = func_002DA0B0(*(int *)(p0 + 1008), 9);
    v1 = (int)v0;
    if ((tmp1 & 255) == 2) {
        tmp2 = func_004962A0(v1);
        return;
    } else {
        v2 = 0.0f;
        *(float *)(v0 + 892) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 892) < v2) {
            tmp5 = func_004962A0(v0);
            return;
        } else {
            *(float *)(v0 + 896) -= *(float *)(v0 + 16);
            if (*(float *)(v0 + 896) < v2) {
                tmp8 = func_004962A0(v0);
                return;
            } else {
                tmp9 = func_004960F0(v0);
                return;
            }
        }
    }
}

extern char D_01DFABA0[];

int func_0033DA60();

int func_00495EF0(p0, p1, p2) int p0; int p1; int p2; {
    void func_00330B50();
    int func_004962A0();
    int func_004965D0();
    int func_00496640();
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int tmp0;
    v0 = (char *)p0;
    v1 = (char *)p2;
    v6 = func_004965D0();
    if (*(signed char *)(v1 + 5) == 3) {
        v2 = 1;
        if (*(unsigned char *)(v0 + 882) != v2) {
            if (*(unsigned char *)(v0 + 880) != v2) {
                if (*(unsigned char *)(v0 + 881) != v2) {
                    func_00496640(v0);
                    v5 = (int)v1;
                    if (v1 != 0) {
                        v5 = (v5 + -64);
                    }
                    v6 = func_0033DA60(v5);
                    tmp0 = (v6 & 255);
                    v7 = 1;
                    if (tmp0 == 0) {
                        *(char *)(v0 + 880) = v7;
                    } else {
                        *(char *)(v0 + 881) = 1;
                        v8 = (int)v1;
                        if (v1 != 0) {
                            v8 = (int)(v1 + -64);
                        }
                        *(int *)(v0 + 1012) = v8;
                        func_00496640(v0);
                        func_00330B50(D_01DFABA0, 11, (v0 + 80), 9);
                        v3 = (int)v1;
                        if (v1 != 0) {
                            v3 = (v3 + -64);
                        }
                        v6 = func_0033DA60(v3);
                        v4 = (int)v0;
                        if ((v6 & 255) == 0) {
                            v6 = func_004962A0(v4);
                        } else {
                            if (v1 != 0) {
                                v1 = (v1 + -64);
                            }
                            *(char **)(v0 + 1012) = v1;
                        }
                    }
                }
            }
        }
    }
    return v6;
}

extern void func_00495380();

void func_00496860(char *p) { func_00495380(p + -64); }

extern void func_00495EB0();

void func_00496870(char *p) { func_00495EB0(p + -64); }

extern void func_00495ED0();

void func_00496880(char *p) { func_00495ED0(p + -64); }

extern void func_004967D0();

void func_004968A0(char *p) { func_004967D0(p + -64); }

void func_004968B0(char *p) { func_004967D0(p + -160); }

void func_00496020(void) {}

void func_00496030(void) {}

void func_00496040(void) {}

void func_00496680(void) {}

void func_00496690(void) {}
