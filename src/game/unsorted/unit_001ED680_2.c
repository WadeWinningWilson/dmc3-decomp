void func_001EDAB0(void);

void func_00134070(int);

void func_001340C0(int);

void func_00103548(int);

void func_00134A30(int, int, int, int);

void func_0010DF60(int);

void func_001035E0(int, int);

void func_0013CDD0(int);

void func_0013CC30();

void func_00103C60(void *);

void func_0010D660(void);

void func_001EDBF0(void) {
    int i;
    func_001EDAB0();
    func_00134070(0);
    func_001340C0(1);
    for (i = 0; i < 20; i++) {
        func_00103548(0);
    }
    func_00134A30(0, 0, 0, 0);
    func_0010DF60(0);
    func_001035E0(0, 0);
    func_0013CDD0(0);
    func_00103C60((void *)func_0013CC30);
    func_0010D660();
    *(volatile int *)0x10000010 = 0x8B;
    *(volatile int *)0x10000000 = 0;
}

int func_001EDD20();

int func_001EDD70(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    if (!(*(short *)(p0 + 0) < 128)) {
        v3 = 0;
    } else {
        tmp0 = func_001EDD20(p0, v2);
        if (tmp0 != 0) {
            v3 = 1;
        } else {
            v3 = 1;
            *(short *)((char *)((*(short *)(v0 + 0) << 3) + (int)v0) + 4) = v2;
            *(int *)((char *)((*(short *)(v0 + 0) << 3) + (int)v0) + 8) = v1;
            *(short *)(v0 + 0) = (*(short *)(v0 + 0) + 1);
        }
    }
    return v3;
}

extern char D_006663C0[];

void func_001ADE70();

void func_001EDA40(void) {
    func_001ADE70(D_006663C0);
}
