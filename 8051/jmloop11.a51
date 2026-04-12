ORG 0000H

    MOV R1,#08H     


LOP1:
    MOV A,R1
    MOV P1,A           
    ACALL DELAY
	ACALL DELAY
	ACALL DELAY
	ACALL DELAY
	

    JZ ZERO_STATE     
    DJNZ R1,LOP1       


ZERO_STATE:
    MOV P1,#00H        
    ACALL DELAY

    MOV P1,#0FFH       
    ACALL DELAY

    SJMP ZERO_STATE   


DELAY:
    MOV R3,#255
D1: MOV R2,#255
D2: DJNZ R2,D2
    DJNZ R3,D1
    RET

END