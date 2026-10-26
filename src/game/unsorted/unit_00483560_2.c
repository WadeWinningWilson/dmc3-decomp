void func_00483620(char *);

typedef struct { short a; signed char c; signed char d; short e; } ret6;

ret6 func_00483CF0(char *, int, int);

void func_00483760(char *p) {
    func_00483620(p);
    if (*(unsigned char *)(p + 0xD3) != 0) {
        ret6 s = func_00483CF0(p, *(signed char *)(p + 0xD2), *(short *)(p + 0xD0));
        ((int *)p)[s.c] |= 1 << s.d;
    }
}

extern short D_00586260[][47];

short func_004838E0(int x, int a) {
    return D_00586260[a / 100][a % 100];
}

extern char D_01CAFF0C[];

int func_004836A0(char *, int, int);

static inline unsigned char g44(void) {
    char *e = *(char **)(*(char **)D_01CAFF0C + 4);
    if (e != 0) {
        return *(unsigned char *)(e + 0x44);
    }
    return 0;
}

int func_004844D0(char *a, int b, int id) {
    int r = id;
    switch ((short)id) {
    case 0x9:
        if ((unsigned char)func_004836A0(a, b, 0xA) == 1) {
            r = 0xA;
        }
        break;
    case 0x2:
        if ((unsigned char)func_004836A0(a, b, 0xB) == 1) {
            r = 0xB;
        }
        break;
    case 0x16:
        if (!g44() && (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x10)) {
            r = 0x39;
        }
        break;
    case 0x36:
        if (*(short *)(a + 0xD0) == 0x38) {
            r = 0x38;
        }
        break;
    case 0x63:
        if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x4000) {
            r = 0x6B;
        }
        break;
    case 0x64:
        if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x4000) {
            r = 0x6C;
        }
        break;
    case 0x65:
        if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x4000) {
            r = 0x6D;
        }
        break;
    case 0x66:
        if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x4000) {
            r = 0x6E;
        }
        break;
    case 0x67:
        if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x4000) {
            r = 0x6F;
        }
        break;
    case 0x70:
        if (*(short *)(a + 0xD0) == 0x79) {
            r = 0x79;
        }
        break;
    case 0x73:
        {
            short k = *(short *)(a + 0xD0);
            if (k == 0x7A) {
                r = 0x7A;
            }
            if (k == 0x7B) {
                r = 0x7B;
            }
            if (k == 0x7C) {
                r = 0x7C;
            }
            if (k == 0x7D) {
                r = 0x7D;
            }
            if (k == 0x7E) {
                r = 0x7E;
            }
            if (k == 0x7F) {
                r = 0x7F;
            }
            if (k == 0x80) {
                r = 0x80;
            }
            if (k == 0x81) {
                r = 0x81;
            }
            if (k == 0x82) {
                r = 0x82;
            }
        }
        break;
    case 0x5:
        if (*(short *)(a + 0xD0) == 0x84) {
            r = 0x84;
        }
        break;
    case 0x19:
        if (*(short *)(a + 0xD0) == 0x85) {
            r = 0x85;
        }
        break;
    case 0x27:
        if (*(short *)(a + 0xD0) == 0x86) {
            r = 0x86;
        }
        break;
    case 0x62:
        if (*(short *)(a + 0xD0) == 0x87) {
            r = 0x87;
        } else if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x684) & 0x4000) {
            r = 0x6A;
        }
        break;
    case 0x44:
        if (*(short *)(a + 0xD0) == 0x88) {
            r = 0x88;
        }
        break;
    case 0x41:
        if (*(short *)(a + 0xD0) == 0x89) {
            r = 0x89;
        }
        break;
    case 0x47:
        if (*(short *)(a + 0xD0) == 0x8A) {
            r = 0x8A;
        }
        break;
    case 0x56:
        if (*(short *)(a + 0xD0) == 0x8B) {
            r = 0x8B;
        }
        break;
    case 0x59:
        if (*(short *)(a + 0xD0) == 0x8C) {
            r = 0x8C;
        }
        break;
    case 0x3A:
        if (*(short *)(a + 0xD0) == 0x8D) {
            r = 0x8D;
        }
        break;
    case 0x34:
        if (*(short *)(a + 0xD0) == 0x8E) {
            r = 0x8E;
        }
        break;
    case 0x72:
        if (*(short *)(a + 0xD0) == 0x8F) {
            r = 0x8F;
        }
        break;
    }
    return r;
}

int func_00483740(p0, p1) int p0; int p1; {
    return (*(int *)((char *)(p0 + ((signed char)p1 << 2)) + 0) != 0);
}

extern char D_005B6EB0[];

extern char D_005B6ED4[];

extern char D_005B6F54[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

int func_002E7840();

int func_002E8A10();

int func_00484AC0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B6EB0;
    *(char **)((char *)p0 + 64) = D_005B6ED4;
    *(char **)((char *)p0 + 160) = D_005B6F54;
    func_0028C110((p0 + 416));
    func_002790E0((p0 + 1152));
    func_002E7840((p0 + 2704));
    func_002E8A10((p0 + 2772));
    *(char *)((char *)p0 + 2804) = 0;
    return p0;
}
