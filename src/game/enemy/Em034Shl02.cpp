extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_00206730(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" char D_01DFABA0[];

extern "C" int D_005BE09C;

extern "C" float func_00132470(char *, char *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" int func_002D9EB0(char *);

extern "C" void func_00253110(char *, char *, int, float);

extern "C" int func_002536B0(char *, char *);

extern "C" float func_0011DBE0(float, float);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern "C" V4 D_00586520;

extern "C" {
void func_00484F40(char *p) {
    extern char D_01CAFF0C[];
    extern void func_00133890(char *, char *, V4 *);
    V4 m;
    char *q;
    char *pl;
    func_00206730(p + 0xAEC);
    if (*(unsigned char *)(p + 0xAF4) == 0) {
        q = *(char **)(D_005BE09C + 0x23C);
        if (q && func_00132470(q + 0x70, p + 0x50) < 900.0f) {
            func_00330BD0(D_01DFABA0, 0x2B, p + 0x50, 0x22, 0);
            p[0xAF4] = 1;
        }
    }
    if (*(char **)(p + 0x21C) && *(int *)(*(char **)(p + 0x21C) + 8)) {
        p[4] = 2;
        p[5] = 0;
        return;
    }
    pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    func_00253110(p, *(char **)(*(char **)((char *)(func_002D9EB0(pl) * 4) + (int)pl + 0x1390) + 0x104) + 0x30, 3, *(float *)(p + 0x10));
    if (func_002536B0(p, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50)) {
        p[4] = 2;
        p[5] = 0;
        return;
    }
    m = D_00586520;
    func_00133890(p + 0x150, p + 0xF0, &m);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}
}

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_002530C0(char *, char *);

extern "C" float D_00586500[];

extern "C" float D_00586504[];

extern "C" float D_00586508[];

extern "C" char D_00577780[];

extern "C" char D_00577CD0[];

extern "C" void func_001AD140(char *);

extern "C" char *func_00207480(int, int, float *, int);

extern "C" void func_002E7920(char *, char *, char *, char *, char *, int);

class O484a {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C(char *, char *);
};

class O484c {
public:
    virtual void u8();
    virtual void mC(char *, char *, char *, int);
};

class B0_484 {
public:
    char pad[0x40];
};

class B1_484 {
public:
    int x;
};

class D_484 : public B0_484, public B1_484 {
public:
    int y;
};

typedef struct { float f[4]; } __attribute__((aligned(16))) Q484;

extern "C" Q484 D_00586510;

static inline char *ent484(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch484(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent484(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" {
void func_00484BD0(D_484 *self) {
    extern void func_00133890(char *, float *, char *);
    extern char D_005779E0[];
    char *p = (char *)self;
    char *h;
    char *x;
    char *y;
    char *e;
    Q484 t;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 0xAF4) = 0;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + D_00586500[0];
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + D_00586504[0];
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + D_00586508[0];
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    h = *(char **)(p + 0x470);
    y = gch484(h, 0x13);
    x = gch484(h, 0x19);
    if (!(unsigned char)((O484a *)(p + 0x480))->m2C(x, y)) {
        func_001AD140(p);
        return;
    }
    t = D_00586510;
    func_00133890(p + 0x150, (float *)(p + 0xF0), (char *)&t);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0xAEC) = func_00207480(3, 0x179, 0, 0x10);
    if ((e = *(char **)(p + 0xAEC)) != 0) {
        *(char **)(e + 0x90) = p + 0x150;
        e[0x9A] = 3;
        (*(char **)(p + 0xAEC))[0x3A] = 1;
    }
    *(unsigned char *)(p + 0x3C0) = 5;
    *(unsigned char *)(p + 0x3C1) = 0;
    *(short *)(p + 0x3C2) = 0;
    *(unsigned char *)(p + 0x3C4) = 2;
    *(unsigned char *)(p + 0x3C5) = 0;
    *(short *)(p + 0x3C6) = 1;
    *(unsigned char *)(p + 0x3D0) = 2;
    *(float *)(p + 0x3E0) = 0.0f;
    *(float *)(p + 0x3E4) = 0.0f;
    *(float *)(p + 0x3E8) = 30.0f;
    *(float *)(p + 0x3EC) = 1.0f;
    *(float *)(p + 0x3F0) = 18.0f;
    *(unsigned char *)(p + 0x420) = 2;
    *(float *)(p + 0x430) = 0.0f;
    *(float *)(p + 0x434) = 0.0f;
    *(float *)(p + 0x438) = 30.0f;
    *(float *)(p + 0x43C) = 1.0f;
    *(float *)(p + 0x440) = 30.0f;
    if (*(unsigned char *)(p + 0xAF5) == 0) {
        func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 3, D_00577780, p, 0);
        *(int *)(p + 0x278) = 0x30443;
        func_0028C8E0(p + 0x1A0, 2);
    } else {
        func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 1, D_00577780, p, 0);
        *(int *)(p + 0x278) = 0x3050C;
        func_0028C8E0(p + 0x1A0, 6);
    }
    func_0028C910(p + 0x1A0);
    func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x1A0, 1, -1, p + 0x150);
    func_002E7920(p + 0xA90, D_005779E0, p + 0xA80, p + 0xAD4, (char *)(B1_484 *)self, 0);
    ((O484c *)(p + 0xAD4))->mC(D_005779E0, p + 0xA80, (char *)(B1_484 *)self, 1);
    func_002530C0(p, D_00577CD0);
}
}

extern "C" {
extern char D_00577A80[];
}

extern "C" {
extern char D_00577AA4[];
}

extern "C" {
extern char D_00577AA8[];
}

extern "C" {
int func_00332AE0(int, char *, float, float);
}

class V14_3_iipi {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(int, int, char *);
};

extern "C" {
int func_004852A0(int p0, int p1, int p2) {
    extern char D_005779E0[];
    extern char D_01CAFF0C[];
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = ((V14_3_iipi *)(v0 + 2772))->m(p1, p2, D_005779E0);
    if (*(float *)(v0 + 2692) <= 0.0f) {
        *(char *)(v0 + 4) = 2;
        *(char *)(v0 + 5) = 0;
        v1 = func_00332AE0((*(int *)(*(char **)D_01CAFF0C + 12) + 15760), D_00577A80, *(float *)D_00577AA8, *(float *)D_00577AA4);
    }
    return v1;
}
}
