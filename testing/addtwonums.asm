; This program adds the values in memory locations 2000H and 2001H,
; and stores the result in memory location 2002H.

        MVI H, 20H      ; Load higher-order address 20H into H register
        MVI L, 00H      ; Load lower-order address 00H into L register

        MOV A, M        ; Load the value at memory location 2000H into the accumulator
        INX H           ; Increment HL to point to 2001H

        ADD M           ; Add the value at memory location 2001H to accumulator
        INX H           ; Increment HL to point to 2002H

        MOV M, A        ; Store the result from accumulator into memory location 2002H

        HLT             ; Stop the program
