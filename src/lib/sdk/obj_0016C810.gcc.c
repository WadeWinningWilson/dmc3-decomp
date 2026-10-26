// cc: ee-gcc2.96 -O2 -G0
void func_0016CB90();

int func_0016CD60();

int func_0016C958(p0, p1) int p0; int p1; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    v1 = (char *)p1;
    v2 = func_0016CD60();
    v3 = 0xff020000;
    v4 = 0;
    if (v2 != 0) {
        func_0016CB90(v4, (v3 | 515));
        return;
    } else {
        *(long *)(v1 + 0) = *(long *)(v0 + 168);
        *(long *)(v1 + 8) = *(long *)(v0 + 176);
        *(long *)(v1 + 16) = *(long *)(v0 + 184);
        *(long *)(v1 + 24) = *(long *)(v0 + 192);
        *(long *)(v1 + 32) = *(long *)(v0 + 200);
        return v2;
    }
}

extern char D_00595448[];

int func_0016C9D8() {
    return (int)D_00595448;
}

extern char D_0053D1B0[];

int func_0016A830();

void func_0016CB68();

int func_0016CA60(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    char *tmp1;
    v1 = p0;
    *(int *)(D_0053D1B0 + 0) = p1;
    func_0016A830(p1, 0, ((v1 << 6) + 4));
    func_0016CB68(*(int *)(D_0053D1B0 + 0));
    tmp1 = *(char **)(D_0053D1B0 + 0);
    *(int *)(*(char **)(D_0053D1B0 + 0) + 12) = v1;
    v0 = (tmp1 + 16);
    if (v1 > 0) {
        v2 = v1;
        v3 = 1;
        do {
            v2 = (v2 + -1);
            *(int *)(v0 + 0) = v3;
            v0 = (v0 + 256);
        } while (v2 != 0);
    }
    return 0;
}
