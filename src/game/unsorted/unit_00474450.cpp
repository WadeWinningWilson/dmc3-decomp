extern "C" char D_00645A30[];

extern "C" void func_001AAD30(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" char *func_001B1610(int, char *);

extern "C" void func_001B1440(char *, char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_001B1430(char *, int);

extern "C" void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

static inline char *ent10(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(t + i * 4 + 8) == 0) { r = 0; } else { r = t + *(int *)(t + i * 4 + 8); } return r; }

extern "C" void func_00474B30(char *);

extern "C" void func_001A5BD0(char *);

class ObjG474 {

public:

    virtual void u0();

    virtual char *mC();

    virtual void u2();

    virtual void u3();

    virtual void u4();

    virtual void u5();

    virtual void u6();

    virtual void u7();

    virtual void u8();

    virtual int m2C(char *, char *);

    virtual void u10();

    virtual void u11();

    virtual void u12();

    virtual void u13();

    virtual void u14();

    virtual void u15();

    virtual void u16();

    virtual void u17();

    virtual void u18();

    virtual void u19();

    virtual void u20();

    virtual void u21();

    virtual void u22();

    virtual void u23();

    virtual void u24();

    virtual void u25();

    virtual void u26();

    virtual void u27();

    virtual void u28();

    virtual void u29();

    virtual void u30();

    virtual void u31();

    virtual void u32();

    virtual void u33();

    virtual void u34();

    virtual void u35();

    virtual void u36();

    virtual void u37();

    virtual void u38();

    virtual void u39();

    virtual void u40();

    virtual void u41();

    virtual void u42();

    virtual void u43();

    virtual void u44();

    virtual void u45();

    virtual void u46();

    virtual void u47();

    virtual void u48();

    virtual void u49();

    virtual void u50();

    virtual void mD4(int);

};

typedef struct { signed char id; char x; short y; } E474;

typedef struct { char a; char b; } B474;

typedef struct { float f[5]; signed char c14; E474 e[16]; signed char c56; B474 g[16]; unsigned char h[3]; float k[10]; } S474;

extern "C" char *func_004747E0(char *p, char *h, S474 *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *e;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xAD0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xAD0, t);
        if (r != 0) {
            func_00474B30(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret == 0) {
        return 0;
    }
    *(S474 *)(ret + 0xE4) = *sc;
    *(char **)(ret + 0xDC) = p;
    *(char **)(ret + 0xE0) = h;
    *(char *)(ret + 0x194) = 0;
    e = ent10(h, sc->e[0].id * 10);
    ((ObjG474 *)(ret + 0x1B0))->m2C(e, p);
    func_001A5BD0(((ObjG474 *)(ret + 0x1B0))->mC());
    ((ObjG474 *)(ret + 0x640))->m2C(e, p);
    func_001A5BD0(((ObjG474 *)(ret + 0x640))->mC());
    *(int *)(ret + 0xC) |= 0x40;
    return ret;
}
