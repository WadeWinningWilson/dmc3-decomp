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
extern "C" char D_01CAFF3D[];
extern "C" char D_01DFABA0[];
extern "C" void func_00105230(float *, float *, char *);
extern "C" void func_003305E0(char *, int, int, char *, int, int, int);
extern "C" char D_01CAFF0C[];
extern "C" float D_005BD944;
extern "C" void func_00105760(float *, float *, float);
extern "C" void func_00104B80(float *, float *, float *);
extern "C" short func_0034B940(float *, char *);
extern "C" int func_0034B8C0(char *, short *, int);
extern "C" float func_001324B0(char *, float *);
extern "C" short func_00131D10(float, float);
extern "C" void func_0034BA60(int, float *, signed char, int, int);
extern "C" void func_0037C7B0(char *, int);

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

class E451 {
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
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void m38(char *, char *);
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void m64(char *, int, float, float, float);
    virtual float m68();
};

extern "C" void func_004511A0(char *p, char *a, E451 *e, char *w) {
    float m[16] __attribute__((aligned(16)));
    float d;
    char *q;
    if (a == 0) return;
    if (e == 0) return;
    if (*(unsigned char *)(p + 0xEB) != 1) return;
    if (((unsigned char *)(p + 0xDD))[*(unsigned char *)(p + 0xEA)] == 1) return;
    d = *(float *)(a + 4) * e->m68();
    e->m64(a, 0, d, 1.0f, 1.0f);
    q = p;
    if (q != 0) q += 0x40;
    e->m38(a, q);
    ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] -= d;
    if (*(unsigned char *)(a + 0x30) != 0 && ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] <= 1.0f) {
        ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] = 1.0f;
    }
    if (((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] < 0.0f || *(unsigned char *)D_01CAFF3D != 0) {
        ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] = -1.0f;
        *(unsigned char *)(p + 0xE5) = 1;
    } else {
        *(unsigned char *)(p + 0xE6) = 1;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105230(m, m, w);
    func_00207480(3, 0x1C, m, 0x20);
    func_00207480(1, 0x573, (float *)(p + *(unsigned char *)(p + 0xEA) * 64 + 0x120), 0x40);
    func_003305E0(D_01DFABA0, 8, 0xB, w, 0x29, 0, 0);
}

class W436 {
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
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual int m2E8();
    virtual void u2EC();
    virtual void u2F0();
    virtual void m2F4(int);
    virtual void u2F8();
    virtual void m2FC(int);
};

extern "C" void func_00436AA0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W436 *)p)->m2FC(2);
        break;
    case 1:
        o = *(char **)D_01CAFF0C;
        v[2] = -100.0f;
        v[0] = 0.0f;
        v[3] = 1.0f;
        v[1] = 0.0f;
        o = *(char **)(o + 0xC);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, *(float *)(o + 0x84));
        func_00104B80(v, m, v);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
        v[3] = 1.0f;
        *(short *)(p + 0x47BA) = func_0034B940(v, p + 0x50) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, (short *)(p + 0x47BA), (int)(5461.0f * *(float *)(p + 0x10)));
        if (func_001324B0(p + 0x50, v) < D_005BD944) {
            *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
            ((W436 *)p)->m2FC(0x30);
            break;
        }
        if (((W436 *)p)->m2E8() != 0x90) break;
        ((W436 *)p)->m2FC(2);
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x50), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
        *(short *)(p + 0x47BA) = func_00131D10(d[0], d[2]) - *(short *)(p + 0x4850) - 0x8000;
        if ((unsigned char)func_0034B8C0(p + 0x4850, (short *)(p + 0x47BA), (int)(5461.0f * *(float *)(p + 0x10))) == 1) {
            *(short *)(p + 0x4854) = *(short *)(p + 0x47BA);
            *(int *)(p + 0x4840) = 0;
            ((W436 *)p)->m2F4(0x30);
        }
        break;
    }
}

class B0_37C {
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
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void mF8(char *, char *);
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual int m310();
    virtual int m314();
    char pad[0x3C];
};

class B1_37C {
public:
    int x;
};

class D_37C : public B0_37C, public B1_37C {
public:
    int y;
};

class O37Ca {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int, float *, char *, char *, char *);
};

class O37Cb {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void m14(char *, char *, char *);
};

