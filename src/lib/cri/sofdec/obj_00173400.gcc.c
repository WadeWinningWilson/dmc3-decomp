// cc: ee-gcc2.96 -O2 -G0
int func_00173500(p0, p1, p2) char *p0; char *p1; char *p2; {
    int tmp0;
    int tmp1;
    tmp0 = *(int *)(p0 + 396);
    tmp1 = *(int *)(p0 + 392);
    *(int *)(p2 + 0) = *(int *)(p0 + 396);
    *(int *)(p1 + 0) = tmp1;
    return tmp0;
}

int func_00173518(p0) char *p0; {
    return (*(int *)(p0 + 392) != 0);
}
