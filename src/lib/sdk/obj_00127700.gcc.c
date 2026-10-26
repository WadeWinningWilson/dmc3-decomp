// cc: ee-gcc2.96 -O2 -G0
extern char D_00518310[];

int func_001279F8();

void func_00128548();

void func_001285C8();

int func_00127700(p0) int p0; {
    int tmp2;
    func_00128548(*(int *)(D_00518310 + 0));
    tmp2 = func_001279F8(*(int *)(D_00518310 + 0), p0);
    func_001285C8(*(int *)(D_00518310 + 0));
    return tmp2;
}

void func_00126B20();

void func_00127758(p0) int p0; {
    func_00128548(*(int *)(D_00518310 + 0));
    func_00126B20(*(int *)(D_00518310 + 0), p0);
    func_001285C8(*(int *)(D_00518310 + 0));
}
