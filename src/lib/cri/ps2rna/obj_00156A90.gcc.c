// cc: ee-gcc2.96 -O2 -G0
extern char D_0052A3A0[];

void func_00156A90();

void func_0015E7E8();

void func_0015E800();

void func_00156E60() {
    int v0;
    int v1;
    char *v2;
    v0 = 15;
    v1 = 1;
    func_0015E7E8();
    v2 = D_0052A3A0;
    do {
        if (*(signed char *)(v2 + 0) == v1) {
            func_00156A90(v2);
        }
        v0 = (v0 + -1);
        v2 = (v2 + 68);
    } while (v0 >= 0);
    func_0015E800();
}

extern char D_0052AFBC[];

int func_00120D10();

void func_00155AD8();

int func_00156F20(p0, p1) int p0; int p1; {
    int tmp1;
    func_00155AD8(0x8000);
    tmp1 = func_00120D10(p0, p1, *(int *)D_0052AFBC);
    func_00155AD8(0x8001);
    return tmp1;
}

extern char D_0052B030[];

int func_00156F78() {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    v3 = 0;
    v4 = D_0052B030;
    v0 = 1;
    v1 = 2;
    do {
        if (*(signed char *)(v4 + 0) == v0) {
            v2 = 1;
            if (*(signed char *)(v4 + 2) == v1) {
                return v2;
            }
        }
        v3 = (v3 + 1);
        v4 = (v4 + 72);
    } while ((v3 < 40));
    v2 = 0;
    return v2;
}
