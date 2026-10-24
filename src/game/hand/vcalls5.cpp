/* Hand-matched C++ (virtual calls), part 5: functions whose callee prototypes conflict
 * with declarations in vcalls.cpp .. vcalls4.cpp (e.g. func_00133890 / func_00207470 variants). */

class O4E6a {
public:
    virtual void u8();
    virtual char *mC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C(char *, char *);
};
class O4E6b {
public:
    virtual void u8();
    virtual int mC(char *, char *);
};
typedef struct { float f[4]; } __attribute__((aligned(16))) Q4E6;
extern "C" Q4E6 D_0058B710;
extern "C" char D_00587920[];
extern "C" char D_0058AE10[];
extern "C" char *func_00279290(char *);
extern "C" void func_001A1D90(char *);
extern "C" void func_00133890(char *, float *, char *);
extern "C" char *func_00207470(int, int, char *);
extern "C" char *func_002FF750(int, char *, int);
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" char *func_0028C3A0(char *, int, int, char *);
extern "C" void func_002530C0(char *, char *);
extern "C" float D_00586500[];
extern "C" float D_00586504[];
extern "C" float D_00586508[];
extern "C" char D_00577780[];
extern "C" char D_005779E0[];
extern "C" char D_00577CD0[];
extern "C" void func_001AD140(char *);
extern "C" char *func_00207480(int, int, float *, int);
extern "C" void func_002E7920(char *, char *, char *, char *, char *, int);
static inline char *ent4E6(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }
static inline char *gch4E6(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent4E6(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }
extern "C" void func_004E64F0(char *p) {
    char *h;
    char *x;
    char *y;
    char *e;
    Q4E6 t;
    *(unsigned char *)(p + 4) = 1;
    h = *(char **)(*(char **)(p + 0x478) + 0xE70);
    y = gch4E6(h, 0x1F);
    x = gch4E6(h, 0x20);
    if (!(unsigned char)((O4E6a *)(p + 0x480))->m2C(x, y)) {
        *(unsigned char *)(p + 4) = 4;
        return;
    }
    h = gch4E6(h, 0x21);
    if (!(unsigned char)((O4E6b *)(p + 0xA80))->mC(((O4E6a *)(p + 0x480))->mC(), h)) {
        *(unsigned char *)(p + 4) = 4;
        return;
    }
    func_001A1D90(func_00279290(p + 0x480));
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    t = D_0058B710;
    func_00133890(p + 0x150, (float *)(p + 0xF0), (char *)&t);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x470) = func_00207470(3, 0x329, 0);
    if ((e = *(char **)(p + 0x470)) != 0) {
        *(char **)(e + 0x90) = p + 0x150;
        e[0x9A] = 3;
        (*(char **)(p + 0x470))[0x3A] = 1;
    }
    *(char **)(p + 0x474) = func_002FF750(0x12, p + 0x150, 1);
    *(unsigned char *)(p + 0x3C0) = 5;
    *(unsigned char *)(p + 0x3C1) = 0;
    *(short *)(p + 0x3C2) = 0;
    *(unsigned char *)(p + 0x3C4) = 2;
    *(unsigned char *)(p + 0x3C5) = 0;
    *(short *)(p + 0x3C6) = 1;
    *(unsigned char *)(p + 0x3D0) = 2;
    *(float *)(p + 0x3E0) = 0.0f;
    *(float *)(p + 0x3E4) = 0.0f;
    *(float *)(p + 0x3E8) = 0.0f;
    *(float *)(p + 0x3EC) = 1.0f;
    *(float *)(p + 0x3F0) = 80.0f;
    *(unsigned char *)(p + 0x420) = 2;
    *(float *)(p + 0x430) = 0.0f;
    *(float *)(p + 0x434) = 0.0f;
    *(float *)(p + 0x438) = 0.0f;
    *(float *)(p + 0x43C) = 1.0f;
    *(float *)(p + 0x440) = 90.0f;
    func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 3, D_00587920, p, 0);
    *(int *)(p + 0x278) = 0x30443;
    func_0028C8E0(p + 0x1A0, 0xA);
    func_0028C910(p + 0x1A0);
    func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x1A0, 1, -1, p + 0x150);
    *(short *)(p + 0xB10) = 0;
    *(int *)(p + 0xB1C) = 0;
    func_002530C0(p, D_0058AE10);
}

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

extern "C" void func_00484BD0(D_484 *self) {
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
