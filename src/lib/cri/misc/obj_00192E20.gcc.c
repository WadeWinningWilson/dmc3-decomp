// cc: ee-gcc2.96 -O2 -G0
extern char D_0053F198[];

void func_00162390();

void func_00192508();

void func_00193660();

void func_00193830();

void func_00192E20() {
    char *v0;
    int v1;
    v0 = D_0053F198;
    if (*(int *)(v0 + 0) > 0) {
        func_00193830();
        func_00192508();
        func_00193660();
        func_00162390();
        v1 = (*(int *)(v0 + 0) + -1);
        *(int *)(v0 + 0) = v1;
    }
}
