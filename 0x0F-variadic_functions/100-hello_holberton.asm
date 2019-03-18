;; 4. (advanced - 100) Print to terminal using assembly like a boss
;; to compile:
;; nasm -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o -o hello

	global main

	section .text
main:
	mov	rax, 1		;R0
	mov	rdi, 1		;R7
	mov	rsi, message	;R6
	mov	rdx, 17		;R2
	syscall
	mov	rax, 60		;R0
	xor	rdi, rdi	;R7
	syscall

	section .data
message db	"Hello, Holberton", 10
