// cc: ee-gcc2.96 -O2 -G0
int func_00192750(p0) char *p0; {
    int tmp0;
    int tmp1;
    int tmp2;
    tmp0 = *(int *)(p0 + 0);
    tmp1 = -*(int *)(p0 + 12);
    tmp2 = (*(int *)(p0 + 12) * (*(int *)(p0 + 8) + -1));
    *(int *)(p0 + 12) = -*(int *)(p0 + 12);
    *(int *)(p0 + 0) = (tmp0 + tmp2);
    return tmp1;
}

int func_00192778(p0) char *p0; {
    int tmp0;
    int tmp1;
    int tmp2;
    tmp0 = *(int *)(p0 + 0);
    tmp1 = -*(int *)(p0 + 12);
    tmp2 = (*(int *)(p0 + 12) * (*(int *)(p0 + 8) + -1));
    *(int *)(p0 + 12) = -*(int *)(p0 + 12);
    *(int *)(p0 + 0) = (tmp0 + tmp2);
    return tmp1;
}

void func_001928E0();

void func_001928C8() {
    func_001928E0();
}
