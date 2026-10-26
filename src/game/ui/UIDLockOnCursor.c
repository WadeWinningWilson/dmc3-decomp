extern char *D_005BE09C;

float func_00132470(char *, float *);

extern char D_01CAF2B0[];

void func_001ECB80(char *, int *, float *);

int func_0034D2D0(char *p, float *pos, char *o) {
    void func_00131700(char *, char *, float *);
    void func_00105230(char *, char *, float *);
    void func_001318E0(char *, char *, float *);
    float v[4] __attribute__((aligned(16)));
    int scr[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d;
    float s;
    float y;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(pos) : "memory");
    v[3] = 1.0f;
    func_001ECB80(D_01CAF2B0, scr, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(c), "r"(*(char **)(D_005BE09C + 0x23C) + 0x70) : "memory");
    d = func_00132470((char *)c, pos);
    if (d < 300.0f) {
        s = 1.0f;
    } else if (!(d <= 1000.0f)) {
        s = 0.5f;
    } else {
        s = (1.0f + (700.0f - (d - 300.0f)) / 700.0f) / 2.0f;
    }
    *(float *)(o + 0x30) = s;
    *(float *)(o + 0x34) = s;
    *(float *)(o + 0x38) = s;
    *(float *)(o + 0x3C) = 1.0f;
    if (!((float)scr[2] < 0.0f)) {
        y = -1.0f * (1.7142857f * ((float)scr[1] - 2048.0f));
        *(float *)(o + 0x10) = (float)scr[0] - 2048.0f;
        *(float *)(o + 0x14) = y;
        *(float *)(o + 0x18) = 0.0f;
        *(float *)(o + 0x1C) = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(o + 0x40) : "memory");
        func_00131700(o + 0x40, o + 0x40, (float *)(o + 0x20));
        func_00105230(o + 0x40, o + 0x40, (float *)(o + 0x10));
        func_001318E0(o + 0x40, o + 0x40, (float *)(o + 0x30));
        return 1;
    }
    return 0;
}

extern char D_005BE098[4];

void func_00195E20(char *, char *);

extern char D_01CAFF0C[];

extern char D_006663C0[];

extern unsigned char D_01CAFF40[];

unsigned short func_001AE310(char *, int);

void func_0034CC10(char *);

void func_0034CF20(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void v4set(char *v, float x, float y, float z, float w) {
    *(float *)(v + 0) = x;
    *(float *)(v + 4) = y;
    *(float *)(v + 8) = z;
    *(float *)(v + 0xC) = w;
}

void func_0034C9B0(char *p) {
    void func_00131700(char *, char *, char *);
    void func_00105230(char *, char *, char *);
    void func_001318E0(char *, char *, char *);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 0x660) = 0;
        *(float *)(p + 0x670) = 0.0f;
        *(float *)(p + 0x674) = 0.0f;
        *(float *)(p + 0x678) = 0.0f;
        *(float *)(p + 0x67C) = 1.0f;
        *(float *)(p + 0x680) = 0.0f;
        *(float *)(p + 0x684) = 0.0f;
        *(float *)(p + 0x688) = 0.0f;
        *(float *)(p + 0x68C) = 1.0f;
        *(float *)(p + 0x690) = 1.0f;
        *(float *)(p + 0x694) = 1.0f;
        *(float *)(p + 0x698) = 1.0f;
        *(float *)(p + 0x69C) = 1.0f;
        UNIT(p + 0x6A0);
        func_00131700(p + 0x6A0, p + 0x6A0, p + 0x680);
        func_00105230(p + 0x6A0, p + 0x6A0, p + 0x670);
        func_001318E0(p + 0x6A0, p + 0x6A0, p + 0x690);
        *(unsigned char *)(p + 0xD00) = 0;
        v4set(p + 0xD10, 0.0f, 0.0f, 0.0f, 1.0f);
        v4set(p + 0xD20, 0.0f, 0.0f, 0.0f, 1.0f);
        v4set(p + 0xD30, 1.0f, 1.0f, 1.0f, 1.0f);
        UNIT(p + 0xD40);
        func_00131700(p + 0xD40, p + 0xD40, p + 0xD20);
        func_00105230(p + 0xD40, p + 0xD40, p + 0xD10);
        func_001318E0(p + 0xD40, p + 0xD40, p + 0xD30);
        *(int *)(p + 0x640) = 0;
        *(unsigned char *)(p + 4) = 1;
    case 1:
        if (func_001AE310(D_006663C0, 0) & 0x200) {
            if (*(unsigned char *)(p + 0xDF8) == 0) {
                *(float *)(p + 0xDFC) = *(float *)(p + 0xDFC) - 1.0f;
                if (*(float *)(p + 0xDFC) < 0.0f) {
                    *(unsigned char *)(p + 0xDF8) = 1;
                    {
                        unsigned char r;
                        if (D_01CAFF40[0] == 1) r = 0; else r = 1;
                        D_01CAFF40[0] = r;
                    }
                }
            }
        } else {
            *(unsigned char *)(p + 0xDF8) = 0;
            *(float *)(p + 0xDFC) = 180.0f;
        }
        func_0034CC10(p);
        func_0034CF20(p);
        if (*(unsigned char *)(*(char **)D_01CAFF0C + 9) == 0) {
            func_00195E20(D_005BE098, p);
        }
        break;
    }
}

