// cc: ee-gcc2.96 -O2 -G0
void func_001265F0();

int func_0012A6F0(p0) char *p0; {
    if ((*(unsigned short *)(p0 + 12) & 9) == 9) {
        func_001265F0();
        return;
    } else {
        return 0;
    }
}

extern char D_01DFC7EC[];

int func_0010E3E0();

int func_0012A8A8(p0, p1) int p0; int p1; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = D_01DFC7EC;
    *(int *)(v1 + 0) = 0;
    v2 = func_0010E3E0(p1);
    if (v2 == -1) {
        v3 = *(int *)(v1 + 0);
        if (v3 != 0) {
            *(int *)(v0 + 0) = v3;
        }
    }
    return v2;
}

extern char D_00518310[];

void func_0012A9F0();

void func_0012AB60(p0) int p0; {
    func_0012A9F0(*(int *)D_00518310, p0);
}

void func_0012A970();

void func_0012AB80(p0, p1) int p0; int p1; {
    func_0012A970(*(int *)D_00518310, p0, p1);
}

void func_0012A900();

void func_0012ABA8() {
    func_0012A900(*(int *)D_00518310);
}

void func_0012AAC8();

void func_0012ABC8(p0) int p0; {
    func_0012AAC8(*(int *)D_00518310, p0);
}
