/* Hand-matched C++ functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose prototypes/classes conflict with vcalls-vcalls7. */
extern "C" char D_01CAFF0C[];
extern "C" float D_0055FD10[];
extern "C" float D_0055FD14[];
extern "C" float D_0055FD18[];
extern "C" float D_0055FD1C[];
extern "C" float D_00560274[];
extern "C" char D_005BE098[4];
extern "C" int D_01CAF2B4[];
extern "C" void func_00195E20(char *, char *);
extern "C" void func_001A5CC0(char *);
extern "C" void func_001AD100();
extern "C" int func_0024E800(char *);
extern "C" char *func_00279290(char *);
extern "C" void func_0029DCE0(char *, int);
extern "C" void func_0029DE70(char *);
extern "C" void func_0029E0D0(char *);
extern "C" void func_0029E3D0(char *);
extern "C" void func_0029FFF0(char *);
extern "C" void func_002F2D30(char *, char *);
extern "C" void func_00138340(int);

class V296 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float g1E0(int);
};

class W296 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void g20();
};

extern "C" void func_00296140(char *p) {
    int i;
    float f;
    func_001AD100();
    *(float *)(p + 0x8924) = 1.0f;
    func_0029FFF0(p);
    func_0029DE70(p);
    if (*(unsigned short *)(p + 0x8952) == 0) {
        (*(unsigned char *)(p + 4))++;
        f = ((V296 *)p)->g1E0(D_0055FD1C[0] + (D_0055FD18[0] + (D_0055FD10[0] + D_0055FD14[0])));
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = f;
        *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (int)D_00560274[0];
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        for (i = 0; i < 3; i++) {
            if (*(unsigned char *)(p + i + 0x8920) == 1) {
                D_01CAF2B4[0] = i;
                break;
            }
        }
        if (func_0024E800(p + 0x8980) != 0) func_0029DCE0(p, 0);
    } else if (func_0024E800(p + 0x8980) != 0) {
        (*(unsigned char *)(p + 4))++;
        *(float *)(p + 0xA930) = 60.0f;
        func_001A5CC0(func_00279290(p + 0x1D00));
        func_001A5CC0(func_00279290(p + 0x2300));
        func_001A5CC0(func_00279290(p + 0x6B00));
        for (i = 0; i < 3; i++) {
            func_001A5CC0(func_00279290(p + i * 0x600 + 0x2900));
            func_001A5CC0(func_00279290(p + i * 0x600 + 0x3B00));
            func_001A5CC0(func_00279290(p + i * 0x600 + 0x7100));
        }
        for (i = 0; i < 5; i++) func_001A5CC0(func_00279290(p + i * 0x600 + 0x4D00));
        func_00138340(0xFF);
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0xA9DC) == 2) ((W296 *)(p + i * 0x20 + 0x8300))->g20();
    }
    func_0029E0D0(p);
    func_0029E3D0(p);
    func_00195E20(D_005BE098, p);
}

class V64 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140();
    virtual void g144(char *);
};
extern "C" void func_00253BC0(char *, char *);
extern "C" char *D_01CAFF10[];

typedef struct { float v[4]; } V4_64;
typedef struct { float v[2]; } V2_64;
typedef struct { signed char a, b; } C2_64;
typedef struct { signed char c[5]; } B5_64;
typedef struct { signed char c[15]; } B15_64;
typedef struct { signed char c[6]; } B6_64;
typedef struct {
    B5_64 n;
    B15_64 m;
    signed char a, b;
    unsigned char c, d;
    float e, f;
    signed char g;
    B6_64 h;
    V4_64 i;
    V2_64 j;
    V4_64 k;
    V4_64 l;
} S64;

static inline int gi64(char *x, signed char i) {
    if (i == 0) return *(int *)(x + 0x1C);
    return *(unsigned char *)(x + i + 0x20);
}

static inline int g64(int i) {
    char *x = *(char **)(*(char **)D_01CAFF0C + 4);
    if (x) return gi64(x, i);
    return 0;
}

static inline unsigned char h64(int i) {
    char *x = *(char **)(*(char **)D_01CAFF0C + 4);
    if (x) return *(unsigned char *)(x + (signed char)i + 0x5B);
    return 0;
}

extern "C" void func_004064E0(char *p) {
    char *s = D_01CAFF10[0];
    int i;
    func_00253BC0(s + 0x9C, s + 0xFC);
    ((S64 *)(p + 0xA0))->n = ((S64 *)(s + 0x9C))->n;
    ((S64 *)(p + 0xA0))->m = ((S64 *)(s + 0x9C))->m;
    ((S64 *)(p + 0xA0))->a = ((S64 *)(s + 0x9C))->a;
    ((S64 *)(p + 0xA0))->b = ((S64 *)(s + 0x9C))->b;
    ((S64 *)(p + 0xA0))->c = ((S64 *)(s + 0x9C))->c;
    ((S64 *)(p + 0xA0))->d = ((S64 *)(s + 0x9C))->d;
    ((S64 *)(p + 0xA0))->e = ((S64 *)(s + 0x9C))->e;
    ((S64 *)(p + 0xA0))->f = ((S64 *)(s + 0x9C))->f;
    ((S64 *)(p + 0xA0))->g = ((S64 *)(s + 0x9C))->g;
    ((S64 *)(p + 0xA0))->h = ((S64 *)(s + 0x9C))->h;
    ((S64 *)(p + 0xA0))->i = ((S64 *)(s + 0x9C))->i;
    ((S64 *)(p + 0xA0))->j = ((S64 *)(s + 0x9C))->j;
    ((S64 *)(p + 0xA0))->k = ((S64 *)(s + 0x9C))->k;
    ((S64 *)(p + 0xA0))->l = ((S64 *)(s + 0x9C))->l;
    *(int *)(p + 0x100) = *(int *)(s + 0x14);
    (*(V64 **)(*(char **)D_01CAFF0C + 0xC))->g144(p + 0x4C);
    func_00253BC0(p + 0xA0, p + 0x4C);
    *(int *)(p + 4) = g64(0);
    for (i = 1; i < 0x3B; i++) p[i + 8] = g64(i);
    for (i = 0; i < 8; i++) p[i + 0x43] = h64(i);
}

