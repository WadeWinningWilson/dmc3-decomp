extern char D_005A7B70[];

void func_00100580(char *);

char *func_0024BE40(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005A7B70;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0024BE90();

char *func_0024BE00(char *p0) {
    *(char **)(p0 + 0) = D_005A7B70;
    func_0024BE90();
    return p0;
}
