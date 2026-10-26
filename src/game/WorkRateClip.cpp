class ObjRate {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual float m14();
};

extern "C" float D_01DF5D24[];

/* Like the rate update above, but mode 0 first scales the global rate by the track gain at +0x30. */
extern "C" int func_00228470(char *p) {
    float a = *(float *)(p + 0x10);
    if ((a < 0.0f ? -a : a) <= 0.0001f) {
        return 0;
    }
    switch (*(unsigned char *)(p + 0x20)) {
    case 0:
        D_01DF5D24[0] = D_01DF5D24[0] * *(float *)(p + 0x30);
        break;
    case 1:
        break;
    }
    *(float *)(p + 0x28) = *(float *)(p + 0x10) * ((ObjRate *)p)->m14();
    return 1;
}

extern "C" float func_001F9C40(char *, int);

extern "C" char D_01DF5D20[];

class ObjTm1C {
public: int a0; int a4; int a8; int aC; int a10; int a14; int a18;
    virtual void d0(); virtual void d1(); virtual void m10(); virtual float m14();
};

extern "C" void func_00228520(char *p) {
    float d;
    float t = *(float *)(p + 0x28) - func_001F9C40(D_01DF5D20, 0x87);
    *(float *)(p + 0x28) = t;
    if (t < 0.0f) {
        ((ObjTm1C *)p)->m10();
        return;
    }
    switch (*(unsigned char *)(p + 0x20)) {
    case 0:
        break;
    case 1:
        d = *(float *)(p + 0x30) - *(float *)(p + 0x2C);
        d *= 1.0f - *(float *)(p + 0x28) / (*(float *)(p + 0x10) * ((ObjTm1C *)p)->m14());
        d += *(float *)(p + 0x2C);
        D_01DF5D24[0] = d;
        break;
    }
}