class E37C {
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
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void m38(char *, char *);
};

typedef struct { int w[16]; } T37C;
extern "C" unsigned char func_0024E810(char *);
extern "C" unsigned char func_0024E800(char *);
extern "C" int D_01CAFF38[];
extern "C" char D_00666750[];
extern "C" void func_00390E40(char *);
extern "C" void func_00252B50(char *, int, int, float, float);
extern "C" void func_0039D4C0(char *, int);
extern "C" void func_003A02B0(char *, int);
extern "C" void func_004B6970(char *, char *, int);
extern "C" int func_001AEA60(char *, int, int);
extern "C" int func_0031B860(int, char *, int, float);
extern "C" void func_0034B270(int, char *, int);
extern "C" void func_00128488(char *, int, int);
extern "C" int *func_001F95B0(char *);
extern "C" int func_001F8DE0(char *, char *);
extern "C" int *func_001F95C0(char *, int);
extern "C" unsigned char *func_001F9610(char *, int);
extern "C" int func_001FF2C0(char *, unsigned char *, float *);
extern "C" float func_00132470(float *, float *);
extern "C" float D_00567908[];
extern "C" float D_0056795C[];
extern "C" char *D_005BE09C;
extern "C" char D_005BE098[4];
extern "C" void func_001AD100();
extern "C" void func_00105300(int, int);
extern "C" void func_00382A50(char *);
extern "C" void func_00382BE0(char *);
extern "C" void func_00380320(char *);
extern "C" void func_00380F70(char *);
extern "C" void func_00381170(char *);
extern "C" int func_001ACCF0(char *, float, float, float, float);
extern "C" void func_001A1E10(char *);
extern "C" void func_001A1F90(char *);
extern "C" void func_001A2000(char *, int);
extern "C" void func_0028C5C0(char *, int, float);
extern "C" void func_003825C0(char *);
extern "C" void func_00195E20(char *, char *);
extern "C" void func_001A2D00(char *, int);
extern "C" void func_004FB870(char *, int);
extern "C" int func_004FB8D0(char *);
extern "C" void func_004FB8E0(char *, int, int, int);
extern "C" void func_004FBA90(char *, int, int);

extern "C" void func_0037C8A0(D_37C *self, char *a, E37C *e, float *v) {
    char *p = (char *)self;
    T37C t;
    if (*(unsigned char *)(p + 0x77C8) != 0) return;
    t = *(T37C *)a;
    if (*(unsigned char *)(p + 0x7805) != 0) {
        ((unsigned char *)&t)[0x20] = 4;
    }
    switch (*(signed char *)(a + 2)) {
    case 0:
        switch ((unsigned char)self->m310()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), v, *(signed char *)(p + 0x46), 0, 1);
            ((O37Ca *)(p + 0x75F0))->m18(0, v, (char *)&t, (char *)e, p + 0x6C0);
            ((O37Cb *)(p + 0x724C))->m14(a, (char *)e, p + 0x7264);
            e->m38(a, (char *)(B1_37C *)self);
            break;
        case 2:
            ((O37Ca *)(p + 0x75F0))->m18(2, v, a, (char *)e, p + 0x6C0);
            self->mF8(a, (char *)e);
            func_0034BA60(8, v, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        break;
    case 1:
        switch ((unsigned char)self->m314()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), v, *(signed char *)(p + 0x46), 0, 1);
            ((O37Ca *)(p + 0x75F0))->m18(0, v, a, (char *)e, p + 0x6C0);
            ((O37Cb *)(p + 0x724C))->m14(a, (char *)e, p + 0x7264);
            e->m38(a, (char *)(B1_37C *)self);
            break;
        case 2:
            ((O37Ca *)(p + 0x75F0))->m18(2, v, a, (char *)e, p + 0x6C0);
            self->mF8(a, (char *)e);
            func_0034BA60(6, v, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        break;
    }
    func_0037C7B0(p, 0);
}

class O4D0F {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0();
    virtual float *mC4();
};

