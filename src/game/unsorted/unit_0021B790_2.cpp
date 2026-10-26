#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_002490F0(char *, int, int, int, int, int, float);

extern "C" void func_0021C7A0(char *, int);

extern "C" void func_00226A00(char *, int);

extern "C" void func_00225F30(char *, int);

extern "C" void func_0021CB50(char *, int);

extern "C" void func_0021CB60(char *, int);

extern "C" int D_01DFAB70[];

class V164 {
public:
    virtual void d8();virtual void dC();virtual void d10();virtual void d14();virtual void d18();virtual void d1C();virtual void d20();virtual void d24();virtual void d28();virtual void d2C();virtual void d30();virtual void d34();virtual void d38();virtual void d3C();virtual void d40();virtual void d44();virtual void d48();virtual void d4C();virtual void d50();virtual void d54();virtual void d58();virtual void d5C();virtual void d60();virtual void d64();virtual void d68();virtual void d6C();virtual void d70();virtual void d74();virtual void d78();virtual void d7C();virtual void d80();virtual void d84();virtual void d88();virtual void d8C();virtual void d90();virtual void d94();virtual void d98();virtual void d9C();virtual void dA0();virtual void dA4();virtual void dA8();virtual void dAC();virtual void dB0();virtual void dB4();virtual void dB8();virtual void dBC();virtual void dC0();virtual void dC4();virtual void dC8();virtual void dCC();virtual void dD0();virtual void dD4();virtual void dD8();virtual void dDC();virtual void dE0();virtual void dE4();virtual void dE8();virtual void dEC();virtual void dF0();virtual void dF4();virtual void dF8();virtual void dFC();virtual void d100();virtual void d104();virtual void d108();virtual void d10C();virtual void d110();virtual void d114();virtual void d118();virtual void d11C();virtual void d120();virtual void d124();virtual void d128();virtual void d12C();virtual void d130();virtual void d134();virtual void d138();virtual void d13C();virtual void d140();virtual void d144();virtual void d148();virtual void d14C();virtual void d150();virtual void d154();virtual void d158();virtual void d15C();virtual void d160();
    virtual void f164();
};

static inline void setbit(int k) {
    int w = k / 32;
    D_01DFAB70[w] |= 1 << (k - w * 32);
}

extern "C" void func_0021CDD0(char *p, float *pos, short a, unsigned short k) {
    QCOPY(p + 0x50, pos);
    *(short *)(p + 0x90) = a;
    *(unsigned short *)(p + 0x2856) = k;
    ((V164 *)p)->f164();
    switch (k) {
    case 0x64:
        *(unsigned char *)(p + 0x28AA) = 0;
        *(unsigned char *)(p + 0x28AE) = 0;
        *(float *)(p + 0x28D0) = *(float *)(*(char **)(p + 0x283C) + 0x1F0);
        func_00226A00(p, 0);
        func_00225F30(p, 0);
        setbit(0x3B);
        func_0021C7A0(p, 0x21);
        break;
    case 0x65:
        func_0021C7A0(p, 0x2C);
        func_0021CB50(p, 2);
        func_0021CB60(p, 1);
        *(unsigned char *)(p + 0x284C) = k;
        break;
    default:
        if (*(int *)(p + 0x24C0) == 0) {
            func_002490F0(p, 0, k, -1, 0, 0, -1.0f);
        } else {
            func_002490F0(p, 0x21, k, -1, 0, 0, -1.0f);
        }
        func_0021C7A0(p, 0x2C);
        *(unsigned char *)(p + 0x284C) = 0;
        break;
    }
}

extern "C" void func_0021F440(char *);

extern "C" void func_0021F6D0(char *);

extern "C" void func_0021F850(char *);

extern "C" void func_0021FD30(char *);

extern "C" void func_0021FD40(char *);

extern "C" void func_0021FF20(char *);

extern "C" void func_00220180(char *);

extern "C" void func_00220560(char *);

extern "C" void func_002205A0(char *);

extern "C" void func_002206D0(char *);

extern "C" void func_00220FE0(char *);

extern "C" void func_00220FF0(char *);

extern "C" void func_002217A0(char *);

extern "C" void func_002219C0(char *);

extern "C" void func_002219D0(char *);

extern "C" void func_00221B40(char *);

