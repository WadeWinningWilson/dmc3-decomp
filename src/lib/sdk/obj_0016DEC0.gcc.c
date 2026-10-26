// cc: ee-gcc2.96 -O2 -G0
int func_0016D110();

void func_0016DE38();

int func_001706F8();

void func_0016DF70(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int tmp0;
    int tmp1;
    v0 = (char *)p1;
    v1 = p0;
    v2 = (char *)p2;
    tmp0 = func_001706F8();
    v3 = 0xff030000;
    v4 = 204;
    v5 = 0;
    v3 = (v3 | 522);
    if (tmp0 != 0) {
        func_0016DE38(v5, v3, v4);
        return;
    } else {
        v6 = *(int *)(v0 + 4);
        v0 = *(char **)(v0 + 0);
        tmp1 = func_0016D110(v0, v6, v4);
        v7 = v1;
        v8 = 0xff030000;
        v0 = (char *)(tmp1 - (int)v0);
        v8 = (v8 | 773);
        if (tmp1 == 0) {
            *(int *)(v2 + 0) = v6;
        } else {
            *(char **)(v2 + 0) = v0;
            v8 = 0;
        }
        func_0016DE38(v7, v8);
        return;
    }
}
