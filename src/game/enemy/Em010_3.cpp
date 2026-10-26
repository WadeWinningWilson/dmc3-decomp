extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_001AD140(char *);

extern "C" float D_00573260[];

extern "C" void func_00206730(char *);

extern "C" void func_003208A0(char *, int, int);

class O3E5 {
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
    virtual void u2E8();
    virtual void u2EC();
    virtual void m2F0(int);
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void m314(int, int);
};

class O3E5B {
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
    virtual float m7C();
};

static inline float frand3E5(void) {
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

static inline int lvl3E5(char *p) {
    int n = (int)(((O3E5B *)(p + 0x130))->m7C() / 300.0f);
    if (n > 3) n = 3;
    if (*(unsigned char *)(p + 0x1BD)) n = 4;
    return n;
}

extern "C" {
void func_003E59F0(char *p, int a, int b) {
    extern int func_003F3830(char *);
    float r;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) func_001AD140(*(char **)(p + 0x3BE8));
    if (*(char **)(p + 0x3BEC) != 0) func_001AD140(*(char **)(p + 0x3BEC));
    if (*(char **)(p + 0x3BF0) != 0) func_001AD140(*(char **)(p + 0x3BF0));
    switch (*(unsigned char *)(p + 0x3B91)) {
    case 0:
        r = 100.0f * frand3E5();
        if (*(unsigned char *)(p + 0x3435) == 0 && func_003F3830(p) != 0 && r <= D_00573260[lvl3E5(p)]) {
            ((O3E5 *)p)->m2F0(0x10);
            *(float *)(p + 0x3A98) = 10.0f;
            *(unsigned char *)(p + 0x3B91) = 1;
        } else {
            func_003208A0(p + 0x130, a, b);
            *(unsigned char *)(p + 0x3B91) = 2;
        }
        break;
    case 1:
        ((O3E5 *)p)->m2F0(0x10);
        *(float *)(p + 0x3A98) = 10.0f;
        break;
    case 2:
        func_003208A0(p + 0x130, a, b);
        break;
    }
    ((O3E5 *)p)->m314(a, b);
}
}

extern "C" void func_00320B60(char *, int, int);

class O3E5C {
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
    virtual void u2E8();
    virtual void u2EC();
    virtual void m2F0(int);
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void m314(int, int);
};

class O3E5D {
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
    virtual float m7C();
};

static inline float frand3E5C(void) {
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

static inline int lvl3E5C(char *p) {
    int n = (int)(((O3E5D *)(p + 0x130))->m7C() / 300.0f);
    if (n > 3) n = 3;
    if (*(unsigned char *)(p + 0x1BD)) n = 4;
    return n;
}

extern "C" {
void func_003E5CA0(char *p, int a, int b) {
    extern int func_003F3830(char *);
    float r;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) func_001AD140(*(char **)(p + 0x3BE8));
    if (*(char **)(p + 0x3BEC) != 0) func_001AD140(*(char **)(p + 0x3BEC));
    if (*(char **)(p + 0x3BF0) != 0) func_001AD140(*(char **)(p + 0x3BF0));
    switch (*(unsigned char *)(p + 0x3B91)) {
    case 0:
        r = 100.0f * frand3E5C();
        if (*(unsigned char *)(p + 0x3435) == 0 && func_003F3830(p) != 0 && r <= D_00573260[lvl3E5C(p)]) {
            ((O3E5C *)p)->m2F0(0x10);
            *(float *)(p + 0x3A98) = 10.0f;
            *(unsigned char *)(p + 0x3B91) = 1;
        } else {
            func_00320B60(p + 0x130, a, b);
            *(unsigned char *)(p + 0x3B91) = 2;
        }
        break;
    case 1:
        ((O3E5C *)p)->m2F0(0x10);
        *(float *)(p + 0x3A98) = 10.0f;
        break;
    case 2:
        func_00320B60(p + 0x130, a, b);
        break;
    }
    ((O3E5C *)p)->m314(a, b);
}
}

extern "C" {
void func_003EBE40(char *p);
}

extern "C" char D_01DF5D20[];

extern "C" void func_003EA250(char *);

extern "C" void func_003EA380(char *);

extern "C" void func_003EA930(char *);

extern "C" void func_003EADB0(char *);

extern "C" void func_003EAEB0(char *);

extern "C" void func_003EAF60(char *);

extern "C" void func_003EB430(char *);

extern "C" void func_003EB870(char *);

extern "C" void func_003EBA90(char *);

extern "C" void func_003EBB80(char *);

extern "C" void func_003EBDA0(char *);

extern "C" void func_003EC020(char *);

extern "C" void func_003EC110(char *);

extern "C" void func_003EC5B0(char *);

extern "C" void func_003EC6E0(char *);

