extern printf

section .text
	push rbp

	mov rdi, fmt
	mov rsi, msg
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret

section .dat
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
