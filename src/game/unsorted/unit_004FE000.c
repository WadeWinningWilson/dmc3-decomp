extern char D_01CAFF0C[];

int func_0023AA80(int);

void func_004FE770(char *);

void func_004FE780(char *);

void func_004FE790(char *);

void func_004FE7A0(char *);

void func_004FE7B0(char *);

void func_004FE7C0(char *);

void func_004FE7D0(char *);

void func_004FE120(char *);

void func_00317740(char *, int);

void func_004FE000(char *p) {
    *(unsigned char *)(p + 0x2B8) = func_0023AA80(*(int *)D_01CAFF0C);
    switch (*(unsigned char *)(p + 0x2B8)) {
    case 0:
        func_004FE770(p);
        break;
    case 1:
        func_004FE780(p);
        break;
    case 2:
        func_004FE790(p);
        break;
    case 3:
        func_004FE7A0(p);
        break;
    case 6:
        func_004FE7B0(p);
        break;
    case 0x64:
        func_004FE7C0(p);
        break;
    case 0x65:
        func_004FE7D0(p);
        break;
    default:
        *(unsigned char *)(p + 0x2B8) = 0xFF;
        func_004FE120(p);
        break;
    }
    func_00317740(p, 0);
    *(unsigned char *)(p + 0x2B9) = *(unsigned char *)(p + 0x2B8);
}

extern signed char D_005BE124;

extern char *D_005BE190[];

extern char D_0058BE90[];

int func_00316FC0(char *);

void func_00316F30(char *, float *, int);

void func_004FE640(char *p, unsigned char k) {
    float v[4] __attribute__((aligned(16)));
    char *g = D_005BE190[0];
    if ((unsigned char)func_00316FC0(p) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xC0), "r"(g + 0x50) : "memory");
    }
    func_00316F30(p, v, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x190), "r"(v) : "memory");
    if ((signed char)D_005BE124 == 1) *(float *)(p + 0x240) = 60.0f;
    if (!(*(float *)(p + 0x240) <= 0.0f)) {
        *(float *)(p + 0x240) = *(float *)(p + 0x240) - 1.0f;
        *(float *)(p + 0x228) = 0.999f;
        *(float *)(p + 0x22C) = 0.999f;
    } else {
        *(float *)(p + 0x228) = 0.98f;
        *(float *)(p + 0x22C) = 0.98f;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1A0), "r"(D_0058BE90 + k * 0x10) : "memory");
    if ((unsigned char)*(unsigned char *)(p + 0x2B9) == 0xFF) {
        *(float *)(p + 0x228) = 0.0f;
        *(float *)(p + 0x22C) = 0.0f;
        *(float *)(p + 0x230) = 0.0f;
        *(float *)(p + 0x234) = 0.0f;
    }
}
