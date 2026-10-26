// cc: ee-gcc2.96 -O2 -G8
extern char D_00634160[];

void func_001616F8();

void func_00161710();

void func_00161D40(p0, p1, p2) int p0; int p1; int p2; {
    func_001616F8();
    *(int *)((char (*)[8])((char *)(int)D_00634160 + 0))[p0] = p1;
    *(int *)((char (*)[8])((char *)D_00634160 + 4))[p0] = p2;
    func_00161710();
}
