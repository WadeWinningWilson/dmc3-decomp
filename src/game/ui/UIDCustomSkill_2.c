char *func_00279290(char *);

void func_001A2000(char *, int);

void func_001A2D70(char *, int, int);

void func_001A1E70(char *, int);

typedef struct { short id; char pad; signed char k; } E44B;

extern E44B D_005780B0[][5];

void func_0044BA30(char *p, int sel, int row, int dim) {
    int i;
    E44B *e;
    signed char k;
    if (*(unsigned char *)(p + 0x3081) == 0) return;
    func_001A2000(func_00279290(p + 0x1280), 5);
    func_001A2000(func_00279290(p + 0x1280), 6);
    func_001A2000(func_00279290(p + 0x1280), 7);
    func_001A2000(func_00279290(p + 0x1280), 8);
    for (i = 0, e = D_005780B0[row]; i < 5; i++, e++) {
        k = e->k;
        if (e->id == 0xD5) continue;
        if (*(unsigned char *)(p + 0x3122) & (1 << i)) {
            func_001A2000(func_00279290(p + 0x1E80), i);
        } else if (*(unsigned char *)(p + 0x3121) & (1 << i)) {
            if (sel == k && dim == 0) func_001A2D70(func_00279290(p + 0x1E80), i, 0x806060E0);
            else func_001A2D70(func_00279290(p + 0x1E80), i, 0x80202050);
            func_001A1E70(func_00279290(p + 0x1E80), i);
            func_001A1E70(func_00279290(p + 0x1280), k + 5);
        } else if (0 <= *(signed char *)(p + k + 0x3124)) {
            if (sel == k && dim == 0) func_001A2D70(func_00279290(p + 0x1E80), i, 0x80E0E0E0);
            else func_001A2D70(func_00279290(p + 0x1E80), i, 0x80505050);
            func_001A1E70(func_00279290(p + 0x1E80), i);
            func_001A1E70(func_00279290(p + 0x1280), k + 5);
        } else {
            func_001A2000(func_00279290(p + 0x1E80), i);
        }
    }
}
