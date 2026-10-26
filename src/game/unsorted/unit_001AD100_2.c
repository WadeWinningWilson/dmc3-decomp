int func_00122A58(int, int);

int func_00122E38(int, int, int, int);

int func_00122F70(int, int, int, int);

int func_00122B70(int, int);

int func_00122BF8(int, int, int, int);

int func_001230E8(int, int, unsigned char *);

int func_00123328(int, int);

int func_00123388(int, int);

void func_001AE0D0(char *, int, int, int, int);

void func_001AD4B0(char *p, int port, int slot) {
    unsigned char *e;
    int r;
    e = (unsigned char *)(p + port * 0x50 + 0x10);
    e[1] = func_00122A58(port, slot);
    if (e[1] == 0) return;
    switch (e[0]) {
    case 0:
        if (e[1] == 6 || e[1] == 2) {
            e[2] = func_00122E38(port, slot, 1, 0);
            if (e[2] == 0) return;
            r = func_00122E38(port, slot, 2, 0);
            if (r > 0) e[2] = r;
            switch (e[2]) {
            case 2:
                e[0] = 0x63;
                break;
            case 3:
                e[0] = 0x63;
                break;
            case 4:
                e[0] = 0x28;
                break;
            case 5:
                e[0] = 0x63;
                break;
            case 6:
                e[0] = 0x63;
                break;
            case 7:
                e[0] = 0x46;
                break;
            case 0x100:
                e[0] = 0x63;
                break;
            case 0x300:
                e[0] = 0x63;
                break;
            default:
                e[0] = 0x63;
                break;
            }
        }
        break;
    case 0x28:
        if (func_00122E38(port, slot, 2, 0) == 0) {
            e[0] = 0x63;
            break;
        }
    fmt:
        if (func_00122F70(port, slot, *(int *)(p + 4) != 0, *(int *)(p + 8) == 0 ? 2 : 3) == 1) e[0]++;
        break;
    case 0x29:
        r = func_00122B70(port, slot);
        if (r == 1) e[0]--;
        if (r == 0) e[0] = 0x63;
        break;
    case 0x46:
        if (*(int *)(p + 4) == 0) goto fmt;
        if (func_00122BF8(port, slot, -1, 0) == 0) {
            e[0] = 0x63;
            break;
        }
        if (func_001230E8(port, slot, e + 0x4A) == 1) {
            e[0]++;
            func_001AE0D0(p, port, 0, 0, 0);
        }
    case 0x47:
        r = func_00122B70(port, slot);
        if (r == 1) e[0]--;
        if (r == 0) e[0]++;
        break;
    case 0x48:
        if (*(int *)(p + 0xC) == 0) {
            e[0] = 0x63;
            break;
        }
        if (func_00123328(port, slot) != 1) {
            e[0] = 0x63;
            break;
        }
        if (func_00123388(port, slot) == 1) e[0]++;
        break;
    case 0x49:
        r = func_00122B70(port, slot);
        if (r == 1) e[0]--;
        if (r == 0) {
            e[0] = 0x63;
            e[3] = 1;
        }
        break;
    }
}

typedef struct Row {
    unsigned short f0;
    unsigned short pad2;
    unsigned short f4;
    unsigned short pad6;
    unsigned short f8;
    unsigned short padA;
    unsigned short fC;
    unsigned short fE;
} Row;

typedef struct Record {
    Row row[2];
    char pad[12];
} Record;

typedef struct Table {
    char pad[0x2CC];
    Record rec[1];
} Table;

int func_001AE250(Table *t, int i, int j) { return t->rec[i].row[j].f4; }

int func_001AE2E0(Table *t, int i, int j) { return t->rec[i].row[j].f8; }

void func_001AE050(p0, p1) int p0; char *p1; {
    int v0;
    int v1;
    int v2;
    int tmp1;
    v0 = *(unsigned short *)(p1 + 0);
    v1 = *(unsigned short *)(p1 + 2);
    if (v1 == v0) {
        *(short *)(p1 + 8) = 0;
        *(short *)(p1 + 10) = (*(unsigned short *)(p1 + 10) + -1);
        tmp1 = *(unsigned short *)(p1 + 10);
        v2 = 5;
        if (tmp1 <= 0) {
            *(short *)(p1 + 10) = v2;
            *(short *)(p1 + 8) = *(unsigned short *)(p1 + 0);
        }
    } else {
        if ((v1 & v0) != 0) {
            *(short *)(p1 + 8) = 0;
            *(short *)(p1 + 10) = 5;
        } else {
            *(short *)(p1 + 8) = 0;
            *(short *)(p1 + 10) = 30;
        }
    }
}

int func_001AE180(p0, p1) int p0; int p1; {
    return ((p0 + (p1 * 80)) + 16);
}

int func_001AE1A0(p0, p1) int p0; int p1; {
    return *(unsigned short *)((char (*)[44])((char *)p0 + 704))[p1];
}

int func_001AE1E0(p0, p1) int p0; int p1; {
    return *(unsigned short *)((char (*)[44])((char *)p0 + 708))[p1];
}

int func_001AE200(p0, p1) int p0; int p1; {
    return *(unsigned short *)((char (*)[44])((char *)p0 + 712))[p1];
}

int func_00122788();

int func_00130990();

int func_001AD3C0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    v0 = p1;
    v1 = p2;
    v2 = ((p0 + (p1 * 80)) + 16);
    do {
        tmp0 = func_00122788(v0, v1);
    } while (tmp0 != 1);
    tmp1 = func_00130990(v2, 20);
    return tmp1;
}
