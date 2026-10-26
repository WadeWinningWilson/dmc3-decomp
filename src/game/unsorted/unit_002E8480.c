extern signed char D_005BE134;

void func_002E8760(void) {
    if (D_005BE134 != 0) {
        D_005BE134--;
    }
}

int func_002E8780(signed char c) {
    switch (c) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
        return 0;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x3A:
        return 1;
    }
    return 2;
}

extern char D_00645A30[];

extern char D_0059BD60[];

extern char D_00598570[];

void func_00195D70(char *, int);

char *func_00195D90(char *);

char *func_001005E0(char *, int, char *, char *, int);

int func_002E88E0(void) {
    char *o;
    char *c;
    func_00195D70(D_00645A30, 4);
    for (o = func_00195D90(D_00645A30); o; o = func_00195D90(D_00645A30)) {
        c = func_001005E0(o, 0, D_0059BD60, D_00598570, 0);
        if (c) {
            switch (*(unsigned char *)(c + 0x38)) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
                return 1;
            }
        }
    }
    return 0;
}

void func_002E84A0();

void func_002E99C0();

void func_002E8700(void) {
    func_002E84A0();
    func_002E99C0();
}

void func_002E84B0();

void func_002E99D0();

void func_002E8730(void) {
    func_002E99D0();
    func_002E84B0();
}

int func_00105300();

int func_002E84C0(p0, p1) int p0; int p1; {
    int v0;
    if (p1 != 0) {
        v0 = func_00105300((p0 + 80));
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 80)) : "memory");
    }
    return v0;
}

extern char D_01CAFF0C[];

int func_0020F5D0();

int func_002E8510(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 56);
    switch (v0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        v2 = func_0020F5D0(*(int *)(*(char **)D_01CAFF0C + 24), 0, *(int *)(p0 + 76));
        break;
    case 10:
    case 11:
    case 12:
        v2 = func_0020F5D0(*(int *)(*(char **)D_01CAFF0C + 24), 10, *(int *)(p0 + 76));
        break;
    case 13:
    case 14:
    case 15:
        v2 = func_0020F5D0(*(int *)(*(char **)D_01CAFF0C + 24), 13, *(int *)(p0 + 76));
        break;
    default:
        v2 = func_0020F5D0(*(int *)(*(char **)D_01CAFF0C + 24), (signed char)v0, *(int *)(p0 + 76));
        break;
    }
    return v2;
}

int func_002E8890(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = (signed char)p0;
    switch (v0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        v2 = 0;
        break;
    default:
        v2 = 1;
        break;
    }
    return v2;
}

extern void func_002E7BB0();

void func_002E8480(char *p) { func_002E7BB0(p + -4); }

extern void func_002E7A80();

void func_002E8490(char *p) { func_002E7A80(p + -4); }
