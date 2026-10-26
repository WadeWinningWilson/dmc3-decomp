extern char D_01DFABA0[];

char *func_00279290(char *);

extern char D_01DFA340[];

extern char D_006663C0[];

void func_0030EA90(char *, int);

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

void func_001A2D70(char *, int, int);

unsigned short func_001AE1E0(char *, int);

unsigned short func_001AE1A0(char *, int);

extern int D_00569940[];

extern int D_00569960[];

void func_003DE720(char *p) {
    int i;
    if (func_001AE1A0(D_006663C0, 0) & 0x2000) {
        if (*(short *)(p + 0x3D0E) < 100) (*(short *)(p + 0x3D0E))++;
    } else {
        *(short *)(p + 0x3D0E) = 0;
    }
    if (func_001AE1A0(D_006663C0, 0) & 0x8000) {
        if (*(short *)(p + 0x3D10) < 100) (*(short *)(p + 0x3D10))++;
    } else {
        *(short *)(p + 0x3D10) = 0;
    }
    if (func_001AE360(D_006663C0, 0) & 0x1000) {
        if (*(signed char *)(p + 0x3D02) > 0) {
            (*(signed char *)(p + 0x3D02))--;
        } else {
            *(signed char *)(p + 0x3D02) = 2;
        }
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
    }
    if (func_001AE360(D_006663C0, 0) & 0x4000) {
        if (*(signed char *)(p + 0x3D02) < 2) {
            (*(signed char *)(p + 0x3D02))++;
        } else {
            *(signed char *)(p + 0x3D02) = 0;
        }
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
    }
    if (func_001AE1E0(D_006663C0, 0) & 0x40) {
        *(unsigned char *)(p + 4) = 2;
        func_003303F0(D_01DFABA0, 0, 4, 0x40, 0);
        *(unsigned char *)(p + 0x3D01) = 1;
    }
    if (func_001AE1E0(D_006663C0, 0) & 0x10) {
        *(unsigned char *)(p + 4) = 2;
        func_003303F0(D_01DFABA0, 0, 3, 0x40, 0);
        *(unsigned char *)(p + 0x3D01) = 0;
    }
    for (i = 0; i < 3; i++) {
        if (i != *(signed char *)(p + 0x3D02)) {
            func_001A2D70(func_00279290(p + 0xC40), D_00569960[i * 7 + D_00569940[i * 2]], 0x80404040);
        } else {
            func_001A2D70(func_00279290(p + 0xC40), D_00569960[i * 7 + D_00569940[i * 2]], 0x80A0A0A0);
        }
    }
    func_0030EA90(D_01DFA340, 0x2F06);
}

extern char D_00666712[];

int func_003DE6D0();

int func_003DE690(char *p0) {
    signed char t0;
    int t1;
    *(char *)(p0 + 15618) = 0;
    t0 = *(signed char *)D_00666712;
    t1 = func_003DE6D0(p0, *(signed char *)D_00666712);
    *(char *)(p0 + 15618) = t1;
    return t1;
}

void func_003DEB50(void) {}
