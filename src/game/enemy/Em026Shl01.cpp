extern "C" void func_001AD140(char *);

extern "C" void func_001AD100(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_004D74E0(char *);

extern "C" void func_004D75A0(char *);

extern "C" void func_004D79D0(char *);

extern "C" void func_004D7DB0(char *);

extern "C" void func_004D8120(char *);

extern "C" void func_004D7400(char *p) {
    char *q = *(char **)(p + 0x508);
    func_001AD100(p);
    if (*(unsigned char *)(q + 0x2F3D) == 4) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 0x50C)) {
    case 0:
        func_004D74E0(p);
        break;
    case 3:
        func_004D75A0(p);
        break;
    case 4:
        func_004D79D0(p);
        break;
    case 5:
        func_004D7DB0(p);
        break;
    }
    func_004D8120(p);
    func_0028C5C0(p + 0x140, 0, *(float *)(p + 0x10));
}

static inline int clampT(int a, short lim) {
    if (a < lim) {
        return (short)a;
    }
    if (lim < -a) {
        return (short)-a;
    }
    return lim;
}

extern "C" short func_004D8420(char *p, short lim, int a) {
    int d;
    if (a == 0) {
        return *(short *)(p + 0x90);
    }
    d = clampT(a, lim);
    if (*(float *)(p + 0x10) != 1.0f) {
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * (6.283185f * ((float)d / 65536.0f) * *(float *)(p + 0x10)) / 6.283185f);
    }
    return *(short *)(p + 0x90) + (short)d;
}

extern "C" void func_00105760(float *, float *, float);

extern "C" void func_00104B80(float *, float *, float *);

extern "C" void func_00105668(float *, float *, float);

extern "C" unsigned char func_004D81D0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    unsigned char fl;
    a = 6.283185f * ((float)*(short *)(p + 0x514) / 65536.0f);
    b = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    fl = 0;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) += *(float *)(p + 0x70);
        if (*(float *)(p + 0x70) > 0.0f) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x4F0))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x4F0);
                fl |= 1;
            }
        } else {
            if (*(float *)(p + 0x60) <= *(float *)(p + 0x4F0)) {
                *(float *)(p + 0x60) = *(float *)(p + 0x4F0);
                fl |= 1;
            }
        }
    } else {
        fl |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) += *(float *)(p + 0x78);
        if (*(float *)(p + 0x78) > 0.0f) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x4F8))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x4F8);
                fl |= 2;
            }
        } else {
            if (*(float *)(p + 0x68) <= *(float *)(p + 0x4F8)) {
                *(float *)(p + 0x68) = *(float *)(p + 0x4F8);
                fl |= 2;
            }
        }
    } else {
        fl |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    func_00105760(m, m, b);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    {
        unsigned char r;
        if (fl == 3) r = 1; else r = 0;
        return r;
    }
}
