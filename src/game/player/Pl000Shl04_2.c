void func_0028C5C0(char *, int, float);

void func_00132580(float *, char *, float);

extern char D_01DFABA0[];

char *func_00207470(int, int, float *);

void func_00330B50(char *, int, char *, int);

void func_003FBDA0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v20[4] __attribute__((aligned(16)));
    char *a;
    char *b;
    int v;
    *(float *)(p + 0x168) = *(float *)(p + 0x168) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x168) < 0.0f) {
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x154) = 0;
        *(unsigned char *)(p + 0x155) = 0;
        switch (*(unsigned char *)(p + 0x150)) {
        case 0:
            switch (*(unsigned char *)(p + 0x151)) {
            case 0:
                *(unsigned char *)(p + 0x155) = 1;
                break;
            case 1:
                *(unsigned char *)(p + 0x155) = 3;
                break;
            case 2:
                *(unsigned char *)(p + 0x155) = 7;
                break;
            }
            break;
        case 1: case 5:
            *(signed char *)(p + 0x155) = -1;
            break;
        case 2: case 3: case 4: case 6:
            break;
        }
    case 1:
        a = *(char **)(p + 0x25C);
        b = *(char **)(p + 0x260);
        if (a == 0) break;
        if (b == 0) break;
        v = *(int *)(a + 8);
        *(int *)(a + 8) = 0;
        *(int *)(b + 8) = 0;
        if (v & 0x30000) {
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&m[12]), "r"(p + 0x50) : "memory");
            m[15] = 1.0f;
            func_00207470(3, 0x21D, m);
            func_00330B50(D_01DFABA0, 9, p + 0x50, 8);
        } else {
            func_00132580(v20, p + 0x60, *(float *)(p + 0x10));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v20) : "memory");
            *(float *)(p + 0x1D0) = *(float *)(p + 0x50);
            *(float *)(p + 0x1D4) = *(float *)(p + 0x54);
            *(float *)(p + 0x1D8) = *(float *)(p + 0x58);
            *(float *)(p + 0x1DC) = 1.0f;
            func_0028C5C0(p + 0x1E0, 0, *(float *)(p + 0x10));
        }
        break;
    }
}

extern char D_005B2010[];

extern char D_005B2034[];

extern char D_005B20B4[];

int func_00252FA0();

int func_0028C110();

int func_003FB700(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B2010;
    *(char **)((char *)p0 + 64) = D_005B2034;
    *(char **)((char *)p0 + 160) = D_005B20B4;
    func_0028C110((p0 + 480));
    *(char *)((char *)p0 + 69) = 2;
    *(short *)((char *)p0 + 144) = 0;
    *(int *)((char *)p0 + 372) = 0;
    *(int *)((char *)p0 + 376) = 0;
    *(char *)((char *)p0 + 338) = 0;
    *(int *)((char *)p0 + 372) = 0;
    *(int *)((char *)p0 + 376) = 0;
    return p0;
}
