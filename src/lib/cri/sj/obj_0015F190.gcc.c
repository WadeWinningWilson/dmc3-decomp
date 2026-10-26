// cc: ee-gcc2.96 -O2 -G0
void func_0015E7E8();

void func_0015E800();

void func_0015F1B8();

void func_0015F190() {
    func_0015E7E8();
    func_0015F1B8();
    func_0015E800();
}

extern char D_00535ED0[];

extern char D_00535ED8[];

void func_00128488();

void func_0015F1B8() {
    char *v0;
    int v1;
    v0 = D_00535ED0;
    v1 = *(int *)(v0 + 0);
    if (v1 == 0) {
        func_00128488(D_00535ED8, 0, 16384);
        v1 = *(int *)(v0 + 0);
    }
    *(int *)(v0 + 0) = (v1 + 1);
}

void func_0015F230();

void func_0015F208() {
    func_0015E7E8();
    func_0015F230();
    func_0015E800();
}
