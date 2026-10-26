class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" void func_003B8620(char *p) {
    char *a = p + 0xC80;
    ((SubCCc *)(p + 0x640))->mCC(a);
    ((SubCCc *)(p + 0x40))->mCC(a);
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001AD140(char *);

extern "C" void func_001A2000(char *, int);

class Obj600 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int);
    virtual void d8();
    virtual int m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
};

static inline char *ent600(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *chunk600(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent600(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" void func_003B7C40(char *p) {
    char *b;
    char *a;
    a = chunk600(*(char **)(p + 0x38), 0);
    b = chunk600(*(char **)(p + 0x38), 1);
    ((Obj600 *)(p + 0x40))->m24(1);
    if ((unsigned char)((Obj600 *)(p + 0x40))->m2C(b, a) == 0) {
        goto fail;
    }
    ((Obj600 *)(p + 0x40))->m3C(0);
    a = chunk600(*(char **)(p + 0x38), 2);
    b = chunk600(*(char **)(p + 0x38), 3);
    ((Obj600 *)(p + 0x640))->m24(1);
    if ((unsigned char)((Obj600 *)(p + 0x640))->m2C(b, a) == 0) {
        goto fail;
    }
    ((Obj600 *)(p + 0x640))->m3C(0);
    func_001A2000(func_00279290(p + 0x640), 4);
    func_001A2000(func_00279290(p + 0x640), 5);
    func_001A2000(func_00279290(p + 0x640), 6);
    func_001A2000(func_00279290(p + 0x640), 7);
    func_001A2000(func_00279290(p + 0x640), 8);
    func_001A2000(func_00279290(p + 0x640), 9);
    *(unsigned char *)(p + 0xC40) = 0;
    *(int *)(p + 0xC50) = 0;
    *(int *)(p + 0xC54) = 0;
    *(int *)(p + 0xC58) = 0;
    *(float *)(p + 0xC5C) = 1.0f;
    *(int *)(p + 0xC60) = 0;
    *(int *)(p + 0xC64) = 0;
    *(int *)(p + 0xC68) = 0;
    *(float *)(p + 0xC6C) = 1.0f;
    *(float *)(p + 0xC70) = 1.0f;
    *(float *)(p + 0xC74) = 1.0f;
    *(float *)(p + 0xC78) = 1.0f;
    *(float *)(p + 0xC7C) = 1.0f;
    UNIT(p + 0xC80);
    func_00131700(p + 0xC80, p + 0xC80, p + 0xC60);
    func_00105230(p + 0xC80, p + 0xC80, p + 0xC50);
    func_001318E0(p + 0xC80, p + 0xC80, p + 0xC70);
    *(signed char *)(p + 0xD01) = -1;
    *(unsigned char *)(p + 0xD00) = 1;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 1;
    *(short *)(p + 0xD08) = 0;
    *(short *)(p + 0xD06) = 0;
    *(short *)(p + 0xD0C) = 0;
    *(short *)(p + 0xD0A) = 0;
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 3;
}

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

class VD0_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_003B85E0(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 64))->m();
    tmp0 = ((VD0_0_i *)(p0 + 1600))->m();
    return tmp0;
}
}
