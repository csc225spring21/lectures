        .ORIG x3000

        ; Place arguments into R0 and R1.
        ; Save R2 and R7, if needed.
        JSR SUB         ; Call "SUB".
        ; Do something with the return value in R2.
        ; Restore R2 and R7, if needed.

        ; Place arguments into R0 and R1.
        ; Save R2 and R7, if needed.
        JSR SUB         ; Call "SUB" again.
        ; Do something with the return value in R2.
        ; Restore R2 and R7, if needed.

        HALT

; Subtracts one integer from another.
;  Takes the minuend in R0 and the subtrahend in R1.
;  Returns the difference in R2.

SUB     ST  R3, SAVER3  ; Save R3.
        NOT R3, R1      ; Negate R1.
        ADD R3, R3, #1
        ADD R2, R0, R3  ; Add -R1 to R0.
        LD  R3, SAVER3  ; Restore R3.
        RET             ; Return.

SAVER3  .FILL x00

        .END
