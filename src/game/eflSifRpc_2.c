extern int D_005BE17C;

extern int D_005BE178;

extern int D_005BE180;

extern int D_005BE174;

struct Q48 {
    int a;
    char d[0x40];
    int c;
};

extern struct Q48 D_01DF95C0[];

int *func_002F99F0(int, char *, int);

int func_002FA530(int, char *, int);

int func_002FA630(void) {
    int n;
    struct Q48 *e;
    for (n = D_005BE17C; n != 0; n--) {
        e = &D_01DF95C0[D_005BE178];
        if (*func_002F99F0(e->a, e->d, e->c) >= 0) {
            D_005BE17C--;
            if (D_01DF95C0[D_005BE178].a == 3) {
                D_005BE180--;
            }
        } else {
            e = &D_01DF95C0[D_005BE178];
            if (func_002FA530(e->a, e->d, e->c) >= 0) {
                D_005BE17C--;
                if (D_01DF95C0[D_005BE178].a == 3) {
                    D_005BE180--;
                }
            } else {
                D_005BE174 = (D_005BE174 + 1) & 0x1F;
            }
        }
        D_005BE178 = (D_005BE178 + 1) & 0x1F;
    }
    return D_005BE17C;
}

extern void func_002F9DE0();

void func_002F9EC0(void) { func_002F9DE0(); }
