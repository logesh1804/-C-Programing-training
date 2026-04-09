MAIN:
    MOV P1, #0FFH     ; All LEDs ON
    ACALL DELAY

    MOV P1, #00H      ; All LEDs OFF
    ACALL DELAY

    SJMP MAIN         ; Repeat forever

; -------- Delay --------
DELAY:
    MOV R0, #255
D1: MOV R1, #255
D2: DJNZ R1, D2
    DJNZ R0, D1
    RET
