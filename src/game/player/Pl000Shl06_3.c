void func_001AD140(char *);

void func_00471C30(char *);

void func_001AD100(char *);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

void func_00228260(char *);

void func_00471F10(char *);

int func_002F18A0(char *, char *);

void func_00471940(char *);

void func_00471A30(char *);

void func_00471B40(char *);

void func_004717B0(char *p) {
    int f;
    int i;
    char *e;
    char *d;
    char *s;
    func_001AD100(p);
    func_00206730(p + 0x460);
    func_00228260(p + 0x464);
    f = 0;
    for (i = 0; i < 2; i++) {
        e = ((char **)(p + 0x20C))[i];
        if (e != 0) {
            f = *(int *)(e + 8);
        }
        if (f & 0x100) {
            func_00471F10(p);
            func_001AD140(p);
            return;
        }
        if (f & 0x30000) {
            func_00471F10(p);
            func_001AD140(p);
            return;
        }
    }
    if (*(char **)(p + 0x464) != 0 && *(char **)(p + 0x468) != 0) {
        if ((unsigned char)func_002F18A0(*(char **)(p + 0x464) + 0x2B58, *(char **)(p + 0x468)) == 1) {
            d = p + 0x490;
            s = *(char **)(*(char **)(p + 0x468) + 0x10);
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory");
        } else {
            *(int *)(p + 0x468) = 0;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00471940(p);
        break;
    case 1:
        func_00471A30(p);
        break;
    case 2:
        func_00471B40(p);
        break;
    }
    func_00471C30(p);
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}
