// cc: ee-gcc2.96 -O2 -G0
int func_001916F0(p0, p1) char *p0; char *p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    v2 = *(signed char *)(p0 + 0);
    v3 = 0;
    if (v2 != 46) {
        if (v2 != 32) {
            if (v2 != 0) {
                if (((unsigned int)(v2 + -48) < (unsigned int)10)) {
                    v0 = 46;
                    v1 = 32;
                    do {
                        p0 = (p0 + 1);
                        tmp0 = ((v3 * 10) + v2);
                        v2 = *(signed char *)(p0 + 0);
                        v3 = (tmp0 + -48);
                        v4 = (v2 + -48);
                        if (v2 == v0) break;
                        if (v2 == v1) break;
                        if (v2 == 0) break;
                    } while (((unsigned int)v4 < (unsigned int)10));
                }
            }
        }
    }
    *(int *)(p1 + 0) = v3;
    return (int)p0;
}
