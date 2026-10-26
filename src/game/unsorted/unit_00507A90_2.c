extern int D_01CAFF38[];

void func_00317740(char *, int);

extern char *D_005BE190[];

void func_005088F0(char *);

void func_00508AB0(char *);

void func_00508D70(char *);

void func_005086C0(char *p) {
    int k = *(unsigned char *)(D_005BE190[0] + 0xB154);
    if (*(unsigned char *)(D_005BE190[0] + 0xB2CF) == 0) *(float *)(p + 0x23C) = 30.0f;
    if (!(*(float *)(p + 0x23C) <= 0.0f)) {
        *(float *)(p + 0x23C) = *(float *)(p + 0x23C) - 1.0f;
        *(float *)(p + 0x220) = *(float *)(p + 0x220) * 1.03f;
        if (!(*(float *)(p + 0x220) <= 80.0f)) *(float *)(p + 0x220) = 80.0f;
        *(float *)(p + 0x204) = *(float *)(p + 0x204) + 10.0f;
        if (!(*(float *)(p + 0x204) <= 100.0f)) *(float *)(p + 0x204) = 100.0f;
    } else {
        *(float *)(p + 0x220) = *(float *)(p + 0x220) * 0.99f;
        if (*(float *)(p + 0x220) < 50.0f) *(float *)(p + 0x220) = 50.0f;
        *(float *)(p + 0x204) = *(float *)(p + 0x204) - 10.0f;
        if (*(float *)(p + 0x204) < 0.0f) *(float *)(p + 0x204) = 0.0f;
    }
    if (D_01CAFF38[0] == 0x90) {
        func_005088F0(p);
    } else if (D_01CAFF38[0] == 0xEA) {
        func_00508AB0(p);
        *(float *)(p + 0x194) = *(float *)(p + 0x194) + 0.5f * *(float *)(p + 0x204);
        *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) + *(float *)(p + 0x204);
    } else {
        func_00508D70(p);
        if (k == 0x3F || k == 0x40) {
            *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) + *(float *)(p + 0x204);
        } else if (k == 0x2A || k == 0x3B || k == 0x3C) {
            *(float *)(p + 0x194) = *(float *)(p + 0x194) + *(float *)(p + 0x204);
            *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) + *(float *)(p + 0x204);
        }
    }
    func_00317740(p, 0);
}

void func_00509A10(p0) char *p0; {
    int v0;
    char *v1;
    *(int *)(p0 + 4) = 0;
    v0 = 0;
    *(int *)(p0 + 8) = 0;
    v1 = p0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
    do {
        *(int *)(v1 + 28) = -1;
        *(int *)(v1 + 32) = -1;
        v0 = (v0 + 5);
        *(int *)(v1 + 36) = -1;
        *(int *)(v1 + 40) = -1;
        *(int *)(v1 + 44) = -1;
        v1 = (v1 + 20);
    } while ((v0 < 6));
    *(int *)((char *)((v0 << 2) + (int)p0) + 28) = -1;
    *(int *)(p0 + 72) = -1;
    *(int *)(p0 + 76) = -1;
    *(int *)(p0 + 80) = -1;
    *(int *)(p0 + 84) = -1;
    *(int *)(p0 + 88) = -1;
    *(int *)(p0 + 92) = -1;
    *(int *)(p0 + 96) = -1;
    *(int *)(p0 + 100) = -1;
    *(char *)(p0 + 105) = 0;
    *(char *)(p0 + 104) = 0;
    *(char *)(p0 + 107) = 0;
    *(char *)(p0 + 106) = 0;
}
