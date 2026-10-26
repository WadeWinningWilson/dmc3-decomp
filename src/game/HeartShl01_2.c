void func_001AD140(char *);

void func_00253110(char *, char *, int, float);

int func_002536B0(char *, char *);

void func_004E3240(char *p) {
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        func_001AD140(p);
        return;
    }
    func_00253110(p, p + 0x660, 3, *(float *)(p + 0x10));
    switch (func_002536B0(p, p + 0x660)) {
    case 0:
        break;
    case 1:
        break;
    case -1:
        func_001AD140(p);
        return;
    }
}

void func_002530C0(char *, char *);

extern char D_0058B5F0[];

void func_004E3160(char *p) {
    void func_004E3550(char *, int);
    *(float *)(p + 0x63C) = *(float *)(p + 0x63C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x63C) < 0.0f) {
        func_004E3550(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0058B5F0);
        *(unsigned char *)(p + 0x680) = 1;
        *(unsigned char *)(p + 5) = 2;
    }
    if (*(unsigned char *)(p + 0x680) == 1) {
        func_00253110(p, p + 0x660, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x660)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x680) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x680) = 0;
            break;
        }
    }
}

void func_004E3070(char *p) {
    void func_004E3550(char *, int);
    extern char D_0058B5D0[];
    *(unsigned char *)(p + 0x680) = 1;
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        *(unsigned char *)(p + 0x680) = 0;
    }
    if (*(unsigned char *)(p + 0x680) == 1) {
        func_00253110(p, p + 0x650, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x650)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x680) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x680) = 0;
            break;
        }
    }
    if (*(unsigned char *)(p + 0x680) == 0) {
        func_004E3550(p, 0);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0058B5D0);
        *(unsigned char *)(p + 0x680) = 1;
        *(unsigned char *)(p + 5) = 1;
    }
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

void func_00133890(char *, char *, V4 *);

void func_004E3320(char *p) {
    extern V4 D_0058B610;
    V4 t;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x150) : "memory");
    t = D_0058B610;
    func_00133890(p + 0x150, p + 0xF0, &t);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
}

void func_002075D0();

void func_004E3530(p0) int p0; {
    func_002075D0(3, 29, (p0 + 336), 1, 16);
}
