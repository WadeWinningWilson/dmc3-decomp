extern "C" char D_01CAFF0C[];

class CamV {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, char *);
    virtual float m18();
    virtual float m1C();
    virtual void d6();
    virtual void d7();
    virtual float m28();
};

static inline unsigned char gsb(char *g) {
    if (*(int **)(g + 8) != 0 && **(int **)(g + 8) != 0) {
        return 1;
    }
    if (*(int *)(g + 0x1C) - *(int *)(g + 0x20) != 0) {
        return 1;
    }
    if (*(unsigned char *)(g + 0x1A) == 1) {
        return 1;
    }
    return 0;
}

static inline unsigned char gsc(char *g) {
    if (g != 0) {
        return gsb(g);
    }
    return 0;
}

extern "C" {
void func_002A6CA0(char *p, int a1) {
    extern void func_002A6C10(char *, char *, char *);
    *(unsigned char *)(p + 0x90) = 0;
    *(int *)(p + 0xA0) = a1;
    *(unsigned char *)(p + 0xA4) = 0;
    *(float *)(p + 0xA8) = 10000000.0f;
    *(float *)(p + 0xAC) = 10000000.0f;
    ((CamV *)p)->m14(p + 0x80, p + 0x70);
    *(float *)(p + 0x20) = ((CamV *)p)->m18();
    *(float *)(p + 0x24) = ((CamV *)p)->m1C();
    func_002A6C10(p, p + 0x70, p + 0x80);
    if (gsc(*(char **)(*(char **)D_01CAFF0C + 0x20))) {
        *(float *)(p + 0x9C) = ((CamV *)p)->m28();
    } else {
        *(float *)(p + 0x9C) = 1.0f;
    }
}
}

extern "C" void func_002C33D0(char *, char *, char *, char *, int);

class O2A6 {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(char *, char *);
    virtual float m18();
    virtual float m1C();
    virtual void d20(); virtual void d24();
    virtual float m28();
};

static inline bool func_002A6E10_b(char *g) {
    if (*(int **)(g + 8) != 0 && **(int **)(g + 8) != 0) return true;
    if (*(int *)(g + 0x1C) - *(int *)(g + 0x20) != 0) return true;
    if (*(unsigned char *)(g + 0x1A) == 1) return true;
    return false;
}

static inline bool func_002A6E10_a(void) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) return func_002A6E10_b(g);
    return false;
}

extern "C" {
void func_002A6E10(char *p, char *a) {
    extern void func_002C31A0(char *, char *, int);
    extern void func_002A6C10(char *, char *, char *);
    char *q;
    *(unsigned char *)(p + 0x90) = 1;
    *(char **)(p + 0xA0) = a;
    *(unsigned char *)(p + 0x1158) = 0;
    *(float *)(p + 0x115C) = 10000000.0f;
    *(float *)(p + 0x1160) = 10000000.0f;
    q = *(char **)(p + 0xA0) + 0x40;
    func_002C31A0(p + 0xB0, q, *(unsigned char *)(q + 0x400));
    func_002C31A0(p + 0x900, q + 0x180, *(unsigned char *)(q + 0x400));
    func_002C33D0(p + 0x900, p + 0x1150, p + 0x1154, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, 0);
    ((O2A6 *)p)->m14(p + 0x80, p + 0x70);
    *(float *)(p + 0x20) = ((O2A6 *)p)->m18();
    *(float *)(p + 0x24) = ((O2A6 *)p)->m1C();
    func_002A6C10(p, p + 0x70, p + 0x80);
    if (func_002A6E10_a()) {
        *(float *)(p + 0x9C) = ((O2A6 *)p)->m28();
    } else {
        *(float *)(p + 0x9C) = 1.0f;
    }
}
}

class V18_0_f {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual float m(void);
};

class V1C_0_f {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m(void);
};

extern "C" {
int func_002A6FE0(char *p0, int p1) {
    int func_002A6C10(char *, char *, char *);
    void func_002C31A0(char *, char *, int);
    char *tmp2;
    float tmp7;
    float tmp8;
    int tmp9;
    *(char *)(p0 + 144) = 2;
    *(int *)(p0 + 160) = p1;
    tmp2 = (*(char **)(p0 + 160) + 64);
    func_002C31A0((p0 + 176), (*(char **)(p0 + 160) + 64), *(unsigned char *)(*(char **)(p0 + 160) + 1088));
    func_002C31A0((p0 + 2304), (tmp2 + 384), *(unsigned char *)(tmp2 + 1024));
    func_002C31A0((p0 + 4432), (tmp2 + 1040), *(unsigned char *)(tmp2 + 2064));
    func_002C31A0((p0 + 6560), (tmp2 + 1424), *(unsigned char *)(tmp2 + 2064));
    tmp7 = ((V18_0_f *)p0)->m();
    *(float *)(p0 + 32) = tmp7;
    tmp8 = ((V1C_0_f *)p0)->m();
    *(float *)(p0 + 36) = tmp8;
    tmp9 = func_002A6C10(p0, (p0 + 112), (p0 + 128));
    return tmp9;
}
}

class V14_2_ppv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(char *, char *);
};

extern "C" {
int func_002A70A0(char *p0, int p1) {
    int func_002A6C10(char *, char *, char *);
    float tmp0;
    float tmp1;
    int tmp2;
    *(char *)(p0 + 144) = 3;
    *(int *)(p0 + 160) = p1;
    *(int *)(p0 + 128) = 0;
    *(int *)(p0 + 132) = 0;
    *(int *)(p0 + 136) = 0;
    *(int *)(p0 + 140) = 0x3f800000;
    *(int *)(p0 + 112) = 0;
    *(int *)(p0 + 116) = 0;
    *(int *)(p0 + 120) = 0;
    *(int *)(p0 + 124) = 0x3f800000;
    ((V14_2_ppv *)p0)->m((p0 + 128), (p0 + 112));
    tmp0 = ((V18_0_f *)p0)->m();
    *(float *)(p0 + 32) = tmp0;
    tmp1 = ((V1C_0_f *)p0)->m();
    *(float *)(p0 + 36) = tmp1;
    tmp2 = func_002A6C10(p0, (p0 + 112), (p0 + 128));
    return tmp2;
}
}
