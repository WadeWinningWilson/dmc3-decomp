void func_001AD140(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00417CE0(char *);

char *func_00207470(int, int, char *);

void func_00417C70(char *p) {
    float m[16];
    func_00417CE0(p);
    UNIT(m);
    *(char **)(p + 0xD0) = func_00207470(3, 0xA0, p + 0x90);
    if (*(char **)(p + 0xD0) == 0) {
        func_001AD140(p);
    } else {
        *(unsigned char *)(*(char **)(p + 0xD0) + 0x3A) = 1;
    }
}

extern char D_005A6F50[];

extern char D_005AB1E0[];

extern char D_005B3220[];

void func_0013D6A0();

void func_00417C60();

char * func_00417FA0(p) char *p; {
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
    *(char * *)(p) = D_005AB1E0;
    *(int *)(p + 76) = -1;
    *(char * *)(p) = D_005B3220;
    func_00417C60(p, 1065353216, 135, -1);
    return p;
}
