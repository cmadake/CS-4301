STRT  NOP          Ryan Dennis - Lab 12
      RDI H        Accept the input for H
      LDA H        Load H in regA
L2    AZJ STOP     If H = 0, STOP
      RDI U        Read U
      RDI V        Read V
      PRI U        Print U
      PRI V        Print V
      LDA U        Load U in regA
      AMJ L4       If U < 0, Multip -1
L3    LDA V        Load V in regA
      AMJ L5       If V < 0, Multip -1
      LDA U        
      AZJ L6       
      LDA V        
      AZJ L7       
L9    LDA U        
      IDV V        
      STQ REM      
      LDA REM      
      AZJ L6       If REM = 0, J1
      LDA V        
      STA U        
      LDA REM      
      STA V        
      UNJ L9       
L4    IMU IN1      The true for U
      STA U        Replace U
      UNJ L3       Jump to V stage
L5    IMU IN1      The true for V
      STA V        Replace V
      UNJ L3       L3 is false now
L6    LDA V        
      STA GCD      Put V in GCD
L8    PRI GCD      
      LDA H        
      ISB I1       
      STA H        
      UNJ L2       
L7    LDA U        
      STA GCD      
      UNJ L8       
STOP  HLT          
H     BSS 0001     Storage for the input
U     BSS 0001     Storage for the input
V     BSS 0001     Storage for the input
GCD   BSS 0001     Storage for the GCD
REM   BSS 0001     Storage for the REM
I1    DEC 0001     Storage for 1
IN1   DEC -001     Storage for Negative 1
      END STRT     End; begin execution at label STRT