extern "C" void func_004D0F20(char *p) {
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float *v;
    if (func_0024E810(*(char **)(p + 0xAB00)) == 0 && func_0024E800(*(char **)(p + 0xAB00)) == 0) {
        switch (*(unsigned char *)(p + 0xB2C9)) {
        case 0:
        case 1:
            v = ((O4D0F *)(p + 0x11C0))->mC4();
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB130), "r"(v) : "memory");
            break;
        case 2:
            v = ((O4D0F *)(p + 0x1DC0))->mC4();
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB130), "r"(v) : "memory");
            break;
        case 3:
            v = ((O4D0F *)(p + 0x47C0))->mC4();
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB130), "r"(v) : "memory");
            break;
        }
    }
    if (*(unsigned char *)(p + 0xB2D6) == 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	mfc1 $t0, %0
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%1)" : : "f"(*(float *)(p + 0xB2AC)), "r"(p + 0xB130), "r"(p + 0xB130) : "t0", "memory");
        *(unsigned char *)(p + 0xB2D6) = 0;
    }
    __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(p + 0xB130) : "memory");
    func_00105760(m, n, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0xB140), "r"(m) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xB140) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
}

class V390 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void g6C();
    virtual void g70();
    virtual void g74();
};

extern "C" void func_00390C00(char *p) {
    float y;
    int r;
    func_00390E40(p);
    func_00252B50(p, 0x80, 0x20, 400.0f, 300.0f);
    func_0039D4C0(p, 0);
    func_0039D4C0(p, 1);
    if (D_01CAFF38[0] == 0x79 || D_01CAFF38[0] == 0x19E) {
        y = 0.0f;
        if (*(int *)(p + 0xB04) != 0) {
            func_003A02B0(p, 2);
        } else {
            func_003A02B0(p, 1);
            y = 100.0f;
        }
        switch (*(unsigned char *)(p + 0x2DD4)) {
        case 0:
            *(float *)(p + 0x50) = 2900.0f;
            *(float *)(p + 0x54) = y;
            *(float *)(p + 0x58) = 2125.0f;
            *(float *)(p + 0x5C) = 1.0f;
            break;
        case 1:
            *(float *)(p + 0x50) = 2120.0f;
            *(float *)(p + 0x54) = y;
            *(float *)(p + 0x58) = 2125.0f;
            *(float *)(p + 0x5C) = 1.0f;
            break;
        default:
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xAE0) : "memory");
            break;
        }
    } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xAE0) : "memory");
        func_003A02B0(p, 2);
    }
    ((V390 *)(p + 0x130))->g6C();
    ((V390 *)(p + 0x130))->g74();
    ((V390 *)(p + 0x130))->g70();
    *(short *)(p + 0x90) = *(short *)(p + 0x160);
    func_004B6970(*(char **)(p + 0xB10), p, 0);
    func_004B6970(*(char **)(p + 0xB10), p, 1);
    r = func_001AEA60(D_00666750, 6, 3);
    *(int *)(p + 0x2DD0) = func_0031B860(r, p + 0xBC8, *(unsigned char *)(p + 0x2EE0) ? 2 : 1, *(float *)(p + 0xBC8));
    if (D_01CAFF38[0] == 0x79 || D_01CAFF38[0] == 0x19E) func_0034B270(5, 0, 0);
}

static inline unsigned char moved1FF(float *a, float *b) {
    if (!(func_00132470(a, b) <= 0.001f)) return 1;
    return 0;
}

static inline unsigned char tstD10(unsigned int *v, unsigned int b, unsigned int i) {
    if ((1 << b) & v[i]) return 0;
    return 1;
}

static inline unsigned char tasD10(unsigned int *v, unsigned int k) {
    unsigned char r;
    unsigned int b = k & 0x1F;
    unsigned int i = k >> 5;
    r = tstD10(v, b, i);
    v[i] |= 1 << b;
    return r;
}

extern "C" unsigned char func_001FFD10(char *p, float *b) {
    float d[4] __attribute__((aligned(16)));
    float save[4] __attribute__((aligned(16)));
    unsigned int vis[200];
    int i;
    int n;
    int *ids;
    int *lst;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(save), "r"(b) : "memory");
    func_00128488((char *)vis, 0, 0x320);
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8DE0(((char **)(p + 8))[*(int *)p], (char *)b);
    for (i = 0; i < n; i++) {
        for (ids = func_001F95C0(((char **)(p + 8))[*(int *)p], lst[i]); *ids != -1; ids++) {
            if (tasD10(vis, (unsigned int)*ids / 56) == 1) {
                if ((unsigned char)func_001FF2C0((char *)b, func_001F9610(((char **)(p + 8))[*(int *)p], *ids), d) == 1) {
                    b[0] = b[0] + d[0];
                    b[1] = b[1] + d[1];
                    b[2] = b[2] + d[2];
                }
            }
        }
    }
    return moved1FF(save, b);
}

