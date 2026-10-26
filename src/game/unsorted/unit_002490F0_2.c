unsigned char func_00226820(char *, int, int, int);

void func_0024DB10(char *, int, int, int, int, int, int);

void func_00249D50(char *);

extern int *D_00554060[];

void func_00249370(float f, char *p, int a, int b, int c, int d, int e) {
    void func_00249A00(char *, int);
    if (func_00226820(p, 1, a, b) == 1) {
        *(unsigned char *)(p + 0x24CF) = 1;
        d = 0;
        e = 0;
    }
    func_0024DB10(p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x41F0, a, b, (int)f, c, d, e);
    *(unsigned short *)(p + 0x24C6) = (a << 8) | (b & 0xFF);
    func_00249D50(p);
    func_00249A00(p, 1);
    *(int *)(p + 0x4864) = D_00554060[*(signed char *)(p + 0x46)][a];
}

void func_00249560(char *p, int a, int b, int c, int d, int e, float f) {
    void func_00249A00(char *, int);
    if (*(unsigned char *)(p + 0x24CF) == 1) {
        e = 0;
    }
    func_0024DB10(p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x4120, a, b, (int)f, c, d, e);
    *(short *)(p + 0x24C4) = (a << 8) | (b & 0xFF);
    func_00249A00(p, 0);
}

void func_0024DD30();

int func_0024E520();

int func_002496D0(p0) char *p0; {
    void func_00249A00();
    int tmp9;
    func_0024DD30(((p0 + (*(unsigned char *)(p0 + 10400) * 416)) + 16880));
    func_0024DD30(((p0 + (*(unsigned char *)(p0 + 10400) * 416)) + 16672));
    func_00249A00(p0, 1);
    func_00249A00(p0, 0);
    tmp9 = func_0024E520(((p0 + (*(unsigned char *)(p0 + 10400) * 416)) + 16880));
    return tmp9;
}

int func_002497E0(p0) char *p0; {
    void func_00249A00();
    int tmp6;
    func_0024DD30(((p0 + (*(unsigned char *)(p0 + 10400) * 416)) + 16880));
    func_00249A00(p0, 1);
    tmp6 = func_0024E520(((p0 + (*(unsigned char *)(p0 + 10400) * 416)) + 16880));
    return tmp6;
}
