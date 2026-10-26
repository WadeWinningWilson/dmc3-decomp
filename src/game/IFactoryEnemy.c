void func_00100580(char *);

extern char D_005A97F0[];

char *func_002A4D50(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005A97F0;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002A4D30(char *p0) {
    *(char **)(p0 + 0) = D_005A97F0;
    return p0;
}
