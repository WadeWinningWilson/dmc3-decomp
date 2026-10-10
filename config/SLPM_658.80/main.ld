/* Address-ordered link of the JP main load segment (vram 0x100000).
 * splat's generated script groups by section type, which would move the
 * __sinit code (0x5A5680) ahead of .data; this keeps the original order. */
SECTIONS
{
    _gp = 0x5C2F70;
    .main 0x100000 :
    {
        build/jp/asm/jp/text.o(.text);            /* 0x100000 .text            */
        build/jp/asm/jp/data/data.data.o(.data);  /* 0x50F780 .vutext + data   */
        build/jp/asm/jp/sinit.o(.text);           /* 0x5A5680 __sinit_*        */
        build/jp/asm/jp/data/ctors_data.data.o(.data); /* 0x5A65A0 .ctors ... */
    }
    main_END = .;
    .bss (NOLOAD) : { build/jp/asm/jp/data/4BD800.bss.o(.bss); }
    /DISCARD/ : { *(.reginfo) *(.MIPS.abiflags) *(.pdr) *(.gnu.attributes) *(.comment) *(.mdebug*) }
}
