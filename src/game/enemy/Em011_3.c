void func_0033A660(p0, p1) char *p0; int p1; {
    int v0;
    int tmp0;
    *(char *)(p0 + 4941) = p1;
    v0 = *(unsigned char *)(p0 + 4944);
    switch (v0) {
    case 0:
        break;
    case 2:
        *(char *)(p0 + 4941) = 1;
        break;
    case 1:
        *(char *)(p0 + 4941) = 0;
        break;
    }
    tmp0 = *(unsigned char *)(p0 + 4941);
    if (tmp0 != 0) {
        *(char *)(p0 + 5016) = 2;
        *(char *)(p0 + 5017) = 2;
    } else {
        *(char *)(p0 + 5016) = 0;
        *(char *)(p0 + 5017) = 0;
    }
}
