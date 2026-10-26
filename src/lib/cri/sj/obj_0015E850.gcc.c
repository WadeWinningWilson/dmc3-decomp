// cc: ee-gcc2.96 -O2 -G0
void func_0015E7E8();

void func_0015E800();

void func_0015E878();

void func_0015E850() {
    func_0015E7E8();
    func_0015E878();
    func_0015E800();
}

extern char D_005359E8[];

extern char D_005359F0[];

void func_00128488();

void func_0015E878() {
    char *v0;
    int v1;
    v0 = D_005359E8;
    v1 = *(int *)(v0 + 0);
    if (v1 == 0) {
        func_00128488(D_005359F0, 0, 1152);
        v1 = *(int *)(v0 + 0);
    }
    *(int *)(v0 + 0) = (v1 + 1);
}

void func_0015E8F0();

void func_0015E8C8() {
    func_0015E7E8();
    func_0015E8F0();
    func_0015E800();
}
