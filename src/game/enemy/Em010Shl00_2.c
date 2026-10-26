extern char D_005B9DE0[];

extern char D_005B9E04[];

extern char D_005B9E84[];

void func_00100450();

int func_00252FA0();

int func_0028C110();

void func_0028C1A0();

int func_004E1D40(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B9DE0;
    *(char **)((char *)p0 + 64) = D_005B9E04;
    *(char **)((char *)p0 + 160) = D_005B9E84;
    func_00100450((p0 + 336), (char *)func_0028C110, (char *)func_0028C1A0, 544, 2);
    *(char *)((char *)p0 + 1600) = 0;
    *(char *)((char *)p0 + 1601) = 0;
    *(int *)((char *)p0 + 1604) = 0;
    *(int *)((char *)p0 + 1608) = 0;
    *(int *)((char *)p0 + 1612) = 0;
    *(int *)((char *)p0 + 1616) = 0;
    *(int *)((char *)p0 + 1620) = 0;
    *(int *)((char *)p0 + 1624) = 0;
    *(int *)((char *)p0 + 1628) = 0;
    *(int *)((char *)p0 + 1632) = 0x3f800000;
    *(int *)((char *)p0 + 1636) = 0x3f800000;
    *(int *)((char *)p0 + 1640) = 0x3f800000;
    *(int *)((char *)p0 + 1644) = 0x3f800000;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 1664)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 1728)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 1792)) : "memory");
    *(int *)((char *)p0 + 1856) = 0;
    *(int *)((char *)p0 + 1860) = 0;
    *(int *)((char *)p0 + 1864) = 0;
    *(int *)((char *)p0 + 1868) = 0;
    return p0;
}

void func_004E1B50(char *p0) {
    *(char *)(p0 + 558) = 1;
}
