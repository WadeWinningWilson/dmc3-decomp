extern "C" void func_0024DA80(char *, int, int);

extern "C" int func_0024E800(char *);

extern "C" {
bool func_003A0F60(char *p);
}

extern "C" void func_0039D820(char *);

extern "C" void func_0039D840(char *);

extern "C" void func_0039D890(char *);

extern "C" unsigned char func_0039DDF0(char *, float);

extern "C" void func_003A02B0(char *, int);

extern "C" void func_003A06D0(char *);

extern "C" void func_003A0CD0(char *, int);

class O398 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual float m28(int);
};

static inline unsigned char both398(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_003985C0(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x57;
        func_0024DA80(p + 0x29D0, 0, 0x57);
        func_0024DA80(p + 0x2AA0, 0, 0x57);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 22.5f;
        *(float *)(p + 0x78) = 22.5f;
        *(float *)(p + 0x2E08) = 22.5f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 65.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 140.0f) != 1) {
            if (both398(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 45.0f) && f < 63.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 65.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

static inline unsigned char both398b(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00398AE0(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x59;
        func_0024DA80(p + 0x29D0, 0, 0x59);
        func_0024DA80(p + 0x2AA0, 0, 0x59);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 42.857143f;
        *(float *)(p + 0x78) = 42.857143f;
        *(float *)(p + 0x2E08) = 42.857143f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 70.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 150.0f) != 1) {
            if (both398b(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 55.0f) && f < 70.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 70.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

static inline unsigned char both398c(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00398850(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x58;
        func_0024DA80(p + 0x29D0, 0, 0x58);
        func_0024DA80(p + 0x2AA0, 0, 0x58);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 22.5f;
        *(float *)(p + 0x78) = 22.5f;
        *(float *)(p + 0x2E08) = 22.5f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 65.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 140.0f) != 1) {
            if (both398c(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 45.0f) && f < 63.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 65.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

static inline unsigned char both398d(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00398D70(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5A;
        func_0024DA80(p + 0x29D0, 0, 0x5A);
        func_0024DA80(p + 0x2AA0, 0, 0x5A);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 42.857143f;
        *(float *)(p + 0x78) = 42.857143f;
        *(float *)(p + 0x2E08) = 42.857143f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 70.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 150.0f) != 1) {
            if (both398d(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 55.0f) && f < 70.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 70.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}
