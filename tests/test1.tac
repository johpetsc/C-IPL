.table
int i_s0
int i_s2
int a_s2
int b_s2
char _s0[] = "Insira um valor positivo:"
char _s1[] = "Valor Fibonacci:"
char _s2[] = "Fibonacci vezes 2:"
char _s3[] = "Fibonacci dividido por 2:"
char _s4[] = "Fibonacci mais 2:"
char _s5[] = "Fibonacci menos 2:"
char _s6[] = "Fibonacci negativo:"
char _s7[] = "O valor de Fibonacci é maior que 10?"
char _s8[] = "Sim."
char _s9[] = "Não. É igual."
char _s10[] = "Não. É menor."
char _s11[] = "O valor de Fibonacci está entre 50 e 100?"
char _s12[] = "Sim."
char _s13[] = "Não. É menor que 50."
char _s14[] = "Não. É maior que 100."
char _s15[] = "Os próximos 5 valores são:"
int NIL[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int NIL_size = 0

.code
_fib:
// if
seq $0, #0, 1
brz L0, $0
return 1
jump L1
L0:
// if
seq $1, #0, 2
brz L2, $1
return 1
jump L3
L2:
sub $2, #0, 1
param $2
call _fib, 1
pop $3
sub $4, #0, 2
param $4
call _fib, 1
pop $5
add $6, $3, $5
return $6
L3:
L1:
_main:
mov i_s2, 0
// out
mov $1000, 25
mov $999, 0
L4:
mov $7, &_s0
mov $7, $7[$999]
print $7
sub $1000, $1000, 1
add $999, $999, 1
brnz L4, $1000
print '\n' 
// in
scanf $665
fltoint $665, $665
mov i_s2, $665
param i_s2
call _fib, 1
pop $8
mov a_s2, $8
// out
mov $1000, 16
mov $999, 0
L5:
mov $9, &_s1
mov $9, $9[$999]
print $9
sub $1000, $1000, 1
add $999, $999, 1
brnz L5, $1000
print '\n' 
// if
sleq $10, i_s2, 0
not $10, $10
brz L6, $10
// out
print a_s2
print '\n' 
L6:
// out
mov $1000, 18
mov $999, 0
L7:
mov $11, &_s2
mov $11, $11[$999]
print $11
sub $1000, $1000, 1
add $999, $999, 1
brnz L7, $1000
print '\n' 
mul $12, a_s2, 2
mov b_s2, $12
// out
print b_s2
print '\n' 
// out
mov $1000, 25
mov $999, 0
L8:
mov $13, &_s3
mov $13, $13[$999]
print $13
sub $1000, $1000, 1
add $999, $999, 1
brnz L8, $1000
print '\n' 
div $14, a_s2, 2
mov b_s2, $14
// out
print b_s2
print '\n' 
// out
mov $1000, 17
mov $999, 0
L9:
mov $15, &_s4
mov $15, $15[$999]
print $15
sub $1000, $1000, 1
add $999, $999, 1
brnz L9, $1000
print '\n' 
add $16, a_s2, 2
mov b_s2, $16
// out
print b_s2
print '\n' 
// out
mov $1000, 18
mov $999, 0
L10:
mov $17, &_s5
mov $17, $17[$999]
print $17
sub $1000, $1000, 1
add $999, $999, 1
brnz L10, $1000
print '\n' 
sub $18, a_s2, 2
mov b_s2, $18
// out
print b_s2
print '\n' 
// out
mov $1000, 19
mov $999, 0
L11:
mov $19, &_s6
mov $19, $19[$999]
print $19
sub $1000, $1000, 1
add $999, $999, 1
brnz L11, $1000
print '\n' 
minus $20, a_s2
mov b_s2, $20
// out
print b_s2
print '\n' 
// out
mov $1000, 37
mov $999, 0
L12:
mov $21, &_s7
mov $21, $21[$999]
print $21
sub $1000, $1000, 1
add $999, $999, 1
brnz L12, $1000
print '\n' 
// if
sleq $22, a_s2, 10
not $22, $22
brz L13, $22
// out
mov $1000, 4
mov $999, 0
L14:
mov $23, &_s8
mov $23, $23[$999]
print $23
sub $1000, $1000, 1
add $999, $999, 1
brnz L14, $1000
print '\n' 
jump L15
L13:
// if
seq $24, a_s2, 10
brz L16, $24
// out
mov $1000, 15
mov $999, 0
L17:
mov $25, &_s9
mov $25, $25[$999]
print $25
sub $1000, $1000, 1
add $999, $999, 1
brnz L17, $1000
print '\n' 
jump L18
L16:
// out
mov $1000, 15
mov $999, 0
L19:
mov $26, &_s10
mov $26, $26[$999]
print $26
sub $1000, $1000, 1
add $999, $999, 1
brnz L19, $1000
print '\n' 
L18:
L15:
// out
mov $1000, 42
mov $999, 0
L20:
mov $27, &_s11
mov $27, $27[$999]
print $27
sub $1000, $1000, 1
add $999, $999, 1
brnz L20, $1000
print '\n' 
// if
slt $28, a_s2, 50
not $28, $28
sleq $29, a_s2, 100
and $30, $28, $29
brz L21, $30
// out
mov $1000, 4
mov $999, 0
L22:
mov $31, &_s12
mov $31, $31[$999]
print $31
sub $1000, $1000, 1
add $999, $999, 1
brnz L22, $1000
print '\n' 
jump L23
L21:
// if
slt $32, a_s2, 50
brz L24, $32
// out
mov $1000, 22
mov $999, 0
L25:
mov $33, &_s13
mov $33, $33[$999]
print $33
sub $1000, $1000, 1
add $999, $999, 1
brnz L25, $1000
print '\n' 
jump L26
L24:
// out
mov $1000, 23
mov $999, 0
L27:
mov $34, &_s14
mov $34, $34[$999]
print $34
sub $1000, $1000, 1
add $999, $999, 1
brnz L27, $1000
print '\n' 
L26:
L23:
// out
mov $1000, 28
mov $999, 0
L28:
mov $35, &_s15
mov $35, $35[$999]
print $35
sub $1000, $1000, 1
add $999, $999, 1
brnz L28, $1000
print '\n' 
mov i_s2, 0
// for
L29:
slt $36, i_s2, 5
jump L30
L32:
add $37, i_s2, 1
mov i_s2, $37
jump L29
L31:
add $38, a_s2, i_s2
add $39, $38, 1
mov b_s2, $39
// out
print b_s2
print '\n' 
jump L32
L30:
brnz L31, $36
return

main:
call _main, 0

