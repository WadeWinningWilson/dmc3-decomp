extern "C" int func_0022CBA0(char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0012B1A0(char *, char *);

extern "C" int func_0022CD60(char *);

extern "C" char D_005BCE60[8];

extern "C" char D_005BCE68[8];

extern "C" char D_005BCE70[8];

typedef struct { short id; char k; } idk;

extern "C" int func_003CF260(int, int, idk *);

extern "C" int func_003CF150(int a0, int a1, char *s) {
    idk st;
    char tok[44];
    st.id = -1;
    st.k = 0;
    while (!(bool)func_0022CBA0(s)) {
        func_0022CBB0(s, tok);
        if (func_0012B1A0(tok, D_005BCE60) == 0) {
            return func_003CF260(a0, a1, &st);
        }
        if (func_0012B1A0(tok, D_005BCE68) == 0) {
            st.id = func_0022CD60(s);
        } else if (func_0012B1A0(tok, D_005BCE70) == 0) {
            st.k = func_0022CD60(s);
        }
    }
    return 0;
}
