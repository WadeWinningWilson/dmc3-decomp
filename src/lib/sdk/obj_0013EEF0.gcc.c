// cc: ee-gcc2.96 -O2 -G0
void func_0013E238();

void func_0013E3A8();

void func_0013E430();

void func_001487D8();

void func_001487F0();

void func_001492E0();

void func_0014F198();

int func_0013EF18(p0) int p0; {
    char *v0;
    char *v1;
    char *v2;
    int v3;
    v0 = (char *)p0;
    func_0014F198();
    v1 = *(char **)(v0 + 4);
    v2 = *(char **)(v1 + 4);
    v3 = *(int *)(v2 + 192);
    if (v3 == 0) {
        return (int)v1;
    } else {
        func_001487D8();
        func_0013E430(v3);
        func_0013E3A8(v3);
        *(int *)(v2 + 192) = 0;
        func_001487F0();
        func_001492E0(v0, 0);
        func_0013E238();
        return;
    }
}