class V380 {
public:
    virtual void d8(); virtual void dC();
    virtual void g10();
    virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30();
    virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50();
    virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70();
    virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90();
    virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void dB4(); virtual void dB8();
    virtual void gBC(float);
};

extern "C" void func_00380080(char *p) {
    char *o;
    func_001AD100();
    if (*(char **)(p + 0xB94) == 0) {
        func_001AD140(p);
        return;
    }
    *(signed char *)(p + 0x1447) = *(signed char *)(*(char **)(p + 0xB94) + 0x7617);
    *(signed char *)(p + 0x1448) = *(signed char *)(*(char **)(p + 0xB94) + 0x7618);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(short *)(p + 0xB90) == 0) {
            ((V380 *)(p + 0x340))->gBC(*(float *)(p + 0x10));
        } else {
            o = *(char **)(*(char **)(p + 0xB94) + 0x69F8);
            func_00105300(*(int *)(*(char **)(p + 0x9D8) + 0x100), *(int *)(*(char **)(o + 0x9D8) + 0x100));
            func_00105300(*(int *)(*(char **)(p + 0x9E4) + 0x100), *(int *)(*(char **)(o + 0x9E4) + 0x100));
            func_00105300(*(int *)(*(char **)(p + 0x9F4) + 0x100), *(int *)(*(char **)(o + 0x9F4) + 0x100));
            func_00105300(*(int *)(*(char **)(p + 0xA00) + 0x100), *(int *)(*(char **)(o + 0xA00) + 0x100));
        }
        break;
    }
    func_00382A50(p + 0xB94);
    func_00382BE0(p + 0xB98);
    *(unsigned char *)(p + 0x135C) = 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00380320(p);
        break;
    case 3:
        func_00380F70(p);
        break;
    case 4:
        func_00381170(p);
        break;
    }
    if (*(int *)(p + 0x144C) > 0) *(float *)(p + 0x13B0) = D_00567908[0];
    else *(float *)(p + 0x13B0) = D_0056795C[0];
    if (*(unsigned char *)(p + 5) == 0) {
        if (D_005BE09C != 0) {
            if ((unsigned char)func_001ACCF0(D_005BE09C, *(float *)(p + 0x1270), *(float *)(p + 0x1274), *(float *)(p + 0x1278), 300.0f)) {
                func_001A1E10(func_00279290(p + 0x340));
            } else {
                func_001A1F90(func_00279290(p + 0x340));
            }
        }
        if (*(unsigned char *)(p + 5) == 0 && *(short *)(p + 0xB90) != *(int *)(*(char **)(p + 0xB94) + 0x6E7C) - 1) {
            func_001A2000(func_00279290(p + 0x340), 0);
        }
        if (*(unsigned char *)(p + 0x135C) == 0) func_001A1F90(func_00279290(p + 0x340));
    }
    func_0028C5C0(p + 0xD10, 0, 1.0f);
    ((V380 *)(p + 0x1370))->g10();
    ((V380 *)(p + 0xC4C))->g10();
    func_003825C0(p);
    func_00195E20(D_005BE098, p);
}

class V4FB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20();
    virtual float g24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50();
    virtual int g54();
};

class W4FB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual void gBC(float);
};

