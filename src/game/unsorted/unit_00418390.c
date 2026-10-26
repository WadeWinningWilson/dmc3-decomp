int func_0013B920(int, int *);

int func_001B0FD0(char *, int, int);

int func_00418520(char *p, char *s, int f) {
    int t[16];
    if (!(s[0] == 'i' && s[1] == 'p' && s[2] == 'u' && s[3] == 'm')) return 0;
    {
        if (func_0013B920(f, t) == 0) return 0;
        *(char **)(p + 0) = s;
        *(int *)(p + 4) = *(int *)(s + 4) - 8;
        *(short *)(p + 8) = *(short *)(s + 8);
        *(short *)(p + 0xA) = *(short *)(s + 0xA);
        *(int *)(p + 0xC) = *(int *)(s + 0xC);
        *(int *)(p + 0x10) = 0;
        *(short *)(p + 0x14) = *(short *)(p + 8) >> 4;
        *(short *)(p + 0x16) = *(short *)(p + 0xA) >> 4;
        *(int *)(p + 0x1C) = func_001B0FD0(p + 0x58, *(short *)(p + 8) * *(short *)(p + 0xA) * 4, -1);
        *(int *)(p + 0x18) = func_001B0FD0(p + 0x48, 0x40, -1);
        *(int *)(p + 0x20) = t[0];
        if (!*(int *)(p + 0x1C)) return 0;
        return *(int *)(p + 0x18) ? 1 : 0;
    }
}

void func_00130950(char *, char *, int);

void func_00418B50(char *p) {
    char *src = *(char **)(p + 0x1C);
    char *dst = *(char **)(p + 0x20);
    int j;
    int i;
    int k;
    for (j = 0; j < *(short *)(p + 0x16); j++) {
        for (i = 0; i < *(short *)(p + 0x14); i++) {
            for (k = 0; k < 16; k++) {
                func_00130950(dst + k * (*(short *)(p + 0x14) * 16) * 4, src, 1);
                src += 0x40;
            }
            dst += 0x40;
        }
        dst += *(short *)(p + 0x14) * 15 * 0x40;
    }
}

void func_001B1110();

int func_00418980(int p0) {
    func_001B1110((p0 + 88));
    func_001B1110((p0 + 72));
    return 1;
}

void func_00418A90(p0, p1) int p0; int p1; {
    *(int *)0x1000b430 = p1;
    *(int *)0x1000b420 = 0;
    *(int *)0x1000b400 = 261;
}

void func_00418AB0(p0, p1, p2) int p0; int p1; int p2; {
    *(int *)0x1000b010 = p1;
    *(int *)0x1000b020 = ((unsigned int)(p2 << 10) >> 4);
    *(int *)0x1000b000 = 256;
}

void func_0010D580();

int func_00418AE0() {
    int tmp0;
    *(int *)0x10002000 = 0x40000000;
    func_0010D580(0, 0);
    tmp0 = (((unsigned int)*(int *)0x10002000 >> 24) & 255);
    func_0010D580(0, 0);
    *(int *)0x10002000 = 0x40000008;
    func_0010D580(0, 0);
    return tmp0;
}

void func_00418C40(char *p0, int p1) {
    *(short *)(p0 + 104) = p1;
    *(short *)(p0 + 106) = 0;
}
