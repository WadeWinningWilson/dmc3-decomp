extern char D_005A6F50[];

extern char D_005AADD0[];

extern char D_005B1870[];

extern char D_005B1894[];

void func_0013D6A0();

char * func_003E05E0(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p + 56) = D_005AADD0;
    *(int *)(p + 64) = -1;
    *(char * *)(p) = D_005B1870;
    *(char * *)(p + 56) = D_005B1894;
    *(char *)(p + 68) = 1;
    *(int *)(p + 72) = 0;
    *(int *)(p + 76) = 0;
    return p;
}

extern void func_003E0A40();

void func_003E0B00(char *p) { func_003E0A40(p + -56); }

void func_003E0A20(char *p) { *(char *)(p + 68) = 0; }

void func_003E0720(char *p0) {
    int t0;
    *(int *)(p0 + 72) = 0;
    t0 = (*(int *)(p0 + 12) | 64);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) | 64);
}

void func_003E0A10(char *p0) {
    *(char *)(p0 + 68) = 1;
}
