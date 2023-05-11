*-----------------------------------------------------------
* Title      :lab6 assembly Q1
* Written by :MOSTAFA khaled
* Date       :
* Description:Reverse an array consist of 10 items
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program
* Put program code here
      LEA key,A1
      LEA OINDEX,A3  A3 is the pointer to OINDEX
      LEA OINDEX,A4  help to check start of OINDEX in the memory
      MOVE #8,D0     D0 is the counter of keys         
first   
      MOVE (A1)+,D2   D2 carry value of the element in array key
      LEA  DATA,A2    A2 carry address of first item in array data in the memory
      MOVE #1,D1      D1 is the counter of data and I assumed it is one based
second    
     MOVE.W (A2)+,D3  D3 carry content of DATA
     cmp D2,D3
     BEQ nextKey
     ADD #1,D1
     cmp #11,D1
     BNE second      
     BRA nextKey  
nextKey 
     MOVE D1,(A3)+   if item exist add it's index else add 11
     SUB #1,D0       
     BNE first
     BRA finish
finish     

    SIMHALT             ; halt simulator

* Put variables and constants here
DATA DC.W   13,15,14,68,-3,20,85,30,1,19
key DC.W    1, 6, 9, 15, 68, 13, 19, 30
OINDEX DS.W 8

    END    START        ; last line of source



*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
