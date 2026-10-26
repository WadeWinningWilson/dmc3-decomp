extern "C" char *func_00207480(int, int, char *, int);

extern "C" void func_001AD140(char *);

extern "C" void func_0028C740(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_00206730(char *);

extern "C" char *D_005BD0D8;

extern "C" int func_004F8EB0(char *);

extern "C" void func_00332AE0(char *, char *, float, float);

extern "C" void func_004F92D0(char *, int);

extern "C" void func_004F8FB0(char *);

extern "C" void func_004F8F20(char *);

extern "C" void func_004F8BB0(char *);

extern "C" void func_004F7EB0(char *p) {
    char *o = *(char **)(p + 0x608);
    unsigned char st;
    func_00206730(p + 0x138);
    st = 0;
    if ((unsigned char)func_004F8EB0(p) == 1) st = 2;
    else if (*(unsigned char *)(p + 0x617) != 0) st = 1;
    if (st) {
        if (st == 1) func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005BD0D8 + 0xC0, 1.0f, 800.0f);
        if (o != 0) *(unsigned char *)(o + 0x2230) = 0;
        func_00207480(3, 0x362, p + 0x5B0, 0x10);
        func_004F92D0(p, 0x1E);
        if (*(char **)(p + 0x138) != 0) func_001AD140(*(char **)(p + 0x138));
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(unsigned char *)(p + 0x618) != 0) {
            *(unsigned char *)(p + 5) = 1;
            *(unsigned char *)(p + 0x618) = 0;
            *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x8000;
            *(float *)(p + 0x68) = *(float *)(p + 0x68) * 1.05f;
            if (o != 0) *(unsigned char *)(o + 0x2230) = 2;
            func_0028C740(p + 0x140);
            func_004F8FB0(p);
            func_00207480(3, 0x18E, p + 0x5B0, 0x10);
            func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005BD0D8 + 0x80, 1.0f, 800.0f);
            func_004F92D0(p, 0x1F);
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x618) != 0) {
            *(unsigned char *)(p + 5) = 0;
            *(unsigned char *)(p + 0x618) = 0;
            *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x8000;
            *(float *)(p + 0x68) = *(float *)(p + 0x68) * 1.05f;
            if (o != 0) *(unsigned char *)(o + 0x2230) = 1;
            func_0028C740(p + 0x140);
            func_004F8F20(p);
            func_00207480(3, 0x18E, p + 0x5B0, 0x10);
            func_004F92D0(p, 0x1F);
        }
        break;
    }
    func_004F8BB0(p);
}
