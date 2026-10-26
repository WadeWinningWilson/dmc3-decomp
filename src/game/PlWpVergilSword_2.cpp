extern "C" char D_00549910[];

extern "C" void func_001AD100(char *);

extern "C" void func_0028B610(char *);

extern "C" void func_003C95E0(char *);

extern "C" int func_0028B8E0(char *);

extern "C" int func_0028B620(char *);

extern "C" void func_0028BA90(char *, char *, char *, unsigned char);

extern "C" void func_003023F0(char *);

extern "C" void func_0028BF50(char *);

class ObjB00 {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void q8();
    virtual void q9();
    virtual void q10();
    virtual void q11();
    virtual void q12();
    virtual void q13();
    virtual void q14();
    virtual void q15();
    virtual void q16();
    virtual void q17();
    virtual void q18();
    virtual void q19();
    virtual void q20();
    virtual void q21();
    virtual void q22();
    virtual void q23();
    virtual void q24();
    virtual void q25();
    virtual void q26();
    virtual void q27();
    virtual void q28();
    virtual void q29();
    virtual void q30();
    virtual void q31();
    virtual void q32();
    virtual void q33();
    virtual void q34();
    virtual void q35();
    virtual void q36();
    virtual void q37();
    virtual void q38();
    virtual void q39();
    virtual void q40();
    virtual void q41();
    virtual void mB0(int, char *);
    virtual void mB4(int, int, int, int);
    virtual void q44();
    virtual void mBC(float);
};

extern "C" void func_003C9860(char *p) {
    unsigned char k;
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0028B610(p);
        func_003C95E0(p);
        *(char **)(p + 0xE4) = D_00549910;
        *(unsigned char *)(p + 0xDC) = 0;
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(unsigned char *)(p + 5) = 0;
    case 1:
        if ((unsigned char)func_0028B8E0(p) == 0) {
            return;
        }
        k = ((unsigned char)func_0028B620(p) == 0) ? 1 : *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        func_0028BA90(p, p + 0x1700, p + 0x1740, k);
        if (k != 1 && *(unsigned char *)(*(char **)(p + 0xE0) + 0x24EB) != 0 && *(char **)(p + 0x1800) != 0) {
            func_003023F0(*(char **)(p + 0x1800));
        }
        if (*(unsigned char *)(p + 0xDC) == 1) {
            ((ObjB00 *)(p + 0xB00))->mBC(*(float *)(p + 0x10));
        }
        switch (*(signed char *)(p + 0xDA)) {
        case -1:
            break;
        default:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) || *(unsigned char *)(p + 0xDC) == 1) {
                ((ObjB00 *)(p + 0xB00))->mB0(*(int *)(p + 0x1CC), p + 0x1C4);
            }
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case 6:
        case 7:
        case 8:
        case 0x16:
        case 0x33:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2)) {
                ((ObjB00 *)(p + 0xB00))->mB4(*(signed char *)(p + 0xDA) - 1, 0, 0, 0);
                *(unsigned char *)(p + 0xDC) = 1;
            }
            break;
        }
        func_0028BF50(p);
        break;
    }
}
