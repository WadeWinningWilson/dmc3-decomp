// cc: ee-gcc2.96 -O2 -G0
void func_001431D8();

void func_001431F0();

void func_0014B510();

void func_0014CC08(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        func_001431D8();
        v1 = *(int *)(v0 + 128);
        if (*(int *)(v0 + 128) != 0) {
            func_0014B510(v1);
        }
        v2 = *(int *)(v0 + 132);
        if (v2 != 0) {
            func_0014B510(v2);
        }
        *(int *)(v0 + 0) = 0;
        func_001431F0();
        return;
    } else {
        return;
    }
}

int func_0014CC70(p0) char *p0; {
    return *(signed char *)(p0 + 1);
}
