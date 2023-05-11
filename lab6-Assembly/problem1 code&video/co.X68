*-----------------------------------------------------------
* Title      :lab6 assembly Q1
* Written by :MOSTAFA khaled
* Date       :
* Description:Reverse an array consist of 10 items
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program
* Put program code here
      LEA Array1,A0   ;A0 starts from the last element in the array
      LEA Array1,A1   ;A1 starts from the first element in the array
      ADDA.L #20,A0   
      MOVE #5,D0      ;D0 is the counter of the loop
Next  
      MOVE   (A0),D1  
      MOVE   (A1),D2
      MOVE   D2,(A0)
      MOVE   D1,(A1)
      ADDA  #2,A1
      SUBA  #2,A0
      SUB #1,D0
      BNE NEXT  

    SIMHALT             ; halt simulator

* Put variables and constants here
Array1   DC.W  1, 3, 4, 6, 10, 12, 30, 31, 32, 33
ARRAY2   DC.W  10, 20, 30, 40, 50, 60, 70, 80, 90, 100

    END    START        ; last line of source


*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
