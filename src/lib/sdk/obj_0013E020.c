void func_0013E020(p0, p1, p2) char *p0; int p1; int p2; {
    *(char *)(p0 + 0) = 2;
    *(int *)(p0 + 12) = *(int *)(p0 + 20);
    *(int *)(p0 + 16) = p2;
    *(int *)(p0 + 8) = p1;
    *(int *)(p0 + 4) = p1;
}

void func_0013E040(p0, p1, p2) char *p0; int p1; int p2; {
    *(char *)(p0 + 0) = 1;
    if (p2 != 0) {
        *(int *)(p0 + 12) = 0;
    } else {
        *(int *)(p0 + 12) = *(int *)(p0 + 20);
    }
    *(int *)(p0 + 16) = 100;
    *(int *)(p0 + 8) = p1;
    *(int *)(p0 + 4) = p1;
}
