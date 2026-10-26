extern char D_005A6F50[];

extern char D_005BA450[];

void func_0013D6A0();

void func_004E9620();

char *func_004E9590(char *p0) {
    *(char **)(p0 + 0) = D_005A6F50;
    func_0013D6A0((p0 + 36));
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 28) = 0;
    *(char *)(p0 + 7) = 0;
    *(char *)(p0 + 6) = 0;
    *(char *)(p0 + 5) = 0;
    *(char *)(p0 + 4) = 0;
    *(char *)(p0 + 24) = 0;
    *(int *)(p0 + 8) = 0;
    *(char *)(p0 + 52) = -1;
    *(char *)(p0 + 53) = 0;
    *(char *)(p0 + 54) = 0;
    *(int *)(p0 + 12) = 135;
    *(int *)(p0 + 16) = 0x3f800000;
    *(int *)(p0 + 20) = 0x3f800000;
    *(char **)(p0 + 0) = D_005BA450;
    func_004E9620(p0, 135, -1);
    return p0;
}

int func_001AD140();

int func_00207480();

void func_004E9750();

int func_004E9680(p0) char *p0; {
    char *v0;
    char *v1;
    char *v2;
    int tmp2;
    int tmp3;
    v1 = p0;
    *(float *)(p0 + 84) = (*(float *)(p0 + 84) + 100.0f);
    func_004E9750();
    tmp2 = func_00207480(3, 921, 0, 16);
    *(int *)(v1 + 100) = tmp2;
    v0 = *(char **)(v1 + 100);
    if (v0 == 0) {
        tmp3 = func_001AD140(v1);
        return tmp3;
    } else {
        *(char **)(v0 + 144) = (v1 + 112);
        *(char *)(v0 + 154) = 0;
        v2 = (char *)func_00207480(1, 185, 0, 16);
        if (v2 != 0) {
            *(char **)(v2 + 144) = (v1 + 176);
            *(char *)(v2 + 154) = 0;
            *(char *)(v2 + 58) = 1;
            *(unsigned char *)(v2 + 156) = 128;
            *(unsigned char *)(v2 + 157) = 128;
            *(unsigned char *)(v2 + 158) = 128;
            *(char *)(v2 + 155) = 2;
        }
        *(int *)(v1 + 56) = 0x43960000;
        return (int)v2;
    }
}
