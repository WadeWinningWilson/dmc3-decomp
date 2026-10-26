// cc: ee-gcc2.96 -O2 -G0
void func_0017F718();

int func_0017F850();

void func_0017F6D8(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = func_0017F850();
    v2 = v1;
    if (v1 != 0) {
        func_0017F718(v2, (v0 + 120));
        return;
    } else {
        return;
    }
}

void func_0017F8A0();

void func_0017FEC0();

void func_0017F7E8(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = (v0 + 120);
    v2 = func_0017F850();
    v3 = v2;
    v4 = v1;
    if (v2 != 0) {
        func_0017F718(v4, v3);
        func_0017F8A0(v1);
        func_0017FEC0(v0);
        return;
    } else {
        return;
    }
}
