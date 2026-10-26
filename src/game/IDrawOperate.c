extern char D_005A89F0[];

void func_00100580(char *);

char *func_00278CC0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005A89F0;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00278CA0(char *p0) {
    *(char **)(p0 + 0) = D_005A89F0;
    return p0;
}
