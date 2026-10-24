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