class V493 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C();
    virtual void g130();
    virtual int g134(int);
};
extern "C" int func_0041D6B0(char *, float);
extern "C" void func_00492E20(char *, unsigned char);
extern "C" V493 *func_004B9710(char *, int, char *, int, int, int);
extern "C" V493 *func_003D0CB0(char *, int, char *, int, int, int);

#define I493 (*(int *)(p + 0x3C94))

extern "C" void func_00493A60(char *p) {
    int i = I493;
    V493 *o;
    switch (*(unsigned char *)((char *)i + (int)p + 0x3C98)) {
    case 0:
        if (*(unsigned char *)(*(char **)(p + 0x90C) + 0x974) < 0x1E) {
            o = func_004B9710(p + 0x9B0, *(int *)(p + 0x9F0), p, ((V493 *)p)->g134(5), 3, 0);
            if (o != 0) o->g130();
            *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 30.0f;
        } else {
            *(float *)((char *)(i * 4) + (int)p + 0x3CC8) = 1.0f;
        }
        *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + I493 * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) {
            *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 6.0f;
            *(unsigned char *)((char *)I493 + (int)p + 0x3CA8) = 0;
            if (*(unsigned char *)(p + 0x8EB) == 0) *(unsigned char *)((char *)I493 + (int)p + 0x3CB8) = 3;
            else *(unsigned char *)((char *)I493 + (int)p + 0x3CB8) = 5;
            *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 2;
        }
        break;
    case 2:
        o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(char **)(p + 0x90C), ((V493 *)p)->g134(0x11), 1, *(signed char *)((char *)(i + (int)p) + 0x3CA8));
        if (o != 0) o->g130();
        *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 3;
    case 3:
        if ((unsigned char)func_0041D6B0(p + I493 * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) {
            (*(signed char *)((char *)I493 + (int)p + 0x3CA8))++;
            if (*(signed char *)((char *)I493 + (int)p + 0x3CB8) <= *(signed char *)((char *)I493 + (int)p + 0x3CA8)) {
                *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 60.0f;
                *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 4;
            } else {
                *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 6.0f;
                *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 2;
            }
        }
        break;
    case 4:
        if ((unsigned char)func_0041D6B0(p + i * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        break;
    }
}

struct B322a { char pad[0x40]; };
struct B322b { int x; };
struct D322 : B322a, B322b {};
extern "C" char D_0055FF30[];
extern "C" float D_00561DA0[][3];
extern "C" float *D_00561D50[][3];
extern "C" int D_00561D80[][2];
extern "C" int func_00207480(int, int, int, int);
extern "C" void func_00105300(char *, int);
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, char *);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_002E7920(char *, int, int, int, B322b *, int);
extern "C" void func_0028C910(char *);
extern "C" char *func_0028C3A0(char *, int, int, char *);
extern "C" int func_002A4A40(char *);
extern "C" int func_0034BBE0(int, int *);

extern "C" void func_00322320(char *p) {
    D322 *d;
    *(unsigned char *)(p + 0x447) = 0;
    *(unsigned char *)(p + 0x446) = 0;
    *(unsigned char *)(p + 0x445) = 0;
    *(unsigned char *)(p + 0x444) = 0;
    *(int *)(p + 0x448) = func_00207480(3, 0x65, *(int *)(*(char **)(*(char **)(p + 0x1A4) + 0x1AD8) + 0x104), 0x10);
    if (*(int *)(p + 0x448) != 0) *(unsigned char *)(p + 0x444) = 1;
    func_00105300(p + 0x150, *(int *)(*(char **)(*(char **)(p + 0x1A4) + 0x1AD8) + 0x104));
    *(unsigned char *)(p + 0x3D0) = 3;
    *(unsigned char *)(p + 0x3D1) = 0;
    *(short *)(p + 0x3D2) = 0;
    *(unsigned char *)(p + 0x3E0) = 2;
    *(float *)(p + 0x3F0) = 0.0f;
    *(float *)(p + 0x3F4) = 0.0f;
    *(float *)(p + 0x3F8) = 0.0f;
    *(float *)(p + 0x3FC) = 1.0f;
    *(float *)(p + 0x400) = 150.0f;
    func_0028C200(p + 0x1B0, p + 0x3D0, p + 0x3E0, 3, D_0055FF30, p, p + 0x4B0);
    func_0028C8E0(p + 0x1B0, 0);
    d = (D322 *)p;
    func_002E7920(p + 0x4B0, 0, 0, 0, d, 0);
    func_0028C910(p + 0x1B0);
    func_0028C3A0(p + 0x1B0, 0, -1, p + 0x150);
    *(unsigned char *)(*(char **)(p + 0x22C) + 2) = 1;
    *(float *)(p + 0x43C) = 160.0f / D_00561DA0[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(*(char **)(p + 0x1A4) + 0x8928)];
    *(float *)(p + 0x440) = 270.0f / D_00561DA0[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(*(char **)(p + 0x1A4) + 0x8928)];
    if (*(int *)(*(char **)(p + 0x1A4) + 0x8928) == 0) {
        *(float *)(p + 0x438) = *(float *)(p + 0x434) = *D_00561D50[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(p + 0x4F4)];
    } else {
        *(int *)(p + 0x4F8) = func_0034BBE0(2, D_00561D80[func_002A4A40(*(char **)(p + 0x1A4))]);
        *(float *)(p + 0x438) = *(float *)(p + 0x434) = *D_00561D50[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(p + 0x4F4) + *(int *)(p + 0x4F8)];
    }
    *(unsigned char *)(p + 0x430) = 0;
    *(short *)(p + 0x90) = 0x7FFF;
}

