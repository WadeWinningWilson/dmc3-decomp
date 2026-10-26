void func_00138410(p0, p1) char *p0; int p1; {
    if (p1 < 0) {
        p1 = 0;
    } else {
        if (p1 > 8) {
            p1 = 8;
        }
    }
    *(int *)(p0 + 4) = p1;
}
