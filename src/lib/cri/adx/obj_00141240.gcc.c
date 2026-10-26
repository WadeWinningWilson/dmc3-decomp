// cc: ee-gcc2.96 -O2 -G0
int func_001412A8(p0, p1, p2) char *p0; int p1; int p2; {
    int tmp0;
    int tmp1;
    tmp0 = (*(int *)(p0 + 140) + p2);
    tmp1 = (*(int *)(p0 + 136) + p2);
    *(int *)(p0 + 140) = (*(int *)(p0 + 140) + p2);
    *(int *)(p0 + 136) = tmp1;
    return tmp0;
}

void func_00141738(p0) char *p0; {
    *(short *)(p0 + 154) = 0;
}
