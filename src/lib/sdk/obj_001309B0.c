extern char D_005C7AC0[];

void func_00102B58();

int func_00104490();

void func_001044B8();

void func_00106248();

void func_001282D0();

void func_00128488();

int func_00130A50();

void func_00130D90();

int func_001309B0() {
    int v0;
    char *v1;
    int tmp0;
    int tmp1;
    v1 = D_005C7AC0;
    func_001044B8(1);
    func_00102B58();
    func_00106248();
    v0 = 0;
    do {
        func_00128488(v1, 0, 48);
        *(int *)(v1 + 4) = v0;
        tmp0 = func_00104490(v0);
        *(int *)(v1 + 0) = tmp0;
        func_001282D0((v1 + 480), v1, 48);
        v0 = (v0 + 1);
        v1 = (v1 + 48);
    } while ((v0 < 10));
    tmp1 = func_00130A50(1, 96, (char *)func_00130D90);
    return tmp1;
}
