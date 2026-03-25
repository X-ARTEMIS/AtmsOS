; 3/24/26, @Stari-Div
; boot.asm

; ## Comment ##
; First time doing .asm, don't know what im doing.
; ##         ##

%macro BiosPrint 1
                mov si, word %1 ; Printing to Bios? Please help @Ghoul, you know .asm right?
ch_loop:lodsb ; Loop start
   or al, al
   jz done
   mov ah, 0x0E
   int 0x10
   jmp ch_loop ; Jumps to ch_loop... Smart
done:
%endmacro ; What does this mean

[ORG 0x7c00] ; Read about ORG when you wake up I think its important
   xor ax, ax
   mov ds, ax
   cld

   BiosPrint msg ; Ahh, so thats where the "msg" came from

hang:
   jmp hang ; What is this for? A empty loop?

msg   db 'Hello World', 13, 10, 0 ; Im so confused...

   times 510-($-$$) db 0
   db 0x55
   db 0xAA

; Im making Artemis* OS real @Ghoul
; Mark my words
; These comment will be deleted soon but github will save them (thanks git)

; You know .asm right? Please help...
; ik c++ not asm;
; "I thought I was learning C++, but it turned out I was learning C, with classes"