class S338 {
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
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
};
class A338 {
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
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void d2F8();
    virtual void d2FC();
    virtual void d300();
    virtual void m304(int);
};
extern "C" int func_0024E780(char *, int, int);
extern "C" void func_003023F0(int);
extern "C" void func_00335EF0(char *, int);
extern "C" void func_0033A580(char *);
extern "C" void func_0033A620(char *, int, int);
extern "C" int func_0033A660(char *, int);
extern "C" float func_00131BA0(short);
extern "C" float func_00131C20(short);
extern "C" void func_001323A0(float *);
extern "C" void func_00132540(float, float *, char *);
extern "C" float func_00132630(float *, char *);
extern "C" float func_0034C190(float, float, float);
extern "C" void func_0034BA60(int, char *, signed char, int, int);
extern "C" void func_0043A210(char *);
extern "C" void func_0043BEC0(char *);
extern "C" void func_0043B170(char *);
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" void func_00332AE0(char *, char *, float, float);
extern "C" char D_01DFABA0[];
extern "C" char D_00577980[];
extern "C" char D_00577A40[];
extern "C" float D_00577A64[];
extern "C" float D_00577A68[];
extern "C" float D_005BDA58;

extern "C" void func_003389A0(char *p) {
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float t;
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(int *)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0033A660(p, 1);
    case 1:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 0.0f;
        }
        func_00335EF0(p, 0x100);
        break;
    case 2:
        func_00335EF0(p, 0x100);
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 3, 3);
            ((S338 *)(p + 0x130))->m6C();
            ((S338 *)(p + 0x130))->m70();
            *(float *)(p + 0x154) = *(float *)(p + 0x154) + 100.0f;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(p + 0x150), "r"(*(char **)(*(char **)(p + 0x684) + 0x104) + 0x30) : "memory");
            v[0] = 2.0f * func_00131BA0(*(short *)(p + 0x90));
            t = func_00131C20(*(short *)(p + 0x90));
            v[2] = 2.0f * t;
            v[1] = -1.0f;
            func_001323A0((float *)(p + 0x60));
            func_001323A0(v);
            if (func_00132630(v, p + 0x60) < 0.5f) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x60), "r"(v) : "memory");
            }
            *(float *)(p + 0x1358) = 50.0f;
            *(float *)(p + 0x135C) = 2.0f;
        }
        break;
    case 3:
        *(float *)(p + 0x1358) = func_0034C190(*(float *)(p + 0x1358), 0.0f, *(float *)(p + 0x135C) * *(float *)(p + 0x10));
        func_00132540(*(float *)(p + 0x1358) * *(float *)(p + 0x10), d, p + 0x60);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(d) : "memory");
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((A338 *)p)->m304(0x20);
        }
        break;
    }
    func_0033A580(p);
}

typedef struct {
    signed char a, b, c;
    float f4, f8, fC, f10, f14;
    signed char c18;
    float f1C;
    signed char c20;
    float f24, f28, f2C;
    unsigned char u30;
    int i34;
    float f38;
    signed char c3C, c3D, c3E;
} S320;
class Q320 {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual unsigned char m18();
};
class P320 {
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
    virtual void d60();
    virtual void d64();
    virtual void m68(S320 *, char *);
    virtual void d6C();
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
    virtual void mB4(int);
};

extern "C" void func_003208A0(char *p, S320 *s, char *q) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S320 *)(p + 0x3C) = *s;
    switch (s->a) {
    case 3:
        ((P320 *)p)->mB4(7);
        break;
    case 5:
        switch ((*(Q320 **)(p + 0xC))->m10()) {
        case 0:
            ((P320 *)p)->mB4(4);
            break;
        case 1:
            ((P320 *)p)->mB4(5);
            break;
        }
        break;
    default:
        (*(Q320 **)(p + 0xC))->m18();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(q + 0x10) : "memory");
        ((P320 *)p)->m70();
        if ((short)(*(short *)(p + 0x30) - *(short *)(*(char **)(p + 0x10) + 0x50) + 0x4000) > 0) {
            switch ((unsigned char)s->c3C) {
            case 0:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
                break;
            case 1:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(q + 0x50) + 0x8000;
                break;
            }
            ((P320 *)p)->mB4(2);
        } else {
            switch ((unsigned char)s->c3C) {
            case 0:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30) + 0x8000;
                break;
            case 1:
                *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(q + 0x50);
                break;
            }
            ((P320 *)p)->mB4(3);
        }
        break;
    }
    ((P320 *)p)->m68(s, q);
}

typedef struct {
    signed char a, b, c;
    float f4, f8, fC, f10, f14;
    signed char c18;
    float f1C;
    signed char c20;
    float f24, f28, f2C;
    unsigned char u30;
    int i34;
    float f38;
    signed char c3C, c3D, c3E;
} S35A;
class Q35A {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual void m18(int);
};
class P35A {
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
    virtual void d60();
    virtual void d64();
    virtual void m68(S35A *, char *);
    virtual void d6C();
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
    virtual void mB4(int);
};

extern "C" void func_0035A0E0(char *p, S35A *s, char *q) {
    signed char c;
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S35A *)(p + 0x3C) = *s;
    c = **(signed char **)(p + 4);
    switch (c) {
    default:
        ((P35A *)p)->mB4(0x11);
        break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
        (*(Q35A **)(p + 0xA8))->m18(1000);
        break;
    }
    ((P35A *)p)->m68(s, q);
}

typedef struct {
    signed char a, b, c;
    float f4, f8, fC, f10, f14;
    signed char c18;
    float f1C;
    signed char c20;
    float f24, f28, f2C;
    unsigned char u30;
    int i34;
    float f38;
    signed char c3C, c3D, c3E;
} S32B;
class Q32B {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual unsigned char m18();
};
class P32B {
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
    virtual void d60();
    virtual void d64();
    virtual void m68(S32B *, char *);
    virtual void d6C();
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
    virtual void mB4(int);
};

