extern "C" void func_00376B40(char *, int);

extern "C" char D_01CAFF0C[];

extern "C" void func_002F2D30(char *, char *);

extern "C" int D_01CAFF38[];

extern "C" float D_0058219C[];

extern "C" float D_005821B4[];

extern "C" char D_00582170[];

class S376 {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual void z28();
    virtual void z29();
    virtual void z30();
    virtual void z31();
    virtual void z32();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual void z38();
    virtual void z39();
    virtual void z40();
    virtual void z41();
    virtual void z42();
    virtual void z43();
    virtual void z44();
    virtual void z45();
    virtual void z46();
    virtual void z47();
    virtual void z48();
    virtual void z49();
    virtual void z50();
    virtual void z51();
    virtual void z52();
    virtual void z53();
    virtual void z54();
    virtual void z55();
    virtual void z56();
    virtual void z57();
    virtual void z58();
    virtual void z59();
    virtual void z60();
    virtual void z61();
    virtual void z62();
    virtual void z63();
    virtual void z64();
    virtual void z65();
    virtual void z66();
    virtual void z67();
    virtual void z68();
    virtual void z69();
    virtual void z70();
    virtual void z71();
    virtual void z72();
    virtual void z73();
    virtual void z74();
    virtual void z75();
    virtual void z76();
    virtual void z77();
    virtual void z78();
    virtual void z79();
    virtual void z80();
    virtual void z81();
    virtual void z82();
    virtual void z83();
    virtual void z84();
    virtual void z85();
    virtual void z86();
    virtual void z87();
    virtual void z88();
    virtual void z89();
    virtual void z90();
    virtual void z91();
    virtual void z92();
    virtual void z93();
    virtual void z94();
    virtual void z95();
    virtual void z96();
    virtual void z97();
    virtual void z98();
    virtual void z99();
    virtual void z100();
    virtual void z101();
    virtual void z102();
    virtual void z103();
    virtual void z104();
    virtual void z105();
    virtual void z106();
    virtual void z107();
    virtual void z108();
    virtual void z109();
    virtual void z110();
    virtual void z111();
    virtual void z112();
    virtual void z113();
    virtual void z114();
    virtual void z115();
    virtual void z116();
    virtual void z117();
    virtual float m1E0(int);
    virtual void z119();
    virtual void z120();
    virtual void z121();
    virtual void m1F0(int, int);
};

class A376 {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual void z28();
    virtual void z29();
    virtual void z30();
    virtual void z31();
    virtual void z32();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual void z38();
    virtual void mA4();
};

static inline int fl376(char *p) {
    return (*(unsigned int *)(p + 0x8FC) & 0x4000000) != 0;
}

extern "C" void func_003765C0(char *p, unsigned int k) {
    if (*(unsigned char *)(p + 4) == 2) return;
    switch (k) {
    case 0: case 1: case 6: case 8: case 9: case 10: case 11: case 12: case 18: case 19:
        if (fl376(p)) break;
        (*(unsigned char *)(p + 0x978))++;
        if (*(unsigned char *)(p + 0x978) > 1) {
            *(unsigned char *)(p + 0x978) = 0;
            func_00376B40(p, 0xD);
        } else {
            func_00376B40(p, 0x14);
        }
        break;
    case 2: case 3: case 4: case 5: case 7:
        if (fl376(p)) break;
        func_00376B40(p, 0xD);
        break;
    case 20: case 21:
        if (D_01CAFF38[0] == 0xE4) {
            if (*(unsigned char *)(p + 0x972) == 1) {
                *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((S376 *)p)->m1E0((int)D_0058219C[0]);
                *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (float)(int)D_005821B4[0];
                if (*(char **)(*(char **)D_01CAFF0C + 0x20)) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
            }
        } else {
            ((S376 *)p)->m1F0(*(int *)(p + 0x148), (int)D_00582170);
        }
        ((A376 *)(p + 0x130))->mA4();
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
        *(unsigned char *)(p + 7) = 0;
        *(int *)(p + 0x998) = 0;
        *(int *)(p + 0x948) = 0;
        break;
    case 13: case 14: case 15: case 16: case 17: case 22:
        break;
    }
}
