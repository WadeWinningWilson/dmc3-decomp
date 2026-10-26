extern "C" void func_0034BA60(int, char *, signed char, int, int);

extern "C" void func_00104B80(char *, char *, char *);

extern "C" char *func_00207470(int, int, float *);

extern "C" void func_00104E78(float *, char *);

extern "C" void func_00315D60(char *p, signed char k, char *a, char *o) {
    float vc0[4] __attribute__((aligned(16)));
    float m80[16] __attribute__((aligned(16)));
    float m40[16] __attribute__((aligned(16)));
    char *e;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(vc0), "r"(a + 0x30) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(&m80[12]), "r"(a + 0x30) : "memory");
    if (o != 0) {
        func_00104E78(m40, o);
        func_00104B80((char *)&m80[12], (char *)m40, (char *)&m80[12]);
    }
    if (*(float *)(*(char **)(p + 0x10) + k * 4) <= 100.0f) return;
    switch (k) {
    case 1:
        e = func_00207470(3, 0x217, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(2, 0x1AA, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        func_0034BA60(7, (char *)vc0, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 2:
        e = func_00207470(3, 0x216, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(3, 0x2C3, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        func_0034BA60(0x10, (char *)vc0, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 3:
        e = func_00207470(3, 0x12, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(3, 0x12F, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        func_0034BA60(0x11, (char *)vc0, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 4:
        e = func_00207470(3, 0x218, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(2, 0x1A9, m80);
        if (e != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        break;
    case 5:
        e = func_00207470(3, 0x216, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(3, 0x2C3, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        break;
    case 6:
        e = func_00207470(3, 0x219, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(2, 0x1C2, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        break;
    }
}

extern "C" void func_00315A10(char *p, signed char k, char *m, char *v) {
    char *e;
    if (*(float *)(*(char **)(p + 0x10) + k * 4) <= 100.0f) return;
    switch (k) {
    case 1:
        e = func_00207470(3, 0x217, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(2, 0x1AA, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        func_0034BA60(7, v, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 2:
        e = func_00207470(3, 0x216, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(3, 0x2C3, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        func_0034BA60(0x10, v, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 3:
        e = func_00207470(3, 0x12, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(3, 0x12F, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        func_0034BA60(0x11, v, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 4:
        e = func_00207470(3, 0x218, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(2, 0x1A9, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    case 5:
        e = func_00207470(3, 0x216, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(3, 0x2C3, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    case 6:
        e = func_00207470(3, 0x219, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(2, 0x1C2, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    }
}
