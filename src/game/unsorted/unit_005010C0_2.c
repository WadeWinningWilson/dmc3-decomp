int func_00501140() {
    char *func_00501280();
    char *v0;
    v0 = func_00501280();
    if (v0 == 0) {
        v0 = (char *)-1;
    } else {
        v0 = (char *)*(signed char *)(v0 + 3);
    }
    return (int)v0;
}

int func_00501170(p0, p1, p2) int p0; int p1; int p2; {
    char *func_00501280();
    int v0;
    char *v1;
    int v2;
    v0 = p2;
    v1 = func_00501280();
    if (v1 == 0) {
        v2 = 0;
    } else {
        *(char *)(v1 + 4) = v0;
        v2 = 1;
    }
    return v2;
}

int func_005011B0() {
    char *func_00501280();
    char *v0;
    int v1;
    v0 = func_00501280();
    if (v0 == 0) {
        v1 = 0;
    } else {
        *(char *)(v0 + 1) = -1;
        v1 = 1;
    }
    return v1;
}

char *func_00501230();

int func_005010C0(int p0, int p1, int p2, int p3) {
    int func_00501280();
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_00501280();
    if (tmp0 != 0) {
        v2 = 0;
    } else {
        v3 = func_00501230(v0);
        if (v3 == 0) {
            v2 = 0;
        } else {
            *(char *)(v3 + 0) = 1;
            *(char *)(v3 + 2) = v1;
            *(char *)(v3 + 1) = 0;
            *(char *)(v3 + 3) = -1;
            *(char *)(v3 + 4) = -1;
            v2 = 1;
        }
    }
    return v2;
}
