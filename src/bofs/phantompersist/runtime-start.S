    .section .runtime,"xw"
#ifdef __x86_64__
    .text
    .globl RuntimeSource
RuntimeSource:
    leaq RuntimeStart(%rip), %rax
    ret
    .section .runtime,"xw"
    .globl RuntimeStart
RuntimeStart:
    .long RuntimeEnd-RuntimeStart
    .long RuntimeContextSlot-RuntimeStart
    .long RuntimeWndProc-RuntimeStart
    .long RuntimeThread-RuntimeStart
    .globl RuntimeGetContext
RuntimeGetContext:
    leaq RuntimeContextSlot(%rip), %rax
    movq (%rax), %rax
    ret
    .p2align 3
    .globl RuntimeContextSlot
RuntimeContextSlot:
    .quad 0
#else
    .globl _RuntimeStart
_RuntimeStart:
    .globl _RuntimeGetContext
_RuntimeGetContext:
    call 1f
1:
    popl %eax
    addl $(_RuntimeContextSlot-1b), %eax
    movl (%eax), %eax
    ret
    .p2align 2
    .globl _RuntimeContextSlot
_RuntimeContextSlot:
    .long 0
#endif
