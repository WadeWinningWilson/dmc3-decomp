char * func_002790E0();

extern char D_005A6F50[];

extern char D_005BB110[];

void func_0013D6A0();

char * func_005039C0(p) char *p; {
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
    *(char * *)(p) = D_005BB110;
    func_002790E0(p + 64, 135, -1);
    *(char *)(p + 1600) = 0;
    return p;
}

int func_00503FC0(p0) char *p0; {
    return (*(unsigned char *)(p0 + 4) == 4);
}

void func_00503FD0(p0) char *p0; {
    int v0;
    v0 = 0x3f800000;
    if (*(float *)(p0 + 1728) < 0.0f) {
        *(int *)(p0 + 1728) = v0;
    }
}
