int func_0030B820();

int func_0030B920();

int func_0030BAC0();

int func_0030BBC0();

int func_0030B340(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 5);
    tmp0 = 3;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = func_0030B820(p0, v0);
            break;
        case 1:
            v1 = func_0030B920(p0, v0);
            break;
        case 2:
            v1 = func_0030BAC0(p0, v0);
            break;
        }
    } else {
        v1 = func_0030BBC0(p0, v0);
    }
    return v1;
}
