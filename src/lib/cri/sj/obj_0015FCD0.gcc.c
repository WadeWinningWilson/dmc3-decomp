// cc: ee-gcc2.96 -O2 -G0
void func_0015E7E8();

void func_0015E800();

void func_0015FCF8();

void func_0015FCD0() {
    func_0015E7E8();
    func_0015FCF8();
    func_0015E800();
}

extern char D_00539F08[];

extern char D_00539F10[];

void func_00128488();

void func_0015FCF8() {
    char *v0;
    int v1;
    v0 = D_00539F08;
    v1 = *(int *)(v0 + 0);
    if (v1 == 0) {
        func_00128488(D_00539F10, 0, 3072);
        v1 = *(int *)(v0 + 0);
    }
    *(int *)(v0 + 0) = (v1 + 1);
}

void func_0015FD70();

void func_0015FD48() {
    func_0015E7E8();
    func_0015FD70();
    func_0015E800();
}
