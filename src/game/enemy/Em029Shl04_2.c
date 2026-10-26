void func_00206730(char *);

void func_001AD100(char *);

int func_0041D600(char *p);

void func_004B9EC0(char *);

void func_004BA4D0(char *);

void func_004BA670(char *);

void func_004BA880(char *);

void func_004B9E00(char *p) {
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x4F4);
        func_00206730(p + 0x4F8);
        switch (*(int *)(p + 0x4FC)) {
        case 0:
            func_004B9EC0(p);
            break;
        case 1:
            func_004BA4D0(p);
            break;
        case 2:
            func_004BA670(p);
            break;
        case 3:
            func_004BA880(p);
            break;
        }
    }
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern char D_00581F30[];

void func_004B9AB0(char *);

void func_004B9BA0(char *);

void func_004B9C50(char *);

void func_004B9910(char *p) {
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(signed char *)(p + 0x46) = *(signed char *)(p + 0x150);
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 1.0f;
    *(short *)(p + 0x90) = 0;
    *(int *)(p + 0x4F4) = 0;
    *(int *)(p + 0x4F8) = 0;
    *(float *)(p + 0x508) = 0.0f;
    *(float *)(p + 0x50C) = 1.0f;
    *(unsigned char *)(p + 0x510) = 0;
    *(unsigned char *)(p + 0x511) = 0;
    *(unsigned char *)(p + 0x3C0) = 4;
    *(unsigned char *)(p + 0x3C1) = 0;
    *(short *)(p + 0x3C2) = 0;
    *(unsigned char *)(p + 0x3D0) = 2;
    *(float *)(p + 0x3E0) = 0.0f;
    *(float *)(p + 0x3E4) = 0.0f;
    *(float *)(p + 0x3E8) = 0.0f;
    *(float *)(p + 0x3EC) = 1.0f;
    *(float *)(p + 0x3F0) = 100.0f;
    func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 3, D_00581F30, p, 0);
    if (*(int *)(p + 0x4FC) == 0 || *(int *)(p + 0x4FC) == 3) {
        *(int *)(p + 0x278) = 0x31000;
    } else {
        *(int *)(p + 0x278) = 0x1000;
    }
    func_0028C8E0(p + 0x1A0, 0);
    func_0028C910(p + 0x1A0);
    func_0028C3A0(p + 0x1A0, 0, -1, p + 0x460);
    switch (*(int *)(p + 0x4FC)) {
    case 0:
        func_004B9AB0(p);
        break;
    case 1:
    case 2:
        func_004B9BA0(p);
        break;
    case 3:
        func_004B9C50(p);
        break;
    }
    *(int *)(p + 0x504) = 0;
}
