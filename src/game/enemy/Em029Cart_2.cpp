extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

extern "C" unsigned char D_01CAFF3C[];

extern "C" float func_0041DB40(char *);

extern "C" void func_00492E00(char *, int);

extern "C" void func_004934F0(char *);

extern "C" void func_00493A60(char *);

extern "C" void func_00493D20(char *);

extern "C" void func_00493F10(char *);

extern "C" void func_00494260(char *);

static inline unsigned char has492(int x, int m) {
    return (x & m) != 0;
}

extern "C" void func_00492E60(char *p) {
    unsigned char go;
    char *o = *(char **)(p + 0x90C);
    unsigned char n;
    int r;
    unsigned int i;
    switch (*(unsigned char *)(o + 0x972)) {
    case 0:
        n = *(unsigned char *)(p + 0x8EB);
        if (n < 2) break;
        if (has492(*(int *)(o + 0x8FC), 0x20000000)) break;
        go = 0;
        if (D_01CAFF3C[0] == 4) go = 1;
        else if (n == 3) go = 1;
        else if (n == 2 && *(float *)(o + 0x68) < 5.0f) go = 1;
        if (go && !(func_0041DB40(p + 0x50) <= 600.0f)) func_00492E00(p, 1);
        break;
    case 1:
        r = (unsigned char)func_0024E780(p + 0x2B20, 0, 0);
        if (r <= 0) break;
        if (r != 0xFF) {
            func_00492E00(p, r);
        } else if (!(func_0041DB40(p + 0x50) <= 600.0f)) {
            int f = *(int *)(*(char **)(p + 0x90C) + 0x8FC);
            if (!has492(f, 0x400)) {
                if (!has492(f, 0x20000000)) func_00492E00(p, 2);
            } else {
                func_00492E00(p, 5);
            }
        }
        func_0024E7B0(p + 0x2B20, 0, 0);
        break;
    }
    for (i = 0; i < 0x10; i++) {
        if (*(int *)(p + 0x3C90) & (1 << i)) {
            *(unsigned int *)(p + 0x3C94) = i;
            switch (*(unsigned int *)(p + 0x3C94)) {
            case 1:
                if (*(unsigned char *)(*(char **)(p + 0x90C) + 0x972) == 0) func_00493D20(p);
                else func_004934F0(p);
                break;
            case 2:
                func_00493A60(p);
                break;
            case 3:
                func_00493F10(p);
                break;
            case 4:
                break;
            case 5:
                func_00494260(p);
                break;
            }
        }
    }
}
