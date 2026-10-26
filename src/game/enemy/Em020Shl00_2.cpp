extern "C" void func_00131DF0(float *, char *, float *);

extern "C" void func_0041D840(char *, char *, float);

extern "C" char *func_00207480(int, int, int, int);

extern "C" void func_001AD140(char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" char D_0056CBF0[];

class V42F {
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
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual char *m134(int);
};

typedef struct { unsigned char b[4]; } Tab42F;
extern "C" Tab42F D_005BD90C;

extern "C" void func_0042F7A0(char *p) {
    Tab42F tab = D_005BD90C;
    char *o = *(char **)(p + 0xD0);
    char *m;
    char *q;
    char *e;
    char *g;
    char *t;
    float v[4];
    m = ((V42F *)o)->m134(tab.b[*(unsigned int *)(p + 0x454)]);
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    func_00131DF0((float *)(p + 0x50), *(char **)(m + 0x104), v);
    *(short *)(p + 0x90) = *(short *)(o + 0x90) + (unsigned short)(short)(int)(0.5f + 65536.0f * (-180.0f + 90.0f * (float)*(unsigned int *)(p + 0x454)) / 360.0f);
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    q = p;
    if (q != 0) q += 0x40;
    func_0041D840(q, p + 0x150, 1.0f);
    *(char **)(p + 0x450) = func_00207480(3, 0x1E3, 0, 0x10);
    if ((g = *(char **)(p + 0x450)) != 0) {
        t = p + 0x190;
        *(char **)(g + 0x90) = t;
        *(unsigned char *)(g + 0x9A) = 3;
        e = *(char **)(p + 0x450);
        *(unsigned char *)(e + 0x3A) = 1;
    } else {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x3F0) = 5;
    *(unsigned char *)(p + 0x3F1) = 0;
    *(short *)(p + 0x3F2) = 0;
    *(unsigned char *)(p + 0x400) = 4;
    *(float *)(p + 0x410) = 0.0f;
    *(float *)(p + 0x414) = 0.0f;
    *(float *)(p + 0x418) = 0.0f;
    *(float *)(p + 0x41C) = 1.0f;
    *(float *)(p + 0x420) = 0.0f;
    *(float *)(p + 0x424) = 0.0f;
    *(float *)(p + 0x428) = 1500.0f;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 30.0f;
    func_0028C200(p + 0x1D0, p + 0x3F0, p + 0x400, 3, D_0056CBF0, p, 0);
    *(int *)(p + 0x2A8) = 0x30441;
    func_0028C8E0(p + 0x1D0, 0);
    func_0028C910(p + 0x1D0);
    func_0028C3A0(p + 0x1D0, 0, -1, t);
    *(float *)(p + 0x458) = 180.0f;
    *(unsigned char *)(p + 4) = 1;
}
