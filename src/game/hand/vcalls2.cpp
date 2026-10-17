/* Hand-matched C++ (virtual calls), continued: functions whose real signatures conflict with
 * declarations used in vcalls.cpp (e.g. the release routine func_001AD140 returns int). */

class ObjRel18 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18();
};

class ObjBCr {
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

extern "C" void func_001ACFE0(char *);
extern "C" void func_00440090(char *, int);

/* Release request: live objects (states 1/2) run their shutdown and become 3; state 4 is torn down now. */
extern "C" int func_001AD140(char *p) {
    switch (*(unsigned char *)(p + 0x18)) {
    case 1:
    case 2:
        ((ObjRel18 *)p)->m18();
        *(unsigned char *)(p + 0x18) = 3;
        break;
    case 4:
        func_001ACFE0(p);
        break;
    case 3:
    case 0:
        break;
    default:
        return 0;
    }
    return 1;
}

extern "C" void func_0043F570(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        break;
    case 1:
        r = ((ObjBCr *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_00440090(p, 0);
        }
        break;
    }
}

extern "C" char D_01DFABA0[];
extern "C" void func_003305E0(char *, int, int, char *, int, int, int);
extern "C" void func_00481E00(char *, int);
extern "C" void func_004821D0(char *);

extern "C" void func_00481570(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 0);
        func_003305E0(D_01DFABA0, 8, 0x71, p + 0x50, 0x28, 0, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        r = ((ObjBCr *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_004821D0(p);
        }
    }
}

extern "C" void func_00481F20(char *);
extern "C" void func_00481310(char *);

extern "C" void func_00481490(char *p) {
    unsigned char r;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(float *)(p + 0x2A4) = *(float *)(p + 0x2A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2A4) < 0.0f) {
            func_00481F20(p);
            *(unsigned char *)(p + 0x284) = 1;
            func_003305E0(D_01DFABA0, 8, 0x6B, p + 0x50, 0x28, 0, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
    case 1:
        func_00481310(p);
        r = ((ObjBCr *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            func_004821D0(p);
        }
    }
}

class AnimF2 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

extern "C" char *func_00207480(int, int, char *, int);
extern "C" int func_0024E800(char *);

extern "C" void func_0038F300(char *, int);
extern "C" void func_0038F2C0(char *, int);

/* Arms the hit window once the clip passes frame 149, then exits through state 8 on motion end. */
extern "C" void func_00421B00(char *p) {
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (149.0f <= (*(float *)(p + 0x414) = ((AnimF2 *)(p + 0x604))->m28(0))) {
            func_00207480(3, 0x194, p + 0x3D0, 16);
            *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x1000;
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F2C0(p, 8);
        }
    }
}
