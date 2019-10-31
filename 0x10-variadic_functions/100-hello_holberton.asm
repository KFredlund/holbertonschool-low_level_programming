	global	_start

	section	.text
_start:	mov	rax, 1                  ; system call for write
	mov	rdi, 1                  ; file handle 1 is stdout
	mov	rsi, message            ; address of string to output
	mov	rdx, 17                 ; number of bytes
	syscall                          ; invoke operating system to do the write

	mov	rax, 60
	mov	rdi, 0                 ; system call for exit
	syscall                          ; invoke operating system to exit

	section	.rodata
message:  db        "Hello, Holberton", 10  ; note the newline at the end