extern "C" void func_00320B60(char *p, S32B *s, char *q) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S32B *)(p + 0x3C) = *s;
    switch ((*(Q32B **)(p + 0xC))->m10()) {
    case 0:
        switch ((*(Q32B **)(p + 0xC))->m18()) {
        case 1:
            break;
        case 4:
        case 7:
            ((P32B *)p)->mB4(0xA);
            break;
        case 5:
            ((P32B *)p)->mB4(0xB);
            break;
        default:
            switch ((*(Q32B **)(p + 0xC))->m14()) {
            case 4:
                break;
            }
            switch (s->a) {
            case 6:
                ((P32B *)p)->mB4(0xC);
                break;
            default:
                    switch ((unsigned char)s->c3C) {
                    case 0:
                        __asm__ volatile("lqc2 $vf4, 0x0(%1)
    	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(q + 0x10) : "memory");
                        ((P32B *)p)->m70();
                        if ((short)(*(short *)(p + 0x30) - *(short *)(*(char **)(p + 0x10) + 0x50) + 0x4000) > 0) {
                            ((P32B *)p)->mB4(0);
                        } else {
                            ((P32B *)p)->mB4(1);
                        }
                        break;
                    case 1:
                        if ((short)(*(short *)(q + 0x50) - *(short *)(*(char **)(p + 0x10) + 0x50) - 0x4000) > 0) {
                            ((P32B *)p)->mB4(0);
                        } else {
                            ((P32B *)p)->mB4(1);
                        }
                        break;
                    }
                break;
            }
            break;
        }
        break;
    case 1:
        switch ((*(Q32B **)(p + 0xC))->m18()) {
        case 1:
            break;
        default:
            switch (s->a) {
            case 3:
                ((P32B *)p)->mB4(7);
                break;
            default:
                switch (s->c) {
                case 0:
                    ((P32B *)p)->mB4(9);
                    break;
                case 1:
                    ((P32B *)p)->mB4(8);
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    ((P32B *)p)->m68(s, q);
}

class Sub40 {
public:
    int x;
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

class B43B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, Sub40 *);
};

class U43B {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(char *, B43B *, char *);
};

class W43B {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(int, char *, char *, B43B *);
};

class O43B {
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
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void d2F8();
    virtual void d2FC();
    virtual void d300();
    virtual void d304();
    virtual void d308();
    virtual int m30C();
    virtual int m310();
};

#define FB(t, o) (*(t *)(p + (o)))

extern "C" void func_00321490(char *, char *, Sub40 *);
extern "C" void func_001A1F90(char *);
extern "C" void func_001A1E70(char *, int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_00131700(char *, char *, char *);
extern "C" void func_00105230(char *, char *, char *);
extern "C" void func_001318E0(char *, char *, char *);
extern "C" void func_0028C5C0(float, char *, int);
extern "C" void func_002EF940(char *, char *);
extern "C" void func_00206730(char *);
extern "C" int func_002077F0(char *);
extern "C" void func_001AD140(char *);
extern "C" void func_00228350(char *);
extern "C" void func_00286040(char *);
extern "C" unsigned char D_0055C760[];
extern "C" unsigned char D_0055C780[];
extern "C" int func_001F9A70(float, char *, char *);
extern "C" int func_004377A0(char *, char *, char *);
extern "C" int func_00433F50(char *, int, unsigned char);
extern "C" void func_004372D0(char *, int);
extern "C" short func_0034B940(char *, char *);
extern "C" void func_0034B8C0(char *, char *, int);
extern "C" void func_00104B80(float *, float *, char *);
extern "C" void func_0043A130(char *, char *);
extern "C" int func_0048C6C0(float *, float *, int, char *);
extern "C" float func_001324B0(char *, char *);
extern "C" void func_0043BC90(float, char *, float *, float *);
extern "C" unsigned char func_00437BE0(char *);
extern "C" int func_00437A00(char *, char *);
extern "C" int func_00437AD0(char *, char *);
extern "C" float func_00132470(char *, char *);
extern "C" void func_0048D6D0(int);
extern "C" int func_0034B6B0(float, char *, char *, char *);
extern "C" char D_00575810[];
extern "C" int D_00577C90[];
extern "C" float D_00577EA0[];
extern "C" float D_00577EA4[];
extern "C" float D_00577EA8[];
extern "C" float D_005BD930;
extern "C" float D_005BD934;
extern "C" float D_005BD9D4;
extern "C" float D_005BDA00;
extern "C" float D_005BDA04;
extern "C" float D_005BDA08;
extern "C" float D_005BDA0C;
extern "C" float D_005BDA10;
extern "C" float D_005BDA14;
extern "C" float D_005BDA2C;
extern "C" float D_005BDA30;

extern "C" void func_0043B540(Hit40 *h, char *a, B43B *b, char *c) {
    char *p = (char *)h;
    if (FB(unsigned char, 0x485E) == 1)
        FB(float, 0x4624) = FB(float, 0x47A0);
    switch (*(signed char *)(a + 2)) {
    case 0:
        switch ((unsigned char)((O43B *)p)->m30C()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
            ((W43B *)(p + 0x468C))->m14(0, c, a, b);
            ((U43B *)(p + 0x4674))->m14(a, b, D_00577980);
            b->m38(a, h);
            if (FB(unsigned char, 0x485E) == 1) {
                float v = FB(float, 0x4838) - D_005BDA58;
                FB(float, 0x4838) = v > 0.0f ? v : 0.0f;
            }
            break;
        case 1:
            ((W43B *)(p + 0x468C))->m14(1, c, a, b);
            func_00321490(p + 0x130, a, h);
            ((U43B *)(p + 0x4674))->m14(a, b, D_00577980);
            b->m38(a, h);
            break;
        case 2:
            func_0043A210(p);
            break;
        case 3:
        case 4:
        case 5:
            break;
        }
        break;
    case 1:
        switch ((unsigned char)((O43B *)p)->m310()) {
        case 0:
            func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
            ((W43B *)(p + 0x468C))->m14(0, c, a, b);
            ((U43B *)(p + 0x4674))->m14(a, b, D_00577980);
            b->m38(a, h);
            if (FB(unsigned char, 0x485E) == 1) {
                float v = FB(float, 0x4838) - D_005BDA58;
                FB(float, 0x4838) = v > 0.0f ? v : 0.0f;
            }
            break;
        case 1:
            ((W43B *)(p + 0x468C))->m14(1, c, a, b);
            ((U43B *)(p + 0x4674))->m14(a, b, D_00577980);
            b->m38(a, h);
            break;
        case 2:
            if ((unsigned char)(FB(unsigned char, 0x485A) == 1 && FB(int, 0x47C4) != 0) == 1) {
                func_0043BEC0(p);
                func_00330BD0(D_01DFABA0, 0x2F, p + 0x50, 0x22, 0);
                func_0043B170(p);
                func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_00577A40, D_00577A68[0], D_00577A64[0]);
            } else {
                func_0043A210(p);
            }
            break;
        case 3:
            break;
        }
        break;
    }
}

struct A334 {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual int m2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void d2F8();
    virtual void d2FC();
    virtual void m300();
    virtual void d304();
    virtual int m308();
};

struct C334 {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void mC8(char *);
};

struct D334 {
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

struct E334 {
    virtual void d8();
    virtual void dC();
    virtual void m10(float);
};

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void mc8_334(C334 *o, char *m) { o->mC8(m); }

static inline void mc8b_334(char *m, C334 *o) { o->mC8(m); }

static inline void kill334(char **q) { *(unsigned char *)(*q + 0x3A) = 1; func_001AD140(*q); }

static inline void kill334b(char *e) { *(unsigned char *)(e + 0x3A) = 1; }

static inline float add334(float a, float b) { return a + b; }

extern "C" void func_00334470(char *p) {
    int i;
    int k;
    char *m;
    float f;
    func_001A1F90(func_00279290(p + 0x740));
    switch (FB(unsigned char, 0x1350)) {
    case 0:
        for (i = 0; i < 0x13; i++)
            func_001A1E70(func_00279290(p + 0x740), D_0055C760[i]);
        break;
    case 1:
    case 2:
        for (i = 0; i < 0x11; i++)
            func_001A1E70(func_00279290(p + 0x740), D_0055C780[i]);
        break;
    }
    FB(unsigned char, 0x1352) = 1;
    FB(float, 0xDE0) = FB(float, 0x10);
    ((A334 *)p)->m2EC();
    ((A334 *)p)->m300();
    if (FB(unsigned char, 0x1352) == 0) {
        func_001A2000(func_00279290(p + 0x740), 0x18);
        if (FB(char *, 0x12B8) != 0)
            *(unsigned char *)(FB(char *, 0x12B8) + 0x3B) = 1;
    } else {
        if (FB(char *, 0x12B8) != 0)
            *(unsigned char *)(FB(char *, 0x12B8) + 0x3B) = 0;
    }
    FB(float, 0x84) = 6.283185f * ((float)FB(short, 0x90) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD80), "r"(p + 0x80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD70), "r"(p + 0x50) : "memory");
    UNIT(p + 0xDA0);
    func_00131700(p + 0xDA0, p + 0xDA0, p + 0xD80);
    func_00105230(p + 0xDA0, p + 0xDA0, p + 0xD70);
    func_001318E0(p + 0xDA0, p + 0xDA0, p + 0xD90);
    m = p + 0xDA0;
    FB(float, 0x590) = FB(float, 0x10);
    FB(float, 0x650) = FB(float, 0x10);
    ((C334 *)(p + 0x740))->mC8(m);
    for (i = 0; i < 0x10; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0xF4C) != 0)
            *(unsigned int *)(*(char **)((char *)(i * 4) + (int)p + 0xF4C) + 0xC) &= 0xFFFCBFFF;
    }
    if (!(FB(float, 0x1290) <= 0.0f))
        k = 1;
    else
        k = 0;
    func_0028C5C0(FB(float, 0x10), p + 0xED0, k);
    if ((FB(float, 0x129C) -= FB(float, 0x10)) <= 0.0f)
        FB(float, 0x129C) = 0.0f;
    if (FB(float, 0x129C) <= 0.0f) {
        f = FB(float, 0x10);
        f = add334(FB(float, 0x1298), f);
        FB(float, 0x1298) = f;
        if (!(f <= FB(float, 0x1294)))
            FB(float, 0x1298) = FB(float, 0x1294);
    }
    FB(int, 0x12A0) = 0;
    ((D334 *)(p + 0x11F4))->m10();
    ((D334 *)(p + 0x120C))->m10();
    if (FB(unsigned char, 0x134E) != 0)
        func_002EF940(*(char **)D_01CAFF0C, p + 0x10F0);
    for (i = 0; i < 12; i++) {
        func_00206730(p + i * 4 + 0x12B4);
        if (*(char **)((char *)(i * 4) + (int)p + 0x12B4) != 0 && (unsigned char)func_002077F0(*(char **)((char *)(i * 4) + (int)p + 0x12B4)) == 1)
            *(char **)((char *)(i * 4) + (int)p + 0x12B4) = 0;
        if (*(char **)((char *)(i * 4) + (int)p + 0x12B4) != 0) {
            if (i == 0) {
                if (FB(unsigned char, 0x134D) == 1)
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 0;
                else
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 1;
            }
            if (i == 2) {
                if (FB(unsigned char, 0x1351) == 1)
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 0;
                else
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x12B4) + 0x3B) = 1;
            }
            if (i == 9) {
                if (((A334 *)p)->m308() != 0x1E) {
                    kill334b(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    *(char **)((char *)(i * 4) + (int)p + 0x12B4) = 0;
                }
            }
            if (i == 11) {
                if (((A334 *)p)->m308() != 0x1F) {
                    kill334b(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x12B4));
                    *(char **)((char *)(i * 4) + (int)p + 0x12B4) = 0;
                }
            }
        }
    }
    func_00228350(p + 0xC8);
    func_00286040(p + 0x12B0);
    ((E334 *)(p + 0xD40))->m10(-1.0f);
    func_00195E20(D_005BE098, p);
}

