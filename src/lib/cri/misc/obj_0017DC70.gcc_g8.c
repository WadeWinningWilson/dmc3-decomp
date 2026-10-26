// cc: ee-gcc2.96 -O2 -G8
void func_0018F900();

int func_0017DF28(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)(p0 + 4872);
    v1 = p2;
    v0 = (v0 + (p1 * 116));
    v2 = 11;
    if (*(int *)(v0 + 4) == 0) {
        func_0018F900(p0, *(int *)(v0 + 76), v2, v1, 0);
        return;
    } else {
        return 0;
    }
}
