char *func_001EDE90(int a, int b, int id, int c, int d, float f, int e) {
    extern char D_01CB0A00[];
    int func_001F3A50(char *, int);
    char *func_001EDF40(int, int, int, int, int, float, int);
    char *o = func_001EDF40(a, b, func_001F3A50(D_01CB0A00, id), c, d, f, e);
    if (o != 0) {
        *(char *)(o + 0x3C) = 1;
        *(short *)(o + 0x3E) = id;
    }
    return o;
}

int func_001EDE70(void) { return 1; }

extern char D_005BE0E4;

int func_001EDE60(void) {
    D_005BE0E4 = 0;
    return 1;
}