struct A3BD {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual int m2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void d2F8();
    virtual void d2FC();
    virtual void m300();
    virtual void d304();
    virtual int m308();
};

struct C3BD {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void mC8(char *);
};

struct D3BD {
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

struct E3BD {
    virtual void d8();
    virtual void dC();
    virtual void m10(float);
};

static inline void mc8_3BD(C3BD *o, char *m) { o->mC8(m); }

static inline void mc8b_3BD(char *m, C3BD *o) { o->mC8(m); }

static inline char *gt3BD(void) { return *(char **)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x550); }

static inline char *gt3BDb(char *g) { return *(char **)(*(char **)(g + 0x14) + 0x550); }

static inline void kill3BD(char *e) { *(unsigned char *)(e + 0x3A) = 1; }

extern "C" void func_003BD260(char *p) {
    int i;
    int k;
    char *m;
    char *e;
    unsigned int x;
    float f;
    float g;
    if ((unsigned char)func_001F9A70(1000.0f, gt3BD(), p + 0x50) == 0) {
        func_001AD140(p);
        return;
    }
    FB(float, 0x1660) = FB(float, 0x10);
    ((A3BD *)p)->m2EC();
    ((A3BD *)p)->m300();
    UNIT(*(char **)(FB(char *, 0x8B0) + 0x100));
    FB(float, 0x84) = 6.283185f * ((float)FB(short, 0x90) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1600), "r"(p + 0x80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x15F0), "r"(p + 0x50) : "memory");
    UNIT(p + 0x1620);
    func_00131700(p + 0x1620, p + 0x1620, p + 0x1600);
    func_00105230(p + 0x1620, p + 0x1620, p + 0x15F0);
    func_001318E0(p + 0x1620, p + 0x1620, p + 0x1610);
    FB(float, 0x650) = FB(float, 0x10);
    FB(float, 0x710) = FB(float, 0x10);
    FB(float, 0x7D0) = FB(float, 0x10);
    FB(float, 0x890) = FB(float, 0x10);
    if (FB(unsigned char, 0x1BC5) == 1) {
        m = p + 0x1620;
        ((C3BD *)(p + 0x9C0))->mC8(m);
    }
    for (i = 0; i < 0x10; i++) {
        e = *(char **)((char *)(i * 4) + (int)p + 0x18AC);
        if (e != 0) {
            x = *(unsigned int *)(e + 0xC);
            if (x & 0x30) {
                x &= ~0x30;
                *(unsigned int *)(e + 0xC) = x;
            }
            if (*(int *)(*(char **)(p + 0x134) + 0x28) != 0 && (x & 0x30000)) {
                x &= 0xFFFCFFFF;
                *(unsigned int *)(e + 0xC) = x;
            }
        }
    }
    if (!(FB(float, 0x1B90) <= 0.0f))
        k = 1;
    else
        k = 0;
    func_0028C5C0(FB(float, 0x10), p + 0x1830, k);
    if (FB(unsigned char, 0x1BC4) != 0)
        func_002EF940(*(char **)D_01CAFF0C, p + 0x1A50);
    ((D3BD *)(p + 0x1B00))->m10();
    ((D3BD *)(p + 0x1B18))->m10();
    for (i = 0; i < 6; i++) {
        func_00206730(p + i * 4 + 0x2714);
        if (*(char **)((char *)(i * 4) + (int)p + 0x2714) != 0 && (unsigned char)func_002077F0(*(char **)((char *)(i * 4) + (int)p + 0x2714)) == 1)
            *(char **)((char *)(i * 4) + (int)p + 0x2714) = 0;
        if (*(char **)((char *)(i * 4) + (int)p + 0x2714) != 0) {
            if (i == 1) {
                if (FB(unsigned char, 0x1BC7) == 1)
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x2714) + 0x3B) = 0;
                else
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x2714) + 0x3B) = 1;
            }
            if (i == 5) {
                if (((A3BD *)p)->m308() != 9) {
                    kill3BD(*(char **)((char *)(i * 4) + (int)p + 0x2714));
                    func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x2714));
                    *(char **)((char *)(i * 4) + (int)p + 0x2714) = 0;
                }
            }
        }
    }
    if (((A3BD *)p)->m308() != 3 && FB(char *, 0x2714) != 0)
        func_001AD140(FB(char *, 0x2714));
    if ((FB(float, 0x1BA4) -= FB(float, 0x10)) < 0.0f) {
        if (!(FB(float, 0x1668) <= 1.0f)) {
            FB(float, 0x1BA4) = 5.0f;
            func_0034BA60(0x15, p + 0x50, FB(signed char, 0x46), 0, 1);
        } else {
            FB(float, 0x1BA4) = 10.0f;
            func_0034BA60(0x14, p + 0x50, FB(signed char, 0x46), 0, 1);
        }
    }
    for (i = 0; i < 3; i++) {
        if (!(*(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) <= *(float *)((char *)(i * 4) + (int)p + 0x8A0))) {
            *(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) -= 0.01f * FB(float, 0x10);
            if (*(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) < *(float *)((char *)(i * 4) + (int)p + 0x8A0))
                *(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) = *(float *)((char *)(i * 4) + (int)p + 0x8A0);
        }
    }
    f = FB(float, 0x818);
    if (!(f <= FB(float, 0x8AC))) {
        g = f - 0.01f * FB(float, 0x10);
        FB(float, 0x818) = g;
        if (g < FB(float, 0x8AC))
            FB(float, 0x818) = FB(float, 0x8AC);
    }
    ((E3BD *)(p + 0x15C0))->m10(FB(float, 0x10));
    func_00195E20(D_005BE098, p);
}

