// cc: ee-gcc2.96 -O2 -G0
void func_00104338();

int func_00104A60(p0, p1) char *p0; int p1; {
    int v0;
    if (p1 == 1) {
        v0 = (((unsigned int)*(int *)(p0 + 0) >> 8) & 1);
    } else {
        func_00104338();
        v0 = 0;
    }
    return v0;
}
