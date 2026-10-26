// cc: ee-gcc2.96 -O2 -G0
int func_0017D320(p0, p1, p2) char *p0; int p1; char *p2; {
    p0 = (p0 + (p1 * 116));
    *(int *)(p2 + 0) = *(int *)(p0 + 4892);
    return (p1 * 116);
}

void func_0017D378();

void func_0017D348(p0, p1, p2) int p0; int p1; int p2; {
    func_0017D378(p0, p1, p2, 0);
}

void func_0017D360(p0, p1, p2) int p0; int p1; int p2; {
    func_0017D378(p0, p1, p2, 1);
}
