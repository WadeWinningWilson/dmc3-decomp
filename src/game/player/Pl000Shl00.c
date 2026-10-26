extern int D_005BE09C;

void func_00104B80(float *, char *, float *);

float func_002E7630(char *);

float func_002E7660(char *);

#define FTOI0(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tvftoi0.xyzw $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_002E76D0(char *p, float *v) {
    float a[4];
    float c[4];
    int out[4];
    float inv;
    float b;
    func_00104B80(a, (char *)D_005BE09C + 0x140, v);
    if (a[3] < 0.0f) {
        return 0xFF;
    }
    inv = 1.0f / a[3];
    b = func_002E7630(p);
    b = b + inv * func_002E7660(p);
    if (b < 0.0f) {
        b = 0.0f;
    }
    if (!(b <= 255.0f)) {
        b = 255.0f;
    }
    c[3] = b;
    FTOI0(out, c);
    return out[3];
}

void func_001AD140(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

extern char D_01CAFF0C[];

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

short func_00131D10(float, float);

char *func_00207470(int, int, char *);

extern char *D_005BC2E0;

static inline float *mtx2E6(char *e) { return (float *)(e + 0x110); }

void func_002E6E60(char *p) {
    float v70[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int k;
    int i;
    char *e;
    char *t;
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(float *)(p + 0x170) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3C0), "r"(p + 0x160) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x3D0), "r"(p + 0x150) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x150) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(v70), "r"(p + 0x160), "r"(p + 0x150) : "memory");
        *(short *)(p + 0x90) = func_00131D10(v70[0], v70[2]);
        *(unsigned char *)(p + 0x3A0) = 5;
        *(unsigned char *)(p + 0x3A1) = 0;
        *(short *)(p + 0x3A2) = 0;
        *(unsigned char *)(p + 0x3B0) = 1;
        *(unsigned char *)(p + 0x400) = 0;
        if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x28A7) != 0) *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
        switch (*(unsigned char *)(p + 0x401)) {
        case 0: k = 0; break;
        case 1: k = 1; break;
        case 2: k = 2; break;
        case 3: k = 3; break;
        case 4: k = 4; break;
        case 5:
            k = 5;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        case 6: k = 6; break;
        case 7:
            k = 7;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        case 8:
            k = 7;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        case 9:
            k = 7;
            *(unsigned char *)(p + 0x400) = *(unsigned char *)(p + 0x400) | 1;
            break;
        }
        t = D_005BC2E0 + k * 64;
        *(signed char *)(p + 0x40C) = *(signed char *)(t + 0x0);
        *(signed char *)(p + 0x40D) = *(signed char *)(t + 0x1);
        *(signed char *)(p + 0x40E) = *(signed char *)(t + 0x2);
        *(float *)(p + 0x410) = *(float *)(t + 0x4);
        *(float *)(p + 0x414) = *(float *)(t + 0x8);
        *(float *)(p + 0x418) = *(float *)(t + 0xC);
        *(float *)(p + 0x41C) = *(float *)(t + 0x10);
        *(float *)(p + 0x420) = *(float *)(t + 0x14);
        *(signed char *)(p + 0x424) = *(signed char *)(t + 0x18);
        *(float *)(p + 0x428) = *(float *)(t + 0x1C);
        *(signed char *)(p + 0x42C) = *(signed char *)(t + 0x20);
        *(float *)(p + 0x430) = *(float *)(t + 0x24);
        *(float *)(p + 0x434) = *(float *)(t + 0x28);
        *(float *)(p + 0x438) = *(float *)(t + 0x2C);
        *(unsigned char *)(p + 0x43C) = *(unsigned char *)(t + 0x30);
        *(int *)(p + 0x440) = *(int *)(t + 0x34);
        *(float *)(p + 0x444) = *(float *)(t + 0x38);
        *(signed char *)(p + 0x448) = *(signed char *)(t + 0x3C);
        *(signed char *)(p + 0x449) = *(signed char *)(t + 0x3D);
        *(signed char *)(p + 0x44A) = *(signed char *)(t + 0x3E);
        switch (*(unsigned char *)(p + 0x408)) {
        case 0:
            break;
        case 1:
            *(float *)(p + 0x410) = *(float *)(p + 0x410) * 1.2f;
            break;
        case 2:
            *(float *)(p + 0x410) = *(float *)(p + 0x410) * 1.5f;
            break;
        }
        func_0028C200(p + 0x180, p + 0x3A0, p + 0x3B0, 1, p + 0x40C, p, 0);
        *(unsigned char *)(p + 0x183) = 0;
        *(int *)(p + 0x25C) = 1;
        *(int *)(p + 0x258) = 0x30700;
        func_0028C8E0(p + 0x180, 0);
        func_0028C910(p + 0x180);
        func_0028C3A0(p + 0x180, 0, -1, 0);
        func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
        *(float *)(p + 0x170) = *(float *)(p + 0x170) - *(float *)(p + 0x10);
        break;
    default:
    *(float *)(p + 0x170) = *(float *)(p + 0x170) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x170) < 0.0f) {
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        for (i = 0; i < 16; i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x1FC);
            if (e != 0 && **(unsigned char **)(e + 0x104) == 1 && (*(int *)(e + 8) & 0x30000)) {
                __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
                m[12] = mtx2E6(e)[4];
                m[13] = mtx2E6(e)[5];
                m[14] = mtx2E6(e)[6];
                if (!*(unsigned char *)(p + 0x400)) func_00207470(3, 0xA, (char *)m);
                else func_00207470(3, 0x32, (char *)m);
            }
        }
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
    }
        break;
    }
}

void func_002E7510(char *, int, int, int, float, float, float, float);

void func_002E74D0(char *p) {
    func_002E7510(p, 0, 0, 0, 0.0f, 255.0f, 1000.0f, 10000.0f);
}

void func_002E7590(char *o) {
    *(float *)(o + 0x20) = 255.0f;
    *(float *)(o + 0x2C) = ((*(float *)(o + 4) + *(float *)(o + 8)) + (*(float *)(o + 4) - *(float *)(o + 8)) * (*(float *)(o + 0x10) + *(float *)(o + 0xC)) / (*(float *)(o + 0x10) - *(float *)(o + 0xC))) / 2.0f;
    *(float *)(o + 0x3C) = *(float *)(o + 0x10) * *(float *)(o + 0xC) * (*(float *)(o + 8) - *(float *)(o + 4)) / (*(float *)(o + 0x10) - *(float *)(o + 0xC));
    *(long long *)(o + 0x40) = (int)(*(unsigned char *)(o + 0x14) + (*(unsigned char *)(o + 0x18) << 8) + (*(unsigned char *)(o + 0x1C) << 16));
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_002E6BF0(char *);

char *func_002E6CE0(char *p0, float *p1, float *p2, char p3, char p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x450, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_002E6BF0(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x150), "r"(p1) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x160), "r"(p2) : "memory");
        *(char *)(ret + 0x401) = p3;
        *(char **)(ret + 0x404) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
        *(char *)(ret + 0x408) = p4;
    }
    return ret;
}

extern void func_002E72B0();

void func_002E7490(char *p) { func_002E72B0(p + -64); }

extern void func_002E7440();

void func_002E74A0(char *p) { func_002E7440(p + -64); }

extern void func_002E6C50();

void func_002E74B0(char *p) { func_002E6C50(p + -64); }

void func_002E74C0(char *p) { func_002E6C50(p + -160); }

void func_002E7470(void) {}

void func_002E7480(void) {}