struct A434 {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual int m2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void m2F4(int);
    virtual void d2F8();
    virtual void m2FC(int);
};

struct X434 {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void m128(char *);
};

extern "C" void func_00434CF0(char *p) {
    float r[4] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    int i;
    int b;
    int a;
    int c;
    int t;
    float d;
    float k;
    switch (FB(unsigned char, 0x47BF)) {
    case 0:
        FB(unsigned char, 0x47BF)++;
        FB(unsigned char, 0x43B3) = 0xC;
        ((A434 *)p)->m2FC(0x5D);
        FB(int, 0x47E0) = func_004377A0(p, p + 0x50, p + 0x4859);
        FB(int, 0x47E0) = func_00433F50(p, FB(int, 0x47E0), FB(unsigned char, 0x4858));
        func_004372D0(p, FB(int, 0x47E0));
        break;
    case 1:
        FB(short, 0x47BA) = func_0034B940(p + 0x47F0, p + 0x50) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if (((A434 *)p)->m2E8() == 0x90) {
            t = FB(short, 0x47BA);
            t = t < 0 ? -t : t;
            if ((float)t < D_005BD9D4 * FB(float, 0x10)) {
                FB(unsigned char, 0x47BF)++;
                ((A434 *)p)->m2FC(0x5E);
                func_00105300((char *)m, (int)*(char **)(FB(char *, 0x544) + 0x104));
                m[12] = 0.0f;
                m[13] = 0.0f;
                m[14] = 0.0f;
                m[15] = 1.0f;
                func_00104B80(r, m, D_00575810);
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%1)" : : "r"(*(char **)(FB(char *, 0x548) + 0x104) + 0x30), "r"(r) : "memory");
                func_0043A130(p, p + 0x4800);
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(s), "r"(p + 0x4800), "f"(D_005BDA00) : "t0", "memory");
                FB(int, 0x47C0) = func_0048C6C0(r, s, FB(int, 0x4C0), p);
                func_001A2000(func_00279290(p + 0x1180), 1);
            }
        }
        break;
    case 2:
        if (((A434 *)p)->m2E8() == 0x90) {
            FB(unsigned char, 0x47BF)++;
            if (FB(int, 0x484C) > 0)
                ((A434 *)p)->m2FC(0x60);
            else
                ((A434 *)p)->m2FC(0x5F);
            FB(float, 0x4824) = D_005BDA04;
            FB(float, 0x4828) = D_005BDA08;
            FB(float, 0x482C) = D_005BDA14;
        }
        break;
    case 3:
        FB(unsigned char, 0x485B) = 0;
        FB(float, 0x4824) += FB(float, 0x4828);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(p + 0x4800), "f"(FB(float, 0x4824) * FB(float, 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(p + 0x60) : "memory");
        FB(float, 0x5C) = 1.0f;
        if (!(FB(float, 0x54) < D_005BDA10)) {
            FB(unsigned char, 0x47BF)++;
            ((A434 *)p)->m2FC(0x62);
            if (FB(int, 0x484C) >= 2) {
                for (i = 0; i < D_00577C90[0]; i++) {
                    w[0] = 0.0f;
                    w[1] = 10.0f * (float)i;
                    w[2] = 0.0f;
                    w[3] = 1.0f;
                    if (func_001324B0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50) < D_005BDA30) {
                        u[0] = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
                        u[1] = D_005BD930 + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
                        u[2] = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x58);
                        u[3] = 1.0f;
                    } else {
                        u[0] = FB(float, 0x50);
                        u[1] = FB(float, 0x54);
                        u[2] = FB(float, 0x58);
                        u[3] = 1.0f;
                    }
                    func_0043BC90(D_005BD934 + D_005BDA2C * (float)i, p, u, w);
                }
            }
            if (func_00437BE0(p) != 1) {
                FB(int, 0x47E0) = func_00437A00(p, p + 0x50);
                func_004372D0(p, FB(int, 0x47E0));
                FB(float, 0x50) = FB(float, 0x47F0);
                FB(float, 0x54) = FB(float, 0x54);
                FB(float, 0x58) = FB(float, 0x47F8);
                FB(float, 0x5C) = 1.0f;
            } else {
                b = func_00437AD0(p, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
                if (FB(int, 0x47C4) & 1) {
                    c = b;
                } else {
                    if (b == 0) a = 4; else a = b - 1;
                    if (b == 4) b = 0; else b = b + 1;
                    d = func_00132470(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)(D_00577EA0 + a * 4));
                    if (d < func_00132470(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)(D_00577EA0 + b * 4)))
                        c = a;
                    else
                        c = b;
                }
                FB(float, 0x50) = D_00577EA0[c * 4];
                FB(float, 0x54) = FB(float, 0x54);
                FB(float, 0x58) = D_00577EA8[c * 4];
                FB(float, 0x5C) = 1.0f;
            }
            if (FB(char *, 0x47C0) != 0) {
                ((X434 *)FB(char *, 0x47C0))->m128(p + 0x50);
                func_0048D6D0(FB(int, 0x47C0));
            }
            break;
        }
        if (FB(char *, 0x47C0) != 0 && *(float *)(FB(char *, 0x47C0) + 0x54) < FB(float, 0x54)) {
            FB(unsigned char, 0x47BF)++;
            ((A434 *)p)->m2FC(0x62);
            break;
        }
        if ((FB(float, 0x482C) -= FB(float, 0x10)) < 0.0f) {
            FB(unsigned char, 0x47BF)++;
            ((A434 *)p)->m2FC(0x62);
            break;
        }
        if (FB(float, 0xE4) < 0.0f) {
            FB(unsigned char, 0x47BF)++;
            ((A434 *)p)->m2FC(0x62);
            break;
        }
        if (((A434 *)p)->m2E8() == 0x90) {
            if (FB(int, 0x484C) > 0)
                ((A434 *)p)->m2FC(0x60);
            else
                ((A434 *)p)->m2FC(0x5F);
        }
        break;
    case 4:
        FB(unsigned char, 0x485B) = 0;
        FB(float, 0x54) -= D_005BDA0C * FB(float, 0x10);
        if ((unsigned char)func_0034B6B0(0.0f, p + 0x50, p + 0x4344, p) == 1) {
            FB(unsigned char, 0x47BF)++;
            ((A434 *)p)->m2FC(0x61);
            func_001A1E70(func_00279290(p + 0x1180), 1);
        }
        break;
    case 5:
        if (((A434 *)p)->m2E8() == 0x90) {
            if (!(FB(float, 0x54) <= D_00577EA4[0] - 10.0f)) {
                ((A434 *)p)->m2F4(0x1E);
            } else {
                FB(unsigned char, 0x43B3) = 2;
                ((A434 *)p)->m2F4(0x17);
            }
        }
        break;
    }
}

