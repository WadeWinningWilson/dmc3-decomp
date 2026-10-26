// cc: ee-gcc2.96 -O2 -G0
int func_0010C0C8(p0, p1) char *p0; int p1; {
    *(int *)(*(char **)(p0 + 64) + 240) = p1;
    return 1;
}

int func_0010C0D8(p0) char *p0; {
    return *(int *)(*(char **)(p0 + 64) + 228);
}

int func_0010C0E8(p0) char *p0; {
    return *(int *)(*(char **)(p0 + 64) + 232);
}

int func_0010C0F8(p0) char *p0; {
    return (*(int *)(p0 + 64) + 204);
}

int func_0010C108(p0) char *p0; {
    return (*(int *)(p0 + 64) + 204);
}

int func_0010C118(p0, p1) char *p0; int p1; {
    int tmp0;
    tmp0 = *(int *)(*(char **)(p0 + 64) + 256);
    *(int *)(*(char **)(p0 + 64) + 256) = p1;
    return tmp0;
}

int func_0010C158(p0) char *p0; {
    int tmp0;
    tmp0 = *(int *)(p0 + 8);
    *(int *)(p0 + 12) = *(int *)(p0 + 8);
    return tmp0;
}

int func_0010C168(p0) char *p0; {
    int tmp0;
    tmp0 = *(int *)(p0 + 12);
    *(int *)(p0 + 8) = *(int *)(p0 + 12);
    return tmp0;
}

int func_0010C1E8(p0) char *p0; {
    return ((*(int *)(p0 + 0) + *(int *)(p0 + 4)) - *(int *)(p0 + 8));
}
