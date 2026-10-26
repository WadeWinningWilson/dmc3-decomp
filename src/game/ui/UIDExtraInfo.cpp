extern "C" char D_01DFA340[];

extern "C" unsigned int func_003101B0(char *, int, int);

extern "C" void func_0030FD40(char *, int, int, int, int, int, int, int);

extern "C" void func_0050B080(char *, int, unsigned char);

extern "C" bool func_0050AF80(char *p) {
    bool r = false;
    int q = *(int *)(p + 0xD04);
    int i;
    for (i = 0; i < 8; i++) {
        if (*(int *)(p + i * 4 + 0xCC4) >= 0) {
            unsigned int v = func_003101B0(D_01DFA340, *(int *)(p + i * 4 + 0xCC4), 0);
            int vol = 0x100 - (v >> 17);
            int c;
            q += 0xC;
            if (*(int *)(p + i * 4 + 0xCE4) < 0x80) {
                r = true;
                *(int *)(p + i * 4 + 0xCE4) += 8;
            }
            c = *(int *)(p + i * 4 + 0xCE4);
            func_0030FD40(D_01DFA340, *(int *)(p + i * 4 + 0xCC4), vol, q, (c << 16) + (c + (c << 8)) + 0x80000000, 0, 0xFFFFF2, 1);
            func_0050B080(p, q, *(unsigned char *)(p + i * 4 + 0xCE4));
        }
    }
    return r;
}

class VD0_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_0050AEC0(int p0) {
    int v2;
    char *v0;
    int v1;
    v2 = 0;
    v0 = (char *)p0;
    do {
        v1 = ((VD0_0_i *)(v0 + 192))->m();
        v2 = (v2 + 1);
        v0 = (v0 + 1536);
    } while ((v2 < 2));
    return v1;
}
}

class VCC_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_0050AF10(int p0) {
    int v2;
    int v3;
    char *v0;
    int v1;
    v3 = 0;
    v0 = (char *)p0;
    v1 = (p0 + 128);
    do {
        v2 = ((VCC_1_ii *)(v0 + 192))->m(v1);
        v3 = (v3 + 1);
        v0 = (v0 + 1536);
    } while ((v3 < 2));
    return v2;
}
}
