int func_001AD140();

int func_00496640(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 1024);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 1024) = 0;
    }
    return v2;
}