extern "C" void func_003ECB80(char *);

extern "C" void func_003ECC20(char *);

extern "C" void func_003ECE90(char *);

extern "C" void func_003ED0C0(char *);

extern "C" void func_003ED270(char *);

extern "C" void func_003ED660(char *);

extern "C" void func_003ED850(char *);

extern "C" void func_003ED8A0(char *);

extern "C" void func_003ED8E0(char *);

extern "C" void func_003EDB50(char *);

extern "C" void func_003EDD50(char *);

extern "C" void func_003EDEF0(char *);

extern "C" void func_003EE230(char *);

extern "C" void func_003EE350(char *);

extern "C" void func_003EE6F0(char *);

extern "C" void func_003EE880(char *);

extern "C" void func_003EE9B0(char *);

extern "C" void func_003EEB10(char *);

extern "C" void func_003EEC50(char *);

extern "C" void func_003EED40(char *);

extern "C" void func_003EF030(char *);

extern "C" void func_003EF220(char *);

extern "C" void func_003EF340(char *);

extern "C" void func_003EF4C0(char *);

extern "C" void func_003EF640(char *);

extern "C" void func_003EF680(char *);

extern "C" void func_003EF790(char *);

extern "C" void func_003EF860(char *);

extern "C" void func_003EFAE0(char *);

extern "C" void func_003EFB70(char *);

extern "C" void func_003EFCE0(char *);

extern "C" void func_003EFF40(char *);

extern "C" void func_003EFFC0(char *);

extern "C" void func_003F0110(char *);

extern "C" void func_003F0150(char *);

extern "C" void func_003F01B0(char *);

extern "C" void func_003F02E0(char *);

extern "C" void func_003F0410(char *);

extern "C" void func_003F04B0(char *);

extern "C" void func_003F0790(char *);

extern "C" void func_003F0B80(char *);

extern "C" void func_003F0C80(char *);

extern "C" void func_003F0F10(char *);

extern "C" void func_003F1130(char *);

extern "C" void func_003F1360(char *);

extern "C" void func_003F1490(char *);

extern "C" void func_003F15A0(char *);

extern "C" void func_003F16B0(char *);

extern "C" void func_003F1850(char *);

extern "C" void func_003F19B0(char *);

extern "C" void func_003F1C80(char *);

extern "C" void func_003F1F10(char *);

extern "C" void func_003F1FB0(char *);

extern "C" void func_003F2200(char *);

extern "C" void func_003F24F0(char *);

extern "C" void func_003F2690(char *);

extern "C" void func_003F2720(char *);

extern "C" void func_003F2770(char *);

extern "C" void func_003F29B0(char *);

extern "C" void func_003F2AB0(char *);

extern "C" void func_003F3970(char *);

extern "C" void func_003F35D0(char *);

extern "C" void func_003E6C60(char *);

extern "C" void func_003E6E20(char *);

extern "C" void func_003F3110(char *);

extern "C" void func_003F31E0(char *);

class V3E7 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void m9C();
};

