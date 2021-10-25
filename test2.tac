.table
int i
char _s0[] = "O valor é maior que 10?"
char _s1[] = "Sim"
char _s2[] = "Não"
char _s3[] = "Os próximos 5 valores são:"
int a
int b
char _s4[] = "Este programa testa estruturas de fluxo."
char _s5[] = "Insira um valor: "

.code
_test:
mov $1000, 24
mov $999, 0
L0:
mov $0, &_s0
mov $0, $0[$999]
print $0
sub $1000, $1000, 1
add $999, $999, 1
brnz L0, $1000
print '\n' 
sleq $1, a, b
not $1, $1
jump L2
L1:
not $1, $1
mov $1000, 3
mov $999, 0
L3:
mov $2, &_s1
mov $2, $2[$999]
print $2
sub $1000, $1000, 1
add $999, $999, 1
brnz L3, $1000
print '\n' 
jump L5
L4:
mov $1000, 4
mov $999, 0
L6:
mov $3, &_s2
mov $3, $3[$999]
print $3
sub $1000, $1000, 1
add $999, $999, 1
brnz L6, $1000
print '\n' 
jump L5
L2:
brnz L1, $1
jump L4
L5:
mov $1000, 28
mov $999, 0
L7:
mov $4, &_s3
mov $4, $4[$999]
print $4
sub $1000, $1000, 1
add $999, $999, 1
brnz L7, $1000
print '\n' 
mov i, 1
L8:
slt $5, i, 5
add $6, i, 1
mov i, $6
add $7, a, 1
mov a, $7
print a
print '\n' 
brnz L8, $5
return 0
_main:
mov b, 10
mov $1000, 40
mov $999, 0
L9:
mov $8, &_s4
mov $8, $8[$999]
print $8
sub $1000, $1000, 1
add $999, $999, 1
brnz L9, $1000
print '\n' 
mov $1000, 17
mov $999, 0
L10:
mov $9, &_s5
mov $9, $9[$999]
print $9
sub $1000, $1000, 1
add $999, $999, 1
brnz L10, $1000
scani a
param a
param b
call _test, 2
return 0

main:
call _main, 0

