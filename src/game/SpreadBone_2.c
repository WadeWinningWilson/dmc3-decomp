extern char D_01CAFF0C[];

short func_0034B940(char *, char *);

void func_002CB910(char *p) {
    *(short *)(p + 0x2D28) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(short *)(p + 0x2D2A) = *(short *)(p + 0x2D28) - *(short *)(p + 0x90);
}

void func_002CEEA0(char *p, int n) {
    int func_0024DB10(char *, int, int, int, int, int, int);
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 2;
    if ((unsigned char)n > 0) {
        func_0024DB10(p + 0x2450, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x2520, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x25F0, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x26C0, 1, 0xB, 0x30, 0, 1, n);
        func_0024DB10(p + 0x2790, 1, 0xB, 0x30, 0, 1, n);
    } else {
        func_0024DA80(p + 0x2450, 1, 0xB);
        func_0024DA80(p + 0x2520, 1, 0xB);
        func_0024DA80(p + 0x25F0, 1, 0xB);
        func_0024DA80(p + 0x26C0, 1, 0xB);
        func_0024DA80(p + 0x2790, 1, 0xB);
    }
    func_002CB900(p, 0x13);
    *(unsigned char *)(p + 0x2CE4) = 0x13;
    *(unsigned char *)(p + 0x2CE5) = 0x13;
    *(unsigned char *)(p + 0x2CE6) = 0x13;
    *(unsigned char *)(p + 0x2CE7) = 0x13;
    *(unsigned char *)(p + 0x2CE8) = 0x13;
    func_00128488(p + 0x5AD, 0, 4);
}

char *func_00207480(int, int, char *, int);

int func_002CFA00(char *, float);

void func_0034B9A0(char *, short, float, float, float);

void func_002CE1F0(char *);

void func_002CC9E0(char *p) {
    func_0034B9A0(p + 0x50, *(short *)(p + 0x90), *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
    *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x68) < 0.5f) {
        *(float *)(p + 0x68) = 0.5f;
    }
    if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CE1F0(p);
    }
}

void func_002CA5F0(char *p, int a, int b, int c, int d) {
    void func_00128488(char *, int, int);
    void func_002CB900(char *, int);
    void func_0024DB10(char *, int, int, int, int, int, int);
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 0;
    *(unsigned char *)(p + 0x1E3) = 0;
    func_0024DB10(p + 0x2450, 0, 1, a, b, c, d);
    func_0024DB10(p + 0x2520, 0, 1, a, b, c, d);
    func_0024DB10(p + 0x25F0, 0, 1, a, b, c, d);
    func_0024DB10(p + 0x26C0, 0, 1, a, b, c, d);
    func_0024DB10(p + 0x2790, 0, 1, a, b, c, d);
    func_002CB900(p, 1);
    *(unsigned char *)(p + 0x2CE4) = 1;
    *(unsigned char *)(p + 0x2CE9) = 0;
    *(unsigned char *)(p + 0x2CE5) = 1;
    *(unsigned char *)(p + 0x2CEA) = 0;
    *(unsigned char *)(p + 0x2CE6) = 1;
    *(unsigned char *)(p + 0x2CEB) = 0;
    *(unsigned char *)(p + 0x2CE7) = 1;
    *(unsigned char *)(p + 0x2CEC) = 0;
    *(unsigned char *)(p + 0x2CE8) = 1;
    *(unsigned char *)(p + 0x2CED) = 0;
    func_00128488(p + 0x5AD, 0, 0x14);
}

char *func_002792A0(char *);

void func_002CAE70(char *);

static inline void set_jump(char *p, float h, float t, float z) {
    float v = 2.0f * h / t;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = v;
    *(float *)(p + 0x68) = z;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = -(v / t);
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 1.0f;
}

void func_002CA110(char *p, int a1) {
    int func_0024E800(char *);
    if (a1 != 0) {
        return;
    }
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        if (*(float *)(func_002792A0(p + 0x640) + 0x128) < 9.0f) {
            break;
        }
        set_jump(p, 100.0f, 15.0f, 0.0f);
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x64) = 0.0f;
        }
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
    case 1:
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x64) = 0.0f;
        }
        if ((unsigned char)func_0024E800(p + 0x2450) == 1) {
            func_002CAE70(p);
        }
    }
}

void func_002CB020(char *, int);

