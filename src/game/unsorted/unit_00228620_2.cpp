extern "C" {
int func_00229990(char *, char *, int);
}

extern "C" {
int func_00229AF0(char *, char *, int);
}

class V30_2_ppi {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual int m(char *, char *);
};

class VB8_2_ppi {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual int m(char *, char *);
};

extern "C" {
int func_00228EA0(int p0, int p1) {
    char *v0;
    int v1;
    char *v10;
    int v11;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    char *v7;
    char *v8;
    int v9;
    v10 = *(char **)((char *)(p0 + ((p1 & 255) << 2)) + 0);
    v0 = (char *)p0;
    if (v10 != 0) {
        do {
            if (*(unsigned char *)(v10 + 0) == 2) {
                v4 = *(signed char *)(v10 + 2);
                *(int *)(v10 + 164) = 0;
                if ((*(int *)(v10 + 12) & 64) != 0) {
                    v9 = *(int *)(v0 + 4);
                    if (v4 != 0) {
                        v5 = func_00229990(v0, v10, v9);
                    } else {
                        v5 = func_00229AF0(v0, v10, v9);
                    }
                }
                if ((*(int *)(v10 + 12) & 128) != 0) {
                    v11 = *(int *)(v0 + 16);
                    if (v4 != 0) {
                        v5 = func_00229990(v0, v10, v11);
                    } else {
                        v5 = func_00229AF0(v0, v10, v11);
                    }
                }
                if ((*(int *)(v10 + 12) & 256) != 0) {
                    v1 = *(int *)(v0 + 28);
                    if (v4 != 0) {
                        v5 = func_00229990(v0, v10, v1);
                    } else {
                        v5 = func_00229AF0(v0, v10, v1);
                    }
                }
                if ((*(int *)(v10 + 12) & 512) != 0) {
                    v2 = *(int *)(v0 + 40);
                    if (v4 != 0) {
                        v5 = func_00229990(v0, v10, v2);
                    } else {
                        v5 = func_00229AF0(v0, v10, v2);
                    }
                }
                if ((*(int *)(v10 + 12) & 1024) != 0) {
                    v3 = *(int *)(v0 + 52);
                    if (v4 != 0) {
                        v5 = func_00229990(v0, v10, v3);
                    } else {
                        v5 = func_00229AF0(v0, v10, v3);
                    }
                }
                if ((*(int *)(v10 + 12) & 2048) != 0) {
                    v6 = *(int *)(v0 + 64);
                    if (v4 != 0) {
                        v5 = func_00229990(v0, v10, v6);
                    } else {
                        v5 = func_00229AF0(v0, v10, v6);
                    }
                }
                if (v4 != 0) {
                    v7 = *(char **)(v10 + 164);
                    if (v7 != 0) {
                        v8 = *(char **)(v7 + 756);
                        if (v8 != 0) {
                            v5 = ((V30_2_ppi *)v8)->m(v10, v7);
                        } else {
                            v5 = ((VB8_2_ppi *)*(char **)(v7 + 752))->m(v10, v7);
                        }
                    }
                }
            }
            v10 = *(char **)(v10 + 764);
        } while (v10 != 0);
    }
    return v5;
}
}
