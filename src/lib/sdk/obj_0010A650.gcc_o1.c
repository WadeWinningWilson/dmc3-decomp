// cc: ee-gcc2.96 -O1 -G0
void func_0010ACC8(p0) char *p0; {
    int tmp0;
    int tmp1;
    tmp0 = *(int *)(p0 + 8);
    if (tmp0 != 2) {
        tmp1 = *(int *)(p0 + 304);
        *(int *)(p0 + 8) = 2;
        *(int *)(p0 + 196) = tmp1;
    }
    *(int *)(p0 + 2104) = 1;
}
