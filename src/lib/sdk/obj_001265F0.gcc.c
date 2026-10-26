// cc: ee-gcc2.96 -O2 -G0
void func_001265F0();

void func_001273C8();

void func_001268D8(p0) int p0; {
    func_001273C8(p0, (char *)func_001265F0);
}

void func_00126708();

void func_001268D8();

void func_00126918(p0) int p0; {
    *(char **)((char *)p0 + 60) = (char *)func_001268D8;
    *(int *)((char *)p0 + 56) = 1;
    func_00126708((p0 + 484), 4, 0, p0);
    func_00126708((p0 + 572), 9, 1, p0);
    func_00126708((p0 + 660), 10, 2, p0);
    *(int *)((char *)p0 + 472) = 0;
    *(int *)((char *)p0 + 480) = (p0 + 484);
    *(int *)((char *)p0 + 476) = 3;
}
