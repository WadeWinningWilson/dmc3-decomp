// cc: ee-gcc2.96 -O2 -G0
int func_00142028(p0, p1, p2) char *p0; char *p1; int p2; {
    int v0;
    if (p2 > 0) {
        do {
            v0 = *(unsigned short *)(p1 + 0);
            p1 = (p1 + 2);
            p2 = (p2 + -1);
            *(short *)(p0 + 0) = v0;
            p0 = (p0 + 2);
        } while (p2 > 0);
    }
    return v0;
}
