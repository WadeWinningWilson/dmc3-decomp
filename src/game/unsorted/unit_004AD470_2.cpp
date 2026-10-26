extern "C" char *func_00207480(int, int, char *, int);

extern "C" int func_0024E800(char *);

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_0034BA60(int, char *, int, int, int);

extern "C" {
void func_00376B80(char *p, int k);
}

extern "C" void func_00376E40(char *);

extern "C" void func_0041DBA0(char *, char *);

extern "C" void func_00376B40(char *, int);

static inline float frand4AF(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" void func_004AF580(char *p) {
    unsigned char lim;
    lim = 3;
    if (*(unsigned char *)(p + 0x8EB) == 0) lim = 2;
    func_00376E40(p);
    *(unsigned int *)(p + 0x8FC) |= 0x4000000;
    *(unsigned int *)(p + 0x8FC) |= 0x20000000;
    *(unsigned int *)(p + 0x8FC) |= 0x10000000;
    *(unsigned int *)(p + 0x8FC) |= 0x8000000;
    *(unsigned int *)(p + 0x8FC) |= 0x800000;
    if (*(unsigned char *)(p + 0x979) < lim) {
        *(unsigned int *)(p + 0x8FC) |= 0x400000;
    }
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x49, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(unsigned int *)(p + 0x8FC) |= 0x1000000;
        if (((*(unsigned int *)(p + 0x8FC) & 0x200) != 0) == 0) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 470.0f;
        }
        func_00207480(1, 0x26D, p + 0x8A0, 0x10);
        *(float *)(p + 0x95C) = 0.0f;
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (*(float *)(p + 0x95C) < 64.0f) {
            *(float *)(p + 0x95C) = *(float *)(p + 0x95C) + 2.0f;
        }
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            *(float *)(p + 0x95C) = 64.0f;
            if (((*(unsigned int *)(p + 0x8FC) & 0x200) != 0) == 1) {
                if (100.0f * frand4AF() < 50.0f) {
                    (*(unsigned char *)(p + 0x979))++;
                    func_00376B40(p, 0x12);
                } else {
                    *(unsigned char *)(p + 0x979) = 0;
                    func_00376B40(p, 4);
                }
            } else {
                if (*(unsigned char *)(p + 0x979) == lim) {
                    *(unsigned char *)(p + 0x979) = 0;
                    func_00376B40(p, 7);
                } else {
                    (*(unsigned char *)(p + 0x979))++;
                    func_00376B40(p, 0x12);
                }
            }
            *(unsigned int *)(p + 0x8FC) &= ~0x200;
        }
        break;
    }
}
