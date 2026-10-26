/* Hand-matched functions whose callee prototypes conflict with misc3-22. */

extern char *D_01CAFF0C[];
void func_002E8510(char *);

void func_00418280(char *p) {
    char *s;
    int t;
    t = *(signed char *)(p + 0x38);
    s = *(char **)(D_01CAFF0C[0] + 4);
    if (s != 0) {
        signed char k = t;
        if (k == 0) {
            *(int *)(s + 0x1C) = *(int *)(s + 0x1C) + 1;
            *(int *)(s + 0x90) = *(int *)(s + 0x90) + 1;
        } else {
            (*(unsigned char *)(k + (int)s + 0x20))++;
        }
    }
    func_002E8510(p);
}

extern char *D_01CAFF0C[];
int func_0024D640(char *);
int func_002D9FA0(char *, char *);

int func_00316FC0(char *p) {
    char *e = *(char **)(D_01CAFF0C[0] + 0xC);
    if ((unsigned char)func_0024D640(e)) goto ok;
    return 0;
ok:
    return (unsigned char)func_002D9FA0(e, p + 0xC0) != 0;
}
