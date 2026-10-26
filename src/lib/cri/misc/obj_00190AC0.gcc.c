// cc: ee-gcc2.96 -O2 -G0
int func_00190B88() {
    return 1;
}

int func_00190B90() {
    return 0;
}

int func_00190B98() {
    return 0;
}

int func_00190BA0() {
    return 0;
}

int func_00190BA8() {
    return 0;
}

int func_00190BB0() {
    return 0;
}

int func_00190BB8() {
    return 0;
}

int func_00190BC0() {
    return 0;
}

void func_00180180();

void func_00190BE8(p0) int p0; {
    func_00180180(p0, 0xff000701);
}

int func_0017DF28();

int func_0018EC50();

int func_00190C08(p0, p1) int p0; int p1; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    v1 = (char *)p1;
    v2 = (int)v1;
    if (!((unsigned int)(*(int *)(v0 + 72) + -3) < (unsigned int)2)) {
        *(int *)(v1 + 0) = 0;
        v3 = 0;
    } else {
        v3 = func_0017DF28(p0, *(int *)(v0 + 8400), v2);
        v4 = (int)v0;
        if (v3 == 0) {
            v3 = func_0018EC50(v4, *(int *)(v1 + 0));
            if (v3 == 0) {
                *(int *)(v1 + 0) = 0;
            } else {
                v3 = 0;
            }
        }
    }
    return v3;
}
