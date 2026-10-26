void func_001AD140(char *);

void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_00382A50(char *);

void func_00505550(char *);

void func_00505570(char *);

void func_005055F0(char *);

void func_00505450(char *p) {
    func_00382A50(p + 0x224);
    func_00206730(p + 0x228);
    if (*(char **)(p + 0x224) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x224) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00505550(p);
        break;
    case 1:
        func_00505570(p);
        break;
    case 2:
        func_005055F0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    func_0028C5C0(p + 0x230, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

extern char D_005BB170[];

extern char D_005BB194[];

extern char D_005BB214[];

int func_00252FA0();

int func_0028C110();

int func_00504FD0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BB170;
    *(char **)((char *)p0 + 64) = D_005BB194;
    *(char **)((char *)p0 + 160) = D_005BB214;
    func_0028C110((p0 + 560));
    *(int *)((char *)p0 + 548) = 0;
    *(int *)((char *)p0 + 404) = 0;
    return p0;
}

extern void func_00505320();

void func_00505940(char *p) { func_00505320(p + -64); }

void func_00505930(void) {}
