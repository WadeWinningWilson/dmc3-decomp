class VD0_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_0030A7E0(int p0) {
    int v2;
    char *v0;
    int v1;
    v2 = 0;
    v0 = (char *)p0;
    do {
        v1 = ((VD0_0_i *)(v0 + 1728))->m();
        v2 = (v2 + 1);
        v0 = (v0 + 1536);
    } while ((v2 < 13));
    return v1;
}
}

extern "C" {
extern char D_01CAFF0C[];
}

class VCC_1_pi {
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
    virtual int m(char *);
};

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_0030A830(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = *(int *)(p0 + 21696);
    if (v1 != 0) {
        v3 = 0;
    } else {
        v3 = *(unsigned char *)(*(char **)D_01CAFF0C + 10);
    }
    if ((v3 & 255) == 0) {
        if (v1 == 0) {
            ((VCC_1_pv *)(v0 + 20160))->m((v0 + 896));
        }
        ((VCC_1_pv *)(v0 + 12480))->m((v0 + 1024));
        if (*(int *)(v0 + 21696) == 0) {
            ((VCC_1_pv *)(v0 + 18624))->m((v0 + 1536));
        }
        ((VCC_1_pv *)(v0 + 1728))->m((v0 + 128));
        ((VCC_1_pv *)(v0 + 3264))->m((v0 + 256));
        ((VCC_1_pv *)(v0 + 4800))->m((v0 + 384));
        ((VCC_1_pv *)(v0 + 6336))->m((v0 + 512));
        ((VCC_1_pv *)(v0 + 7872))->m((v0 + 640));
        ((VCC_1_pv *)(v0 + 9408))->m((v0 + 768));
        ((VCC_1_pv *)(v0 + 10944))->m((v0 + 896));
        v4 = ((VCC_1_pi *)(v0 + 14016))->m((v0 + 1152));
        if (*(int *)(v0 + 21696) == 0) {
            if (*(unsigned char *)(v0 + 21882) != 0) {
                v4 = ((VCC_1_pi *)(v0 + 15552))->m((v0 + 1280));
            }
        }
    }
    if (*(int *)(v0 + 21696) == 0) {
        if (*(unsigned char *)(v0 + 21896) != 0) {
            v4 = ((VCC_1_pi *)(v0 + 17088))->m((v0 + 1408));
        }
    }
    return v4;
}
}
