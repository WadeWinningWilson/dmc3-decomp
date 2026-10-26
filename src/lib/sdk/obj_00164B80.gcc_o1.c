// cc: ee-gcc2.96 -O1 -G0
int func_00164C88() {
    int v0;
    v0 = 63;
    do {
        v0 = (v0 + -32);
    } while (v0 >= 0);
    return v0;
}

int func_00164D30(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    p0 = (p0 + (p1 * 12));
    p0 = (p0 + 280);
    *(int *)(p0 + 8) = p4;
    *(int *)(p0 + 0) = p2;
    *(int *)(p0 + 4) = p3;
    return (p1 * 12);
}

void func_00164D58(p0, p1, p2) char *p0; int p1; int p2; {
    p0 = (p0 + 328);
    *(int *)(p0 + 4) = p2;
    *(int *)(p0 + 0) = p1;
}
