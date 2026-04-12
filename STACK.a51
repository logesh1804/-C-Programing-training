ORG 0000H
	LOOP:
	  MOV A,#0FFH
	  PUSH ACC
	  MOV A,#00H
	  PUSH ACC
	  POP 30H
	  MOV A,30H
	  MOV P1,A
	  ACALL DELAY
	   ACALL DELAY
	   ACALL DELAY
	  POP 32H
	  MOV A,32H
	  MOV P1,A
	   ACALL DELAY
	   ACALL DELAY
	   ACALL DELAY
	  SJMP LOOP
		  
		  DELAY:
		  MOV R1,#255
		  D1:MOV R2,#255
		  D2:DJNZ R2,D2
		  DJNZ R1,D1
		  RET
		  END
		  
		  
	  