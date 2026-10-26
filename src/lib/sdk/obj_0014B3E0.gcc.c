// cc: ee-gcc2.96 -O2 -G0
int func_0014B3E0(p0, p1, p2) char *p0; char *p1; char *p2; {
    unsigned short tmp0;
    tmp0 = *(unsigned short *)(p0 + 8);
    *(short *)(p1 + 0) = *(unsigned short *)(p0 + 8);
    *(short *)(p2 + 0) = *(unsigned short *)(p0 + 10);
    return tmp0;
}

int func_0014B3F8(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    v1 = ((p1 << 16) >> 16);
    if (v0 != 0) {
        v2 = *(unsigned short *)(v0 + 8);
        v3 = ((((*(short *)(v0 + 4) * *(short *)(v0 + 8)) + (*(short *)(v0 + 6) * *(short *)(v0 + 10))) >> 12) + v1);
        if ((v3 < 32767)) {
            v4 = ((((v3 < -32768) == 0 ? v3 : -32768) << 16) >> 16);
        } else {
            v4 = 32767;
        }
        *(short *)(v0 + 10) = v2;
        *(short *)(v0 + 8) = v4;
        return v4;
    } else {
        return v1;
    }
}
