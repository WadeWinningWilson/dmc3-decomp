extern "C" void func_002490F0(char *, int, int, int, int, int, float);

extern "C" void func_0021CBB0(char *);

extern "C" int func_002DAA00(char *, char *);

extern "C" int func_002496D0(char *);

extern "C" void func_0021B790(char *, int);

extern "C" void func_002DBAA0(char *, int, float);

extern "C" void func_002E0C90(char *p) {
    unsigned char r = 1;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p);
        if (*(char **)(p + 0x2AE8) != 0) {
            r = (unsigned char)func_002DAA00(p, *(char **)(p + 0x2AE8) + 0x10);
        }
        if (r) {
            func_002490F0(p, 1, 2, -1, 1, 0, -1.0f);
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        } else {
            func_002490F0(p, 1, 3, -1, 1, 0, -1.0f);
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4) + 0x8000;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        }
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned short *)(p + 0x24C6) == 0x102) {
                *(short *)(p + 0x2856) = 5;
            } else {
                *(short *)(p + 0x2856) = 9;
            }
            func_0021B790(p, *(unsigned char *)(p + 0x2856));
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" int func_0021CBA0(char *);

extern "C" int func_002D9EB0(char *);

class O2DF {
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
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174();
    virtual void m178(int, int);
};

extern "C" {
void func_002DFA80(char *p, int a, int b) {
    extern char *func_00207480(int, int, char *, int);
    char *e;
    unsigned char k;
    if (func_0021CBA0(p) & 0x80000000) return;
    if (*(unsigned char *)(p + 0x28AC) == 1) return;
    if (*(signed char *)(p + 0x46) == 0 && *(unsigned char *)(p + 0x2848) == 0x11) {
        k = *(unsigned char *)(p + 0x2998);
        if (0xBE <= k && k <= 0xC5) return;
        if (*(unsigned short *)(p + 0x24C6) == 0x1107) return;
        if (k == 0x51 || k == 0x52) return;
        if (k == 0x56 || k == 0x57) return;
        if (*(unsigned short *)(p + 0x24C6) == 0x1004) return;
        if (k == 0x58) return;
        if (k == 0x5F) return;
        if (k == 0x12) return;
        if (k == 0x29) return;
    }
    e = func_00207480(3, 0x331, 0, 0x20);
    if (e != 0) {
        *(int *)(e + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
        *(unsigned char *)(e + 0x99) = 1;
    }
    *(unsigned char *)(p + 0x28A9) = 0;
    func_003305E0(D_01DFABA0, 0, 0x4B, p + 0x50, 0, 0, 0);
    ((O2DF *)p)->m178(a, b);
}
}

extern "C" void func_0034BA60(int, char *, signed char, int, int);

struct M207 { float m[16]; };

extern "C" char D_01CAFF0C[];

extern "C" void func_002F2FB0(char *);

extern "C" char *func_002F3080(char *);

extern "C" {
void func_002E02C0(char *p, char *a) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    char *q;
    char *e;
    bool found;
    switch (*(signed char *)(a + 1)) {
    case -1: case 0: case 7:
        break;
    case 2: case 5:
        q = func_00207480(3, 0x2C3, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    case 1:
        q = func_00207480(2, 0x1AA, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        found = false;
        func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
        for (;;) {
            e = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
            if (e == 0) break;
            if (*(signed char *)(e + 0x46) == 0x29) {
                found = true;
                break;
            }
            if (*(signed char *)(e + 0x46) == 0x31) {
                found = true;
                break;
            }
        }
        if (!found) break;
        switch (*(signed char *)(e + 0x46)) {
        case 0x29:
            func_0034BA60(0x2A, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104) + 0x30, 0x29, 0, 1);
            break;
        case 0x31:
            func_0034BA60(0x21, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104) + 0x30, 0x31, 0, 1);
            break;
        }
        break;
    case 4:
        q = func_00207480(2, 0x1A9, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    case 6:
        q = func_00207480(2, 0x1C2, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    case 3:
        if (*(signed char *)(a + 0x18) != 7) break;
        q = func_00207480(3, 0x12F, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x138C) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    }
}
}
