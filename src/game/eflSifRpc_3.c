extern char D_01DF8F30[];

extern char D_01DF8F60[];

extern char D_01DF8F90[];

extern char D_01DF8FC0[];

extern char D_01DF9000[];

extern char D_01DF9040[];

extern char D_01DF9060[];

extern char D_01DF9080[];

extern char D_01DF90C0[];

extern char D_00558820[];

extern char D_00558850[];

extern char *D_005BE150;

extern char *D_005BE154;

extern char *D_005BE158;

extern int D_005BE15C;

extern int D_005BE160;

void func_00128488(char *, int, int);

void func_001282D0(char *, char *, int);

void func_00129690(char *);

int func_00110D58(char *);

void func_0010DF60(int);

int func_00110B60(char *, int, int, char *, unsigned int, char *, unsigned int, int, long);

void func_0010F9C0(char *);

int func_002F99F0(int cmd, char *src, unsigned int n) {
    int r;
    switch (cmd) {
    case 0x309:
    case 3:
    case 1:
        func_00128488(D_01DF8FC0, 0xFF, 0x40);
        func_00128488(D_01DF9000, 0xFF, 0x40);
        n = n < 0x40 ? n : 0x40;
        func_001282D0(D_01DF8FC0, src, n);
        D_005BE150 = D_01DF8F30;
        D_005BE154 = D_01DF8FC0;
        D_005BE158 = D_01DF9000;
        D_005BE15C = 0x40;
        D_005BE160 = 0x40;
        break;
    case 2:
        func_00128488(D_01DF9040, 0xFF, 0x20);
        func_00128488(D_01DF9060, 0xFF, 0x20);
        n = n < 0x20 ? n : 0x20;
        func_001282D0(D_01DF9040, src, n);
        D_005BE150 = D_01DF8F60;
        D_005BE154 = D_01DF9040;
        D_005BE158 = D_01DF9060;
        D_005BE15C = 0x20;
        D_005BE160 = 0x20;
        break;
    case 99:
        func_00128488(D_01DF9080, 0xFF, 0x10);
        func_00128488(D_01DF90C0, 0xFF, 0x400);
        D_005BE150 = D_01DF8F90;
        D_005BE154 = D_01DF9080;
        D_005BE158 = D_01DF90C0;
        D_005BE15C = 0x10;
        D_005BE160 = 0x400;
        break;
    default:
        func_00129690(D_00558820);
        return 0;
    }
    while (func_00110D58(D_005BE150) == 1) {
    }
    func_0010DF60(0);
    do {
        r = func_00110B60(D_005BE150, cmd, 0, D_005BE154, D_005BE15C, D_005BE158, D_005BE160, 0, 0);
        if (r < 0) func_0010F9C0(D_00558850);
    } while (r != 0);
    return (int)D_005BE158;
}
