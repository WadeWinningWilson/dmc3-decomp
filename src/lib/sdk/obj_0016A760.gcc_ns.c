// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
int func_0016A760(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    p1 = (p1 << 24);
    v0 = (p2 & 15);
    p1 = (p1 >> 24);
    p0 = (p0 + p2);
    if (v0 != 0) {
        do {
            p0 = (p0 + -1);
            v0 = (v0 + -1);
            *(char *)(p0 + 0) = p1;
        } while (v0 != 0);
    }
    p2 = ((unsigned int)p2 >> 4);
    if (p2 != 0) {
        do {
            p0 = (p0 + -1);
            p2 = (p2 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
            p0 = (p0 + -1);
            *(char *)(p0 + 0) = p1;
        } while (p2 != 0);
    }
    return v0;
}
