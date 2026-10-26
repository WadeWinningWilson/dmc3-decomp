class ObjRate2 {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void m10();
};

extern "C" float func_001F9C40(char *, int);

extern "C" char D_01DF5D20[];

extern "C" short func_0027BC40(char *, int);

extern "C" int func_0027BCB0(char *, int);

extern "C" void func_00288140(char *);

extern "C" char *func_00210240(char *);

/* Track timer: when it runs out, or neither direction has a next key, finish; otherwise advance. */
extern "C" void func_00288010(char *p) {
    *(float *)(p + 0x20) = *(float *)(p + 0x20) - *(float *)(p + 0x10) * func_001F9C40(D_01DF5D20, 0x87);
    if (*(float *)(p + 0x20) < 0.0f) {
        ((ObjRate2 *)p)->m10();
        return;
    }
    if (func_0027BC40(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0) {
        if (func_0027BCB0(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0) {
            ((ObjRate2 *)p)->m10();
        } else {
            func_00288140(p);
        }
    }
}
