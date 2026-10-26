float func_00132630(float *, char *);

void func_00132410(char *, char *, char *, float *);

int func_001C12D0(char *u, char *a, char *pts, char *n, int cnt) {
    float t[4];
    int i;
    int r = 1;
    for (i = 0; i < cnt; i++) {
        func_00132410(pts + i * 16, pts + (i + 1) % cnt * 16, a, t);
        if (func_00132630(t, n) < 0.0f) {
            r = 0;
        }
    }
    return r;
}

#define VMULT(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvmul.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

float func_001C1A90(char *u, float *a, float *b, float *c) {
    float t[4] __attribute__((aligned(16)));
    float d;
    VMULT(t, a, b);
    d = -(t[2] + (t[0] + t[1]));
    VMULT(t, c, b);
    return d + (t[2] + (t[0] + t[1]));
}
