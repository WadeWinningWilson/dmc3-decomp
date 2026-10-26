void func_001971F0(char *);

typedef struct { int a; int id; int ref; char obj[0x110 - 12]; } RefSlot;

int func_00286780(char *p, int id) {
    RefSlot *t = (RefSlot *)p;
    int i;
    char *e;
    if (id != 0) {
        for (i = 0, e = (char *)t; i < 32; i++, e += 0x110) {
            if (*(int *)(e + 4) == id) {
                t[i].ref -= 1;
                if (t[i].ref == 0) {
                    t[i].id = 0;
                    func_001971F0(t[i].obj);
                    return 1;
                }
                return 0;
            }
        }
    }
    return 0;
}

extern char D_005A8D60[];

void func_00100450();

void func_00286250();

void func_00286320();

int func_00286370();

int func_002862C0(p0) int p0; {
    func_00286250();
    *(char **)((char *)p0 + 0) = D_005A8D60;
    func_00100450((p0 + 4), (char *)func_00286370, (char *)func_00286320, 272, 32);
    return p0;
}

int func_00286370(p0) char *p0; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = p0;
    do {
        *(int *)(v1 + 8) = 0;
        *(int *)(v1 + 12) = 0;
        v0 = (v0 + 8);
        *(int *)(v1 + 16) = 0;
        *(int *)(v1 + 20) = 0;
        *(int *)(v1 + 24) = 0;
        *(int *)(v1 + 28) = 0;
        *(int *)(v1 + 32) = 0;
        *(int *)(v1 + 36) = 0;
        v1 = (v1 + 32);
    } while ((v0 < 64));
    *(int *)(p0 + 268) = 0;
    *(int *)(p0 + 264) = 0;
    return (int)p0;
}

void func_00286440(p0) char *p0; {
    int v0;
    v0 = 0;
    do {
        *(int *)(p0 + 4) = 0;
        *(int *)(p0 + 8) = 0;
        v0 = (v0 + 8);
        *(int *)(p0 + 276) = 0;
        *(int *)(p0 + 280) = 0;
        *(int *)(p0 + 548) = 0;
        *(int *)(p0 + 552) = 0;
        *(int *)(p0 + 820) = 0;
        *(int *)(p0 + 824) = 0;
        *(int *)(p0 + 1092) = 0;
        *(int *)(p0 + 1096) = 0;
        *(int *)(p0 + 1364) = 0;
        *(int *)(p0 + 1368) = 0;
        *(int *)(p0 + 1636) = 0;
        *(int *)(p0 + 1640) = 0;
        *(int *)(p0 + 1908) = 0;
        *(int *)(p0 + 1912) = 0;
        p0 = (p0 + 2176);
    } while ((v0 < 32));
}
