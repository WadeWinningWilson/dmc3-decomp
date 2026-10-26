/* Hand-matched functions whose callee prototypes or macros conflict with misc3-25. */

extern char *D_005BC2E0;
short func_00131D10(float, float);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_00133890(float *, float *, float *);
void func_00105230(float *, float *, char *);
char *func_00207480(int, int, float *, int);
void func_0028C5C0(char *, int, float);
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_004D8900(char *p) {
    float d[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *e;
    *(float *)(p + 0x174) = 1.0f;
    VCOPY(p + 0x3C0, p + 0x160);
    VCOPY(p + 0x3D0, p + 0x150);
    VCOPY(p + 0x50, p + 0x150);
    *(float *)(p + 0x5C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x160), "r"(p + 0x150) : "memory");
    d[3] = 1.0f;
    *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
    *(unsigned char *)(p + 0x3A0) = 1;
    *(unsigned char *)(p + 0x3A1) = 0;
    *(short *)(p + 0x3A2) = 0;
    *(unsigned char *)(p + 0x3B0) = 1;
    func_0028C200(p + 0x180, p + 0x3A0, p + 0x3B0, 1, D_005BC2E0 + 0x7C0, p, 0);
    *(int *)(p + 0x25C) = 1;
    *(int *)(p + 0x258) = 0x30700;
    func_0028C8E0(p + 0x180, 0);
    func_0028C910(p + 0x180);
    func_0028C3A0(p + 0x180, 0, -1, 0);
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00133890(m, d, u);
    func_00105230(m, m, p + 0x50);
    e = func_00207480(3, 0x289, m, 8);
    if (e != 0) *(unsigned char *)(e + 0x3A) = 1;
    func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}
