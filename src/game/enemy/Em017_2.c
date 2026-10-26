void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

void func_001318E0(char *, char *, char *);

extern int D_01CAFF38[];

void func_003FA7E0(char *);

void func_003FAF40(char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void v4set(char *v, float x, float y, float z, float w) {
    *(float *)(v + 0) = x;
    *(float *)(v + 4) = y;
    *(float *)(v + 8) = z;
    *(float *)(v + 0xC) = w;
}

static inline void flt(char *q, float v) {
    *(float *)q = v;
}

void func_003F5980(char *p) {
    unsigned char i;
    QCOPY(p + 0x300, p + 0x50);
    QCOPY(p + 0x310, p + 0x50);
    *(unsigned char *)(p + 0x320) = 0;
    v4set(p + 0x330, 0.0f, 0.0f, 0.0f, 1.0f);
    v4set(p + 0x340, 0.0f, 0.0f, 0.0f, 1.0f);
    v4set(p + 0x350, 1.0f, 1.0f, 1.0f, 1.0f);
    UNIT(p + 0x360);
    func_00131700(p + 0x360, p + 0x360, p + 0x340);
    func_00105230(p + 0x360, p + 0x360, p + 0x330);
    func_001318E0(p + 0x360, p + 0x360, p + 0x350);
    *(int *)(p + 0x3A0) = 0;
    flt(p + 0x3A4, 0.0f);
    *(unsigned char *)(p + 0x3A8) = 0;
    *(unsigned char *)(p + 0x3A9) = 0;
    *(unsigned char *)(p + 0x3AA) = 0xFF;
    *(unsigned char *)(p + 0x3AB) = 0;
    flt(p + 0x3AC, 300.0f);
    flt(p + 0x3B0, 1.0f);
    flt(p + 0x3B4, 0.0f);
    flt(p + 0x3B8, 0.0f);
    *(int *)(p + 0x3BC) = 0;
    flt(p + 0x3C0, 1.0f);
    flt(p + 0x3C4, 300.0f);
    flt(p + 0x3C8, 0.0f);
    UNIT(p + 0x3D0);
    UNIT(p + 0x410);
    for (i = 0; i < 4; i++) {
        ((int *)(p + 0x450))[i] = 0;
    }
    *(int *)(p + 0x460) = 0;
    *(int *)(p + 0x464) = 0;
    *(int *)(p + 0x468) = 0;
    *(int *)(p + 0x46C) = 0;
    func_003FA7E0(p);
    *(int *)(p + 0x470) = 0;
    *(int *)(p + 0x474) = 0;
    *(int *)(p + 0x478) = 0;
    *(float *)(p + 0x47C) = 128.0f;
    if (D_01CAFF38[0] == 0x191) {
        func_003FAF40(p);
    }
    *(short *)(p + 0x480) = 0;
    *(short *)(p + 0x482) = 0;
    *(short *)(p + 0x484) = 0;
    *(short *)(p + 0x486) = 0;
    *(unsigned char *)(p + 0x488) = 0;
    *(unsigned char *)(p + 0x489) = 0;
    *(unsigned char *)(p + 0x48A) = 0;
    *(unsigned char *)(p + 0x48B) = 0;
    *(unsigned char *)(p + 0x48C) = 0;
    *(unsigned char *)(p + 0x48D) = 0;
    *(unsigned char *)(p + 0x48E) = 0;
    *(unsigned char *)(p + 0x48F) = 0;
    *(unsigned char *)(p + 0x490) = 0;
    *(unsigned char *)(p + 0x491) = 0;
    *(unsigned char *)(p + 0x492) = 0;
    *(unsigned char *)(p + 0x493) = 0;
    *(unsigned char *)(p + 0x494) = 0;
    *(unsigned char *)(p + 0x495) = 9;
    *(unsigned char *)(p + 0x496) = 0;
    *(unsigned char *)(p + 0x497) = 0x14;
    *(unsigned char *)(p + 0x498) = 0;
    *(unsigned char *)(p + 0x499) = 0;
}

void func_003FB560(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_0024DA80(char *, int, int);

void func_003FA440(char *p, int c) {
    if (c == -1) {
        c = *(unsigned char *)(p + 5);
    }
    if (*(unsigned char *)(p + 0x3AA) != c) {
        func_0024DA80(p + 0xB60, 0, c);
        *(unsigned char *)(p + 0x3AA) = c;
    }
}

int func_001AD140();

int func_003F5480();

int func_003F5430(p0) char *p0; {
    int v0;
    int v1;
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 8);
    v1 = func_003F5480();
    v0 = (int)p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

void func_003FA3F0(p0, p1) char *p0; int p1; {
    if (*(float *)(p0 + 3748) > 0.0f) {
        if (*(unsigned char *)(p0 + 5) != p1) {
            *(int *)(p0 + 272) = (*(int *)(p0 + 272) & 0xbfffffff);
            *(char *)(p0 + 5) = p1;
            *(char *)(p0 + 6) = 0;
            *(char *)(p0 + 7) = 0;
        }
    }
}

char *func_00207470();

void func_003FA550(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0) {
    char *v0;
    float v1;
    char *v2;
    v0 = (char *)p0;
    v1 = f0;
    v2 = func_00207470(0, 44, 0);
    if (v2 != 0) {
        *(char **)(v2 + 144) = (v0 + 864);
        *(char *)(v2 + 154) = 0;
        *(char *)(v2 + 58) = 1;
    }
    *(float *)(v0 + 3968) = v1;
    *(char *)(v0 + 3900) = 1;
}

extern void func_003F7DF0();

void func_003FB5D0(char *p) { func_003F7DF0(p + -64); }

extern void func_003FB410();

void func_003FB640(char *p) { func_003FB410(p + -64); }

void func_003FB650(char *p) { func_003FB410(p + -160); }

void func_003FB660(char *p) { func_003FB410(p + -208); }

extern void func_003F7D30();

void func_003FB680(char *p) { func_003F7D30(p + -304); }

extern void func_003F7BE0();

void func_003FB690(char *p) { func_003F7BE0(p + -304); }

void func_003FB6E0(char *p) { func_003FB410(p + -304); }

void func_003FB6F0(char *p) { func_003FB410(p + -464); }

void func_003F7DE0(void) {}

void func_003F7E50(void) {}

void func_003F7E60(void) {}

float func_003F7EE0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 968) = *(float *)(p1 + 44);
    return t0;
}

float func_003FB3F0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 940);
    *(float *)(p1 + 0) = *(float *)(p0 + 940);
    return t0;
}

float func_003FB400(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 3748);
    *(float *)(p1 + 0) = *(float *)(p0 + 3748);
    return t0;
}
