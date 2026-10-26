// cc: ee-gcc2.96 -O2 -G0
extern char D_00518F58[];

extern char D_00518F68[];

void func_00128488();

void func_0013E238() {
    char *v0;
    int v1;
    v0 = D_00518F58;
    v1 = *(int *)(v0 + 0);
    if (v1 == 1) {
        func_00128488(D_00518F68, 0, 60);
        v1 = *(int *)(v0 + 0);
    }
    *(int *)(v0 + 0) = (v1 + -1);
}

extern char D_0058F888[];

extern char D_0058F8B0[];

void func_0013E1B8();

int func_0013E338();

void func_0013E390();

int func_0013E288(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int v5;
    int v6;
    int tmp0;
    v0 = p0;
    v1 = p1;
    v2 = (v1 < 6144);
    if (v0 == 0) {
        v3 = (int)D_0058F888;
        func_0013E1B8(v3);
        v6 = 0;
    } else {
        if (v2 != 0) {
            v3 = (int)D_0058F8B0;
            func_0013E1B8(v3);
            v6 = 0;
        } else {
            tmp0 = func_0013E338();
            v4 = (char *)tmp0;
            v5 = (int)v4;
            if (v4 != 0) {
                func_00128488(v5, 0, 60);
                func_0013E390(v4);
                *(int *)(v4 + 8) = v0;
                *(int *)(v4 + 12) = v1;
                *(int *)(v4 + 24) = 2;
                *(int *)(v4 + 0) = 1;
            }
            v6 = (int)v4;
        }
    }
    return v6;
}

int func_0013E338() {
    char *v0;
    int v1;
    char *v2;
    int v3;
    v0 = D_00518F68;
    v1 = 0;
    if (*(int *)(v0 + 0) != 0) {
        v2 = v0;
        v3 = (int)v0;
        do {
            v1 = (v1 + 1);
            v2 = (v2 + 60);
            v3 = (v3 + 60);
            if (v1 > 0) break;
            v0 = (char *)v3;
        } while (*(int *)(v2 + 0) != 0);
    }
    return ((v1 ^ 1) != 0 ? v0 : 0);
}
