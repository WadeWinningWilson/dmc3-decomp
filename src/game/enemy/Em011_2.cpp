extern "C" int func_0024E800(char *);

extern "C" char D_01DF5D20[];

extern "C" void func_0024DD30(char *);

extern "C" void func_0033B710(char *);

extern "C" void func_003369C0(char *);

extern "C" void func_00336E60(char *);

extern "C" void func_00337330(char *);

extern "C" void func_00337730(char *);

extern "C" void func_00337A30(char *);

extern "C" void func_00337D50(char *);

extern "C" void func_00337EC0(char *);

extern "C" void func_00337FF0(char *);

extern "C" void func_00338130(char *);

extern "C" void func_003382D0(char *);

extern "C" void func_00338410(char *);

extern "C" void func_00338540(char *);

extern "C" void func_00338640(char *);

extern "C" void func_00338740(char *);

extern "C" void func_003388D0(char *);

extern "C" void func_003389A0(char *);

extern "C" void func_00338C30(char *);

extern "C" void func_00338D00(char *);

extern "C" void func_00338E50(char *);

extern "C" void func_00338FF0(char *);

extern "C" void func_00339180(char *);

extern "C" void func_00339320(char *);

extern "C" void func_00339700(char *);

extern "C" void func_00339830(char *);

extern "C" void func_00339950(char *);

extern "C" void func_00339A80(char *);

extern "C" void func_00339B80(char *);

extern "C" void func_00339C40(char *);

extern "C" void func_00339D60(char *);

extern "C" void func_00339E80(char *);

extern "C" {
void func_0033A350(char *p);
}

extern "C" void func_003366A0(char *p) {
    int i;
    if (!(*(float *)(p + 0x1290) <= 0.0f)) {
        *(float *)(p + 0x1290) = *(float *)(p + 0x1290) - *(float *)D_01DF5D20;
        return;
    }
    for (i = 0; i < 1; i++) func_0024DD30(p + i * 0xD0 + 0xDF0);
    switch (*(unsigned char *)(p + 0x1394)) {
    case 0:
        func_003369C0(p);
        break;
    case 1:
        func_00337330(p);
        break;
    case 2:
        func_00337730(p);
        break;
    case 3:
        func_00337A30(p);
        break;
    case 4:
        func_00336E60(p);
        break;
    case 8:
        func_00338640(p);
        break;
    case 5:
        func_00337D50(p);
        break;
    case 6:
        func_00337D50(p);
        break;
    case 7:
        func_00337EC0(p);
        break;
    case 9:
        func_00337FF0(p);
        break;
    case 10:
        func_00338130(p);
        break;
    case 11:
        func_003382D0(p);
        break;
    case 12:
        func_00338410(p);
        break;
    case 13:
        func_00338540(p);
        break;
    case 14:
        func_00338740(p);
        break;
    case 15:
        func_003388D0(p);
        break;
    case 16:
        func_003389A0(p);
        break;
    case 17:
        func_00338C30(p);
        break;
    case 18:
        func_00338D00(p);
        break;
    case 19:
        func_00338E50(p);
        break;
    case 20:
        func_00338FF0(p);
        break;
    case 21:
        func_00339180(p);
        break;
    case 22:
        func_00339320(p);
        break;
    case 23:
        func_00339700(p);
        break;
    case 24:
        func_00339830(p);
        break;
    case 25:
        func_00339950(p);
        break;
    case 26:
        func_00339A80(p);
        break;
    case 27:
        func_00339B80(p);
        break;
    case 28:
        func_00339C40(p);
        break;
    case 29:
        func_00339D60(p);
        break;
    case 30:
        func_00339E80(p);
        break;
    case 31:
        func_0033A350(p);
        break;
    case 32:
        break;
    }
    switch (*(unsigned char *)(p + 0x1394)) {
    case 0x1E: case 0x1F:
        break;
    default:
        *(float *)(p + 0x1354) = 1.0f;
        break;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(*(char **)(*(char **)(p + 0x660) + 0x100)) : "memory");
    if (*(unsigned char *)(p + 0x134F)) {
        if ((unsigned char)func_0024E800(p + 0xDF0) == 0) func_0033B710(p);
    }
}

class O3C0 {
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
    virtual void m6C();
    virtual void m70();
};

extern "C" void func_00335EF0(char *p, short lim) {
    ((O3C0 *)(p + 0x130))->m6C();
    ((O3C0 *)(p + 0x130))->m70();
    {
        short t = *(short *)(p + 0x160);
        short v = t - *(short *)(p + 0x90);
        if (lim < v) v = lim;
        else if (v < -lim) v = -lim;
        *(short *)(p + 0x90) += v * *(float *)(p + 0x10);
    }
}
