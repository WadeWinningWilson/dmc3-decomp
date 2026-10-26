void func_001AD140(char *);

int func_002077F0(char *p);

void func_00206730(char *);

void func_001AD100(char *);

void func_00228300(char *);

int func_002DA0B0(int, int);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_0033C100(char *);

void func_0033C500(char *);

void func_0033C810(char *);

void func_0033C8A0(char *);

void func_0033BFC0(char *p) {
    func_001AD100(p);
    func_00206730(p + 0xBCC);
    func_00228300(p + 0xBC4);
    if (*(char **)(p + 0xBCC) != 0 && (unsigned char)func_002077F0(*(char **)(p + 0xBCC)) == 1) {
        *(int *)(p + 0xBCC) = 0;
    }
    if ((unsigned char)func_002DA0B0(*(int *)(p + 0xBC0), 0) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0xB50) = *(float *)(p + 0xB50) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xB50) < 0.0f) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 0xB42)) {
    case 0:
        func_0033C100(p);
        break;
    case 1:
        func_0033C500(p);
        break;
    case 2:
        func_0033C810(p);
        break;
    case 3:
        func_0033C8A0(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_0028C5C0(char *, int, float);

extern char *D_005BC2E0;

void func_0028C790(char *, int);

extern float D_0055C7F0[];

extern float D_0055C7F4[];

extern float D_0055C7F8[];

extern float D_0055C7FC[];

void func_0033D5B0(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C790(p + 0x150, 1);
    func_0028C790(p + 0x150, 2);
    func_0028C790(p + 0x150, 3);
    func_0028C790(p + 0x150, 4);
    func_0028C790(p + 0x150, 5);
    func_0028C200(p + 0x150, p + 0x370, p + 0x390, 1, D_005BC2E0 + 0x600, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x390) = 2;
    *(float *)(p + 0x3A0) = D_0055C7F0[0];
    *(float *)(p + 0x3A4) = D_0055C7F4[0];
    *(float *)(p + 0x3A8) = D_0055C7F8[0];
    *(float *)(p + 0x3AC) = 1.0f;
    *(float *)(p + 0x3B0) = D_0055C7FC[0];
    func_0028C3A0(p + 0x150, 0, -1, p + 0xB80);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        q[2] = 1;
        *(int *)(q + 0xC) = *(int *)(q + 0xC) & ~0x4000;
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_0033D3C0();

void func_0033D6F0();

void func_0033CFC0(char *p0) {
    void func_0033D310();
    *(char *)(p0 + 2880) = 0;
    *(char *)(p0 + 2882) = 3;
    *(int *)(p0 + 2884) = 0x3f800000;
    func_0033D6F0();
    func_0033D310(p0);
    func_0033D3C0(p0);
}

int func_0033D2A0();

int func_0033DA60();

int func_0033CAF0(p0, p1, p2) int p0; int p1; int p2; {
    int func_0033D310();
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int tmp0;
    v0 = (char *)p0;
    v1 = (char *)p2;
    v6 = func_0033D2A0();
    v2 = *(unsigned char *)(v0 + 2882);
    v3 = 3;
    if (v2 != v3) {
        if (*(signed char *)(v1 + 5) == v3) {
            v4 = 1;
            if (v2 != v4) {
                if (*(unsigned char *)(v0 + 2880) != v4) {
                    if (*(unsigned char *)(v0 + 2881) != v4) {
                        func_0033D310(v0, v2);
                        v5 = (int)v1;
                        if (v1 != 0) {
                            v5 = (v5 + -64);
                        }
                        v6 = func_0033DA60(v5);
                        tmp0 = (v6 & 255);
                        v7 = 1;
                        if (tmp0 == 0) {
                            *(char *)(v0 + 2880) = v7;
                        } else {
                            *(char *)(v0 + 2881) = 1;
                            if (v1 != 0) {
                                v1 = (v1 + -64);
                            }
                            *(char **)(v0 + 3012) = v1;
                        }
                    }
                }
            }
        }
    }
    return v6;
}
