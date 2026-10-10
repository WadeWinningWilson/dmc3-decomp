/* Accessors for a table of 44-byte records at +0x2CC, each holding 16-byte rows of halfwords
 * (0x001AE220-0x001AE2E0). Real names unknown; the layout is reconstructed from the offsets. */

typedef struct Row {
    unsigned short f0;
    unsigned short pad2;
    unsigned short f4;
    unsigned short pad6;
    unsigned short f8;
    unsigned short padA;
    unsigned short fC;
    unsigned short fE;
} Row;

typedef struct Record {
    Row row[2];
    char pad[12];
} Record;

typedef struct Table {
    char pad[0x2CC];
    Record rec[1];
} Table;

int func_001AE220(Table *t, int i, int j) { return t->rec[i].row[j].f0; }
int func_001AE250(Table *t, int i, int j) { return t->rec[i].row[j].f4; }
int func_001AE280(Table *t, int i, int j) { return t->rec[i].row[j].fC; }
int func_001AE2B0(Table *t, int i, int j) { return t->rec[i].row[j].fE; }
int func_001AE2E0(Table *t, int i, int j) { return t->rec[i].row[j].f8; }