extern "C" void func_003E7A00(char *p) {
    if (!(*(float *)(p + 0x3424) <= 0.0f)) {
        *(float *)(p + 0x3424) -= *(float *)D_01DF5D20;
        return;
    }
    ((V3E7 *)(p + 0x130))->m9C();
    func_003F35D0(p);
    func_003E6C60(p);
    func_003E6E20(p);
    switch (*(unsigned char *)(p + 0x342C)) {
    case 0:
        break;
    case 1:
        func_003EA250(p);
        break;
    case 2:
        func_003EA380(p);
        break;
    case 8:
        func_003EBB80(p);
        break;
    case 9:
        func_003EBDA0(p);
        break;
    case 10:
        func_003EBE40(p);
        break;
    case 11:
        func_003EC020(p);
        break;
    case 12:
        func_003EC110(p);
        break;
    case 13:
        func_003EC5B0(p);
        break;
    case 14:
        func_003EC6E0(p);
        break;
    case 15:
        func_003ECB80(p);
        break;
    case 16:
        func_003ECC20(p);
        break;
    case 17:
        func_003ECE90(p);
        break;
    case 18:
        func_003ED0C0(p);
        break;
    case 19:
        func_003ED270(p);
        break;
    case 20:
        func_003ED660(p);
        break;
    case 21:
        func_003ED850(p);
        break;
    case 22:
        func_003ED8A0(p);
        break;
    case 23:
        func_003ED8E0(p);
        break;
    case 24:
        func_003EDB50(p);
        break;
    case 5:
        func_003EA930(p);
        break;
    case 6:
        func_003EAEB0(p);
        break;
    case 7:
        func_003EADB0(p);
        break;
    case 3:
        func_003EAF60(p);
        break;
    case 4:
        func_003EB430(p);
        break;
    case 25:
        func_003EDD50(p);
        break;
    case 26:
        func_003EDEF0(p);
        break;
    case 27:
        func_003EE230(p);
        break;
    case 28:
        func_003EE350(p);
        break;
    case 29:
        func_003EE6F0(p);
        break;
    case 30:
        func_003EE880(p);
        break;
    case 31:
        func_003EE9B0(p);
        break;
    case 32:
        func_003EEB10(p);
        break;
    case 33:
        func_003EEC50(p);
        break;
    case 34:
        func_003EED40(p);
        break;
    case 79:
        func_003F1C80(p);
        break;
    case 80:
        func_003F1F10(p);
        break;
    case 77:
        func_003F1850(p);
        break;
    case 76:
        func_003F19B0(p);
        break;
    case 61:
    case 62:
        func_003F0790(p);
        break;
    case 82:
        func_003F2200(p);
        break;
    case 83:
        func_003F24F0(p);
        break;
    case 84:
        func_003F2690(p);
        break;
    case 50:
        func_003EF340(p);
        break;
    case 51:
        func_003EF4C0(p);
        break;
    case 59:
        func_003F0410(p);
        break;
    case 60:
        func_003F04B0(p);
        break;
    case 37:
        func_003EF790(p);
        break;
    case 38:
        func_003EF860(p);
        break;
    case 39:
        func_003EFF40(p);
        break;
    case 40:
        func_003EFFC0(p);
        break;
    case 41:
        func_003F0110(p);
        break;
    case 42:
        func_003F0150(p);
        break;
    case 43:
        func_003F01B0(p);
        break;
    case 44:
        func_003F02E0(p);
        break;
    case 56:
        func_003EFAE0(p);
        break;
    case 57:
        func_003EFB70(p);
        break;
    case 58:
        func_003EFCE0(p);
        break;
    case 53:
        func_003EF640(p);
        break;
    case 54:
        func_003EF680(p);
        break;
    case 85:
        func_003F2720(p);
        break;
    case 45:
    case 46:
    case 47:
        func_003EF030(p);
        break;
    case 81:
        func_003F1FB0(p);
        break;
    case 86:
        func_003F29B0(p);
        break;
    case 87:
        func_003F2AB0(p);
        break;
    case 88:
        func_003F2770(p);
        break;
    case 35:
        func_003EB870(p);
        break;
    case 36:
        func_003EBA90(p);
        break;
    case 70:
        func_003F0F10(p);
        break;
    case 71:
        func_003F1130(p);
        break;
    case 72:
        func_003F1360(p);
        break;
    case 73:
        func_003F1490(p);
        break;
    case 74:
        func_003F15A0(p);
        break;
    case 75:
        func_003F16B0(p);
        break;
    case 49:
        func_003EF220(p);
        break;
    case 65:
        func_003F0B80(p);
        break;
    case 66:
        func_003F0C80(p);
        break;
    case 48:
    case 52:
    case 55:
    case 63:
    case 64:
    case 67:
    case 68:
    case 69:
    case 78:
        func_003F3970(p);
        break;
    }
    if (*(unsigned char *)(p + 0x3A80) != 0) func_003F3110(p);
    if (*(unsigned char *)(p + 0x3A81) != 0) func_003F31E0(p);
}

extern "C" {
int func_003E6750(char *, int, int, int);
}

class V2F8_1_iv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void m(int);
};

extern "C" {
int func_003EB3D0(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(4);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 0;
    *(char *)(p0 + 14976) = 0;
    *(char *)(p0 + 14977) = 1;
    tmp0 = func_003E6750(p0, 9, 0, 0);
    return tmp0;
}
}

extern "C" {
extern char D_00572F50[];
}

extern "C" {
int func_0034BBE0(int, char *);
}

extern "C" {
int func_003EBB10(char *p0) {
    int tmp0;
    int tmp2;
    ((V2F8_1_iv *)p0)->m(8);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 0;
    tmp0 = func_0034BBE0(4, D_00572F50);
    *(int *)(p0 + 14980) = tmp0;
    *(int *)(p0 + 14980) = (*(int *)(p0 + 14980) + 1);
    tmp2 = func_003E6750(p0, 2, 1, 5);
    return tmp2;
}
}

