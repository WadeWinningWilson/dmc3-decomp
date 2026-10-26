// cc: ee-gcc2.96 -O2 -G0
int func_0017D898();

int func_0018D040();

int func_0018D208();

int func_0018F968();

void func_00181CA8(p0) int p0; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    v0 = (char *)p0;
    v1 = *(char **)(v0 + 8052);
    tmp0 = func_0018D208(p0, 6);
    v2 = (int)v0;
    if (tmp0 != 0) {
        tmp1 = func_0018D208(v2, 80);
        v3 = (int)v0;
        if (tmp1 != 0) {
            tmp2 = func_0017D898(v3, 2);
            v6 = (int)v0;
            if (tmp2 == 0) {
                if (*(int *)(v1 + 8) == 0) {
                    tmp3 = func_0018F968(v6, 6);
                    v5 = (int)v0;
                    if (tmp3 != 0) {
                        func_0018D040(v5, 6, 0);
                    }
                    v6 = (int)v0;
                }
            }
        } else {
            v6 = (int)v0;
        }
    } else {
        v6 = (int)v0;
    }
    v7 = func_0018D208(v6, 5);
    v8 = (int)v0;
    if (v7 != 0) {
        v7 = func_0018D208(v8, 79);
        v9 = (int)v0;
        if (v7 != 0) {
            v7 = func_0017D898(v9, 1);
            if (v7 == 0) {
                v7 = *(int *)(v1 + 4);
                if (v7 == 0) {
                    v7 = func_0018F968(v0, 7);
                    v4 = (int)v0;
                    if (v7 != 0) {
                        func_0018D040(v4, 5, 0);
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
