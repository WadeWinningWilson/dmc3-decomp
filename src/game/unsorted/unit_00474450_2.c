extern char D_005AADD0[];

extern char D_005B6530[];

extern char D_005B6554[];

extern char D_005B65D4[];

extern char D_005B6668[];

void func_00100450();

void func_0024F750();

int func_00474BD0();

void func_00474C30();

int func_00474B30(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 208) = D_005AADD0;
    *(int *)((char *)p0 + 216) = -1;
    *(char **)((char *)p0 + 0) = D_005B6530;
    *(char **)((char *)p0 + 64) = D_005B6554;
    *(char **)((char *)p0 + 160) = D_005B65D4;
    *(char **)((char *)p0 + 208) = D_005B6668;
    func_00100450((p0 + 416), (char *)func_00474C30, (char *)func_00474BD0, 1168, 2);
    *(char *)((char *)p0 + 413) = 0;
    *(char *)((char *)p0 + 405) = 0;
    return p0;
}
