void func_003FA3F0(char *, int);

void func_003F85D0(char *);

void func_003F8E90(char *);

void func_003F94A0(char *);

void func_003F9700(char *);

int func_0041D6B0(float *, float);

int func_004243B0(char *);

void func_00424400(char *);

void func_004245E0(char *);

void func_00424790(char *);

void func_00424990(char *);

void func_00424000(char *p) {
    if (*(unsigned char *)(p + 0x48D) == 0 && *(unsigned char *)(p + 5) == 0 &&
        (unsigned char)func_0041D6B0((float *)(p + 0x478), *(float *)(p + 0x10)) == 1 && (unsigned char)func_004243B0(p) == 1) {
        *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x2000;
        func_003FA3F0(p, 3);
        *(float *)(p + 0x478) = 120.0f - 20.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00424400(p);
        break;
    case 3:
        func_004245E0(p);
        break;
    case 4:
        func_00424400(p);
        break;
    case 8:
        func_00424790(p);
        break;
    case 9:
        func_00424990(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    *(short *)(p + 0x484) = *(short *)(p + 0x90);
}
