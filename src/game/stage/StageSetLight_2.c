extern int D_01CAFF14[];

void func_00277E70(char *);

void func_00278060(char *, int);

float func_00133BD0(float);

int func_00277EF0(char *, float);

void func_00385810(char *p, unsigned char f) {
    *(unsigned char *)(p + 0x45) = 1;
    *(signed char *)(p + 0x100) = *(signed char *)(p + 0x55);
    *(unsigned char *)(p + 0x101) = *(unsigned char *)(p + 0x56);
    *(float *)(p + 0x104) = *(float *)(p + 0x5C);
    *(unsigned char *)(p + 0x108) = *(unsigned char *)(p + 0x57);
    if (f == 0) {
        float ax = *(float *)(p + 0x60);
        float ay = *(float *)(p + 0x64);
        float az = *(float *)(p + 0x68);
        float bx = *(float *)(p + 0x7C);
        float by = *(float *)(p + 0x80);
        float bz = *(float *)(p + 0x84);
        *(float *)(p + 0x110) = ax;
        *(float *)(p + 0x114) = ay;
        *(float *)(p + 0x118) = az;
        *(float *)(p + 0x11C) = func_00133BD0(*(float *)(p + 0x6C));
        *(float *)(p + 0x120) = func_00133BD0(*(float *)(p + 0x70));
        *(unsigned short *)(p + 0x124) = *(unsigned short *)(p + 0x74);
        *(unsigned short *)(p + 0x126) = *(unsigned short *)(p + 0x76);
        *(unsigned short *)(p + 0x128) = *(unsigned short *)(p + 0x78);
        *(float *)(p + 0x130) = bx;
        *(float *)(p + 0x134) = by;
        *(float *)(p + 0x138) = bz;
        *(float *)(p + 0x13C) = func_00133BD0(*(float *)(p + 0x88));
        *(float *)(p + 0x140) = func_00133BD0(*(float *)(p + 0x8C));
        *(unsigned short *)(p + 0x144) = *(unsigned short *)(p + 0x90);
        *(unsigned short *)(p + 0x146) = *(unsigned short *)(p + 0x92);
        *(unsigned short *)(p + 0x148) = *(unsigned short *)(p + 0x94);
        *(unsigned char *)(p + 0x46) = 0;
        if (*(unsigned char *)(p + 0x96) == 1) {
            *(unsigned char *)(p + 0x47) = 1;
            *(float *)(p + 0x4C) = *(float *)(p + 0x9C);
        }
        if (*(unsigned char *)(p + 0x97) == 1) {
            *(unsigned char *)(p + 0x48) = 1;
            *(float *)(p + 0x50) = *(float *)(p + 0x98);
        }
    } else {
        float ax = *(float *)(p + 0x7C);
        float ay = *(float *)(p + 0x80);
        float az = *(float *)(p + 0x84);
        float bx = *(float *)(p + 0x60);
        float by = *(float *)(p + 0x64);
        float bz = *(float *)(p + 0x68);
        *(float *)(p + 0x110) = ax;
        *(float *)(p + 0x114) = ay;
        *(float *)(p + 0x118) = az;
        *(float *)(p + 0x11C) = func_00133BD0(*(float *)(p + 0x88));
        *(float *)(p + 0x120) = func_00133BD0(*(float *)(p + 0x8C));
        *(unsigned short *)(p + 0x124) = *(unsigned short *)(p + 0x90);
        *(unsigned short *)(p + 0x126) = *(unsigned short *)(p + 0x92);
        *(unsigned short *)(p + 0x128) = *(unsigned short *)(p + 0x94);
        *(float *)(p + 0x130) = bx;
        *(float *)(p + 0x134) = by;
        *(float *)(p + 0x138) = bz;
        *(float *)(p + 0x13C) = func_00133BD0(*(float *)(p + 0x6C));
        *(float *)(p + 0x140) = func_00133BD0(*(float *)(p + 0x70));
        *(unsigned short *)(p + 0x144) = *(unsigned short *)(p + 0x74);
        *(unsigned short *)(p + 0x146) = *(unsigned short *)(p + 0x76);
        *(unsigned short *)(p + 0x148) = *(unsigned short *)(p + 0x78);
        *(unsigned char *)(p + 0x46) = 1;
        if (*(unsigned char *)(p + 0x97) == 1) {
            *(unsigned char *)(p + 0x47) = 1;
            *(float *)(p + 0x4C) = *(float *)(p + 0x98);
        }
        if (*(unsigned char *)(p + 0x96) == 1) {
            *(unsigned char *)(p + 0x48) = 1;
            *(float *)(p + 0x50) = *(float *)(p + 0x9C);
        }
    }
    func_00277E70(p + 0xF0);
    if (*(unsigned char *)(p + 0x47) == 0 && (unsigned char)func_00277EF0(p + 0xF0, *(float *)(p + 0x10)) == 1) func_00278060(p + 0xF0, D_01CAFF14[0]);
}

void func_001AD100(char *);

void func_00385460(char *);

void func_00385500(char *);

void func_00385580(char *);

void func_003853D0(char *p) {
    func_001AD100(p);
    if (*(unsigned char *)(p + 0x44) != 0) {
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            func_00385460(p);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        case 1:
            func_00385500(p);
            break;
        case 2:
            func_00385580(p);
            break;
        }
    }
}

extern void func_00385A60();

void func_00385BD0(char *p) { func_00385A60(p + -56); }

extern void func_00385AF0();

void func_00385BE0(char *p) { func_00385AF0(p + -56); }

void func_00385AD0(char *p) { *(char *)(p + 68) = 0; }
