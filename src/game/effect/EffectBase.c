extern char D_005A6F50[];

void func_0013D6A0();

char *func_001B1590(char *p0) {
    *(char **)(p0 + 0) = D_005A6F50;
    func_0013D6A0((p0 + 36));
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 28) = 0;
    *(char *)(p0 + 7) = 0;
    *(char *)(p0 + 6) = 0;
    *(char *)(p0 + 5) = 0;
    *(char *)(p0 + 4) = 0;
    *(char *)(p0 + 24) = 0;
    *(int *)(p0 + 8) = 0;
    *(char *)(p0 + 52) = -1;
    *(char *)(p0 + 53) = 0;
    *(char *)(p0 + 54) = 0;
    *(int *)(p0 + 12) = 135;
    *(int *)(p0 + 16) = 0x3f800000;
    *(int *)(p0 + 20) = 0x3f800000;
    return p0;
}

void func_001B1620(char *p, int v) { *(int *)(p + 276) = v; }

void func_001B1570(char *p0) {
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p0) : "memory");
}

int func_001B1610(int p0, int p1) {
    return p1;
}