void func_002C9E50(char *p) {
    int func_0024E800(char *);
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        if (*(float *)(func_002792A0(p + 0x640) + 0x128) < 15.0f) {
            break;
        }
        set_jump(p, 200.0f, 28.0f, 5.0f);
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x64) = 0.0f;
        }
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
    case 1:
        func_0034B9A0(p + 0x50, *(short *)(p + 0x90), *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x64) = 0.0f;
        }
        if ((unsigned char)func_0024E800(p + 0x2450) == 1) {
            func_002CB020(p, 0);
        }
    }
}

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

typedef struct { signed char c[10]; } A10;

typedef struct { signed char c[2]; } B2;

extern A10 D_0054DA00;

extern B2 D_005BC224;

void func_002CF630(char *p, unsigned char k) {
    A10 a;
    B2 b;
    signed char *c;
    signed char ch;
    a = D_0054DA00;
    b = D_005BC224;
    if (k == 0) {
        c = a.c;
        for (ch = a.c[0]; ch != -1; ch = *c) {
            { char *o = func_00279290(p + 0x640); func_001A2000(o, *c); }
            c++;
        }
        c = b.c;
        for (ch = b.c[0]; ch != -1; ch = *c) {
            { char *o = func_00279290(p + 0x640); func_001A1E70(o, *c); }
            c++;
        }
    } else {
        c = a.c;
        for (ch = a.c[0]; ch != -1; ch = *c) {
            { char *o = func_00279290(p + 0x640); func_001A1E70(o, *c); }
            c++;
        }
        c = b.c;
        for (ch = b.c[0]; ch != -1; ch = *c) {
            { char *o = func_00279290(p + 0x640); func_001A2000(o, *c); }
            c++;
        }
    }
}