extern "C" void func_00221BC0(char *);

extern "C" void func_00222120(char *);

extern "C" void func_00222D60(char *);

extern "C" void func_00222FF0(char *);

extern "C" void func_00223510(char *);

extern "C" void func_002238B0(char *);

extern "C" void func_00223E20(char *);

extern "C" void func_00224030(char *);

extern "C" void func_002242D0(char *);

extern "C" void func_00224610(char *);

extern "C" void func_00224BF0(char *);

extern "C" void func_00224FA0(char *);

extern "C" void func_00225260(char *);

extern "C" void func_00225D40(char *);

extern "C" void func_00225E60(char *);

extern "C" void func_00226C80(char *);

extern "C" void func_00226CD0(char *);

extern "C" void func_00227230(char *);

extern "C" void func_002273B0(char *);

extern "C" void func_00227470(char *);

extern "C" void func_002276B0(char *);

extern "C" void func_00227860(char *);

extern "C" void func_002E0980(char *);

extern "C" void func_00227B10(char *);

extern "C" void func_00227DE0(char *);

extern "C" void func_00228140(char *);

extern "C" void func_002207C0(char *);

extern "C" void func_002211D0(char *);

extern "C" void func_00221920(char *);

class S21F {
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
    virtual void m184(int);
    virtual void m188();
};

extern "C" void func_0021F090(char *p) {
    if (*(float *)(p + 0x29A8) <= 0.0f || *(unsigned char *)(p + 0x2848) == 0x29) {
        switch (*(unsigned char *)(p + 0x284A)) {
        case 0:
            break;
        case 1:
            func_0021F440(p);
            break;
        case 2:
            func_0021F6D0(p);
            break;
        case 3:
            func_0021F850(p);
            break;
        case 4:
            func_0021FD30(p);
            break;
        case 5:
            func_0021FD40(p);
            break;
        case 6:
            func_0021FF20(p);
            break;
        case 7:
            func_00220180(p);
            break;
        case 8:
            func_00220560(p);
            break;
        case 9:
            func_002205A0(p);
            break;
        case 10:
            func_002206D0(p);
            break;
        case 11:
            func_00220FE0(p);
            break;
        case 12:
            func_00220FF0(p);
            break;
        case 13:
            func_002217A0(p);
            break;
        case 14:
            func_002219C0(p);
            break;
        case 15:
            func_002219D0(p);
            break;
        case 16:
            func_00221B40(p);
            break;
        case 17:
            ((S21F *)p)->m184(0);
            break;
        case 18:
            ((S21F *)p)->m188();
            break;
        case 19:
            func_00221BC0(p);
            break;
        case 20:
            func_00222120(p);
            break;
        case 21:
            func_00222D60(p);
            break;
        case 22:
            func_00222FF0(p);
            break;
        case 23:
            func_00223510(p);
            break;
        case 24:
            func_002238B0(p);
            break;
        case 25:
            func_00223E20(p);
            break;
        case 26:
            func_00224030(p);
            break;
        case 27:
            func_002242D0(p);
            break;
        case 28:
            func_00224610(p);
            break;
        case 29:
            func_00224BF0(p);
            break;
        case 30:
            func_00224FA0(p);
            break;
        case 31:
            func_00225260(p);
            break;
        case 32:
            func_00225D40(p);
            break;
        case 33:
            func_00225E60(p);
            break;
        case 34:
            func_00226C80(p);
            break;
        case 35:
            func_00226CD0(p);
            break;
        case 36:
            func_00227230(p);
            break;
        case 37:
            func_002273B0(p);
            break;
        case 38:
            func_00227470(p);
            break;
        case 39:
            func_002276B0(p);
            break;
        case 40:
            func_00227860(p);
            break;
        case 41:
            func_002E0980(p);
            break;
        case 42:
            func_00227B10(p);
            break;
        case 43:
            func_00227DE0(p);
            break;
        case 44:
            func_00228140(p);
            break;
        }
        switch (*(unsigned char *)(p + 0x284B)) {
        case 10:
            func_002207C0(p);
            break;
        case 12:
            func_002211D0(p);
            break;
        case 13:
            func_00221920(p);
            break;
        case 17:
            ((S21F *)p)->m184(1);
            break;
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 11: case 14: case 15: case 16: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44:
            break;
        }
    }
}
