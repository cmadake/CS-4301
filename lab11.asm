STRT  NOP          Ryan Dennis - Lab 11
      RDI YEAR     Accept the input for X
      LDA YEAR     Load YEAR in regA
      IDV I19      regA / 19
      STQ A        Store regQ in A
      LDA YEAR     Load YEAR in regA
      IDV I100     A / 100
      STA B        Store regA in B
      STQ C        Store regQ in C
      IDV I4       B / 100
      STA D        Store regA in D
      STQ E        Store regQ in E
      LDA B        Load B in regA
      IAD I8       B + 8
      IDV I25      / 25
      STA F        Store regA in F
      LDA B        Load B in regA
      ISB F        B + F
      IAD I1       B + F - 1
      IDV I3       B + F - 1 / 3
      STA G        Store regA in G
      LDA A        Load A in regA
      IMU I19      A * 19
      IAD B        (A * 19) + B
      ISB D        (A * 19) + B - D
      ISB G        (A * 19) + B - D - G
      IAD I15      (A * 19) + B - D - G + 15
      IDV I30      A * 19) + B - D - G + 15 / 30
      STQ H        Store regQ in H
      LDA C        Load C into regA
      IDV I4       C / 4
      STA I        Store regA in I
      STQ K        Store remainder in K
      LDA E        Load E into regA
      IAD I        
      IMU I2       
      IAD I32      
      ISB H        
      ISB K        
      IDV I7       
      STQ L        
      LDA H        
      IMU I11      
      STA B        Store regA in b (B fin after H)
      LDA L        
      IMU I22      
      IAD B        (11 * H) + (22 * L)
      IAD A        
      IDV I451     
      STA M        
      IMU I7       M * 7
      STA C        Store regA in C (C fin after K)
      LDA H        
      IAD L        
      ISB C        
      IAD I114     
      IDV I31      
      STA N        
      STQ P        
      PRI N        
      LDA P        
      IAD I1       
      STA P        
      PRI P        
      PRI YEAR     
YEAR  BSS 0001     Storage for the year
A     BSS 0001     Storage for A
B     BSS 0001     Storage for B
C     BSS 0001     Storage for C
D     BSS 0001     Storage for D
E     BSS 0001     Storage for E
F     BSS 0001     Storage for F
G     BSS 0001     Storage for G
H     BSS 0001     Storage for H
I     BSS 0001     Storage for I
K     BSS 0001     Storage for K
L     BSS 0001     Storage for L
M     BSS 0001     Storage for M
N     BSS 0001     Storage for N
P     BSS 0001     Storage for P
I1    DEC 0001     Storage for 1
I2    DEC 0002     Storage for 2
I3    DEC 0003     Storage for 3
I4    DEC 0004     Storage for 4
I7    DEC 0007     Storage for 7
I8    DEC 0008     Storage for 8
I11   DEC 0011     Storage for 11
I15   DEC 0015     Storage for 15
I19   DEC 0019     Storage for 19
I22   DEC 0022     Storage for 22
I25   DEC 0025     Storage for 25
I30   DEC 0030     Storage for 30
I31   DEC 0031     Storage for 31
I32   DEC 0032     Storage for 32
I100  DEC 0100     Storage for 100
I114  DEC 0114     Storage for 114
I451  DEC 0451     Storage for 451
      END STRT     End; begin execution at label STRT