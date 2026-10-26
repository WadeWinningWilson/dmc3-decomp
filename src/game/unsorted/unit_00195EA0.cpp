extern "C" int func_0022CBA0(char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0012B1A0(char *, char *);

extern "C" void func_0022CB30(char *);

extern "C" void func_0022CB50(char *, int);

extern "C" void func_0019D590(char *, char *);

extern "C" char D_005BB8A0[8];

extern "C" char D_005BB8A8[8];

extern "C" char D_005BB8B0[8];

extern "C" char D_0053F880[];

extern "C" char D_0053F890[];

extern "C" char D_0053F8A0[];

extern "C" void func_0019D410(char *p) {
    char r[16];
    char tok[64];
    char *q;
    int st;
    func_0022CB30(r);
    q = r;
    st = 0;
    func_0022CB50(q, *(int *)(p + 0x48));
    func_0022CBB0(q, tok);
    if (func_0012B1A0(tok, D_005BB8A0) != 0) return;
    while (!(bool)func_0022CBA0(q)) {
        func_0022CBB0(q, tok);
        switch (st) {
        case 0:
            if (func_0012B1A0(tok, D_005BB8A8) == 0) st = 1;
            break;
        case 1:
            if (func_0012B1A0(tok, D_0053F880) == 0) {
                st = 100;
            } else if (func_0012B1A0(tok, D_0053F890) == 0) {
                st = 200;
            }
            break;
        case 100:
            if (func_0012B1A0(tok, D_0053F8A0) == 0) {
                st = 0;
            } else {
                if (func_0012B1A0(tok, D_005BB8B0) == 0) {
                    func_0019D590(p, q);
                } else {
                    return;
                }
            }
            break;
        case 200:
            break;
        }
    }
}
