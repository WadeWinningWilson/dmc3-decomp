int func_00418520(char *, char *, int);

int func_00418390(char *p, char *name, char *h, unsigned int idx) {
    unsigned int *e;
    int *q;
    unsigned int i;
    if (name[0] != 'i' || name[1] != 'p' || name[2] != 'u' || name[3] != 'm') return 0;
    if (*(unsigned int *)h <= idx) return 0;
    e = (unsigned int *)(h + 4);
    q = (int *)(h + 0x800);
    for (i = 0; i < idx; i++) {
        q += (int)((e[i] << 11) >> 2);
    }
    return func_00418520(p, name, (int)q);
}
