#ifndef DMC3_GAME_WORK_H
#define DMC3_GAME_WORK_H

/* Capcom heap block (0x10 bytes); methods live in the library block at 0x13D240+. */
class CLib10 {
public:
    CLib10() { Init(); }
    ~CLib10();
    void Init();
    void Reset();
    void *Alloc(int size, int mode);
    char pad[0x10];
};

/* CWork: root of the task objects (RTTI "CWork", vtable 0x5A6F50). */
class CWork {
public:
    virtual ~CWork() {}
    /* the other six primary slots (vtable 0x5A6F50; 0x195860 and 0x195680 are the last two) */
    virtual void Work04();
    virtual void Work08();
    virtual void Work0C();
    virtual void Work10();
    virtual void Work14();
    virtual void Work18();
    char pad4[0x14];
    char unk18;             /* registered with the task list */
    char pad19[0x24 - 0x19];
    CLib10 m24;             /* the heap block this object was allocated from */
    int unk34;
    int unk38;              /* number of member heap blocks in use */
};

#endif
