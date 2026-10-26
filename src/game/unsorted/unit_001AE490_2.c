int func_001AE610();

int func_001AE630();

int func_001AE650();

int func_001AE670();

int func_001AE690();

int func_001AE750();

int func_001AE550(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v0 = p0;
    v1 = p1;
    if ((p1 & 1) != 0) {
        v2 = func_001AE630();
    }
    v4 = v0;
    if ((v1 & 4) != 0) {
        v2 = func_001AE650(v4);
    }
    v5 = v0;
    if ((v1 & 2) != 0) {
        v2 = func_001AE670(v5);
    }
    v6 = v0;
    if ((v1 & 8) != 0) {
        v2 = func_001AE610(v6);
    }
    v7 = v0;
    if ((v1 & 16) != 0) {
        v2 = func_001AE750(v7);
    }
    v3 = v0;
    if (v1 == 255) {
        v2 = func_001AE690(v3);
    }
    return v2;
}

void func_001AE760(void) {}

extern char D_00666712[];

void func_001AE680(void) {
    *(char *)D_00666712 = 1;
}
