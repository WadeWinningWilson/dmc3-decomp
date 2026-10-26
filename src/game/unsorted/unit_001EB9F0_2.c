extern char D_005BE1A8[4];

void func_0036DF10(char *, int, int, int, int, int);

void func_001347D0(int);

void func_001340C0(int);

void func_001347C0(void);

void func_001EC4F0(char *p) {
    switch (*(signed char *)(p + 9)) {
    case 0:
        *(short *)(p + 0xC) = 2;
        func_0036DF10(D_005BE1A8, 0, 0, 0, 0, 0);
        func_0036DF10(D_005BE1A8, 1, 0, 0, 0, 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 1:
        if (--*(short *)(p + 0xC) <= 0) {
            *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        }
        break;
    case 2:
        func_001347D0(2);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        break;
    case 3:
        func_001340C0(1);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        break;
    case 4:
        func_001347C0();
        *(unsigned char *)(p + 0x26C) = 1;
        *(unsigned char *)(p + 0xC10) = 0;
        switch (*(unsigned char *)(p + 0x26E)) {
        case 1:
            *(int *)(p + 0xC58) = 0;
            *(unsigned char *)(p + 0x3CC) = 1;
            *(unsigned char *)(p + 8) = 1;
            *(unsigned char *)(p + 0xB) = 0;
            *(unsigned char *)(p + 0xA) = 0;
            *(unsigned char *)(p + 9) = 0;
            *(short *)(p + 0xE) = 0;
            *(short *)(p + 0xC) = 0;
        }
        *(unsigned char *)(p + 0x26E) = 0;
        break;
    }
}

extern unsigned char D_01CAF51F[];

int func_001ECEB0(char *p) {
    if (*(unsigned char *)(p + 0x3CC) == 0) {
        switch (D_01CAF51F[0]) {
        case 1:
        case 2:
        case 3:
        case 4:
            return 0;
        }
        return *(unsigned char *)(p + 0x3CF) == 0;
    }
    return 0;
}

int func_001EC940();

int func_001ECAA0();

int func_001ECAE0();

int func_001EC8E0(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 969) == 0) {
        if (*(unsigned char *)(p0 + 971) == 0) {
            v0 = func_001EC940();
        } else {
            v0 = func_001ECAA0();
        }
    } else {
        v0 = func_001ECAE0();
    }
    return v0;
}

extern char D_00540D60[];

extern char D_00540D90[];

extern char D_0060119C[];

extern char D_00631520[];

extern char D_00666200[];

extern char D_00666715[];

extern char D_01DFABA0[];

void func_0013E000();

void func_001AB470();

int func_002F9750();

int func_001ED3F0() {
    int tmp12;
    func_0013E000(D_0060119C, *(int *)((D_00540D60 + (*(signed char *)D_00666715 << 2)) + 0));
    func_0013E000(D_00631520, *(int *)((D_00540D60 + (*(signed char *)D_00666715 << 2)) + 0));
    func_001AB470(D_00666200, *(int *)((D_00540D90 + (*(signed char *)D_00666715 << 2)) + 0));
    tmp12 = func_002F9750(D_01DFABA0, *(int *)((D_00540D90 + (*(signed char *)D_00666715 << 2)) + 0));
    return tmp12;
}

void func_001EBC30(char *p0) {
    *(int *)(p0 + 0) = 0;
    *(short *)(p0 + 4) = 0;
}

extern char D_005BBA3C;

void func_001EB9F0();

void func_001EBB10(int p0, int p1, int p2) {
    func_001EB9F0(p0, p1, &D_005BBA3C, p2);
}

void func_001EBB30();

void func_001EBB20(int p0, int p1) {
    func_001EBB30(p0, p1, &D_005BBA3C);
}
