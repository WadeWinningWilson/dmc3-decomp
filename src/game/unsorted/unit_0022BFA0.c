int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern int D_005BBD78;

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

void func_0022C070(char *, char *);

void func_0022BFA0(char *p, int a, char *s, int id) {
    int func_0012B1A0(char *, int *);
    char st[0x10] __attribute__((aligned(16)));
    char buf[0x40] __attribute__((aligned(16)));
    func_0022CB30(st);
    *(int *)(p + 0x14) = a;
    func_0022CB50(st, s);
    if ((func_0022CBA0(st) != 0) ^ 1) {
        do {
            func_0022CBB0(st, buf);
            if (func_0012B1A0(buf, &D_005BBD78) == 0) {
                int k = func_0022CD60(st);
                if (k == id) {
                    func_0022C070(p, st);
                    return;
                }
            }
        } while ((func_0022CBA0(st) != 0) ^ 1);
    }
}

extern char D_00542D40[];

int func_0022C430(char *s) {
    int func_0012B1A0(char *, char *);
    char st[0x10] __attribute__((aligned(16)));
    char buf[0x40] __attribute__((aligned(16)));
    func_0022CB30(st);
    func_0022CB50(st, s);
    if ((func_0022CBA0(st) != 0) ^ 1) {
        do {
            func_0022CBB0(st, buf);
            if (func_0012B1A0(buf, D_00542D40) == 0) {
                return func_0022CD60(st);
            }
        } while ((func_0022CBA0(st) != 0) ^ 1);
    }
    return 0;
}

void func_0022C500(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    *(int *)(p0 + 24) = p1;
    *(int *)(p0 + 44) = p2;
    *(int *)(p0 + 48) = p3;
    *(int *)(p0 + 40) = p4;
    *(int *)(p0 + 36) = 0;
}

void func_0022C4E0(char *p0, int p1, int p2) {
    *(int *)(p0 + 36) = p1;
    *(int *)(p0 + 40) = p2;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

typedef struct { u8 unk0, unk1, unk2, unk3; int unk4, unk8; u8 unkC; } Obj22C820;

void func_0022C820(Obj22C820 *p) {
    p->unk3 = 0; p->unk2 = 0; p->unk1 = 0; p->unk0 = 0;
    p->unk4 = 0; p->unk8 = 0;
    p->unkC = 1;
}
