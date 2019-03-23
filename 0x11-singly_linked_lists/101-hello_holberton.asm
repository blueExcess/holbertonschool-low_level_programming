;; print "Hello, Holberton\n" using printf in assembly
;; to complie:
;;  nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello

	global main
	extern printf

	section .text
main:	mov	rdi, hello	; was rdi, format
	;; mov	rsi, hello
	xor	rax, rax
	sub	rsp, 8		; align stack b/f call
	;; push	rbp
	call	printf

	;; pop	rbp
	mov	rax, 0
	add	rsp, 8		; return stack to prev. loc.
	;; mov	rax, 60		; call exit
	;; xor	rdi, rdi	; exit 0
	;; syscall		; execute exit



	section .data
;; format	db	"%s", 10, 0
hello	db	"Hello, Holberton", 10, 0
