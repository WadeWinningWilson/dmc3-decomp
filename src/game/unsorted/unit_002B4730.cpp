extern "C" extern char D_005A9A10[];

extern "C" extern char D_005A99E0[];

extern "C" extern char D_005A99B0[];

extern "C" extern char D_005A9980[];

extern "C" extern char D_005A9950[];

extern "C" void func_002B5550(char *);

extern "C" void func_0024BE00(char *);

extern "C" void func_0024BE90(char *);

extern "C" void func_0023BA10();

extern "C" void func_0023ACD0();

extern "C" void func_00100450(char *, void (*)(), void (*)(), int, int);

extern "C" void func_00247770(int, char *);

class V2B5 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10(int);
};

typedef struct { char *a; int b; int c; int d; } E2B5;

extern "C" void func_002B51B0(char *p, signed char k) {
    char *q;
    if (*(unsigned char *)(p + 0x24A1) == 0xFF) {
        *(unsigned char *)(p + 0x24A3) = *(unsigned char *)(p + 0x24A2);
        return;
    }
    if (*(unsigned char *)(p + 0x24A1) == *(unsigned char *)(p + 0x24A3)) {
        *(unsigned char *)(p + 0x24A3) = 0xFF;
        return;
    }
    *(unsigned char *)(p + 0x24A3) = 0xFF;
    func_002B5550(p);
    switch (*(unsigned char *)(((E2B5 *)(p + 0x94))[*(unsigned char *)(p + 0x24A1)].a + 1)) {
    case 0:
        q = p + 0x2B0;
        if (q != 0) {
            func_0024BE00(q);
            *(char **)q = D_005A9A10;
            func_0024BE90(q);
            *(unsigned char *)(q + 0x90) = 6;
            *(float *)(q + 0x9C) = 1.0f;
            *(char **)q = D_005A99E0;
        }
        ((V2B5 *)q)->m10(((E2B5 *)(p + 0x94))[*(unsigned char *)(p + 0x24A1)].b);
        *(char **)(p + 0x2A0) = q;
        *(char **)(p + 0x294) = *(char **)(p + 0x2A0);
        break;
    case 1:
        q = p + 0x2B0;
        if (q != 0) {
            func_0024BE00(q);
            *(char **)q = D_005A9A10;
            func_0024BE90(q);
            *(unsigned char *)(q + 0x90) = 6;
            *(float *)(q + 0x9C) = 1.0f;
            *(char **)q = D_005A99B0;
            func_00100450(q + 0xB0, func_0023BA10, func_0023ACD0, 0x850, 2);
        }
        ((V2B5 *)q)->m10(((E2B5 *)(p + 0x94))[*(unsigned char *)(p + 0x24A1)].b);
        *(char **)(p + 0x2A0) = q;
        *(char **)(p + 0x294) = *(char **)(p + 0x2A0);
        break;
    case 2:
        q = p + 0x2B0;
        if (q != 0) {
            func_0024BE00(q);
            *(char **)q = D_005A9A10;
            func_0024BE90(q);
            *(unsigned char *)(q + 0x90) = 6;
            *(float *)(q + 0x9C) = 1.0f;
            *(char **)q = D_005A9980;
            func_00100450(q + 0xB0, func_0023BA10, func_0023ACD0, 0x850, 4);
        }
        ((V2B5 *)q)->m10(((E2B5 *)(p + 0x94))[*(unsigned char *)(p + 0x24A1)].b);
        *(char **)(p + 0x2A0) = q;
        *(char **)(p + 0x294) = *(char **)(p + 0x2A0);
        break;
    case 3:
        q = p + 0x2B0;
        if (q != 0) {
            func_0024BE00(q);
            *(char **)q = D_005A9A10;
            func_0024BE90(q);
            *(unsigned char *)(q + 0x90) = 6;
            *(float *)(q + 0x9C) = 1.0f;
            *(char **)q = D_005A9950;
        }
        ((V2B5 *)q)->m10(((E2B5 *)(p + 0x94))[*(unsigned char *)(p + 0x24A1)].b);
        *(char **)(p + 0x2A0) = q;
        *(char **)(p + 0x294) = *(char **)(p + 0x2A0);
        break;
    case 4:
        *(char **)(p + 0x2A0) = 0;
        *(int *)(p + 0x294) = *(int *)(p + 0x298);
        if (k == 1) {
            func_00247770(*(int *)(p + 0x298), p + 0x70);
            break;
        }
        if (*(unsigned char *)(p + 0x24A2) == 0xFF || *(unsigned char *)(((E2B5 *)(p + 0x94))[*(unsigned char *)(p + 0x24A2)].a + 1) != 4) {
            func_00247770(*(int *)(p + 0x298), p + 0x70);
        }
        break;
    case 5:
        *(char **)(p + 0x2A0) = 0;
        *(int *)(p + 0x294) = *(int *)(p + 0x298);
        break;
    }
}
