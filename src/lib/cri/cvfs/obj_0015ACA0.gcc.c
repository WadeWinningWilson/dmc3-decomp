// cc: ee-gcc2.96 -O2 -G0
extern char D_00593678[];

void func_0015AD30();

void func_0015ACA0(p0, p1) char *p0; int p1; {
    if (p0 == 0) {
        func_0015AD30(D_00593678);
        return;
    } else {
        *(char *)(p0 + 3) = p1;
        return;
    }
}
