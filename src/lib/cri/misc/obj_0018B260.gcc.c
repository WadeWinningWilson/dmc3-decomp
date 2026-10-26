// cc: ee-gcc2.96 -O2 -G0
void func_0018F868();

void func_0018B2C8(p0) int p0; {
    func_0018F868(p0, 3);
}

extern char D_0053F054[];

void func_0017CD58();

void func_0017F498();

void func_00180180();

int func_001803A0();

int func_0018B380();

void func_0018B4B8();

int func_0018B2E0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    int tmp1;
    v0 = p0;
    tmp0 = func_001803A0();
    if (tmp0 != 0) {
        func_00180180(0, 0xff000131);
        return;
    } else {
        func_0018B4B8(v0);
        func_0017F498((v0 + 120));
        func_0017CD58(v0);
        tmp1 = func_0018B380(v0);
        v1 = 7;
        v2 = tmp1;
        v3 = D_0053F054;
        do {
            if (*(int *)(v3 + 0) == v0) {
                *(int *)(v3 + 0) = 0;
            }
            v1 = (v1 + -1);
            v3 = (v3 + 4);
        } while (v1 >= 0);
        return v2;
    }
}

int func_00189B00();

int func_0018B428();

int func_0018D208();

int func_0018B3A8(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    tmp0 = func_001803A0();
    v1 = (int)v0;
    v2 = 0xff000132;
    if (tmp0 != 0) {
        func_00180180(0, v2);
        return;
    } else {
        tmp1 = func_0018D208(v1, 47);
        v3 = (int)v0;
        if (tmp1 == 1) {
            v4 = func_00189B00(v3);
        } else {
            v4 = func_0018B428(v3);
        }
        *(int *)(v0 + 68) = 1;
        return v4;
    }
}

int func_0018B428(p0) char *p0; {
    *(int *)(p0 + 76) = 4;
    return 0;
}
