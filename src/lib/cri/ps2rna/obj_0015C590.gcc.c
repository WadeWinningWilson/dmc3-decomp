// cc: ee-gcc2.96 -O2 -G0
void func_001487D8();

void func_001487F0();

void func_0014F198();

void func_0015BC70();

void func_0015BE00();

int func_0015C660(p0) char *p0; {
    char *v0;
    char *v1;
    int v2;
    v0 = *(char **)(p0 + 4);
    v1 = *(char **)(v0 + 4);
    v2 = *(int *)(v1 + 232);
    if (v2 == 0) {
        return (int)v0;
    } else {
        func_0014F198();
        func_001487D8();
        func_0015BE00(v2);
        *(int *)(v1 + 232) = 0;
        func_0015BC70(0);
        func_001487F0();
        return;
    }
}

void func_0015BEC0();

void func_0015C6E8(p0, p1) char *p0; int p1; {
    func_0015BEC0(*(int *)(p0 + 232), ((p1 << 16) >> 16));
}

void func_001446F0();

void func_0015C738(p0, p1) int p0; int p1; {
    func_001446F0(p1);
}