extern "C" V4FB *func_002792A0(char *);
extern "C" void func_00207A90(unsigned int *);
extern "C" unsigned int D_01DF8810[];
extern "C" unsigned int D_01DF7E50[];
extern "C" int func_00201770(char *, float *, float *, float *, int);
extern "C" float D_005796E0[];
extern "C" float D_00579700[];
extern "C" float func_00131BA0(short);
extern "C" float func_00131C20(short);
extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" void func_004FB4A0(char *p) {
    int k;
    int f;
    k = func_002792A0(p + 0x100)->g54();
    f = func_002792A0(p + 0x100)->g24();
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(signed char *)*(char **)(p + 0xDB0) > 1) func_001A2D00(func_00279290(p + 0x700), 0x80000096);
        func_004FB870(p, *(signed char *)(*(char **)(p + 0xDB0) + 5));
        *(unsigned char *)(p + 0xDB4) = 0;
        *(int *)(p + 0xDC0) = 0;
        (*(unsigned char *)(p + 5))++;
    case 1:
        if (*(int *)(p + 0xDC0) < 0x10) (*(int *)(p + 0xDC0))++;
        if (*(signed char *)(*(char **)(p + 0xDB0) + 2) < f) {
            *(unsigned char *)(p + 0xDB4) = 1;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (0 < *(int *)(p + 0xDC0)) (*(int *)(p + 0xDC0))--;
        if (*(signed char *)(*(char **)(p + 0xDB0) + 3) < f || (unsigned char)k == 4 || (unsigned char)k == 0) {
            *(unsigned char *)(p + 0xDB4) = 2;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (0 < *(int *)(p + 0xDC0)) (*(int *)(p + 0xDC0))--;
        if (*(int *)(p + 0xDC0) <= 0 && !(unsigned char)func_004FB8D0(p)) {
            *(unsigned char *)(p + 0xDB4) = 3;
            *(unsigned char *)(p + 4) = 4;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
    ((W4FB *)(p + 0x100))->gBC(*(float *)(p + 0x10));
    if (*(signed char *)*(char **)(p + 0xDB0) > 1) ((W4FB *)(p + 0x700))->gBC(*(float *)(p + 0x10));
    k = func_002792A0(p + 0x100)->g54();
    func_004FB8E0(p, *(signed char *)(*(char **)(p + 0xDB0) + 5), func_002792A0(p + 0x100)->g24(), k);
    func_004FBA90(p, *(signed char *)(*(char **)(p + 0xDB0) + 4), *(int *)(p + 0xDC0));
}

struct B46C {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual int m34();
    virtual short m38();
    virtual void d3C();
    virtual void d40();
    virtual void m44();
    virtual void m48(int, char *);
};

struct A46C {
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
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void mE4(char *, char *, char *, char *);
    virtual void dE8();
    virtual void mEC(int);
};

#define FB(t, o) (*(t *)(p + (o)))

static inline float frand46C(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

static inline unsigned char has46C(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0)
        return 0;
    return 1;
}

extern "C" void func_0046CA60(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    switch (FB(int, 0xD4)) {
    case 0:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 20.0f)) {
            (*(B46C **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            ((A46C *)p)->m6C();
            frand46C();
            {
                char *v = FB(char *, 0x10);
                float x = FB(float, 0x20);
                float y = FB(float, 0x24);
                float z = FB(float, 0x28);
                float w = FB(float, 0x2C);
                *(float *)(v + 0x10) = x;
                *(float *)(v + 0x14) = y;
                *(float *)(v + 0x18) = z;
                *(float *)(v + 0x1C) = w;
            }
            if (has46C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(FB(char *, 0x10) + 0x10) : "memory");
                t[1] += 400.0f;
                t[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t, r, buf, 0))
                    *(float *)(FB(char *, 0x10) + 0x14) = r[1];
            }
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 1;
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            (*(B46C **)(p + 0xA8))->m48(0x16, FB(char *, 0x10) + 0x10);
            ((A46C *)p)->m6C();
            ((A46C *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 2;
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 20.0f)) {
            (*(B46C **)(p + 0xA8))->m18(0x68);
            (*(B46C **)(p + 0xA8))->m48(0x387, FB(char *, 0x10) + 0x10);
            FB(int, 0xD4) = 3;
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(B46C **)(p + 0xA8))->m28() < 8.0f)) {
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 60.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -4.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(unsigned char, 0xCD) = 1;
            FB(int, 0xD4) = 4;
        } else {
            (*(B46C **)(p + 0xA8))->m24();
        }
        break;
    case 4:
        ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if (*(float *)(FB(char *, 0x10) + 0x24) < 0.0f) {
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -1.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(int, 0xD4) = 5;
        }
        break;
    case 5:
        ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B46C **)(p + 0xA8))->m30()) {
            FB(unsigned char, 0xCD) = 0;
            FB(int, 0xD4) = 6;
        }
        break;
    case 6:
        if ((*(B46C **)(p + 0xA8))->m2C()) {
            (*(B46C **)(p + 0xA8))->m44();
            ((A46C *)p)->mEC(0xE);
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    }
}

