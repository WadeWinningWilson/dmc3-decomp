// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
int func_00141278(p0, p1, p2, p3) char *p0; char *p1; char *p2; char *p3; {
    int tmp1;
    tmp1 = *(int *)(p0 + 60);
    *(int *)(p1 + 0) = *(int *)(p0 + 140);
    *(int *)(p2 + 0) = (*(int *)(p0 + 64) - *(int *)(p0 + 140));
    *(int *)(p3 + 0) = (*(int *)(p0 + 24) - *(int *)(p0 + 136));
    return tmp1;
}
