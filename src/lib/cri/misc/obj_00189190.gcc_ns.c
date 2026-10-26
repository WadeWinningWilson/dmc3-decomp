// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
void func_0010BD78();

void func_0010BF08();

void func_00188BF0();

int func_00188CA8();

void func_00189218();

int func_0018B530();

int func_00189190(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    v1 = func_00188CA8();
    if (v1 != 0) {
        tmp1 = *(int *)(v0 + 8120);
        func_00188BF0((*(int *)(v0 + 8120) + 4376));
        tmp2 = func_0018B530();
        v2 = (tmp1 + 4304);
        if (tmp2 != 1) {
            func_0010BD78(v2);
            return;
        } else {
            func_0010BF08(v2);
            func_00189218(v0);
            return;
        }
    } else {
        return v1;
    }
}

int func_00188C48();

int func_00189338(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    char *v2;
    int v3;
    v0 = p1;
    v1 = 1;
    p0 = *(char **)(p0 + 8120);
    v2 = (p0 + 4264);
    v3 = *(int *)(v2 + 28);
    p0 = (p0 + 4376);
    if (v3 != v1) {
        v3 = func_00188C48(p0);
        *(int *)(v2 + 32) = v0;
        *(int *)(v2 + 28) = v1;
    }
    return v3;
}
