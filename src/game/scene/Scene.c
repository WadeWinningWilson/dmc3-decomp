extern char D_005A7910[];

void func_00100580();

int func_0022CA20(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7910;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

int func_0022CA00(void) { return 0; }

void func_0022CA10(void) {}

void func_0022CA70(void) {}

void func_0022CAC0(void) {}
