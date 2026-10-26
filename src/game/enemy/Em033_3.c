extern char D_01CAFF0C[];

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

short func_0034B940(char *, char *);

void func_00131700(float *, float *, float *);

void func_00104B80(char *, float *, float *);

static inline unsigned int mt_3DA(void) {
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
    return y;
}

void func_003DAEC0(char *p) {
    void func_003DD4D0(char *);
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short a;
    int i;
    *(float *)(p + 0xEC4) = 40.0f;
    *(unsigned char *)(p + 0xEFD) = 3;
    *(unsigned char *)(p + 0xF06) = 1;
    *(unsigned char *)(p + 5) = 0;
    i = *(unsigned char *)(p + 0xF02);
    a = func_0034B940(((char **)(*(char **)D_01CAFF0C + 0xC))[i] + 0x50, p + 0x50);
    a = (int)((float)a + 6.283185f * ((float)(int)(mt_3DA() % 10 - 5) / 360.0f));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)a / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    v[2] = 15.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_00104B80(p + 0x60, m, v);
    *(short *)(p + 0x90) = a;
    func_003DD4D0(p);
    *(unsigned char *)(p + 0x1E1) = 0;
}

void func_003DADF0(char *p0) {
    void func_003DD4D0();
    *(int *)(p0 + 3780) = 0x42700000;
    *(char *)(p0 + 3837) = 0;
    *(char *)(p0 + 3846) = 1;
    *(char *)(p0 + 5) = 0;
    func_003DD4D0();
    *(char *)(p0 + 481) = 0;
}

void func_003DAE70(char *p0) {
    void func_003DD4D0();
    *(int *)(p0 + 3780) = 0x42f00000;
    *(char *)(p0 + 3837) = 2;
    *(char *)(p0 + 3846) = 1;
    *(char *)(p0 + 5) = 0;
    func_003DD4D0();
    *(char *)(p0 + 481) = 0;
}

int func_003DA920();

int func_003DA9C0();

int func_003DABD0();

int func_003DA8A0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v3 = func_003DA920();
    v1 = (int)v0;
    if (v3 != 0) {
        v3 = func_003DA9C0(v1);
        *(char *)(v0 + 3847) = 0;
        *(char *)(v0 + 3848) = 0;
        *(char *)(v0 + 3849) = 0;
        *(char *)(v0 + 3850) = 0;
        *(char *)(v0 + 3851) = 0;
        *(char *)(v0 + 3852) = 0;
        *(char *)(v0 + 3853) = 0;
    } else {
        tmp0 = *(unsigned char *)(v0 + 3845);
        v2 = (int)v0;
        if (tmp0 == 1) {
            v3 = func_003DABD0(v2);
            *(char *)(v0 + 3845) = 0;
        }
    }
    return v3;
}