int func_002CDA30(char *p, int i) {
    int r;
    unsigned char k = *(unsigned char *)((char *)i + (int)p + 0x2CE4);
    if (k == 2 || k == 7) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

void func_002C7530(char *p);

void func_002C7520(char *);

void func_002C7710(char *);

void func_002C7EA0(char *);

void func_002C7FA0(char *);

void func_002C8A00(char *);

void func_002C8A10(char *);

void func_002C8A20(char *);

void func_002C7460(char *p) {
    switch (*(unsigned char *)(p + 0x2D7C)) {
    case 0: func_002C7520(p); break;
    case 1: func_002C7530(p); break;
    case 2: func_002C7710(p); break;
    case 3: func_002C7EA0(p); break;
    case 4: func_002C7FA0(p); break;
    case 5: func_002C8A00(p); break;
    case 6: func_002C8A10(p); break;
    case 7: func_002C8A20(p); break;
    }
}

void func_002CECC0(char *p, int k, int flag) {
    void func_0024DA80(char *, int, int);
    void func_00128488(char *, int, int);
    void func_0024DB10(char *, int, int, int, int, int, int);
    void func_002CB900(char *, int);
    *(unsigned char *)(p + 0x1E1) = 1;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 4;
    if ((int)(unsigned char)k > 0) {
        func_0024DB10(p + 0x2450, 1, 10, 0x2F, 0, 1, k);
        func_0024DB10(p + 0x2520, 1, 10, 0x2F, 0, 1, k);
        func_0024DB10(p + 0x25F0, 1, 10, 0x2F, 0, 1, k);
        func_0024DB10(p + 0x26C0, 1, 10, 0x2F, 0, 1, k);
        func_0024DB10(p + 0x2790, 1, 10, 0x2F, 0, 1, k);
    } else {
        func_0024DA80(p + 0x2450, 1, 10);
        func_0024DA80(p + 0x2520, 1, 10);
        func_0024DA80(p + 0x25F0, 1, 10);
        func_0024DA80(p + 0x26C0, 1, 10);
        func_0024DA80(p + 0x2790, 1, 10);
    }
    if ((unsigned char)flag == 1) {
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = -1.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
    }
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    func_002CB900(p, 0x12);
    *(unsigned char *)(p + 0x2CE4) = 0x12;
    *(unsigned char *)(p + 0x2CE5) = 0x12;
    *(unsigned char *)(p + 0x2CE6) = 0x12;
    *(unsigned char *)(p + 0x2CE7) = 0x12;
    *(unsigned char *)(p + 0x2CE8) = 0x12;
    func_00128488(p + 0x5AD, 0, 4);
}

extern unsigned char D_005BCA7C[];

void func_002CDA70(char *, int);

void func_002CDBB0(char *, int);

void func_002CDCF0(char *, int);

void func_002CDE30(char *);

void func_002CE070(char *);

void func_002CEC00(char *);

void func_002CF020(char *);

void func_002CF0E0(char *);

void func_002CE850(char *, int);

void func_002CD760(char *);

void func_002CEA60(char *);

void func_002CE9A0(char *);

void func_002CD800(char *);

void func_002CD8A0(char *);

void func_002C6920(char *p) {
    int i;
    if (*(unsigned char *)(p + 0x2CEE) == 0x34) return;
    for (i = 0; i < 5; i++) {
        switch (*(unsigned char *)(p + 0x2CEE)) {
        case 9: func_002CDA70(p, D_005BCA7C[*(unsigned char *)(p + 0x5C2)]); break;
        case 0x31: func_002CDBB0(p, D_005BCA7C[*(unsigned char *)(p + 0x5C2)]); break;
        case 8: func_002CDCF0(p, D_005BCA7C[*(unsigned char *)(p + 0x5C2)]); break;
        case 0xA: func_002CDE30(p); i = 5; break;
        case 0xD: func_002CE070(p); i = 5; break;
        case 0x11: func_002CEC00(p); i = 5; break;
        case 0x14: func_002CF020(p); i = 5; break;
        case 0x15: func_002CF0E0(p); i = 5; break;
        case 0x24: func_002CE850(p, D_005BCA7C[*(unsigned char *)(p + 0x5C2)]); i = 5; break;
        case 0x23: func_002CD760(p); i = 5; break;
        case 0x25: func_002CEA60(p); i = 5; break;
        case 0x26: func_002CE9A0(p); i = 5; break;
        case 0x2A: func_002CD800(p); i = 5; break;
        case 0x2B: func_002CD8A0(p); i = 5; break;
        }
        *(unsigned char *)(p + 0x2CEE) = 0x34;
    }
}

extern char D_005A77A0[];

extern char D_005AAA98[];

void func_0022C820();

void func_002E1BC0();

char *func_002C4540(char *p0) {
    *(char **)(p0 + 16) = D_005A77A0;
    func_0022C820();
    *(char **)(p0 + 16) = D_005AAA98;
    func_002E1BC0(p0);
    return p0;
}

void func_002CE4C0(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 0;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 4;
    func_0024DA80(p + 0x2450, 1, 17);
    func_0024DA80(p + 0x2520, 1, 17);
    func_0024DA80(p + 0x25F0, 1, 17);
    func_0024DA80(p + 0x26C0, 1, 17);
    func_0024DA80(p + 0x2790, 1, 17);
    func_002CB900(p, 0x19);
    *(char *)(p + 0x2CE4) = 0x19;
    *(char *)(p + 0x2CE5) = 0x19;
    *(char *)(p + 0x2CE6) = 0x19;
    *(char *)(p + 0x2CE7) = 0x19;
    *(char *)(p + 0x2CE8) = 0x19;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CAF60(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 0;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 0;
    *(char *)(p + 483) = 0;
    func_0024DA80(p + 9296, 0, 8);
    func_0024DA80(p + 9504, 0, 8);
    func_0024DA80(p + 9712, 0, 8);
    func_0024DA80(p + 9920, 0, 8);
    func_0024DA80(p + 10128, 0, 8);
    func_002CB900(p, 41);
    *(char *)(p + 11492) = 41;
    *(char *)(p + 11493) = 41;
    *(char *)(p + 11494) = 41;
    *(char *)(p + 11495) = 41;
    *(char *)(p + 11496) = 41;
    func_00128488(p + 1453, 0, 20);
}

void func_002CDFB0(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 0;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 4;
    func_0024DA80(p + 9296, 1, 4);
    func_0024DA80(p + 9504, 1, 4);
    func_0024DA80(p + 9712, 1, 4);
    func_0024DA80(p + 9920, 1, 4);
    func_0024DA80(p + 10128, 1, 4);
    func_002CB900(p, 12);
    *(char *)(p + 11492) = 12;
    *(char *)(p + 11493) = 12;
    *(char *)(p + 11494) = 12;
    *(char *)(p + 11495) = 12;
    *(char *)(p + 11496) = 12;
    func_00128488(p + 1453, 0, 4);
}

void func_002CE790(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 4;
    func_0024DA80(p + 9296, 1, 20);
    func_0024DA80(p + 9504, 1, 20);
    func_0024DA80(p + 9712, 1, 20);
    func_0024DA80(p + 9920, 1, 20);
    func_0024DA80(p + 10128, 1, 20);
    func_002CB900(p, 28);
    *(char *)(p + 11492) = 28;
    *(char *)(p + 11493) = 28;
    *(char *)(p + 11494) = 28;
    *(char *)(p + 11495) = 28;
    *(char *)(p + 11496) = 28;
    func_00128488(p + 1453, 0, 4);
}

void func_002CF260(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 0;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 0;
    *(char *)(p + 483) = 0;
    func_0024DA80(p + 9296, 2, 0);
    func_0024DA80(p + 9504, 2, 0);
    func_0024DA80(p + 9712, 2, 0);
    func_0024DA80(p + 9920, 2, 0);
    func_0024DA80(p + 10128, 2, 0);
    func_002CB900(p, 50);
    *(char *)(p + 11492) = 50;
    *(char *)(p + 11493) = 50;
    *(char *)(p + 11494) = 50;
    *(char *)(p + 11495) = 50;
    *(char *)(p + 11496) = 50;
    func_00128488(p + 1453, 0, 20);
}

int func_0024E520();

int func_002CA520();

int func_002CA0D0(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    v1 = func_0024E520((p0 + 9296));
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 4) {
        v1 = func_002CA520(v0);
    }
    return v1;
}

int func_002CA460(p0) char *p0; {
    void func_0024DA80();
    int func_002CB900();
    int tmp0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 1;
    *(char *)(p0 + 485) = 1;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((p0 + 9296), 0, 10);
    func_0024DA80((p0 + 9504), 0, 10);
    func_0024DA80((p0 + 9712), 0, 10);
    func_0024DA80((p0 + 9920), 0, 10);
    func_0024DA80((p0 + 10128), 0, 10);
    tmp0 = func_002CB900(p0, 51);
    *(char *)(p0 + 11492) = 51;
    *(char *)(p0 + 11497) = 0;
    *(char *)(p0 + 11493) = 51;
    *(char *)(p0 + 11498) = 0;
    *(char *)(p0 + 11494) = 51;
    *(char *)(p0 + 11499) = 0;
    *(char *)(p0 + 11495) = 51;
    *(char *)(p0 + 11500) = 0;
    *(char *)(p0 + 11496) = 51;
    *(char *)(p0 + 11501) = 0;
    return tmp0;
}

extern char D_00562740[];

int func_002CA8D0(p0) char *p0; {
    void func_0024DA80();
    int func_002CB900();
    char *v0;
    int v1;
    v0 = p0;
    if ((*(int *)((D_00562740 + (*(unsigned char *)(p0 + 11492) << 2)) + 0) & 16)) {
        *(char *)(v0 + 481) = 0;
        *(char *)(v0 + 484) = 0;
        *(char *)(v0 + 485) = 0;
        *(char *)(v0 + 482) = 0;
        *(char *)(v0 + 483) = 0;
        func_0024DA80((v0 + 9296), 0, 11);
        func_0024DA80((v0 + 9504), 0, 11);
        v1 = func_002CB900(v0, 34);
        *(char *)(v0 + 11493) = 34;
        *(char *)(v0 + 11492) = 34;
        *(char *)(v0 + 11498) = 0;
        *(char *)(v0 + 11497) = 0;
    }
    return v1;
}

int func_001AD140();

int func_002CB2E0();

int func_002CB640(p0) int p0; {
    char *v3;
    int v2;
    int v1;
    int v0;
    v3 = (char *)p0;
    v2 = func_002CB2E0();
    v0 = 0;
    if ((v2 & 255) == 0) {
        do {
            v1 = *(int *)(v3 + 12144);
            if (v1 != 0) {
                v2 = func_001AD140(v1);
                *(int *)(v3 + 12144) = 0;
            }
            v0 = (v0 + 1);
            v3 = (v3 + 4);
        } while ((v0 < 2));
    }
    return v2;
}

int func_002CE3A0();

int func_002CC520(p0) char *p0; {
    int func_0024E800();
    int v0;
    int v1;
    int tmp0;
    *(int *)(p0 + 11632) = 0x3f800000;
    v1 = func_0024E800((p0 + 9296));
    tmp0 = (v1 & 255);
    v0 = (int)p0;
    if (tmp0 == 1) {
        v1 = func_002CE3A0(v0);
    }
    return v1;
}

int func_002CE670();

int func_002CC650(p0) char *p0; {
    int func_0024E800();
    int v0;
    int v1;
    int tmp0;
    *(int *)(p0 + 11632) = 0x3f800000;
    v1 = func_0024E800((p0 + 9296));
    tmp0 = (v1 & 255);
    v0 = (int)p0;
    if (tmp0 == 1) {
        v1 = func_002CE670(v0);
    }
    return v1;
}

int func_002CCB30(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_0024E800((v0 + 9296));
    tmp0 = (v2 & 255);
    v1 = (int)v0;
    if (tmp0 == 1) {
        v2 = func_002CA520(v1);
        *(char *)(v0 + 11646) = 0;
    }
    return v2;
}

int func_002CEB20(p0) char *p0; {
    void func_0024DA80();
    int func_002CB900();
    int tmp0;
    *(int *)(p0 + 96) = 0;
    *(int *)(p0 + 100) = 0;
    *(int *)(p0 + 104) = 0;
    *(int *)(p0 + 108) = 0x3f800000;
    *(int *)(p0 + 112) = 0;
    *(int *)(p0 + 116) = 0;
    *(int *)(p0 + 120) = 0;
    *(int *)(p0 + 124) = 0x3f800000;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 3;
    *(char *)(p0 + 483) = 2;
    func_0024DA80((p0 + 9296), 1, 8, 0x3f800000);
    func_0024DA80((p0 + 9504), 1, 8);
    func_0024DA80((p0 + 9712), 1, 8);
    func_0024DA80((p0 + 9920), 1, 8);
    func_0024DA80((p0 + 10128), 1, 8);
    tmp0 = func_002CB900(p0, 16);
    *(char *)(p0 + 11492) = 16;
    *(char *)(p0 + 11493) = 16;
    *(char *)(p0 + 11494) = 16;
    *(char *)(p0 + 11495) = 16;
    *(char *)(p0 + 11496) = 16;
    return tmp0;
}

int func_002CF1A0(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 9296));
    if ((v1 & 255) == 1) {
        *(char *)(v0 + 1473) = 0;
        *(char *)(v0 + 11644) = 2;
        v1 = func_002CA520(v0);
    }
    *(int *)(v0 + 11632) = 0x3f800000;
    return v1;
}

