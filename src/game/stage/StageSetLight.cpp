extern "C" char D_01CAFF0C[];

extern "C" void func_00105300(char *, char *);

extern "C" char *func_0027A710(char *);

extern "C" char *func_002F7C10(int, int);

class ObjMt24 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual char *m24(int);
};

extern "C" void func_00385720(char *p) {
    int k;
    char *g;
    if (*(signed char *)(p + 0x58) == 1) {
        func_00105300(p + 0xB0, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x110);
        return;
    }
    if (*(unsigned char *)(p + 0xA0) != 1) {
        return;
    }
    if (*(int *)(p + 0xA4) != -1) {
        ObjMt24 *o = (ObjMt24 *)func_002F7C10(*(int *)(p + 0xA4), 0);
        if (o != 0) {
            func_00105300(p + 0xB0, o->m24(*(int *)(p + 0xA8)));
        }
    } else {
        k = *(int *)(p + 0xA8);
        g = *(char **)(*(char **)D_01CAFF0C + 0x14);
        func_00105300(p + 0xB0, k != -1 ? *(char **)(func_0027A710(g + 0x40) + 0x108) + k * 64 : g + 0x4C0);
    }
}
