extern char D_005AC5C0[];

extern char D_005AC5E4[];

extern char D_005AC664[];

int func_00252FA0();

int func_0028C110();

int func_002E82A0();

int func_003221A0(p0) int p0; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    func_00252FA0();
    *(char **)(v0 + 0) = D_005AC5C0;
    *(char **)(v0 + 64) = D_005AC5E4;
    *(char **)(v0 + 160) = D_005AC664;
    func_0028C110((v0 + 432));
    *(char *)(v0 + 1120) = 0;
    *(char *)(v0 + 1121) = 0;
    *(short *)(v0 + 1122) = 0;
    *(int *)(v0 + 1128) = 0;
    v3 = 0;
    *(int *)(v0 + 1132) = 0;
    v1 = v0;
    *(int *)(v0 + 1136) = 0;
    *(int *)(v0 + 1152) = 0;
    *(int *)(v0 + 1156) = 0;
    *(int *)(v0 + 1160) = 0;
    *(int *)(v0 + 1164) = 0x3f800000;
    *(int *)(v0 + 1168) = 0x47c35000;
    *(char *)(v0 + 1172) = 0;
    *(char *)(v0 + 1173) = 0;
    *(short *)(v0 + 1174) = 0;
    v2 = -1;
    do {
        *(short *)(v1 + 1176) = v2;
        *(short *)(v1 + 1178) = v2;
        v3 = (v3 + 5);
        *(short *)(v1 + 1180) = v2;
        *(short *)(v1 + 1182) = v2;
        *(short *)(v1 + 1184) = v2;
        v1 = (v1 + 10);
    } while ((v3 < 10));
    func_002E82A0((v0 + 1200), v3);
    return (int)v0;
}
