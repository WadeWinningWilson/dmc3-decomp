/* Hand-matched functions whose callee prototypes conflict with misc3-16 (part 4). */

extern char D_005BBDE8[8];
extern char D_005BBDF0[8];
extern char D_005BBE00[8];
extern char D_005BBE08[8];
extern char D_005BBE10[8];
extern char D_005BBE18[8];
extern char D_005BBE20[8];
extern char D_005BBE28[8];
extern char D_005BBE30[8];
extern char D_005BBE38[8];
extern char D_005BBE40[8];
extern char D_005BBE48[8];
extern char D_005BBDF8[8];
extern char D_005BE0D0[8];
int func_0012BA60(char *, char *);
void func_0012B2E8(char *, char *);
void func_0012ACE8(char *, char *, char *, char *);
int func_001EBB20(char *, char *);
int func_001B0FD0(char *, int, int);
void func_001EBB10(char *, char *, int);

#define ADD22F(k)     func_0012B2E8(p + *(int *)p * 32 + 0x4004, s);     func_0012B2E8(p + *(int *)p * 32 + 0xC004, n);     func_0012ACE8(buf, D_005BBDF8, n, s);     *(unsigned char *)((char *)*(int *)p + (int)p + 0x14404) = k;     func_001EBB10(D_005BE0D0, buf, func_001B0FD0(p + *(int *)p * 16 + 4, func_001EBB20(D_005BE0D0, buf), 0));     (*(int *)p)++;

int func_0022FA40(char *p, char *n, char *s) {
    char buf[128];
    if (*(int *)p < 0x400) {
        if (func_0012BA60(s, D_005BBDE8) || func_0012BA60(s, D_005BBDF0)) {
            ADD22F(0)
        } else         if (func_0012BA60(s, D_005BBE00) || func_0012BA60(s, D_005BBE08)) {
            ADD22F(1)
        } else         if (func_0012BA60(s, D_005BBE10) || func_0012BA60(s, D_005BBE18)) {
            ADD22F(2)
        } else         if (func_0012BA60(s, D_005BBE20) || func_0012BA60(s, D_005BBE28)) {
            ADD22F(3)
        } else         if (func_0012BA60(s, D_005BBE30) || func_0012BA60(s, D_005BBE38)) {
            ADD22F(4)
        } else         if (func_0012BA60(s, D_005BBE40) || func_0012BA60(s, D_005BBE48)) {
            ADD22F(5)
        }
    }
    return *(int *)p - 1;
}
