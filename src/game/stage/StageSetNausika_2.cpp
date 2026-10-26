class VB4_4_iiiii {
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
    virtual int m(int, int, int, int);
};

extern "C" {
int func_004821D0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(signed char *)(p0 + 647);
    v2 = 1;
    if (v1 != 0) {
        if (v1 != v2) {
            v3 = ((VB4_4_iiiii *)(v0 + 1856))->m(0, 0, 0, 0);
        }
        *(char *)(v0 + 647) = 0;
        *(int *)(v0 + 676) = 0x41f00000;
        *(char *)(v0 + 5) = 0;
        *(int *)(v0 + 680) = 0;
    }
    return v3;
}
}

extern "C" {
int func_00482240(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(signed char *)(p0 + 647);
    if (v1 != 1) {
        if (v1 != 0) {
            v2 = ((VB4_4_iiiii *)(v0 + 1856))->m(4, 0, 0, 0);
        }
        *(char *)(v0 + 647) = 1;
        *(int *)(v0 + 676) = 0x42480000;
        *(char *)(v0 + 5) = 0;
    }
    return v2;
}
}

extern "C" {
int func_00482560(char *);
}

class VB4_4_iiiiv {
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
    virtual void m(int, int, int, int);
};

extern "C" {
int func_004822B0(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 647) != 2) {
        if (!(*(unsigned char *)(v0 + 645) < 3)) {
            ((VB4_4_iiiiv *)(v0 + 1856))->m(5, 0, 0, 0);
            *(int *)(v0 + 676) = 0x42200000;
        } else {
            if (*(float *)(v0 + 668) < 1000.0f) {
                ((VB4_4_iiiiv *)(v0 + 1856))->m(5, 0, 0, 0);
                *(int *)(v0 + 676) = 0x42200000;
            } else {
                ((VB4_4_iiiiv *)(v0 + 1856))->m(1, 0, 0, 0);
                *(int *)(v0 + 676) = 0x428a0000;
            }
        }
        *(char *)(v0 + 647) = 2;
        *(char *)(v0 + 5) = 0;
        v1 = func_00482560(v0);
    }
    return v1;
}
}
