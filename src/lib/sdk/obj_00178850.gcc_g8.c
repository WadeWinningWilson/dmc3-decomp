// cc: ee-gcc2.96 -O2 -G8
extern char D_005972F0[];

void func_0015A7B0();

int func_00175E88();

void func_00178548();

void func_001785D8();

void func_00178790();

void func_001798E8();

void func_00178850(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v1 = p1;
    v2 = p2;
    tmp0 = func_00175E88();
    if (tmp0 == 0) {
        func_001798E8(D_005972F0);
        return;
    } else {
        func_0015A7B0(*(int *)(v0 + 76));
        func_00178790(v0, v1, v2);
        func_001785D8(v0, 1);
        func_00178548(v0);
        return;
    }
}

int func_0015ABF8();

void func_00178B78(p0, p1) char *p0; int p1; {
    int tmp1;
    tmp1 = func_0015ABF8(*(int *)(p0 + 76));
    *(int *)((char *)p1 + 0) = tmp1;
}
