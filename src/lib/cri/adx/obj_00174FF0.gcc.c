// cc: ee-gcc2.96 -O2 -G0
int func_0017A958();

void func_0018BA60();

void func_001750D8(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v2 = *(int *)(p0 + 68);
    v0 = *(int *)(p0 + 64);
    v1 = v2;
    if (v2 != 0) {
        v2 = func_0017A958(v1);
        if (v2 == 3) {
            func_0018BA60(v0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

void func_001751C8();

void func_001751A8(p0, p1) int p0; int p1; {
    func_001751C8(p0, p1, 0, 0xfffff);
}

void func_00175130();

void func_001751C8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_00175130();
    *(int *)((char *)p0 + 456) = p2;
    *(int *)((char *)p0 + 460) = p3;
    *(int *)((char *)p0 + 448) = 1;
    *(int *)((char *)p0 + 452) = 0;
}

void func_0017C5B8();

void func_001753C0(p0) char *p0; {
    func_0017C5B8(*(int *)(p0 + 64));
}

void func_0017C638();

void func_001753D8(p0) char *p0; {
    func_0017C638(*(int *)(p0 + 64));
}

void func_0017C4B0();

void func_001753F0(p0) char *p0; {
    func_0017C4B0(*(int *)(p0 + 64));
}

void func_0017C540();

void func_00175408(p0) char *p0; {
    func_0017C540(*(int *)(p0 + 64));
}
