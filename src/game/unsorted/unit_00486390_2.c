void func_00486510();

void func_00486B60();

void func_004870B0();

void func_00487330();

void func_004875C0();

int func_00487840();

int func_00486460(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(int *)(p0 + 0);
    v1 = 0;
    switch (v0) {
    case 0:
        func_00486510();
        break;
    case 1:
        func_00486B60();
        break;
    case 2:
        func_004870B0();
        break;
    case 3:
        func_00487330();
        break;
    case 4:
        func_004875C0();
        break;
    case 5:
        tmp0 = func_00487840();
        v1 = (tmp0 & 255);
        break;
    }
    return v1;
}
