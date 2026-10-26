// cc: ee-gcc2.96 -O2 -G0
extern char D_006341E0[];

int func_00169F50() {
    int v0;
    char *v1;
    int v2;
    char *v3;
    v1 = D_006341E0;
    v0 = *(int *)(v1 + 64);
    v3 = *(char **)(v1 + 68);
    if (v0 > 0) {
        v1 = (char *)v0;
        v2 = 1;
        do {
            v1 = (v1 + -1);
            *(int *)(v3 + 0) = v2;
            v3 = (v3 + 1664);
        } while (v1 != 0);
    }
    return (int)v1;
}

void func_0016A0E8() {
}

int func_0016A128();

void func_0016A178();

int func_0016A0F0() {
    int v0;
    int v1;
    v0 = func_0016A128();
    v1 = v0;
    if (v0 != 0) {
        func_0016A178(v1);
        return;
    } else {
        return v0;
    }
}

void func_001648D8();

int func_0016A398();

void func_0016A238(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_0016A398();
    v1 = 0xff030201;
    if (tmp0 != 0) {
        func_001648D8(0, v1);
        return;
    } else {
        *(int *)(v0 + 0) = 1;
        return;
    }
}

void func_0016A288() {
}