int func_002CF200(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 9296));
    if ((v1 & 255) == 1) {
        *(char *)(v0 + 1473) = 0;
        *(char *)(v0 + 11644) = 2;
        *(char *)(v0 + 10339) = 11;
        v1 = func_002CA520(v0);
    }
    *(int *)(v0 + 11632) = 0x3f800000;
    return v1;
}

extern void func_002C4590();

void func_002CFBD0(char *p) { func_002C4590(p + -64); }

void func_002CFBE0(char *p) { func_002C4590(p + -160); }

void func_002CFC00(char *p) { func_002C4590(p + -208); }

extern void func_002C6C40();

void func_002CFC20(char *p) { func_002C6C40(p + -304); }

extern void func_002C6B60();

void func_002CFC30(char *p) { func_002C6B60(p + -304); }

void func_002CFC70(char *p) { func_002C4590(p + -304); }

void func_002CFC80(char *p) { func_002C4590(p + -464); }

void func_002CFB40(void) {}

float func_002C6B50(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 12072) = *(float *)(p1 + 44);
    return t0;
}

void func_002CBF30(char *p0) {
    *(int *)(p0 + 11952) = 0x41200000;
    *(char *)(p0 + 11884) = 1;
    *(int *)(p0 + 12048) = 0x41200000;
    *(char *)(p0 + 11980) = 1;
}

