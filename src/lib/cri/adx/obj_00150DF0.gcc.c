// cc: ee-gcc2.96 -O2 -G0
void func_0014A850();

void func_0014A928();

void func_0014A938();

void func_0014A948();

void func_0014A958();

int func_0014AA58();

int func_0014AA70();

int func_0014AAA0();

void func_0014AC28();

void func_00151018();

void func_00150F60(p0) int p0; {
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    tmp1 = *(int *)((char *)p0 + 4);
    tmp2 = func_0014AA58(*(int *)((char *)p0 + 4));
    tmp3 = func_0014AA70(tmp1);
    tmp4 = func_0014AAA0(tmp1);
    func_0014AC28(tmp1);
    func_0014A948(tmp1, 0);
    *(int *)((char *)p0 + 144) = (tmp4 - tmp2);
    func_0014A938(tmp1, (tmp4 - tmp2));
    func_0014A958(tmp1, tmp3);
    func_0014A850(tmp1, tmp2);
    func_0014A928(tmp1, (char *)func_00151018, p0);
}
