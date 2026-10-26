extern char D_01CAFF0C[];

float func_001324B0(char *, char *);

void func_00316F30(char *, float *, int);

void func_003172E0(char *, short *, short *);

void func_0034B8C0(short *, short *, int);

void func_003176C0(char *, char *, char *);

int func_002018A0(char *, char *, char *, char *, char *, int);

void func_00317740(char *, int);

void func_0041E190(char *d, char *s, float r);

void func_00506D90(char *p) {
    short b;
    short c;
    float pos[4] __attribute__((aligned(16)));
    char buf[0x40];
    float v[4] __attribute__((aligned(16)));
    b = 0;
    c = 0;
    func_00316F30(p, pos, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x190), "r"(pos) : "memory");
    *(float *)(p + 0x238) = 600.0f;
    *(float *)(p + 0x210) = 0.43633232f;
    func_003172E0(p, &b, &c);
    func_0034B8C0((short *)(p + 0x24A), &b, 0x5B);
    *(float *)(p + 0x214) = 6.2831850f * ((float)*(short *)(p + 0x24A) / 65536.0f);
    func_003176C0(p, p + 0x1A0, p + 0x190);
    func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x190, p + 0x1A0, p + 0x1A0, buf, 8);
    if (func_001324B0(p + 0x190, p + 0x1A0) < 200.0f) {
        v[2] = 100.0f;
        v[0] = 0.0f;
        v[3] = 1.0f;
        v[1] = 0.0f;
        func_0041E190((char *)v, (char *)v, *(float *)(p + 0x214));
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x190), "r"(p + 0x190), "r"(v) : "memory");
        *(float *)(p + 0x19C) = 1.0f;
        *(float *)(p + 0x224) = *(float *)(p + 0x224) + 15.0f;
        if (!(*(float *)(p + 0x224) <= 300.0f)) {
            *(float *)(p + 0x224) = 300.0f;
        }
    } else {
        *(float *)(p + 0x224) = *(float *)(p + 0x224) - 6.0f;
        if (*(float *)(p + 0x224) < 0.0f) {
            *(float *)(p + 0x224) = 0.0f;
        }
    }
    *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) + *(float *)(p + 0x224);
    func_00317740(p, 0);
}
