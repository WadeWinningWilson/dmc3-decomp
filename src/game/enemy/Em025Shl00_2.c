void func_001AD100(char *);

void func_00322C50(char *);

void func_00322620(char *);

void func_00322870(char *);

void func_003225B0(char *p) {
    func_001AD100(p);
    func_00322C50(p);
    switch (*(unsigned char *)(p + 0x430)) {
    case 0:
        func_00322620(p);
        break;
    case 1:
        func_00322870(p);
        break;
    }
}

extern void func_00322D00();

void func_00322C10(void) { func_00322D00(); }

extern void func_00322DC0();

void func_00323070(char *p) { func_00322DC0(p + -64); }
