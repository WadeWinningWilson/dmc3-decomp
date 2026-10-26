int func_00100DA0(p0, p1) char *p0; char *p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = *(signed char *)(p0 + 0);
    if ((v0 & 1) == 0) {
        *(int *)(p1 + 0) = (v0 >> 1);
        return (int)(p0 + 1);
    } else {
        v1 = *(unsigned char *)(p0 + 1);
        if ((v0 & 2) == 0) {
            *(int *)(p1 + 0) = (((v0 >> 2) << 8) | v1);
            return (int)(p0 + 2);
        } else {
            v2 = *(unsigned char *)(p0 + 2);
            if ((v0 & 4) == 0) {
                *(int *)(p1 + 0) = (v2 | (((v0 >> 3) << 16) | (v1 << 8)));
                return (int)(p0 + 3);
            } else {
                v3 = (int)(p0 + 4);
                *(int *)(p1 + 0) = (*(unsigned char *)(p0 + 3) | ((v2 << 8) | (((v0 >> 3) << 24) | (v1 << 16))));
                return v3;
            }
        }
    }
}
