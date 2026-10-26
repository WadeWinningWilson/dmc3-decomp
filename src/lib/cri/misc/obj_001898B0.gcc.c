// cc: ee-gcc2.96 -O2 -G0
int func_001898B0() {
    return 72;
}

void func_00180180();

int func_001803A0();

int func_001898B8(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_001803A0();
    v1 = 0;
    v2 = 0xff000141;
    if (tmp0 != 0) {
        func_00180180(v1, v2);
        v3 = 0;
    } else {
        v3 = *(int *)(v0 + 80);
    }
    return v3;
}
