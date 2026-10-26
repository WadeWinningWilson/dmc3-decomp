// cc: ee-gcc2.96 -O2 -G0
void func_0018D960();

void func_00189CD0() {
    func_0018D960();
}

void func_00189CE8() {
}

extern char D_0053F054[];

int func_00189CF0();

int func_00189D18() {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = D_0053F054;
    v2 = 0;
    do {
        tmp0 = *(int *)(v0 + 0);
        v0 = (v0 + 4);
        v1 = tmp0;
        if (tmp0 != 0) {
            v3 = func_00189CF0(v1);
            if (v3 == 0) {
                return v3;
            }
        }
        v2 = (v2 + 1);
    } while ((v2 < 8));
    v3 = 1;
    return v3;
}
