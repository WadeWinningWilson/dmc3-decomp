extern char D_005A7FA0[];

void func_00100580();

int func_0024FDB0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7FA0;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_0024FD80(char *p0) {
    *(char **)(p0 + 0) = D_005A7FA0;
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"((p0 + 16)) : "memory");
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"((p0 + 32)) : "memory");
    *(char *)(p0 + 48) = 0;
    return p0;
}
