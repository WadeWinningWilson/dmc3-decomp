/*
 * Memory card screen UI, class CUIDMemoryCard (RTTI; vtable 0x5BA060),
 * USA 0x004E3860-0x004E4300. Member names are placeholders.
 */
#include "game/work.h"

/* 0x600-byte UI part; destructor at 0x2791E0. */
class CUnk2791E0 {
public:
    ~CUnk2791E0();
    char pad[0x600];
};

class CUIDMemoryCard : public CWork {
public:
    virtual ~CUIDMemoryCard();
    CLib10 m3C[20];
    int unk17C;
    char pad180[0x1C0 - 0x180];
    CUnk2791E0 m1C0[7];
    CUnk2791E0 m2BC0;
    CUnk2791E0 m31C0;
};

CUIDMemoryCard::~CUIDMemoryCard() {
}
