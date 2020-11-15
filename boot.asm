mov ah, 0x0e
int 0x10
mov bx, welcome
add bx, 0x7c00
mov al, [bx]
int 0x10
welcome:
    ; ASCII code 0x58 ('X') is stored just before the zero-padding.
    ; On this code that is at byte 0x2d (check it out using 'xxd file.bin')
    db "Welcome to RetroOS."
