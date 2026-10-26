extern char D_005A6F50[];

extern char D_005AC290[];

void func_0013D6A0();

void func_002790E0();

char *func_0031B750(char *p0) {
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
    *(char **)(p0 + 0) = D_005AC290;
    func_002790E0((p0 + 64), 135, -1);
    return p0;
}
