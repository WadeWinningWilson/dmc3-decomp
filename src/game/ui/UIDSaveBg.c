void func_002790E0(char *);

void func_0013D6A0(char *);

extern char D_005A6F50[];

extern char D_005BB810[];

char *func_0050F150(char *p) {
    int i;
    char *q;
    *(char **)(p + 0x0) = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    p[0x7] = 0;
    p[0x6] = 0;
    p[0x5] = 0;
    p[0x4] = 0;
    p[0x18] = 0;
    *(int *)(p + 0x8) = 0;
    p[0x34] = -1;
    p[0x35] = 0;
    p[0x36] = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)(p + 0x0) = D_005BB810;
    func_002790E0(p + 0x40);
    p[0x640] = 0;
    *(int *)(p + 0x38) = 0;
    return p;
}

void func_0050F7A0(void) {}
