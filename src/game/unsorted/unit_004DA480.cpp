extern "C" char D_01CAFF0C[];

extern "C" void func_001AD140(char *);

extern "C" int func_0022CBA0(char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0012B1A0(char *, char *);

extern "C" int func_0022CD60(char *);

extern "C" float func_0022CD90(char *);

extern "C" char D_005BDF5C[4];

extern "C" char D_005BDF60[8];

extern "C" char D_005BDF68[8];

extern "C" char D_005BDF70[8];

extern "C" char D_005BDF78[8];

extern "C" char D_005BDF80[8];

extern "C" char D_0058B3F0[];

extern "C" float D_0058B304[];

extern "C" float D_0058B308[];

extern "C" float D_0058B30C[];

extern "C" float D_0058B310[];

extern "C" float D_0058B314[];

extern "C" float D_0058B318[];

extern "C" float D_0058B31C[];

extern "C" float D_0058B320[];

extern "C" float D_0058B324[];

extern "C" float D_0058B328[];

extern "C" float D_0058B32C[];

class O4DA {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual float m1C();
};

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S4DA;

typedef struct { S4DA h; signed char b; char pad[0xF]; float v[3]; float one; } S4DAx;

static inline float hp4DA(void) {
    char *a = *(char **)(*(char **)D_01CAFF0C + 4);
    if (a != 0 && *(char **)(a + 0x10) != 0)
        return (*(O4DA **)(a + 0x10))->m1C();
    return 0.0f;
}

extern "C" char *func_004DAB60(char *, int *, S4DAx *, int);

extern "C" int func_002F6690(S4DA *, char *, char *);

extern "C" char *func_004DA480(char *p, int *q, char *r) {
    char name[32];
    S4DAx s;
    unsigned short k0;
    unsigned short k1;
    unsigned short k2;
    unsigned short k3;
    char *e;
    float x;
    k0 = 1000;
    k1 = 1000;
    k2 = 20;
    k3 = 3000;
    s.h.a1 = 0;
    s.h.a3 = 0;
    s.h.f10[0] = 0.0f;
    s.h.a0 = -1;
    s.h.a2 = -1;
    s.h.f10[1] = 0.0f;
    s.h.f10[2] = 0.0f;
    s.h.f10[3] = 1.0f;
    s.h.f10[4] = 0.0f;
    s.h.f10[5] = 0.0f;
    s.h.f10[6] = 0.0f;
    s.h.f10[7] = 1.0f;
    s.h.f10[8] = 1.0f;
    s.h.f10[9] = 1.0f;
    s.h.f10[10] = 1.0f;
    s.h.f10[11] = 1.0f;
    s.b = -1;
    s.v[2] = s.v[1] = s.v[0] = 0.0f;
    s.one = 1.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDF5C) == 0) {
            e = func_004DAB60(p, q, &s, 0);
            if (e != 0) {
                *(char **)(e + 0x12C0) = func_004DAB60(p, q, &s, 1);
                if (*(char **)(e + 0x12C0) == 0) {
                    func_001AD140(e);
                    return 0;
                }
                *(char **)(*(char **)(e + 0x12C0) + 0x12BC) = e;
                *(float *)(e + 0xDA4) = (float)k0;
                *(float *)(e + 0xDA0) = (float)k2;
                *(float *)(e + 0xDA8) = (float)k1;
                *(float *)(e + 0xDB4) = (float)k3;
                *(float *)(*(char **)(e + 0x12C0) + 0xDA4) = (float)k0;
                *(float *)(*(char **)(e + 0x12C0) + 0xDA0) = (float)k2;
                *(float *)(*(char **)(e + 0x12C0) + 0xDA8) = (float)k1;
                *(float *)(*(char **)(e + 0x12C0) + 0xDB4) = (float)k3;
                x = hp4DA();
                if (x < D_0058B308[0]) *(float *)(e + 0xDB4) += D_0058B304[0];
                else if (D_0058B308[0] <= x && x < D_0058B310[0]) *(float *)(e + 0xDB4) += D_0058B30C[0];
                else if (D_0058B310[0] <= x && x < D_0058B318[0]) *(float *)(e + 0xDB4) += D_0058B314[0];
                else if (D_0058B318[0] <= x && x < D_0058B320[0]) *(float *)(e + 0xDB4) += D_0058B31C[0];
                else if (D_0058B320[0] <= x && x < D_0058B328[0]) *(float *)(e + 0xDB4) += D_0058B324[0];
                else if (D_0058B328[0] <= x) *(float *)(e + 0xDB4) += D_0058B32C[0];
            }
            return e;
        }
        if (func_002F6690(&s.h, name, r) == 0) {
            if (func_0012B1A0(name, D_005BDF60) == 0) {
                s.b = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BDF68) == 0) {
                s.v[0] = func_0022CD90(r);
                s.v[1] = func_0022CD90(r);
                s.v[2] = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BDF70) == 0) {
                k0 = (unsigned int)func_0022CD90(r);
            } else if (func_0012B1A0(name, D_0058B3F0) == 0) {
                k1 = (unsigned int)func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BDF78) == 0) {
                k2 = (unsigned int)func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BDF80) == 0) {
                k3 = (unsigned int)func_0022CD90(r);
            }
        }
    }
    return 0;
}
