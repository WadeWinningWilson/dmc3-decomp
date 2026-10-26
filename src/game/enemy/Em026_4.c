void func_003A02B0(char *p0, int p1) {
    short t0;
    t0 = *(short *)(p0 + 2752);
    *(short *)(p0 + 2754) = *(short *)(p0 + 2752);
    *(short *)(p0 + 2752) = p1;
    *(char *)(p0 + 7) = 0;
    *(char *)(p0 + 6) = 0;
    *(char *)(p0 + 5) = 0;
}

int func_0039DF10();

int func_0039E050();

int func_0039DED0(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 12007) == 1) {
        v0 = func_0039E050();
    } else {
        v0 = func_0039DF10();
    }
    return (v0 & 255);
}
