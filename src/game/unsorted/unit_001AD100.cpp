class ObjRel18 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18();
};

extern "C" void func_001ACFE0(char *);

/* Release request: live objects (states 1/2) run their shutdown and become 3; state 4 is torn down now. */
extern "C" int func_001AD140(char *p) {
    switch (*(unsigned char *)(p + 0x18)) {
    case 1:
    case 2:
        ((ObjRel18 *)p)->m18();
        *(unsigned char *)(p + 0x18) = 3;
        break;
    case 4:
        func_001ACFE0(p);
        break;
    case 3:
    case 0:
        break;
    default:
        return 0;
    }
    return 1;
}
