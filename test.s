	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	-8(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jge	.L2
	movl	$2, -8(%ebp)
.L2:
	movl	-8(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jle	.L3
	movl	$3, -4(%ebp)
.L3:
	movl	-8(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jl	.L4
	movl	$4, -4(%ebp)
.L4:
	movl	-8(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jg	.L6
	movl	$5, -4(%ebp)
.L6:
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
	.section	.note.GNU-stack,"",@progbits
