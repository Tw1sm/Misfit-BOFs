    .section .runtime,"xw"
#ifdef __x86_64__
    .globl RuntimeEnd
RuntimeEnd:
#else
    .globl _RuntimeEnd
_RuntimeEnd:
#endif
    nop
