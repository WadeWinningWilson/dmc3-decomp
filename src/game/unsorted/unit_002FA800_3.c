extern char D_01DF9EC0[];

int func_002FB170(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    v0 = *(char **)((D_01DF9EC0 + (p0 << 2)) + 0);
    if (v0 == 0) {
        return 0;
    } else {
        if ((unsigned int)p1 >= (unsigned int)*(int *)(v0 + 12)) {
            return 0;
        } else {
            v1 = (int)((v0 + (p1 << 5)) + 16);
            return v1;
        }
    }
}
