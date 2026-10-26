// cc: ee-gcc2.96 -O2 -G0
void func_00128488();

void func_001431D8();

void func_001431F0();

void func_0013F320(p0) int p0; {
    int v0;
    v0 = p0;
    if (v0 != 0) {
        func_001431D8();
        func_00128488(v0, 0, 48);
        func_001431F0();
        return;
    } else {
        return;
    }
}

int func_0013F370(p0) char *p0; {
    return *(signed char *)(p0 + 1);
}

void func_0013F518(p0) char *p0; {
    *(char *)(p0 + 1) = 0;
}
