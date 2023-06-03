section .data
	message db 'Hello, Holberton', 10, 0

section .text
	extern printf
	global main

main:
	push message
	call printf
	add esp, 4
	xor eax, eax
	ret
