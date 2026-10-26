// cc: ee-gcc2.96 -O2 -G0
extern char D_0053F054[];

int func_0018D040();

int func_0018CFD0(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = 7;
    v1 = D_0053F054;
    v2 = p1;
    v3 = p0;
    do {
        v5 = *(int *)(v1 + 0);
        v1 = (v1 + 4);
        v4 = v5;
        if (v5 != 0) {
            v5 = func_0018D040(v4, v3, v2);
        }
        v0 = (v0 + -1);
    } while (v0 >= 0);
    return v5;
}

char *func_0018D0E0();

int func_0018D040(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    char *v2;
    int v3;
    v0 = p2;
    v1 = p0;
    v2 = func_0018D0E0();
    v3 = (p1 << 2);
    if (v2 != 0) {
        v2 = (char *)(v3 + v1);
        *(int *)(v2 + 2564) = v0;
    }
    return (int)v2;
}
