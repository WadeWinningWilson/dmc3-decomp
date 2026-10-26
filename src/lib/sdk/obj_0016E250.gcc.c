// cc: ee-gcc2.96 -O2 -G0
void func_0016DE38();

int func_001706F8();

int func_0016E318(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    v1 = (char *)p1;
    v2 = (char *)p2;
    v3 = func_001706F8();
    v4 = 0xff03020e;
    if (v3 != 0) {
        func_0016DE38(0, v4);
        return;
    } else {
        *(int *)(v1 + 0) = *(int *)(v0 + 692);
        *(int *)(v2 + 0) = *(int *)(v0 + 696);
        return v3;
    }
}

void func_0016E390() {
}
