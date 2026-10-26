void func_00131700(char *, char *, float *);

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

void func_004B9370(char *p) {
    float pos[4] __attribute__((aligned(16)));
    float rot[4] __attribute__((aligned(16)));
    float scl[4] __attribute__((aligned(16)));
    pos[0] = *(float *)(p + 0x50);
    pos[1] = *(float *)(p + 0x54);
    pos[2] = *(float *)(p + 0x58);
    pos[3] = 1.0f;
    rot[0] = 0.0f;
    rot[1] = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    rot[2] = 0.0f;
    rot[3] = 1.0f;
    scl[0] = 1.0f;
    scl[1] = 1.0f;
    scl[2] = 1.0f;
    scl[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3B0) : "memory");
    func_00131700(p + 0x3B0, p + 0x3B0, rot);
    func_00105230(p + 0x3B0, p + 0x3B0, pos);
    func_001318E0(p + 0x3B0, p + 0x3B0, scl);
}

extern void func_004B9510();

void func_004B9360(void) { func_004B9510(); }

extern void func_004B8BE0();

void func_004B96C0(char *p) { func_004B8BE0(p + -64); }

extern void func_004B9630();

void func_004B96F0(char *p) { func_004B9630(p + -64); }

void func_004B9700(char *p) { func_004B9630(p + -160); }
