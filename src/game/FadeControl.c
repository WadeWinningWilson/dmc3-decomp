extern char D_005A9460[];

void func_002904A0();

int func_00290510(p0) int p0; {
    func_002904A0();
    *(char **)((char *)p0 + 0) = D_005A9460;
    return p0;
}

unsigned char func_00290990(char *p) { return *(unsigned char *)(p + 24); }

void func_002905B0(char *p0) {
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
    *(char *)(p0 + 24) = 1;
}

void func_00290840(char *p, unsigned int col, unsigned int t, int k) {
    *(unsigned int *)(p + 4) = col;
    *(unsigned int *)(p + 8) = col;
    *(unsigned int *)(p + 0xC) = col & 0xFFFFFF;
    *(int *)(p + 0x10) = 0;
    *(float *)(p + 0x14) = t;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 0x1C) = k;
}

void func_002908C0(char *p, unsigned int col, unsigned int t, int k) {
    *(unsigned int *)(p + 4) = col & 0xFFFFFF;
    *(unsigned int *)(p + 8) = col & 0xFFFFFF;
    *(unsigned int *)(p + 0xC) = col;
    *(int *)(p + 0x10) = 0;
    *(float *)(p + 0x14) = t;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 0x1C) = k;
}

void func_00290940(char *p, unsigned int col, unsigned int t, int k) {
    *(unsigned int *)(p + 4) = col;
    *(unsigned int *)(p + 8) = col;
    *(unsigned int *)(p + 0xC) = col;
    *(int *)(p + 0x10) = 0;
    *(float *)(p + 0x14) = t;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 0x1C) = k;
}
