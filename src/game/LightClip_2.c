extern char D_01DF5D20[];

float func_001F9C40(char *, int);

extern int D_01CAFF14[];

int func_00277EF0(char *, float);

void func_00278060(char *, char *);

float func_00133BD0(float);

void func_00277E70(char *);

static inline void key_pair(char *p, char *a, char *b) {
    float ax, ay, az, bx, by, bz;
    ax = *(float *)(a + 0);
    ay = *(float *)(a + 4);
    az = *(float *)(a + 8);
    bx = *(float *)(b + 0);
    by = *(float *)(b + 4);
    bz = *(float *)(b + 8);
    *(float *)(p + 0x50) = ax;
    *(float *)(p + 0x54) = ay;
    *(float *)(p + 0x58) = az;
    *(float *)(p + 0x5C) = func_00133BD0(*(float *)(a + 0xC));
    *(float *)(p + 0x60) = func_00133BD0(*(float *)(a + 0x10));
    *(unsigned short *)(p + 0x64) = *(unsigned short *)(a + 0x14);
    *(unsigned short *)(p + 0x66) = *(unsigned short *)(a + 0x16);
    *(unsigned short *)(p + 0x68) = *(unsigned short *)(a + 0x18);
    *(float *)(p + 0x70) = bx;
    *(float *)(p + 0x74) = by;
    *(float *)(p + 0x78) = bz;
    *(float *)(p + 0x7C) = func_00133BD0(*(float *)(b + 0xC));
    *(float *)(p + 0x80) = func_00133BD0(*(float *)(b + 0x10));
    *(unsigned short *)(p + 0x84) = *(unsigned short *)(b + 0x14);
    *(unsigned short *)(p + 0x86) = *(unsigned short *)(b + 0x16);
    *(unsigned short *)(p + 0x88) = *(unsigned short *)(b + 0x18);
}

void func_0024F480(char *p, int sel) {
    float dt = *(float *)(p + 0x10) * func_001F9C40(D_01DF5D20, 0x87);
    *(unsigned char *)(p + 0x20) = 1;
    *(signed char *)(p + 0x40) = *(signed char *)(p + 0x121);
    *(unsigned char *)(p + 0x41) = *(unsigned char *)(p + 0x122);
    *(float *)(p + 0x44) = *(float *)(p + 0x124);
    *(unsigned char *)(p + 0x48) = *(unsigned char *)(p + 0x123);
    if ((unsigned char)sel == 0) {
        key_pair(p, p + 0x128, p + 0x144);
        *(unsigned char *)(p + 0x21) = 0;
    } else {
        key_pair(p, p + 0x144, p + 0x128);
        *(unsigned char *)(p + 0x21) = 1;
    }
    func_00277E70(p + 0x30);
    if ((unsigned char)func_00277EF0(p + 0x30, dt) == 1) {
        func_00278060(p + 0x30, (char *)D_01CAFF14[0]);
    }
}
