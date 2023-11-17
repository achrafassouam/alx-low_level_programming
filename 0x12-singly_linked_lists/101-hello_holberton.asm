section .text

global main

main:

; Print the message to standard output
mov rax, 1
mov rdi, 1
mov rsi, txt
mov rdx, txtlen
syscall

; Exit the program with exit code 0
mov rax, 60
xor rdi, rdi
syscall

; Date to print
section .rodata
txt: db "Hello, Holberton", 10
txtlen: equ $ - txt
