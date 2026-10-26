extern char D_01CAFF0C[];

extern unsigned char D_01CAFF3D[];

extern signed char D_005BC348;

extern char D_005BE138;

extern float D_005BC34C;

extern int D_005BE13C;

extern int D_005BE140;

extern "C" void func_0043D9F0(char *);

static inline void setf470(short s) { char *g = *(char **)(*(char **)D_01CAFF0C + 0x18); int k = s; if (k < 32) { ((int *)(g + 0x18))[k / 32] |= 1 << (k & 31); } else { k -= 32; ((int *)(g + 0x44))[k / 32] |= 1 << (k & 31); } }

class V43D {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual unsigned char mBC(float);
};

extern "C" void func_0043D6B0(char *p) {
    unsigned char r[3];
    if (D_01CAFF3D[0] == 0) {
        *(float *)(p + 0x1468) += 1.2f * (float)*(unsigned int *)(p + 0x1428);
    } else {
        *(float *)(p + 0x1468) += 8.5f * (float)*(unsigned int *)(p + 0x1428);
    }
    if (*(float *)(p + 0x1468) > *(float *)(p + 0x10)) {
        if (!((*(float *)(p + 0x1468) -= *(float *)(p + 0x10)) <= 0.0f)) {
            r[0] = ((V43D *)(p + 0x340))->mBC(*(float *)(p + 0x10));
            r[1] = ((V43D *)(p + 0x940))->mBC(*(float *)(p + 0x10));
            r[2] = ((V43D *)(p + 0xF40))->mBC(*(float *)(p + 0x10));
            if (*(unsigned char *)&r == 4 || *(unsigned char *)&r == 0) {
                *(unsigned char *)(p + 0x1400) = 1;
                if (*(short *)(p + 0x338) != -1) setf470(*(short *)(p + 0x338));
                D_005BC348 = -1;
                D_005BE138 = 0;
                D_005BC34C = 1.0f;
                D_005BE13C = 0;
                D_005BE140 = 0;
                func_0043D9F0(p);
            }
        } else {
            *(float *)(p + 0x1468) = 0.0f;
        }
    }
}
