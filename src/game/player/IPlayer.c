extern char D_005A7790[];

extern char D_005A7780[];

void func_00277D30(char *);

void func_001AAD30(char *);

void func_0013D240(char *, int);

extern char D_005A75D0[];

extern char D_005A75F4[];

extern char D_005A7674[];

extern char D_005A7708[];

extern char D_005A77A0[];

extern char D_005AAA98[];

extern char D_005A7770[];

extern char D_005A7760[];

void func_0024F750(char *);

void func_002029E0(char *);

void func_002790E0(char *);

void func_002791E0(char *);

void func_002030F0(char *);

void func_00203090(char *);

void func_00203040(char *);

void func_00202FE0(char *);

void func_0024D930(char *);

void func_0024D9A0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001FBAB0(char *);

void func_0022C820(char *);

void func_002E1BC0(char *);

void func_002E7840(char *);

void func_002E8A10(char *);

void func_00414E20(char *);

void func_0046EBE0(char *);

void func_0013D6A0(char *);

void func_00332650(char *);

void func_0028C110(char *);

char *func_00202A50(char *p) {
    char *q;
    char *r;
    int i;
    func_0024F750(p);
    func_002029E0(p + 0xD0);
    *(char **)p = D_005A75D0;
    *(char **)(p + 0x40) = D_005A75F4;
    *(char **)(p + 0xA0) = D_005A7674;
    *(char **)(p + 0xD0) = D_005A7708;
    func_00100450(p + 0x180, (void *)func_002790E0, (void *)func_002791E0, 0x600, 3);
    func_00100450(p + 0x1504, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0xD1);
    func_001FBAB0(p + 0x2214);
    func_00100450(p + 0x23B0, (void *)func_002030F0, (void *)func_00203090, 0x40, 2);
    q = p + 0x2500;
    *(char **)(p + 0x2510) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_00100450(p + 0x25A0, (void *)func_00203040, (void *)func_00202FE0, 0x60, 3);
    q = p + 0x26C0;
    *(char **)(p + 0x27A0) = D_005A7790;
    *(int *)(p + 0x27A8) = 0;
    *(int *)(p + 0x27A4) = 0;
    *(char **)(p + 0x27A0) = D_005A7780;
    func_00277D30(q);
    func_002E7840(p + 0x2A20);
    func_002E8A10(p + 0x2A64);
    func_00414E20(p + 0x2B00);
    r = p + 0x2B58;
    *(char **)(p + 0x2B5C) = D_005A7770;
    *(char **)(p + 0x336C) = D_005A7770;
    *(int *)(p + 0x3B7C) = 0;
    *(int *)(p + 0x3B84) = 0;
    *(int *)(p + 0x3B80) = 0;
    p[0x3B8C] = 0;
    *(int *)(p + 0x3B88) = 0;
    p[0x3B8D] = 0;
    p[0x3B8E] = 0;
    for (i = 0; i < 10; i++) r[i + 0x1037] = -1;
    q = p + 0x3BB0;
    *(char **)(p + 0x3BC0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_0046EBE0(p + 0x3CE0);
    q = p + 0x3D08;
    *(char **)(p + 0x3D08) = D_005A7760;
    func_0013D6A0(q + 4);
    q[0x24] = 0;
    *(int *)(q + 0x20) = 0;
    *(int *)(q + 0x1C) = 0;
    func_0013D6A0(p + 0x3D34);
    func_00332650(p + 0x3D90);
    func_00100450(p + 0x4120, (void *)func_0024D930, (void *)func_0024D9A0, 0xD0, 6);
    func_00100450(p + 0x4600, (void *)func_0024D930, (void *)func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x47A0);
    p[0x44] = -1;
    p[0x45] = 0;
    *(int *)(p + 0x29D0) = 0;
    *(int *)(p + 0x2890) = 0;
    return p;
}

extern char D_005A77B0[];

void func_00100580();

int func_00202A00(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A77B0;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}
