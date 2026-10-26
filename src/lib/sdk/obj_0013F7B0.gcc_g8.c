// cc: ee-gcc2.96 -O2 -G8
extern char D_00518FB0[];

int func_0013F7B0();

int func_0013F7D8() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_00518FB0;
    v3 = 15;
    v1 = 1;
    do {
        v2 = *(signed char *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_0013F7B0(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 48);
    } while (v3 >= 0);
    return v2;
}
