// cc: ee-gcc2.96 -O2 -G8
void func_00161710();

void func_0015B2F0() {
    func_00161710();
}

void func_0012CEE8();

void func_0015B350() {
    func_0012CEE8();
}

extern char D_00530C58[];

int func_0015B460();

int func_0015B468() {
    char *v0;
    int v1;
    int v2;
    v0 = D_00530C58;
    v2 = 39;
    do {
        v1 = *(signed char *)(v0 + 0);
        if (v1 != 0) {
            v1 = func_0015B460(v0);
        }
        v2 = (v2 + -1);
        v0 = (v0 + 56);
    } while (v2 >= 0);
    return v1;
}
