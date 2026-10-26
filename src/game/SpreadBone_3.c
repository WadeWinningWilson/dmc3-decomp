extern char D_01CAFF0C[];

int func_00201770(char *, float *, float *, char *, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline unsigned char stage_ok(void) {
    unsigned char r;
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}

int func_002CFA00(char *p, float dy) {
    float tmp[4];
    float out[4];
    if (stage_ok()) {
        QCOPY(tmp, p + 0x50);
        tmp[1] = tmp[1] + 130.0f;
        tmp[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, tmp, out, p + 0x2D2C, 0x10) == 0) {
            out[1] = tmp[1] - 1000.0f;
        }
        *(float *)(p + 0x2D64) = out[1];
        if (*(float *)(p + 0x54) + dy <= 10.0f + out[1]) {
            *(float *)(p + 0x54) = out[1];
            return 1;
        }
    }
    return 0;
}

void func_0024DA80();

int func_002CB900();

int func_002CD800(p0) int p0; {
    int tmp0;
    func_0024DA80((p0 + 9296), 1, 27);
    func_0024DA80((p0 + 9504), 1, 27);
    func_0024DA80((p0 + 9712), 1, 27);
    func_0024DA80((p0 + 9920), 1, 27);
    func_0024DA80((p0 + 10128), 1, 27);
    tmp0 = func_002CB900(p0, 42);
    *(char *)((char *)p0 + 11492) = 42;
    *(char *)((char *)p0 + 11493) = 42;
    *(char *)((char *)p0 + 11494) = 42;
    *(char *)((char *)p0 + 11495) = 42;
    *(char *)((char *)p0 + 11496) = 42;
    *(char *)((char *)p0 + 11068) = 0;
    *(char *)((char *)p0 + 11212) = 0;
    *(char *)((char *)p0 + 11356) = 0;
    return tmp0;
}
