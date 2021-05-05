; Implements interrupt-driven keyboard interrupts.
; NOTE: In order to run this ISR, 0x0180 must be set to 0x1000, and bit 14 of
;       the KBSR (0xFE00) must be set to '1' (0x4000).

        .ORIG x1000     ; Start within the memory reserved for the OS.

; NOTE: In this case, this label will never actually be used, since an ISR
;       doesn't actually have any callers.
KBISR   ST  R0, SAVER0  ; We must save *all* registers we plan to modify.
        LDI R0, KBDR    ; There is no need to poll; if we got this far, a
                        ;  character *must* have been typed.

        OUT             ; Do something with the character, e.g., print it out.

        LD  R0, SAVER0  ; Restore R0.
        RTI             ; Return to the interrupted program.

; NOTE: Due to a bug in the simulator, we cannot set any breakpoints before the
;       the interrupt has been handled. In this case, the first safe place to
;       set a breakpoint is on the "OUT", since the "LDI" reads the character
;       that caused the interrupt.

SAVER0  .FILL x0000
KBDR    .FILL xFE02
        .END
