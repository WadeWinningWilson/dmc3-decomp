// cc: ee-gcc2.96 -O2 -G0
extern char D_0053F1A0[];

void func_001925F8();

void func_001938F8();

void func_001930B0(p0) int p0; {
    char *v0;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    if (v0 != 0) {
        tmp0 = *(int *)(v0 + 40);
        tmp1 = *(int *)(v0 + 52);
        *(int *)(v0 + 0) = 0;
        func_001938F8(tmp0);
        func_001925F8(tmp1);
        v0 = (char *)(*(int *)(D_0053F1A0 + 0) + -1);
        *(char **)(D_0053F1A0 + 0) = v0;
    }
}

extern char D_0053F1B4[];

void func_00193140(p0) int p0; {
    *(int *)D_0053F1B4 = p0;
}
