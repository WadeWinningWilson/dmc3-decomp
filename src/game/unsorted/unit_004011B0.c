int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, int *);

int func_0022CD60(char *);

int func_00401350(char *, char *, void *);

extern int D_005BD000;

extern int D_005BD008;

extern int D_005BD010;

extern int D_005BD018;

typedef struct {
    short a;
    short b;
    int c;
    int d;
    int e;
    int f;
} P397;

int func_004011B0(char *p, char *a, char *s) {
    char buf[0x20] __attribute__((aligned(16)));
    P397 st;
    st.a = -1;
    st.b = -1;
    st.f = -1;
    st.e = -1;
    st.d = -1;
    st.c = -1;
    if ((func_0022CBA0(s) != 0) ^ 1) {
        do {
            func_0022CBB0(s, buf);
            if (func_0012B1A0(buf, &D_005BD000) == 0) {
                return func_00401350(p, a, &st);
            } else if (func_0012B1A0(buf, &D_005BD008) == 0) {
                st.a = func_0022CD60(s);
            } else if (func_0012B1A0(buf, &D_005BD010) == 0) {
                st.b = func_0022CD60(s);
            } else if (func_0012B1A0(buf, &D_005BD018) == 0) {
                st.c = func_0022CD60(s);
                st.d = func_0022CD60(s);
                st.e = func_0022CD60(s);
                st.f = func_0022CD60(s);
            }
        } while ((func_0022CBA0(s) != 0) ^ 1);
    }
    return 0;
}

void func_002790E0();

void func_0027A570();

int func_00401960(int p0) {
    func_0027A570((p0 + 16));
    func_002790E0((p0 + 1152));
    return p0;
}

void func_00100580();

void func_002791E0();

void func_0027A660();

int func_004018F0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_002791E0((v0 + 1152), -1);
        func_0027A660((v0 + 16), -1);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}