struct B46D {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual int m34();
    virtual short m38();
    virtual void d3C();
    virtual void d40();
    virtual void m44();
    virtual void m48(int, char *);
};

struct A46D {
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
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void d74();
    virtual void d78();
    virtual float m7C();
    virtual int m80(float);
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void mE4(char *, char *, char *, char *);
    virtual void dE8();
    virtual void mEC(int);
};

static inline unsigned char has46D(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0)
        return 0;
    return 1;
}

static inline unsigned int mt46D(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

static inline void cp46D(float *d, float *s) {
    float x = s[0];
    float y = s[1];
    float z = s[2];
    float w = s[3];
    d[0] = x;
    d[1] = y;
    d[2] = z;
    d[3] = w;
}

extern "C" void func_0046D030(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    float s[2] __attribute__((aligned(16)));
    short k;
    unsigned int u;
    switch (FB(int, 0xD4)) {
    case 10:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            (*(B46D **)(p + 0xA8))->m18(0);
            (*(B46D **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            (*(B46D **)(p + 0xA8))->m48(0x7D6, FB(char *, 0x10) + 0x10);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 0;
        }
        break;
    case 0:
        (*(B46D **)(p + 0xA8))->m48(0x38B, FB(char *, 0x10) + 0x10);
        FB(float, 0x100) += FB(float, 0xB0);
        if (!(FB(float, 0x100) <= D_005796E0[((A46D *)p)->m80(((A46D *)p)->m7C())])) {
            ((A46D *)p)->m6C();
            u = mt46D();
            cp46D((float *)(FB(char *, 0x10) + 0x10), (float *)(p + 0x20));
            k = (short)(unsigned short)u;
            *(float *)(FB(char *, 0x10) + 0x10) += 400.0f * func_00131BA0(k);
            *(float *)(FB(char *, 0x10) + 0x18) += 400.0f * func_00131C20(k);
            if (has46D()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(FB(char *, 0x10) + 0x10) : "memory");
                t[1] += 400.0f;
                t[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t, r, buf, 0))
                    *(float *)(FB(char *, 0x10) + 0x14) = r[1];
                if (*(float *)(FB(char *, 0x10) + 0x14) < FB(float, 0x24))
                    *(float *)(FB(char *, 0x10) + 0x14) = FB(float, 0x24);
            }
            (*(B46D **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 1;
        }
        break;
    case 1:
        (*(B46D **)(p + 0xA8))->m48(0x38B, FB(char *, 0x10) + 0x10);
        FB(float, 0x100) += FB(float, 0xB0);
        if (!(FB(float, 0x100) <= D_00579700[((A46D *)p)->m80(((A46D *)p)->m7C())])) {
            (*(B46D **)(p + 0xA8))->m48(0x15, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1B, FB(char *, 0x10) + 0x10, 8, 0);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 2;
        }
        break;
    case 2:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            ((A46D *)p)->m6C();
            ((A46D *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            s[0] = 102.0f;
            s[1] = 202.0f;
            (*(B46D **)(p + 0xA8))->m48(0xBB8, (char *)s);
            (*(B46D **)(p + 0xA8))->m18(0x3E8);
            (*(B46D **)(p + 0xA8))->m48(0x19, FB(char *, 0x10) + 0x10);
            (*(B46D **)(p + 0xA8))->m48(0x387, FB(char *, 0x10) + 0x10);
            (*(B46D **)(p + 0xA8))->m18(0x3EA);
            func_00330BD0(D_01DFABA0, 0x2E, FB(char *, 0x10) + 0x10, 8, 0);
            FB(unsigned char, 0xCD) = 1;
            FB(int, 0xD4) = 3;
        }
        break;
    case 3:
        (*(B46D **)(p + 0xA8))->m48(0x389, FB(char *, 0x10) + 0x10);
        if ((*(B46D **)(p + 0xA8))->m2C()) {
            (*(B46D **)(p + 0xA8))->m18(0x3E9);
            (*(B46D **)(p + 0xA8))->m44();
            ((A46D *)p)->mEC(0xE);
        }
        (*(B46D **)(p + 0xA8))->m24();
        break;
    }
}
