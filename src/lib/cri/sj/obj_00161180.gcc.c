// cc: ee-gcc2.96 -O2 -G0
int func_00156D58();

int func_001615B0(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp1;
    *(int *)((stk + 0) + 0) = *(int *)((char *)p0 + 16);
    tmp1 = func_00156D58(1, (stk + 0), 1, 0, 0);
    *(char *)((char *)p0 + 0) = 0;
    return tmp1;
}

void func_001615F8(p0) char *p0; {
    *(short *)(p0 + 2) = (*(unsigned short *)(p0 + 2) + 1);
}

void func_00161608();

void func_001616F8() {
    func_00161608(1);
}

void func_00161668();

void func_00161710() {
    func_00161668(1);
}

void func_00161728() {
    func_00161608(2);
}

void func_00161740() {
    func_00161608(3);
}

void func_00161758() {
    func_00161608(4);
}

void func_00161770() {
    func_00161608(5);
}

void func_00161788() {
    func_00161608(1000);
}

void func_001617A0() {
    func_00161668(2);
}

void func_001617B8() {
    func_00161668(3);
}

void func_001617D0() {
    func_00161668(4);
}

void func_001617E8() {
    func_00161668(5);
}

void func_00161800() {
    func_00161668(1000);
}
