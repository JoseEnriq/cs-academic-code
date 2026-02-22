BITS 16
org 0x7c00

start:
    ; Carregar o segundo setor (512 bytes) do disco na memória
    mov ax, 0x0002    ; setor 2
    mov bx, 0x0000    ; memória: endereço 0x0000
    mov cx, 0x0001    ; cabeçote 0, cilindro 0
    mov dx, 0x0080    ; unidade 0
    int 0x13          ; interrupção de leitura do disco

    ; Verificar erro
    jc read_error

    ; Transferir controle para o segundo setor carregado
    jmp 0x0000:0x0000

read_error:
    mov ah, 0x0e
    mov al, 'E'
    int 0x10
    cli
    hlt

times 510-($-$$) db 0
dw 0xaa55
