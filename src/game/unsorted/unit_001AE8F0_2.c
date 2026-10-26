extern char D_00654430[];

void func_00198380(char *);

void func_001AEE60();

void func_001AEEC0(char *p) {
    void func_00198160(char *, void *, int, int);
    int i;
    func_00198380(D_00654430);
    for (i = 0; i < 303; i++, p += 0x20) {
        if (*(unsigned char *)(p + 1) == 1 || *(unsigned char *)(p + 1) == 2) {
            *(unsigned char *)(p + 1) = 4;
        }
    }
    func_00198160(D_00654430, (void *)func_001AEE60, 0, 0);
}

int func_001AED60(char *, char *);

int func_001AEBC0(char *, char *, int);

int func_001AF040(char *, char *, int);

void func_001AEF50(void);

int func_001AEF60(char *p, char *e, int a, int b, int flag) {
    void func_00198160(char *, void *, int, int, char *);
    int k = 0;
    int r;
    if (flag != 0) {
        k = 1;
    }
    *(int *)(e + 8) = a;
    if ((unsigned char)func_001AEBC0(p, e, func_001AED60(p, e)) == 0) {
        r = 0;
    } else if ((unsigned char)func_001AF040(p, e, k) == 0) {
        r = 0;
    } else {
        *(unsigned char *)(e + 1) = 1;
        func_00198160(D_00654430, (void *)func_001AEF50, k, 1, e);
        *(int *)(e + 4) = b;
        r = 1;
    }
    return r;
}

int func_001AEC30();

int func_001AF080(void) {
    int t0;
    t0 = func_001AEC30();
    return ((unsigned int)0 < (unsigned int)(t0 & 255));
}

char *func_001AEAA0();

int func_001AEA60() {
    char *v0;
    v0 = func_001AEAA0();
    if (*(unsigned char *)(v0 + 1) == 3) {
        return (int)v0;
    } else {
        return 0;
    }
}
