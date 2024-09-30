section .text
    global f

f:
    ; rdi: primer parametro (a)
    ; rsi: segundo paramtro (b)
    ; rdx: tercer parametro (x)

    mov rax, rdi
    mul rdx             ; a * x
    add rax, rsi        ; (a * x) + b
    ret
