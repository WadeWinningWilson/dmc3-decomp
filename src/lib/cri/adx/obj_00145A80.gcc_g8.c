// cc: ee-gcc2.96 -O2 -G8
void func_00128488();

int func_00144B28();

void func_00146020();

void func_0014D708();

void func_0014D850();

int func_00145B90(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    v1 = func_00144B28(3, 0, v0, -1, -1);
    v2 = 2;
    if (v0 != 0) {
        if (*(signed char *)(v0 + 1) == v2) {
            func_00146020(v0);
        }
        v3 = *(int *)(v0 + 4);
        v4 = v3;
        if (v3 != 0) {
            *(char *)(v0 + 0) = 0;
            *(int *)(v0 + 4) = 0;
            func_0014D850(v4);
            func_0014D708(v3);
        }
        func_00128488(v0, 0, 68);
        func_00144B28(3, 1, v0, -1, -1);
        return;
    } else {
        return v1;
    }
}

extern char D_0051A660[];

int func_00145B90();

int func_00145C48() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_0051A660;
    v3 = 15;
    v1 = 1;
    do {
        v2 = *(signed char *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_00145B90(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 68);
    } while (v3 >= 0);
    return v2;
}