float func_002CFB50(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 12068);
    *(float *)(p1 + 0) = *(float *)(p0 + 12068);
    return t0;
}

float func_002CFB60(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 11732);
    *(float *)(p1 + 0) = *(float *)(p0 + 11732);
    return t0;
}

int func_002CB4E0();

int func_002CA970(char *p0, int p1, int p2, int p3) {
    void func_0024DA80();
    void func_002CB900();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((v0 + 9296), 0, 15);
    func_0024DA80((v0 + 9504), 0, 15);
    v1 = (p1 & 255);
    v2 = (int)(v0 + 9712);
    if (v1 == 0) {
        func_0024DA80(v2, 0, 15);
        func_0024DA80((v0 + 9920), 0, 15);
        func_0024DA80((v0 + 10128), 0, 15);
    }
    func_002CB900(v0, 46);
    v3 = 46;
    *(char *)(v0 + 11493) = v3;
    *(char *)(v0 + 11492) = v3;
    if (v1 == 0) {
        *(char *)(v0 + 11496) = v3;
        *(char *)(v0 + 11495) = v3;
        *(char *)(v0 + 11494) = v3;
    }
    tmp0 = func_002CB4E0(v0, 24576, 2, 158);
    return tmp0;
}

int func_002CAA50(char *p0, int p1, int p2, int p3) {
    void func_0024DA80();
    void func_002CB900();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((v0 + 9296), 0, 16);
    func_0024DA80((v0 + 9504), 0, 16);
    v1 = (p1 & 255);
    v2 = (int)(v0 + 9712);
    if (v1 == 0) {
        func_0024DA80(v2, 0, 16);
        func_0024DA80((v0 + 9920), 0, 16);
        func_0024DA80((v0 + 10128), 0, 16);
    }
    func_002CB900(v0, 47);
    v3 = 47;
    *(char *)(v0 + 11493) = v3;
    *(char *)(v0 + 11492) = v3;
    if (v1 == 0) {
        *(char *)(v0 + 11496) = v3;
        *(char *)(v0 + 11495) = v3;
        *(char *)(v0 + 11494) = v3;
    }
    tmp0 = func_002CB4E0(v0, -24575, 2, 158);
    return tmp0;
}

