extern "C" char *func_001AEAA0(char *, int, int);

extern "C" int func_001AEF60(char *, char *, int *, int, int);

extern "C" int *D_0053FFB8[];

extern "C" bool func_001AF500(char *p, int k, int f, int m) {
    bool r = true;
    char *e = func_001AEAA0(p, 0, (unsigned char)k);
    if (*(unsigned char *)(e + 1) == 3) return true;
    *(unsigned short *)(e + 2) = (unsigned char)k;
    if ((unsigned char)f == 0) {
        *(unsigned char *)(p + 0x270C) = 1;
        if ((unsigned char)func_001AEF60(p, e, &D_0053FFB8[(unsigned char)k][(unsigned char)m], 0, 0) == 0) r = false;
        *(unsigned char *)(p + 0x270C) = 0;
    } else {
        *(unsigned char *)(p + 0x270C) = 0;
        if ((unsigned char)func_001AEF60(p, e, &D_0053FFB8[(unsigned char)k][(unsigned char)m], 0, 0) == 0) r = false;
        *(unsigned char *)(p + 0x270C) = 0;
    }
    return r;
}

extern "C" int *D_0053FFE8[];

extern "C" bool func_001AF9E0(char *p, int m, int k, int f) {
    bool r = true;
    int c = (signed char)k;
    char *e;
    if (c == -1) return true;
    if ((unsigned int)c <= 4 || c == 5) {
        e = func_001AEAA0(p, 3, (c + (unsigned char)m * 6) & 0xFFFF);
        if (*(unsigned char *)(e + 1) == 3) return true;
        *(short *)(e + 2) = (signed char)k;
        if ((unsigned char)f == 0) {
            *(unsigned char *)(p + 0x270C) = 1;
        } else {
            *(unsigned char *)(p + 0x270C) = 0;
        }
        if ((unsigned char)func_001AEF60(p, e, D_0053FFE8[(unsigned char)m] + c, 0, 0) == 0) r = false;
        *(unsigned char *)(p + 0x270C) = 0;
    }
    return r;
}
