;; print "Hello, Holberton\n" using printf in assembly
;; to complie:
;;  nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello

	global main
	extern printf

	section .text
main:	mov	rdi, hello
	xor	rax, rax
	;; sub	rsp, 8		; align stack b/f call
	call	printf
	ret
	;; add	rsp, 8		; return stack to prev. loc.
	mov	rax, 60		; call exit
	xor	rdi, rdi	; exit 0
	syscall			; execute exit



	section .data
hello	db	"Hello, Holberton", 10, 0

;; why was aligning the stack not needed and causing seg fault?
;; Isn't it supposed to be aligned to 16-bit before any call?