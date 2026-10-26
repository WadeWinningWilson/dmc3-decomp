void func_001318E0(char *, char *, float *);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

void func_00133890(char *, char *, V4 *);

extern V4 D_005599D0;

void func_0030CCD0(char *p) {
    V4 t;
    t = D_005599D0;
    func_00133890(p + 0xB10, p + 0xF0, &t);
    func_001318E0(p + 0xB10, p + 0xB10, (float *)(p + 0xE0));
    *(float *)(p + 0xB40) = *(float *)(p + 0xB00);
    *(float *)(p + 0xB44) = *(float *)(p + 0xB04);
    *(float *)(p + 0xB48) = *(float *)(p + 0xB08);
    *(float *)(p + 0xB4C) = 1.0f;
}
