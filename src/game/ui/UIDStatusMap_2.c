void func_001AD140(char *);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

int func_00478B20(char *);

void func_00478E00(char *);

int func_0047A710(char *);

int func_0047AB90(char *);

int func_0047C020(char *);

void func_004791E0(char *);

void func_004796D0(char *);

void func_0047A2F0(char *);

void func_0047A4C0(char *);

void func_0047C4F0(char *);

static inline int ok478(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

void func_00478480(char *p) {
    int i;
    int c;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        if ((unsigned char)func_00478B20(p) == 0) goto bad;
        func_00478E00(p);
        for (i = 0; i < 16; i++) {
            c = *(signed char *)(p + i + 0x9850);
            if (c == -1) break;
            if (c == *(signed char *)(p + 0x9798)) *(short *)(p + 0x978E) = i;
        }
        *(unsigned char *)(p + 0x978A) |= 0x12;
        *(unsigned char *)(p + 0x97A0) = 1;
        *(unsigned char *)(p + 0x97A7) = 1;
        *(unsigned char *)(p + 0x9789) = 0;
        *(unsigned char *)(p + 4) = 1;
        break;
    case 1:
        if ((unsigned char)func_0047A710(p) == 0) goto bad;
        if ((unsigned char)func_0047AB90(p) == 0) goto bad;
        if ((unsigned char)func_0047C020(p) == 0) goto bad;
        if (*(unsigned char *)(p + 0x97A6) == 1 && *(unsigned char *)(p + 0x979F) == 1 && *(unsigned char *)(p + 0x97AD) == 1) {
            *(unsigned char *)(p + 4) = 2;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x9789) == 1) {
            *(unsigned char *)(p + 4) = 4;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 3:
        func_004791E0(p);
        func_0047A2F0(p);
        if ((unsigned char)func_0047A710(p) == 0) goto bad;
        if ((unsigned char)func_0047AB90(p) == 0) goto bad;
        if ((unsigned char)func_0047C020(p) == 0) goto bad;
        break;
    case 4:
        func_004796D0(p);
        func_0047A2F0(p);
        func_0047A4C0(p);
        if ((unsigned char)func_0047A710(p) == 0) goto bad;
        if ((unsigned char)func_0047AB90(p) == 0) goto bad;
        if ((unsigned char)func_0047C020(p) == 0) goto bad;
        break;
    case 5:
        break;
    case 6:
        if (*(char **)(p + 0x3C) != 0 && (unsigned char)ok478(*(unsigned char **)(p + 0x3C)) == 0) break;
        if (*(char **)(p + 0x40) != 0 && (unsigned char)ok478(*(unsigned char **)(p + 0x40)) == 0) break;
        if (*(char **)(p + 0x44) != 0 && (unsigned char)ok478(*(unsigned char **)(p + 0x44)) == 0) break;
        *(unsigned char *)(p + 4) = 7;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 7:
        break;
    }
    func_0047C4F0(p);
    func_00195E20(D_005BE098, p);
    return;
bad:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 7;
    *(unsigned char *)(p + 5) = 0;
}
