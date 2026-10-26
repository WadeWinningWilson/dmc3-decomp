short func_0034B940(char *, char *);

void func_001AD140(char *);

char *func_00207480(int, int, float *, int);

extern char D_01CAFF0C[];

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_00201770(char *, float *, float *, float *, int);

void func_00407BF0(char *);

void func_004077E0(char *p) {
    float a[4];
    float out[4];
    float buf[16];
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50;
    *(short *)(p + 0x428) = func_0034B940(g, *(char **)(p + 0x420) + 0x50);
    QCOPY(a, p + 0x50);
    a[1] = a[1] + 100.0f;
    a[3] = 1.0f;
    if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, a, out, buf, 0x20) == 1) {
        *(float *)(p + 0x54) = out[1];
    }
    func_00407BF0(p);
    *(char **)(p + 0x424) = func_00207480(3, 0x167, (float *)(p + 0x3E0), 0x10);
    if (*(char **)(p + 0x424) == 0) {
        func_001AD140(p);
    } else {
        *(float *)(p + 0x434) = 50.0f;
    }
}

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C790(char *, int);

void func_001AD100(char *);

void func_00206730(char *);

void func_003BA960(char *);

void func_0028C5C0(char *, int, float);

void func_0034BA60(int, char *, int, int, int);

int func_003AD2F0(char *);

void func_00407B40(char *);

void func_004078E0(char *p) {
    int func_002077F0(char *);
    char *g;
    func_001AD100(p);
    func_00206730(p + 0x424);
    func_003BA960(p + 0x420);
    if (*(char **)(p + 0x424) != 0) {
        if ((unsigned char)func_002077F0(*(char **)(p + 0x424)) == 1) {
            *(int *)(p + 0x424) = 0;
            func_001AD140(p);
            return;
        }
    } else {
        func_001AD140(p);
        return;
    }
    g = *(char **)(p + 0x420);
    if (g == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)func_003AD2F0(g) == 1) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x430) == 0) {
        *(float *)(p + 0x434) = *(float *)(p + 0x434) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x434) < 0.0f) {
            *(unsigned char *)(p + 0x430) = 1;
            func_00407B40(p);
            func_0034BA60(0x26, p + 0x50, *(signed char *)(*(char **)(p + 0x420) + 0x46), 0, 1);
        }
    } else {
        if (*(unsigned char *)(p + 0x42A) != 1) {
            func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
        } else {
            *(float *)(p + 0x42C) = *(float *)(p + 0x42C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x42C) < 0.0f) {
                *(unsigned char *)(p + 0x42A) = 0;
                func_0028C790(p + 0x150, 0);
                func_0028C910(p + 0x150);
                func_0028C3A0(p + 0x150, 0, -1, p + 0x3E0);
            }
        }
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 10.0f;
    }
    func_00407BF0(p);
}

void func_0028C740(char *);

void func_00407AE0(char *p) {
    unsigned char func_002077F0(char *);
    func_00206730(p + 0x424);
    if (*(char **)(p + 0x424) != 0 && func_002077F0(*(char **)(p + 0x424)) == 0) {
        func_001AD140(*(char **)(p + 0x424));
        *(char **)(p + 0x424) = 0;
    }
    func_0028C740(p + 0x150);
}

void func_004076D0(p0, p1) char *p0; char *p1; {
    *(float *)(p0 + 80) = *(float *)(p1 + 0);
    *(float *)(p0 + 84) = *(float *)(p1 + 4);
    *(float *)(p0 + 88) = *(float *)(p1 + 8);
    *(int *)(p0 + 92) = 0x3f800000;
}

extern char D_005B2990[];

extern char D_005B29B4[];

extern char D_005B2A34[];

int func_00252FA0();

int func_0028C110();

int func_00407700(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B2990;
    *(char **)((char *)p0 + 64) = D_005B29B4;
    *(char **)((char *)p0 + 160) = D_005B2A34;
    func_0028C110((p0 + 336));
    *(int *)((char *)p0 + 1056) = 0;
    *(int *)((char *)p0 + 1060) = 0;
    *(char *)((char *)p0 + 1066) = 0;
    *(int *)((char *)p0 + 1068) = 0;
    *(char *)((char *)p0 + 1072) = 0;
    *(int *)((char *)p0 + 1076) = 0;
    return p0;
}

void func_00407AA0(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (p1 != 0) {
        v0 = 1;
        if (p2 != 0) {
            *(char *)(p0 + 1066) = v0;
            *(int *)(p0 + 1068) = 0x41f00000;
        }
    }
}

extern void func_00407CA0();

void func_00407D60(char *p) { func_00407CA0(p + -64); }

void func_00407D70(char *p) { func_00407CA0(p + -160); }

void func_00407AD0(void) {}

void func_00407C80(void) {}

void func_00407C90(void) {}
