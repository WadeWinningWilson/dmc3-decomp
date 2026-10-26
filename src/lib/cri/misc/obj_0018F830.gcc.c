// cc: ee-gcc2.96 -O2 -G0
int func_0018F968(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 68));
    return *(int *)(p0 + 7976);
}

int func_0018F980(p0, p1, p2) char *p0; int p1; int p2; {
    p0 = (p0 + (p1 * 68));
    *(int *)(p0 + 7980) = p2;
    return (p1 * 68);
}

int func_0018F998(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 68));
    return *(int *)(p0 + 7980);
}

int func_0018F9B0(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 68));
    return (*(int *)(p0 + 7988) != 0);
}
