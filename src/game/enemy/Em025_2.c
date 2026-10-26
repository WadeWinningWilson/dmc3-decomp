int func_0024E800(char *);

void func_002965E0(char *, int);

void func_0029FD40(char *);

void func_0029C350(char *p) {
    if (func_0024E800(p + 0x8980) != 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

void func_0029CAD0(char *p) {
    if (func_0024E800(p + 0x8980) != 0 || *(unsigned char *)(p + 0x8922) == 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

void func_0024DA80(char *, int, int);

void func_0029DCE0(char *p, int k) {
    *(int *)(p + 0xA92C) = k;
    func_0024DA80(p + 0x8980, 0, *(int *)(p + 0xA92C));
    func_0024DA80(p + 0x8A50, 0, *(int *)(p + 0xA92C));
    func_0024DA80(p + 0x8B20, 0, *(int *)(p + 0xA92C));
    func_0024DA80(p + 0x8BF0, 0, *(int *)(p + 0xA92C));
}

int func_0024E780(char *, int, int);

void func_0024E7B0(char *, int, int);

void func_0029C860(char *p) {
    switch ((unsigned char)func_0024E780(p + 0x8980, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x8980, 0, 0);
        *(float *)(p + 0x8924) = 1.0f;
        *(int *)(p + 0x9644) = 0;
        *(unsigned char *)(p + 5) = 0x1F;
    }
    if (func_0024E800(p + 0x8980) != 0 || *(unsigned char *)(p + 0x8922) == 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

void func_002A0100(char *p);

void func_0029DCE0(char *, int);

void func_0029B250(char *);

int func_002A4030(char *);

void func_0029DD80(char *, int, int);

void func_00299E80(char *p) {
    if (*(unsigned char *)(p + 0x8920) == 0) {
        func_0029B250(p);
        return;
    }
    switch (func_002A4030(p)) {
    case 0:
        *(unsigned char *)(p + 5) = 0x16;
        func_0029DD80(p, 0x28, 10);
        return;
    case 1:
        func_0029DCE0(p, 0x1E);
        break;
    case 2:
        func_0029DCE0(p, 0x1F);
        break;
    }
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA988) = 0;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x15;
}

void func_0029C760(char *);

void func_00299E80(char *p);

void func_0029C3B0(char *p) {
    if (*(unsigned char *)(p + 0x8922) == 0) {
        func_00299E80(p);
        return;
    }
    switch (func_002A4030(p)) {
    case 2:
        *(unsigned char *)(p + 5) = 0x1D;
        func_0029DD80(p, 0x2A, 10);
        func_0029C760(p);
        return;
    case 0:
        func_0029DCE0(p, 0x1E);
        break;
    case 1:
        func_0029DCE0(p, 0x1F);
        break;
    }
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA988) = 0;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x1C;
}

int func_002A4A40(char *);

extern float D_00561DA0[][3];

void func_00322030(char *, int);

void func_0029C760(char *p) {
    void func_002A0090(char *);
    int k;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 1;
    func_002A0090(p);
    *(unsigned char *)(p + 0xAA91) = 1;
    k = func_002A4A40(p);
    *(float *)(p + 0x8924) = ((float *)D_00561DA0[k])[*(int *)(p + 0x8928)];
    if (*(unsigned char *)(p + 0x8922) == 1) {
        if (*(int *)(p + 0x8928) == 0) {
            func_00322030(p, 0);
        } else {
            func_00322030(p, 1);
        }
    }
    *(unsigned char *)(p + 5) = 0x1E;
    *(int *)(p + 0xAA9C) = 0;
    *(unsigned char *)(p + 0xA563) = 3;
}

void func_0029C3B0(char *p);

void func_0029B250(char *p) {
    if (*(unsigned char *)(p + 0x8921) == 0) {
        func_0029C3B0(p);
        return;
    }
    switch (func_002A4030(p)) {
    case 1:
        *(unsigned char *)(p + 5) = 0x19;
        func_0029DD80(p, 0x23, 10);
        return;
    case 2:
        func_0029DCE0(p, 0x1E);
        break;
    case 0:
        func_0029DCE0(p, 0x1F);
        break;
    }
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA988) = 0;
    *(unsigned char *)(p + 0xAA91) = 1;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x18;
}

void func_00292090(char *);

void func_00299DE0(char *p, int a) {
    unsigned char t;
    if (a) {
        t = *(unsigned char *)(p + 0xA8FA);
        *(unsigned char *)(p + 0xA8FA) = *(unsigned char *)(p + 0xA8F9);
        *(unsigned char *)(p + 0xA8F9) = *(unsigned char *)(p + 0xA8F8);
        *(unsigned char *)(p + 0xA8F8) = t;
    } else {
        t = *(unsigned char *)(p + 0xA8F8);
        *(unsigned char *)(p + 0xA8F8) = *(unsigned char *)(p + 0xA8F9);
        *(unsigned char *)(p + 0xA8F9) = *(unsigned char *)(p + 0xA8FA);
        *(unsigned char *)(p + 0xA8FA) = t;
    }
    func_00292090(p);
}

void func_0013D6A0();

char * func_00291050(p) char *p; {
    *(int *)(p + 8) = 1050253722;
    *(int *)(p + 12) = 1065017672;
    *(int *)(p + 16) = 1064514355;
    *(int *)(p + 20) = 1112014848;
    *(int *)(p + 32) = 0;
    *(int *)(p + 36) = 3184315597;
    *(int *)(p + 40) = 0;
    *(int *)(p + 44) = 0;
    *(int *)(p + 4) = 0;
    func_0013D6A0(p + 52, 1050253722);
    *(int *)(p) = 0;
    *(int *)(p + 48) = 0;
    *(int *)(p + 100) = 3379831792;
    *(int *)(p + 80) = 0;
    *(int *)(p + 84) = 0;
    *(int *)(p + 88) = 0;
    *(int *)(p + 92) = 0;
    *(int *)(p + 96) = 0;
    *(int *)(p + 104) = 1065353216;
    return p;
}

int func_00291100(p0) char *p0; {
    int v0;
    int v1;
    char *v2;
    *(char *)(p0 + 0) = 0;
    *(char *)(p0 + 1) = 0;
    *(short *)(p0 + 2) = 0;
    *(int *)(p0 + 8) = 0;
    v1 = 0;
    *(int *)(p0 + 12) = 0;
    v2 = p0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 36) = 0;
    *(int *)(p0 + 40) = 0;
    *(int *)(p0 + 44) = 0x3f800000;
    *(int *)(p0 + 48) = 0x47c35000;
    *(char *)(p0 + 52) = 0;
    *(char *)(p0 + 53) = 0;
    *(short *)(p0 + 54) = 0;
    v0 = -1;
    do {
        *(short *)(v2 + 56) = v0;
        *(short *)(v2 + 58) = v0;
        v1 = (v1 + 5);
        *(short *)(v2 + 60) = v0;
        *(short *)(v2 + 62) = v0;
        *(short *)(v2 + 64) = v0;
        v2 = (v2 + 10);
    } while ((v1 < 10));
    return (int)p0;
}

int func_0029B5B0(p0) int p0; {
    int func_002A0090();
    int tmp0;
    tmp0 = func_002A0090();
    *(char *)((char *)p0 + 5) = 26;
    *(char *)((char *)p0 + 38464) = 0;
    *(int *)((char *)p0 + 38468) = 0;
    *(int *)((char *)p0 + 43676) = 0;
    *(char *)((char *)p0 + 42339) = 2;
    return tmp0;
}

extern void func_002A47D0();

void func_002A4BD0(char *p) { func_002A47D0(p + -64); }

extern void func_002A47B0();

void func_002A4BE0(char *p) { func_002A47B0(p + -64); }

extern void func_002A3F90();

void func_002A4BF0(char *p) { func_002A3F90(p + -64); }

extern void func_00291180();

void func_002A4C20(char *p) { func_00291180(p + -64); }

void func_002A4C30(char *p) { func_00291180(p + -160); }

void func_002A4C40(char *p) { func_00291180(p + -208); }

extern void func_002A4900();

void func_002A4C50(char *p) { func_002A4900(p + -304); }

extern void func_002A3FF0();

void func_002A4C60(char *p) { func_002A3FF0(p + -304); }

void func_002A4C70(char *p) { func_002A3F90(p + -304); }

void func_002A4C90(char *p) { func_00291180(p + -304); }

extern void func_002A4A30();

void func_002A4CA0(char *p) { func_002A4A30(p + -464); }

extern void func_002A4A20();

void func_002A4CB0(char *p) { func_002A4A20(p + -464); }

extern void func_002A4A10();

void func_002A4CC0(char *p) { func_002A4A10(p + -464); }

extern void func_002A4A00();

void func_002A4CD0(char *p) { func_002A4A00(p + -464); }

extern void func_002A49F0();

void func_002A4CE0(char *p) { func_002A49F0(p + -464); }

extern void func_002A49E0();

void func_002A4CF0(char *p) { func_002A49E0(p + -464); }

void func_002A4D20(char *p) { func_00291180(p + -464); }

void func_002A48F0(void) {}
