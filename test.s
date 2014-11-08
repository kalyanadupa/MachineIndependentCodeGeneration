	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	$5, -12(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-8(%ebp), %eax
	negl	%eax
	movl	%eax, -12(%ebp)
	movl	-4(%ebp), %eax
	movl	-8(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-4(%ebp), %eax
	movl	-8(%ebp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-8(%ebp), %eax
	imull	-4(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-8(%ebp), %eax
	cltd
	idivl	-4(%ebp)
	movl	%eax, -12(%ebp)
	movl	-8(%ebp), %eax
	cltd
	idivl	-4(%ebp)
	movl	%edx, -12(%ebp)
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
	.section	.note.GNU-stack,"",@progbits
