extern "C" unsigned char *func_00210240(char *);

class Snd2F5 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(int, unsigned int);
    virtual void m18(int, unsigned int);
    virtual void m1C(int, unsigned int, int);
    virtual void m20(int, unsigned int, int);
    virtual void m24(int, unsigned int);
    virtual void m28(int, unsigned int, int);
};

class Ev2F5 {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual float m14();
};

#define VOL() (unsigned int)(*(float *)(p + 0x10) * ((Ev2F5 *)p)->m14())

extern "C" Snd2F5 *D_005BC1A8;

extern "C" int func_002F56C0(char *p) {
    float f = *(float *)(p + 0x10);
    int id;
    if (f < 0.0f) f = -f;
    if (f <= 0.0001f) return 0;
    id = (*(unsigned char *)(p + 0x24) << 24) + ((*(unsigned char *)(p + 0x23) << 16) + (*(unsigned char *)(p + 0x21) + (*(unsigned char *)(p + 0x22) << 8)));
    switch (*(unsigned char *)(p + 0x20)) {
    case 0:
        if (*func_00210240(p) == 0) {
            D_005BC1A8->m14(id, VOL());
        } else {
            D_005BC1A8->m1C(id, VOL(), 0xFFFFF0);
        }
        break;
    case 1:
        if (*func_00210240(p) == 0) {
            D_005BC1A8->m18(id, VOL());
        } else {
            D_005BC1A8->m20(id, VOL(), 0xFFFFF0);
        }
        break;
    case 2:
        if (*func_00210240(p) == 0) {
            D_005BC1A8->m24(id, VOL());
        } else {
            D_005BC1A8->m28(id, VOL(), 0xFFFFF0);
        }
        break;
    }
    return 1;
}
