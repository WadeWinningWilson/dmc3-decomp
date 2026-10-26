extern "C" {
int func_003F85D0(char *);
}

extern "C" {
int func_003F8E90(char *);
}

extern "C" {
int func_003F9080(char *);
}

extern "C" {
int func_003F94A0(char *);
}

extern "C" {
int func_003F9700(char *);
}

extern "C" {
int func_00425E60(char *);
}

extern "C" {
int func_00426280(char *);
}

extern "C" {
int func_004265D0(char *);
}

extern "C" {
int func_00426650(char *);
}

class V10_1_fi {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(float);
};

extern "C" {
int func_00425840(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    int tmp7;
    int tmp8;
    int tmp9;
    int tmp10;
    int tmp11;
    int tmp12;
    v0 = p0;
    if (*(unsigned char *)(p0 + 1165) == 0) {
        v1 = ((V10_1_fi *)(v0 + 2880))->m(*(float *)(v0 + 16));
    }
    v2 = *(unsigned char *)(v0 + 5);
    tmp1 = 13;
    if (v2 != tmp1) {
        if (v2 != 12) {
            tmp2 = 11;
            if (v2 != tmp2) {
                if (v2 != 10) {
                    tmp3 = 7;
                    if (v2 != tmp3) {
                        if (v2 != 4) {
                            tmp4 = 3;
                            if (v2 != tmp4) {
                                if (v2 != 2) {
                                    if (v2 != 0) {
                                        return v1;
                                    } else {
                                        tmp5 = func_003F85D0(v0);
                                        return tmp5;
                                    }
                                } else {
                                    tmp6 = func_00425E60(v0);
                                    return tmp6;
                                }
                            } else {
                                tmp7 = func_00426280(v0);
                                return tmp7;
                            }
                        } else {
                            tmp8 = func_004265D0(v0);
                            return tmp8;
                        }
                    } else {
                        tmp9 = func_00426650(v0);
                        return tmp9;
                    }
                } else {
                    tmp10 = func_003F8E90(v0);
                    return tmp10;
                }
            } else {
                tmp11 = func_003F9080(v0);
                return tmp11;
            }
        } else {
            tmp12 = func_003F94A0(v0);
            return tmp12;
        }
    } else {
        v3 = func_003F9700(v0);
        return v3;
    }
}
}