void func_0034D4D0(void) {}

extern char D_005A6F50[];

extern char D_005AD330[];

void func_0013D6A0();

void func_002790E0();

int func_0034C4D0(char *p0, int p1, int p2, int p3) {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = p0;
    *(char **)(p0 + 0) = D_005A6F50;
    func_0013D6A0((v0 + 36));
    *(int *)(v0 + 32) = 0;
    *(int *)(v0 + 28) = 0;
    *(char *)(v0 + 7) = 0;
    *(char *)(v0 + 6) = 0;
    *(char *)(v0 + 5) = 0;
    *(char *)(v0 + 4) = 0;
    *(char *)(v0 + 24) = 0;
    *(int *)(v0 + 8) = 0;
    *(char *)(v0 + 52) = -1;
    *(char *)(v0 + 53) = 0;
    *(char *)(v0 + 54) = 0;
    *(int *)(v0 + 12) = 135;
    *(int *)(v0 + 16) = 0x3f800000;
    *(int *)(v0 + 20) = 0x3f800000;
    *(char **)(v0 + 0) = D_005AD330;
    func_002790E0((v0 + 64), 135, -1);
    *(char *)(v0 + 1632) = 0;
    func_002790E0((v0 + 1792));
    *(char *)(v0 + 3328) = 0;
    v1 = 0;
    *(int *)(v0 + 1600) = 0;
    v3 = v0;
    v2 = 0x3f800000;
    do {
        *(int *)(v3 + 3456) = 0;
        *(int *)(v3 + 3496) = 0;
        v1 = (v1 + 5);
        *(int *)(v3 + 3536) = v2;
        *(int *)(v3 + 3460) = 0;
        *(int *)(v3 + 3500) = 0;
        *(int *)(v3 + 3540) = v2;
        *(int *)(v3 + 3464) = 0;
        *(int *)(v3 + 3504) = 0;
        *(int *)(v3 + 3544) = v2;
        *(int *)(v3 + 3468) = 0;
        *(int *)(v3 + 3508) = 0;
        *(int *)(v3 + 3548) = v2;
        *(int *)(v3 + 3472) = 0;
        *(int *)(v3 + 3512) = 0;
        *(int *)(v3 + 3552) = v2;
        v3 = (v3 + 20);
    } while ((v1 < 10));
    *(char *)(v0 + 3576) = 0;
    *(int *)(v0 + 3580) = 0x43340000;
    return (int)v0;
}
