// cc: ee-gcc2.96 -O2 -G0
void func_0017CA80() {
}

void func_0017CBC0(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    int tmp1;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    do {
        tmp0 = (v2 << 2);
        v2 = (v2 + 1);
        v3 = (char *)(tmp0 + v0);
        tmp1 = *(int *)((char *)(tmp0 + v1) + 0);
        *(int *)(v3 + 0) = p2;
        p2 = (p2 + tmp1);
    } while ((v2 < 8));
}
