void func_001AD140(char *);

char *func_00279290(char *);

extern char D_01CAFF0C[];

char *func_00207470(int, int, char *);

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, char *, int, int, int);

void func_002E3690(char *, int, int, int);

void func_001A2000(char *, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void func_00387970_s(short k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

void func_00387970(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *e;
    int i;
    *(unsigned char *)(p + 5) = 4;
    func_002E3690(p + 0xC00, 0xB, 0xC, 0);
    func_001A2000(func_00279290(p + 0x600), 8);
    func_001A2000(func_00279290(p + 0x600), 9);
    UNIT(m);
    e = func_00207470(3, 0x1AF, (char *)m);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0xCB0;
        *(unsigned char *)(e + 0x9A) = 0;
    }
    for (i = 0; i < *(int *)(p + 0x11B8); i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x1190) != 0) {
            func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x1190));
        }
    }
    if (*(short *)(p + 0x1342) != -1) func_00387970_s(*(short *)(p + 0x1342));
    *(float *)(p + 0xDB0) = 10.0f;
    func_003305E0(D_01DFABA0, 8, 0x3E, p + 0xCE0, 0x21, 0, 0);
}

void func_00387550(char *p) {
    int k = *(unsigned char *)(p + 5);
    if (k == 3 || k == 0) {
        *(char *)(p + 5) = 1;
        *(float *)(p + 0xDB0) = *(float *)(p + 0xDB8);
        *(char *)(p + 0xDD0) = 0;
    }
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AED10[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_003888E0(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005AED10;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 4, 135);
    *(char *)(p + 6208) = 0;
    *(char *)(p + 6402) = 0;
    *(char *)(p + 6403) = -1;
    *(char *)(p + 6400) = 1;
    *(char *)(p + 6401) = 0;
    return p;
}

void func_00387830(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 5);
    v0 = 3;
    if (tmp0 == 2) {
        *(char *)(p0 + 5) = v0;
        *(char *)(p0 + 3536) = 1;
        *(float *)(p0 + 3504) = *(float *)(p0 + 3508);
        *(char *)(p0 + 3533) = 1;
        *(int *)(p0 + 3524) = 0;
        *(int *)(p0 + 3456) = 0;
        *(int *)(p0 + 3460) = 0;
        *(int *)(p0 + 3464) = 0;
    }
}

extern void func_00387390();

void func_00388740(char *p) { func_00387390(p + -64); }

extern void func_00388370();

void func_00388750(char *p) { func_00388370(p + -64); }

extern void func_00388630();

void func_00388760(char *p) { func_00388630(p + -64); }

void func_00388770(char *p) { func_00388630(p + -160); }

extern void func_003885F0();

void func_00388780(char *p) { func_003885F0(p + -208); }

void func_003887B0(char *p) { func_00388630(p + -208); }

void func_003885E0(char *p) { *(char *)(p + 3531) = 0; }

void func_003885D0(char *p0) {
    *(char *)(p0 + 3531) = 1;
}
