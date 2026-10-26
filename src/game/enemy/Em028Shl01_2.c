extern char D_005B3820[];

extern char D_005B3844[];

extern char D_005B38C4[];

int func_00252FA0();

int func_0028C110();

int func_0042CB10(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B3820;
    *(char **)((char *)p0 + 64) = D_005B3844;
    *(char **)((char *)p0 + 160) = D_005B38C4;
    func_0028C110((p0 + 336));
    *(int *)((char *)p0 + 1184) = 0;
    *(int *)((char *)p0 + 1188) = 0;
    *(char *)((char *)p0 + 1192) = 0;
    *(char *)((char *)p0 + 1193) = 0;
    *(int *)((char *)p0 + 1196) = 0;
    *(int *)((char *)p0 + 1200) = 0;
    *(int *)((char *)p0 + 1204) = 0;
    return p0;
}

void func_0042CF60(char *p0) {
    *(char *)(p0 + 1193) = 1;
    *(int *)(p0 + 1196) = 0x41f00000;
}
