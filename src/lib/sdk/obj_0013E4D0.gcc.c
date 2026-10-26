// cc: ee-gcc2.96 -O2 -G0
extern char D_0058F950[];

void func_0013E188();

void func_0013E1A0();

void func_0013E1B8();

void func_0013E550();

void func_0013E4D0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0013E1B8(D_0058F950);
        return;
    } else {
        v1 = 0;
        func_0013E188();
        if (*(int *)(v0 + 24) > 0) {
            v2 = (int)v0;
            do {
                v1 = (v1 + 1);
                func_0013E550(v2);
                v2 = (int)v0;
            } while ((v1 < *(int *)(v0 + 24)));
        }
        func_0013E1A0();
        return;
    }
}
