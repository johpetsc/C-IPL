.table
float notas_s1[100] = {.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}
int notas_s1_size = 0
int n_s1
char _s0[] = "Qual o número de provas?"
int i_s1
float nota_s2
char _s1[] = "Digite a nota da prova "
char _s2[] = ":"
float soma_s1
float AUX_s1[100] = {.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}
int AUX_s1_size = 0
float media1_s1
float media2_s1
char _s3[] = "Há um problema no cálculo da média"
char _s4[] = "Parabéns!"
int NIL[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int NIL_size = 0

.code
_main:
mov $400, &notas_s1
mov $500, &NIL
mov $600, 0

mov $601, NIL_size
L0:
mov $603, $500[$600]
inttofl $603, $603
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L0, $602
mov notas_s1_size, $601
// out
mov $1000, 25
mov $999, 0
L1:
mov $0, &_s0
mov $0, $0[$999]
print $0
sub $1000, $1000, 1
add $999, $999, 1
brnz L1, $1000
print '\n' 
// in
scanf $665
fltoint $665, $665
mov n_s1, $665
mov i_s1, 0
// for
L2:
slt $1, i_s1, n_s1
jump L3
L5:
add $2, i_s1, 1
mov i_s1, $2
jump L2
L4:
// out
mov $1000, 23
mov $999, 0
L6:
mov $3, &_s1
mov $3, $3[$999]
print $3
sub $1000, $1000, 1
add $999, $999, 1
brnz L6, $1000
// out
print n_s1
// out
mov $1000, 1
mov $999, 0
L7:
mov $4, &_s2
mov $4, $4[$999]
print $4
sub $1000, $1000, 1
add $999, $999, 1
brnz L7, $1000
print '\n' 
// in
scanf $665
mov nota_s2, $665
mov $500, &notas_s1
mov $601, notas_s1_size
brz L9, $601
sub $602, $601, 1
L8:
mov $604, $500[$602]
mov $500[$601], $604
sub $602, $602, 1
sub $601, $601, 1
brnz L8, $601
L9:
mov $500[0], nota_s2
add notas_s1_size, notas_s1_size, 1
mov $400, &notas_s1
mov $500, &notas_s1
mov $600, 0

mov $601, notas_s1_size
L10:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L10, $602
mov notas_s1_size, $601
jump L5
L3:
brnz L4, $1
mov $700, 0
inttofl $700, $700
mov soma_s1, $700
mov $400, &AUX_s1
mov $500, &notas_s1
mov $600, 0

mov $601, notas_s1_size
L11:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L11, $602
mov AUX_s1_size, $601
// for
L12:
mov $400, &AUX_s1
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, AUX_s1_size
mov $5, 0
sub $603, $601, $602
brnz L16, $603

mov $5, 1
L17:
mov $700, $400[$600]
fltoint $700, $700
mov $701, $500[$600]
seq $5, $701, $700
brz L16, $5
sub $602, $601, $600
add $600, $600, 1
brnz L17, $602
L16:
not $5, $5
jump L13
L15:
// tail
mov $500, &AUX_s1
mov $600, 0
mov $605, 1
mov $601, AUX_s1_size
brz L18, AUX_s1_size
L19:
mov $603, $500[$605]
mov $500[$600], $603
add $600, $600, 1
add $605, $605, 1
sub $602, $601, $600
brnz L19, $602
sub AUX_s1_size, AUX_s1_size, 1
L18:
mov $400, &AUX_s1
mov $500, &AUX_s1
mov $600, 0

mov $601, AUX_s1_size
L20:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L20, $602
mov AUX_s1_size, $601
jump L12
L14:
// head
mov $500, &AUX_s1
mov $7, $500[0]
mov $700, soma_s1
mov $701, $7
add $8, $701, $700
mov soma_s1, $8
jump L15
L13:
brnz L14, $5
mov $700, n_s1
inttofl $700, $700
div $9, soma_s1, $700
div $10, 1, 10
mul $11, 10, $10
mov $700, $11
inttofl $700, $700
sub $12, $9, $700
mov media1_s1, $12
mov $700, n_s1
inttofl $700, $700
div $13, soma_s1, $700
mov media2_s1, $13
// if
mov $700, media1_s1
mov $701, media2_s1
fltoint $700, $700
fltoint $701, $701
seq $14, $700, $701
not $14, $14
brz L21, $14
// out
mov $1000, 37
mov $999, 0
L22:
mov $15, &_s3
mov $15, $15[$999]
print $15
sub $1000, $1000, 1
add $999, $999, 1
brnz L22, $1000
print '\n' 
jump L23
L21:
// if
mov $700, media1_s1
mov $701, media2_s1
fltoint $700, $700
fltoint $701, $701
seq $16, $700, $701
mov $700, media1_s1
fltoint $700, $700
slt $17, $700, 5
not $17, $17
and $18, $16, $17
brz L24, $18
// out
mov $1000, 10
mov $999, 0
L25:
mov $19, &_s4
mov $19, $19[$999]
print $19
sub $1000, $1000, 1
add $999, $999, 1
brnz L25, $1000
print '\n' 
L24:
L23:
// out
print media1_s1
print '\n' 
return

main:
call _main, 0

