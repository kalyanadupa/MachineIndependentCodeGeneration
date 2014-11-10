    .file   "ass6_12CS30001_test_1.c"
    .text
    .globl  main
    .type   main, @function
_t19$ = -4
_t18$ = -8
_t17$ = -12
_t16$ = -16
_t15$ = -20
_t14$ = -24
_t13$ = -28
_t12$ = -32
_t11$ = -36
_t10$ = -40
_t09$ = -44
_t08$ = -48
_t07$ = -52
_t06$ = -56
_t05$ = -60
_i$ = -64
_c$ = -68
_b$ = -72
_a$ = -76
main:
    pushl %ebp
    movl %esp, %ebp
    subl $76, %esp
    movl _a$(%ebp), %eax
    cmpl _b$(%ebp), %eax
    jge .L2
    jmp .L4
.L2:
    movl $2, _t06$(%ebp)
    movl _t06$(%ebp), %eax
    movl %eax, _a$(%ebp)
.L4:
    movl _a$(%ebp), %eax
    cmpl _b$(%ebp), %eax
    jle .L6
    jmp .L8
.L6:
    movl $3, _t08$(%ebp)
    movl _t08$(%ebp), %eax
    movl %eax, _b$(%ebp)
.L8:
    movl _a$(%ebp), %eax
    cmpl _b$(%ebp), %eax
    jl .L10
    jmp .L12
.L10:
    movl $4, _t10$(%ebp)
    movl _t10$(%ebp), %eax
    movl %eax, _b$(%ebp)
.L12:
    movl _a$(%ebp), %eax
    cmpl _b$(%ebp), %eax
    jg .L14
    jmp .L16
.L14:
    movl $5, _t12$(%ebp)
    movl _t12$(%ebp), %eax
    movl %eax, _b$(%ebp)
.L16:
    movl $0, _t13$(%ebp)
    movl _t13$(%ebp), %eax
    movl %eax, _i$(%ebp)
.L18:
    movl _i$(%ebp), %eax
    cmpl _a$(%ebp), %eax
    jge .L24
    jmp .L27
.L20:
    movl _t15$(%ebp), %eax
    movl %eax, _i$(%ebp)
    movl _i$(%ebp), %eax
    movl %eax, _t15$(%ebp)
    movl _t15$(%ebp), %eax
    addl _$1, %eax
    movl %eax, _i$(%ebp)
    jmp .L18
.L24:
    movl $2, _t17$(%ebp)
    movl _t17$(%ebp), %eax
    movl %eax, _b$(%ebp)
    jmp .L20
.L27:
    movl _a$(%ebp), %eax
    cmpl _b$(%ebp), %eax
    jge .L29
    jmp .L32
.L29:
    movl $3, _t19$(%ebp)
    movl _t19$(%ebp), %eax
    movl %eax, _c$(%ebp)
    jmp .L27
.L32:
    leave
    ret
    .size	main, .-main
    .ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
    .section	.note.GNU-stack,"",@progbits
