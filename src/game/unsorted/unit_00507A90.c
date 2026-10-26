/* Runs three update steps, then reports whether both byte pairs differ. */
void func_00509A10(char *);

void func_00509FA0(char *);

void func_0050A210(char *);

int func_00509AA0(char *p) {
    func_00509A10(p);
    *(int *)(p + 0x18) = 0;
    func_00509FA0(p);
    func_0050A210(p);
    if (p[0x68] != p[0x69] && p[0x6A] != p[0x6B]) {
        return 1;
    }
    return 0;
}

short func_0034B940(char *, char *);

void func_0034B8C0(short *, short *, int);

float func_001324B0(char *, char *);

extern char *D_005BE190[];

void func_00316F30(char *, float *, int);

void func_001316B0(char *, float *, float *, float);

void func_003176C0(char *, char *, char *);

void func_005088F0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    short s;
    char *o;
    int n;
    float d;
    o = D_005BE190[0];
    s = 0;
    func_00316F30(p, a, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(o + 0x50) : "memory");
    v[1] = v[1] + 100.0f;
    v[3] = 1.0f;
    func_001316B0(p + 0x190, v, a, 0.4f);
    *(float *)(p + 0x19C) = 1.0f;
    d = func_001324B0((char *)a, p + 0x190) / 0.4142129f;
    *(float *)(p + 0x238) = d;
    if (d < 400.0f) *(float *)(p + 0x238) = 400.0f;
    if (!(*(float *)(p + 0x238) <= 800.0f)) {
        *(float *)(p + 0x210) = 0.034906585f;
        s = func_0034B940(p + 0x190, (char *)a);
        s = s - 0x38E;
        s = s - *(short *)(p + 0x24A);
        n = 0x7F;
        *(float *)(p + 0x238) = func_001324B0((char *)a, p + 0x190);
        *(float *)(p + 0x238) = *(float *)(p + 0x238) + 400.0f;
    } else {
        *(float *)(p + 0x210) = 0.2617994f;
        n = 0;
        s = 0;
    }
    func_0034B8C0((short *)(p + 0x24A), &s, n);
    *(float *)(p + 0x214) = 6.283185f * ((float)*(short *)(p + 0x24A) / 65536.0f);
    func_003176C0(p, p + 0x1A0, p + 0x190);
}
