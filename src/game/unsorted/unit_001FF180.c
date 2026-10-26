float func_0011DA38(float);

int func_001FF610(char *p) {
    if (*(float *)(p + 4) < func_0011DA38(0.5235988f) && !(*(float *)(p + 4) <= -func_0011DA38(0.5235988f))) {
        return 0;
    }
    if (*(float *)(p + 4) < func_0011DA38(0.78539813f) && !(*(float *)(p + 4) <= -func_0011DA38(0.78539813f))) {
        return 1;
    }
    return 2;
}

float func_001C1B00(char *, float *, char *, float);

float func_00131B50(float);

void func_00132580(float *, float *, float);

int func_001FF2C0(char *p, char *t, float *out) {
    unsigned char func_001BF4F0(char *u, char *o, float *t);
    extern char D_005BE0C8[4];
    float v[4][4] __attribute__((aligned(16)));
    float h;
    __asm__ volatile("ldl $t0, 0x7(%1)\n\tldr $t0, 0x0(%1)\n\tlw $t1, 0x8(%1)\n\tpcpyld $t0, $t1, $t0\n\tqmtc2.ni $t0, $vf8\n\tvmove.w $vf8, $vf0\n\tsqc2 $vf8, 0x0(%0)" : : "r"(v[0]), "r"(t + 4) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)\n\tldr $t0, 0x0(%1)\n\tlw $t1, 0x8(%1)\n\tpcpyld $t0, $t1, $t0\n\tqmtc2.ni $t0, $vf8\n\tvmove.w $vf8, $vf0\n\tsqc2 $vf8, 0x0(%0)" : : "r"(v[1]), "r"(t + 0x10) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)\n\tldr $t0, 0x0(%1)\n\tlw $t1, 0x8(%1)\n\tpcpyld $t0, $t1, $t0\n\tqmtc2.ni $t0, $vf8\n\tvmove.w $vf8, $vf0\n\tsqc2 $vf8, 0x0(%0)" : : "r"(v[2]), "r"(t + 0x1C) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)\n\tldr $t0, 0x0(%1)\n\tlw $t1, 0x8(%1)\n\tpcpyld $t0, $t1, $t0\n\tqmtc2.ni $t0, $vf8\n\tvmove.w $vf8, $vf0\n\tsqc2 $vf8, 0x0(%0)" : : "r"(v[3]), "r"(t + 0x28) : "t0", "t1", "memory");
    if ((unsigned char)func_001BF4F0(D_005BE0C8, p, v[0]) == 0) {
        out[0] = 0.0f;
        out[1] = 0.0f;
        out[2] = 0.0f;
        out[3] = 0.0f;
        return 0;
    }
    h = func_001C1B00(D_005BE0C8, v[3], p, *(float *)(t + 0x34));
    if (func_00131B50(h) < 0.001f) h = 0.0f;
    h = *(float *)(p + 0x10) - h;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(v[3]) : "memory");
    if (out[1] < func_0011DA38(1.0471976f)) {
        if (!(out[1] <= -func_0011DA38(1.0471976f))) out[1] = 0.0f;
    }
    func_00132580(out, out, func_00131B50(h));
    return 1;
}

void func_001FF490(char *p, char *s) {
    extern int D_005BE0C8;
    void func_001BF4F0(int *, char *, float (*)[4]);
    float m[4][4] __attribute__((aligned(16)));
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[0]), "r"(s + 0x4) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[1]), "r"(s + 0x10) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[2]), "r"(s + 0x1C) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[3]), "r"(s + 0x28) : "t0", "t1", "memory");
    func_001BF4F0(&D_005BE0C8, p, m);
}

void func_001BF590(int *, char *, float (*)[4], int);

void func_001FF550(char *p, char *s, int k) {
    extern int D_005BE0C8;
    float m[4][4] __attribute__((aligned(16)));
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[0]), "r"(s + 0x4) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[1]), "r"(s + 0x10) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[2]), "r"(s + 0x1C) : "t0", "t1", "memory");
    __asm__ volatile("ldl $t0, 0x7(%1)
	ldr $t0, 0x0(%1)
	lw $t1, 0x8(%1)
	pcpyld $t0, $t1, $t0
	qmtc2.ni $t0, $vf8
	vmove.w $vf8, $vf0
	sqc2 $vf8, 0x0(%0)" : : "r"(m[3]), "r"(s + 0x28) : "t0", "t1", "memory");
    func_001BF590(&D_005BE0C8, p, m, k);
}
