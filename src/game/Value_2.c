void func_00206730(char *);

int func_002077F0(char *);

int func_00206190(char *p, int i) {
    func_00206730(p + i * 4 + 0xA4);
    if (*(char **)((char *)(i * 4) + (int)p + 0xA4) == 0) goto z;
    return ((unsigned char)func_002077F0(*(char **)((char *)(i * 4) + (int)p + 0xA4)) ^ 1) != 0;
z:
    return 0;
}

char *func_00205A10(int a, int b, int id, int c, int d, float f, int e) {
    extern char D_01DF7210[];
    int func_00206800(char *, int);
    char *func_00205AC0(int, int, int, int, int, float, int);
    char *o = func_00205AC0(a, b, func_00206800(D_01DF7210, id), c, d, f, e);
    if (o != 0) {
        *(char *)(o + 0x3C) = 3;
        *(short *)(o + 0x3E) = id;
    }
    return o;
}

extern char D_005A6FB0[];

extern char D_005A77C0[];

void func_001B1570();

void func_001B1590();

int func_00205D40(p0) int p0; {
    func_001B1590();
    *(char **)((char *)p0 + 0) = D_005A6FB0;
    *(char *)((char *)p0 + 56) = 0;
    *(char *)((char *)p0 + 57) = 0;
    *(char *)((char *)p0 + 58) = 0;
    *(char *)((char *)p0 + 152) = 0;
    *(int *)((char *)p0 + 68) = 0;
    *(int *)((char *)p0 + 64) = 0;
    *(char *)((char *)p0 + 59) = 0;
    func_001B1570((p0 + 80));
    *(int *)((char *)p0 + 144) = 0;
    *(char *)((char *)p0 + 154) = 0;
    *(int *)((char *)p0 + 148) = 0;
    *(char *)((char *)p0 + 153) = 0;
    *(char *)((char *)p0 + 155) = 0;
    *(char *)((char *)p0 + 159) = 0;
    *(char *)((char *)p0 + 158) = 0;
    *(char *)((char *)p0 + 157) = 0;
    *(char *)((char *)p0 + 156) = 0;
    *(char *)((char *)p0 + 60) = 0;
    *(short *)((char *)p0 + 62) = -1;
    *(char **)((char *)p0 + 0) = D_005A77C0;
    return p0;
}

int func_00205E70();

int func_00205E80();

int func_00206120();

int func_00205DF0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_00205E70(p0, v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_00205E80(p0, v0);
        break;
    case 2:
        v2 = func_00206120(p0, v0);
        break;
    }
    return v2;
}

float func_002068F0() {
    char *func_00206800();
    int v4;
    int v5;
    int v1;
    int v3;
    char *v0;
    float v2;
    v0 = func_00206800();
    v1 = 1;
    if (v0 == 0) {
        v2 = -1.0f;
    } else {
        v3 = *(short *)(v0 + 0);
        v5 = 0;
        if ((0 < v3)) {
            do {
                v4 = *(short *)(v0 + 8);
                if (((short)v1 < v4)) {
                    v1 = v4;
                }
                v5 = (v5 + 1);
                v0 = (v0 + 44);
            } while ((v5 < v3));
        }
        v2 = (10.0f + (float)v1);
    }
    return v2;
}

void func_00205DE0(char *p, int v) { *(int *)(p + 212) = v; }
