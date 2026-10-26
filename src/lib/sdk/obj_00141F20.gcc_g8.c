// cc: ee-gcc2.96 -O2 -G8
void func_00142028();

void func_00142058(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_00142028(p0, (p0 + (p1 << 1)), p3);
    func_00142028((p0 + (p2 << 1)), (p0 + ((p2 + p1) << 1)), p3);
}

void func_001420C8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_00142028(p0, (p0 + (p1 << 1)), p3);
}
