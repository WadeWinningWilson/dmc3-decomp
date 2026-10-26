extern "C" short D_00541CE0[];

class ObjTm1C {
public: int a0; int a4; int a8; int aC; int a10; int a14; int a18;
    virtual void d0(); virtual void d1(); virtual void m10(); virtual float m14();
};

extern "C" void func_00211570(char *p) {
    int i;
    for (i = 0; i < D_00541CE0[*(unsigned char *)(p + 6) * 12]; i++) {
        char *e = *(char **)(p + 0x24) + i * 16;
        if (*(int *)e != 0) {
            ObjTm1C *o = *(ObjTm1C **)(e + 4);
            switch (*(unsigned char *)o) {
            case 0:
                break;
            case 1:
            case 2:
            case 4:
            case 3:
                o->m10();
                break;
            }
        }
    }
}
