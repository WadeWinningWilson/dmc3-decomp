void func_00131650(char *, char *);

float func_00132630(char *, float *);

short func_00131CB0(float);

void func_00131EA0(float *, float *, int);

void func_00132600(char *, float *, char *);

void func_004FEA70(char *p, float *tgt) {
    float func_001324E0(float *);
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float l;
    float c;
    int a;
    unsigned char r;
    func_00131650(p + 0x150, p + 0x150);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(tgt), "r"(p + 0x50) : "memory");
    if ((l = func_001324E0(d)) <= 0.0f) return;
    c = func_00132630(p + 0x150, d) / l;
    if (!(c <= 1.0f)) c = 1.0f;
    else c = c < -1.0f ? -1.0f : c;
    a = func_00131CB0(c);
    if (*(short *)(p + 0x198) < a) a = *(short *)(p + 0x198);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vopmula.xyz $ACC, $vf4, $vf5
	vopmsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(p + 0x150), "r"(d), "r"(d) : "memory");
    __asm__ volatile("lqc2 $vf10, 0x0(%1)
	vabs.xyz $vf10, $vf10
	vaddy.x $vf10, $vf10, $vf10y
	vaddz.x $vf10, $vf10, $vf10z
	sqc2 $vf10, 0x0(%0)" : : "r"(s), "r"(d) : "memory");
    r = s[0] > 0.0f;
    if (r) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00131EA0(m, d, a);
        func_00132600(p + 0x150, m, p + 0x150);
    }
}

float func_004FEC90(char *p, char *v) {
    float func_001324E0(char *);
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(v), "r"(stk), "r"(p + 0x50) : "memory");
    return func_001324E0(stk);
}

extern char D_005BAD60[];

extern char D_005BAD84[];

extern char D_005BAE04[];

extern char D_005BAE98[];

int func_0024FE00();

int func_004FE7E0(p0) int p0; {
    func_0024FE00();
    *(char **)((char *)p0 + 0) = D_005BAD60;
    *(char **)((char *)p0 + 64) = D_005BAD84;
    *(char **)((char *)p0 + 160) = D_005BAE04;
    *(char **)((char *)p0 + 208) = D_005BAE98;
    *(char *)((char *)p0 + 424) = 1;
    return p0;
}

void func_004FE910(p0, p1) char *p0; char *p1; {
    float tmp4;
    *(float *)(p0 + 368) = *(float *)(p1 + 0);
    *(float *)(p0 + 384) = *(float *)(p1 + 4);
    *(float *)(p0 + 388) = *(float *)(p1 + 8);
    *(float *)(p0 + 396) = *(float *)(p1 + 12);
    tmp4 = *(float *)(p1 + 16);
    *(float *)(p0 + 400) = *(float *)(p1 + 16);
    *(float *)(p0 + 404) = tmp4;
    *(short *)(p0 + 408) = *(short *)(p1 + 20);
    *(float *)(p0 + 412) = *(float *)(p1 + 24);
    *(float *)(p0 + 420) = *(float *)(p1 + 28);
}

extern void func_004FE840();

void func_004FECD0(char *p) { func_004FE840(p + -64); }

void func_004FECE0(char *p) { func_004FE840(p + -160); }

void func_004FECF0(char *p) { func_004FE840(p + -208); }

void func_004FE8D0(void) {}

void func_004FE8E0(void) {}

void func_004FE8F0(void) {}

void func_004FE900(void) {}
