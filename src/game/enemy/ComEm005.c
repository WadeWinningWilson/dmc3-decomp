void func_00105760(float, float *, float *);

void func_003CCDF0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    if (*(float *)(p + 0x108) <= 0.0f) {
        if (*(unsigned char *)(p + 0xCD) == 0) {
            *(float *)(*(char **)(p + 0x10) + 0x34) += -0.54f * *(float *)(p + 0xB0);
            *(float *)(*(char **)(p + 0x10) + 0x34) += *(float *)(*(char **)(p + 0xA8) + 0x24);
            if (!(*(float *)(*(char **)(p + 0x10) + 0x34) <= 0.0f)) *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) += *(float *)(*(char **)(p + 0x10) + 0x34);
        }
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(*(char **)(p + 0x10) + 0x20) : "memory");
        func_00105760(6.283185f * (*(short *)(*(char **)(p + 0x10) + 0x50) / 65536.0f), r, m);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(r) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(v) : "memory");
    }
}

void func_0028C5C0(char *, int, float);

void func_003CCF30(char *p) {
    func_0028C5C0(*(char **)(p + 0xA4), (unsigned char)(*(float *)(p + 0x108) > 0.0f), *(float *)(p + 0xB0));
}

void func_00100580(char *);

void func_0031E440(char *, int);

void func_00320590(char *, int);

char *func_003CCB50(char *p, short flag) {
    extern char D_005B0CA0[];
    extern char D_005B0D58[];
    if (p != 0) {
        *(char **)p = D_005B0CA0;
        *(char **)(p + 160) = D_005B0D58;
        func_0031E440(p + 160, 0);
        func_00320590(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0031E400();

int func_00320540();

int func_003CCB00(p0) int p0; {
    extern char D_005B0CA0[];
    extern char D_005B0D58[];
    func_00320540();
    func_0031E400((p0 + 160));
    *(char **)((char *)p0 + 0) = D_005B0CA0;
    *(char **)((char *)p0 + 160) = D_005B0D58;
    return p0;
}

extern void func_003CDD90();

void func_003CF0C0(char *p) { func_003CDD90(p + -160); }

extern void func_003CDD80();

void func_003CF0D0(char *p) { func_003CDD80(p + -160); }

extern void func_003CDD70();

void func_003CF0E0(char *p) { func_003CDD70(p + -160); }

extern void func_003CDD60();

void func_003CF0F0(char *p) { func_003CDD60(p + -160); }

extern void func_003CDD50();

void func_003CF100(char *p) { func_003CDD50(p + -160); }

extern void func_003CDD40();

void func_003CF110(char *p) { func_003CDD40(p + -160); }

extern void func_003CDBC0();

void func_003CF120(char *p) { func_003CDBC0(p + -160); }

extern void func_003CDA50();

void func_003CF130(char *p) { func_003CDA50(p + -160); }

int func_003CD210(void) { return 0; }

void func_003CD220(void) {}

int func_003CD230(void) { return 0; }

void func_003CDF20(void) {}

float func_003CD240(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 264) = *(float *)(p1 + 44);
    return t0;
}

void func_003CD490(char *p0, int p1) {
    *(char *)(p0 + 180) = p1;
    *(char *)(p0 + 181) = 0;
    *(char *)(p0 + 182) = 0;
    *(char *)(p0 + 183) = 0;
    *(char *)(p0 + 184) = 0;
}

void func_003CDF10(char *p0) {
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
}

void func_003CCF60(char *p) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
}
