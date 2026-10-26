extern "C" unsigned char func_0024E800(char *);

extern "C" char D_01CAFF0C[];

extern "C" double func_0011CED0(double);

extern "C" float func_00132470(char *, char *);

extern "C" void func_004398D0(char *, int);

extern "C" void func_0034B8C0(char *, char *, int);

extern "C" int func_0034B800(float, char *, char *, short, short);

extern "C" void func_00439700(char *, int, int);

extern "C" void func_00439970(char *, int, int);

extern "C" float D_005BD948;

extern "C" float D_005BD94C;

extern "C" float D_005BD950;

extern "C" float D_005BD9D4;

extern "C" short D_005BD9E0;

extern "C" short D_005BD9E2;

extern "C" float D_005BD9E4;

extern "C" float D_005BDA48;

extern "C" float D_005BDA50;

#define FB(t, o) (*(t *)(p + (o)))

struct A436 {
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
    virtual void m2F4(int);
};

extern "C" void func_00436D00(char *p) {
    switch (FB(unsigned char, 0x47BF)) {
    case 0:
        FB(unsigned char, 0x47BF)++;
        func_004398D0(p, 0x45);
        break;
    case 1:
        if (FB(unsigned char, 0x4860) == 0) {
            ((A436 *)p)->m2F4(0x33);
            break;
        }
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if ((unsigned char)func_0034B800(D_005BD9E4, p + 0x150, p + 0x50, D_005BD9E0 + FB(short, 0x4850), D_005BD9E2) == 1) {
            FB(unsigned char, 0x47BF)++;
            func_00439700(p, 0x49, 1);
        }
        break;
    case 2:
        if (FB(unsigned char, 0x4860) == 0) {
            ((A436 *)p)->m2F4(0x33);
            break;
        }
        if (!(FB(float, 0x483C) < D_005BDA48)) {
            FB(float, 0x483C) = 0.0f;
            if (!(FB(float, 0x4838) < D_005BDA50))
                ((A436 *)p)->m2F4(0x32);
            else
                ((A436 *)p)->m2F4(0x31);
            break;
        }
        FB(short, 0x47BA) = FB(short, 0x160) - FB(short, 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, D_005BD9D4 * FB(float, 0x10));
        if (func_0011CED0(FB(float, 0xF0)) > 1.0 || func_0011CED0(FB(float, 0xF8)) > 1.0) {
            ((A436 *)p)->m2F4(0x2F);
            break;
        }
        if (!(FB(float, 0x4840) <= D_005BD948)) {
            float d = func_00132470(p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
            if (!(d <= D_005BD94C) && d < D_005BD950) {
                ((A436 *)p)->m2F4(0x2F);
                break;
            }
        }
        if ((unsigned char)func_0024E800(p + 0x41A0) == 1)
            func_00439700(p, 0x49, 1);
        if ((unsigned char)func_0024E800(p + 0x40D0) == 1)
            func_00439970(p, 0x49, 0);
        break;
    }
    FB(float, 0x4840) += FB(float, 0x10);
}
