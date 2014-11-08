    .file   "test.c"
    .text
    .globl  main
    .type   main, @function
_t08$ = -4
_t07$ = -8
_t06$ = -12
_t05$ = -16
_t04$ = -20
_c$ = -24
_b$ = -28
_a$ = -32
main:
    pushl %ebp
    movl %esp, %ebp
    subl $32, %esp
    movl _b$(%ebp), %eax
    movl %eax, _a$(%ebp)
    movl _b$(%ebp), %eax
    addl _c$(%ebp), %eax
    movl %eax, _t04$(%ebp)
    movl _t04$(%ebp), %eax
    movl %eax, _a$(%ebp)
    movl _b$(%ebp), %eax
    subl _c$(%ebp), %eax
    movl %eax, _t05$(%ebp)
    movl _t05$(%ebp), %eax
    movl %eax, _a$(%ebp)
    movl _b$(%ebp), %eax
    imull _c$(%ebp), %eax
    movl %eax, _t06$(%ebp)
    movl _t06$(%ebp), %eax
    movl %eax, _a$(%ebp)
    movl _b$(%ebp), %eax
    cltd
    idivl _c$(%ebp)
    movl %eax, _t07$(%ebp)
    movl _t07$(%ebp), %eax
    movl %eax, _a$(%ebp)
    movl _b$(%ebp), %eax
    cltd
    idivl _c$(%ebp)
    movl %eax, _t08$(%ebp)
    movl _t08$(%ebp), %eax
    movl %eax, _a$(%ebp)
    leave
    ret
