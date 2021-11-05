.table
int IL_s0[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int IL_s0_size = 0
float FL_s0[100] = {.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}
int FL_s0_size = 0
int i_s1
int new_s1[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int new_s1_size = 0
int AUXL_s1[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int AUXL_s1_size = 0
int elem_s2
char _s0[] = "Insira um elemento da lista: "
char _s1[] = "A lista inserida é: "
char _s2[] = " "
char _s3[] = " "
int n_s8
int AUXL_s8[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int AUXL_s8_size = 0
char _s4[] = "Insira o tamanho da lista: "
char _s5[] = "Somando 10 em cada elemento da lista: "
char _s6[] = " "
char _s7[] = " "
char _s8[] = "Multiplicando por 3 cada elemento da lista: "
char _s9[] = " "
char _s10[] = " "
char _s11[] = "Dividindo por 2 cada elemento da lista: "
char _s12[] = " "
char _s13[] = " "
char _s14[] = "Filtrando os elementos menores que 20: "
int n_s12
char _s15[] = " "
char _s16[] = " "
char _s17[] = "A nova lista tem "
char _s18[] = " elementos."
char _s19[] = "A nova lista não possui elementos."
int NIL[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int NIL_size = 0

.code
_lista:
minus $0, 435.7
mov $700, $0
fltoint $700, $700
mov i_s1, $700
mov $400, &new_s1
mov $500, &NIL
mov $600, 0

mov $601, NIL_size
L0:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L0, $602
mov new_s1_size, $601
mov i_s1, 0
// for
L1:
slt $1, i_s1, #0
jump L2
L4:
add $2, i_s1, 1
mov i_s1, $2
jump L1
L3:
// out
mov $1000, 29
mov $999, 0
L5:
mov $3, &_s0
mov $3, $3[$999]
print $3
sub $1000, $1000, 1
add $999, $999, 1
brnz L5, $1000
print '\n' 
// in
scanf $665
fltoint $665, $665
mov elem_s2, $665
mov $500, &new_s1
mov $601, new_s1_size
brz L7, $601
sub $602, $601, 1
L6:
mov $604, $500[$602]
mov $500[$601], $604
sub $602, $602, 1
sub $601, $601, 1
brnz L6, $601
L7:
mov $500[0], elem_s2
add new_s1_size, new_s1_size, 1
mov $400, &new_s1
mov $500, &new_s1
mov $600, 0

mov $601, new_s1_size
L8:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L8, $602
mov new_s1_size, $601
jump L4
L2:
brnz L3, $1
// out
mov $1000, 21
mov $999, 0
L9:
mov $4, &_s1
mov $4, $4[$999]
print $4
sub $1000, $1000, 1
add $999, $999, 1
brnz L9, $1000
print '\n' 
mov $400, &AUXL_s1
mov $500, &new_s1
mov $600, 0

mov $601, new_s1_size
L10:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L10, $602
mov AUXL_s1_size, $601
// for
L11:
mov $400, &AUXL_s1
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, AUXL_s1_size
mov $5, 0
sub $603, $601, $602
brnz L15, $603
mov $5, 1
L16:
mov $700, $500[$600]
mov $701, $400[$600]
seq $5, $701, $700
brz L15, $5
sub $602, $601, $600
add $600, $600, 1
brnz L16, $602
L15:
not $5, $5
jump L12
L14:
// tail
mov $500, &AUXL_s1
mov $600, 0
mov $605, 1
mov $601, AUXL_s1_size
brz L17, AUXL_s1_size
L18:
mov $603, $500[$605]
mov $500[$600], $603
add $600, $600, 1
add $605, $605, 1
sub $602, $601, $600
brnz L18, $602
sub AUXL_s1_size, AUXL_s1_size, 1
L17:
mov $400, &AUXL_s1
mov $500, &AUXL_s1
mov $600, 0

mov $601, AUXL_s1_size
L19:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L19, $602
mov AUXL_s1_size, $601
jump L11
L13:
// head
mov $500, &AUXL_s1
mov $7, $500[0]
// out
print $7
// out
mov $1000, 1
mov $999, 0
L20:
mov $8, &_s2
mov $8, $8[$999]
print $8
sub $1000, $1000, 1
add $999, $999, 1
brnz L20, $1000
jump L14
L12:
brnz L13, $5
// out
mov $1000, 1
mov $999, 0
L21:
mov $9, &_s3
mov $9, $9[$999]
print $9
sub $1000, $1000, 1
add $999, $999, 1
brnz L21, $1000
print '\n' 
return new_s1
_sum:
add $10, #0, 10
return $10
_mul:
mul $11, #0, 3
return $11
_div:
div $12, #0, 2
return $12
_le_20:
slt $13, #0, 20
return $13
_main:
// out
mov $1000, 27
mov $999, 0
L22:
mov $14, &_s4
mov $14, $14[$999]
print $14
sub $1000, $1000, 1
add $999, $999, 1
brnz L22, $1000
print '\n' 
// in
scanf $665
fltoint $665, $665
mov n_s8, $665
param n_s8
call _lista, 1
mov $400, &IL_s0
mov $500, &new_s1
mov $600, 0

mov $601, new_s1_size
L23:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L23, $602
mov IL_s0_size, $601
// map
mov $500, &IL_s0
mov $600, 0
mov $601, IL_s0_size
L24:
mov $603, $500[$600]
param $603
call _sum, 1
pop $605
mov $500[$600], $605
add $600, $600, 1
sub $602, $601, $600
brnz L24, $602
mov $400, &IL_s0
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L25:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L25, $602
mov IL_s0_size, $601
// out
mov $1000, 38
mov $999, 0
L26:
mov $15, &_s5
mov $15, $15[$999]
print $15
sub $1000, $1000, 1
add $999, $999, 1
brnz L26, $1000
print '\n' 
mov $400, &AUXL_s8
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L27:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L27, $602
mov AUXL_s8_size, $601
// for
L28:
mov $400, &AUXL_s8
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, AUXL_s8_size
mov $16, 0
sub $603, $601, $602
brnz L32, $603
mov $16, 1
L33:
mov $700, $500[$600]
mov $701, $400[$600]
seq $16, $701, $700
brz L32, $16
sub $602, $601, $600
add $600, $600, 1
brnz L33, $602
L32:
not $16, $16
jump L29
L31:
// tail
mov $500, &AUXL_s8
mov $600, 0
mov $605, 1
mov $601, AUXL_s8_size
brz L34, AUXL_s8_size
L35:
mov $603, $500[$605]
mov $500[$600], $603
add $600, $600, 1
add $605, $605, 1
sub $602, $601, $600
brnz L35, $602
sub AUXL_s8_size, AUXL_s8_size, 1
L34:
mov $400, &AUXL_s8
mov $500, &AUXL_s8
mov $600, 0

mov $601, AUXL_s8_size
L36:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L36, $602
mov AUXL_s8_size, $601
jump L28
L30:
// head
mov $500, &AUXL_s8
mov $18, $500[0]
// out
print $18
// out
mov $1000, 1
mov $999, 0
L37:
mov $19, &_s6
mov $19, $19[$999]
print $19
sub $1000, $1000, 1
add $999, $999, 1
brnz L37, $1000
jump L31
L29:
brnz L30, $16
// out
mov $1000, 1
mov $999, 0
L38:
mov $20, &_s7
mov $20, $20[$999]
print $20
sub $1000, $1000, 1
add $999, $999, 1
brnz L38, $1000
print '\n' 
// map
mov $500, &IL_s0
mov $600, 0
mov $601, IL_s0_size
L39:
mov $603, $500[$600]
param $603
call _mul, 1
pop $605
mov $500[$600], $605
add $600, $600, 1
sub $602, $601, $600
brnz L39, $602
mov $400, &IL_s0
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L40:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L40, $602
mov IL_s0_size, $601
// out
mov $1000, 44
mov $999, 0
L41:
mov $21, &_s8
mov $21, $21[$999]
print $21
sub $1000, $1000, 1
add $999, $999, 1
brnz L41, $1000
print '\n' 
mov $400, &AUXL_s8
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L42:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L42, $602
mov AUXL_s8_size, $601
// for
L43:
mov $400, &AUXL_s8
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, AUXL_s8_size
mov $22, 0
sub $603, $601, $602
brnz L47, $603
mov $22, 1
L48:
mov $700, $500[$600]
mov $701, $400[$600]
seq $22, $701, $700
brz L47, $22
sub $602, $601, $600
add $600, $600, 1
brnz L48, $602
L47:
not $22, $22
jump L44
L46:
// tail
mov $500, &AUXL_s8
mov $600, 0
mov $605, 1
mov $601, AUXL_s8_size
brz L49, AUXL_s8_size
L50:
mov $603, $500[$605]
mov $500[$600], $603
add $600, $600, 1
add $605, $605, 1
sub $602, $601, $600
brnz L50, $602
sub AUXL_s8_size, AUXL_s8_size, 1
L49:
mov $400, &AUXL_s8
mov $500, &AUXL_s8
mov $600, 0

mov $601, AUXL_s8_size
L51:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L51, $602
mov AUXL_s8_size, $601
jump L43
L45:
// head
mov $500, &AUXL_s8
mov $24, $500[0]
// out
print $24
// out
mov $1000, 1
mov $999, 0
L52:
mov $25, &_s9
mov $25, $25[$999]
print $25
sub $1000, $1000, 1
add $999, $999, 1
brnz L52, $1000
jump L46
L44:
brnz L45, $22
// out
mov $1000, 1
mov $999, 0
L53:
mov $26, &_s10
mov $26, $26[$999]
print $26
sub $1000, $1000, 1
add $999, $999, 1
brnz L53, $1000
print '\n' 
// map
mov $500, &IL_s0
mov $600, 0
mov $601, IL_s0_size
L54:
mov $603, $500[$600]
param $603
call _div, 1
pop $605
mov $500[$600], $605
add $600, $600, 1
sub $602, $601, $600
brnz L54, $602
mov $400, &IL_s0
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L55:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L55, $602
mov IL_s0_size, $601
// out
mov $1000, 40
mov $999, 0
L56:
mov $27, &_s11
mov $27, $27[$999]
print $27
sub $1000, $1000, 1
add $999, $999, 1
brnz L56, $1000
print '\n' 
mov $400, &AUXL_s8
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L57:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L57, $602
mov AUXL_s8_size, $601
// for
L58:
mov $400, &AUXL_s8
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, AUXL_s8_size
mov $28, 0
sub $603, $601, $602
brnz L62, $603
mov $28, 1
L63:
mov $700, $500[$600]
mov $701, $400[$600]
seq $28, $701, $700
brz L62, $28
sub $602, $601, $600
add $600, $600, 1
brnz L63, $602
L62:
not $28, $28
jump L59
L61:
// tail
mov $500, &AUXL_s8
mov $600, 0
mov $605, 1
mov $601, AUXL_s8_size
brz L64, AUXL_s8_size
L65:
mov $603, $500[$605]
mov $500[$600], $603
add $600, $600, 1
add $605, $605, 1
sub $602, $601, $600
brnz L65, $602
sub AUXL_s8_size, AUXL_s8_size, 1
L64:
mov $400, &AUXL_s8
mov $500, &AUXL_s8
mov $600, 0

mov $601, AUXL_s8_size
L66:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L66, $602
mov AUXL_s8_size, $601
jump L58
L60:
// head
mov $500, &AUXL_s8
mov $30, $500[0]
// out
print $30
// out
mov $1000, 1
mov $999, 0
L67:
mov $31, &_s12
mov $31, $31[$999]
print $31
sub $1000, $1000, 1
add $999, $999, 1
brnz L67, $1000
jump L61
L59:
brnz L60, $28
// out
mov $1000, 1
mov $999, 0
L68:
mov $32, &_s13
mov $32, $32[$999]
print $32
sub $1000, $1000, 1
add $999, $999, 1
brnz L68, $1000
print '\n' 
// out
mov $1000, 39
mov $999, 0
L69:
mov $33, &_s14
mov $33, $33[$999]
print $33
sub $1000, $1000, 1
add $999, $999, 1
brnz L69, $1000
print '\n' 
// filter
mov $500, &IL_s0
mov $600, 0
mov $601, IL_s0_size
L70:
mov $603, $500[$600]
param $603
call _le_20, 1
pop $605
brnz L72, $605
add $600, $600, 1
L73:
sub $602, $601, $600
brnz L70, $602
jump L74
L72:
mov $610, $600
add $611, $610, 1
L71:
mov $613, $500[$611]
mov $500[$610], $613
add $610, $610, 1
add $611, $611, 1
sub $612, $601, $610
brnz L71, $612
sub $601, $601, 1
sub IL_s0_size, IL_s0_size, 1
jump L73
L74:
mov $400, &IL_s0
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L75:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L75, $602
mov IL_s0_size, $601
// if
mov $400, &IL_s0
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, IL_s0_size
mov $34, 0
sub $603, $601, $602
brnz L77, $603
mov $34, 1
L78:
mov $700, $500[$600]
mov $701, $400[$600]
seq $34, $701, $700
brz L77, $34
sub $602, $601, $600
add $600, $600, 1
brnz L78, $602
L77:
not $34, $34
brz L76, $34
mov n_s12, 0
mov $400, &AUXL_s8
mov $500, &IL_s0
mov $600, 0

mov $601, IL_s0_size
L79:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L79, $602
mov AUXL_s8_size, $601
// for
L80:
mov $400, &AUXL_s8
mov $500, &NIL
mov $600, 0

mov $601, NIL_size

mov $602, AUXL_s8_size
mov $35, 0
sub $603, $601, $602
brnz L84, $603
mov $35, 1
L85:
mov $700, $500[$600]
mov $701, $400[$600]
seq $35, $701, $700
brz L84, $35
sub $602, $601, $600
add $600, $600, 1
brnz L85, $602
L84:
not $35, $35
jump L81
L83:
// tail
mov $500, &AUXL_s8
mov $600, 0
mov $605, 1
mov $601, AUXL_s8_size
brz L86, AUXL_s8_size
L87:
mov $603, $500[$605]
mov $500[$600], $603
add $600, $600, 1
add $605, $605, 1
sub $602, $601, $600
brnz L87, $602
sub AUXL_s8_size, AUXL_s8_size, 1
L86:
mov $400, &AUXL_s8
mov $500, &AUXL_s8
mov $600, 0

mov $601, AUXL_s8_size
L88:
mov $603, $500[$600]
mov $400[$600], $603
sub $602, $601, $600
add $600, $600, 1
brnz L88, $602
mov AUXL_s8_size, $601
jump L80
L82:
add $37, n_s12, 1
mov n_s12, $37
// head
mov $500, &AUXL_s8
mov $38, $500[0]
// out
print $38
// out
mov $1000, 1
mov $999, 0
L89:
mov $39, &_s15
mov $39, $39[$999]
print $39
sub $1000, $1000, 1
add $999, $999, 1
brnz L89, $1000
jump L83
L81:
brnz L82, $35
// out
mov $1000, 1
mov $999, 0
L90:
mov $40, &_s16
mov $40, $40[$999]
print $40
sub $1000, $1000, 1
add $999, $999, 1
brnz L90, $1000
print '\n' 
// out
mov $1000, 17
mov $999, 0
L91:
mov $41, &_s17
mov $41, $41[$999]
print $41
sub $1000, $1000, 1
add $999, $999, 1
brnz L91, $1000
// out
print n_s12
// out
mov $1000, 11
mov $999, 0
L92:
mov $42, &_s18
mov $42, $42[$999]
print $42
sub $1000, $1000, 1
add $999, $999, 1
brnz L92, $1000
print '\n' 
jump L93
L76:
// out
mov $1000, 35
mov $999, 0
L94:
mov $43, &_s19
mov $43, $43[$999]
print $43
sub $1000, $1000, 1
add $999, $999, 1
brnz L94, $1000
print '\n' 
L93:
return 0

main:
call _main, 0

