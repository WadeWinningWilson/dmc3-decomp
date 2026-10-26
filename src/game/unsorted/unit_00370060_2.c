extern char D_005ADE60[];

extern char D_005ADE84[];

extern char D_005ADF04[];

int func_00252FA0();

int func_0028C110();

int func_002E82A0();

int func_003703B0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_00252FA0();
    *(char **)(v0 + 0) = D_005ADE60;
    *(char **)(v0 + 64) = D_005ADE84;
    *(char **)(v0 + 160) = D_005ADF04;
    func_0028C110((v0 + 336));
    func_002E82A0((v0 + 976));
    *(char *)(v0 + 1056) = 0;
    *(char *)(v0 + 1057) = 0;
    *(short *)(v0 + 1058) = 0;
    *(int *)(v0 + 1064) = 0;
    v2 = 0;
    *(int *)(v0 + 1068) = 0;
    v3 = v0;
    *(int *)(v0 + 1072) = 0;
    *(int *)(v0 + 1088) = 0;
    *(int *)(v0 + 1092) = 0;
    *(int *)(v0 + 1096) = 0;
    *(int *)(v0 + 1100) = 0x3f800000;
    *(int *)(v0 + 1104) = 0x47c35000;
    *(char *)(v0 + 1108) = 0;
    *(char *)(v0 + 1109) = 0;
    *(short *)(v0 + 1110) = 0;
    v1 = -1;
    do {
        *(short *)(v3 + 1112) = v1;
        *(short *)(v3 + 1114) = v1;
        v2 = (v2 + 5);
        *(short *)(v3 + 1116) = v1;
        *(short *)(v3 + 1118) = v1;
        *(short *)(v3 + 1120) = v1;
        v3 = (v3 + 10);
    } while ((v2 < 10));
    return (int)v0;
}
