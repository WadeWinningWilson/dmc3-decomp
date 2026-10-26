extern char D_01CAFF0C[];

void func_00105230(char *, char *, float *);

void func_00105300(char *, char *);

void func_00132300(char *, float, float, float);

static inline void setf470(short s) { char *g = *(char **)(*(char **)D_01CAFF0C + 0x18); int k = s; if (k < 32) { ((int *)(g + 0x18))[k / 32] |= 1 << (k & 31); } else { k -= 32; ((int *)(g + 0x44))[k / 32] |= 1 << (k & 31); } }

void func_00470CE0(char *p) {
    float v[4] __attribute__((aligned(16)));
    *(unsigned char *)(p + 0xDC) = 3;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	vmove.w $vf4, $vf0
	sqc2 $vf4, 0x30(%0)" : : "r"(p + 0x520), "r"(p + 0x570) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x590) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(v), "f"(*(float *)(p + 0x5A4)) : "t0", "memory");
    func_00105230(p + 0x520, p + 0x520, v);
    func_00105300(p + 0x890, p + 0x520);
    func_00132300(p + 0x890, 0.0f, 100.0f, 0.0f);
    *(unsigned char *)(p + 0x5B1) = 0xFD;
    if (*(short *)(p + 0x562) != -1) setf470(*(short *)(p + 0x562));
}

extern void func_00470AB0();

void func_00470F50(char *p) { func_00470AB0(p + -64); }

extern void func_00470E90();

void func_00470F60(char *p) { func_00470E90(p + -64); }

void func_00470F70(char *p) { func_00470E90(p + -160); }

extern void func_00470E40();

void func_00470F90(char *p) { func_00470E40(p + -208); }

void func_00470FB0(char *p) { func_00470E90(p + -208); }

void func_00470E80(char *p, short v) { *(short *)(p + 1378) = v; }

void func_00470E30(char *p0) {
    *(char *)(p0 + 1376) = 1;
}
