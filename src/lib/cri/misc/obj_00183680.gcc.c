// cc: ee-gcc2.96 -O2 -G0
int func_0017D858();

int func_0017E070();

void func_00180180();

int func_001836E8(p0) int p0; {
    int v0;
    int v1;
    int tmp1;
    int tmp2;
    int tmp3;
    tmp1 = *(int *)((char *)p0 + 8128);
    tmp2 = func_0017D858(p0, *(int *)((char *)p0 + 8128));
    tmp3 = func_0017E070(p0, tmp1);
    v1 = p0;
    v0 = 0xff000f1c;
    if (((tmp2 - tmp3) < *(int *)((char *)p0 + 40))) {
        func_00180180(v1, v0);
        return;
    } else {
        return 0;
    }
}
