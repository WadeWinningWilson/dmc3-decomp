class ObjRate {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual float m14();
};

/* Recomputes the playback speed from the rate source unless the input step is ~0. */
extern "C" int func_0030AC20(char *p) {
    float a = *(float *)(p + 0x10);
    if ((a < 0.0f ? -a : a) <= 0.0001f) {
        return 0;
    }
    *(float *)(p + 0x34) = *(float *)(p + 0x10) * ((ObjRate *)p)->m14();
    return 1;
}

extern "C" float func_001F9C40(char *, int);

extern "C" char D_01DF5D20[];

extern "C" void func_0036DF10(char *, int, int, int, int, int);

extern "C" char D_005BE1A8[8];

class Fade1C {
public:
    float f0[4];
    float f10;
    float f14;
    float f18;
    virtual void d0();
    virtual void d1();
    virtual void m10();
    virtual float m14();
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
};

extern "C" void func_0030ACA0(Fade1C *o) {
    float x;
    float y;
    o->f34 = o->f34 - func_001F9C40(D_01DF5D20, 0x87);
    if (o->f34 < 0.0f) {
        o->m10();
    } else {
        x = o->f28 - o->f20;
        x *= 1.0f - o->f34 / (o->f10 * o->m14());
        x += o->f20;
        y = o->f2C - o->f24;
        y *= 1.0f - o->f34 / (o->f10 * o->m14());
        y += o->f24;
        func_0036DF10(D_005BE1A8, 0, (int)(y + 0.5f), (int)x, 1, 0);
    }
}
