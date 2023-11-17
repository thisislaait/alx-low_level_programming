global main
extern printf

section .data
    message db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
main:
    push rbp
    lea rsi, [message]
    mov rdi, format
    mov rax, 0
    call printf
    pop rbp
    mov rax, 0
    ret
