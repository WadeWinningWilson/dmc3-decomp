extern char D_005BE098;

int func_00195E20();

void func_003BACA0();

int func_003BAF60();

int func_003BAC10(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    if (v0 != 3) {
        tmp0 = 2;
        if (v0 != tmp0) {
            switch (v0) {
            case 0:
                func_003BACA0(p0, v0);
                /* fall through */
            case 1:
                v2 = func_003BAF60(v1);
                break;
            }
        } else {
            *(char *)(v1 + 9474) = *(signed char *)(v1 + 9473);
        }
    }
    if (*(unsigned char *)(v1 + 9472) == 1) {
        v2 = func_00195E20(&D_005BE098, v1);
    }
    return v2;
}

void func_003BBB00(void) {}

extern char D_00666710[];

void func_001AE550();

void func_003BBBF0(void) {
    func_001AE550(D_00666710, 1);
}
