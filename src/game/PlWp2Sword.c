extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005A91C0[];

extern char D_005A91E4[];

extern char D_005A9264[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_0028F830(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A91C0;
        *(char **)(p + 64) = D_005A91E4;
        *(char **)(p + 160) = D_005A9264;
        func_002791E0((p + 512), -1);
        func_0031DD00((p + 320), -1);
        func_001003E0((p + 272), (void *)func_0013D240, 16, 3);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0028F480(char *p, unsigned char k, unsigned char m) {
    char *e = *(char **)(*(char **)(p + 0xE4) + k * 4);
    *(signed char *)(p + 0xDA) = *(signed char *)e;
    if (m == 0 || m == 1) {
        *(unsigned char *)(p + 0xD6) = *(unsigned char *)(e + 2);
        *(unsigned char *)(p + 0xD4) = *(unsigned char *)(e + 3);
        *(float *)(p + 0x910) = *(float *)(e + 0x10);
        *(float *)(p + 0x914) = *(float *)(e + 0x14);
        *(float *)(p + 0x918) = *(float *)(e + 0x18);
        *(float *)(p + 0x91C) = 1.0f;
        *(float *)(p + 0x920) = *(float *)(e + 0x20);
        *(float *)(p + 0x924) = *(float *)(e + 0x24);
        *(float *)(p + 0x928) = *(float *)(e + 0x28);
        *(float *)(p + 0x92C) = 1.0f;
    }
    if (m == 0 || m == 2) {
        *(unsigned char *)(p + 0xD7) = *(unsigned char *)(e + 0x30);
        *(unsigned char *)(p + 0xD5) = *(unsigned char *)(e + 0x31);
        *(float *)(p + 0x910) = *(float *)(e + 0x40);
        *(float *)(p + 0x914) = *(float *)(e + 0x44);
        *(float *)(p + 0x918) = *(float *)(e + 0x48);
        *(float *)(p + 0x91C) = 1.0f;
        *(float *)(p + 0x920) = *(float *)(e + 0x50);
        *(float *)(p + 0x924) = *(float *)(e + 0x54);
        *(float *)(p + 0x928) = *(float *)(e + 0x58);
        *(float *)(p + 0x92C) = 1.0f;
    }
}

void func_00286040();

void func_0028E9B0(int p0) {
    func_00286040((p0 + 2304));
    func_00286040((p0 + 2308));
}
