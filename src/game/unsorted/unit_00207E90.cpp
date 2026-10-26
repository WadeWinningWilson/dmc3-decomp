extern "C" void func_00209C00(char *p, unsigned char mode) {
    int b = 0;
    int a = 0;
    char *e;
    int k;
    if (mode == 0) {
        *(int *)(p + 0xC) = *(int *)(p + 4);
    } else {
        *(int *)(p + 0xC) = *(int *)(p + 8);
    }
    while ((k = *(unsigned char *)(e = *(char **)(p + 0xC))) != 1) {
        if (k == 7) {
            a = 0;
        } else if (k == 13) {
            switch (*(int *)(e + 4)) {
            case 0:
                {
                    int *q = (int *)(e + 8);
                    if (*q == -1) {
                        *q = b++;
                    }
                }
                break;
            case 1:
                {
                    int *q = (int *)(e + 8);
                    if (*q == -1) {
                        *q = a++;
                    }
                }
                break;
            case 2:
                break;
            }
        }
        *(char **)(p + 0xC) = *(char **)(p + 0xC) + (((*(int *)*(char **)(p + 0xC) >> 8) & 0xFF) + 1) * 4;
        *(unsigned char *)(p + 0x89) = 0;
    }
    *(int *)(p + 0xC) = *(int *)(p + 4);
}

extern "C" char D_01DFABA0[];

extern "C" char *D_005BC1A8;

extern "C" char D_006663C0[];

extern "C" void func_0020E6C0(char *);

extern "C" unsigned short func_001AE1E0(char *, int);

extern "C" void func_0020E0A0(char *, char *);

extern "C" void func_0020E720(char *);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_0020EA10(char *, int, int);

extern "C" void func_0020CE70(char *, char *);

extern "C" int func_0020A980(char *);

extern "C" int func_0020AB70(char *);

class V20A {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void m14(unsigned int, int);
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(unsigned int, int);
};

extern "C" void func_0020A6F0(char *p) {
    int i;
    char *q;
    if (*(int *)(p + 0xC) == 0) return;
    func_0020E6C0(p);
    if (*(unsigned char *)(p + 0x9A) != 0) {
        switch (*(signed char *)(p + 0x8A)) {
        case 0:
            if (*(unsigned char *)(p + 0x9B) == 0) break;
            if (!(func_001AE1E0(D_006663C0, 0) & 0x800)) break;
            ((V20A *)D_005BC1A8)->m24(0x80000000, 0);
            (*(signed char *)(p + 0x8A))++;
        case 1:
            for (i = 0; i < 2; i++) {
                q = p + i * 0xC + 0xD8;
                if (*(int *)q != 0) func_0020E0A0(p, q + 4);
            }
            func_0020E0A0(p, p + 0xC);
            func_0020E720(p);
            func_003303F0(D_01DFABA0, 8, 0xA8, 0, 0x32);
            if (*(signed char *)(p + 0x8B) != -1) {
                *(signed char *)(p + 0x8A) = 10;
            } else {
                *(signed char *)(p + 0x8A) = 100;
            }
            return;
        case 10:
            (*(signed char *)(p + 0x8A))++;
            return;
        case 11:
            (*(signed char *)(p + 0x8A))++;
            return;
        case 12:
            (*(signed char *)(p + 0x8A))++;
            return;
        case 13:
            func_0020EA10(p, *(signed char *)(p + 0x8B), 0);
            *(signed char *)(p + 0x8A) = 100;
            return;
        case 100:
            ((V20A *)D_005BC1A8)->m14(0x80000000, 0xF);
            break;
        }
        if (*(signed char *)(p + 0x8A) == 0) {
            for (i = 0; i < 2; i++) {
                func_0020CE70(p, p + i * 0xC + 0xD8);
            }
        }
    }
    switch (*(signed char *)(p + 0x88)) {
    case 0:
        if (func_0020A980(p) == 0) return;
        *(signed char *)(p + 0x88) = 1;
        *(signed char *)(p + 0x89) = 0;
    case 1:
        if (func_0020AB70(p) == 0) return;
        q = *(char **)(p + 0xC);
        *(char **)(p + 0xC) = q + (((*(int *)q >> 8) & 0xFF) + 1) * 4;
        *(signed char *)(p + 0x89) = 0;
        *(signed char *)(p + 0x88) = 0;
        *(signed char *)(p + 0x89) = 0;
        break;
    }
}

extern "C" void func_002F7CF0(int);

extern "C" char *func_002F7D10(void);

class V20ED {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual void m2C(int, int);
};

extern "C" void func_0020ED10(char *a, int **b) {
    char *o;
    func_002F7CF0((*b)[1]);
    while ((o = func_002F7D10()) != 0) {
        ((V20ED *)o)->m2C((*b)[2], (*b)[3]);
    }
}

extern "C" {
int func_002F7C10(int, int);
}

class V18_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(int);
};

extern "C" {
void func_0020ED90(int p0, char *p1) {
    char *v0;
    int v1;
    char *v2;
    v0 = p1;
    v1 = func_002F7C10(*(int *)(*(char **)(p1 + 0) + 4), 0);
    v2 = (char *)v1;
    if (v2 != 0) {
        v1 = ((V18_1_ii *)v2)->m(*(int *)(*(char **)(v0 + 0) + 8));
    }
}
}

class V14_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(int);
};

extern "C" {
void func_0020EDF0(int p0, char *p1) {
    char *v0;
    int v1;
    char *v2;
    v0 = p1;
    v1 = func_002F7C10(*(int *)(*(char **)(p1 + 0) + 4), 0);
    v2 = (char *)v1;
    if (v2 != 0) {
        v1 = ((V14_1_ii *)v2)->m(*(int *)(*(char **)(v0 + 0) + 8));
    }
}
}
