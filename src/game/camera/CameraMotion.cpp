class Rng1C {
public:
    int a0;
    float f4;
    int a8;
    int aC;
    float f10;
    int a14;
    int a18;
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual float m14();
};

extern "C" int func_002101A0(Rng1C *o, float x) {
    if (!(x < o->f4) && x < o->f4 + o->f10 * o->m14()) {
        return 1;
    }
    return 0;
}

extern "C" void func_0013D5D0(char *);

extern "C" short D_00541CE0[];

class ObjAt1C {
public:
    int a0;
    int a4;
    int a8;
    int aC;
    int a10;
    int a14;
    int a18;
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C();
};

extern "C" void func_00210660(char *p) {
    int i;
    *(unsigned char *)(p + 4) = 0;
    for (i = 0; i < D_00541CE0[*(unsigned char *)(p + 6) * 12]; i++) {
        char *e = *(char **)(p + 0x24) + i * 16;
        if (*(int *)e != 0) {
            (*(ObjAt1C **)(e + 4))->m1C();
            func_0013D5D0(*(char **)(p + 0x24) + i * 16);
        }
    }
    func_0013D5D0(p + 0x14);
}

class S210 {
public:
    unsigned char st;
    float f4;
    float f8;
    float fC;
    float f10;
    char pad14[8];
    virtual unsigned char v8();
    virtual void vC();
    virtual void v10();
    virtual float v14();
};

extern "C" unsigned char func_002103E0(char *p) {
    unsigned char r = 0;
    int i;
    float t;
    float l;
    S210 *s;
    t = *(float *)(*(char **)p + 0xC) + *(float *)(*(char **)p + 0x10);
    *(float *)(p + 0x10) = 0.0f;
    for (i = 0; i < *(int *)(p + 0xC); i++) {
        if (*(int *)(*(char **)(p + 0x24) + i * 16) == 0) continue;
        s = *(S210 **)(*(char **)(p + 0x24) + i * 16 + 4);
        switch (s->st) {
        case 0:
            break;
        case 1:
            l = s->f10;
            if (!(t < s->f4 + s->f8 * l)) {
                if (t < s->f4 + (l * s->v14() - s->fC * l)) {
                    if (*(unsigned char *)(*(char **)p + 1) != 0 || *(unsigned char *)(p + 6) != 7) {
                        if (s->v8() == 1) {
                            r = 1;
                            s->st = 2;
                            if (!(s->f4 <= *(float *)(p + 0x10))) *(float *)(p + 0x10) = s->f4;
                        } else {
                            s->st = 4;
                        }
                    }
                }
            }
            break;
        case 2:
            if (!(t < s->f4 + (s->f10 * s->v14() - s->fC * s->f10))) {
                s->v10();
                s->st = 3;
            } else {
                s->vC();
                if (!(s->f4 <= *(float *)(p + 0x10))) *(float *)(p + 0x10) = s->f4;
            }
            break;
        case 4:
            if (!(t <= s->f4 + (s->f10 * s->v14() - s->fC * s->f10))) s->st = 3;
            break;
        case 3:
            break;
        }
    }
    return r;
}
