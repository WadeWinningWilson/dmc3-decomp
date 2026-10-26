extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013D5D0(char *);

class ObjD0 {
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
    virtual void mD0();
};

extern "C" void func_004FF910(char *p) {
    int i;
    if (*(int *)(p + 0x8C) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x8C));
        *(int *)(p + 0x8C) = 0;
    }
    if (*(int *)(p + 0x90) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x90));
        *(int *)(p + 0x90) = 0;
    }
    for (i = 0; i < 3; i++) {
        ((ObjD0 *)(p + i * 0x600 + 0xC0))->mD0();
    }
    {
        int j;
        for (j = 0; j < *(int *)(p + 0x38); j++) {
            func_0013D5D0(p + j * 16 + 0x3C);
        }
    }
}

class VCC_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_004FF9D0(char *p0) {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    if ((*(unsigned char *)(p0 + 4) < 3)) {
        v0 = 0;
        v1 = p0;
        v2 = (int)(p0 + 5024);
        v3 = (int)(p0 + 4896);
        do {
            if (v0 == 2) {
                v4 = ((VCC_1_ii *)(v1 + 192))->m(v2);
            } else {
                v4 = ((VCC_1_ii *)(v1 + 192))->m(v3);
            }
            v0 = (v0 + 1);
            v1 = (v1 + 1536);
        } while ((v0 < 3));
    }
    return v4;
}
}

extern "C" {
void func_00501300(char *, char *);
}

extern "C" {
void func_005014F0(char *, char *);
}

extern "C" {
void func_005019F0(char *, char *);
}

extern "C" {
void func_00501F60(char *, char *);
}

extern "C" {
void func_005023A0(char *, char *);
}

extern "C" {
void func_00502B90(char *, char *);
}

class VC8_1_pi {
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
    virtual int m(char *);
};

extern "C" {
int func_00500FA0(int p0) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int tmp0;
    v0 = (char *)p0;
    v1 = 0;
    v2 = v0;
    do {
        if (*(unsigned char *)(v2 + 5101) != 0) {
            v3 = *(signed char *)(v2 + 5103);
            switch (v3) {
            case 0:
                func_00501300(v0, (v2 + 5101));
                break;
            case 1:
                func_005014F0(v0, (v2 + 5101));
                break;
            case 2:
                func_005019F0(v0, (v2 + 5101));
                break;
            case 3:
                func_00501F60(v0, (v2 + 5101));
                break;
            case 4:
                func_00502B90(v0, (v2 + 5101));
                break;
            case 5:
                func_005023A0(v0, (v2 + 5101));
                break;
            }
        }
        v1 = (v1 + 1);
        v2 = (v2 + 6);
    } while ((v1 < 6));
    tmp0 = ((VC8_1_pi *)(v0 + 1728))->m((v0 + 4896));
    return tmp0;
}
}
