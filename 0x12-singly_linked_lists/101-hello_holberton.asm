section .data
    hello db "Hello, Holberton", 10, 0  ; Message string with newline and null terminator

section .text
    global main
    extern printf

main:
    push rdi          ; Save registers
    push rsi
    push rax

    lea rdi, [hello]  ; Load the address of the message string
    call printf      ; Call the printf function

    pop rax          ; Restore registers
    pop rsi
    pop rdi

    xor rax, rax     ; Return 0 from main
    ret

