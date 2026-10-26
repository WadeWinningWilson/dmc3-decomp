// cc: ee-gcc2.96 -O2 -G0
void func_00164A18() {
}

void func_001648D8();

int func_0016A398();

void func_00164B20(p0, p1) int p0; int p1; {
    char *v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = (char *)(p0 + 352);
    v1 = (char *)p1;
    tmp0 = func_0016A398();
    v2 = 0xff030000;
    if (tmp0 != 0) {
        func_001648D8(0, (v2 | 525));
        return;
    } else {
        *(int *)(v1 + 0) = *(int *)(v0 + 724);
        return;
    }
}
