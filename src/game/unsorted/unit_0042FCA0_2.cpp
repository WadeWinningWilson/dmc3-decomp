class B42F;

class V42F {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void m20(int, char *, B42F *);
};

class B42F {
public:
    int x;
};

class A42F {
public:
    char pad[0x40];
};

class P42F : public A42F, public B42F {
public:
    int y;
};

extern "C" int func_00430C20(char *, char *, V42F *, char *, unsigned char, unsigned char);

extern "C" int func_0042FCA0(P42F *q, char *e, V42F *o) {
    char *p = (char *)q;
    int r;
    float a;
    float b;
    float c;
    float t;
    char *m;
    char *x;
    r = 3;
    if (*(signed char *)(p + 0x46) != 0) return r;
    if (*(unsigned char *)(e + 0x3D) == 6) return r;
    switch (*(unsigned char *)(p + 0x3C74)) {
    case 0:
        m = *(char **)(p + 0x283C);
        a = *(float *)(m + 0x1A4);
        b = *(float *)(m + 0x1B0);
        c = *(float *)(m + 0x1BC);
        break;
    case 1:
        m = *(char **)(p + 0x283C);
        a = *(float *)(m + 0x1A8);
        b = *(float *)(m + 0x1B4);
        c = *(float *)(m + 0x1C0);
        break;
    case 2:
        m = *(char **)(p + 0x283C);
        a = *(float *)(m + 0x1AC);
        b = *(float *)(m + 0x1B8);
        c = *(float *)(m + 0x1C4);
        break;
    }
    if (*(unsigned char *)(p + 0x2848) == 0x11 && (*(unsigned char *)(p + 0x2998) == 0xBE || *(unsigned char *)(p + 0x2998) == 0xC2)) {
        t = *(float *)(p + 0x3C90);
        if (t <= c) r = 2;
        if (t <= b) r = 1;
        if (t <= a) r = 0;
        switch ((unsigned char)r) {
        case 0:
            if (*(int *)(p + 0x2898) & 2) o->m20(3, e, q);
            else o->m20(2, e, q);
            break;
        case 1:
            if (!(unsigned char)func_00430C20(p, e, o, x, 4, 0)) return 3;
            if (*(int *)(p + 0x2898) & 2) o->m20(1, e, q);
            else o->m20(0, e, q);
            break;
        case 2:
            if (!(unsigned char)func_00430C20(p, e, o, x, 0, 0)) return 3;
            if (*(int *)(p + 0x2898) & 2) o->m20(1, e, q);
            else o->m20(0, e, q);
            break;
        case 3:
            break;
        }
    }
    return r;
}
