// cc: ee-gcc2.96 -O2 -G8
void func_00182DA8();

void func_00182E18();

int func_00182EB8();

void func_00182ED0();

void func_00183138();

int func_00183200();

int func_0018D208();

int func_00182D10(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    v4 = func_0018D208(p0, 5);
    v1 = (int)v0;
    if (v4 != 0) {
        tmp0 = func_00182EB8(v1);
        v2 = (int)v0;
        if (tmp0 == 1) {
            return 0;
        } else {
            func_00182DA8(v2);
            v3 = (int)v0;
            if (*(int *)(v0 + 72) == 2) {
                func_00182E18(v3);
            }
            tmp1 = func_00183200(v0);
            func_00182ED0(v0);
            func_00183138(v0);
            v4 = tmp1;
            return v4;
        }
    } else {
        return v4;
    }
}
