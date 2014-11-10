    .file   "test.c"
    .text
    .globl  main
    .type   main, @function
_t14$ = -4
_t13$ = -8
_t12$ = -6407064
_t11$ = -6407068
_t10$ = -6407072
_t09$ = -6407076
_t08$ = -6407080
_t07$ = -10645450
_t06$ = -10645454
_t05$ = -10645458
_i$ = -10645462
_c$ = -10645466
_b$ = -10645470
_a$ = -10645474
main:
    pushl %ebp
    movl %esp, %ebp
    subl $10645474, %esp
    movl _a$(%ebp), %eax
    cmpl _b$(%ebp), %eax
    jge .L2
    jmp .L5
.L2:
    movl $2, _t06$(%ebp)
    movl _t06$(%ebp), %eax
    movl %eax, _a$(%ebp)
    jmp .L8
.L5:
    movl $3, _t08$(%ebp)
    movl _t08$(%ebp), %eax
    movl %eax, _c$(%ebp)
    movl _c$(%ebp), %eax
    movl %eax, _i$(%ebp)
.L8:
    movl $0, _t09$(%ebp)
    movl _t09$(%ebp), %eax
    movl %eax, _i$(%ebp)
.L10:
    movl _i$(%ebp), %eax
    cmpl _a$(%ebp), %eax
    jge .L16
    jmp .L20
.L12:
    movl _t11$(%ebp), %eax
    movl %eax, _i$(%ebp)
    movl _i$(%ebp), %eax
    movl %eax, _t11$(%ebp)
    movl _t11$(%ebp), %eax
    addl _1$(%ebp), %eax
    movl %eax, _i$(%ebp)
    jmp .L10
.L16:
    movl $3, _t13$(%ebp)
    movl _i$(%ebp), %eax
    addl _t13$(%ebp), %eax
    movl %eax, _t14$(%ebp)
    movl _t14$(%ebp), %eax
    movl %eax, _c$(%ebp)
    jmp .L12
    leave
    ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
	.section	.note.GNU-stack,"",@progbits
