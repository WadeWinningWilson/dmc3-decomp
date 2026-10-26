// cc: ee-gcc2.96 -O2 -G0
extern char D_0053EE08[];

extern char D_0053EE0C[];

extern char D_0053EE10[];

extern char D_0053EE14[];

void func_001755F0() {
    *(int *)D_0053EE08 = 1;
    *(int *)D_0053EE0C = 0;
    *(int *)D_0053EE10 = 0;
    *(int *)D_0053EE14 = 0;
}

void func_00175810();

void func_00175618() {
    func_00175810(8);
    func_00175810(9);
}

int func_00175678();

int func_001756B0();

int func_00175638() {
    int v0;
    if (*(int *)D_0053EE14 == 0) {
        v0 = func_001756B0();
    } else {
        v0 = func_00175678();
    }
    return v0;
}

void func_001282D0();

int func_00175678(p0, p1, p2) int p0; int p1; int p2; {
    func_001282D0(p2, (0x70000000 + p0), p1);
    return 0;
}