class Q45A {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual unsigned char m18();
};

class P45A {
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
    virtual void d60();
    virtual void d64();
    virtual void m68(void *, char *);
    virtual void d6C();
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
    virtual void mB4(int);
};

typedef struct { signed char a, b, c; float f4, f8, fC, f10, f14; signed char c18; float f1C; signed char c20; float f24, f28, f2C; unsigned char u30; int i34; float f38; signed char c3C, c3D, c3E; } S45A;
extern "C" void func_0043C3C0(char *);
extern "C" void func_0024DD30(char *);
extern "C" int func_004361D0(char *);
extern "C" int func_00437250(char *);
extern "C" int func_002018A0(char *, int, int, char *, char *, int);
extern "C" float D_01DF5D20[];

extern "C" void func_0045A630(char *p, S45A *s, char *q) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S45A *)(p + 0x3C) = *s;
    switch ((*(Q45A **)(p + 0xC))->m10()) {
    case 0:
        switch ((*(Q45A **)(p + 0xC))->m18()) {
        case 1:
            break;
        case 4:
            ((P45A *)p)->mB4(0xA);
            break;
        case 5:
            ((P45A *)p)->mB4(0xB);
            break;
        default:
            switch ((*(Q45A **)(p + 0xC))->m14()) {
            case 4:
                break;
            }
            switch (s->a) {
            case 6:
                break;
            }
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(q + 0x10) : "memory");
            ((P45A *)p)->m70();
            if ((short)(*(short *)(p + 0x30) - *(short *)(*(char **)(p + 0x10) + 0x50) + 0x4000) > 0)
                ((P45A *)p)->mB4(0);
            else
                ((P45A *)p)->mB4(1);
            break;
        }
        break;
    case 1:
        switch ((*(Q45A **)(p + 0xC))->m18()) {
        case 1:
            break;
        default:
            switch (s->a) {
            case 3:
                break;
            default:
                switch (s->c) {
                case 0:
                    break;
                case 1:
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    ((P45A *)p)->m68(s, q);
}

struct A43A {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual void d2EC();
    virtual void m2F0();
    virtual void d2F4();
    virtual void m2F8();
};

struct B43A {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void m9C();
};

struct C43A {
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

struct D43A {
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
    virtual void d6C();
    virtual void d70();
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
    virtual void mC8(char *);
};

extern "C" void func_0043A3A0(char *p) {
    float v[4] __attribute__((aligned(16)));
    char b50[0x40];
    char b40[0x10];
    int k;
    float f;
    if (FB(unsigned char, 0x485E) == 0)
        FB(unsigned char, 0x485B) = 1;
    else
        FB(unsigned char, 0x485B) = 0;
    FB(float, 0x4340) = FB(float, 0x10);
    func_0043C3C0(p + 0x47C0);
    ((B43A *)(p + 0x130))->m9C();
    f = D_01DF5D20[0];
    if ((FB(float, 0x47A8) -= f) < 0.0f) {
        func_0024DD30(p + 0x40D0);
        func_0024DD30(p + 0x41A0);
        if (FB(unsigned char, 0x314C) == 0)
            func_0024DD30(p + 0x4270);
        ((A43A *)p)->m2F8();
        ((A43A *)p)->m2F0();
        if (FB(unsigned char, 0x47B4) == 0)
            FB(float, 0x54) -= 10.0f;
    }
    ((C43A *)(p + 0x4674))->m10();
    ((C43A *)(p + 0x468C))->m10();
    UNIT(*(char **)(FB(char *, 0x4C4) + 0x100));
    UNIT(*(char **)(FB(char *, 0x520) + 0x100));
    UNIT(*(char **)(FB(char *, 0x544) + 0x100));
    UNIT(*(char **)(FB(char *, 0x550) + 0x100));
    UNIT(*(char **)(FB(char *, 0x554) + 0x100));
    UNIT(*(char **)(FB(char *, 0x558) + 0x100));
    UNIT(*(char **)(FB(char *, 0x568) + 0x100));
    FB(short, 0x90) = FB(short, 0x4850);
    FB(float, 0x84) = 6.283185f * ((float)FB(short, 0x4850) / 65536.0f);
    UNIT(p + 0x3510);
    func_00131700(p + 0x3510, p + 0x3510, p + 0x80);
    func_00105230(p + 0x3510, p + 0x3510, p + 0x50);
    ((D43A *)(p + 0x580))->mC8(p + 0x3510);
    func_00105300(p + 0x3460, (int)*(char **)(FB(char *, 0x4F8) + 0x104));
    ((D43A *)(p + 0xB80))->mC8(p + 0x3510);
    ((D43A *)(p + 0x1180))->mC8(p + 0x3510);
    ((D43A *)(p + 0x1780))->mC8(p + 0x3510);
    ((D43A *)(p + 0x1D80))->mC8(p + 0x3510);
    v[0] = FB(float, 0x34A0);
    v[1] = FB(float, 0x34A0);
    v[2] = FB(float, 0x34A0);
    v[3] = 1.0f;
    func_001318E0(p + 0x3460, p + 0x3460, (char *)v);
    ((D43A *)(p + 0x2380))->mC8(p + 0x3510);
    ((D43A *)(p + 0x2980))->mC8(p + 0x3510);
    if (FB(unsigned char, 0x485B) == 1) {
        char *g = *(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548;
        if ((unsigned char)func_002018A0(g, func_004361D0(p), func_00437250(p), b40, b50, 0x10) == 0)
            func_002EF940(*(char **)D_01CAFF0C, p + 0x45D0);
    }
    if (!(FB(float, 0x47A8) <= 0.0f))
        k = 1;
    else
        k = 0;
    func_0028C5C0(FB(float, 0x10), p + 0x43B0, k);
    func_00195E20(D_005BE098, p);
}