extern "C" {
int func_003ECBD0(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(16);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 0;
    tmp0 = func_003E6750(p0, 9, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003EF160(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(47);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 3;
    *(char *)(p0 + 13366) = 2;
    tmp0 = func_003E6750(p0, 16, 0, 0);
    return tmp0;
}
}

extern "C" {
extern char D_01CAFF0C[];
}

extern "C" {
int func_00131D10(float, float);
}

extern "C" {
void func_00133890(char *, char *, char *);
}

extern "C" {
void func_003EF260(char *p0) {
    char stk[0x20] __attribute__((aligned(16)));
    int tmp0;
    int tmp4;
    int tmp5;
    tmp0 = *(int *)(*(char **)D_01CAFF0C + 12);
    ((V2F8_1_iv *)p0)->m(50);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 3;
    *(char *)(p0 + 13366) = 2;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -48) + 64)), "r"((tmp0 + 80)), "r"((p0 + 1808)) : "memory");
    *(float *)((stk + -48) + 68) = 0.0f;
    *(float *)((stk + -48) + 48) = 0.0f;
    *(float *)((stk + -48) + 52) = 1.0f;
    *(float *)((stk + -48) + 56) = 0.0f;
    *(float *)((stk + -48) + 60) = 0.0f;
    func_00133890((p0 + 1760), ((stk + -48) + 64), ((stk + -48) + 48));
    tmp4 = func_00131D10(*(float *)(p0 + 1792), *(float *)(p0 + 1800));
    *(short *)(p0 + 144) = tmp4;
    tmp5 = func_003E6750(p0, 19, 0, 0);
}
}

extern "C" {
int func_003EF580(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(52);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 0;
    *(char *)(p0 + 13366) = 4;
    tmp0 = func_003E6750(p0, 20, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003EF8F0(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(55);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 3;
    *(char *)(p0 + 13366) = 2;
    tmp0 = func_003E6750(p0, 23, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F0460(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(60);
    tmp0 = func_003E6750(p0, 28, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F0AA0(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(64);
    tmp0 = func_003E6750(p0, 33, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F0AF0(int p0) {
    int func_003F3830(void);
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_003F3830();
    if (tmp0 != 0) {
        ((V2F8_1_iv *)v0)->m(66);
        v1 = func_003E6750(v0, 35, 0, 0);
    } else {
        ((V2F8_1_iv *)v0)->m(65);
        v1 = func_003E6750(v0, 9, 0, 0);
    }
    return v1;
}
}

extern "C" {
int func_003F1440(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(73);
    tmp0 = func_003E6750(p0, 37, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F1550(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(74);
    tmp0 = func_003E6750(p0, 38, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F1660(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(75);
    tmp0 = func_003E6750(p0, 39, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F1C10(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(79);
    *(char *)(p0 + 13364) = 0;
    *(char *)(p0 + 13365) = 4;
    *(char *)(p0 + 13366) = 0;
    tmp0 = func_003E6750(p0, 45, 0, 0);
    *(int *)(p0 + 14988) = 0x437a0000;
    *(int *)(p0 + 14872) = 0;
    *(char *)(p0 + 13367) = 0;
    *(char *)(p0 + 13368) = 0;
    return tmp0;
}
}

extern "C" {
int func_003F1F60(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(81);
    *(char *)(p0 + 14976) = 0;
    *(char *)(p0 + 14977) = 1;
    tmp0 = func_003E6750(p0, 47, 0, 0);
    return tmp0;
}
}

extern "C" {
int func_003F26D0(char *p0) {
    int tmp0;
    ((V2F8_1_iv *)p0)->m(85);
    tmp0 = func_003E6750(p0, 49, 0, 0);
    return tmp0;
}
}

class V2F8_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual int m(int);
};

extern "C" {
int func_003EAF00(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    v1 = ((V2F8_1_ii *)p0)->m(3);
    if (*(int *)(v0 + 8084) != 0) {
        v1 = func_003E6750(v0, 0, 0, 0);
    }
    *(char *)(v0 + 14976) = 0;
    *(char *)(v0 + 14977) = 1;
    return v1;
}
}

extern "C" {
int func_00104B80(char *, char *, int);
}

class VC4_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual int m(void);
};

extern "C" {
int func_003F2E90(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = ((VC4_0_i *)(v0 + 2432))->m();
    v1 = func_00104B80(((stk + -32) + 32), (v0 + 1760), tmp0);
    if (*(signed char *)(v0 + 8137) == 1) {
        *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) + *(float *)((stk + -32) + 32));
        *(float *)(v0 + 1812) = (*(float *)(v0 + 1812) + *(float *)((stk + -32) + 36));
        *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) + *(float *)((stk + -32) + 40));
    } else {
        *(float *)(v0 + 1808) = (*(float *)(v0 + 1808) + (1.5f * *(float *)((stk + -32) + 32)));
        *(float *)(v0 + 1812) = (*(float *)(v0 + 1812) + (1.5f * *(float *)((stk + -32) + 36)));
        *(float *)(v0 + 1816) = (*(float *)(v0 + 1816) + (1.5f * *(float *)((stk + -32) + 40)));
    }
    return v1;
}
}
