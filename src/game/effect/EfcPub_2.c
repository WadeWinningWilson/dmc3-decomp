extern char D_005A6F50[];

extern char D_005AB530[];

extern char D_005AC760[];

void func_0013D6A0(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

char *func_0032D5A0(char *p) {
    int i;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005AB530;
    UNIT(p + 0x40);
    *(int *)(p + 0x80) = 0;
    for (i = 0; i < 3; i++) {
        ((int *)(p + 0x84))[i] = 0;
    }
    *(int *)(p + 0x90) = 0;
    *(unsigned char *)(p + 0x94) = 0;
    *(char **)p = D_005AC760;
    func_0013D6A0(p + 0xCC);
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0xA0) = 0;
    *(unsigned char *)(p + 0xA1) = 1;
    *(unsigned char *)(p + 0xA2) = 0;
    *(unsigned char *)(p + 0xA3) = 0;
    *(unsigned char *)(p + 0xA4) = 0;
    *(unsigned char *)(p + 0xA5) = 0;
    *(unsigned char *)(p + 0xA6) = 0;
    *(unsigned char *)(p + 0xA7) = 0;
    *(unsigned char *)(p + 0xA8) = 0;
    *(signed char *)(p + 0xA9) = -1;
    *(int *)(p + 0xAC) = 0;
    *(int *)(p + 0xB0) = 0;
    *(int *)(p + 0xB4) = 0;
    *(int *)(p + 0xB8) = 0;
    *(int *)(p + 0xBC) = 0;
    *(int *)(p + 0xC0) = 0;
    *(int *)(p + 0xC4) = 0;
    *(float *)(p + 0xC8) = 1.0f;
    return p;
}

void func_0032D410();

void func_0032D3F0(p0, p1, p2) int p0; int p1; int p2; {
    func_0032D410(p0, 0, p1, p2);
}

void func_0032D6E0(char *p0, int p1, float f0) {
    *(char *)(p0 + 164) = p1;
    if (*(unsigned char *)(p0 + 164) == 1) {
        *(float *)(p0 + 196) = f0;
    }
}

void func_0032D3E0(int p0, int p1, int p2) {
    func_0032D410(p0, p1, 0, p2);
}
