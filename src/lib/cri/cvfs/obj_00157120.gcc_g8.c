// cc: ee-gcc2.96 -O2 -G8
void func_00157318();

void func_00157780();

void func_001574B0(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        if (!((unsigned int)*(unsigned char *)(v0 + 2) < (unsigned int)2)) {
            func_00157780();
        }
        *(char *)(v0 + 0) = 0;
        func_00157318(v0);
        return;
    } else {
        return;
    }
}
