extern char *D_01CAFF0C[];

char *func_00207480(int, int, char *, int);

void func_001AD140(char *);

void func_00133890(char *, char *, float *);

void func_00131650(char *, char *);

void func_00408B30(char *);

void func_0034BA60(int, char *, int, int, int);

void func_00408630(char *p) {
    void func_00105230(char *, char *, char *);
    float u[4] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    *(float *)(p + 0x434) = *(float *)(p + 0x434) - *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x434) <= 0.0f)) return;
    *(char **)(p + 0x414) = func_00207480(3, 0x169, 0, 0x10);
    if (*(char **)(p + 0x414) == 0) {
        func_001AD140(p);
        return;
    }
    {
        char *g = D_01CAFF0C[0];
        t[0] = *(float *)(*(char **)(g + 0xC) + 0x50);
        t[1] = 150.0f + *(float *)(*(char **)(g + 0xC) + 0x54);
        t[2] = *(float *)(*(char **)(g + 0xC) + 0x58);
    }
    t[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x420), "r"(t), "r"(p + 0x50) : "memory");
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3D0) : "memory");
    func_00133890(p + 0x3D0, p + 0x420, u);
    func_00105230(p + 0x3D0, p + 0x3D0, p + 0x50);
    {
        char *e = *(char **)(p + 0x414);
        char *f;
        *(char **)(e + 0x90) = p + 0x3D0;
        *(unsigned char *)(e + 0x9A) = 0;
        f = *(char **)(p + 0x414);
        *(unsigned char *)(f + 0x3A) = 1;
    }
    func_00131650(p + 0x420, p + 0x420);
    *(float *)(p + 0x42C) = 1.0f;
    func_00408B30(p);
    *(float *)(p + 0x430) = 360.0f;
    func_0034BA60(0x1D, p + 0x50, *(signed char *)(*(char **)(p + 0x410) + 0x46), 0, 1);
    *(unsigned char *)(p + 0x438) = 0;
    *(float *)(p + 0x43C) = 24.0f;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

int func_003AD2F0(char *);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

extern float D_0056AFB0[];

extern float D_0056AFB4[];

void func_003BA960(char *);

void func_00408A50(char *);

float func_0034C160(float, float, float);

static inline signed char flg408(char *o) {
    signed char f = 0;
    if (o != 0) f = *(signed char *)(o + 8);
    return f;
}

void func_004087D0(char *p) {
    int func_002077F0(int);
    float v[4] __attribute__((aligned(16)));
    char *q;
    float t;
    int x;
    int y;
    func_00206730(p + 0x414);
    func_003BA960(p + 0x410);
    if (*(int *)(p + 0x414) != 0) {
        if ((unsigned char)func_002077F0(*(int *)(p + 0x414)) == 1) {
            *(int *)(p + 0x414) = 0;
            func_001AD140(p);
            return;
        }
    } else {
        func_001AD140(p);
        return;
    }
    if (*(char **)(p + 0x410) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)func_003AD2F0(*(char **)(p + 0x410)) == 1) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x438) == 0) {
        if ((*(float *)(p + 0x43C) -= *(float *)(p + 0x10)) < 0.0f) {
            func_0034BA60(0x1E, p + 0x50, *(signed char *)(*(char **)(p + 0x410) + 0x46), 0, 1);
            *(unsigned char *)(p + 0x438) = 1;
        }
    }
    if (flg408(*(char **)(p + 0x1CC)) & 0x30000) {
        func_00408A50(p);
        return;
    }
    if ((*(float *)(p + 0x430) -= *(float *)(p + 0x10)) < 0.0f) {
        func_00408A50(p);
        return;
    }
    q = *(char **)(p + 0x410);
    y = *(unsigned char *)(q + 0x4E17);
    x = *(unsigned char *)(q + 0x4E18);
    t = func_0034C160(*(float *)(p + 0x418), D_0056AFB4[x * 2 + y * 6], *(float *)(p + 0x10) * D_0056AFB0[x * 2 + y * 6]);
    *(float *)(p + 0x418) = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x420), "f"(t * t) : "t0", "memory");
    *(float *)(p + 0x400) = *(float *)(p + 0x400) + v[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x404) = *(float *)(p + 0x404) + v[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x408) = *(float *)(p + 0x408) + v[2] * *(float *)(p + 0x10);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x3D0) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00408A60(char *p, int a, int b, float *t) {
    void func_00105230(char *, char *, float *);
    float m[16];
    if (a && b) {
        UNIT(m);
        func_00105230((char *)m, (char *)m, t);
        func_00207480(3, 0x31, (char *)m, 0x20);
    }
}

void func_0028C740(char *);

void func_00408AD0(char *p) {
    unsigned char func_002077F0(char *);
    func_00206730(p + 0x414);
    if (*(char **)(p + 0x414) != 0 && func_002077F0(*(char **)(p + 0x414)) == 0) {
        func_001AD140(*(char **)(p + 0x414));
        *(char **)(p + 0x414) = 0;
    }
    func_0028C740(p + 0x150);
}

void func_00408520(p0, p1) char *p0; char *p1; {
    *(float *)(p0 + 80) = *(float *)(p1 + 0);
    *(float *)(p0 + 84) = *(float *)(p1 + 4);
    *(float *)(p0 + 88) = *(float *)(p1 + 8);
    *(int *)(p0 + 92) = 0x3f800000;
}

extern char D_005B2C10[];

extern char D_005B2C34[];

extern char D_005B2CB4[];

int func_00252FA0();

int func_0028C110();

int func_00408550(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B2C10;
    *(char **)((char *)p0 + 64) = D_005B2C34;
    *(char **)((char *)p0 + 160) = D_005B2CB4;
    func_0028C110((p0 + 336));
    *(int *)((char *)p0 + 1040) = 0;
    *(int *)((char *)p0 + 1044) = 0;
    *(int *)((char *)p0 + 1048) = 0;
    *(int *)((char *)p0 + 1072) = 0;
    *(int *)((char *)p0 + 1076) = 0;
    *(char *)((char *)p0 + 1080) = 0;
    *(int *)((char *)p0 + 1084) = 0;
    return p0;
}

extern void func_00408C00();

void func_00408CC0(char *p) { func_00408C00(p + -64); }

void func_00408CD0(char *p) { func_00408C00(p + -160); }

void func_00408AC0(void) {}

void func_00408BE0(void) {}

void func_00408BF0(void) {}
