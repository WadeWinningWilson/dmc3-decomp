// cc: ee-gcc2.96 -O2 -G0
int func_00160AA0();

void func_00160BB0(p0, p1) int p0; int p1; {
    int tmp0;
    *(int *)((char *)p1 + 0) = (p0 + 16);
    tmp0 = func_00160AA0((p0 + 8));
    *(int *)((char *)p1 + 4) = tmp0;
}
