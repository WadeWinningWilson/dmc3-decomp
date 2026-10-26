// cc: ee-gcc2.96 -O2 -G0
void func_0015BE80(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v3 = 0;
    v1 = *(int *)(v0 + 8);
    v2 = *(int *)(v0 + 12);
    do {
        tmp0 = (v3 << 2);
        v3 = (v3 + 1);
        *(int *)((char *)(tmp0 + v1) + 0) = 0;
        *(int *)((char *)(tmp0 + v2) + 0) = 0;
    } while ((v3 < 96));
    *(int *)(v0 + 20) = 0;
    *(int *)(v0 + 24) = 64;
}

void func_0015BB48();

void func_0015BB60();

void func_0015C0F0();

void func_0015C090(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_0015BB48();
    func_0015C0F0(p0, p1, p2, p3);
    func_0015BB60();
}
