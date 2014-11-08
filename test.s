	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-8, %esp
	subl	$20, %esp
	fldl	12(%esp)
	fnstcw	2(%esp)
	movzwl	2(%esp), %eax
	movb	$12, %ah
	movw	%ax, (%esp)
	fldcw	(%esp)
	fistpl	8(%esp)
	fldcw	2(%esp)
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1"
	.section	.note.GNU-stack,"",@progbits
