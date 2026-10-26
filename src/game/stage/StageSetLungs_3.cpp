extern "C" void func_001AD100(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" char *func_00279290(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_002EF940(char *, char *);

extern "C" void func_003AD5C0(char *);

extern "C" void func_0043F130(char *);

extern "C" void func_0043F490(char *);

extern "C" void func_0043F570(char *);

extern "C" void func_0043F600(char *);

extern "C" void func_0043F810(char *);

extern "C" void func_0043F920(char *);

extern "C" void func_0043FAE0(char *);

extern "C" void func_0043F070(char *);

class W1C0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void m60(int, int, int, int);
};

extern "C" void func_0043EB90(char *p) {
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    float f;
    func_001AD100(p);
    func_003AD5C0(p + 0x800);
    if (*(unsigned char *)(p + 0x7C3) == 0) return;
    func_0043F130(p);
    switch (*(unsigned char *)(p + 0x7C0)) {
    case 0: func_0043F490(p); break;
    case 1: func_0043F570(p); break;
    case 2: func_0043F600(p); break;
    case 3: func_0043F810(p); break;
    case 4: func_0043F920(p); break;
    case 5: func_0043FAE0(p); break;
    }
    if (*(signed char *)(p + 0x7C1) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v30), "r"(*(char **)(*(char **)(p + 0x1A4) + 0x104)) : "memory");
        v30[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v40), "r"(*(char **)(*(char **)(p + 0x1A8) + 0x104)) : "memory");
        v40[3] = 1.0f;
    } else {
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v30), "r"(*(char **)(*(char **)(p + 0x1AC) + 0x104)) : "memory");
        v30[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v40), "r"(*(char **)(*(char **)(p + 0x1B0) + 0x104)) : "memory");
        v40[3] = 1.0f;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x8A0), "r"(v30) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x920), "r"(v40) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x850) : "memory");
    func_00131700(p + 0x850, p + 0x850, p + 0x830);
    func_00105230(p + 0x850, p + 0x850, p + 0x820);
    func_001318E0(p + 0x850, p + 0x850, p + 0x840);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x8D0) : "memory");
    func_00131700(p + 0x8D0, p + 0x8D0, p + 0x8B0);
    func_00105230(p + 0x8D0, p + 0x8D0, p + 0x8A0);
    func_001318E0(p + 0x8D0, p + 0x8D0, p + 0x8C0);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x950) : "memory");
    func_00131700(p + 0x950, p + 0x950, p + 0x930);
    func_00105230(p + 0x950, p + 0x950, p + 0x920);
    func_001318E0(p + 0x950, p + 0x950, p + 0x940);
    func_0028C5C0(p + 0x9E0, 0, *(float *)(p + 0x10));
    if (*(unsigned char *)(p + 0x7C4) != 0) {
        f = *(float *)(p + 0x10);
        *(float *)(func_00279290(p + 0x1C0) + 0x1B0) = f;
        if (*(int *)(p + 0x7CC) != -1) ((W1C0 *)(p + 0x1C0))->m60(*(int *)(p + 0x7CC), *(int *)(p + 0x7D0), (int)((float)*(int *)(p + 0x7D4) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x7D8) * *(float *)(p + 0x10)));
    }
    if (*(unsigned char *)(p + 0x7C5) != 0) {
        switch (*(unsigned char *)(p + 0x7C0)) {
        case 0: case 1: case 4: case 5:
            func_002EF940(*(char **)D_01CAFF0C, p + 0x990);
            break;
        case 2: case 3:
            break;
        }
    }
    func_0043F070(p);
    func_00195E20(D_005BE098, p);
}
