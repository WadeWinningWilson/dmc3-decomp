extern signed char D_005BDD60[4];

int func_00406EA0(int, signed char);

unsigned char func_004B5E70(char *, int);

unsigned int func_004B5D10(char *, int);

int func_004B5D60(char *p, int i) {
    extern signed char D_005BDD50[4];
    signed char k = D_005BDD50[i];
    char *q;
    func_00406EA0(*(int *)(p + 0x3370), k);
    q = *(char **)(p + 0x3370);
    if (*(unsigned char *)(q + 0xB7) == 0) {
        if (k == 2 || k == 5) return 4;
    }
    if (0 < D_005BDD60[k] && D_005BDD60[k] <= *(unsigned char *)((char *)k + (int)q + 0x43)) return 1;
    if (func_004B5E70(p, i) == 1) return 2;
    if (*(unsigned int *)(*(char **)(p + 0x3370) + 4) < func_004B5D10(p, i)) return 3;
    return 0;
}

extern char D_00586A90[];

char *func_004B5C70(int p0, int p1) {
    extern char D_005BDD50;
    return *(char **)((D_00586A90 + (*(signed char *)((&D_005BDD50 + p1) + 0) << 2)) + 0);
}

extern char D_00586AB0[];

char *func_004B5CA0(int p0, int p1) {
    extern char D_005BDD50;
    return *(char **)((D_00586AB0 + (*(signed char *)((&D_005BDD50 + p1) + 0) << 2)) + 0);
}
