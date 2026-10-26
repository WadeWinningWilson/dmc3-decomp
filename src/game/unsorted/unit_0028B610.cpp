extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

typedef struct { int w[4]; } __attribute__((aligned(16))) qw16;

extern "C" void func_00131760(char *, char *, float *);

extern "C" qw16 D_00549A00;

extern "C" void func_0028B980(char *p, char *m, int k) {
    float t[4];
    float r[4];
    qw16 s = D_00549A00;
    char *e = *(char **)(*(char **)(p + 0xE4) + (unsigned char)k * 4);
    *(signed char *)(p + 0xDA) = *(signed char *)e;
    *(unsigned char *)(p + 0xDB) = *(unsigned char *)(e + 1);
    *(unsigned char *)(p + 0xD6) = *(unsigned char *)(e + 2);
    *(unsigned char *)(p + 0xD4) = *(unsigned char *)(e + 3);
    t[0] = *(float *)(e + 0x10);
    t[1] = *(float *)(e + 0x14);
    t[2] = *(float *)(e + 0x18);
    t[3] = 1.0f;
    r[0] = *(float *)(e + 0x20);
    r[1] = *(float *)(e + 0x24);
    r[2] = *(float *)(e + 0x28);
    r[3] = 1.0f;
    UNIT(m);
    func_00131760(m, m, r);
    if (*(unsigned char *)(p + 0xD0) != 0) {
        func_00131760(m, m, (float *)(p + 0x80));
        *(unsigned char *)(p + 0xD0) = 0;
    }
    func_00105230(m, m, (char *)t);
    func_001318E0(m, m, (char *)&s);
}
