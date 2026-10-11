/* Generator output (tools/gen_flow.py) that needed a small hand fix to match, e.g. a `return`
 * that must be a `break`. Types are the generator's offset-based placeholders. */

typedef struct { int w[4]; } __attribute__((aligned(16))) Q;



int func_0024E800();
int func_0038F2C0();
void func_0038F300();
void func_0041DBA0();

void func_0041FC60(p0) char *p0; {
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int tmp1;
    v0 = *(int *)(p0 + 1068);
    *(int *)(p0 + 1068) = (v0 & -8193);
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 1);
    v1 = *(unsigned char *)(p0 + 6);
    v2 = p0;
    switch (v1) {
    case 0:
        func_0038F300(p0, -1, v0);
        *(char *)(v2 + 6) = 1;
        /* fall through */
    case 1:
        func_0041DBA0(v2, (v2 + 1536));
        v3 = func_0024E800((v2 + 3104));
        tmp1 = (v3 & 255);
        v4 = (int)v2;
        if (tmp1 == 1) {
            v3 = func_0038F2C0(v4, 12);
        }
        break;
    }
}
