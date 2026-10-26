// cc: ee-gcc2.96 -O2 -G0
int func_0014D518();

int func_0014D5F0();

int func_0014D6C0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = 0;
    v1 = p0;
    v2 = 0;
    if ((p1 < 256)) {
        v3 = func_0014D518(v0, v2, 0, v1);
    } else {
        v3 = func_0014D5F0(v0, v2, 0, v1);
    }
    return v3;
}

void func_00128488();

void func_0014D850();

void func_0014DA10();

void func_0014D708(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        func_0014DA10();
        func_0014D850(v0);
        *(char *)(v0 + 0) = 0;
        func_00128488(v0, 0, 96);
        return;
    } else {
        return;
    }
}

void func_00146858();

void func_0014D760();

void func_0014D7D8(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_0014D760();
    do {
        func_00146858();
        v1 = *(signed char *)(v0 + 69);
    } while (v1 != 0);
}

void func_0014D9A8();

void func_001616F8();

void func_00161710();

void func_0014D810(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_0014D9A8();
    func_001616F8();
    v1 = *(signed char *)(v0 + 73);
    if (v1 == 1) {
        *(char *)(v0 + 70) = v1;
    }
    *(char *)(v0 + 69) = 0;
    func_00161710();
}

void func_0014D810();

void func_0014D850(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_0014DA10();
    func_0014D810(v0);
    v1 = *(signed char *)(v0 + 73);
    if (v1 != 0) {
        do {
            func_00146858();
            v1 = *(signed char *)(v0 + 73);
        } while (v1 != 0);
    }
}
