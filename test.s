	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	-16(%ebp), %eax
	cmpl	-12(%ebp), %eax
	jge	.L2
	movl	$2, -16(%ebp)
	jmp	.L4
.L2:
	movl	$3, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
.L4:
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
	.section	.note.GNU-stack,"",@progbits
