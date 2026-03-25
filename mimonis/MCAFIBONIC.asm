	   LHLD 2100
	   MOV B,H
	   MOV C,L
	  LDA 2000
                          MOV E,A

LOOP:	   MOV A,B
	   ADD C
	   MOV D,A
	   MOV B,C
	   MOV C,D
	   DCR E
	   JNZ LOOP
	   HLT
