// cc: ee-gcc2.96 -O2 -G0
extern char D_0052C4E0[];

int func_0015B208();

int func_0015A878() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_0052C4E0;
    v3 = 31;
    v1 = 1;
    do {
        v2 = *(signed char *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_0015B208(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 568);
    } while (v3 >= 0);
    return v2;
}

extern char D_00593678[];

void func_0015AD30();

int func_0015A8D8(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_0015AD30(D_00593678);
        v0 = -1;
    } else {
        v0 = *(signed char *)(p0 + 1);
    }
    return v0;
}

int func_0015A908(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_0015AD30(D_00593678);
        v0 = -1;
    } else {
        v0 = *(int *)(p0 + 36);
    }
    return v0;
}
