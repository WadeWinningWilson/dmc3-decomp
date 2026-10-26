void func_0013D5D0(char *);

extern char D_01DF8E4D[];

extern char D_01DFA340[];

void func_00213C40(char *);

void func_002102E0(void);

void func_00230000(char *);

void func_0022F8C0(char *);

void func_0027BF60(char *);

void func_0013CF50(char *);

void func_00197C90(char *);

void func_00213AC0(char *p) {
    D_01DF8E4D[0] = 0;
    D_01DFA340[0] = 0;
    func_00213C40(p);
    func_002102E0();
    func_00230000(p + 0x3308);
    func_0022F8C0(p + 0x850C);
    func_0027BF60(p + 0x260C);
    func_0013D5D0(p + 0x25C8);
    func_0013CF50(p + 0x25F4);
    func_0013CF50(p + 0x2600);
    func_00197C90(p + 0x25D8);
}

extern char D_005D0E70[];

int func_0013D900();

int func_00211840();

int func_00215A30();

void func_002136A0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    *(char *)(p0 + 3) = 2;
    v0 = p0;
    *(int *)(p0 + 9660) = 0;
    v3 = func_00215A30(p0, 14, -1);
    v1 = v3;
    if (v1 != 0) {
        v3 = func_00211840(v1);
        *(int *)(v0 + 9660) = v3;
        if (*(int *)(v0 + 9660) != 0) {
            v3 = func_0013D900(D_005D0E70);
            *(char *)(v0 + 3) = 0;
        }
    }
}
