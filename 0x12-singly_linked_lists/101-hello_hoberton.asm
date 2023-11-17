section .data
    hello db "Hello, Holberton", 0

section .text
    global _start

_start:
    ; Call printf
    mov rdi, hello
    mov rax, 0      ; printf syscall number
    call printf

    ; Exit the program
    mov rax, 60     ; exit syscall number
    xor rdi, rdi    ; exit code 0
    syscall

section .text
    ; Import the printf function from the C library
    extern printf
