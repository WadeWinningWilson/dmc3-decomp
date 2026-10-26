// cc: ee-gcc2.96 -O2 -G0
extern char D_0053F088[];

void func_00188C98(p0) int p0; {
    *(int *)D_0053F088 = p0;
}

int func_00188CA8(p0) char *p0; {
    return (*(int *)(*(char **)(p0 + 8120) + 4264) != 0);
}

extern char D_00645970[];

void func_0010BAB8();

void func_0016A760();

void func_00188CB8() {
    int v0;
    if (*(int *)D_0053F088 != 0) {
        func_0010BAB8();
        func_0016A760(D_00645970, 0, 72);
        return;
    } else {
        return;
    }
}
