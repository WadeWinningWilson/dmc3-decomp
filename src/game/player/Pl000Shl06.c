int func_00471DF0(char *p) {
    char *func_00207480(int, int, float *, int);
    char *q;
    *(char **)(p + 0x460) = func_00207480(3, 0xD3, 0, 8);
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_00253110(char *, char *, int, float);

int func_002536B0(char *, char *);

short func_00131D10(float, float);

void func_00471B40(char *p) {
    void func_001AD140(char *);
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        func_001AD140(p);
        return;
    }
    func_00253110(p, p + 0x490, 3, *(float *)(p + 0x10));
    switch (func_002536B0(p, p + 0x490)) {
    case 0:
        break;
    case 1:
        break;
    case -1:
        func_001AD140(p);
        return;
    }
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
}

void func_00104B80(char *, float *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131700(float *, float *, float *);

extern float D_0057B9A0[];

void func_00472080(char *p) {
    float m[16];
    float r[4];
    UNIT(m);
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    func_00104B80(p + 0x480, m, D_0057B9A0 + *(int *)(p + 0x46C) * 4);
    *(float *)(p + 0x480) = *(float *)(p + 0x480) + *(float *)(p + 0x50);
    *(float *)(p + 0x484) = *(float *)(p + 0x484) + *(float *)(p + 0x54);
    *(float *)(p + 0x488) = *(float *)(p + 0x488) + *(float *)(p + 0x58);
    *(float *)(p + 0x48C) = 1.0f;
}

void func_00131650(char *, char *);

void func_00131D70(char *, char *);

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

extern float D_0057B8F0[];

void func_00471F60(char *p, unsigned char k) {
    float m[16];
    float r[4];
    if (k == 0) {
        UNIT(m);
        r[0] = 0.0f;
        r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        r[2] = 0.0f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        func_00104B80(p + 0x4A0, m, D_0057B8F0 + *(int *)(p + 0x46C) * 4);
        *(float *)(p + 0xF0) = *(float *)(p + 0x4A0);
        *(float *)(p + 0xF4) = *(float *)(p + 0x4A4);
        *(float *)(p + 0xF8) = *(float *)(p + 0x4A8);
        *(float *)(p + 0xFC) = 1.0f;
    } else {
        VSUBR54(p + 0xF0, p + 0x490, p + 0x50);
        func_00131650(p + 0xF0, p + 0xF0);
    }
    func_00131D70(p + 0x80, p + 0xF0);
}

extern char D_01DFABA0[];

void func_002075D0(int, int, char *, int, int);

void func_00330B50(char *, int, char *, int);

void func_00471F10(char *p) {
    func_002075D0(3, 0x203, p + 0x150, 1, 8);
    func_00330B50(D_01DFABA0, 9, p + 0x50, 7);
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern V4 D_0057BAB0;

void func_00133890(char *, char *, V4 *);

void func_00471C30(char *p) {
    V4 t;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x150) : "memory");
    t = D_0057BAB0;
    func_00133890(p + 0x150, p + 0xF0, &t);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
}

int func_00471E60(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    char *q;
    if (*(char **)(p + 0x460) != 0) {
        func_001AD140(*(char **)(p + 0x460));
    }
    if (*(unsigned char *)(p + 0x4B1) == 0) {
        *(char **)(p + 0x460) = func_00207480(3, 0x200, 0, 8);
    } else {
        *(char **)(p + 0x460) = func_00207480(1, 0x55F, 0, 8);
    }
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        q[0x9A] = 0;
        *(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C790(char *, int);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern char *D_005BC2E0;

void func_00471CB0(char *p) {
    func_0028C790(p + 0x190, 0);
    func_0028C790(p + 0x190, 1);
    if (*(unsigned char *)(p + 0x4B1) == 0) {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_005BC2E0 + 0x6C0, p, 0);
    } else {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_005BC2E0 + 0xCC0, p, 0);
    }
    func_0028C8E0(p + 0x190, 0);
    func_0028C910(p + 0x190);
    *(int *)(p + 0x268) = 0x30504;
    *(unsigned char *)(p + 0x3B0) = 4;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 1;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 0;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(float *)(p + 0x3D0) = 0.0f;
    *(float *)(p + 0x3D4) = 0.0f;
    *(float *)(p + 0x3D8) = 0.0f;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 5.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(float *)(p + 0x420) = 0.0f;
    *(float *)(p + 0x424) = 0.0f;
    *(float *)(p + 0x428) = 0.0f;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 20.0f;
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
}

void func_002DFFD0(char *, char *, int, char *, int, float, float, float, float);

void func_00472170(char *p, char *q, int c, float x, float y, float z) {
    func_002DFFD0(*(char **)(p + 0x464), q, c, q, 0, x, y, z, *(float *)(q + 0x28));
}

int func_00206730();

int func_00471BF0(p0) int p0; {
    int func_001AD140();
    int v0;
    int v1;
    v1 = func_00206730((p0 + 1120));
    v0 = *(int *)((char *)p0 + 1120);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_00471680();

void func_00472270(char *p) { func_00471680(p + -64); }

extern void func_00472190();

void func_00472290(char *p) { func_00472190(p + -64); }

extern void func_004721E0();

void func_004722A0(char *p) { func_004721E0(p + -64); }

void func_004722B0(char *p) { func_004721E0(p + -160); }

void func_004721C0(void) {}

void func_004721D0(void) {}
