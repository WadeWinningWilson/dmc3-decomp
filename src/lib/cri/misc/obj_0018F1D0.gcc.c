// cc: ee-gcc2.96 -O2 -G0
void func_0018F280();

void func_0018F268(p0) int p0; {
    func_0018F280(p0, 1);
}

void func_0018F3B8(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 0) = 0;
    v1 = 2;
    *(int *)(p0 + 12) = p1;
    *(int *)(p0 + 16) = 8;
    v0 = (p0 + 28);
    do {
        v1 = (v1 + -1);
        *(int *)(v0 + 0) = 8;
        v0 = (v0 + -4);
    } while (v1 >= 0);
    *(int *)(p0 + 32) = -1;
}
