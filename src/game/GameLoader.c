void func_00100580(char *);

extern char D_005A79A0[];

extern char D_005A7990[];

void func_001003E0(char *, void *, int, int);

void func_0022D750(void);

char *func_0022D8A0(char *p, short flags) {
    if (p) {
        *(char **)p = D_005A79A0;
        if (p + 0x390) {
            *(char **)(p + 0x390) = D_005A7990;
        }
        if (p + 0x384) {
            *(char **)(p + 0x384) = D_005A7990;
        }
        func_001003E0(p + 4, (void *)func_0022D750, 0x1C, 0x20);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}
