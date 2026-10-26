// cc: ee-gcc2.96 -O2 -G8
int func_0018D208();

int func_0018F0C8();

int func_00190AC0(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    tmp0 = func_0018D208(p0, 15);
    v0 = p0;
    if (tmp0 == 0) {
        return 1;
    } else {
        tmp1 = func_0018F0C8(v0);
        v1 = (tmp1 != 0);
        return v1;
    }
}

int func_0017E010();

void func_0018F950();

int func_0018F968();

int func_00190B88();

int func_00190B08(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    v1 = 1;
    v3 = func_0018F968(p0, 6);
    v2 = (int)v0;
    if (v3 != v1) {
        v3 = func_0017E010(v2, *(int *)(v0 + 8400));
        v4 = (int)v0;
        if (v3 == v1) {
            v3 = func_00190B88(v4);
            v5 = (int)v0;
            if (v3 != 0) {
                func_0018F950(v5, 6, 1);
                return;
            } else {
                return v3;
            }
        } else {
            return v3;
        }
    } else {
        return v3;
    }
}

void func_0017DF80();

void func_00190C80(p0, p1) char *p0; int p1; {
    func_0017DF80(p0, *(int *)(p0 + 8400), p1);
}
