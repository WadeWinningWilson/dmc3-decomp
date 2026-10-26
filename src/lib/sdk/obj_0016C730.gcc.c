// cc: ee-gcc2.96 -O2 -G0
void func_0016C798() {
}

void func_0016C7A0() {
}

void func_0016CB90();

int func_0016CD60();

int func_0016C7A8(p0, p1) int p0; int p1; {
    int v3;
    char *v0;
    char *v1;
    int v2;
    v1 = (char *)p1;
    v0 = (char *)p0;
    v2 = func_0016CD60();
    v3 = 0xff020000;
    if (v2 != 0) {
        v3 = (v3 | 513);
        func_0016CB90(0, v3);
        return;
    } else {
        *(long *)(v1 + 0) = *(long *)(v0 + 24);
        *(long *)(v1 + 8) = *(long *)(v0 + 32);
        return v2;
    }
}
