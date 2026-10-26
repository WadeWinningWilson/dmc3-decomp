// cc: ee-gcc2.96 -O2 -G0
extern char D_0053D1B0[];

void func_0016A900();

void func_0016C7A0();

int func_0016CF28();

void func_0016CAF0() {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    v0 = *(int *)(*(char **)D_0053D1B0 + 12);
    v1 = (int)(*(char **)D_0053D1B0 + 16);
    if (v0 > 0) {
        v4 = (char *)v1;
        v2 = v0;
        v3 = 1;
        do {
            if (*(int *)(v4 + 0) != v3) {
                func_0016CF28(v4);
            }
            v2 = (v2 + -1);
            v4 = (v4 + 256);
        } while (v2 != 0);
    }
    func_0016A900();
    func_0016C7A0();
}

void func_0016CB80();

void func_0016CB68() {
    func_0016CB80();
}
