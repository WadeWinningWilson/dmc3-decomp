class Sub40 {
public:
    int x;
};

class Trk2C {
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
    virtual void m2C(int, Sub40 *, char *, char *, int);
};

struct TrkS { char pad[0x20]; unsigned short ids[16]; };

class ObjBC2 {
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
    virtual void mBC(int, char *);
    char padBC[0x3C];
};

class ObjD40 : public ObjBC2, public Sub40 {
};

extern "C" void func_002E7A80(Trk2C *t, char *q, int s) {
    char *p = (char *)t;
    bool found;
    int i;
    unsigned short id;
    ObjD40 *o;
    found = false;
    id = *(unsigned short *)(q + 6);
    for (i = 0; i < *(unsigned char *)(p + 0x41); i++) {
        if (((TrkS *)p)->ids[i] == id) found = true;
    }
    if (found) return;
    ((unsigned short *)(p + 0x20))[*(unsigned char *)(p + 0x40) % 16] = id;
    *(unsigned char *)(p + 0x40) = *(unsigned char *)(p + 0x40) + 1;
    *(unsigned char *)(p + 0x41) = *(unsigned char *)(p + 0x41) + 1;
    if (*(unsigned char *)(p + 0x41) > 16) *(unsigned char *)(p + 0x41) = 16;
    o = *(ObjD40 **)(q + 0x2F0);
    {
    int k = *(int *)(q + 0x2F8);
    char *w = q + 0xB0;
    Sub40 *b;
    *(float *)(q + 0xBC) = 1.0f;
    b = o;
    t->m2C(k, b, w, q, s);
    }
    o->mBC(s, q);
}

class V18_3_iiii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(int, int, int);
};

extern "C" {
int func_002E7A30(char *p0, int p1, int p2) {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 12);
    if (v0 != 0) {
        if (p1 != 0) {
            if (p2 != 0) {
                v1 = ((V18_3_iiii *)*(char **)(p0 + 20))->m(p1, p2, v0);
            }
        }
    }
    return v1;
}
}

class V10_3_iipi {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(int, int, char *);
};

extern "C" {
int func_002E7BB0(char *p0, char *p1, char *p2) {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = *(int *)(p2 + 760);
    v1 = p2;
    v2 = *(int *)(p1 + 752);
    if (v2 != 0) {
        v2 = (v2 + 64);
    }
    *(int *)(v1 + 188) = 0x3f800000;
    tmp0 = ((V10_3_iipi *)p0)->m(v0, v2, (v1 + 176));
    return tmp0;
}
}
