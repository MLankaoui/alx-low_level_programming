section .data
    hello db "Hello, Holberton",10  ; The string to print, with a newline character

section .text
    global _start

_start:
    ; Call printf to print the string
    mov rdi, hello          ; Load the address of the string into rdi
    call printf            ; Call the printf function

    ; Exit the program
    mov rax, 60            ; sys_exit system call number
    xor rdi, rdi           ; Status code 0
    syscall