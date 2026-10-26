int func_001EE220();

int func_001EE2F0();

int func_001EE410();

int func_001EE270(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_001EE220(p0, v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_001EE2F0(p0, v0);
        break;
    case 2:
        v2 = func_001EE410(p0, v0);
        break;
    }
    return v2;
}
