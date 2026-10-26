// cc: ee-gcc2.96 -O2 -G0
extern char D_0051A660[];

void func_001431D8();

void func_001431F0();

void func_001461D8();

void func_001462A0() {
    int v0;
    int v1;
    char *v2;
    v1 = 15;
    v0 = 1;
    func_001431D8();
    v2 = D_0051A660;
    do {
        if (*(signed char *)(v2 + 0) == v0) {
            func_001461D8(v2);
        }
        v1 = (v1 + -1);
        v2 = (v2 + 68);
    } while (v1 >= 0);
    func_001431F0();
}

extern char D_00590AA8[];

void func_001446F0();

int func_00146418(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00590AA8);
        v0 = -3;
    } else {
        v0 = *(int *)(p0 + 20);
    }
    return v0;
}

extern char D_00590B00[];

int func_00146500(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    v0 = (char *)p1;
    if (p0 == 0) {
        func_001446F0(D_00590B00);
        *(int *)(v0 + 0) = 0;
        v1 = -3;
    } else {
        *(int *)(v0 + 0) = *(int *)(p0 + 24);
        v1 = *(int *)(p0 + 28);
    }
    return v1;
}
