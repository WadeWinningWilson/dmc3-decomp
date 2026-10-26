// cc: ee-gcc2.96 -O2 -G0
int func_0017C700() {
    return 0;
}

int func_0017C708() {
    return 0;
}

void func_0017C750();

int func_0018D208();

int func_0017C710(p0) int p0; {
    int v0;
    int v1;
    v0 = func_0018D208(p0, 6);
    v1 = p0;
    if (v0 != 0) {
        func_0017C750(v1);
        return;
    } else {
        return v0;
    }
}

int func_0017E010();

void func_0018F950();

int func_0018F968();

int func_0017C780(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    v0 = (char *)p0;
    v1 = 1;
    v3 = func_0018F968(p0, 7);
    v2 = (int)v0;
    if (v3 != v1) {
        v3 = func_0017E010(v2, *(int *)(v0 + 8468));
        v4 = (int)v0;
        v5 = 7;
        v6 = 1;
        if (v3 == v1) {
            func_0018F950(v4, v5, v6);
            return;
        } else {
            return v3;
        }
    } else {
        return v3;
    }
}
