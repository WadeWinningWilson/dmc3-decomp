void func_00131700(char *, char *, float *);

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

void func_004BD1D0(char *p) {
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
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x380) : "memory");
    func_00131700(p + 0x380, p + 0x380, rot);
    func_00105230(p + 0x380, p + 0x380, pos);
    func_001318E0(p + 0x380, p + 0x380, scl);
}

extern char D_005B8E40[];

extern char D_005B8E64[];

extern char D_005B8EE4[];

int func_00252FA0();

int func_0028C110();

int func_004BD560(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B8E40;
    *(char **)((char *)p0 + 64) = D_005B8E64;
    *(char **)((char *)p0 + 160) = D_005B8EE4;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 884) = 0;
    *(char *)((char *)p0 + 885) = 0;
    *(char *)((char *)p0 + 886) = 0;
    *(char *)((char *)p0 + 887) = 0;
    *(int *)((char *)p0 + 996) = 0;
    *(int *)((char *)p0 + 1000) = 0;
    *(int *)((char *)p0 + 880) = 0;
    return p0;
}

extern void func_004BCB80();

void func_004BD370(char *p) { func_004BCB80(p + -64); }

extern void func_004BD2E0();

void func_004BD3A0(char *p) { func_004BD2E0(p + -64); }

void func_004BD3B0(char *p) { func_004BD2E0(p + -160); }
