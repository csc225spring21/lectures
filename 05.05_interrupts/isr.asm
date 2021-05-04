; Responds to keyboard interrupts.
; NOTE: Must set 0xFE00 to 0x4000 and 0x0180 to 0x1000.

        .ORIG x1000
KBISR

KBDR    .FILL xFE02
        .END
