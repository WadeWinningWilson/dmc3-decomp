int func_001AD140();

int func_00206730();

int func_0033D310(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = func_00206730((v0 + 3020));
    v2 = *(int *)(v0 + 3020);
    if (v2 != 0) {
        v1 = func_001AD140(v2);
        *(int *)(v0 + 3020) = 0;
    }
    return v1;
}
