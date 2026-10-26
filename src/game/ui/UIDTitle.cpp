class SubC8CC {
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
    virtual void mC8(char *);
    virtual void mCC(char *);
};

extern "C" void func_00326BA0(char *p) {
    char *q = p + 0x1880;
    ((SubC8CC *)(p + 0x1240))->mCC(q);
    ((SubC8CC *)(p + 0xC40))->mCC(q);
    ((SubC8CC *)(p + 0x640))->mCC(q);
    ((SubC8CC *)(p + 0x40))->mCC(q);
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001AD140(char *);

extern "C" unsigned short D_0055B420[][4];

extern "C" unsigned char D_01CB0518[];

extern "C" void func_001A1F90(char *);

extern "C" void func_00326C30(char *);

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

extern "C" void func_00325C60(char *p) {
    char *b;
    char *a;
    int i;
    for (i = 0; i < 4; i++) {
        a = chunk600(*(char **)(p + 0x38), D_0055B420[i][0]);
        b = chunk600(*(char **)(p + 0x38), D_0055B420[i][2]);
        if ((unsigned char)((Obj600 *)(p + i * 0x600 + 0x40))->m2C(b, a) == 0) {
            goto fail;
        }
        ((Obj600 *)(p + i * 0x600 + 0x40))->m3C(0);
    }
    func_001A1F90(func_00279290(p + 0xC40));
    func_001A1F90(func_00279290(p + 0x1240));
    *(unsigned char *)(p + 0x1840) = 0;
    *(int *)(p + 0x1850) = 0;
    *(int *)(p + 0x1854) = 0;
    *(int *)(p + 0x1858) = 0;
    *(float *)(p + 0x185C) = 1.0f;
    *(int *)(p + 0x1860) = 0;
    *(int *)(p + 0x1864) = 0;
    *(int *)(p + 0x1868) = 0;
    *(float *)(p + 0x186C) = 1.0f;
    *(float *)(p + 0x1870) = 1.0f;
    *(float *)(p + 0x1874) = 1.0f;
    *(float *)(p + 0x1878) = 1.0f;
    *(float *)(p + 0x187C) = 1.0f;
    UNIT(p + 0x1880);
    func_00131700(p + 0x1880, p + 0x1880, p + 0x1860);
    func_00105230(p + 0x1880, p + 0x1880, p + 0x1850);
    func_001318E0(p + 0x1880, p + 0x1880, p + 0x1870);
    if (D_01CB0518[0] == 0) {
        *(unsigned char *)(p + 0x1902) = 0;
    } else {
        *(unsigned char *)(p + 0x1902) = 1;
    }
    *(signed char *)(p + 0x1903) = -1;
    *(unsigned char *)(p + 0x1900) = 1;
    *(unsigned char *)(p + 5) = 0;
    func_00326C30(p);
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

extern "C" {
int func_00326B50(int p0) {
    int v2;
    char *v0;
    int v1;
    v2 = 0;
    v0 = (char *)p0;
    do {
        v1 = ((VD0_0_i *)(v0 + 64))->m();
        v2 = (v2 + 1);
        v0 = (v0 + 1536);
    } while ((v2 < 4));
    return v1;
}
}
