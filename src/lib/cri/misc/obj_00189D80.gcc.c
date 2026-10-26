// cc: ee-gcc2.96 -O2 -G0
extern char D_0053F054[];

void func_00189E30();

void func_0018AC80();

void func_00189DD8() {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = D_0053F054;
    v2 = 7;
    do {
        tmp0 = *(int *)(v0 + 0);
        v0 = (v0 + 4);
        v1 = tmp0;
        if (tmp0 != 0) {
            func_00189E30(v1);
        }
        v2 = (v2 + -1);
    } while (v2 >= 0);
    func_0018AC80();
}
