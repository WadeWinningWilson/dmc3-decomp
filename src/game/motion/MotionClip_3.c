extern float D_01DF5D28[];

int func_00210270(char *);

int func_00213CA0(char *);

int func_00213ED0(char *);

void func_00213AC0(char *);

void func_00213710(char *);

void func_00215B70(char *);

int func_00213470(char *p, int arg) {
    int i;
    if ((unsigned char)func_00210270(p) == 0) {
        return 0;
    }
    *(unsigned char *)(p + 0) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 1) = 0;
    *(unsigned char *)(p + 3) = 0;
    *(short *)(p + 4) = -1;
    *(int *)(p + 0xC) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(short *)(p + 0x25B8) = 0;
    *(int *)(p + 8) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 0x25C4) = 0;
    *(int *)(p + 0x25C0) = 0;
    *(int *)(p + 0x25BC) = 0;
    *(unsigned char *)(p + 0x3304) = 0;
    *(unsigned char *)(p + 0) = 2;
    D_01DF5D28[0] = 1.0f;
    for (i = 0; i < 200; i++) {
        *(int *)(p + i * 0x30 + 0x38) = 0;
        *(unsigned char *)(p + i * 0x30 + 0x3C) = 0;
        *(unsigned char *)(p + i * 0x30 + 0x3D) = 0;
        *(int *)(p + i * 0x30 + 0x5C) = 0;
        *(int *)(p + i * 0x30 + 0x48) = 0;
        *(int *)(p + i * 0x30 + 0x44) = -1;
    }
    *(int *)(p + 0x25C0) = arg;
    if ((unsigned char)func_00213CA0(p) == 0) {
        return 0;
    }
    if ((unsigned char)func_00213ED0(p) == 0) {
        return 0;
    }
    if (*(short *)(p + 0x25B8) == 0) {
        func_00213AC0(p);
        return 0;
    }
    func_00213710(p);
    func_00215B70(p);
    return 1;
}

extern char D_01DF8E4D[];

extern char D_01DF8E4C[];

extern short D_01DF8E4E[];

extern short D_01DF8E50[];

extern char D_01CAF520[];

void func_0022FF90(char *);

void func_0022F840(char *);

void func_0027BEA0(char *);

void func_002E74D0(char *);

void func_002136A0(char *);

int func_00213210(char *p, int arg, int arg2) {
    int i;
    if ((unsigned char)func_00210270(p) == 0) {
        return 0;
    }
    *(unsigned char *)(p + 0) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 1) = 0;
    *(unsigned char *)(p + 3) = 0;
    *(short *)(p + 4) = -1;
    *(int *)(p + 0xC) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(short *)(p + 0x25B8) = 0;
    *(int *)(p + 8) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 0x25C4) = 0;
    *(int *)(p + 0x25C0) = 0;
    *(int *)(p + 0x25BC) = 0;
    *(unsigned char *)(p + 0x3304) = 0;
    *(unsigned char *)(p + 0) = 0;
    D_01DF5D28[0] = 1.0f;
    func_0022FF90(p + 0x3308);
    func_0022F840(p + 0x850C);
    func_0027BEA0(p + 0x260C);
    for (i = 0; i < 200; i++) {
        *(int *)(p + i * 0x30 + 0x38) = 0;
        *(unsigned char *)(p + i * 0x30 + 0x3C) = 0;
        *(unsigned char *)(p + i * 0x30 + 0x3D) = 0;
        *(int *)(p + i * 0x30 + 0x5C) = 0;
        *(int *)(p + i * 0x30 + 0x48) = 0;
        *(int *)(p + i * 0x30 + 0x44) = -1;
    }
    *(int *)(p + 0x25C0) = arg;
    *(int *)(p + 0x25C4) = arg2;
    if ((unsigned char)func_00213CA0(p) == 0) {
        return 0;
    }
    if ((unsigned char)func_00213ED0(p) == 0) {
        return 0;
    }
    if (*(short *)(p + 0x25B8) == 0) {
        func_00213AC0(p);
        return 0;
    }
    func_00213710(p);
    func_002E74D0(D_01CAF520);
    D_01DF8E4D[0] = 1;
    D_01DF8E4E[0] = 0x20;
    D_01DF8E4C[0] = 0x80;
    D_01DF8E50[0] = 0x20;
    func_002136A0(p);
    func_00215B70(p);
    return 1;
}
