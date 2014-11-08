	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	-12(%ebp), %eax
	movl	-16(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -8(%ebp)
	movl	$3, -4(%ebp)
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
	.section	.note.GNU-stack,"",@progbits