int func_002CB200(char *p0, int p1, int p2, int p3) {
    void func_0024DA80();
    void func_002CB900();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((v0 + 9296), 0, 3);
    func_0024DA80((v0 + 9504), 0, 3);
    v1 = (p1 & 255);
    v2 = (int)(v0 + 9712);
    if (v1 == 0) {
        func_0024DA80(v2, 0, 3);
        func_0024DA80((v0 + 9920), 0, 3);
        func_0024DA80((v0 + 10128), 0, 3);
    }
    func_002CB900(v0, 4);
    v3 = 4;
    *(char *)(v0 + 11493) = v3;
    *(char *)(v0 + 11492) = v3;
    if (v1 == 0) {
        *(char *)(v0 + 11496) = v3;
        *(char *)(v0 + 11495) = v3;
        *(char *)(v0 + 11494) = v3;
    }
    tmp0 = func_002CB4E0(v0, -32768, 2, 138);
    return tmp0;
}

int func_002CB320(char *p0, int p1, int p2, int p3) {
    void func_0024DA80();
    void func_002CB900();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((v0 + 9296), 0, 4);
    func_0024DA80((v0 + 9504), 0, 4);
    v1 = (p1 & 255);
    v2 = (int)(v0 + 9712);
    if (v1 == 0) {
        func_0024DA80(v2, 0, 4);
        func_0024DA80((v0 + 9920), 0, 4);
        func_0024DA80((v0 + 10128), 0, 4);
    }
    func_002CB900(v0, 5);
    v3 = 5;
    *(char *)(v0 + 11493) = v3;
    *(char *)(v0 + 11492) = v3;
    if (v1 == 0) {
        *(char *)(v0 + 11496) = v3;
        *(char *)(v0 + 11495) = v3;
        *(char *)(v0 + 11494) = v3;
    }
    tmp0 = func_002CB4E0(v0, 16384, 2, 138);
    return tmp0;
}

int func_002CB400(char *p0, int p1, int p2, int p3) {
    void func_0024DA80();
    void func_002CB900();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((v0 + 9296), 0, 5);
    func_0024DA80((v0 + 9504), 0, 5);
    v1 = (p1 & 255);
    v2 = (int)(v0 + 9712);
    if (v1 == 0) {
        func_0024DA80(v2, 0, 5);
        func_0024DA80((v0 + 9920), 0, 5);
        func_0024DA80((v0 + 10128), 0, 5);
    }
    func_002CB900(v0, 6);
    v3 = 6;
    *(char *)(v0 + 11493) = v3;
    *(char *)(v0 + 11492) = v3;
    if (v1 == 0) {
        *(char *)(v0 + 11496) = v3;
        *(char *)(v0 + 11495) = v3;
        *(char *)(v0 + 11494) = v3;
    }
    tmp0 = func_002CB4E0(v0, -16383, 2, 138);
    return tmp0;
}
