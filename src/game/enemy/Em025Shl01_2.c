void func_001AD140(char *);

void func_00206730(char *);

void func_001AD100(char *);

void func_00371040(char *p);

void func_00370830(char *p);

void func_003708E0(char *);

void func_00370BF0(char *);

void func_00370EF0(char *);

void func_002282B0(char *);

void func_00370730(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00370830(p);
        break;
    case 1:
        func_003708E0(p);
        break;
    case 2:
        func_00370BF0(p);
        break;
    case 3:
        func_00370EF0(p);
        break;
    case 4:
        func_00371040(p);
        break;
    }
    func_002282B0(p + 0x480);
    func_00206730(p + 0x578);
    if (*(int *)(p + 0x480) == 0) {
        func_001AD140(p);
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x4E0);
    *(float *)(p + 0x54) = *(float *)(p + 0x4E4);
    *(float *)(p + 0x58) = *(float *)(p + 0x4E8);
    *(float *)(p + 0x5C) = 1.0f;
    *(short *)(p + 0x90) = 0x7FFF;
}

extern void func_00370510();

void func_00371260(char *p) { func_00370510(p + -64); }

extern void func_00371100();

void func_00371270(char *p) { func_00371100(p + -64); }
