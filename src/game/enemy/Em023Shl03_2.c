void func_001AD140(char *);

void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_00382A50(char *);

void func_00506080(char *);

void func_00506210(char *);

void func_00506480(char *);

void func_00505F80(char *p) {
    func_00382A50(p + 0x218);
    func_00206730(p + 0x21C);
    if (*(char **)(p + 0x218) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x218) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00506080(p);
        break;
    case 1:
        func_00506210(p);
        break;
    case 2:
        func_00506480(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    func_0028C5C0(p + 0x220, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

extern char D_005BB2B0[];

extern char D_005BB2D4[];

extern char D_005BB354[];

int func_00252FA0();

int func_0028C110();

int func_00505980(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BB2B0;
    *(char **)((char *)p0 + 64) = D_005BB2D4;
    *(char **)((char *)p0 + 160) = D_005BB354;
    func_0028C110((p0 + 544));
    *(int *)((char *)p0 + 536) = 0;
    *(int *)((char *)p0 + 404) = 0;
    return p0;
}

void func_005068B0(void) {}
