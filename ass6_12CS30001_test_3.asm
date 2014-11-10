    .file   "ass6_12CS30001_test_3.c"
    .text
    .globl  main
    .type   main, @function
_t13$ = -4
_t12$ = -8
_t11$ = -12
_t10$ = -16
_t09$ = -20
_t08$ = -24
_i$ = -28
_t06$ = -32
_t05$ = -36
_d$ = -40
_c$ = -44
_b$ = -48
_a$ = -52
main:
    pushl %ebp
    movl %esp, %ebp
    subl $52, %esp
    movl _b$(%ebp), %eax
    imull _c$(%ebp), %eax
    movl %eax, _t05$(%ebp)
    movl _t05$(%ebp), %eax
    addl _d$(%ebp), %eax
    movl %eax, _t06$(%ebp)
    movl _t06$(%ebp), %eax
    movl %eax, _a$(%ebp)
    movl _t08$(%ebp), %eax
    movl %eax, _i$(%ebp)
    movl _i$(%ebp), %eax
    movl %eax, _t08$(%ebp)
    movl _t08$(%ebp), %eax
    addl _$1, %eax
    movl %eax, _i$(%ebp)
    movl _a$(%ebp), %eax
    addl _b$(%ebp), %eax
    movl %eax, _t09$(%ebp)
    movl _t09$(%ebp), %eax
    subl _c$(%ebp), %eax
    movl %eax, _t10$(%ebp)
    movl _t10$(%ebp), %eax
    movl %eax, _d$(%ebp)
    movl _b$(%ebp), %eax
    imull _c$(%ebp), %eax
    movl %eax, _t11$(%ebp)
    movl _a$(%ebp), %eax
    addl _t11$(%ebp), %eax
    movl %eax, _t12$(%ebp)
    movl _t12$(%ebp), %eax
    addl _d$(%ebp), %eax
    movl %eax, _t13$(%ebp)
    movl _t13$(%ebp), %eax
    movl %eax, _a$(%ebp)
.L13:
    leave
    ret
    .size	main, .-main
    .ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
    .section	.note.GNU-stack,"",@progbits
