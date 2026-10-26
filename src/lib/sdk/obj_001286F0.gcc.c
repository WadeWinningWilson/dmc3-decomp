// cc: ee-gcc2.96 -O2 -G0
int func_00128618();

int func_00128A68(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_00128618(p0, 1);
    *(int *)((char *)tmp0 + 20) = p1;
    *(int *)((char *)tmp0 + 16) = 1;
    return tmp0;
}
