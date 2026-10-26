// cc: ee-gcc2.96 -O1 -G0
void func_001043A8();

int func_00104A98(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    int v0;
    if (p2 == 1) {
        v0 = ((unsigned int)*(int *)(p0 + 16) < (unsigned int)p1);
    } else {
        func_001043A8(p0, p1, p3);
        v0 = 0;
    }
    return v0;
}
