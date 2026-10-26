// cc: ee-gcc2.96 -O2 -G0
void func_0016DE38();

int func_001706F8();

int func_0016E1F0(p0, p1) int p0; int p1; {
    char *v0;
    int v2;
    int v3;
    char *v1;
    v0 = (char *)p0;
    v1 = (char *)p1;
    v2 = func_001706F8();
    v3 = 0xff030000;
    if (v2 != 0) {
        func_0016DE38(0, (v3 | 525));
        return;
    } else {
        *(int *)(v1 + 0) = *(int *)(v0 + 680);
        return v2;
    }
}
