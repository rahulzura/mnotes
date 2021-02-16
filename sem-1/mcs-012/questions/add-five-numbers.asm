; Add 5 numbers stored in an array and store the sum in AX register

section .data
    arr: db 1, 0, 2, 3, 2, ; db takes 1 byte
    digit db 0,10

section .text
    global _start

_start:
    mov rax, 0 ; rax stores 0
    mov rbx, 0 ; store the index of arr in rbx
; loop over the array and add the elements in rax
_addLoop:
    add rax, [arr+rbx] ; add rax and element at position rbx in rax
    inc rbx ; increment rbx

    cmp rbx, 5 ; compare rbx and 5
    jne _addLoop ; if not equal (ZF is 0), jump to _addLoop

    call _printRAXDigit
    call _sysExit

_printRAXDigit:
    add rax, 48 ; 48 is the ascii of 0
    mov [digit], al ; load the least significant (right most) byte of rax into first byte of pointed to by digit
    
    mov rax, 1
    mov rdi, 1
    mov rsi, digit
    mov rdx, 2
    syscall
    ret

_sysExit:
    mov rax, 60
    mov rdi, 0
    syscall