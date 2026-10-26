extern char D_005B79A0[];

extern char D_005B79C4[];

extern char D_005B7A44[];

int func_00252FA0();

int func_0028C110();

int func_00494960(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B79A0;
    *(char **)((char *)p0 + 64) = D_005B79C4;
    *(char **)((char *)p0 + 160) = D_005B7A44;
    func_0028C110((p0 + 400));
    *(char *)((char *)p0 + 1132) = 0;
    *(int *)((char *)p0 + 1120) = 0;
    *(int *)((char *)p0 + 1124) = 0;
    return p0;
}

extern char D_005B7AE0[];

extern char D_005B7B04[];

extern char D_005B7B84[];

int func_00495280(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B7AE0;
    *(char **)((char *)p0 + 64) = D_005B7B04;
    *(char **)((char *)p0 + 160) = D_005B7B84;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 880) = 0;
    *(char *)((char *)p0 + 881) = 0;
    *(char *)((char *)p0 + 882) = 0;
    *(int *)((char *)p0 + 1008) = 0;
    *(int *)((char *)p0 + 1012) = 0;
    *(int *)((char *)p0 + 1020) = 0;
    *(int *)((char *)p0 + 1024) = 0;
    *(char *)((char *)p0 + 883) = 0;
    *(int *)((char *)p0 + 892) = 0;
    *(int *)((char *)p0 + 896) = 0;
    *(int *)((char *)p0 + 900) = 0;
    *(short *)((char *)p0 + 884) = 0;
    return p0;
}

extern void func_00494A60();

void func_004950E0(char *p) { func_00494A60(p + -64); }
