/* Aims at the target selected by +0xBA0/+0xBA4 (VU0 vector difference), then refreshes. */
float func_00132470(char *, float *);

 void func_0030CCD0(char *);

void func_0030CBD0(char *p) {
    float v[4];
    char *a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        a = *(char **)(p + 0xD0);
        if (a) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB00), "r"(*(char **)(((char **)(a + 0x4F4))[*(int *)(p + 0xBA0)] + 0x104) + 0x30) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(((char **)(a + 0x4F4))[*(int *)(p + 0xBA4)] + 0x104) + 0x30) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xB00), "r"(v) : "memory");
        } else {
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = 1.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
        }
        {
            float f = func_00132470(p + 0xB00, v);
            *(float *)(p + 0xE0) = 1.0f;
            *(float *)(p + 0xE4) = 1.0f;
            *(float *)(p + 0xE8) = f;
            *(float *)(p + 0xEC) = 1.0f;
        }
        break;
    case 1:
    case 2:
        break;
    }
    func_0030CCD0(p);
}

extern char D_005ABC40[];

extern char D_005ABC64[];

extern char D_005ABCE4[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

int func_0030C180(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005ABC40;
    *(char **)((char *)p0 + 64) = D_005ABC64;
    *(char **)((char *)p0 + 160) = D_005ABCE4;
    func_002790E0((p0 + 384));
    func_0028C110((p0 + 1920));
    *(int *)((char *)p0 + 2960) = 0;
    *(char *)((char *)p0 + 2969) = 0;
    return p0;
}

int func_0030CBA0(p0) char *p0; {
    int func_001AD140();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 2960);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

void func_0030D8E0();

void func_0030D840(p0, p1) int p0; int p1; {
    func_0030D8E0(0, p0, p1);
}

void func_0030D860(p0, p1) int p0; int p1; {
    func_0030D8E0(1, p0, p1);
}

void func_0030D880(p0, p1) int p0; int p1; {
    func_0030D8E0(2, p0, p1);
}

void func_0030D8A0(p0, p1) int p0; int p1; {
    func_0030D8E0(3, p0, p1);
}

void func_0030D8C0(p0, p1) int p0; int p1; {
    func_0030D8E0(4, p0, p1);
}

void func_0030CB50(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_0030C320();

void func_0030D810(char *p) { func_0030C320(p + -64); }

extern void func_0030C1F0();

void func_0030D820(char *p) { func_0030C1F0(p + -64); }

void func_0030D830(char *p) { func_0030C1F0(p + -160); }
