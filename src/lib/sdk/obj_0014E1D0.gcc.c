// cc: ee-gcc2.96 -O2 -G0
int func_0014E2D8(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 20) = p1;
    *(int *)(p0 + 16) = (p1 << 11);
    return (p1 << 11);
}

extern char D_00528774[];

void func_0014E308(p0) int p0; {
    *(int *)D_00528774 = p0;
}

int func_0014E318(p0) char *p0; {
    return *(signed char *)(p0 + 2);
}

extern char D_00528770[];

void func_0014DE98();

int func_001621E0();

void func_0014E320(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 80);
    if (v1 != 0) {
        v1 = *(int *)(v0 + 8);
        if (v1 == 0) {
            *(char *)(v0 + 69) = 1;
            v2 = D_00528770;
            do {
                tmp0 = func_001621E0(v2);
                v3 = (int)v0;
                if (tmp0 == 1) {
                    func_0014DE98(v3);
                    *(int *)(v2 + 0) = 0;
                }
                v1 = *(signed char *)(v0 + 69);
            } while (v1 != 0);
        }
    }
}

void func_001446F0();

void func_0014E3A8(p0, p1) int p0; int p1; {
    func_001446F0(p1);
}

int func_00158448();

int func_0014E4C0(p0) int p0; {
    char *v0;
    int v1;
    int tmp4;
    v0 = (char *)p0;
    v1 = 0;
    if (v0 != 0) {
        tmp4 = func_00158448(*(int *)(v0 + 0), *(int *)(v0 + 8), *(int *)(v0 + 12), *(int *)(v0 + 4));
        v1 = tmp4;
    } else {
        func_00158448(p0, 0, 0, 0);
    }
    return v1;
}
