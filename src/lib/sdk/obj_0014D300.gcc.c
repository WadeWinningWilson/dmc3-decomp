// cc: ee-gcc2.96 -O2 -G0
extern char D_005265E0[];

int func_0014D300();

int func_0014D340() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_005265E0;
    v3 = 7;
    v1 = 1;
    do {
        v2 = *(signed char *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_0014D300(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 760);
    } while (v3 >= 0);
    return v2;
}

extern char D_00528764[];

void func_0014D3A0(p0) int p0; {
    *(int *)D_00528764 = p0;
}
