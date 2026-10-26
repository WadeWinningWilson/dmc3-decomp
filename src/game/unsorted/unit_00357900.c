extern char D_005AADD0[];

extern char D_005AD3F0[];

extern char D_005AD414[];

extern char D_005AD494[];

extern char D_005AD528[];

void func_0024F750();

void func_0027A570();

int func_0028C110();

int func_00357DC0(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005AD3F0;
    *(char **)(v0 + 64) = D_005AD414;
    *(char **)(v0 + 160) = D_005AD494;
    *(char **)(v0 + 208) = D_005AD528;
    func_0027A570((v0 + 224));
    func_0028C110((v0 + 1376));
    *(char *)(v0 + 2064) = 0;
    *(char *)(v0 + 2065) = 0;
    *(short *)(v0 + 2066) = 0;
    *(int *)(v0 + 2072) = 0;
    v1 = 0;
    *(int *)(v0 + 2076) = 0;
    v2 = v0;
    *(int *)(v0 + 2080) = 0;
    *(int *)(v0 + 2096) = 0;
    *(int *)(v0 + 2100) = 0;
    *(int *)(v0 + 2104) = 0;
    *(int *)(v0 + 2108) = 0x3f800000;
    *(int *)(v0 + 2112) = 0x47c35000;
    *(char *)(v0 + 2116) = 0;
    *(char *)(v0 + 2117) = 0;
    *(short *)(v0 + 2118) = 0;
    v3 = -1;
    do {
        *(short *)(v2 + 2120) = v3;
        *(short *)(v2 + 2122) = v3;
        v1 = (v1 + 5);
        *(short *)(v2 + 2124) = v3;
        *(short *)(v2 + 2126) = v3;
        *(short *)(v2 + 2128) = v3;
        v2 = (v2 + 10);
    } while ((v1 < 10));
    *(char *)(v0 + 2016) = 1;
    *(char *)(v0 + 2017) = 0;
    *(int *)(v0 + 2020) = 0;
    *(int *)(v0 + 2024) = 0;
    *(int *)(v0 + 2028) = 0;
    *(int *)(v0 + 2032) = 0;
    *(int *)(v0 + 2036) = 0;
    *(int *)(v0 + 2040) = 0;
    *(int *)(v0 + 2044) = 0;
    *(int *)(v0 + 2048) = 0;
    return (int)v0;
}
