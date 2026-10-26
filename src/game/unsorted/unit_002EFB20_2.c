extern char D_005A6F50[];

void func_0013D6A0(char *);

extern char D_005AB530[];

extern char D_005AB500[];

void func_002F44B0(char *);

char *func_002F4600(char *p) {
    int i;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005AB530;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x40) : "memory");
    *(int *)(p + 0x80) = 0;
    for (i = 0; i < 3; i++) {
        ((int *)(p + 0x84))[i] = 0;
    }
    *(int *)(p + 0x90) = 0;
    *(unsigned char *)(p + 0x94) = 0;
    *(char **)p = D_005AB500;
    func_002F44B0(p);
    return p;
}

void func_002F1550();

void func_002EFB30(p0) char *p0; {
    func_002F1550((*(int *)(p0 + 12) + 11096));
}

void func_002F1450();

void func_002EFB40(p0) char *p0; {
    func_002F1450((*(int *)(p0 + 12) + 11096));
}

int func_002F17E0(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = *(int *)(p0 + 4136);
    if (v0 == 0) {
        v2 = -1;
    } else {
        v1 = *(int *)(p0 + 4140);
        if (((unsigned int)v1 < (unsigned int)(v0 + -1))) {
            *(int *)(p0 + 4140) = (v1 + 1);
        } else {
            *(int *)(p0 + 4140) = 0;
        }
        *(int *)(p0 + 4144) = 0;
        v2 = 1;
    }
    return v2;
}

int func_002F1F50(p0) int p0; {
    int v0;
    int v1;
    v0 = 0;
    do {
        if (*(signed char *)((char *)(p0 + v0) + 4151) == -1) {
            return v0;
        }
        v0 = (v0 + 1);
    } while ((v0 < 10));
    v1 = -1;
    return v1;
}

extern char D_01CAFF3C[];

void func_002F2B30();

int func_002F2AA0(p0, p1) char *p0; int p1; {
    char *v0;
    int tmp0;
    char *tmp1;
    int tmp2;
    v0 = *(char **)(p0 + 4);
    tmp0 = (p1 < *(short *)(v0 + 6));
    if (tmp0 == 0) {
        return 0;
    } else {
        tmp1 = (v0 + *(int *)(v0 + 8));
        tmp2 = *(int *)(v0 + 8);
        *(char **)(p0 + 8) = (v0 + *(int *)(((v0 + *(int *)(v0 + 8)) + ((*(unsigned char *)D_01CAFF3C + (p1 * 5)) << 2)) + 0));
        func_002F2B30(p0, tmp1, tmp2, v0);
        return 1;
    }
}

void func_002F2B10(p0) char *p0; {
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) + (*(int *)(p0 + 20) << 2));
    func_002F2B30();
}

extern void func_00327060();

void func_002F3BB0(void) { func_00327060(); }

void func_002F30C0();

void func_002F30B0(int p0, int p1, int p2) {
    func_002F30C0(p0, p1, 0, p2);
}
