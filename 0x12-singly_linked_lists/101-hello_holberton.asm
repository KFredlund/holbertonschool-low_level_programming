global	main

	section	.text
_start:	mov	rax, 1		; write
	mov	rdi, 1		; STDOUT_FILENO,
	mov 	rsi, message	; Address of string to output
	mov 	rdx, 17		; Number of bytes
	syscall			; invoke os to do the write
	mov 	rax, 60		; system call for exit
	xor 	rdi, rdi	; exit code 0
	syscall			; invoke os to exit

	section .data
messag:	db 	"Hello, Holberton", 10
