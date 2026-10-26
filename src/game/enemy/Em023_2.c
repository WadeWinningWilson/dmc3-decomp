void func_0037C0C0();

void func_0037CB90();

void func_0037CD80(int p0) {
    func_0037C0C0(p0, 12);
    func_0037CB90(p0, 0);
}

void func_0024DA80();

void func_0028C3A0();

void func_0037E850(char *p0, int p1) {
    int t0;
    char *t1;
    *(int *)(p0 + 28224) = p1;
    func_0024DA80((p0 + 28016), 0, p1);
    t0 = *(int *)(*(char **)(p0 + 1912) + 260);
    t1 = *(char **)(p0 + 1912);
    func_0028C3A0((p0 + 29648), 0, -1, *(int *)(*(char **)(p0 + 1912) + 260));
}

int func_0037B920();

int func_0037B9C0();

void func_0037B8C0(p0) int p0; {
    char *v0;
    float v1;
    int tmp0;
    int tmp3;
    v0 = (char *)p0;
    tmp0 = func_0037B9C0();
    v1 = 0.0f;
    *(float *)(v0 + 30696) -= *(float *)(v0 + 16);
    if (*(float *)(v0 + 30696) < v1) {
        tmp3 = func_0037B920(v0);
        *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
    }
}

int func_00206730();

void func_00382AA0();

void func_00382AF0();

void func_00382B40();

void func_00382B90();

int func_0037B9C0(p0) char *p0; {
    char *v5;
    int v4;
    int v0;
    char *v8;
    char *v1;
    char *v2;
    char *v9;
    int v6;
    int v3;
    int v10;
    int v7;
    v0 = 0;
    *(int *)(p0 + 28228) = 0;
    *(int *)(p0 + 28232) = 0;
    *(int *)(p0 + 28236) = 0;
    *(int *)(p0 + 28240) = 0;
    v8 = p0;
    if ((0 < *(int *)(p0 + 28244))) {
        v1 = v8;
        do {
            func_00382B90((v1 + 27680));
            if (*(int *)(v1 + 27680) != 0) {
                *(int *)(v8 + 28228) = (*(int *)(v8 + 28228) + 1);
            }
            v0 = (v0 + 1);
            v1 = (v1 + 4);
        } while ((v0 < *(int *)(v8 + 28244)));
    }
    v10 = 0;
    if ((0 < *(int *)(v8 + 28248))) {
        v9 = v8;
        do {
            func_00382B40((v9 + 27744));
            if (*(int *)(v9 + 27744) != 0) {
                *(int *)(v8 + 28232) += 1;
            }
            v10 = (v10 + 1);
            v9 = (v9 + 4);
        } while ((v10 < *(int *)(v8 + 28248)));
    }
    v3 = 0;
    if ((0 < *(int *)(v8 + 28252))) {
        v2 = v8;
        do {
            func_00382AF0((v2 + 27776));
            if (*(int *)(v2 + 27776) != 0) {
                *(int *)(v8 + 28236) = (*(int *)(v8 + 28236) + 1);
            }
            v3 = (v3 + 1);
            v2 = (v2 + 4);
        } while ((v3 < *(int *)(v8 + 28252)));
    }
    v4 = 0;
    if ((0 < *(int *)(v8 + 28256))) {
        v5 = v8;
        do {
            func_00382AA0((v5 + 27808));
            if (*(int *)(v5 + 27808) != 0) {
                *(int *)(v8 + 28240) += 1;
            }
            v4 = (v4 + 1);
            v5 = (v5 + 4);
        } while ((v4 < *(int *)(v8 + 28256)));
    }
    v7 = 0;
    do {
        v6 = func_00206730((v8 + 26176));
        v7 = (v7 + 1);
        v8 = (v8 + 4);
    } while ((v7 < 10));
    return v6;
}

extern char D_005AE300[];

extern char D_005AE318[];

int func_002E7840();

int func_00382970(p0) int p0; {
    func_002E7840();
    *(char **)((char *)p0 + 0) = D_005AE300;
    *(char **)((char *)p0 + 4) = D_005AE318;
    return p0;
}

extern void func_00377990();

void func_00382D40(char *p) { func_00377990(p + -64); }

void func_00382D50(char *p) { func_00377990(p + -160); }

void func_00382D60(char *p) { func_00377990(p + -208); }

void func_00382E50(char *p) { func_00377990(p + -304); }

void func_00382EE0(char *p) { func_00377990(p + -464); }

extern void func_00382960();

void func_00382F00(char *p) { func_00382960(p + -64); }

extern void func_00382950();

void func_00382F10(char *p) { func_00382950(p + -64); }

extern void func_0037F260();

void func_00383010(char *p) { func_0037F260(p + -64); }

void func_00383020(char *p) { func_0037F260(p + -160); }

void func_00383030(char *p) { func_0037F260(p + -208); }

extern void func_00381C50();

void func_00383050(char *p) { func_00381C50(p + -304); }

void func_00383120(char *p) { func_0037F260(p + -304); }

void func_003831B0(char *p) { func_0037F260(p + -464); }

int func_0037ECB0(char *p) { return *(int *)(p + 30220); }

signed char func_0037ECC0(char *p) { return *(signed char *)(p + 30228); }

signed char func_0037ECD0(char *p) { return *(signed char *)(p + 30229); }

signed char func_0037ECE0(char *p) { return *(signed char *)(p + 30230); }

signed char func_0037ECF0(char *p) { return *(signed char *)(p + 30231); }

signed char func_0037ED00(char *p) { return *(signed char *)(p + 30232); }

void func_0037ED10(void) {}

void func_0037EE70(void) {}

void func_0037EE80(void) {}

void func_0037EE90(void) {}

void func_0037EEA0(void) {}

void func_0037EEB0(void) {}

void func_0037EEC0(void) {}

int func_0037EED0(void) { return 0; }

void func_00381A40(void) {}

void func_00381A50(void) {}

void func_00381A90(void) {}

void func_00381AA0(void) {}

unsigned char func_00381AB0(char *p) { return *(unsigned char *)(p + 5180); }

signed char func_00381AC0(char *p) { return *(signed char *)(p + 5188); }

signed char func_00381AD0(char *p) { return *(signed char *)(p + 5189); }

signed char func_00381AE0(char *p) { return *(signed char *)(p + 5190); }

signed char func_00381AF0(char *p) { return *(signed char *)(p + 5191); }

signed char func_00381B00(char *p) { return *(signed char *)(p + 5192); }

void func_00381B10(void) {}

void func_00381BF0(void) {}

void func_00381C00(void) {}

void func_00381C10(void) {}

void func_00381C20(void) {}

void func_00381C30(void) {}

int func_00381C40(void) { return 0; }

void func_00382A40(void) {}

float func_0037CB80(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 30744) = *(float *)(p1 + 44);
    return t0;
}

void func_0037EAC0(char *p0, int p1) {
    *(int *)(p0 + 30224) = p1;
    *(char *)(p0 + 30736) = 1;
}

void func_0037EC90(char *p0, int p1) {
    *(int *)(p0 + 30220) = p1;
    *(char *)(p0 + 30228) = 1;
    *(char *)(p0 + 30229) = 0;
    *(char *)(p0 + 30230) = 0;
    *(char *)(p0 + 30231) = 0;
    *(char *)(p0 + 30232) = 0;
}

float func_0037F070(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 30656);
    *(float *)(p1 + 0) = *(float *)(p0 + 30656);
    return t0;
}

float func_0037F080(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 29328);
    *(float *)(p1 + 0) = *(float *)(p0 + 29328);
    return t0;
}
