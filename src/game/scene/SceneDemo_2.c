extern char D_0054E4B0[];

int func_002DBF70(p0) char *p0; {
    int v0;
    int v1;
    v0 = (*(int *)(p0 + 20) << 2);
    if ((*(int *)(p0 + 20) < 200)) {
        v1 = *(int *)(*(char **)((D_0054E4B0 + v0) + 0) + 4);
    } else {
        v1 = -1;
    }
    return v1;
}
