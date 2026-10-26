class ObjRel {
public:
    virtual void m08(int);
    virtual void d1();
    virtual void m10();
};

extern "C" void func_0013D5D0(char *);

/* Shuts down and deletes the owned object at +8, then resets the list at +0xC. */
extern "C" void func_0022CAD0(char *p) {
    (*(ObjRel **)(p + 8))->m10();
    (*(ObjRel **)(p + 8))->m08(-1);
    *(int *)(p + 8) = 0;
    func_0013D5D0(p + 0xC);
}

class ObjSel {
public:
    virtual void d0();
    virtual void mC();
    virtual void d2();
    virtual void m14(char *);
};

extern "C" char D_01CAFF30[];

extern "C" char D_01CAFF3C[];

extern "C" char D_0054A0E0[];

extern "C" void func_0036F7D0(char *, char *);

extern "C" void func_0036FCF0(char *);

/* Opens the menu: copies the current selection, resets the list and loads the entry text. */
extern "C" int func_0022D540(char *p) {
    switch (*(unsigned char *)(p + 0xD)) {
    case 0:
    func_0036F7D0(p + 0x30, D_01CAFF30);
    func_0036FCF0(p + 0x30);
    ((ObjSel *)(p + 0xC44))->mC();
    ((ObjSel *)(p + 0xC44))->m14(*(unsigned char *)D_01CAFF3C * 0x84 + (D_0054A0E0 + *(int *)D_01CAFF30 * 0x298) + 4);
    return 1;
    }
    return 0;
}

extern "C" {
extern char D_0057BB90[];
}

extern "C" {
extern char * D_005BC1A8;
}

extern "C" {
extern char D_00645A30[];
}

extern "C" {
extern char D_01CAF2B0[];
}

extern "C" {
extern char D_01CAFF10[];
}

extern "C" {
extern char D_01DF5D20[];
}

extern "C" {
void func_00195390(char *);
}

extern "C" {
void func_001F9D60(char *);
}

extern "C" {
void func_00209C00(int, int);
}

extern "C" {
void func_00323100(int);
}

class V24_2_iii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int m(int, int);
};

extern "C" {
int func_0022CE70(int p0) {
    int tmp1;
    func_00195390(D_00645A30);
    func_001F9D60(D_01DF5D20);
    *(int *)((char *)p0 + 400) = (p0 + 2096);
    *(char **)((char *)p0 + 392) = D_0057BB90;
    func_00209C00((p0 + 384), 1);
    *(int *)D_01CAFF10 = (p0 + 48);
    *(int *)((char *)p0 + 52) = (p0 + 384);
    *(int *)((char *)p0 + 56) = (p0 + 2096);
    *(int *)((char *)p0 + 60) = (p0 + 3092);
    *(int *)((char *)p0 + 64) = (p0 + 3140);
    *(int *)((char *)p0 + 68) = (p0 + 3164);
    *(char **)((char *)p0 + 20) = D_01CAF2B0;
    func_00323100((p0 + 3092));
    tmp1 = ((V24_2_iii *)D_005BC1A8)->m(0, 0);
    return tmp1;
}
}
