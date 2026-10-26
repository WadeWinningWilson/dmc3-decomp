extern "C" char D_01CAFF0C[];

extern "C" int func_0012B1A0(char *, char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0022CD60(char *);

extern "C" float func_0022CD90(char *);

extern "C" int func_0022CBA0(char *);

extern "C" char D_005BCBB0[8];

extern "C" char D_005BCBB8[8];

extern "C" char D_005BCBC0[8];

extern "C" char D_005BCBC8[8];

extern "C" char D_005BCBD0[8];

extern "C" char D_00562D00[];

extern "C" float D_00562C14[];

extern "C" float D_00562C18[];

extern "C" float D_00562C1C[];

extern "C" float D_00562C20[];

extern "C" float D_00562C24[];

extern "C" float D_00562C28[];

extern "C" float D_00562C2C[];

extern "C" float D_00562C30[];

extern "C" float D_00562C34[];

extern "C" float D_00562C38[];

extern "C" float D_00562C3C[];

class O385 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual float m1C();
};

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S385;

static inline float hp385(void) {
    char *a = *(char **)(*(char **)D_01CAFF0C + 4);
    if (a != 0 && *(char **)(a + 0x10) != 0)
        return (*(O385 **)(a + 0x10))->m1C();
    return 0.0f;
}

extern "C" char *func_00386170(char *, int *, S385 *);

extern "C" int func_002F6690(S385 *, char *, char *);

extern "C" char *func_00385BF0(char *p, int *q, char *r) {
    char name[32];
    S385 s;
    unsigned short h0;
    unsigned short h1;
    unsigned short h2;
    unsigned short k0;
    unsigned short k1;
    unsigned short k2;
    unsigned short k3;
    char *e;
    float x;
    k0 = 1000;
    k1 = 1000;
    k2 = 20;
    k3 = 1500;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCBB0) == 0) {
            e = func_00386170(p, q, &s);
            if (e != 0) {
                *(unsigned short *)(e + 0x1314) = h0;
                *(unsigned short *)(e + 0x1316) = h1;
                *(unsigned short *)(e + 0x1318) = h2;
                *(float *)(e + 0xDA4) = (float)k0;
                *(float *)(e + 0xDA0) = (float)k2;
                *(float *)(e + 0xDA8) = (float)k1;
                *(float *)(e + 0xDB4) = (float)k3;
                x = hp385();
                if (x < D_00562C18[0]) *(float *)(e + 0xDB4) += D_00562C14[0];
                else if (D_00562C18[0] <= x && x < D_00562C20[0]) *(float *)(e + 0xDB4) += D_00562C1C[0];
                else if (D_00562C20[0] <= x && x < D_00562C28[0]) *(float *)(e + 0xDB4) += D_00562C24[0];
                else if (D_00562C28[0] <= x && x < D_00562C30[0]) *(float *)(e + 0xDB4) += D_00562C2C[0];
                else if (D_00562C30[0] <= x && x < D_00562C38[0]) *(float *)(e + 0xDB4) += D_00562C34[0];
                else if (D_00562C38[0] <= x) *(float *)(e + 0xDB4) += D_00562C3C[0];
            }
            return e;
        }
        if (func_002F6690(&s, name, r) == 0) {
            if (func_0012B1A0(name, D_005BCBB8) == 0) {
                h0 = func_0022CD60(r);
                h1 = func_0022CD60(r);
                h2 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BCBC0) == 0) {
                k0 = (unsigned int)func_0022CD90(r);
            } else if (func_0012B1A0(name, D_00562D00) == 0) {
                k1 = (unsigned int)func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BCBC8) == 0) {
                k2 = (unsigned int)func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BCBD0) == 0) {
                k3 = (unsigned int)func_0022CD90(r);
            }
        }
    }
    return 0;
}
