extern char D_00645A30[];

void func_00195460();

void func_0022EFF0();

void func_0022F060();

void func_0022F700();

int func_0022EF70(p0) char *p0; {
    int v0;
    char *v1;
    v0 = *(int *)(p0 + 12);
    v1 = p0;
    switch (v0) {
    case 0:
        func_0022EFF0();
        /* fall through */
    case 1:
        func_0022F060(v1);
        break;
    case 2:
        func_0022F700();
        break;
    }
    func_00195460(D_00645A30);
    return *(int *)(v1 + 44);
}

void func_0022F610(void) {}
