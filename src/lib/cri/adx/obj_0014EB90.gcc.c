// cc: ee-gcc2.96 -O2 -G0
extern char D_0051D170[];

int func_0014EC60();

int func_0014EE38() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_0051D170;
    v3 = 15;
    v1 = 1;
    do {
        v2 = *(signed char *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_0014EC60(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 196);
    } while (v3 >= 0);
    return v2;
}
