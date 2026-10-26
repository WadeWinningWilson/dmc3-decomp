int func_0013DAC0();

int func_0013D8B0(p0) int p0; {
    int v2;
    int v0;
    int v1;
    v2 = 0;
    v0 = p0;
    do {
        v1 = func_0013DAC0((v0 + 8), 0);
        v2 = (v2 + 1);
        v0 = (v0 + 0x30384);
    } while ((v2 < 2));
    return v1;
}

int func_0013DB40();

int func_0013D900(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = 0;
    v1 = p0;
    do {
        v2 = func_0013DB40((v1 + 8));
        v0 = (v0 + 1);
        v1 = (v1 + 0x30384);
    } while ((v0 < 2));
    return v2;
}
