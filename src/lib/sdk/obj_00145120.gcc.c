// cc: ee-gcc2.96 -O2 -G0
extern char D_0051AFCC[];

extern char D_0051AFD0[];

extern char D_0051AFE4[];

void func_00145B90();

void func_00145120() {
    func_00145B90(*(int *)(D_0051AFD0 + 0));
    *(int *)(D_0051AFD0 + 0) = 0;
    *(int *)D_0051AFCC = 0;
    *(int *)D_0051AFE4 = 0;
}

extern char D_0051AFD4[];

void func_00145120();

void func_00146020();

int func_00146580();

void func_00145160() {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = D_0051AFD0;
    v1 = *(int *)(v0 + 0);
    if (v1 != 0) {
        if (*(int *)D_0051AFD4 >= 0) {
            tmp0 = func_00146580(v1);
            if (tmp0 != 1) {
                func_00146020(*(int *)(v0 + 0));
            }
            func_00145120();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

void func_001451E0();

void func_001451C8() {
    func_001451E0();
}
