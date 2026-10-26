/* Hand-matched functions whose callee prototypes or macros conflict with misc3-26. */

extern char *D_01CAFF0C[];
char *func_00207480(int, int, char *, int);
void func_001AD140(char *);
void func_00133890(char *, char *, float *);
void func_00105230(char *, char *, char *);
void func_00131650(char *, char *);
void func_00408B30(char *);
void func_0034BA60(int, char *, int, int, int);

void func_00408630(char *p) {
    float u[4] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    *(float *)(p + 0x434) = *(float *)(p + 0x434) - *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x434) <= 0.0f)) return;
    *(char **)(p + 0x414) = func_00207480(3, 0x169, 0, 0x10);
    if (*(char **)(p + 0x414) == 0) {
        func_001AD140(p);
        return;
    }
    {
        char *g = D_01CAFF0C[0];
        t[0] = *(float *)(*(char **)(g + 0xC) + 0x50);
        t[1] = 150.0f + *(float *)(*(char **)(g + 0xC) + 0x54);
        t[2] = *(float *)(*(char **)(g + 0xC) + 0x58);
    }
    t[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x420), "r"(t), "r"(p + 0x50) : "memory");
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3D0) : "memory");
    func_00133890(p + 0x3D0, p + 0x420, u);
    func_00105230(p + 0x3D0, p + 0x3D0, p + 0x50);
    {
        char *e = *(char **)(p + 0x414);
        char *f;
        *(char **)(e + 0x90) = p + 0x3D0;
        *(unsigned char *)(e + 0x9A) = 0;
        f = *(char **)(p + 0x414);
        *(unsigned char *)(f + 0x3A) = 1;
    }
    func_00131650(p + 0x420, p + 0x420);
    *(float *)(p + 0x42C) = 1.0f;
    func_00408B30(p);
    *(float *)(p + 0x430) = 360.0f;
    func_0034BA60(0x1D, p + 0x50, *(signed char *)(*(char **)(p + 0x410) + 0x46), 0, 1);
    *(unsigned char *)(p + 0x438) = 0;
    *(float *)(p + 0x43C) = 24.0f;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}
