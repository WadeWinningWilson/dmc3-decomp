void func_00100580(char *);

extern char D_005B3180[];

char *func_00414AB0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005B3180;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00414A90(char *p0) {
    *(char **)(p0 + 0) = D_005B3180;
    return p0;
}
