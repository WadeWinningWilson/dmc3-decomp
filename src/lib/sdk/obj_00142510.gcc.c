// cc: ee-gcc2.96 -O2 -G0
extern char D_005194F8[];

int func_001423C0();

int func_00142510() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_005194F8;
    v3 = 15;
    v1 = 1;
    do {
        v2 = *(short *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_001423C0(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 260);
    } while (v3 >= 0);
    return v2;
}
